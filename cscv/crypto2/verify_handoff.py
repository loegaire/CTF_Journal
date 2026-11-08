"""Independent local checks; does not recover or claim an online flag."""
import sys, json
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent / 'extracted/public'))
import hw_model as hw
import plonk_engine as pe

def residuals(c, mds, rc, alphas, p):
    out = {}
    for i, (gate, lane) in pe.CIRCUIT_ROWS.items():
        qm, ql, qr, qo, qc = pe.gate_selectors(gate, lane, mds, rc[0], *alphas, p)
        a,b,cval = (c[k][i] for k in 'abc')
        r = (qm*a*b + ql*a + qr*b + qo*cval + qc) % p
        if r: out[i] = r
    return out

def zeros(c, ref):
    return [f'{k}{i}' for i in range(64) for k in 'abc' if ref[k][i] and not c[k][i]]

report = {'trials': [], 'proof_checks': [], 'sweep': []}
for trial in range(3):
    h = hw.new_session()
    pub = hw.session_public(h)
    p = int(pub['field_prime'],16)
    mds, rc = hw.session_mds(h), hw.session_round_constants(h)
    alphas = [int(pub[f'shear_alpha{i}'],16) for i in (1,2,3)]
    for x1,x2 in [(0,0),(1,2),(p-1,p-2)]:
        ref = hw.build_columns(h,x1,x2,1200,80)
        assert not residuals(ref,mds,rc,alphas,p)
        load,w = ref['a'][3],ref['b'][7]
        assert w < 2**96
        assert pe.poseidon_hash([load,w,x1,x2],rc,mds,p) == ref['hash']
        for freq in (80,95,100,112):
            c = hw.build_columns(h,x1,x2,1200,freq)
            rr = residuals(c,mds,rc,alphas,p)
            rec = {'trial':trial,'nonces':[hex(x1),hex(x2)],'freq':freq,'zeroed':zeros(c,ref),'residual_rows':list(rr)}
            report['trials'].append(rec)
            if trial==0 and x1==0:
                print(json.dumps(rec),flush=True)
                sel = pe.CircuitSelectors(mds,rc[0],*alphas,p)
                if freq==80: kzg = pe.KZGSetup(p_mod=p)
                proof = pe.build_proof(kzg,sel,c['a'],c['b'],c['c'],x1,c['hash'])
                z = int(proof['zeta'],16)
                ev = {k:int(v,16) for k,v in proof['evaluations'].items()}
                qm,ql,qr,qo,qc,qa = [pe.poly_eval(poly,z,p) for poly in (sel.q_M,sel.q_L,sel.q_R,sel.q_O,sel.q_C,sel.q_acc)]
                rem = (qm*ev['eval_a']*ev['eval_b']+ql*ev['eval_a']+qr*ev['eval_b']+qo*ev['eval_c']+qc+qa*(ev['eval_z_omega']-ev['eval_z']-ev['eval_a'])-(pow(z,64,p)-1)*ev['eval_t'])%p
                expected = 0
                for i,r in rr.items():
                    wi = pow(sel.omega,i,p)
                    li = (pow(z,64,p)-1)*wi*pow(64*(z-wi)%p,-1,p)%p
                    expected = (expected+r*li)%p
                assert rem==expected
                assert (rem==0)==(freq==80)
                report['proof_checks'].append({'freq':freq,'remainder':hex(rem),'matches_interpolated_residual':True})
    if trial==0:
        ref = hw.build_columns(h,0,0,1200,80)
        seen = set()
        for v in (1000,1100,1200,1500,2000):
            for f in range(1,134):
                c = hw.build_columns(h,0,0,v,f)
                sig = tuple(zeros(c,ref))
                if sig not in seen:
                    seen.add(sig)
                    rec = {'v':v,'f':f,'zeroed':list(sig),'residual_rows':list(residuals(c,mds,rc,alphas,p))}
                    report['sweep'].append(rec)
                    print('sweep',rec,flush=True)
        report['coefficient_bits'] = {k:int(v,16).bit_length() for k,v in pub['load_coeffs'].items()}
    hw.close_session(h)
Path('verification_results.json').write_text(json.dumps(report,indent=2)+'\n')
print('All checks passed; results in verification_results.json')

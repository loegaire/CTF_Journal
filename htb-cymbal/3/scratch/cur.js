async (page) => {
  const Q = "network.http.method = \"POST\"";
  const S = "2026-10-20T00:00:00Z", E = "2026-10-21T00:00:00Z";
  const base='https://us-chronicle.googleapis.com/v1alpha/projects/860737018067/locations/us/instances/1293bab3-6474-4d71-9136-2de211fd3610';
  let auth;
  const h = r => { const a=r.headers().authorization; if (!auth && a && r.url().includes('/instances/')) auth = a; };
  page.on('request', h);
  if (!page.url().includes('backstory')) await page.goto('https://ctf-us-15.backstory.chronicle.security/search');
  else await page.reload();
  for (let i=0;i<30 && !auth;i++) await page.waitForTimeout(500);
  page.off('request', h);
  const H={authorization:auth,'content-type':'application/json'};
  const F=async(u,o)=>page.evaluate(async([u,o])=>{const r=await fetch(u,o);return await r.text();},[u,o]);
  const t = await F(base+'/legacy:legacyFetchUdmSearchView?', {method:'POST',headers:H, body:JSON.stringify({baselineQuery:Q, baselineTimeRange:{startTime:S,endTime:E}, eventList:{maxReturnedEvents:2000}, caseInsensitive:true, returnOperationIdOnly:true})});
  const op=(t.match(/operations\/(s-udm-[0-9a-f-]+)/)||[])[1];
  if(!op) return 'NOOP '+t.slice(0,800);
  let body='';
  for(let i=0;i<25;i++){ body=await F(base+'/operations/'+op+':streamSearch?eventIndexEnd=2000&eventIndexStart=1&pageRequest=false&paginationEnabled=true',{headers:H}); if(/"complete":\s*true|"done":\s*true/.test(body)) break; await page.waitForTimeout(1500);}
  let j; try { j = JSON.parse(body); } catch(e) { return 'PARSEFAIL '+body.length+' '+body.slice(0,1500); }
  const evs=[]; const walk=o=>{ if(o&&typeof o==='object'){ if(o.udm && o.udm.metadata) {evs.push(o.udm); return;} for(const k in o) walk(o[k]); } }; walk(j);
  const pick=u=>{ const f=(o,p)=>p.split('.').reduce((a,k)=>a&&a[k],o); const keys=['metadata.eventTimestamp','metadata.eventType','metadata.productEventType','metadata.description','metadata.productName','principal.user.userid','principal.hostname','principal.ip','principal.process.commandLine','target.hostname','target.ip','target.port','target.url','target.user.userid','target.file.fullPath','target.process.commandLine','network.http.method','network.email.subject','securityResult','about','target.resource.name','target.application','additional']; const o={}; for(const k of keys){const v=f(u,k); if(v!==undefined && v!=='' ) o[k]=v;} return JSON.stringify(o); };
  if(!evs.length) return 'RAW '+body.length+' '+body.slice(0,800)+' ... '+body.slice(-1500);
  return 'N='+evs.length+'\n'+evs.map(pick).join('\n').slice(0, 20000);
}

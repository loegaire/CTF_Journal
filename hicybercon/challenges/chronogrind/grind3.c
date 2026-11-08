#include <gmp.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
extern mp_limb_t __gmpn_redc_1(mp_limb_t*, mp_limb_t*, const mp_limb_t*, mp_size_t, mp_limb_t);
typedef uint64_t u64;
static u64 n0inv;
static size_t NN; static mp_limb_t *Nbuf;
static inline void msqr(mp_limb_t*a, mp_limb_t*t){
    mpn_sqr(t,a,NN);
    t[2*NN]=0;
    mp_limb_t cy=__gmpn_redc_1(a,t,Nbuf,NN,n0inv);
    if(cy) mpn_sub_n(a,a,Nbuf,NN);
}
static void to_limbs(mp_limb_t*d,const mpz_t z,size_t n){memset(d,0,n*8);size_t zn=mpz_size(z);const mp_limb_t*zp=mpz_limbs_read(z);for(size_t i=0;i<zn&&i<n;i++)d[i]=zp[i];}
int main(int argc,char**argv){
    FILE*f=fopen("/tmp/params.txt","r");char buf[8192];
    fgets(buf,sizeof buf,f);buf[strcspn(buf,"\n")]=0;mpz_t N;mpz_init_set_str(N,buf,16);
    fgets(buf,sizeof buf,f);buf[strcspn(buf,"\n")]=0;mpz_t v;mpz_init_set_str(v,buf,16);fclose(f);
    u64 total=strtoull(argv[1],0,10),chunk=argc>2?strtoull(argv[2],0,10):0;
    NN=mpz_size(N);
    u64 x=mpz_limbs_read(N)[0],inv=1; for(int i=0;i<6;i++)inv*=2-x*inv; n0inv=(u64)0-inv;
    Nbuf=malloc(NN*8); to_limbs(Nbuf,N,NN);
    mpz_t R,tmp;mpz_init(R);mpz_init(tmp);
    mpz_set_ui(R,1);mpz_mul_2exp(R,R,64*NN);mpz_mod(R,R,N);
    mpz_mul(tmp,v,R);mpz_mod(tmp,tmp,N);
    mp_limb_t*a=malloc(NN*8),*t=malloc((2*NN+2)*8);
    to_limbs(a,tmp,NN);
    struct timespec s0;clock_gettime(CLOCK_MONOTONIC,&s0);
    for(u64 i=0;i<total;i++){
        msqr(a,t);
        if(chunk&&(i+1)%chunk==0){struct timespec b;clock_gettime(CLOCK_MONOTONIC,&b);
            double dt=(b.tv_sec-s0.tv_sec)+(b.tv_nsec-s0.tv_nsec)/1e9;
            fprintf(stderr,"iter %llu %.3f us/iter est_h=%.3f\n",i+1,dt/(i+1)*1e6,9e9*dt/(i+1)/3600.0);}
    }
    mpz_t out;mpz_init(out);mpz_import(out,NN,-1,8,0,0,a);
    mpz_invert(tmp,R,N);mpz_mul(out,out,tmp);mpz_mod(out,out,N);
    gmp_printf("RESULT=%Zx\n",out);
    return 0;
}

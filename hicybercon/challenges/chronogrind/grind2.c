#include <gmp.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef uint64_t u64;
static u64 n0inv;

static void mont_sqr(mp_limb_t *a, mp_limb_t *t, const mp_limb_t *N, size_t n){
    mpn_sqr(t, a, n);            /* 2n limbs */
    t[2*n] = 0;
    for(size_t i=0;i<n;i++){
        u64 m = (u64)(t[i] * n0inv);
        mp_limb_t cy = mpn_addmul_1(t+i, N, n, m);
        mp_limb_t *p = t+i+n;
        while(cy){ mp_limb_t s = *p + cy; cy = (s < cy); *p = s; p++; }
    }
    mp_limb_t *r = t+n;
    if(t[2*n] || mpn_cmp(r, N, n) >= 0) mpn_sub_n(r, r, N, n);
    mpn_copyi(a, r, n);
}

static void to_limbs(mp_limb_t *dst, const mpz_t z, size_t n){
    memset(dst, 0, n*sizeof(mp_limb_t));
    size_t zn = mpz_size(z);
    const mp_limb_t *zp = mpz_limbs_read(z);
    for(size_t i=0;i<zn && i<n;i++) dst[i]=zp[i];
}

int main(int argc,char**argv){
    FILE *f=fopen("/tmp/params.txt","r");
    char buf[8192];
    if(!fgets(buf,sizeof buf,f)) return 1; buf[strcspn(buf,"\n")]=0;
    mpz_t N; mpz_init_set_str(N,buf,16);
    if(!fgets(buf,sizeof buf,f)) return 1; buf[strcspn(buf,"\n")]=0;
    mpz_t v; mpz_init_set_str(v,buf,16);
    fclose(f);

    u64 total = strtoull(argv[1],0,10);
    u64 chunk = argc>2?strtoull(argv[2],0,10):0;
    const char *statefile = argc>3?argv[3]:NULL;

    size_t n = mpz_size(N);
    printf("n limbs = %zu (bits %zu)\n", n, mpz_sizeinbase(N,2));

    /* n0inv = -N^{-1} mod 2^64 */
    u64 x = mpz_limbs_read(N)[0];
    u64 inv = 1;
    for(int i=0;i<6;i++) inv *= 2 - x*inv;
    n0inv = (u64)0 - inv;

    mpz_t R, tmp; mpz_init(R); mpz_init(tmp);
    mpz_set_ui(R,1); mpz_mul_2exp(R,R,64*n); mpz_mod(R,R,N);      /* R = 2^(64n) mod N */
    mpz_mul(tmp,v,R); mpz_mod(tmp,tmp,N);                         /* a = seed*R mod N */

    mp_limb_t *a=malloc(n*sizeof(mp_limb_t));
    mp_limb_t *t=malloc((2*n+2)*sizeof(mp_limb_t));
    const mp_limb_t *Np = mpz_limbs_read(N);
    /* keep N in a stable padded buffer in case mpz reallocs */
    mp_limb_t *Nb=malloc(n*sizeof(mp_limb_t));
    to_limbs(Nb,N,n); to_limbs(a,tmp,n);

    /* quick correctness check against mpz for first 50 steps if total small */
    struct timespec s0; clock_gettime(CLOCK_MONOTONIC,&s0);
    for(u64 i=0;i<total;i++){
        mont_sqr(a,t,Nb,n);
        if(chunk && (i+1)%chunk==0){
            struct timespec b; clock_gettime(CLOCK_MONOTONIC,&b);
            double dt=(b.tv_sec-s0.tv_sec)+(b.tv_nsec-s0.tv_nsec)/1e9;
            fprintf(stderr,"iter %llu  %.3f us/iter  est_h=%.3f\n", i+1, dt/(i+1)*1e6, 9e9*dt/(i+1)/3600.0);
            if(statefile){
                mpz_t out; mpz_init(out); mpz_import(out,n,-1,sizeof(mp_limb_t),0,0,a); /* little-endian limbs */
                /* undo montgomery: out * R^{-1} mod N */
                mpz_invert(tmp,R,N); mpz_mul(out,out,tmp); mpz_mod(out,out,N);
                char*sbuf=NULL; mpz_get_str(NULL,16,out); { char*s2=mpz_get_str(NULL,16,out); FILE*sf=fopen(statefile,"w"); fprintf(sf,"%llu %s\n", i+1, s2); fclose(sf); free(s2);} (void)sbuf;
                mpz_clear(out);
            }
        }
    }

    mpz_t out; mpz_init(out); mpz_import(out,n,-1,sizeof(mp_limb_t),0,0,a);
    mpz_invert(tmp,R,N); mpz_mul(out,out,tmp); mpz_mod(out,out,N);
    gmp_printf("RESULT=%Zx\n",out);
    return 0;
}

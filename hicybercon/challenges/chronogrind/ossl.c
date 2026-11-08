#include <openssl/bn.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(int argc,char**argv){
    FILE*f=fopen("/tmp/params.txt","r"); char buf[8192];
    fgets(buf,sizeof buf,f); buf[strcspn(buf,"\n")]=0; BIGNUM*N=NULL; BN_hex2bn(&N,buf);
    fgets(buf,sizeof buf,f); buf[strcspn(buf,"\n")]=0; BIGNUM*seed=NULL; BN_hex2bn(&seed,buf);
    fclose(f);
    unsigned long total=strtoull(argv[1],0,10), chunk=argc>2?strtoull(argv[2],0,10):0;
    BN_CTX*ctx=BN_CTX_new();
    BN_MONT_CTX*mont=BN_MONT_CTX_new();
    BN_MONT_CTX_set(mont,N,ctx);
    BIGNUM*a=BN_new(); BN_to_montgomery(a,seed,mont,ctx);
    struct timespec s0; clock_gettime(CLOCK_MONOTONIC,&s0);
    for(unsigned long i=0;i<total;i++){
        BN_mod_mul_montgomery(a,a,a,mont,ctx);
        if(chunk && (i+1)%chunk==0){ struct timespec b; clock_gettime(CLOCK_MONOTONIC,&b);
            double dt=(b.tv_sec-s0.tv_sec)+(b.tv_nsec-s0.tv_nsec)/1e9;
            fprintf(stderr,"iter %lu %.3f us/iter est_h=%.3f\n",i+1,dt/(i+1)*1e6,9e9*dt/(i+1)/3600.0);}
    }
    BIGNUM*r=BN_new(); BN_from_montgomery(r,a,mont,ctx);
    char*hex=BN_bn2hex(r); printf("RESULT=%s\n",hex);
    return 0;
}

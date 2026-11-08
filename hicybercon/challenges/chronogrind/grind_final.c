#include <openssl/bn.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(int argc,char**argv){
    FILE*f=fopen("/tmp/params.txt","r"); char buf[16384];
    fgets(buf,sizeof buf,f); buf[strcspn(buf,"\n")]=0; BIGNUM*N=NULL; BN_hex2bn(&N,buf);
    fgets(buf,sizeof buf,f); buf[strcspn(buf,"\n")]=0; BIGNUM*seed=NULL; BN_hex2bn(&seed,buf);
    fclose(f);
    unsigned long total=strtoull(argv[1],0,10);
    unsigned long chunk=strtoull(argv[2],0,10);
    const char*state=argv[3];
    BN_CTX*ctx=BN_CTX_new();
    BN_MONT_CTX*mont=BN_MONT_CTX_new();
    BN_MONT_CTX_set(mont,N,ctx);
    BIGNUM*a=BN_new();
    unsigned long start=0;
    FILE*sf=fopen(state,"r");
    if(sf){ char h[16384]; if(fscanf(sf,"%lu %16383s",&start,h)==2){ BN_hex2bn(&a,h); fprintf(stderr,"resumed at %lu\n",start);} fclose(sf);}
    if(start==0) BN_to_montgomery(a,seed,mont,ctx);
    struct timespec s0; clock_gettime(CLOCK_MONOTONIC,&s0);
    for(unsigned long i=start;i<total;i++){
        BN_mod_mul_montgomery(a,a,a,mont,ctx);
        if(chunk && (i+1)%chunk==0){
            struct timespec b; clock_gettime(CLOCK_MONOTONIC,&b);
            double dt=(b.tv_sec-s0.tv_sec)+(b.tv_nsec-s0.tv_nsec)/1e9;
            double rate=(i+1-start)/dt;
            fprintf(stderr,"iter %lu/%lu  %.3f us/iter  done%%=%.2f  eta_h=%.3f\n", i+1,total, dt/((i+1-start))*1e6, 100.0*(i+1)/total, (total-(i+1))/rate/3600.0);
            fflush(stderr);
            char*s2=BN_bn2hex(a); FILE*w=fopen(state,"w"); fprintf(w,"%lu %s\n",i+1,s2); fclose(w); OPENSSL_free(s2);
        }
    }
    BIGNUM*r=BN_new(); BN_from_montgomery(r,a,mont,ctx);
    char*hex=BN_bn2hex(r); printf("RESULT=%s\n",hex);
    return 0;
}

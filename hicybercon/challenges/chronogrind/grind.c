#include <gmp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char**argv){
    FILE*f=fopen("/tmp/params.txt","r");
    char buf[8192];
    if(!fgets(buf,sizeof buf,f)) return 1; buf[strcspn(buf,"\n")]=0;
    mpz_t N; mpz_init_set_str(N,buf,16);
    if(!fgets(buf,sizeof buf,f)) return 1; buf[strcspn(buf,"\n")]=0;
    mpz_t v; mpz_init_set_str(v,buf,16);
    fclose(f);
    unsigned long long total = strtoull(argv[1],0,10);
    unsigned long long chunk = strtoull(argv[2],0,10);
    mpz_t t; mpz_init(t);
    struct timespec a,b; clock_gettime(CLOCK_MONOTONIC,&a);
    for(unsigned long long i=0;i<total;i++){
        mpz_mul(t,v,v);
        mpz_mod(v,t,N);
        if(chunk && (i+1)%chunk==0){
            clock_gettime(CLOCK_MONOTONIC,&b);
            double dt=(b.tv_sec-a.tv_sec)+(b.tv_nsec-a.tv_nsec)/1e9;
            fprintf(stderr,"%llu  %.3f us/iter  est_h9e9=%.3f\n", i+1, dt/(i+1)*1e6, 9e9*dt/(i+1)/3600.0);
        }
    }
    gmp_printf("v=%Zx\n",v);
    return 0;
}

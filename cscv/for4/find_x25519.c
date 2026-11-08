#include <openssl/evp.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/err.h>
#include <openssl/provider.h>
int main(int argc,char**argv){OSSL_PROVIDER_load(NULL,"default");EVP_set_default_properties(NULL,"");unsigned char target[32]={0x6a,0x23,0x90,0x23,0x8b,0x9d,0xb6,0xc6,0xe2,0x6e,0xbf,0xe6,0x86,0xc9,0x80,0xb7,0x42,0x76,0x05,0x64,0x86,0xc0,0x10,0x9c,0xd0,0x5c,0xa4,0x77,0x5f,0xf4,0xde,0x76};
unsigned char zero[32]={0},test[32];size_t testlen=32;EVP_PKEY*tkey=EVP_PKEY_new_raw_private_key(EVP_PKEY_X25519,0,zero,32);if(!tkey||EVP_PKEY_get_raw_public_key(tkey,test,&testlen)!=1){ERR_print_errors_fp(stderr);return 2;}EVP_PKEY_free(tkey);fprintf(stderr,"Self-test public: ");for(int j=0;j<32;j++)fprintf(stderr,"%02x",test[j]);fprintf(stderr,"\n");
for(int a=1;a<argc;a++){FILE*f=fopen(argv[a],"rb");if(!f)continue;fseek(f,0,SEEK_END);long n=ftell(f);rewind(f);unsigned char*b=malloc(n);fread(b,1,n,f);fclose(f);long count=0;
for(long i=0;i+32<=n;i+=8){unsigned char*p=b+i;if((p[0]&7)||(p[31]&0xc0)!=0x40)continue;int z=0;for(int j=0;j<32;j++)if(p[j]==0)z++;if(z>3)continue;count++;unsigned char pub[32];size_t len=32;EVP_PKEY*k=EVP_PKEY_new_raw_private_key(EVP_PKEY_X25519,0,p,32);if(!k)continue;EVP_PKEY_get_raw_public_key(k,pub,&len);EVP_PKEY_free(k);if(!memcmp(pub,target,32)){printf("FOUND %s %ld ",argv[a],i);for(int j=0;j<32;j++)printf("%02x",p[j]);puts("");fflush(stdout);}}
fprintf(stderr,"%s candidates=%ld\n",argv[a],count);free(b);}return 0;}

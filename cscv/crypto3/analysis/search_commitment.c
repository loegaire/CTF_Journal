#include <openssl/sha.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
static unsigned char blocks[6][16][34], target[32];
static int variants[6];
static int search(SHA256_CTX *ctx,int slot){
 for(int v=0;v<16;v++){
  SHA256_CTX next=*ctx; SHA256_Update(&next,blocks[slot][v],34);variants[slot]=v;
  if(slot==5){unsigned char out[32];SHA256_Final(out,&next);if(!memcmp(out,target,32))return 1;}
  else if(search(&next,slot+1))return 1;
 }
 return 0;
}
int main(int argc,char**argv){
 if(argc!=2)return 2;FILE*f=fopen(argv[1],"rb");if(!f)return 2;
 unsigned char seed[32];if(fread(seed,1,32,f)!=32||fread(target,1,32,f)!=32||fread(blocks,1,sizeof(blocks),f)!=sizeof(blocks))return 2;
 SHA256_CTX ctx;SHA256_Init(&ctx);char domain[]="residuegate-six-way-logit-commitment-v1";SHA256_Update(&ctx,domain,sizeof(domain));SHA256_Update(&ctx,seed,32);
 if(search(&ctx,0)){for(int i=0;i<6;i++)printf("%d%c",variants[i],i==5?'\n':' ');return 0;}
 puts("no match");return 1;
}

#include <unistd.h>
#include <sys/syscall.h>
#include <stddef.h>
static int cmp(const unsigned char *a,const unsigned char *b,size_t n){
 int ret=0; for(size_t i=0;i<n;i++){if(a[i]!=b[i]){ret=(int)a[i]-(int)b[i];break;}}
 if(n>=2 && n<=128){int ok=1;for(size_t i=0;i<n;i++)if(a[i]<32||a[i]>126||b[i]<32||b[i]>126){ok=0;break;}
 if(ok){syscall(SYS_write,2,"CMP ",4);syscall(SYS_write,2,a,n);syscall(SYS_write,2," | ",3);syscall(SYS_write,2,b,n);syscall(SYS_write,2,"\n",1);}}
 return ret;
}
int memcmp(const void*a,const void*b,size_t n){return cmp(a,b,n);}
int bcmp(const void*a,const void*b,size_t n){return cmp(a,b,n);}

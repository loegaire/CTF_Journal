#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
uint32_t table[256],k[3];unsigned char cipher[345];
void update(unsigned char c){k[0]=(k[0]>>8)^table[(k[0]^c)&255];k[1]=(k[1]+(k[0]&255))*134775813+1;k[2]=(k[2]>>8)^table[(k[2]^(k[1]>>24))&255];}
unsigned char dec(unsigned char c){uint32_t t=k[2]|2;c^=(t*(t^1))>>8;update(c);return c;}
int check(char*p,size_t n){k[0]=0x12345678;k[1]=0x23456789;k[2]=0x34567890;for(int j=0;j<n;j++)update(p[j]);unsigned char last=0;for(int j=0;j<12;j++)last=dec(cipher[j]);if(last!=0xf2)return 0;uint32_t crc=0xffffffff;for(int j=12;j<345;j++){unsigned char c=dec(cipher[j]);crc=(crc>>8)^table[(crc^c)&255];}return (crc^0xffffffff)==0xf2072598;}
int main(){for(int i=0;i<256;i++){uint32_t c=i;for(int j=0;j<8;j++)c=(c>>1)^((c&1)?0xedb88320:0);table[i]=c;}FILE*f=fopen("mem.dmp","rb");fseek(f,27832991,SEEK_SET);fread(cipher,1,345,f);fclose(f);f=fopen("memory_strings.txt","r");char*line=0;size_t cap=0;ssize_t n;while((n=getline(&line,&cap,f))>0){char*p=strchr(line,' ');if(!p)continue;while(*p==' ')p++;n=strlen(p);if(n&&p[n-1]=='\n')n--;if(n<4||n>128)continue;if(check(p,n)){printf("FOUND %.*s\n",(int)n,p);fflush(stdout);}}}

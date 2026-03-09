
void FUN_140001d60(longlong *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((longlong)param_1 + 0x1c);
  while( true ) {
    if (cVar1 == '\0') {
      return;
    }
    WaitForSingleObject((HANDLE)param_1[0x17],0xffffffff);
    if (*(char *)((longlong)param_1 + 0x1c) == '\0') break;
    if ((*(byte *)((longlong)param_1 + 0x5a) & 1) != 0) {
      FUN_140002310(param_1,param_1[0x15],0x2000);
      waveOutWrite((HWAVEOUT)param_1[5],(LPWAVEHDR)((longlong)param_1 + 0x42),0x30);
    }
    if ((*(byte *)((longlong)param_1 + 0x8a) & 1) != 0) {
      FUN_140002310(param_1,param_1[0x16],0x2000);
      waveOutWrite((HWAVEOUT)param_1[5],(LPWAVEHDR)((longlong)param_1 + 0x72),0x30);
    }
    cVar1 = *(char *)((longlong)param_1 + 0x1c);
  }
  return;
}


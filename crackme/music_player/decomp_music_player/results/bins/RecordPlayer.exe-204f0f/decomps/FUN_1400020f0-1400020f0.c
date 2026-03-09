
ulonglong FUN_1400020f0(longlong *param_1)

{
  MMRESULT MVar1;
  BOOL BVar2;
  HANDLE dwCallback;
  undefined4 extraout_var;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *_ArgList;
  uintptr_t uVar6;
  uint uStack_20;
  undefined4 uStack_1c;
  
  _ArgList = (undefined8 *)0x0;
  uVar6 = 0;
  if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
    dwCallback = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    param_1[0x17] = (longlong)dwCallback;
    uVar3 = 0;
    if (dwCallback != (HANDLE)0x0) {
      MVar1 = waveOutOpen((LPHWAVEOUT)(param_1 + 5),0xffffffff,(LPCWAVEFORMATEX)(param_1 + 6),
                          (DWORD_PTR)dwCallback,0,0x50000);
      if (MVar1 == 0) {
        param_1[4] = 0;
        LOCK();
        *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
        UNLOCK();
        puVar5 = _ArgList;
        if ((int)param_1[3] == -1) {
          puVar5 = (undefined8 *)(ulonglong)((int)param_1[1] - 1);
        }
        param_1[2] = (longlong)puVar5;
        lVar4 = thunk_FUN_1400042c4(0x2000);
        param_1[0x15] = lVar4;
        *(undefined8 *)((longlong)param_1 + 0x4e) = 0;
        *(undefined8 *)((longlong)param_1 + 0x56) = 0;
        *(undefined8 *)((longlong)param_1 + 0x5e) = 0;
        *(undefined8 *)((longlong)param_1 + 0x66) = 0;
        *(undefined4 *)((longlong)param_1 + 0x6e) = 0;
        *(longlong *)((longlong)param_1 + 0x42) = param_1[0x15];
        *(undefined4 *)((longlong)param_1 + 0x4a) = 0x2000;
        FUN_140002310(param_1,param_1[0x15],0x2000);
        waveOutPrepareHeader((HWAVEOUT)param_1[5],(LPWAVEHDR)((longlong)param_1 + 0x42),0x30);
        waveOutWrite((HWAVEOUT)param_1[5],(LPWAVEHDR)((longlong)param_1 + 0x42),0x30);
        lVar4 = thunk_FUN_1400042c4(0x2000);
        param_1[0x16] = lVar4;
        *(undefined8 *)((longlong)param_1 + 0x7e) = 0;
        *(undefined8 *)((longlong)param_1 + 0x86) = 0;
        *(undefined8 *)((longlong)param_1 + 0x8e) = 0;
        *(undefined8 *)((longlong)param_1 + 0x96) = 0;
        *(undefined4 *)((longlong)param_1 + 0x9e) = 0;
        *(longlong *)((longlong)param_1 + 0x72) = param_1[0x16];
        *(undefined4 *)((longlong)param_1 + 0x7a) = 0x2000;
        FUN_140002310(param_1,param_1[0x16],0x2000);
        waveOutPrepareHeader((HWAVEOUT)param_1[5],(LPWAVEHDR)((longlong)param_1 + 0x72),0x30);
        waveOutWrite((HWAVEOUT)param_1[5],(LPWAVEHDR)((longlong)param_1 + 0x72),0x30);
        puVar5 = (undefined8 *)FUN_1400042c4(0x10);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = param_1;
          puVar5[1] = FUN_140001d60;
          _ArgList = puVar5;
        }
        uVar6 = _beginthreadex((void *)0x0,0,FUN_1400016c0,_ArgList,0,&uStack_20);
        if (uVar6 == 0) {
          uStack_20 = 0;
                    /* WARNING: Subroutine does not return */
          std::_Throw_Cpp_error(6);
        }
        if ((int)param_1[0x19] != 0) {
                    /* WARNING: Subroutine does not return */
          terminate();
        }
        param_1[0x18] = uVar6;
        param_1[0x19] = CONCAT44(uStack_1c,uStack_20);
        goto LAB_1400022f0;
      }
      BVar2 = CloseHandle((HANDLE)param_1[0x17]);
      uVar3 = CONCAT44(extraout_var,BVar2);
    }
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
LAB_1400022f0:
    uVar3 = CONCAT71((int7)(uVar6 >> 8),1);
  }
  return uVar3;
}


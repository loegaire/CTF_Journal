
void FUN_140001b30(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(char *)((longlong)param_1 + 0x1c) != '\0') {
    LOCK();
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
    UNLOCK();
    if ((HANDLE)param_1[0x17] != (HANDLE)0x0) {
      SetEvent((HANDLE)param_1[0x17]);
    }
    if (*(int *)(param_1 + 0x19) != 0) {
      iVar2 = _Thrd_id();
      if (*(int *)(param_1 + 0x19) == iVar2) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_Cpp_error(5);
      }
      local_18 = *(undefined4 *)(param_1 + 0x18);
      uStack_14 = *(undefined4 *)((longlong)param_1 + 0xc4);
      uStack_10 = *(undefined4 *)(param_1 + 0x19);
      uStack_c = *(undefined4 *)((longlong)param_1 + 0xcc);
      iVar2 = _Thrd_join(&local_18,0);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_Cpp_error(2);
      }
      param_1[0x18] = 0;
      param_1[0x19] = 0;
    }
    if ((HWAVEOUT)param_1[5] != (HWAVEOUT)0x0) {
      waveOutReset((HWAVEOUT)param_1[5]);
      if (param_1[0x15] != 0) {
        waveOutUnprepareHeader((HWAVEOUT)param_1[5],(LPWAVEHDR)((longlong)param_1 + 0x42),0x30);
        free((void *)param_1[0x15]);
        param_1[0x15] = 0;
      }
      if (param_1[0x16] != 0) {
        waveOutUnprepareHeader((HWAVEOUT)param_1[5],(LPWAVEHDR)((longlong)param_1 + 0x72),0x30);
        free((void *)param_1[0x16]);
        param_1[0x16] = 0;
      }
      waveOutClose((HWAVEOUT)param_1[5]);
      param_1[5] = 0;
    }
    if ((HANDLE)param_1[0x17] != (HANDLE)0x0) {
      CloseHandle((HANDLE)param_1[0x17]);
      param_1[0x17] = 0;
    }
    param_1[4] = 0;
  }
  free((void *)*param_1);
  _guard_check_icall();
  FUN_140002ad0(param_1 + 0x27);
  FUN_1400019e0(param_1 + 0x22);
  plVar1 = (longlong *)param_1[0x21];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x1a);
    param_1[0x21] = 0;
  }
  if (*(int *)(param_1 + 0x19) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}


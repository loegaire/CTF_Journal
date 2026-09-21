
void FUN_1400027a0(longlong param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    LOCK();
    *(undefined1 *)(param_1 + 0x1c) = 0;
    UNLOCK();
    if (*(HANDLE *)(param_1 + 0xb8) != (HANDLE)0x0) {
      SetEvent(*(HANDLE *)(param_1 + 0xb8));
    }
    if (*(int *)(param_1 + 200) != 0) {
      iVar1 = _Thrd_id();
      if (*(int *)(param_1 + 200) == iVar1) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_Cpp_error(5);
      }
      local_18 = *(undefined4 *)(param_1 + 0xc0);
      uStack_14 = *(undefined4 *)(param_1 + 0xc4);
      uStack_10 = *(undefined4 *)(param_1 + 200);
      uStack_c = *(undefined4 *)(param_1 + 0xcc);
      iVar1 = _Thrd_join(&local_18,0);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_Cpp_error(2);
      }
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
    }
    if (*(HWAVEOUT *)(param_1 + 0x28) != (HWAVEOUT)0x0) {
      waveOutReset(*(HWAVEOUT *)(param_1 + 0x28));
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        waveOutUnprepareHeader(*(HWAVEOUT *)(param_1 + 0x28),(LPWAVEHDR)(param_1 + 0x42),0x30);
        free(*(void **)(param_1 + 0xa8));
        *(undefined8 *)(param_1 + 0xa8) = 0;
      }
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        waveOutUnprepareHeader(*(HWAVEOUT *)(param_1 + 0x28),(LPWAVEHDR)(param_1 + 0x72),0x30);
        free(*(void **)(param_1 + 0xb0));
        *(undefined8 *)(param_1 + 0xb0) = 0;
      }
      waveOutClose(*(HWAVEOUT *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    if (*(HANDLE *)(param_1 + 0xb8) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_1 + 0xb8));
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


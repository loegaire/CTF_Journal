
void FUN_140003a60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar1 + 0x68) == 0) {
    if ((longlong *)(lVar1 + 0x58) != param_2) {
      plVar2 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        plVar2 = (longlong *)*param_2;
      }
      FUN_140003c20((longlong *)(lVar1 + 0x58),plVar2,param_2[2]);
    }
                    /* WARNING: Could not recover jumptable at 0x000140003aa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    PostMessageW(*(undefined8 *)(lVar1 + 0x10),0x8001,0,0);
    return;
  }
  return;
}


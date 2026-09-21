
void FUN_1400042c4(size_t param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  
  do {
    pvVar3 = malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return;
    }
    iVar2 = _callnewh(param_1);
  } while (iVar2 != 0);
  if (param_1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140002ab0();
  }
  FUN_14000479c();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


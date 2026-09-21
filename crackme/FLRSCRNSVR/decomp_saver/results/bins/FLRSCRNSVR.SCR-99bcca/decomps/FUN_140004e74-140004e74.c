
undefined8 FUN_140004e74(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  piVar2 = (int *)*param_1;
  if ((*piVar2 == -0x1f928c9d) && (piVar2[6] == 4)) {
    iVar1 = piVar2[8];
    if ((iVar1 == 0x19930520) || ((iVar1 + 0xe66cfadfU < 2 || (iVar1 == 0x1994000)))) {
      puVar4 = (undefined8 *)__current_exception();
      *puVar4 = piVar2;
      uVar3 = param_1[1];
      puVar4 = (undefined8 *)__current_exception_context();
      *puVar4 = uVar3;
                    /* WARNING: Subroutine does not return */
      terminate();
    }
  }
  return 0;
}


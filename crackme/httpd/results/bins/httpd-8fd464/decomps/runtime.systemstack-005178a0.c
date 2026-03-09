
void runtime_systemstack(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long extraout_RDX;
  long in_FS_OFFSET;
  undefined8 *in_stack_00000008;
  
  lVar1 = *(long *)(in_FS_OFFSET + -8);
  plVar2 = *(long **)(lVar1 + 0x30);
  if ((lVar1 != plVar2[10]) && (lVar1 != *plVar2)) {
    if (lVar1 == plVar2[0x19]) {
      gosave_systemstack_switch();
      *(long *)(in_FS_OFFSET + -8) = extraout_RDX;
      pcVar3 = (code *)*in_stack_00000008;
      *(undefined8 *)(*(long *)(extraout_RDX + 0x38) + -8) = 0x5178e9;
      (*pcVar3)(pcVar3,param_2,in_stack_00000008);
      lVar1 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 200);
      *(long *)(in_FS_OFFSET + -8) = lVar1;
      *(undefined8 *)(lVar1 + 0x38) = 0;
      return;
    }
    runtime_badsystemstack();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00517919. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_00000008)((code *)*in_stack_00000008,param_2,in_stack_00000008);
  return;
}


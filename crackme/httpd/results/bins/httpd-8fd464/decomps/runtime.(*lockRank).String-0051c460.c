
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*lockRank).String(string ~r0) */

string runtime___lockRank__String(void)

{
  long *plVar1;
  ulong uVar2;
  uint8 *puVar3;
  int unaff_RBX;
  long in_FS_OFFSET;
  string sVar4;
  ulong *in_stack_00000008;
  undefined1 auStack_18 [16];
  
                    /* Unresolved local var: runtime.lockRank rank@[???] */
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if (plVar1 != (long *)0x0) goto LAB_0051c4fa;
  while (in_stack_00000008 == (ulong *)0x0) {
    runtime_panicwrap();
LAB_0051c4fa:
    if ((ulong **)*plVar1 == &stack0x00000008) {
      *plVar1 = (long)auStack_18;
    }
  }
  uVar2 = *in_stack_00000008;
  if (uVar2 == 0) {
    puVar3 = &DAT_00000007;
  }
  else if (uVar2 == 1000) {
    puVar3 = &DAT_00000004;
  }
  else {
    if ((ulong)runtime_lockNames.len <= uVar2) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    puVar3 = (uint8 *)runtime_lockNames.array[uVar2].len;
  }
  sVar4.len = unaff_RBX;
  sVar4.str = puVar3;
  return sVar4;
}



void runtime_asmcgocall(void)

{
  long *plVar1;
  undefined4 uVar2;
  code *extraout_RAX;
  long extraout_RDX;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  code *in_stack_00000008;
  undefined8 in_stack_00000010;
  
  if (*(long *)(in_FS_OFFSET + -8) != 0) {
    plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x30);
    lVar5 = *(long *)(in_FS_OFFSET + -8);
    if ((*plVar1 != lVar5) && (plVar1[10] != lVar5)) {
      lVar4 = *plVar1;
      gosave_systemstack_switch();
      *(long *)(in_FS_OFFSET + -8) = lVar4;
      uVar3 = *(long *)(lVar4 + 0x38) - 0x40U & 0xfffffffffffffff0;
      *(long *)(uVar3 + 0x30) = lVar5;
      *(long *)(uVar3 + 0x28) = *(long *)(lVar5 + 8) - extraout_RDX;
      *(undefined8 *)(uVar3 - 8) = 0x519650;
      uVar2 = (*extraout_RAX)(in_stack_00000010);
      lVar5 = *(long *)(*(long *)(uVar3 + 0x30) + 8);
      lVar4 = *(long *)(uVar3 + 0x28);
      *(long *)(in_FS_OFFSET + -8) = *(long *)(uVar3 + 0x30);
      *(undefined4 *)((lVar5 - lVar4) + 0x18) = uVar2;
      return;
    }
  }
  (*in_stack_00000008)(in_stack_00000010);
  return;
}


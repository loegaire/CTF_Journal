
/* WARNING: Unknown calling convention */

void runtime_traceGoSysBlock(runtime_p *pp)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int unaff_RBX;
  int in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  __uint64 args;
  runtime_p *pp_spill;
  
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.puintptr oldp@[???]
                       Unresolved local var: runtime.m * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg0(RAX)] */
  lVar3 = *(long *)(in_FS_OFFSET + -8);
  piVar1 = (int *)(*(long *)(lVar3 + 0x30) + 0x110);
  *piVar1 = *piVar1 + 1;
  lVar3 = *(long *)(lVar3 + 0x30);
  uVar4 = *(undefined8 *)(lVar3 + 0xd8);
  *(runtime_p **)(lVar3 + 0xd8) = pp_spill;
  args.len = in_RDI;
  args.array = (uint64 *)lVar3;
  args.cap = in_RSI;
  runtime_traceEvent((uint8)uVar4,unaff_RBX,args);
  *(undefined8 *)(lVar3 + 0xd8) = uVar4;
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar5 = *(long *)(in_FS_OFFSET + -8);
  iVar2 = *(int *)(lVar3 + 0x110);
  *(int *)(lVar3 + 0x110) = iVar2 + -1;
  if ((iVar2 == 1) && (*(char *)(lVar5 + 0xb1) != '\0')) {
    *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffade;
  }
  return;
}


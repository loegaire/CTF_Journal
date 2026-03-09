
/* WARNING: Unknown calling convention */

void runtime_gopark(func__runtime_g__unsafe_Pointer__bool **unlockf,void *lock,
                   runtime_waitReason reason,uint8 traceEv,int traceskip)

{
  int *piVar1;
  int iVar2;
  long extraout_RAX;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  string s;
  func__runtime_g__unsafe_Pointer__bool **unlockf_spill;
  void *lock_spill;
  runtime_waitReason reason_spill;
  uint8 traceEv_spill;
  int traceskip_spill;
  
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: uint32 status@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg0(RAX)] */
  lVar4 = *(long *)(in_FS_OFFSET + -8);
  piVar1 = (int *)(*(long *)(lVar4 + 0x30) + 0x110);
  *piVar1 = *piVar1 + 1;
  lVar4 = *(long *)(lVar4 + 0x30);
  lVar3 = *(long *)(lVar4 + 200);
  if ((*(int *)(lVar3 + 0x90) != 2) && (*(int *)(lVar3 + 0x90) != 0x1002)) {
    s.len = (int)lock;
    s.str = &DAT_0029bf96;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    *(void **)(lVar4 + 0x290) = lock_spill;
    *(func__runtime_g__unsafe_Pointer__bool ***)(lVar4 + 0x288) = unlockf_spill;
  }
  else {
    runtime_gcWriteBarrierDX();
    runtime_gcWriteBarrierDX();
    lVar3 = extraout_RAX;
  }
  *(runtime_waitReason *)(lVar3 + 0xb0) = reason_spill;
  *(uint8 *)(lVar4 + 0x298) = traceEv_spill;
  *(int *)(lVar4 + 0x2a0) = traceskip_spill;
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar3 = *(long *)(in_FS_OFFSET + -8);
  iVar2 = *(int *)(lVar4 + 0x110);
  *(int *)(lVar4 + 0x110) = iVar2 + -1;
  if ((iVar2 == 1) && (*(char *)(lVar3 + 0xb1) != '\0')) {
    *(undefined8 *)(lVar3 + 0x10) = 0xfffffffffffffade;
  }
  runtime_mcall();
  return;
}


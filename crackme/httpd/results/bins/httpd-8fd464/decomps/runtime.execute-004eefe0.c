
/* WARNING: Unknown calling convention */

void runtime_execute(runtime_g *gp,bool inheritTime)

{
  int *piVar1;
  long extraout_RAX;
  long lVar2;
  runtime_g *prVar3;
  runtime_m *prVar4;
  undefined3 unaff_00000019;
  long in_FS_OFFSET;
  runtime_g *gp_spill;
  bool inheritTime_spill;
  
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg0(RAX)]
                       Unresolved local var: int32 hz@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar2 = *(long *)(in_FS_OFFSET + -8);
  prVar3 = gp_spill;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(runtime_g **)(*(long *)(lVar2 + 0x30) + 200) = gp_spill;
  }
  else {
    runtime_gcWriteBarrierCX();
    lVar2 = extraout_RAX;
  }
  prVar4 = *(runtime_m **)(lVar2 + 0x30);
  if (runtime_writeBarrier._0_4_ == 0) {
    prVar3->m = prVar4;
  }
  else {
    runtime_gcWriteBarrierCX();
  }
  runtime_casgstatus((runtime_g *)0x200000001,CONCAT31(unaff_00000019,inheritTime),(uint32)prVar4);
  gp_spill->waitsince = 0;
  gp_spill->preempt = false;
  gp_spill->stackguard0 = (gp_spill->stack).lo + 0x3a0;
  if (!inheritTime_spill) {
    piVar1 = (int *)(*(long *)(*(long *)(lVar2 + 0x30) + 0xd8) + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  if (*(int *)(*(long *)(lVar2 + 0x30) + 0x118) != runtime_sched.profilehz) {
    *(int32 *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0x118) = runtime_sched.profilehz;
  }
  if (runtime_trace.enabled != false) {
    if ((gp_spill->syscallsp != 0) && (gp_spill->sysblocktraced != false)) {
      runtime_traceGoSysExit((int64)gp_spill);
    }
    runtime_traceGoStart();
  }
  runtime_gogo();
  return;
}


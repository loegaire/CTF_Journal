
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_bgscavenge(void)

{
  runtime_g *prVar1;
  long extraout_RAX;
  void *unaff_RBX;
  int in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  double dVar2;
  string s;
  runtime_timer *local_50;
  ulong local_30;
  double local_28;
  code *local_20;
  ulong *puStack_18;
  double *local_10;
  
                    /* Unresolved local var: float64 scavengeEWMA@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar1 = *(runtime_g **)(in_FS_OFFSET + -8);
  if (runtime_writeBarrier._0_4_ != 0) {
    in_RDI = 0x79fec8;
    runtime_gcWriteBarrier();
    prVar1 = runtime_scavenge.g;
  }
  runtime_scavenge.g = prVar1;
  runtime_lock2(&runtime_scavenge.lock);
  runtime_scavenge.parked = true;
  runtime_newobject((runtime__type *)&DAT_00273660);
  if (runtime_writeBarrier._0_4_ == 0) {
    runtime_scavenge.timer = local_50;
    local_50->f = (func_interface_____uintptr_ **)&PTR_runtime_bgscavenge_func1_002b3770;
  }
  else {
    runtime_gcWriteBarrier();
    in_RDI = extraout_RAX + 0x18;
    runtime_gcWriteBarrier();
  }
  runtime_chansend1((runtime_hchan *)FUN_002b2e00,unaff_RBX);
  runtime_gopark((func__runtime_g__unsafe_Pointer__bool **)&PTR_runtime_parkunlock_c_002b39a0,
                 unaff_RBX,0xc0,(uint8)in_RDI,in_RSI);
  dVar2 = 0.01;
  while( true ) {
    while( true ) {
                    /* Unresolved local var: float64 adjust@[???]
                       Unresolved local var: int64 sleepTime@[???]
                       Unresolved local var: int64 slept@[???]
                       Unresolved local var: float64 fraction@[???]
                       Unresolved local var: uintptr released@[???]
                       Unresolved local var: float64 crit@[???] */
      local_30 = 0;
      local_28 = 0.0;
      local_20 = runtime_bgscavenge_func2;
      puStack_18 = &local_30;
      local_10 = &local_28;
      runtime_systemstack();
      if (local_30 != 0) break;
      runtime_lock2(&runtime_scavenge.lock);
      runtime_scavenge.parked = true;
      runtime_gopark((func__runtime_g__unsafe_Pointer__bool **)&PTR_runtime_parkunlock_c_002b39a0,
                     unaff_RBX,0xc0,(uint8)in_RDI,in_RSI);
    }
    if (local_30 < runtime_physPageSize) break;
    if (local_28 <= 0.0) {
      if (runtime_physPageSize == 0) {
                    /* WARNING: Subroutine does not return */
        runtime_panicdivide();
      }
      local_28 = (double)(local_30 / runtime_physPageSize) * 10000.0;
    }
    if (10000000.0 < local_28) {
      local_28 = 10000000.0;
    }
    runtime_scavengeSleep((long)(((dVar2 / 0.01) * local_28) / 0.01));
    local_28 = local_28 / (local_28 + 7995072.0);
    if (local_28 < 0.001) {
      local_28 = 0.001;
    }
    dVar2 = local_28 * 0.5 + dVar2 * 0.5;
  }
  s.len = (int)unaff_RBX;
  s.str = &DAT_002a85a0;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}


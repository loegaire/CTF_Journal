
/* WARNING: Unknown calling convention */

void runtime_debugCallWrap1_func1(runtime_g *gp)

{
  runtime_g *gp_00;
  long lVar1;
  undefined8 uVar2;
  uint32 unaff_EBX;
  undefined4 unaff_0000001c;
  int in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  __uint64 args;
  runtime_g *gp_spill;
  
                    /* Unresolved local var: runtime.g * callingG@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  gp_00 = (runtime_g *)gp_spill->schedlink;
  gp_spill->schedlink = 0;
  if (gp_spill->lockedm != 0) {
    gp_spill->lockedm = 0;
    gp_spill->m->lockedg = 0;
  }
  if (runtime_trace.enabled != false) {
                    /* Unresolved local var: runtime.g * _g_@[???] */
    lVar1 = *(long *)(in_FS_OFFSET + -8);
    uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x30) + 0xd8);
    *(undefined8 *)(lVar1 + 0xe0) = uVar2;
    args.len = in_RDI;
    args.array = (uint64 *)uVar2;
    args.cap = in_RSI;
    runtime_traceEvent((uint8)lVar1,CONCAT44(unaff_0000001c,unaff_EBX),args);
  }
  runtime_casgstatus(gp_spill,unaff_EBX,2);
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar1 = *(long *)(in_FS_OFFSET + -8);
  *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x30) + 200) + 0x30) = 0;
  *(undefined8 *)(*(long *)(lVar1 + 0x30) + 200) = 0;
  runtime_lock2(&runtime_sched.lock);
  gp_spill->schedlink = 0;
  if (runtime_sched.runq.tail == 0) {
    runtime_sched.runq.head = (runtime_guintptr)gp_spill;
  }
  else {
    *(runtime_g **)(runtime_sched.runq.tail + 0xa0) = gp_spill;
  }
  runtime_sched.runq.tail = (runtime_guintptr)gp_spill;
  runtime_sched.runqsize = runtime_sched.runqsize + 1;
  runtime_unlock2(&runtime_sched.lock);
  if (runtime_trace.enabled != false) {
    runtime_traceGoUnpark(gp_00,CONCAT44(unaff_0000001c,unaff_EBX));
  }
  runtime_casgstatus(gp_00,unaff_EBX,4);
  runtime_execute(gp_00,SUB41(unaff_EBX,0));
  return;
}


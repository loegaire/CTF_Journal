
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.startTheWorldWithSema(bool emitTraceEvent, int64 ~r1) */

int64 runtime_startTheWorldWithSema(bool emitTraceEvent)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  func__ *pfVar4;
  runtime_p *unaff_RBX;
  int in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  string s;
  __uint64 args;
  bool emitTraceEvent_spill;
  runtime_mutex *local_58;
  func__ **local_50;
  runtime_gList local_28;
  int64 local_20;
  func__ **local_18;
  func__ **local_10;
  
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: int32 procs@[???]
                       Unresolved local var: runtime.p * p1@[???]
                       Unresolved local var: int64 startTime@[???]
                       Unresolved local var: runtime.m * ~R0@[???]
                       Unresolved local var: int64 ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg0(RAX)] */
  lVar3 = *(long *)(in_FS_OFFSET + -8);
  piVar1 = (int *)(*(long *)(lVar3 + 0x30) + 0x110);
  *piVar1 = *piVar1 + 1;
  local_20 = *(int64 *)(lVar3 + 0x30);
  if (runtime_netpollInited != 0) {
                    /* Unresolved local var: runtime.gList list@[???] */
    runtime_netpoll(local_20);
    runtime_injectglist(&local_28);
  }
  runtime_lock2(&runtime_sched.lock);
  if (runtime_newprocs != 0) {
    runtime_newprocs = 0;
  }
  runtime_procresize(runtime_gomaxprocs);
  local_18 = local_50;
  runtime_sched.gcwaiting = 0;
  if (runtime_sched.sysmonwait != 0) {
    runtime_sched.sysmonwait = 0;
    runtime_notewakeup(&runtime_sched.sysmonnote);
  }
  local_58 = &runtime_sched.lock;
  runtime_unlock2(&runtime_sched.lock);
  while( true ) {
    while( true ) {
      if (local_18 == (func__ **)0x0) {
        runtime_nanotime1();
        if (emitTraceEvent_spill) {
          args.len = in_RDI;
          args.array = (uint64 *)0x1;
          args.cap = in_RSI;
          runtime_traceEvent((uint8)local_58,(int)unaff_RBX,args);
        }
        runtime_wakep();
                    /* Unresolved local var: runtime.g * _g_@[???] */
        lVar3 = *(long *)(in_FS_OFFSET + -8);
        iVar2 = *(int *)(local_20 + 0x110);
        *(int *)(local_20 + 0x110) = iVar2 + -1;
        if ((iVar2 == 1) && (*(char *)(lVar3 + 0xb1) != '\0')) {
          *(undefined8 *)(lVar3 + 0x10) = 0xfffffffffffffade;
        }
        return (int64)local_58;
      }
                    /* Unresolved local var: runtime.p * p@[???] */
      local_10 = (func__ **)local_18[1];
      pfVar4 = local_18[7];
      if (pfVar4 != (func__ *)0x0) break;
      local_58 = (runtime_mutex *)0x0;
      runtime_newm(local_18,unaff_RBX,(int64)local_10);
      local_18 = local_10;
    }
    local_18[7] = (func__ *)0x0;
    if (*(long *)(pfVar4 + 0xe0) != 0) break;
    *(func__ ***)(pfVar4 + 0xe0) = local_18;
    local_58 = (runtime_mutex *)(pfVar4 + 0x158);
    runtime_notewakeup((runtime_note *)local_58);
    local_18 = local_10;
  }
  s.len = (int)unaff_RBX;
  s.str = &DAT_002a5513;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}


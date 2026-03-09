
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.partialDeadline(time.Time now, time.Time deadline, int
   addrsRemaining, time.Time ~r3, error ~r4) */

multireturn_time_Time_error__conflict1
net_partialDeadline(time_Time now,time_Time deadline,int addrsRemaining)

{
  time_Location *ptVar1;
  long lVar2;
  void *pvVar3;
  runtime_itab *d;
  time_Location *ptVar4;
  long in_FS_OFFSET;
  time_Time tVar5;
  multireturn_time_Time_error__conflict1 mVar6;
  multireturn_time_Time_error__conflict1 mVar7;
  multireturn_time_Time_error__conflict1 mVar8;
  time_Time u;
  time_Time now_spill;
  time_Time deadline_spill;
  int addrsRemaining_spill;
  time_Location *local_28;
  time_Time t;
  
  ptVar4 = deadline.loc;
  d = (runtime_itab *)deadline.wall;
                    /* Unresolved local var: time.Duration timeRemaining@[???]
                       Unresolved local var: time.Duration timeout@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar2 = deadline_spill.ext;
  if ((long)deadline_spill.wall < 0) {
    d = (runtime_itab *)0xdd7b17f80;
    lVar2 = ((deadline_spill.wall << 1) >> 0x1f) + 0xdd7b17f80;
  }
  pvVar3 = (void *)deadline_spill.wall;
  if ((lVar2 == 0) &&
     (mVar6.~r4.data = (void *)(deadline_spill.wall & 0x3fffffff), pvVar3 = mVar6.~r4.data,
     (int)mVar6.~r4.data == 0)) {
    mVar6.~r3.ext = 0;
    mVar6.~r3.wall = deadline_spill.wall;
    mVar6.~r3.loc = (time_Location *)deadline_spill.ext;
    mVar6.~r4.tab = d;
    return mVar6;
  }
  tVar5.ext = lVar2;
  tVar5.wall = now_spill.wall;
  tVar5.loc = (time_Location *)now_spill.ext;
  u.ext = (int64)pvVar3;
  u.wall = (uint64)d;
  u.loc = ptVar4;
  time_Time_Sub(tVar5,u);
  if ((long)local_28 < 1) {
    mVar8.~r3.ext = lVar2;
    mVar8.~r3.wall = (uint64)net_errTimeout.tab;
    mVar8.~r3.loc = net_errTimeout.data;
    mVar8.~r4.data = pvVar3;
    mVar8.~r4.tab = d;
    return mVar8;
  }
  if (addrsRemaining_spill == 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicdivide();
  }
  ptVar4 = (time_Location *)0x77359400;
  if ((long)local_28 < 2000000000) {
    ptVar4 = local_28;
  }
  ptVar1 = (time_Location *)((long)local_28 / addrsRemaining_spill);
  if ((long)local_28 / addrsRemaining_spill < 2000000000) {
    ptVar1 = ptVar4;
  }
  t.ext = (int64)local_28;
  t.wall = (uint64)ptVar1;
  t.loc = ptVar4;
  tVar5 = time_Time_Add(t,(time_Duration)d);
  mVar7.~r3.wall = tVar5.wall;
  mVar7.~r3.ext = (int64)local_28;
  mVar7.~r3.loc = (time_Location *)now_spill.ext;
  mVar7.~r4.data = pvVar3;
  mVar7.~r4.tab = d;
  return mVar7;
}


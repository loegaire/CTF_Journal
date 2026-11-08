
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*Dialer).deadline(net.Dialer * d, context.Context ctx,
   time.Time now, time.Time earliest) */

time_Time net___Dialer__deadline(net_Dialer *d,context_Context ctx,time_Time now)

{
  undefined8 uVar1;
  uint64 d_00;
  time_Location *ptVar2;
  long in_FS_OFFSET;
  time_Time a;
  time_Time tVar3;
  time_Time tVar4;
  time_Time b;
  time_Time b_00;
  net_Dialer *d_spill;
  context_Context ctx_spill;
  time_Time now_spill;
  int64 local_60;
  time_Location *local_58;
  char local_48;
  time_Location *local_40;
  undefined8 local_38;
  time_Location *local_30;
  undefined8 local_28;
  time_Time a_00;
  
  ptVar2 = now.loc;
  d_00 = now.wall;
  tVar3.ext = ctx.tab;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((time_Location *)d_spill->Timeout == (time_Location *)0x0) {
    local_40 = (time_Location *)0x0;
    uVar1 = 0;
  }
  else {
    local_60 = now_spill.ext;
    local_58 = now_spill.loc;
    tVar3.wall = (uint64)now_spill.loc;
    tVar3.loc = (time_Location *)d_spill->Timeout;
    time_Time_Add(tVar3,d_00);
    uVar1 = local_38;
  }
  (*(code *)(ctx_spill.tab)->fun[0])();
  if (local_48 != '\0') {
    a.ext = uVar1;
    a.wall = local_60;
    a.loc = local_58;
    b.ext = (int64)ctx_spill.data;
    b.wall = d_00;
    b.loc = ptVar2;
    net_minNonzeroTime(a,b);
    local_40 = local_30;
    uVar1 = local_28;
  }
  a_00.ext = uVar1;
  a_00.wall = (d_spill->Deadline).wall;
  a_00.loc = local_40;
  b_00.ext = (d_spill->Deadline).ext;
  b_00.wall = (uint64)(d_spill->Deadline).loc;
  b_00.loc = ptVar2;
  tVar3 = net_minNonzeroTime(a_00,b_00);
  tVar4.ext = tVar3.ext;
  tVar4.wall = local_38;
  tVar4.loc = local_30;
  return tVar4;
}


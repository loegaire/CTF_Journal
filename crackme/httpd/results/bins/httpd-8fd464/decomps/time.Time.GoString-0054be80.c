
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.Time.GoString(time.Time t, string ~r0) */

string time_Time_GoString(time_Time t)

{
  undefined1 *puVar1;
  uint32 *puVar2;
  time_Location *ptVar3;
  runtime__type *prVar4;
  runtime__type *prVar5;
  runtime__type *prVar6;
  time_Location *ptVar7;
  uint uVar8;
  int in_RSI;
  undefined8 in_RDI;
  long x;
  runtime__type *prVar10;
  uint8 *puVar11;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  time_Time t_00;
  __uint8 b;
  time_Time t_01;
  time_Time t_02;
  __uint8 b_00;
  time_Time t_03;
  __uint8 b_01;
  time_Time t_04;
  __uint8 b_02;
  time_Time t_05;
  __uint8 b_03;
  time_Time t_06;
  __uint8 b_04;
  __uint8 b_05;
  runtime_slice rVar12;
  string s;
  string sVar13;
  string sVar14;
  string s_00;
  string a0;
  string a2;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  runtime_slice old_03;
  runtime_slice old_04;
  runtime_slice old_05;
  runtime_slice old_06;
  runtime_slice old_07;
  runtime_slice old_08;
  runtime_slice old_09;
  runtime_slice old_10;
  runtime_slice old_11;
  multireturn_int_time_Month_int_int_ mVar15;
  time_Location *in_stack_00000008;
  time_Location *in_stack_00000010;
  time_Location *l;
  runtime__type *local_118;
  runtime__type *local_110;
  runtime__type *local_108;
  time_Location *local_100;
  runtime__type *local_f8;
  runtime__type *local_f0;
  long local_e8;
  runtime__type *local_a8;
  undefined8 local_9e;
  undefined2 local_96;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  runtime__type *local_40;
  time_Location *local_38;
  time_Location *local_30;
  runtime__type *local_28;
  uint8 *puVar9;
  
  prVar5 = local_f8;
  t_00.ext = t.ext;
                    /* Unresolved local var: time.Month month@[???]
                       Unresolved local var: []uint8 buf@[???]
                       Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
  while (&local_a8 <= *(runtime__type ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_9e = 0x7461442e656d6974;
  local_96 = 0x2865;
  t_00.wall = (uint64)in_stack_00000008;
  t_00.loc = in_stack_00000010;
                    /* Unresolved local var: int year@[???] */
  mVar15 = time_Time_date(t_00,SUB81(in_RDI,0));
  b.len = mVar15.month;
  b.array = (uint8 *)local_108;
  b.cap = (int)&local_9e;
  time_appendInt(b,mVar15.yday,in_RSI);
  local_30 = local_100;
  t_01.ext = (int64)in_stack_00000008;
  t_01.wall = (uint64)local_f8;
  t_01.loc = local_100;
  ptVar3 = in_stack_00000010;
                    /* Unresolved local var: time.Month month@[???] */
  mVar15 = time_Time_date(t_01,SUB81(l,0));
  rVar12.cap = (time_Location *)mVar15.yday;
  b_00.len = mVar15.month;
  if ((undefined1 *)((long)&local_100[-1].cacheZone + 7U) < (undefined1 *)0xc) {
    local_a8 = (runtime__type *)((long)&local_f8->size + 7);
    if (local_f0 < local_a8) {
      rVar12.len = (int)local_a8;
      rVar12.array = &DAT_00225720;
      runtime_growslice(local_f8,rVar12,(int)local_30);
      local_30 = local_100;
    }
    *(undefined4 *)((long)&local_f8->size + (long)&local_30->name) = 0x6974202c;
    *(undefined4 *)((undefined1 *)((long)&(local_30->name).str + 3) + (long)local_f8) = 0x2e656d69;
    t_02.ext = (int64)local_30;
    t_02.wall = (uint64)local_f8;
    t_02.loc = in_stack_00000008;
    ptVar3 = in_stack_00000010;
                    /* Unresolved local var: time.Month month@[???] */
    mVar15 = time_Time_date(t_02,SUB81(l,0));
    puVar11 = (uint8 *)mVar15.yday;
    puVar9 = (uint8 *)mVar15.month;
                    /* Unresolved local var: []uint8 buf@[???]
                       Unresolved local var: int n@[???] */
    puVar1 = (undefined1 *)((long)&local_100[-1].cacheZone + 7);
    if (puVar1 < &DAT_0000000c) {
      if ((ulong)time_longMonthNames.len <= puVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      prVar6 = (runtime__type *)time_longMonthNames.array[(long)puVar1].str;
      local_e8 = time_longMonthNames.array[(long)puVar1].len;
    }
    else {
      local_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
                    /* Unresolved local var: int w@[???] */
      if (local_100 == (time_Location *)0x0) {
        uStack_88 = 0x3000000000000000;
        rVar12.cap = (time_Location *)0x13;
      }
      else {
        rVar12.cap = (time_Location *)&DAT_00000014;
        while (local_100 != (time_Location *)0x0) {
          ptVar3 = (time_Location *)((long)&rVar12.cap[-1].cacheZone + 7);
          ptVar7 = (time_Location *)((ulong)local_100 / 10);
          puVar11 = (uint8 *)((long)ptVar7 * 10);
          if ((time_Location *)0x13 < ptVar3) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          uVar8 = (int)local_100 + (int)ptVar7 * -10 + 0x30;
          puVar9 = (uint8 *)(ulong)uVar8;
          *(char *)((long)&local_96 + (long)((long)&((rVar12.cap)->name).str + 1)) = (char)uVar8;
          local_100 = ptVar7;
          rVar12.cap = ptVar3;
        }
      }
      if ((time_Location *)&DAT_00000014 < rVar12.cap) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      a0.len = (long)((long)&rVar12.cap[-1].cacheStart + 4) >> 0x3f;
      local_100 = (time_Location *)((long)&go_string__ + 2);
      local_f8 = (runtime__type *)0x1;
      sVar13.len = (int)ptVar3;
      sVar13.str = puVar11;
      a0.str = puVar9;
      a2.len = in_R9;
      a2.str = in_R8;
      runtime_concatstring3((runtime_tmpBuf *)((long)&go_string__ + 2),a0,sVar13,a2);
      prVar6 = local_f0;
    }
    prVar5 = (runtime__type *)((long)&prVar5->size + local_e8 + 7);
    rVar12.cap = local_30;
    if (local_f0 < prVar5) {
      old_11.len = (int)local_a8;
      old_11.array = prVar5;
      old_11.cap = (int)puVar11;
      local_40 = prVar6;
      runtime_growslice((runtime__type *)&DAT_00225720,old_11,(int)local_f0);
      rVar12.cap = local_100;
    }
    local_30 = rVar12.cap;
    runtime_memmove();
    ptVar3 = local_30;
  }
  else {
    b_00.array = (uint8 *)local_100;
    b_00.cap = (int)local_f0;
    time_appendInt(b_00,(int)rVar12.cap,(int)ptVar3);
    ptVar3 = local_100;
  }
  prVar6 = (runtime__type *)((long)&prVar5->size + 2);
  if (local_f0 < prVar6) {
    old.len = (int)prVar5;
    old.array = prVar6;
    old.cap = (int)rVar12.cap;
    local_a8 = prVar5;
    runtime_growslice((runtime__type *)ptVar3,old,0x225720);
    ptVar3 = local_100;
    prVar5 = local_a8;
  }
  *(undefined2 *)((long)&prVar5->size + (long)&ptVar3->name) = 0x202c;
  t_03.ext = (int64)in_stack_00000010;
  t_03.wall = (uint64)ptVar3;
  t_03.loc = in_stack_00000008;
  ptVar7 = l;
  local_30 = ptVar3;
                    /* Unresolved local var: int day@[???] */
  mVar15 = time_Time_date(t_03,SUB81(rVar12.cap,0));
  x = mVar15.yday;
  b_01.len = mVar15.month;
  local_110 = local_f8;
  b_01.array = (uint8 *)local_f8;
  b_01.cap = (int)local_f0;
  time_appendInt(b_01,x,(int)ptVar7);
  prVar5 = (runtime__type *)((long)&local_f8->size + 2);
  prVar6 = local_f8;
  if (local_f0 < prVar5) {
    local_a8 = local_f8;
    local_110 = local_f0;
    old_00.len = (int)prVar5;
    old_00.array = local_100;
    old_00.cap = x;
    runtime_growslice(local_f8,old_00,0x225720);
    prVar6 = local_a8;
  }
  local_30 = local_100;
  *(undefined2 *)((long)&prVar6->size + (long)&local_100->name) = 0x202c;
  t_04.ext = (int64)local_100;
  t_04.wall = (uint64)in_stack_00000008;
  t_04.loc = in_stack_00000010;
  ptVar3 = l;
  time_Time_abs(t_04);
  b_02.array = ((ulong)local_110 % 0x15180) * 0x48d159e26af37c05;
  local_110 = (runtime__type *)(((ulong)local_110 % 0x15180) / 0xe10);
  b_02.len = (int)local_100;
  b_02.cap = 0;
  time_appendInt(b_02,x,(int)ptVar3);
  prVar5 = (runtime__type *)((long)&local_f8->size + 2);
  prVar6 = local_f8;
  if (local_f0 < prVar5) {
    local_a8 = local_f8;
    local_110 = local_f0;
    old_01.len = (int)prVar5;
    old_01.array = local_100;
    old_01.cap = x;
    runtime_growslice(local_f8,old_01,0x225720);
    prVar6 = local_a8;
  }
  local_30 = local_100;
  *(undefined2 *)((long)&prVar6->size + (long)&local_100->name) = 0x202c;
  t_05.ext = (int64)local_100;
  t_05.wall = (uint64)in_stack_00000008;
  t_05.loc = in_stack_00000010;
  ptVar3 = l;
  time_Time_abs(t_05);
  b_03.array = (runtime__type *)
               ((long)((ulong)local_110 % 0xe10 +
                      SUB168(SEXT816(-0x7777777777777777) *
                             SEXT816((long)((ulong)local_110 % 0xe10)),8)) >> 5);
  b_03.len = (int)local_100;
  b_03.cap = 0;
  time_appendInt(b_03,x,(int)ptVar3);
  prVar5 = (runtime__type *)((long)&local_f8->size + 2);
  prVar6 = local_f8;
  local_110 = b_03.array;
  if (local_f0 < prVar5) {
    local_a8 = local_f8;
    local_110 = local_f0;
    old_02.len = (int)prVar5;
    old_02.array = local_100;
    old_02.cap = x;
    runtime_growslice(local_f8,old_02,0x225720);
    prVar6 = local_a8;
  }
  local_30 = local_100;
  *(undefined2 *)((long)&prVar6->size + (long)&local_100->name) = 0x202c;
  t_06.ext = (int64)local_100;
  t_06.wall = (uint64)in_stack_00000008;
  t_06.loc = in_stack_00000010;
  ptVar3 = l;
  time_Time_abs(t_06);
  b_04.array = ((ulong)local_110 / 0x3c) * 0x3c;
  b_04.cap = (ulong)local_110 % 0x3c;
  b_04.len = (int)local_100;
  time_appendInt(b_04,x,(int)ptVar3);
  prVar5 = (runtime__type *)((long)&local_f8->size + 2);
  prVar6 = local_f8;
  if (local_f0 < prVar5) {
    local_a8 = local_f8;
    old_03.len = (int)prVar5;
    old_03.array = local_100;
    old_03.cap = x;
    runtime_growslice(local_f8,old_03,0x225720);
    prVar6 = local_a8;
  }
  *(undefined2 *)((long)&prVar6->size + (long)&local_100->name) = 0x202c;
  local_118 = local_f0;
  b_05.cap = (runtime__type *)(long)(int)((ulong)in_stack_00000008 & 0x3fffffff);
  local_108 = (runtime__type *)0x0;
  b_05.len = (int)local_100;
  b_05.array = (uint8 *)l;
  time_appendInt(b_05,x,(ulong)in_stack_00000008 & 0x3fffffff);
  prVar5 = (runtime__type *)((long)&local_f8->size + 2);
  prVar6 = prVar5;
  local_110 = b_05.cap;
  if (local_f0 < prVar5) {
    local_118 = local_f8;
    local_110 = local_f0;
    old_04.len = (int)prVar5;
    old_04.array = local_100;
    old_04.cap = x;
    local_a8 = prVar5;
    runtime_growslice(local_f8,old_04,0x225720);
                    /* Unresolved local var: time.Location * loc@[???]
                       Unresolved local var: time.Location * ~R0@[???] */
    prVar6 = local_a8;
    local_108 = prVar5;
  }
  *(undefined2 *)((long)&local_f8->size + (long)&local_100->name) = 0x202c;
  if (l == (time_Location *)0x0) {
    l = time_UTC;
  }
  ptVar3 = local_100;
  if ((time_UTC == l) || (l == (time_Location *)0x0)) {
    prVar5 = (runtime__type *)((long)&local_f8->ptrdata + 2);
    if (local_f0 < prVar5) {
      local_110 = local_f0;
      old_09.len = (int)prVar6;
      old_09.array = local_100;
      old_09.cap = x;
      runtime_growslice((runtime__type *)&DAT_00225720,old_09,(int)prVar5);
    }
    prVar6 = (runtime__type *)0x4354552e656d6974;
    *(undefined8 *)((undefined1 *)((long)&local_f8->size + 2) + (long)local_100) =
         0x4354552e656d6974;
  }
  else if (time_Local == l) {
    prVar5 = (runtime__type *)((long)&local_f8->ptrdata + 4);
    if (local_f0 < prVar5) {
      local_110 = local_f0;
      old_05.len = (int)prVar6;
      old_05.array = local_100;
      old_05.cap = x;
      runtime_growslice((runtime__type *)&DAT_00225720,old_05,(int)prVar5);
    }
    *(undefined8 *)((undefined1 *)((long)&local_f8->size + 2) + (long)local_100) =
         0x636f4c2e656d6974;
    *(undefined2 *)((undefined1 *)((long)&local_f8->ptrdata + 2) + (long)local_100) = 0x6c61;
    prVar6 = (runtime__type *)0x636f4c2e656d6974;
  }
  else {
    puVar2 = &local_f8->hash;
    local_a8 = (runtime__type *)puVar2;
    if (local_f0 < puVar2) {
      local_110 = local_f0;
      old_06.len = (int)prVar6;
      old_06.array = local_100;
      old_06.cap = (int)puVar2;
      local_38 = l;
      runtime_growslice((runtime__type *)&DAT_00225720,old_06,(int)l);
      local_118 = prVar6;
      local_108 = (runtime__type *)puVar2;
    }
    prVar5 = local_110;
    local_30 = local_100;
    *(undefined8 *)((undefined1 *)((long)&local_f8->size + 2) + (long)local_100) =
         0x636f4c2e656d6974;
    *(undefined8 *)((long)&local_f8->ptrdata + (long)local_100) = 0x286e6f697461636f;
    s.len = (int)local_100;
    s.str = (uint8 *)local_f8;
    sVar13 = time_quote(s);
    s_00.str = (uint8 *)sVar13.len;
    s_00.len = (int)local_110;
    runtime_stringtoslicebyte((runtime_tmpBuf *)local_118,s_00);
    prVar6 = (runtime__type *)((long)&local_108->hash + (long)&local_f8->size);
    x = (long)&local_f8->size + (long)&local_108->size;
    prVar4 = local_110;
    if (local_f0 < prVar6) {
      local_28 = local_110;
      local_110 = local_f0;
      old_07.len = (int)local_a8;
      old_07.array = (void *)x;
      old_07.cap = (int)local_f0;
      runtime_growslice((runtime__type *)&DAT_00225720,old_07,(int)prVar5);
      prVar4 = local_28;
      local_30 = local_100;
    }
    prVar10 = local_f0;
    runtime_memmove();
    prVar5 = (runtime__type *)((long)&local_108->hash + (long)((long)&local_f8->size + 1));
    ptVar3 = local_30;
    if (local_f0 < prVar5) {
      local_110 = local_f0;
      old_08.len = (int)local_f0;
      old_08.array = prVar6;
      old_08.cap = (int)prVar10;
      runtime_growslice(prVar5,old_08,(int)prVar4);
      ptVar3 = local_100;
    }
    *(undefined1 *)((long)&(ptVar3->zone).array + x) = 0x29;
    prVar6 = local_f0;
  }
  prVar4 = (runtime__type *)((long)&prVar5->size + 1);
  if (local_f0 < prVar4) {
    local_110 = local_f0;
    old_10.len = (int)&DAT_00225720;
    old_10.array = ptVar3;
    old_10.cap = x;
    rVar12 = runtime_growslice(prVar4,old_10,(int)prVar5);
    prVar6 = (runtime__type *)rVar12.cap;
    prVar4 = (runtime__type *)((long)&local_f8->size + 1);
    ptVar3 = local_100;
  }
  *(undefined1 *)((long)&prVar5->size + (long)&ptVar3->name) = 0x29;
  sVar13 = runtime_slicebytetostring((runtime_tmpBuf *)prVar4,(uint8 *)ptVar3,(int)prVar6);
  sVar14.len = sVar13.len;
  sVar14.str = (uint8 *)local_110;
  return sVar14;
}


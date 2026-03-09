
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.WithDeadline(context.Context parent, time.Time d,
   context.Context ~r2, context.CancelFunc * * ~r3) */

multireturn_context_Context_context_CancelFunc______conflict
context_WithDeadline(context_Context parent,time_Time d)

{
  uint uVar1;
  runtime__type *extraout_RAX;
  runtime__type *prVar2;
  sync_Mutex *m;
  undefined8 *extraout_RAX_00;
  undefined8 extraout_RAX_01;
  runtime_itab *extraout_RAX_02;
  runtime_itab *extraout_RAX_03;
  context_CancelFunc **ppcVar3;
  undefined1 *puVar4;
  runtime__type *typ;
  time_Location *ptVar5;
  runtime_nameOff *prVar6;
  time_Location *in_R8;
  long in_FS_OFFSET;
  bool bVar7;
  context_Context parent_00;
  context_Context parent_01;
  interface___ e;
  context_canceler child;
  error err;
  time_Time t;
  time_Time t_00;
  multireturn_context_Context_context_CancelFunc______conflict mVar8;
  multireturn_context_Context_context_CancelFunc______conflict mVar9;
  multireturn_context_Context_context_CancelFunc_____ mVar10;
  multireturn_context_Context_context_CancelFunc______conflict mVar11;
  multireturn_context_Context_context_CancelFunc______conflict mVar12;
  time_Time u;
  context_Context parent_spill;
  time_Time d_spill;
  undefined **ppuStack0000000000000030;
  runtime__type *prStack0000000000000038;
  undefined8 uStack0000000000000040;
  runtime__type *local_a8;
  runtime__type *local_a0;
  runtime_itab *local_98;
  char local_90;
  char local_80;
  runtime__type local_58;
  uintptr local_28;
  uintptr uStack_20;
  sync_Mutex *local_18;
  undefined **ppuStack_10;
  
  ptVar5 = d.loc;
  prVar6 = (runtime_nameOff *)d.ext;
  ppcVar3 = (context_CancelFunc **)d.wall;
  t.ext = parent.data;
                    /* Unresolved local var: context.timerCtx * c@[???]
                       Unresolved local var: time.Duration dur@[???]
                       Unresolved local var: context.cancelCtx ~R0@[???] */
  while (&local_58.str <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_18 = (sync_Mutex *)0x0;
  ppuStack_10 = (undefined **)0x0;
  ppuStack0000000000000030 = (undefined **)0x0;
  prStack0000000000000038 = (runtime__type *)0x0;
  uStack0000000000000040 = 0;
  if (parent_spill.tab == (runtime_itab *)0x0) {
    e.data = t.ext;
    e._type = (runtime__type *)context__stmp_1;
    runtime_gopanic(e);
    runtime_deferreturn();
    mVar12.~r2.data = t.ext;
    mVar12.~r2.tab = extraout_RAX_03;
    mVar12.~r3 = ppcVar3;
    return mVar12;
  }
  (*(code *)(parent_spill.tab)->fun[0])();
  if (local_90 != '\0') {
    local_a8 = local_a0;
    t.wall = d_spill.wall;
    t.loc = (time_Location *)d_spill.ext;
    u.ext = (int64)ptVar5;
    u.wall = (uint64)prVar6;
    u.loc = in_R8;
    time_Time_Before(t,u);
    if (local_80 != '\0') {
      parent_01.data = t.ext;
      parent_01.tab = parent_spill.data;
      mVar10 = context_WithCancel(parent_01);
      mVar11.~r2.data = mVar10.ctx.data;
      mVar11.~r2.tab = local_98;
      mVar11.~r3 = (context_CancelFunc **)d_spill.ext;
      return mVar11;
    }
  }
  typ = local_a8;
  local_58.hash = 0;
  local_58.tflag = 0;
  local_58.align = 0;
  local_58.fieldAlign = 0;
  local_58.kind = 0;
  local_58.equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)0x0;
  local_58.gcdata = (uint8 *)0x0;
  local_58.str = 0;
  local_58.ptrToThis = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58.size = (uintptr)parent_spill.tab;
  local_58.ptrdata = (uintptr)parent_spill.data;
  runtime_newobject(&local_58);
  if (runtime_writeBarrier._0_4_ == 0) {
    local_a8->size = local_58.size;
    local_a8->ptrdata = local_58.ptrdata;
    local_a8->hash = local_58.hash;
    local_a8->tflag = local_58.tflag;
    local_a8->align = local_58.align;
    local_a8->fieldAlign = local_58.fieldAlign;
    local_a8->kind = local_58.kind;
    local_a8->equal = local_58.equal;
    local_a8->gcdata = local_58.gcdata;
    local_a8->str = local_58.str;
    local_a8->ptrToThis = local_58.ptrToThis;
    local_a8[1].size = local_28;
    local_a8[1].ptrdata = uStack_20;
  }
  else {
    runtime_typedmemmove(local_a8,&DAT_00255660,&local_58);
  }
  local_a8[1].equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)d_spill.wall;
  local_a8[1].gcdata = (uint8 *)d_spill.ext;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(time_Location **)&local_a8[1].str = d_spill.loc;
    prVar2 = local_a8;
  }
  else {
    prVar6 = &local_a8[1].str;
    runtime_gcWriteBarrierBX();
    prVar2 = extraout_RAX;
  }
  parent_00.data = d_spill.loc;
  parent_00.tab = (runtime_itab *)prVar2;
  child.data = prVar6;
  child.tab = (runtime_itab *)go_itab__context_timerCtx_context_canceler;
  puVar4 = go_itab__context_timerCtx_context_canceler;
  context_propagateCancel(parent_00,child);
  local_a8 = (runtime__type *)d_spill.ext;
  t_00.ext = (int64)d_spill.loc;
  t_00.wall = (uint64)d_spill.loc;
  t_00.loc = (time_Location *)puVar4;
  time_Until(t_00);
  if (0 < (long)prVar2) {
    m = (sync_Mutex *)0x0;
    LOCK();
    uVar1 = typ->hash;
    bVar7 = uVar1 == 0;
    if (bVar7) {
      typ->hash = 1;
    }
    else {
      m = (sync_Mutex *)(ulong)uVar1;
    }
    UNLOCK();
    if (!bVar7) {
      sync___Mutex__lockSlow(m);
    }
    ppuStack_10 = &PTR_sync___Mutex__Unlock_002b3aa0;
    local_18 = (sync_Mutex *)&typ->hash;
    if (typ[1].size == 0) {
      runtime_newobject((runtime__type *)&DAT_002459a0);
      *(code **)d_spill.ext = context_WithDeadline_func2;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(runtime__type **)(d_spill.ext + 8) = typ;
      }
      else {
        runtime_gcWriteBarrierCX();
        d_spill.ext = (int64)extraout_RAX_00;
      }
      time_AfterFunc(d_spill.ext,(func__ **)(ulong)bVar7);
      local_a8 = (runtime__type *)d_spill.ext;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(time_Location **)&typ[1].hash = d_spill.loc;
      }
      else {
        runtime_gcWriteBarrier();
      }
    }
    runtime_newobject((runtime__type *)&DAT_002459a0);
    *(code **)local_a8 = context_WithDeadline_func3;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(runtime__type **)((long)local_a8 + 8) = typ;
    }
    else {
      runtime_gcWriteBarrierCX();
    }
    ppuStack0000000000000030 = &go_itab__context_timerCtx_context_Context;
    sync___Mutex__Unlock(local_18);
    mVar8.~r2.data._0_1_ = bVar7;
    mVar8.~r2.tab = (runtime_itab *)extraout_RAX_01;
    mVar8.~r2.data._1_7_ = 0;
    mVar8.~r3 = (context_CancelFunc **)typ;
    return mVar8;
  }
  local_a8 = (runtime__type *)CONCAT71((int7)((ulong)d_spill.ext >> 8),1);
  err.data = prVar6;
  err.tab = context_DeadlineExceeded.data;
  context___timerCtx__cancel
            ((context_timerCtx *)context_DeadlineExceeded.tab,SUB81(d_spill.loc,0),err);
  ppuStack0000000000000030 = &go_itab__context_timerCtx_context_Context;
  prStack0000000000000038 = typ;
  runtime_newobject(typ);
  local_a8->size = (uintptr)context_WithDeadline_func1;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_a8->ptrdata = (uintptr)typ;
  }
  else {
    runtime_gcWriteBarrierCX();
    local_a8 = (runtime__type *)extraout_RAX_02;
  }
  mVar9.~r2.data = d_spill.loc;
  mVar9.~r2.tab = (runtime_itab *)local_a8;
  mVar9.~r3 = (context_CancelFunc **)typ;
  return mVar9;
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void log.(*Logger).Output(log.Logger * l, int calldepth, string s,
   error ~r2) */

error log___Logger__Output(log_Logger *l,int calldepth,string s)

{
  log_Logger *cap;
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  log_Logger *l_00;
  log_Logger *extraout_RAX;
  uint8 *extraout_RAX_00;
  log_Logger *plVar5;
  runtime_itab *extraout_RAX_01;
  uint8 *puVar6;
  log_Logger *plVar7;
  log_Logger *extraout_RDX;
  log_Logger *cap_00;
  log_Logger *plVar8;
  uint8 *puVar9;
  __uint8 *p_Var10;
  int in_R10;
  long in_FS_OFFSET;
  bool bVar11;
  bool bVar12;
  error eVar13;
  time_Time t;
  runtime_slice old;
  runtime_slice old_00;
  string file;
  log_Logger *l_spill;
  int calldepth_spill;
  string s_spill;
  uint8 *puStack0000000000000028;
  log_Logger *plStack0000000000000030;
  __uint8 *local_b8;
  undefined8 local_b0;
  uint8 *local_a8;
  log_Logger *local_a0;
  log_Logger *local_98;
  char local_90;
  uint8 *local_38;
  uint8 *local_30;
  __uint8 *local_28;
  log_Logger *local_18;
  undefined **ppuStack_10;
  
                    /* Unresolved local var: int line@[???]
                       Unresolved local var: string file@[???]
                       Unresolved local var: error err@[???] */
  while (&local_38 <= *(uint8 ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_18 = (log_Logger *)0x0;
  ppuStack_10 = (undefined **)0x0;
  puStack0000000000000028 = (uint8 *)0x0;
  plStack0000000000000030 = (log_Logger *)0x0;
  time_Now();
  uVar4 = 0;
  LOCK();
  uVar3 = (l_spill->mu).state;
  bVar11 = uVar3 == 0;
  if (bVar11) {
    (l_spill->mu).state = 1;
  }
  else {
    uVar4 = (ulong)uVar3;
  }
  UNLOCK();
  if (!bVar11) {
    sync___Mutex__lockSlow((sync_Mutex *)CONCAT71((int7)(uVar4 >> 8),bVar11));
  }
  ppuStack_10 = &PTR_sync___Mutex__Unlock_002b3aa0;
  local_18 = l_spill;
  if ((l_spill->flag & 0x18U) == 0) {
    l_00 = (log_Logger *)0x0;
    plVar8 = (log_Logger *)0x0;
    puVar6 = (uint8 *)0x0;
  }
  else {
                    /* Unresolved local var: int32 new@[???] */
    LOCK();
    iVar1 = (l_spill->mu).state;
    (l_spill->mu).state = (l_spill->mu).state + -1;
    UNLOCK();
    uVar3 = iVar1 - 1;
    if (uVar3 != 0) {
      sync___Mutex__unlockSlow((sync_Mutex *)(ulong)uVar3,(int32)local_b8);
    }
    runtime_Caller(calldepth_spill);
    uVar4 = 0;
    LOCK();
    uVar3 = (l_spill->mu).state;
    bVar11 = uVar3 == 0;
    if (bVar11) {
      (l_spill->mu).state = 1;
    }
    else {
      uVar4 = (ulong)uVar3;
    }
    UNLOCK();
    bVar12 = local_90 != '\0';
    l_00 = (log_Logger *)0x3;
    if (bVar12) {
      l_00 = local_a0;
    }
    plVar8 = (log_Logger *)0x0;
    if (bVar12) {
      plVar8 = local_98;
    }
    puVar6 = &DAT_002878ca;
    if (bVar12) {
      puVar6 = local_a8;
    }
    if (!bVar11) {
      local_38 = puVar6;
      sync___Mutex__lockSlow((sync_Mutex *)CONCAT71((int7)(uVar4 >> 8),bVar11));
      puVar6 = local_38;
    }
  }
  (l_spill->buf).len = 0;
  local_28 = &l_spill->buf;
  t.ext = (int64)plVar8;
  t.wall = local_b0;
  t.loc = (time_Location *)l_spill;
  file.len = (int)local_28;
  file.str = puVar6;
  log___Logger__formatHeader(l_00,local_b8,t,file,in_R10);
  lVar2 = (l_spill->buf).len;
  plVar5 = (log_Logger *)(lVar2 + s_spill.len);
  cap_00 = (log_Logger *)(l_spill->buf).cap;
  local_30 = (l_spill->buf).array;
  if (cap_00 < plVar5) {
    old.len = lVar2;
    old.array = plVar5;
    old.cap = (int)local_30;
    runtime_growslice((runtime__type *)&DAT_00225720,old,(int)cap_00);
    cap_00 = plVar8;
    local_30 = puVar6;
  }
  runtime_memmove();
  puVar9 = local_30;
  (l_spill->buf).len = (int)plVar5;
  (l_spill->buf).cap = (int)cap_00;
  plVar7 = l_spill;
  p_Var10 = local_28;
  if (runtime_writeBarrier._0_4_ == 0) {
    (l_spill->buf).array = local_30;
  }
  else {
    runtime_gcWriteBarrierBX();
    plVar5 = extraout_RAX;
    cap_00 = extraout_RDX;
  }
  if ((s_spill.len == 0) || (s_spill.str[s_spill.len + -1] != 10)) {
    cap = (log_Logger *)(lVar2 + s_spill.len + 1);
    if (cap_00 < cap) {
      old_00.len = (int)&DAT_00225720;
      old_00.array = puVar9;
      old_00.cap = (int)p_Var10;
      runtime_growslice((runtime__type *)plVar5,old_00,(int)cap);
      (l_spill->buf).cap = (int)plVar8;
      plVar5 = l_00;
      if (runtime_writeBarrier._0_4_ == 0) {
        (l_spill->buf).array = puVar6;
        plVar7 = l_spill;
        puVar9 = puVar6;
      }
      else {
        runtime_gcWriteBarrier();
        plVar7 = l_spill;
        puVar9 = extraout_RAX_00;
      }
    }
    (plVar7->buf).len = (int)((long)&(plVar5->mu).state + 1);
    puVar9[(long)plVar5] = 10;
  }
  puVar9 = (plVar7->buf).array;
  (*(code *)((plVar7->out).tab)->fun[0])();
  puStack0000000000000028 = puVar6;
  plStack0000000000000030 = l_00;
  sync___Mutex__Unlock(&local_18->mu);
  eVar13.data = puVar9;
  eVar13.tab = extraout_RAX_01;
  return eVar13;
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*ipv6ZoneCache).update(net.ipv6ZoneCache * zc,
   []net.Interface ift, bool force, bool updated) */

bool net___ipv6ZoneCache__update(net_ipv6ZoneCache *zc,__net_Interface ift,bool force)

{
  int iVar1;
  undefined8 *puVar2;
  net_Interface *pnVar3;
  time_Location *ptVar4;
  map_int_string phVar5;
  runtime_hmap *prVar6;
  undefined8 *puVar7;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  undefined1 extraout_AL_01;
  net_ipv6ZoneCache *pnVar8;
  runtime_hmap *h;
  time_Duration d;
  long in_FS_OFFSET;
  string s;
  time_Time t;
  time_Time t_00;
  time_Time u;
  multireturn___net_Interface_error_ mVar9;
  net_ipv6ZoneCache *zc_spill;
  __net_Interface ift_spill;
  bool force_spill;
  undefined1 uStack0000000000000030;
  net_Interface *local_d0;
  time_Location *local_c8;
  map_int_string local_c0;
  map_int_string local_b8;
  map_int_string local_b0;
  char local_a8;
  undefined7 uStack_a7;
  int local_58;
  undefined8 uStack_50;
  runtime_hmap *local_48;
  undefined8 *puStack_40;
  uint8 *local_38;
  runtime_mapextra *prStack_30;
  int local_28;
  net_Flags nStack_20;
  net_ipv6ZoneCache *local_18;
  undefined **ppuStack_10;
  
  phVar5 = local_b8;
  ptVar4 = local_c8;
  pnVar3 = local_d0;
  d = ift.cap;
  while (&local_58 <= *(int **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_18 = (net_ipv6ZoneCache *)0x0;
  ppuStack_10 = (undefined **)0x0;
  uStack0000000000000030 = 0;
  sync___RWMutex__Lock(&zc_spill->RWMutex);
  ppuStack_10 = &PTR_sync___RWMutex__Unlock_002b3ab8;
  local_18 = zc_spill;
  time_Now();
  if (force_spill) {
    local_a8 = '\0';
  }
  else {
    t.ext._1_7_ = 0;
    t._0_9_ = (unkuint9)0xfffffff207b8a800;
    t.loc = (time_Location *)zc_spill;
    time_Time_Add(t,d);
    local_d0 = (net_Interface *)(zc_spill->lastFetched).ext;
    local_c8 = (zc_spill->lastFetched).loc;
    u.loc._1_7_ = uStack_a7;
    u.loc._0_1_ = local_a8;
    local_c0 = local_b8;
    local_b8 = local_b0;
    t_00.ext = (int64)local_c8;
    t_00.wall = (uint64)zc_spill;
    t_00.loc = (time_Location *)(zc_spill->lastFetched).wall;
    u.ext = (int64)phVar5;
    u.wall = (uint64)local_b0;
    time_Time_After(t_00,u);
  }
  if (local_a8 != '\0') {
    uStack0000000000000030 = 0;
    sync___RWMutex__Unlock(&local_18->RWMutex);
    return (bool)extraout_AL_00;
  }
  (zc_spill->lastFetched).wall = (uint64)zc_spill;
  (zc_spill->lastFetched).ext = (int64)pnVar3;
  if (runtime_writeBarrier._0_4_ == 0) {
    (zc_spill->lastFetched).loc = ptVar4;
  }
  else {
    runtime_gcWriteBarrier();
  }
  pnVar8 = zc_spill;
  if (ift_spill.len == 0) {
    mVar9 = net_interfaceTable(0);
    ift_spill.len = (int)local_c8;
    ift_spill.array = local_d0;
    pnVar8 = mVar9.~r1.len;
    if (local_b8 != (map_int_string)0x0) {
      uStack0000000000000030 = 0;
      sync___RWMutex__Unlock(&local_18->RWMutex);
      return (bool)extraout_AL;
    }
  }
  runtime_makemap((runtime_maptype *)ift_spill.len,(int)pnVar8,(runtime_hmap *)ift_spill.array);
  if (runtime_writeBarrier._0_4_ == 0) {
    zc_spill->toIndex = (map_string_int)local_c0;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_makemap((runtime_maptype *)&DAT_00235a20,(int)pnVar8,(runtime_hmap *)ift_spill.len);
  pnVar8 = zc_spill;
  if (runtime_writeBarrier._0_4_ == 0) {
    zc_spill->toName = local_c0;
  }
  else {
    runtime_gcWriteBarrier();
  }
                    /* Unresolved local var: net.Interface ifi@[???] */
  if (0 < ift_spill.len) {
    h = (runtime_hmap *)0x0;
    while( true ) {
      iVar1 = (ift_spill.array)->Index;
      uStack_50 = (ift_spill.array)->MTU;
      local_48 = (runtime_hmap *)((ift_spill.array)->Name).str;
      puVar2 = (undefined8 *)((ift_spill.array)->Name).len;
      local_38 = ((ift_spill.array)->HardwareAddr).array;
      prStack_30 = (runtime_mapextra *)((ift_spill.array)->HardwareAddr).len;
      local_28 = ((ift_spill.array)->HardwareAddr).cap;
      nStack_20 = (ift_spill.array)->Flags;
      s.len = (int)puVar2;
      s.str = (uint8 *)pnVar8;
      local_58 = iVar1;
      puStack_40 = puVar2;
      runtime_mapassign_faststr((runtime_maptype *)pnVar8->toIndex,h,s);
      local_b8->count = iVar1;
      runtime_mapaccess2_fast64
                ((runtime_maptype *)zc_spill,(runtime_hmap *)&DAT_00235a20,(uint64)zc_spill->toName)
      ;
      puVar7 = puStack_40;
      prVar6 = local_48;
      if ((char)local_b8 == '\0') {
        runtime_mapassign_fast64((runtime_maptype *)zc_spill,local_48,(uint64)zc_spill->toName);
        puVar2[1] = puVar7;
        if (runtime_writeBarrier._0_4_ == 0) {
          *puVar2 = prVar6;
        }
        else {
          runtime_gcWriteBarrier();
        }
      }
      h = (runtime_hmap *)((long)&h->count + 1);
      if (ift_spill.len <= (long)h) break;
      ift_spill.array = ift_spill.array + 1;
      pnVar8 = zc_spill;
    }
  }
  uStack0000000000000030 = 1;
  sync___RWMutex__Unlock(&local_18->RWMutex);
  return (bool)extraout_AL_01;
}


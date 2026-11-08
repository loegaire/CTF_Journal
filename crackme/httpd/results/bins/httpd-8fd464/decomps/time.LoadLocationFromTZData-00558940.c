
/* WARNING: Removing unreachable block (ram,0x005598b1) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.LoadLocationFromTZData(string name, []uint8 data,
   time.Location * ~r2, error ~r3) */

multireturn_time_Location___error_ time_LoadLocationFromTZData(string name,__uint8 data)

{
  uint8 uVar1;
  byte bVar2;
  runtime__type *prVar3;
  int iVar4;
  ulong uVar5;
  runtime__type *prVar6;
  runtime__type *extraout_RAX;
  runtime__type *extraout_RAX_00;
  runtime_tmpBuf **ppauVar7;
  uint8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar12;
  runtime__type *extraout_RDX;
  runtime__type *extraout_RDX_00;
  runtime_tmpBuf **ppauVar13;
  uint8 *puVar14;
  byte *pbVar15;
  runtime__type *prVar16;
  uint8 *puVar17;
  func_unsafe_Pointer__unsafe_Pointer__bool **ppfVar18;
  long in_FS_OFFSET;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  string name_00;
  string s;
  runtime_slice old;
  multireturn_time_Location___error_ mVar22;
  multireturn_time_Location___error_ mVar23;
  multireturn_time_Location___error_ mVar24;
  multireturn_time_Location___error_ mVar25;
  multireturn_time_Location___error_ mVar26;
  multireturn_time_Location___error_ mVar27;
  multireturn_time_Location___error_ mVar28;
  multireturn_time_Location___error_ mVar29;
  multireturn_time_Location___error_ mVar30;
  multireturn_time_Location___error_ mVar31;
  multireturn_time_Location___error_ mVar32;
  multireturn_time_Location___error_ mVar33;
  __time_zone zones;
  multireturn_time_Location___error_ mVar34;
  multireturn_time_Location___error_ mVar35;
  multireturn_uint32_bool__conflict1 mVar36;
  multireturn_uint64_bool__conflict mVar37;
  string name_spill;
  __uint8 data_spill;
  undefined8 local_1c8;
  char local_1c0;
  runtime__type *local_1b8;
  func_unsafe_Pointer__unsafe_Pointer__bool **local_1b0;
  runtime__type *local_1a8;
  undefined1 local_1a0;
  undefined7 uStack_19f;
  runtime__type *local_198;
  func_unsafe_Pointer__unsafe_Pointer__bool **local_190;
  byte local_188;
  char local_187;
  long local_150;
  runtime__type *local_148;
  runtime__type *local_140;
  runtime__type *local_138;
  runtime_tmpBuf *local_130;
  runtime__type *local_128;
  uint8 *local_120;
  runtime_tmpBuf **local_118;
  long local_110;
  runtime__type *local_108;
  func_unsafe_Pointer__unsafe_Pointer__bool **local_100;
  long local_f8;
  ulong local_f0;
  uint8 *puStack_e8;
  long local_e0;
  runtime__type *prStack_d8;
  runtime_tmpBuf *local_d0;
  uint8 *puStack_c8;
  uint8 *local_c0;
  uint8 *local_b8;
  runtime__type *local_b0;
  uint8 *local_a8;
  runtime__type *local_a0;
  func_unsafe_Pointer__unsafe_Pointer__bool **local_98;
  runtime__type *local_90;
  runtime__type *local_88;
  runtime__type *local_80;
  runtime__type *local_78;
  runtime__type *local_70;
  time_dataIO local_68;
  time_dataIO local_48;
  time_dataIO d;
  runtime__type *prVar11;
  
                    /* Unresolved local var: int version@[???]
                       Unresolved local var: int size@[???]
                       Unresolved local var: time.Location * l@[???]
                       Unresolved local var: int nzone@[???]
                       Unresolved local var: int64 sec@[???]
                       Unresolved local var: []uint8 p@[???]
                       Unresolved local var: []uint8 txzones@[???]
                       Unresolved local var: []uint8 abbrev@[???]
                       Unresolved local var: []uint8 isstd@[???]
                       Unresolved local var: []uint8 isutc@[???]
                       Unresolved local var: string extend@[???]
                       Unresolved local var: []uint8 rest@[???]
                       Unresolved local var: []time.zone zones@[???]
                       Unresolved local var: []time.zoneTrans tx@[???]
                       Unresolved local var: int[6] n@[???]
                       Unresolved local var: time.dataIO txtimes@[???]
                       Unresolved local var: time.dataIO zonedata@[???]
                       Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.cap@[???]
                       Unresolved local var: int ~R0.len@[???] */
  while (&local_150 <= *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: []uint8 p@[???] */
  bVar19 = 3 < data_spill.len;
  if (bVar19) {
    d.p.len = data_spill.len + -4;
    d.p.cap = data_spill.cap + -4;
    data_spill.len = (int)(data_spill.array + (-d.p.cap >> 0x3f & 4));
    d.p.array = (uint8 *)data_spill.len;
  }
  else {
    d.p.len = 0;
    d.p.cap = 0;
    d.p.array = (uint8 *)0x0;
    data_spill.array = (uint8 *)0x0;
                    /* Unresolved local var: []uint8 magic@[???] */
  }
  d.error = !bVar19;
  if ((!bVar19) || (*(int *)data_spill.array != 0x66695a54)) {
    mVar24.~r3.tab = (runtime_itab *)data_spill.len;
    mVar24.~r2 = (time_Location *)time_badData.tab;
    mVar24.~r3.data = time_badData.data;
    return mVar24;
  }
                    /* Unresolved local var: []uint8 p@[???] */
  if (d.p.len < 0x10) {
    mVar23.~r3.tab = (runtime_itab *)d.p.len;
    mVar23.~r2 = (time_Location *)time_badData.tab;
    mVar23.~r3.data = time_badData.data;
    return mVar23;
  }
  d.p.len = d.p.len + -0x10;
  d.p.cap = d.p.cap + -0x10;
  mVar22.~r3.tab = d.p.array + (-d.p.cap >> 0x3f & 0x10);
  uVar1 = *d.p.array;
  if (uVar1 == 0) {
    local_150 = 1;
  }
  else if (uVar1 == 0x32) {
    local_150 = 2;
  }
  else {
    if (uVar1 != 0x33) {
      mVar22.~r2 = (time_Location *)time_badData.tab;
      mVar22.~r3.data = time_badData.data;
      return mVar22;
    }
    local_150 = 3;
  }
  local_f0 = 0;
  puStack_e8 = (uint8 *)0x0;
  local_e0 = 0;
  prStack_d8 = (runtime__type *)0x0;
  local_d0 = (runtime_tmpBuf *)0x0;
  puStack_c8 = (uint8 *)0x0;
  ppauVar7 = (runtime_tmpBuf **)0x0;
  ppauVar13 = &local_d0;
  d.p.array = mVar22.~r3.tab;
                    /* Unresolved local var: int i@[???] */
  while ((long)ppauVar7 < 6) {
    local_118 = ppauVar7;
    mVar36 = time___dataIO__big4(&d);
    mVar25.~r3.tab._1_7_ = (undefined7)((ulong)ppauVar13 >> 8);
    mVar25.~r3.tab._0_1_ = mVar36.ok;
    if (local_1c8._4_1_ == '\0') {
      mVar25.~r2 = (time_Location *)time_badData.tab;
      mVar25.~r3.data = time_badData.data;
      return mVar25;
    }
    (&local_f0)[(long)local_118] = (ulong)local_1c8 & 0xffffffff;
    ppauVar13 = local_118;
    ppauVar7 = (runtime_tmpBuf **)((long)local_118 + 1);
  }
  if (1 < local_150) {
                    /* Unresolved local var: int skip@[???] */
    puVar14 = puStack_c8 + local_e0 * 8 + (long)prStack_d8 * 5 + (long)local_d0 * 6 +
              (long)puStack_e8 + local_f0;
    puVar8 = puVar14 + 0x14;
    if (d.p.len < (long)puVar8) {
      d.p.len = 0;
      d.p.cap = 0;
      d.p.array = (uint8 *)0x0;
      d.error = true;
    }
    else {
      if ((ulong)d.p.cap < puVar8) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      d.p.len = (d.p.len - (long)puVar14) + -0x14;
      d.p.cap = (d.p.cap - (long)puVar14) + -0x14;
      puVar14 = d.p.array + ((ulong)puVar8 & -d.p.cap >> 0x3f);
      d.p.array = puVar14;
    }
    puVar8 = (uint8 *)0x0;
    while ((long)puVar8 < 6) {
      local_120 = puVar8;
      mVar36 = time___dataIO__big4(&d);
      mVar35.~r3.tab._1_7_ = (undefined7)((ulong)puVar14 >> 8);
      mVar35.~r3.tab._0_1_ = mVar36.ok;
      if (local_1c8._4_1_ == '\0') {
        mVar35.~r2 = (time_Location *)time_badData.tab;
        mVar35.~r3.data = time_badData.data;
        return mVar35;
      }
                    /* Unresolved local var: int i@[???] */
      (&local_f0)[(long)local_120] = (ulong)local_1c8 & 0xffffffff;
      puVar14 = local_120;
      puVar8 = local_120 + 1;
    }
  }
  lVar9 = 4;
  if (1 < local_150) {
    lVar9 = 8;
  }
  local_48.p.len = (long)prStack_d8 * lVar9;
                    /* Unresolved local var: []uint8 p@[???] */
  if (d.p.len < local_48.p.len) {
    d.p.len = 0;
    d.p.cap = 0;
    d.p.array = (uint8 *)0x0;
    d.error = true;
    local_48.p.len = 0;
    local_48.p.array = (uint8 *)0x0;
    local_48.p.cap = 0;
  }
  else {
    if ((ulong)d.p.cap < (ulong)local_48.p.len) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    d.p.len = d.p.len - local_48.p.len;
    local_48.p.array = d.p.array;
    local_48.p.cap = d.p.cap;
    d.p.array = d.p.array + (-(d.p.cap - local_48.p.len) >> 0x3f & local_48.p.len);
    d.p.cap = d.p.cap - local_48.p.len;
  }
  local_48.error = false;
                    /* Unresolved local var: []uint8 p@[???] */
  if (d.p.len < (long)prStack_d8) {
    d.p.len = 0;
    d.p.cap = 0;
    d.p.array = (uint8 *)0x0;
    d.error = true;
    prVar11 = (runtime__type *)0x0;
    local_b0 = (runtime__type *)0x0;
  }
  else {
    if ((ulong)d.p.cap < prStack_d8) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    d.p.len = d.p.len - (long)prStack_d8;
    d.p.cap = d.p.cap - (long)prStack_d8;
    prVar11 = prStack_d8;
    local_b0 = (runtime__type *)d.p.array;
    d.p.array = d.p.array + (-d.p.cap >> 0x3f & (ulong)prStack_d8);
  }
  local_68.p.len = (long)local_d0 * 6;
                    /* Unresolved local var: []uint8 p@[???] */
  if (d.p.len < local_68.p.len) {
    d.p.len = 0;
    d.p.cap = 0;
    d.p.array = (uint8 *)0x0;
    d.error = true;
    local_68.p.len = 0;
    local_68.p.array = (byte *)0x0;
    local_68.p.cap = 0;
  }
  else {
    if ((ulong)d.p.cap < (ulong)local_68.p.len) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    d.p.len = d.p.len + (long)local_d0 * -6;
    lVar12 = d.p.cap + (long)local_d0 * -6;
    local_68.p.array = d.p.array;
    local_68.p.cap = d.p.cap;
    d.p.array = d.p.array + (-lVar12 >> 0x3f & local_68.p.len);
    d.p.cap = lVar12;
  }
  local_68.error = false;
                    /* Unresolved local var: []uint8 p@[???] */
  if (d.p.len < (long)puStack_c8) {
    d.p.len = 0;
    d.p.cap = 0;
    d.p.array = (uint8 *)0x0;
    d.error = true;
    puVar8 = (uint8 *)0x0;
    local_b8 = (uint8 *)0x0;
    lVar12 = 0;
  }
  else {
    if ((ulong)d.p.cap < puStack_c8) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    d.p.len = d.p.len - (long)puStack_c8;
    puVar8 = puStack_c8;
    local_b8 = d.p.array;
    lVar12 = d.p.cap;
    d.p.array = d.p.array + (-(d.p.cap - (long)puStack_c8) >> 0x3f & (ulong)puStack_c8);
    d.p.cap = d.p.cap - (long)puStack_c8;
  }
  uVar10 = (lVar9 + 4) * local_e0;
  if (d.p.len < (long)uVar10) {
    d.p.len = 0;
    d.p.cap = 0;
    d.p.array = (uint8 *)0x0;
    d.error = true;
  }
  else {
    if ((ulong)d.p.cap < uVar10) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    d.p.len = d.p.len - uVar10;
    d.p.cap = d.p.cap - uVar10;
    d.p.array = d.p.array + (uVar10 & -d.p.cap >> 0x3f);
  }
                    /* Unresolved local var: []uint8 p@[???] */
  if (d.p.len < (long)puStack_e8) {
    d.p.len = 0;
    d.p.cap = 0;
    d.p.array = (uint8 *)0x0;
    d.error = true;
    puVar14 = (uint8 *)0x0;
    local_a8 = (uint8 *)0x0;
  }
  else {
    if ((ulong)d.p.cap < puStack_e8) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    d.p.len = d.p.len - (long)puStack_e8;
    d.p.cap = d.p.cap - (long)puStack_e8;
    puVar14 = puStack_e8;
    local_a8 = d.p.array;
    d.p.array = d.p.array + (-d.p.cap >> 0x3f & (ulong)puStack_e8);
  }
                    /* Unresolved local var: []uint8 p@[???] */
  if (d.p.len < (long)local_f0) {
    d.p.len = 0;
    d.p.array = (uint8 *)0x0;
    d.error = true;
    uVar10 = 0;
    local_c0 = (uint8 *)0x0;
  }
  else {
    if ((ulong)d.p.cap < local_f0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    d.p.len = d.p.len - local_f0;
    uVar10 = local_f0;
    local_c0 = d.p.array;
    d.p.array = d.p.array + ((long)-(d.p.cap - local_f0) >> 0x3f & local_f0);
  }
  iVar4 = d.p.len;
  puVar17 = d.p.array;
  if (d.error != false) {
    mVar27.~r3.tab = (runtime_itab *)prVar11;
    mVar27.~r2 = (time_Location *)time_badData.tab;
    mVar27.~r3.data = time_badData.data;
    return mVar27;
  }
                    /* Unresolved local var: []uint8 r@[???] */
  d.p.array = (uint8 *)0x0;
  d.p.len = 0;
  d.p.cap = 0;
  if (((iVar4 < 3) || (*puVar17 != 10)) || (puVar17[iVar4 + -1] != 10)) {
    local_88 = (runtime__type *)0x0;
    local_100 = (func_unsafe_Pointer__unsafe_Pointer__bool **)0x0;
  }
  else {
    runtime_slicebytetostring((runtime_tmpBuf *)(iVar4 + -2),(uint8 *)prVar11,(int)puVar14);
    local_88 = local_1b8;
    local_100 = local_1b0;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int64 n@[???] */
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint8 b@[???] */
  }
  if (local_d0 == (runtime_tmpBuf *)0x0) {
    mVar26.~r3.tab = (runtime_itab *)prVar11;
    mVar26.~r2 = (time_Location *)time_badData.tab;
    mVar26.~r3.data = time_badData.data;
    return mVar26;
  }
  local_130 = local_d0;
  local_1c8 = (runtime__type *)local_d0;
  prVar16 = local_b0;
  puVar17 = puVar8;
  runtime_makeslice((runtime__type *)&DAT_00259320,(int)prVar11,(int)puVar14);
  local_70 = local_1b8;
  lVar9 = 0;
  prVar6 = prVar11;
  while (prVar3 = prStack_d8, lVar9 < (long)local_130) {
    local_110 = lVar9;
    mVar36 = time___dataIO__big4(&local_68);
    mVar30.~r3.tab._1_7_ = (undefined7)((ulong)prVar6 >> 8);
    mVar30.~r3.tab._0_1_ = mVar36.ok;
    if (local_1c8._4_1_ == '\0') {
      mVar30.~r2 = (time_Location *)time_badData.tab;
      mVar30.~r3.data = time_badData.data;
      return mVar30;
    }
    local_f8 = local_110 * 0x20;
    *(long *)(&local_70->hash + local_110 * 8) = (long)(int)local_1c8;
                    /* Unresolved local var: []uint8 p@[???] */
    if (local_68.p.len < 1) {
      mVar29.~r3.tab = (runtime_itab *)local_70;
      mVar29.~r2 = (time_Location *)time_badData.tab;
      mVar29.~r3.data = time_badData.data;
      return mVar29;
    }
    pbVar15 = local_68.p.array + (-(local_68.p.cap + -1) >> 0x3f & 1);
    *(bool *)(&local_70->equal + local_110 * 4) = *local_68.p.array != 0;
                    /* Unresolved local var: []uint8 p@[???] */
    if ((long)(local_68.p.len - 1U) < 1) {
LAB_005595ca:
      mVar28.~r3.tab = (runtime_itab *)local_70;
      mVar28.~r2 = (time_Location *)time_badData.tab;
      mVar28.~r3.data = time_badData.data;
      return mVar28;
    }
    local_68.p.len = local_68.p.len - 2;
    local_68.p.cap = local_68.p.cap + -2;
    local_68.p.array = pbVar15 + (-local_68.p.cap >> 0x3f & 1);
    uVar5 = (ulong)*pbVar15;
    if ((long)puVar8 <= (long)uVar5) goto LAB_005595ca;
    local_1c8 = (runtime__type *)(local_b8 + ((long)(uVar5 - lVar12) >> 0x3f & uVar5));
    prVar16 = (runtime__type *)(puVar8 + -uVar5);
                    /* Unresolved local var: int i@[???] */
    for (lVar9 = 0; lVar9 < (long)prVar16; lVar9 = lVar9 + 1) {
      if ((*(runtime_tmpBuf *)local_1c8)[lVar9] == 0) {
        runtime_slicebytetostring((runtime_tmpBuf *)local_1c8,(uint8 *)local_70,local_f8);
        goto LAB_00559592;
      }
    }
    runtime_slicebytetostring((runtime_tmpBuf *)local_1c8,(uint8 *)local_70,local_f8);
LAB_00559592:
    prVar6 = local_70;
    *(func_unsafe_Pointer__unsafe_Pointer__bool ***)((long)&local_70->ptrdata + local_f8) =
         local_1b0;
    puVar17 = (uint8 *)((long)&local_70->size + local_f8);
    if (runtime_writeBarrier._0_4_ == 0) {
      *(runtime__type **)((long)&local_70->size + local_f8) = local_1b8;
    }
    else {
      runtime_gcWriteBarrier();
    }
    lVar9 = local_110 + 1;
  }
  local_1c8 = prStack_d8;
  runtime_makeslice(prStack_d8,(int)prVar6,0x2641e0);
  local_78 = local_1b8;
  local_148 = prStack_d8;
  prVar6 = (runtime__type *)0x0;
  while ((long)prVar6 < (long)local_148) {
    mVar31.~r3.tab._1_7_ = (undefined7)((ulong)local_150 >> 8);
    local_108 = prVar6;
    if (local_150 < 2) {
      mVar36 = time___dataIO__big4(&local_48);
      mVar33.~r3.tab._0_1_ = mVar36.ok;
      mVar33.~r3.tab._1_7_ = mVar31.~r3.tab._1_7_;
      local_1c8._0_4_ = (int)prVar3;
      prVar6 = (runtime__type *)(long)(int)local_1c8;
      local_1c8._4_1_ = (char)((ulong)prVar3 >> 0x20);
      if (local_1c8._4_1_ == '\0') {
        mVar33.~r2 = (time_Location *)time_badData.tab;
        mVar33.~r3.data = time_badData.data;
        return mVar33;
      }
    }
    else {
                    /* Unresolved local var: uint64 n8@[???] */
      mVar37 = time___dataIO__big8(&local_48);
      mVar31.~r3.tab._0_1_ = mVar37.ok;
      local_1c0 = (char)prVar3;
      prVar6 = prVar3;
      if (local_1c0 == '\0') {
        mVar31.~r2 = (time_Location *)time_badData.tab;
        mVar31.~r3.data = time_badData.data;
        return mVar31;
      }
    }
    (&local_78->size)[(long)local_108 * 2] = (uintptr)prVar6;
    if (prVar11 <= local_108) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    bVar2 = *(byte *)((long)&local_b0->size + (long)&local_108->size);
    if ((long)local_130 <= (long)(ulong)bVar2) {
      mVar32.~r3.tab = (runtime_itab *)local_108;
      mVar32.~r2 = (time_Location *)time_badData.tab;
      mVar32.~r3.data = time_badData.data;
      return mVar32;
    }
    *(byte *)(&local_78->ptrdata + (long)local_108 * 2) = bVar2;
    if ((long)local_108 < (long)puVar14) {
      *(bool *)((long)&local_78->ptrdata + (long)local_108 * 0x10 + 1) =
           local_a8[(long)&local_108->size] != 0;
    }
    if ((long)local_108 < (long)uVar10) {
      *(bool *)((long)&local_78->ptrdata + (long)local_108 * 0x10 + 2) =
           local_c0[(long)local_108] != 0;
    }
    prVar16 = local_78;
    puVar17 = puVar14;
    prVar6 = (runtime__type *)((long)&local_108->size + 1);
  }
  local_a0 = local_78;
  local_140 = local_148;
  local_1c8 = prVar3;
  if (local_148 == (runtime__type *)0x0) {
    old.cap = (int)puVar17;
    old.array = (void *)0x2641e0;
    old.len = 0;
    runtime_growslice(local_78,old,(int)prVar16);
    local_1b0 = (func_unsafe_Pointer__unsafe_Pointer__bool **)0x1;
    local_1c8 = local_78;
    (&local_1a8->size)[(long)local_148 * 2] = 0x8000000000000000;
    *(undefined1 *)(&local_1a8->ptrdata + (long)local_148 * 2) = 0;
    *(undefined1 *)((long)&local_1a8->ptrdata + (long)local_148 * 0x10 + 1) = 0;
    *(undefined1 *)((long)&local_1a8->ptrdata + (long)local_148 * 0x10 + 2) = 0;
    local_a0 = local_1a8;
    local_140 = local_198;
    local_148 = (runtime__type *)(CONCAT71(uStack_19f,local_1a0) + 1);
  }
  runtime_newobject(local_a0);
  local_1c8->equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)local_130;
  local_1c8->gcdata = *local_130;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(runtime__type **)&local_1c8->hash = local_70;
  }
  else {
    runtime_gcWriteBarrierDX();
  }
  local_1c8[1].size = (uintptr)local_148;
  local_1c8[1].ptrdata = (uintptr)local_140;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(runtime__type **)&local_1c8->str = local_a0;
  }
  else {
    runtime_gcWriteBarrierBX();
                    /* Unresolved local var: int i@[???] */
    local_1c8 = extraout_RDX;
  }
  local_1c8->ptrdata = name_spill.len;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_1c8->size = (uintptr)name_spill.str;
  }
  else {
    runtime_gcWriteBarrierDX();
  }
  local_1c8[1].equal = local_100;
  local_90 = local_1c8;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(runtime__type **)&local_1c8[1].hash = local_88;
  }
  else {
    runtime_gcWriteBarrierSI();
  }
  time_now();
  local_138 = (runtime__type *)&DAT_00271260;
  s.len = (func_unsafe_Pointer__unsafe_Pointer__bool **)0x0;
  do {
    prVar11 = local_a0;
    if ((long)local_148 <= (long)s.len) {
LAB_00559ccf:
      mVar34.~r3.tab = (runtime_itab *)s.len;
      mVar34.~r2 = (time_Location *)local_138;
      mVar34.~r3.data = prVar11;
      return mVar34;
    }
    if ((long)(&local_a0->size)[(long)s.len * 2] < 0x271261) {
      prVar11 = (runtime__type *)((long)s.len + 1);
      if (local_148 != prVar11) {
        if (local_148 <= prVar11) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        if (*(long *)(&local_a0->hash + (long)s.len * 4) < 0x271261) goto LAB_00559a6b;
      }
      local_90[1].gcdata = (uint8 *)(&local_a0->size)[(long)s.len * 2];
      local_90[1].str = -1;
      local_90[1].ptrToThis = 0x7fffffff;
      s.len = (func_unsafe_Pointer__unsafe_Pointer__bool **)
              (ulong)(byte)(&local_a0->ptrdata)[(long)s.len * 2];
      if (local_90->equal <= s.len) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      prVar6 = local_90 + 2;
      s.len = (func_unsafe_Pointer__unsafe_Pointer__bool **)
              ((long)s.len * 0x20 + *(long *)&local_90->hash);
      prVar16 = local_90;
      if (runtime_writeBarrier._0_4_ == 0) {
        local_90[2].size = (uintptr)s.len;
        bVar19 = local_148 < prVar11;
        bVar21 = SBORROW8((long)local_148,(long)prVar11);
        lVar9 = (long)local_148 - (long)prVar11;
        bVar20 = local_148 == prVar11;
      }
      else {
        runtime_gcWriteBarrierBX();
        bVar19 = extraout_RDX_00 < prVar11;
        bVar21 = SBORROW8((long)extraout_RDX_00,(long)prVar11);
        lVar9 = (long)extraout_RDX_00 - (long)prVar11;
        bVar20 = extraout_RDX_00 == prVar11;
        local_138 = extraout_RAX;
      }
      if (bVar20 || bVar21 != lVar9 < 0) {
        prVar11 = (runtime__type *)0x0;
        if (prVar16[1].equal != (func_unsafe_Pointer__unsafe_Pointer__bool **)0x0) {
          s.str = (uint8 *)local_138;
          local_80 = prVar6;
                    /* Unresolved local var: int offset@[???]
                       Unresolved local var: int64 estart@[???]
                       Unresolved local var: int64 eend@[???]
                       Unresolved local var: bool isDST@[???]
                       Unresolved local var: string name@[???] */
          time_tzset(s,(int64)prVar16[1].equal,(int64)prVar6);
          local_138 = (runtime__type *)CONCAT71(uStack_19f,local_1a0);
          prVar11 = (runtime__type *)(ulong)local_188;
                    /* Unresolved local var: int zoneIdx@[???] */
          s.len = local_190;
          if (local_187 != '\0') {
            local_128 = local_1a8;
            local_98 = local_1b0;
            local_90[1].gcdata = (uint8 *)local_198;
            *(func_unsafe_Pointer__unsafe_Pointer__bool ***)&local_90[1].str = local_190;
            s.len = local_90->equal;
            name_00.len = (int)local_1b0;
            name_00.str = (uint8 *)local_1a8;
            zones.len = (int)s.len;
            zones.array = (time_zone *)local_138;
            zones.cap._0_1_ = local_188;
            zones.cap._1_7_ = 0;
            prVar11 = (runtime__type *)(ulong)local_188;
            time_findZone(zones,name_00,(int)local_90,SUB81(local_90->gcdata,0));
            if (local_198 == (runtime__type *)0xffffffffffffffff) {
              runtime_newobject((runtime__type *)&DAT_00259320);
              s.len[1] = (func_unsafe_Pointer__unsafe_Pointer__bool *)local_128;
              ppfVar18 = s.len;
              if (runtime_writeBarrier._0_4_ == 0) {
                *s.len = (func_unsafe_Pointer__unsafe_Pointer__bool *)local_98;
              }
              else {
                runtime_gcWriteBarrier();
              }
              ppfVar18[2] = (func_unsafe_Pointer__unsafe_Pointer__bool *)local_138;
              *(byte *)(ppfVar18 + 3) = local_188;
              if (runtime_writeBarrier._0_4_ == 0) {
                local_90[2].size = (uintptr)ppfVar18;
                local_138 = local_90;
              }
              else {
                runtime_gcWriteBarrier();
                local_138 = local_90;
              }
            }
            else {
              prVar11 = (runtime__type *)local_90->equal;
              s.len = *(func_unsafe_Pointer__unsafe_Pointer__bool ***)&local_90->hash;
              if (prVar11 <= local_198) {
                    /* WARNING: Subroutine does not return */
                runtime_panicIndex();
              }
              if (runtime_writeBarrier._0_4_ == 0) {
                local_90[2].size = (uintptr)(s.len + (long)local_198 * 4);
                local_138 = (runtime__type *)(s.len + (long)local_198 * 4);
              }
              else {
                runtime_gcWriteBarrier();
                local_138 = extraout_RAX_00;
              }
            }
          }
        }
      }
      else {
        if (bVar19 || bVar20) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        local_138 = (runtime__type *)(&local_a0->size)[(long)prVar11 * 2];
        *(runtime__type **)&prVar16[1].str = local_138;
        prVar11 = local_a0;
      }
      goto LAB_00559ccf;
    }
LAB_00559a6b:
    s.len = (func_unsafe_Pointer__unsafe_Pointer__bool **)((long)s.len + 1);
  } while( true );
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.(*Location).lookup(time.Location * l, int64 sec, string name,
   int offset, int64 start, int64 end, bool isDST) */

multireturn_string_int_int64_int64_bool_ time___Location__lookup(time_Location *l,int64 sec)

{
  string *psVar1;
  bool bVar2;
  time_zone *ptVar3;
  ulong uVar4;
  time_zone *ptVar5;
  time_zoneTrans *ptVar6;
  string *psVar7;
  ulong uVar8;
  int64 iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 in_RSI;
  undefined8 in_RDI;
  undefined1 uVar14;
  undefined8 in_R8;
  ulong uVar15;
  long in_FS_OFFSET;
  multireturn_string_int_int64_int64_bool_ mVar16;
  multireturn_string_int_int64_int64_bool_ mVar17;
  multireturn_string_int_int64_int64_bool_ mVar18;
  multireturn_string_int_int64_int64_bool_ mVar19;
  multireturn_string_int_int64_int64_bool_ mVar20;
  multireturn_string_int_int64_int64_bool_bool_ mVar21;
  time_Location *l_spill;
  int64 sec_spill;
  time_Location *local_88;
  undefined8 local_70;
  int64 local_68;
  time_Location *local_60;
  undefined8 local_58;
  byte local_48;
  char local_47;
  time_Location *local_10;
  
                    /* Unresolved local var: int lo@[???]
                       Unresolved local var: int hi@[???] */
  while (uVar14 = (undefined1)in_R8,
        &local_10 <= *(time_Location ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  time___Location__get(l_spill);
  ptVar3 = (local_88->zone).array;
  uVar4 = (local_88->zone).len;
  if (uVar4 == 0) {
    mVar18.name.len = sec;
    mVar18.name.str = (uint8 *)0x7fffffffffffffff;
    mVar18.end = in_RSI;
    mVar18.start = in_RDI;
    mVar18.offset = (int)ptVar3;
    mVar18.isDST = (bool)uVar14;
    return mVar18;
  }
                    /* Unresolved local var: time.zone * zone@[???] */
  ptVar5 = local_88->cacheZone;
  if (((ptVar5 != (time_zone *)0x0) && (local_88->cacheStart <= sec_spill)) &&
     (sec_spill < local_88->cacheEnd)) {
    mVar16.name.len._0_1_ = ptVar5->isDST;
    mVar16.name.str = (ptVar5->name).str;
    mVar16.name.len._1_7_ = 0;
    mVar16.end = local_88->cacheStart;
    mVar16.start = sec_spill;
    mVar16.offset = (ptVar5->name).len;
    mVar16.isDST = (undefined1)local_88->cacheEnd;
    return mVar16;
  }
  uVar15 = (local_88->tx).len;
  ptVar6 = (local_88->tx).array;
  if ((uVar15 == 0) || (sec_spill < ptVar6->when)) {
    local_10 = local_88;
    time___Location__lookupFirstZone(local_88);
    ptVar3 = (local_10->zone).array;
    if ((time_Location *)(local_10->zone).len <= local_88) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    mVar17.name.len = (long)local_88 * 0x20;
    ptVar6 = (local_10->tx).array;
    if ((local_10->tx).len < 1) {
      iVar9 = 0x7fffffffffffffff;
    }
    else {
      iVar9 = ptVar6->when;
    }
    mVar17.name.str = (uint8 *)iVar9;
    mVar17.end = ptVar3[(long)local_88].name.len;
    mVar17.start = ptVar3[(long)local_88].offset;
    mVar17.offset._0_1_ = ptVar3[(long)local_88].isDST;
    mVar17.offset._1_7_ = 0;
    mVar17.isDST = SUB81(ptVar6,0);
    return mVar17;
  }
  uVar8 = uVar15;
  uVar13 = 0;
  while (uVar10 = uVar8, lVar11 = uVar10 - uVar13, 1 < lVar11) {
                    /* Unresolved local var: int m@[???]
                       Unresolved local var: int64 lim@[???] */
    uVar12 = lVar11 / 2 + uVar13;
    if (uVar15 <= uVar12) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    uVar8 = uVar12;
    if (ptVar6[uVar12].when <= sec_spill) {
      uVar8 = uVar10;
      uVar13 = uVar12;
    }
  }
  if (uVar13 < uVar15) {
    if (uVar4 <= ptVar6[uVar13].index) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    iVar9 = ptVar6[uVar13].when;
    bVar2 = ptVar3[ptVar6[uVar13].index].isDST;
    uVar15 = uVar15 - 1;
    if (uVar13 == uVar15) {
      psVar7 = &local_88->extend;
      psVar1 = &local_88->extend;
      local_88 = (time_Location *)psVar1->str;
      uVar13 = 0;
      if (psVar7->len != 0) {
        mVar21 = time_tzset(*psVar1,(ulong)bVar2,sec_spill);
        mVar19.isDST = mVar21.isDST;
        uVar15 = (ulong)mVar19.isDST;
        uVar13 = (ulong)local_48;
        local_88 = local_60;
        sec_spill = local_68;
        if (local_47 != '\0') {
          mVar19.name.len._0_1_ = local_48;
          mVar19.name.str = (uint8 *)local_60;
          mVar19.name.len._1_7_ = 0;
          mVar19.end = local_70;
          mVar19.start = local_68;
          mVar19.offset = local_58;
          return mVar19;
        }
      }
    }
    mVar20.name.len = uVar13;
    mVar20.name.str = (uint8 *)local_88;
    mVar20.end = iVar9;
    mVar20.start = sec_spill;
    mVar20.offset._0_1_ = bVar2;
    mVar20.offset._1_7_ = 0;
    mVar20.isDST = (undefined1)uVar15;
    return mVar20;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}


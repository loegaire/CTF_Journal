
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.tzsetNum(string s, int min, int max, int num, string rest,
   bool ok) */

multireturn_int_string_bool__conflict time_tzsetNum(string s,int min,int max)

{
  unkint9 Var1;
  uint8 *puVar2;
  uint8 *puVar3;
  uint8 *extraout_RAX;
  long lVar4;
  uint uVar5;
  long in_FS_OFFSET;
  string s_00;
  multireturn_int_string_bool__conflict mVar6;
  multireturn_int_string_bool__conflict mVar7;
  multireturn_int_string_bool__conflict mVar8;
  multireturn_int_string_bool__conflict mVar9;
  multireturn_int_string_bool__conflict mVar10;
  multireturn_int_string_bool__conflict mVar11;
  string s_spill;
  int min_spill;
  int max_spill;
  uint local_28;
  uint8 *local_20;
  
  mVar6.rest.str = s.len;
  puVar2 = s.str;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    puVar2 = extraout_RAX;
  }
  if (s_spill.len == 0) {
    mVar6.num = (int)puVar2;
    Var1 = (unkuint9)(byte)max << 0x40;
    mVar6.rest.len = (long)Var1;
    mVar6.ok = (bool)(char)((unkuint9)Var1 >> 0x40);
    return mVar6;
  }
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int32 r@[???] */
  lVar4 = 0;
  puVar2 = (uint8 *)0x0;
  while( true ) {
    puVar3 = puVar2;
    if (s_spill.len <= (long)puVar3) {
      mVar10.ok = (undefined1)max;
      if (min_spill <= lVar4) {
        mVar11.rest.str = (uint8 *)max_spill;
        mVar11.num = min_spill;
        mVar11.ok = (bool)mVar10.ok;
        mVar11.rest.len = s_spill.len;
        return mVar11;
      }
      mVar10.rest.str = (uint8 *)max_spill;
      mVar10.num = min_spill;
      mVar10.rest.len = s_spill.len;
      return mVar10;
    }
    if (s_spill.str[(long)puVar3] < 0x80) {
      puVar2 = puVar3 + 1;
      uVar5 = (uint)s_spill.str[(long)puVar3];
    }
    else {
      s_00.len = max_spill;
      s_00.str = puVar3;
      runtime_decoderune(s_00,s_spill.len);
      puVar2 = local_20;
      uVar5 = local_28;
    }
    mVar7.ok = (undefined1)uVar5;
    if (9 < uVar5 - 0x30) break;
    max = (int)(int)uVar5;
    lVar4 = max + lVar4 * 10 + -0x30;
    if (max_spill < lVar4) {
      mVar7.rest.str = (uint8 *)max_spill;
      mVar7.num = (int)puVar3;
      mVar7.rest.len = s_spill.len;
      return mVar7;
    }
  }
  if ((puVar3 != (uint8 *)0x0) && (max_spill = min_spill, min_spill <= lVar4)) {
    if ((ulong)s_spill.len < puVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    mVar9.rest.len = -(s_spill.len - (long)puVar3) >> 0x3f;
    mVar9.num = s_spill.str + ((ulong)puVar3 & mVar9.rest.len);
    mVar9.rest.str = (uint8 *)(s_spill.len - (long)puVar3);
    mVar9.ok = (bool)mVar7.ok;
    return mVar9;
  }
  mVar8.rest.str = (uint8 *)max_spill;
  mVar8.num = (int)puVar3;
  mVar8.ok = (bool)mVar7.ok;
  mVar8.rest.len = s_spill.len;
  return mVar8;
}


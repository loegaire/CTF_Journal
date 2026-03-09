
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.tzsetName(string s, string ~r1, string ~r2, bool ~r3) */

multireturn_string_string_bool_ time_tzsetName(string s)

{
  long lVar1;
  uint8 *puVar2;
  uint8 *puVar3;
  uint8 *extraout_RAX;
  ulong in_RCX;
  uint8 *in_RSI;
  uint uVar4;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  multireturn_string_string_bool_ mVar5;
  multireturn_string_string_bool_ mVar6;
  multireturn_string_string_bool_ mVar7;
  multireturn_string_string_bool_ mVar8;
  multireturn_string_string_bool_ mVar9;
  multireturn_string_string_bool_ mVar10;
  multireturn_string_string_bool_ mVar11;
  string s_spill;
  uint local_28;
  uint8 *local_20;
  
  mVar5.~r1.len = s.len;
  puVar2 = s.str;
  mVar8.~r2.len = in_RDI;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    puVar2 = extraout_RAX;
  }
  if (s_spill.len == 0) {
    mVar5.~r1.str = puVar2;
    mVar5.~r2.str = (uint8 *)in_RCX;
    mVar5.~r3 = SUB81(in_RSI,0);
    mVar5.~r2.len = (int)mVar8.~r2.len;
    return mVar5;
  }
  if (*s_spill.str != 0x3c) {
    puVar2 = (uint8 *)0x0;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int32 r@[???] */
    do {
      puVar3 = puVar2;
      if (s_spill.len <= (long)puVar3) {
        mVar10.~r3 = SUB81(in_RSI,0);
        if (2 < s_spill.len) {
          mVar11.~r1.len = (int)s_spill.str;
          mVar11.~r1.str = puVar3;
          mVar11.~r2.str = (uint8 *)in_RCX;
          mVar11.~r3 = (bool)mVar10.~r3;
          mVar11.~r2.len = (int)mVar8.~r2.len;
          return mVar11;
        }
        mVar10.~r1.len = (int)s_spill.str;
        mVar10.~r1.str = puVar3;
        mVar10.~r2.str = (uint8 *)in_RCX;
        mVar10.~r2.len = (int)mVar8.~r2.len;
        return mVar10;
      }
      in_RCX = (ulong)s_spill.str[(long)puVar3];
      if (s_spill.str[(long)puVar3] < 0x80) {
        in_RSI = puVar3 + 1;
      }
      else {
        s_01.len = (int)s_spill.str;
        s_01.str = puVar3;
        runtime_decoderune(s_01,in_RCX);
        in_RCX = (ulong)local_28;
        in_RSI = local_20;
      }
      uVar4 = (int)in_RCX - 0x2b;
      mVar8.~r2.len = (uint8 *)(ulong)uVar4;
    } while ((2 < uVar4) &&
            (uVar4 = (int)in_RCX - 0x30, in_RCX = (ulong)uVar4, puVar2 = in_RSI, 9 < uVar4));
    mVar8.~r3 = SUB81(in_RSI,0);
    if (2 < (long)puVar3) {
      mVar9.~r1.len = (int)s_spill.str;
      mVar9.~r1.str = s_spill.str + (-(s_spill.len - (long)puVar3) >> 0x3f & (ulong)puVar3);
      mVar9.~r2.str = (uint8 *)(s_spill.len - (long)puVar3);
      mVar9.~r3 = (bool)mVar8.~r3;
      mVar9.~r2.len = (int)mVar8.~r2.len;
      return mVar9;
    }
    mVar8.~r1.len = (int)s_spill.str;
    mVar8.~r1.str = puVar3;
    mVar8.~r2.str = (uint8 *)in_RCX;
    return mVar8;
  }
  puVar2 = (uint8 *)0x0;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int32 r@[???] */
  do {
    puVar3 = puVar2;
    if (s_spill.len <= (long)puVar3) {
      mVar7.~r1.len = (int)s_spill.str;
      mVar7.~r1.str = puVar3;
      mVar7.~r2.str = (uint8 *)in_RCX;
      mVar7.~r3 = SUB81(in_RSI,0);
      mVar7.~r2.len = (int)mVar8.~r2.len;
      return mVar7;
    }
    in_RSI = (uint8 *)(ulong)puVar3[(long)s_spill.str];
    if (puVar3[(long)s_spill.str] < 0x80) {
      mVar8.~r2.len = puVar3 + 1;
    }
    else {
      s_00.len = (int)s_spill.str;
      s_00.str = puVar3;
      runtime_decoderune(s_00,in_RCX);
      in_RSI = (uint8 *)(ulong)local_28;
      mVar8.~r2.len = local_20;
    }
    puVar2 = mVar8.~r2.len;
  } while ((int)in_RSI != 0x3e);
  if ((ulong)s_spill.len < puVar3) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAlen();
  }
  if (puVar3 == (uint8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  mVar6.~r3 = ((byte)(-(long)(puVar3 + -1) >> 0x3f) & 1) + (char)s_spill.str;
  if ((ulong)s_spill.len < puVar3 + 1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  lVar1 = (s_spill.len - (long)puVar3) + -1;
  mVar6.~r1.str = s_spill.str + (-lVar1 >> 0x3f & (ulong)(puVar3 + 1));
  mVar6.~r1.len = (int)s_spill.str;
  mVar6.~r2.str = (uint8 *)lVar1;
  mVar6.~r2.len = (int)(puVar3 + -1);
  return mVar6;
}


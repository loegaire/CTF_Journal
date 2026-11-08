
/* WARNING: Variable defined which should be unmapped: chars_spill */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.IndexAny([]uint8 s, string chars, int ~r2) */

int bytes_IndexAny(__uint8 s,string chars)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  int extraout_RAX;
  ulong uVar4;
  uint8 *puVar5;
  uint8 *extraout_RAX_00;
  long lVar6;
  uint8 *puVar7;
  uint uVar8;
  uint8 *puVar9;
  long in_FS_OFFSET;
  __uint8 s_00;
  __uint8 p;
  string s_01;
  string s_02;
  multireturn_int32_int__conflict mVar10;
  __uint8 s_spill;
  string chars_spill;
  uint local_78;
  int iStack_74;
  uint8 *local_70;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  puVar9 = chars.str;
  s_00.len = s.len;
  puVar5 = s.array;
                    /* Unresolved local var: int width@[???] */
  while (&uStack_10 <= *(undefined8 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    puVar5 = extraout_RAX_00;
  }
  if (chars_spill.len == 0) {
    return (int)puVar5;
  }
  if (s_spill.len == 1) {
                    /* Unresolved local var: int32 r@[???] */
    if (*s_spill.array < 0x80) {
      internal_bytealg_IndexByteString();
      if (iStack_74 < 0) {
        return extraout_RAX;
      }
      return extraout_RAX;
    }
    puVar5 = (uint8 *)0x0;
    do {
      if (chars_spill.len <= (long)puVar5) {
        return (int)chars_spill.str;
      }
      bVar3 = chars_spill.str[(long)puVar5];
      if (bVar3 < 0x80) {
        puVar5 = puVar5 + 1;
        uVar8 = (uint)bVar3;
      }
      else {
        s_02.len._0_1_ = bVar3;
        s_02.str = chars_spill.str;
        s_02.len._1_7_ = 0;
        runtime_decoderune(s_02,(int)puVar5);
        puVar5 = local_70;
        uVar8 = local_78;
      }
    } while (uVar8 != 0xfffd);
    return (int)chars_spill.str;
  }
  if (chars_spill.len == 1) {
                    /* Unresolved local var: int32 r@[???] */
    uVar4 = (ulong)*chars_spill.str;
    if (0x7f < *chars_spill.str) {
      uVar4 = 0xfffd;
    }
    s_00.array = (uint8 *)uVar4;
    s_00.cap = 0xfffd;
    bytes_IndexRune(s_00,(int32)puVar9);
    return (int)local_70;
  }
  if (8 < s_spill.len) {
                    /* Unresolved local var: bytes.asciiSet as@[???] */
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint8 c@[???] */
    for (lVar6 = 0; (lVar6 < chars_spill.len && (bVar3 = chars_spill.str[lVar6], bVar3 < 0x80));
        lVar6 = lVar6 + 1) {
      puVar2 = (uint *)((long)&local_48 + (ulong)(bVar3 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << (bVar3 & 0x1f);
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint8 c@[???] */
    }
    local_28 = local_48;
    uStack_20 = uStack_40;
    local_18 = 0;
    uStack_10 = 0;
    if (chars_spill.len <= lVar6) {
      lVar6 = 0;
      while( true ) {
        if (s_spill.len <= lVar6) {
          return (int)s_spill.array;
        }
        if ((*(uint *)((long)&local_28 + (ulong)(s_spill.array[lVar6] >> 5) * 4) >>
             (s_spill.array[lVar6] & 0x1f) & 1) != 0) break;
        lVar6 = lVar6 + 1;
      }
      return (int)s_spill.array;
    }
  }
  puVar5 = (uint8 *)0x0;
  do {
    if (s_spill.len <= (long)puVar5) {
      return (int)puVar5;
    }
    if ((ulong)s_spill.len <= puVar5) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (puVar5[(long)s_spill.array] < 0x80) {
      internal_bytealg_IndexByteString();
      if (-1 < iStack_74) {
        return (int)puVar5;
      }
      puVar9 = (uint8 *)0x1;
    }
    else {
      p.len = s_spill.array + (-(s_spill.cap - (long)puVar5) >> 0x3f & (ulong)puVar5);
      p.cap = s_spill.len - (long)puVar5;
      p.array = puVar5;
      mVar10 = unicode_utf8_DecodeRune(p);
      puVar9 = local_70;
      if (local_78 == 0xfffd) {
LAB_005aabef:
        puVar7 = (uint8 *)0x0;
        while ((long)puVar7 < chars_spill.len) {
          pbVar1 = puVar7 + (long)chars_spill.str;
          if (*pbVar1 < 0x80) {
            puVar7 = puVar7 + 1;
            uVar8 = (uint)*pbVar1;
          }
          else {
            s_01.len = (int)chars_spill.str;
            s_01.str = local_70;
            runtime_decoderune(s_01,(ulong)local_78);
            puVar7 = local_70;
            uVar8 = local_78;
          }
          if (uVar8 == local_78) {
            return (int)puVar5;
          }
        }
      }
      else if ((uint8 *)chars_spill.len == local_70) {
        runtime_intstring((uint8 (*) [4])(long)(int)local_78,mVar10.size);
        if (CONCAT44(iStack_74,local_78) == chars_spill.len) {
          runtime_memequal();
          if ((char)local_78 != '\0') {
            return (int)puVar5;
          }
        }
      }
      else {
        if (internal_bytealg_MaxLen < (long)local_70) goto LAB_005aabef;
        runtime_intstring((uint8 (*) [4])(long)(int)local_78,mVar10.size);
        internal_bytealg_IndexString();
        if (-1 < (long)local_70) {
          return (int)puVar5;
        }
      }
    }
                    /* Unresolved local var: int i@[???] */
    puVar5 = puVar9 + (long)puVar5;
                    /* Unresolved local var: int32 r@[???] */
  } while( true );
}


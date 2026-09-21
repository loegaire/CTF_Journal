
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.unquote(string in, bool unescape, string out, string rem,
   error err) */

multireturn_string_string_error_ strconv_unquote(string in,bool unescape)

{
  long lVar1;
  byte bVar2;
  uint8 uVar3;
  runtime__type *prVar4;
  runtime__type *prVar5;
  runtime__type *n;
  runtime__type *prVar6;
  undefined1 *puVar7;
  uint8 *ptr;
  undefined8 in_RSI;
  runtime__type *prVar8;
  undefined8 in_RDI;
  ulong uVar9;
  runtime__type *prVar10;
  runtime__type *in_R8;
  runtime__type *prVar11;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string sVar12;
  __uint8 p;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  multireturn_string_string_error_ mVar13;
  multireturn_string_string_error_ mVar14;
  multireturn_string_string_error_ mVar15;
  multireturn_string_string_error_ mVar16;
  multireturn_string_string_error_ mVar17;
  multireturn_string_string_error_ mVar18;
  multireturn_string_string_error_ mVar19;
  multireturn_string_string_error_ mVar20;
  multireturn_string_string_error_ mVar21;
  multireturn_int32_bool_string_error_ mVar22;
  string in_spill;
  bool unescape_spill;
  int local_c8;
  undefined8 local_c0;
  runtime__type *local_b8;
  runtime__type *local_b0;
  long local_a8;
  runtime__type *local_a0;
  undefined4 local_8c;
  runtime__type *local_88;
  runtime__type *local_80;
  runtime__type *local_78;
  runtime__type *local_70;
  ulong local_68;
  undefined1 *local_60;
  runtime__type *local_58;
  runtime__type *local_50;
  runtime__type *local_48;
  runtime__type *local_40;
  runtime__type *local_38;
  runtime__type *local_30;
  runtime__type *local_28;
  runtime__type *local_20;
  runtime__type *local_18;
  runtime__type *local_10;
  
                    /* Unresolved local var: uint8 quote@[???]
                       Unresolved local var: int end@[???]
                       Unresolved local var: int ~R0@[???] */
  while (&local_58 <= *(runtime__type ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (in_spill.len < 2) {
    mVar16.out.len = (int)in_spill.str;
    mVar16.out.str = (uint8 *)in_spill.len;
    mVar16.err.tab = (runtime_itab *)in_RSI;
    mVar16.rem.len = in_RDI;
    mVar16.rem.str = (uint8 *)strconv_ErrSyntax.tab;
    mVar16.err.data = in_R8;
    return mVar16;
  }
  bVar2 = *in_spill.str;
  prVar5 = (runtime__type *)(in_spill.len + -1);
  local_80 = prVar5;
  local_30 = (runtime__type *)(in_spill.str + 1);
  internal_bytealg_IndexByteString();
  if ((long)local_c0 < 0) {
    mVar15.out.len = (int)(in_spill.str + 1);
    mVar15.out.str = (uint8 *)strconv_ErrSyntax.tab;
    mVar15.err.tab = (runtime_itab *)prVar5;
    mVar15.rem.len = in_RDI;
    mVar15.rem.str = strconv_ErrSyntax.data;
    mVar15.err.data = in_R8;
    return mVar15;
  }
  local_88 = local_c0;
  local_60 = (undefined1 *)((long)&local_c0->size + 2);
                    /* Unresolved local var: []uint8 buf@[???]
                       Unresolved local var: string in0@[???] */
  puVar7 = (undefined1 *)(ulong)bVar2;
  if ((bVar2 != 0x22) && (bVar2 != 0x27)) {
    if (bVar2 != 0x60) {
      mVar13.out.len._0_1_ = bVar2;
      mVar13.out.str = (uint8 *)strconv_ErrSyntax.tab;
      mVar13.out.len._1_7_ = 0;
      mVar13.err.tab = (runtime_itab *)prVar5;
      mVar13.rem.len = in_RDI;
      mVar13.rem.str = strconv_ErrSyntax.data;
      mVar13.err.data = in_R8;
      return mVar13;
    }
    if (unescape_spill) {
      if ((ulong)in_spill.len < local_60) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      internal_bytealg_IndexByteString();
      if (local_c0 == (runtime__type *)0xffffffffffffffff) {
        if ((ulong)in_spill.len < (undefined1 *)((long)&local_88->size + 1)) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAlen();
        }
        if (local_88 == (runtime__type *)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        local_c0 = (runtime__type *)(in_spill.str + (-(long)local_88 >> 0x3f & 1));
      }
      else {
                    /* Unresolved local var: []uint8 buf@[???] */
        local_40 = (runtime__type *)((long)&local_88[-1].ptrToThis + 3);
        runtime_makeslice((runtime__type *)&DAT_00225720,(ulong)unescape_spill,(int)local_88);
        in_R8 = (runtime__type *)0x0;
        prVar5 = local_c0;
        prVar6 = local_88;
        prVar4 = local_40;
                    /* Unresolved local var: int i@[???] */
        for (uVar9 = 1; (long)uVar9 < (long)((long)&prVar6->size + 1); uVar9 = uVar9 + 1) {
          if ((ulong)in_spill.len <= uVar9) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          uVar3 = in_spill.str[uVar9];
          if (uVar3 != 0xd) {
            prVar10 = (runtime__type *)((long)&in_R8->size + 1);
            prVar8 = prVar4;
            if (prVar4 < prVar10) {
              old_01.len = (int)&DAT_00225720;
              old_01.array = (void *)in_spill.len;
              old_01.cap = uVar9;
              local_68 = uVar9;
              local_50 = in_R8;
              runtime_growslice(prVar5,old_01,(int)prVar4);
              prVar10 = (runtime__type *)(local_a8 + 1);
              prVar5 = local_b0;
              prVar6 = local_88;
              prVar8 = local_a0;
              uVar9 = local_68;
              in_R8 = local_50;
              local_c0 = prVar4;
            }
            *(uint8 *)((long)&in_R8->size + (long)&prVar5->size) = uVar3;
            prVar4 = prVar8;
            in_R8 = prVar10;
          }
        }
        runtime_slicebytetostring((runtime_tmpBuf *)prVar5,(uint8 *)in_spill.len,(int)in_spill.str);
      }
    }
    else {
      local_c0 = (runtime__type *)in_spill.str;
      if ((ulong)in_spill.len < local_60) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
    }
    if (local_60 <= (ulong)in_spill.len) {
      lVar1 = (in_spill.len - (long)local_88) + -2;
      mVar21.rem.len = (ulong)local_60 & -lVar1 >> 0x3f;
      mVar21.out.len = (int)local_c0;
      mVar21.out.str = in_spill.str + mVar21.rem.len;
      mVar21.err.tab = (runtime_itab *)in_spill.str;
      mVar21.rem.str = (uint8 *)lVar1;
      mVar21.err.data = in_R8;
      return mVar21;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  if ((ulong)in_spill.len < local_60) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAlen();
  }
  internal_bytealg_IndexByteString();
  if (local_c0 == (runtime__type *)0xffffffffffffffff) {
    _local_c8 = CONCAT71(stack0xffffffffffffff39,10);
    internal_bytealg_IndexByteString();
                    /* Unresolved local var: bool valid@[???] */
    if (bVar2 == 0x22) {
      if ((ulong)in_spill.len < (undefined1 *)((long)&local_88->size + 1)) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      if (local_88 == (runtime__type *)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      s.len._0_1_ = 0x22;
      s.str = (uint8 *)local_88;
      s.len._1_7_ = 0;
      unicode_utf8_ValidString(s);
      local_c8._0_1_ = '\n';
    }
    else {
                    /* Unresolved local var: int n@[???] */
      if (bVar2 == 0x27) {
        if ((ulong)in_spill.len < (undefined1 *)((long)&local_88->size + 1)) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAlen();
        }
        if (local_88 == (runtime__type *)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        sVar12.len._0_1_ = 0x27;
        sVar12.str = (uint8 *)local_88;
        sVar12.len._1_7_ = 0;
        unicode_utf8_DecodeRuneInString(sVar12);
        if (local_60 == (undefined1 *)0x1) {
          if (local_c8 == 0xfffd) {
            local_c8._0_1_ = '\x01';
          }
          else {
            local_c8._0_1_ = '\x01';
          }
        }
        else {
          local_c8._0_1_ = '\0';
        }
      }
      else {
        local_c8._0_1_ = '\0';
      }
    }
    puVar7 = local_60;
    if ((char)local_c8 != '\0') {
      if (unescape_spill) {
        if (local_60 < (undefined1 *)((long)&local_88->size + 1)) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAlen();
        }
        if (local_88 == (runtime__type *)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
      }
      mVar14.rem.str = -((in_spill.len - (long)local_88) + -2) >> 0x3f;
      mVar14.out.len = (ulong)local_60 & mVar14.rem.str;
      mVar14.out.str = in_spill.str + mVar14.out.len;
      mVar14.err.tab = (runtime_itab *)local_88;
      mVar14.rem.len = in_RDI;
      mVar14.err.data = in_R8;
      return mVar14;
    }
  }
  if (unescape_spill) {
    local_48 = (runtime__type *)(((long)local_88 * 3 - ((long)local_88 * 3 + 6 >> 0x3f)) + 6 >> 1);
    runtime_makeslice((runtime__type *)&DAT_00225720,(int)puVar7,(int)local_48);
    prVar5 = local_48;
    prVar6 = local_c0;
  }
  else {
    prVar5 = (runtime__type *)0x0;
    prVar6 = (runtime__type *)0x0;
  }
  prVar10 = (runtime__type *)0x0;
  prVar4 = local_30;
  local_78 = local_80;
  do {
    prVar8 = local_c0;
    s_00.str = (uint8 *)(ulong)unescape_spill;
    n = prVar5;
    prVar11 = prVar10;
    if (((long)local_78 < 1) || ((byte)prVar4->size == bVar2)) break;
    s_00.len = (int)prVar4;
    local_58 = prVar10;
    local_48 = prVar5;
    local_20 = prVar6;
    local_10 = prVar4;
                    /* Unresolved local var: int32 r@[???]
                       Unresolved local var: string rem@[???] */
    mVar22 = strconv_UnquoteChar(s_00,(uint8)prVar5);
    mVar17.err.data = mVar22.err.data;
    n = (runtime__type *)((ulong)local_c0 & 0xffffffff);
    if (((char)local_10->size == '\n') || (local_a8 != 0)) {
      mVar17.out.len._0_1_ = local_c0._4_1_;
      mVar17.out.str = (uint8 *)strconv_ErrSyntax.tab;
      mVar17.out.len._1_7_ = 0;
      mVar17.err.tab = (runtime_itab *)local_a8;
      mVar17.rem.len = (int)local_10;
      mVar17.rem.str = strconv_ErrSyntax.data;
      return mVar17;
    }
    prVar4 = local_b8;
    local_78 = local_b0;
    prVar10 = local_58;
    prVar5 = local_48;
    prVar6 = local_20;
    if (unescape_spill) {
      local_28 = local_b8;
      if (((int)local_c0 < 0x80) || (local_c0._4_1_ == '\0')) {
        prVar4 = (runtime__type *)((long)&local_58->size + 1);
        prVar10 = prVar4;
        if (local_48 < prVar4) {
          local_c0 = local_48;
          old.len = (int)local_20;
          old.array = local_58;
          old.cap = (int)prVar4;
          runtime_growslice((runtime__type *)&DAT_00225720,old,1);
          prVar10 = (runtime__type *)0x1;
          prVar5 = local_a0;
          prVar6 = local_b0;
          local_b8 = prVar4;
        }
        n = (runtime__type *)((ulong)prVar8 & 0xffffffff);
        *(char *)((long)&local_58->size + (long)&prVar6->size) = (char)n;
        prVar4 = local_28;
      }
      else {
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: uint8[4] arr@[???] */
        local_8c = 0;
        p.len._0_1_ = local_c0._4_1_;
        p.array = (uint8 *)&local_8c;
        p.len._1_7_ = 0;
        p.cap._0_4_ = (int)local_c0;
        p.cap._4_4_ = 0;
        prVar5 = local_10;
        unicode_utf8_EncodeRune(p,(int32)local_10);
        if ((runtime__type *)&DAT_00000004 < local_b8) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAlen();
        }
        prVar6 = (runtime__type *)((long)&local_b8->size + (long)&local_58->size);
        n = local_b8;
        prVar4 = local_20;
        local_38 = prVar6;
        if (local_48 < prVar6) {
          local_70 = local_b8;
          local_c0 = local_48;
          old_00.len = (int)&DAT_00225720;
          old_00.array = local_48;
          old_00.cap = (int)prVar5;
          runtime_growslice(local_58,old_00,(int)local_20);
          n = local_70;
          local_48 = local_a0;
          prVar4 = local_b0;
          local_b8 = prVar6;
        }
        local_18 = prVar4;
        runtime_memmove();
        prVar4 = local_28;
        prVar10 = local_38;
        prVar5 = local_48;
        prVar6 = local_18;
      }
    }
    prVar11 = prVar5;
  } while (bVar2 != 0x27);
  uVar9 = (ulong)unescape_spill;
  if (((long)local_78 < 1) || ((byte)prVar4->size != bVar2)) {
    mVar20.out.len._0_1_ = bVar2;
    mVar20.out.str = (uint8 *)strconv_ErrSyntax.tab;
    mVar20.out.len._1_7_ = 0;
    mVar20.err.tab._0_1_ = unescape_spill;
    mVar20.rem.len = (int)prVar10;
    mVar20.err.tab._1_7_ = 0;
    mVar20.rem.str = strconv_ErrSyntax.data;
    mVar20.err.data = prVar11;
    return mVar20;
  }
  puVar7 = (undefined1 *)((long)&local_78[-1].ptrToThis + 3);
  ptr = (uint8 *)(-(long)puVar7 >> 0x3f & 1);
  mVar18.out.str = (runtime_tmpBuf *)(ptr + (long)&prVar4->size);
  if (unescape_spill) {
    local_38 = (runtime__type *)puVar7;
    local_10 = (runtime__type *)mVar18.out.str;
    sVar12 = runtime_slicebytetostring(mVar18.out.str,ptr,(int)n);
    mVar19.out.len = sVar12.len;
    mVar19.out.str = (uint8 *)local_38;
    mVar19.err.tab = (runtime_itab *)uVar9;
    mVar19.rem.len = (int)prVar10;
    mVar19.rem.str = (uint8 *)local_b8;
    mVar19.err.data = puVar7;
    return mVar19;
  }
  mVar18.out.len = in_spill.len - (long)local_78;
  if (mVar18.out.len + 1U <= (ulong)in_spill.len) {
    mVar18.err.tab = (runtime_itab *)in_spill.len;
    mVar18.rem.len = (int)prVar10;
    mVar18.rem.str = (uint8 *)(mVar18.out.len + 1U);
    mVar18.err.data = puVar7;
    return mVar18;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAlen();
}


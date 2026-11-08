
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.ParseUint(string s, int base, int bitSize, uint64 ~r3,
   error ~r4) */

multireturn_uint64_error__conflict strconv_ParseUint(string s,int base,int bitSize)

{
  undefined1 auVar1 [16];
  bool bVar2;
  ulong uVar3;
  undefined8 *extraout_RAX;
  undefined8 *extraout_RAX_00;
  undefined8 *extraout_RAX_01;
  undefined8 *extraout_RAX_02;
  undefined8 *extraout_RAX_03;
  undefined8 *extraout_RAX_04;
  undefined8 *extraout_RAX_05;
  undefined8 *extraout_RAX_06;
  undefined8 *extraout_RAX_07;
  undefined8 *extraout_RAX_08;
  long extraout_RAX_09;
  long extraout_RAX_10;
  void *pvVar5;
  uint8 *puVar6;
  byte bVar7;
  uint8 *puVar8;
  long lVar9;
  uint8 *puVar10;
  uint8 *puVar11;
  byte bVar12;
  long in_FS_OFFSET;
  string fn;
  string fn_00;
  string s_00;
  multireturn_uint64_error__conflict mVar13;
  multireturn_uint64_error__conflict mVar14;
  multireturn_uint64_error__conflict mVar15;
  multireturn_uint64_error__conflict mVar16;
  multireturn_uint64_error__conflict mVar17;
  multireturn_uint64_error__conflict mVar18;
  multireturn_uint64_error__conflict mVar19;
  multireturn_uint64_error__conflict mVar20;
  multireturn_uint64_error__conflict mVar21;
  string str;
  string str_00;
  string s_spill;
  int base_spill;
  int bitSize_spill;
  undefined8 *local_40;
  char local_38;
  undefined8 local_20;
  uint8 *puVar4;
  undefined7 extraout_var;
  
  mVar15.~r4.tab = s.len;
                    /* Unresolved local var: uint64 cutoff@[???]
                       Unresolved local var: uint64 maxVal@[???]
                       Unresolved local var: bool underscores@[???]
                       Unresolved local var: uint64 n@[???]
                       Unresolved local var: string s0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (s_spill.len == 0) {
    runtime_newobject((runtime__type *)&DAT_00258d20);
    local_40[1] = 9;
    *local_40 = &DAT_0028d51d;
    local_40[3] = 0;
    if (runtime_writeBarrier._0_4_ == 0) {
      local_40[2] = s_spill.str;
    }
    else {
      runtime_gcWriteBarrierCX();
      local_40 = extraout_RAX;
    }
    pvVar5 = strconv_ErrSyntax.data;
    local_40[4] = strconv_ErrSyntax.tab;
    if (runtime_writeBarrier._0_4_ == 0) {
      local_40[5] = pvVar5;
    }
    else {
      runtime_gcWriteBarrierCX();
      local_40 = extraout_RAX_00;
    }
    mVar15.~r3 = (uint64)local_40;
    mVar15.~r4.data = go_itab__strconv_NumError_error;
    return mVar15;
  }
  uVar3 = base_spill;
  puVar8 = s_spill.str;
  lVar9 = s_spill.len;
  if (0x22 < base_spill - 2U) {
    if (base_spill != 0) {
      fn_00.len = base_spill;
      fn_00.str = s_spill.str;
      str_00.len = bitSize;
      str_00.str = (uint8 *)base;
      strconv_baseError(fn_00,str_00,base_spill - 2U);
      mVar14.~r4.tab = (runtime_itab *)base_spill;
      mVar14.~r3 = local_20;
      mVar14.~r4.data = go_itab__strconv_NumError_error;
      return mVar14;
    }
    if (*s_spill.str == 0x30) {
      if (2 < s_spill.len) {
        bVar7 = s_spill.str[1] | 0x20;
        if (bVar7 == 0x62) {
          uVar3 = 2;
          puVar8 = s_spill.str + 2;
          lVar9 = s_spill.len + -2;
          goto LAB_0051fded;
        }
        if (2 < s_spill.len) {
          if (bVar7 == 0x6f) {
            uVar3 = 8;
            puVar8 = s_spill.str + 2;
            lVar9 = s_spill.len + -2;
            goto LAB_0051fded;
          }
          if ((2 < s_spill.len) && (bVar7 == 0x78)) {
            uVar3 = 0x10;
            puVar8 = s_spill.str + 2;
            lVar9 = s_spill.len + -2;
            goto LAB_0051fded;
          }
        }
      }
      uVar3 = 8;
      puVar8 = s_spill.str + (-(s_spill.len + -1) >> 0x3f & 1);
      lVar9 = s_spill.len + -1;
    }
    else {
      uVar3 = 10;
    }
  }
LAB_0051fded:
  if (bitSize_spill == 0) {
    bitSize_spill = 0x40;
  }
  else if (0x40 < (ulong)bitSize_spill) {
    fn.len = base_spill;
    fn.str = &DAT_0028d51d;
    str.len = (int)puVar8;
    str.str = (uint8 *)base;
    strconv_bitSizeError(fn,str,(int)s_spill.str);
    mVar13.~r4.tab = (runtime_itab *)base_spill;
    mVar13.~r3 = local_20;
    mVar13.~r4.data = go_itab__strconv_NumError_error;
    return mVar13;
  }
  if (uVar3 == 10) {
                    /* Unresolved local var: uint8 d@[???]
                       Unresolved local var: uint64 n1@[???] */
    puVar6 = (uint8 *)0x199999999999999a;
  }
  else if (uVar3 == 0x10) {
    puVar6 = (uint8 *)0x1000000000000000;
  }
  else {
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicdivide();
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar3;
    puVar6 = (uint8 *)(SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) + 1);
  }
  puVar4 = (uint8 *)((1L << ((byte)bitSize_spill & 0x3f) & -(ulong)((ulong)bitSize_spill < 0x40)) -
                    1);
  pvVar5 = (void *)0x0;
  bVar2 = false;
  puVar11 = (uint8 *)0x0;
  do {
    if (lVar9 <= (long)pvVar5) {
      if (bVar2) {
        s_00.len = base_spill;
        s_00.str = puVar4;
        bVar2 = strconv_underscoreOK(s_00);
        puVar4 = (uint8 *)CONCAT71(extraout_var,bVar2);
        if (local_38 == '\0') {
          runtime_newobject((runtime__type *)&DAT_00258d20);
          *(undefined8 *)(s_spill.len + 8) = 9;
          *(undefined **)s_spill.len = &DAT_0028d51d;
          *(int *)(s_spill.len + 0x18) = s_spill.len;
          if (runtime_writeBarrier._0_4_ == 0) {
            *(uint8 **)(s_spill.len + 0x10) = s_spill.str;
          }
          else {
            runtime_gcWriteBarrierCX();
            s_spill.len = extraout_RAX_09;
          }
          pvVar5 = strconv_ErrSyntax.data;
          *(runtime_itab **)(s_spill.len + 0x20) = strconv_ErrSyntax.tab;
          if (runtime_writeBarrier._0_4_ == 0) {
            *(void **)(s_spill.len + 0x28) = pvVar5;
          }
          else {
            runtime_gcWriteBarrierCX();
            s_spill.len = extraout_RAX_10;
          }
          mVar21.~r4.tab = (runtime_itab *)base_spill;
          mVar21.~r3 = s_spill.len;
          mVar21.~r4.data = go_itab__strconv_NumError_error;
          return mVar21;
        }
      }
      mVar20.~r4.tab = (runtime_itab *)base_spill;
      mVar20.~r3 = (uint64)puVar4;
      mVar20.~r4.data = pvVar5;
      return mVar20;
    }
    bVar7 = puVar8[(long)pvVar5];
    if ((bVar7 == 0x5f) && (base_spill == 0)) {
      bVar2 = true;
    }
    else {
      bVar12 = bVar7 - 0x30;
      if (9 < bVar12) {
        bVar7 = bVar7 | 0x20;
        if ((bVar7 < 0x61) || (0x7a < bVar7)) {
          runtime_newobject((runtime__type *)&DAT_00258d20);
          local_40[1] = 9;
          *local_40 = &DAT_0028d51d;
          local_40[3] = s_spill.len;
          if (runtime_writeBarrier._0_4_ == 0) {
            local_40[2] = s_spill.str;
          }
          else {
            runtime_gcWriteBarrierCX();
            local_40 = extraout_RAX_07;
          }
          pvVar5 = strconv_ErrSyntax.data;
          local_40[4] = strconv_ErrSyntax.tab;
          if (runtime_writeBarrier._0_4_ == 0) {
            local_40[5] = pvVar5;
          }
          else {
            runtime_gcWriteBarrierCX();
            local_40 = extraout_RAX_08;
          }
          mVar19.~r4.tab = (runtime_itab *)base_spill;
          mVar19.~r3 = (uint64)local_40;
          mVar19.~r4.data = go_itab__strconv_NumError_error;
          return mVar19;
        }
        bVar12 = bVar7 + 0xa9;
      }
      if ((byte)uVar3 <= bVar12) {
        runtime_newobject((runtime__type *)&DAT_00258d20);
        local_40[1] = 9;
        *local_40 = &DAT_0028d51d;
        local_40[3] = s_spill.len;
        if (runtime_writeBarrier._0_4_ == 0) {
          local_40[2] = s_spill.str;
        }
        else {
          runtime_gcWriteBarrierCX();
          local_40 = extraout_RAX_05;
        }
        pvVar5 = strconv_ErrSyntax.data;
        local_40[4] = strconv_ErrSyntax.tab;
        if (runtime_writeBarrier._0_4_ == 0) {
          local_40[5] = pvVar5;
        }
        else {
          runtime_gcWriteBarrierCX();
          local_40 = extraout_RAX_06;
        }
        mVar18.~r4.tab = (runtime_itab *)base_spill;
        mVar18.~r3 = (uint64)local_40;
        mVar18.~r4.data = go_itab__strconv_NumError_error;
        return mVar18;
      }
      if (puVar6 <= puVar11) {
        runtime_newobject((runtime__type *)&DAT_00258d20);
        local_40[1] = 9;
        *local_40 = &DAT_0028d51d;
        local_40[3] = s_spill.len;
        if (runtime_writeBarrier._0_4_ == 0) {
          local_40[2] = s_spill.str;
        }
        else {
          runtime_gcWriteBarrierCX();
          local_40 = extraout_RAX_03;
        }
        pvVar5 = strconv_ErrRange.data;
        local_40[4] = strconv_ErrRange.tab;
        if (runtime_writeBarrier._0_4_ == 0) {
          local_40[5] = pvVar5;
        }
        else {
          runtime_gcWriteBarrierCX();
          local_40 = extraout_RAX_04;
        }
        mVar17.~r4.tab = (runtime_itab *)base_spill;
        mVar17.~r3 = (uint64)local_40;
        mVar17.~r4.data = go_itab__strconv_NumError_error;
        return mVar17;
      }
      puVar10 = (uint8 *)((long)puVar11 * uVar3);
      puVar11 = puVar10 + bVar12;
      if ((puVar11 <= puVar10 && (long)puVar10 - (long)puVar11 != 0) || (puVar4 < puVar11)) {
        runtime_newobject((runtime__type *)&DAT_00258d20);
        local_40[1] = 9;
        *local_40 = &DAT_0028d51d;
        local_40[3] = s_spill.len;
        if (runtime_writeBarrier._0_4_ == 0) {
          local_40[2] = s_spill.str;
        }
        else {
          runtime_gcWriteBarrierCX();
          local_40 = extraout_RAX_01;
        }
        pvVar5 = strconv_ErrRange.data;
        local_40[4] = strconv_ErrRange.tab;
        if (runtime_writeBarrier._0_4_ == 0) {
          local_40[5] = pvVar5;
        }
        else {
          runtime_gcWriteBarrierCX();
          local_40 = extraout_RAX_02;
        }
        mVar16.~r4.tab = (runtime_itab *)base_spill;
        mVar16.~r3 = (uint64)local_40;
        mVar16.~r4.data = go_itab__strconv_NumError_error;
        return mVar16;
      }
    }
    pvVar5 = (void *)((long)pvVar5 + 1);
  } while( true );
}


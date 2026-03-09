
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.(*Replacer).build(strings.Replacer * b, strings.replacer
   ~r0) */

strings_replacer strings___Replacer__build(strings_Replacer *b)

{
  runtime_itab *prVar1;
  string *ptr;
  runtime_itab *cap;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  runtime__type *extraout_RAX;
  runtime_tmpBuf *buf;
  uintptr uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  runtime_itab *prVar10;
  ulong uVar11;
  runtime__type *prVar12;
  runtime__type *prVar13;
  undefined8 *puVar14;
  uintptr *puVar15;
  runtime_itab *prVar16;
  long in_FS_OFFSET;
  byte bVar17;
  string pattern;
  strings_replacer sVar18;
  strings_replacer sVar19;
  strings_replacer sVar20;
  strings_replacer sVar21;
  runtime_slice old;
  string s;
  __string oldnew;
  strings_Replacer *b_spill;
  runtime__type *local_c0;
  runtime__type *local_b8;
  runtime_itab *local_b0;
  runtime_itab *local_a8;
  runtime__type *local_a0;
  uintptr local_98;
  undefined8 local_90;
  byte local_81;
  int local_80;
  ulong local_78;
  runtime_tmpBuf *local_70;
  runtime_itab *local_68;
  long local_60;
  ulong local_58;
  uint8 *local_50;
  string *local_48;
  uint8 *local_40;
  runtime_itab *local_38;
  uintptr *local_30;
  runtime__type *local_20;
  runtime__type *local_18;
  runtime__type *local_10;
  
  bVar17 = 0;
                    /* Unresolved local var: bool allNewBytes@[???]
                       Unresolved local var: strings.byteStringReplacer * &r@[???]
                       Unresolved local var: []string oldnew@[???] */
  while (&local_48 <= *(string ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_78 = (b_spill->oldnew).len;
  ptr = (b_spill->oldnew).array;
  if ((local_78 == 2) && (puVar14 = (undefined8 *)ptr->len, 1 < (long)puVar14)) {
    local_50 = ptr[1].str;
    local_80 = ptr[1].len;
    pattern.len = (int)ptr;
    pattern.str = local_50;
    strings_makeStringFinder(pattern);
    local_18 = local_b8;
    runtime_newobject(local_b8);
    if (runtime_writeBarrier._0_4_ == 0) {
      *puVar14 = local_18;
    }
    else {
      runtime_gcWriteBarrier();
    }
    puVar14[2] = local_80;
    if (runtime_writeBarrier._0_4_ == 0) {
      puVar14[1] = local_50;
    }
    else {
      runtime_gcWriteBarrierDX();
    }
    sVar18.data = ptr;
    sVar18.tab = (runtime_itab *)go_itab__strings_singleStringReplacer_strings_replacer;
    return sVar18;
  }
  uVar5 = 0;
  bVar2 = true;
  while( true ) {
    if ((long)local_78 <= (long)uVar5) {
      local_48 = ptr;
      if (!bVar2) {
        runtime_newobject((runtime__type *)&DAT_0024e260);
        local_10 = local_c0;
        local_58 = local_78 >> 1;
        runtime_makeslice(local_c0,(int)ptr,0x225520);
        prVar12 = local_10 + 0x80;
        local_20 = prVar12;
        if (runtime_writeBarrier._0_4_ == 0) {
          local_10->size = 0;
          puVar15 = &local_10->ptrdata;
          for (lVar8 = 0x302; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar15 = 0;
            puVar15 = puVar15 + (ulong)bVar17 * -2 + 1;
          }
          local_10[0x80].size = (uintptr)local_b0;
        }
        else {
          runtime_typedmemclr(local_10,ptr);
          prVar12 = local_20;
          runtime_gcWriteBarrier();
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint8 o@[???]
                       Unresolved local var: string n@[???] */
        }
        local_10[0x80].hash = (undefined4)local_58;
        local_10[0x80].tflag = local_58._4_1_;
        local_10[0x80].align = local_58._5_1_;
        local_10[0x80].fieldAlign = local_58._6_1_;
        local_10[0x80].kind = local_58._7_1_;
        prVar13 = local_10;
        uVar5 = local_78;
        while( true ) {
          uVar11 = uVar5 - 2;
          if ((long)uVar11 < 0) {
            sVar20.data = prVar12;
            sVar20.tab = (runtime_itab *)go_itab__strings_byteStringReplacer_strings_replacer;
            return sVar20;
          }
          if (local_78 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          if (local_48[uVar11].len == 0) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          uVar9 = (ulong)*local_48[uVar11].str;
          uVar5 = uVar5 - 1;
          if (local_78 <= uVar5) break;
          local_60 = uVar9 * 3;
          local_30 = &prVar13->size + uVar9 * 3;
          buf = (runtime_tmpBuf *)local_48[uVar5].len;
          uVar7 = local_78;
          local_58 = uVar11;
          if ((&prVar13->size)[uVar9 * 3] == 0) {
            local_81 = *local_48[uVar11].str;
            local_70 = (runtime_tmpBuf *)local_48[uVar5].len;
            local_40 = local_48[uVar5].str;
            runtime_slicebytetostring((runtime_tmpBuf *)&local_81,(uint8 *)prVar12,local_78);
            prVar12 = local_10 + 0x80;
            uVar3 = prVar12->size;
            uVar4 = prVar12->ptrdata;
            old.len = uVar4;
            old.array = (void *)uVar3;
            cap = *(runtime_itab **)&local_10[0x80].hash;
            prVar1 = (runtime_itab *)(local_10[0x80].ptrdata + 1);
            uVar6 = local_10[0x80].ptrdata;
            prVar10 = local_b0;
            prVar12 = (runtime__type *)prVar12->size;
            prVar16 = local_a8;
            if (cap < prVar1) {
              local_68 = local_a8;
              local_38 = local_b0;
              old.cap = (int)local_a8;
              runtime_growslice((runtime__type *)&DAT_00225520,old,(int)cap);
              local_10[0x80].hash = (undefined4)local_90;
              local_10[0x80].tflag = local_90._4_1_;
              local_10[0x80].align = local_90._5_1_;
              local_10[0x80].fieldAlign = local_90._6_1_;
              local_10[0x80].kind = local_90._7_1_;
              uVar6 = local_98;
              local_b0 = cap;
              local_a8 = prVar1;
              if (runtime_writeBarrier._0_4_ == 0) {
                local_10[0x80].size = (uintptr)local_a0;
                prVar10 = local_38;
                prVar12 = local_a0;
                prVar16 = local_68;
              }
              else {
                runtime_gcWriteBarrier();
                prVar10 = local_38;
                prVar12 = extraout_RAX;
                prVar16 = local_68;
              }
            }
            local_10[0x80].ptrdata = uVar6 + 1;
            uVar7 = uVar6 * 0x10;
            (&prVar12->ptrdata)[uVar6 * 2] = (uintptr)prVar16;
            if (runtime_writeBarrier._0_4_ == 0) {
              (&prVar12->size)[uVar6 * 2] = (uintptr)prVar10;
              buf = local_70;
            }
            else {
              runtime_gcWriteBarrierDX();
              buf = local_70;
            }
          }
          s.len = uVar7;
          s.str = (uint8 *)prVar12;
          runtime_stringtoslicebyte(buf,s);
          (&local_10->ptrdata)[local_60] = (uintptr)local_a8;
          *(runtime__type **)(&local_10->hash + local_60 * 2) = local_a0;
          prVar13 = local_10;
          if (runtime_writeBarrier._0_4_ == 0) {
            (&local_10->size)[local_60] = (uintptr)local_b0;
            prVar12 = local_20;
            uVar5 = local_58;
          }
          else {
            runtime_gcWriteBarrier();
            prVar12 = local_20;
            uVar5 = local_58;
          }
        }
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
                    /* Unresolved local var: strings.byteReplacer * &r@[???] */
      runtime_newobject((runtime__type *)&DAT_00236ce0);
                    /* Unresolved local var: int i@[???] */
      for (lVar8 = 0; uVar5 = local_78, lVar8 < 0x100; lVar8 = lVar8 + 1) {
        *(char *)((long)&local_c0->size + lVar8) = (char)lVar8;
      }
      while( true ) {
        uVar11 = uVar5 - 2;
        if ((long)uVar11 < 0) {
          sVar21.data = local_48;
          sVar21.tab = (runtime_itab *)local_c0;
          return sVar21;
        }
        if (local_78 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        if (local_48[uVar11].len == 0) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        uVar5 = uVar5 - 1;
        if (local_78 <= uVar5) break;
        if (local_48[uVar5].len == 0) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
                    /* Unresolved local var: uint8 n@[???] */
        *(uint8 *)((long)&local_c0->size + (ulong)*local_48[uVar11].str) = *local_48[uVar5].str;
        uVar5 = uVar11;
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (local_78 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    oldnew.array = uVar5 * 0x10;
    if (ptr[uVar5].len != 1) break;
    if (local_78 <= uVar5 + 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (ptr[uVar5 + 1].len != 1) {
      bVar2 = false;
    }
                    /* Unresolved local var: int i@[???] */
    uVar5 = uVar5 + 2;
  }
  oldnew.len = (int)ptr;
  oldnew.cap = local_78;
  strings_makeGenericReplacer(oldnew);
  sVar19.data = ptr;
  sVar19.tab = local_b0;
  return sVar19;
}


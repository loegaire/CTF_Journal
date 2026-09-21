
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.Map(func(int32)_int32 * * mapping, string s, string ~r2)
    */

string strings_Map(func_int32__int32 **mapping,string s)

{
  long cap;
  int iVar1;
  uint8 *puVar2;
  int cap_00;
  strings_Builder *psVar3;
  uint8 *puVar4;
  strings_Builder *psVar5;
  int iVar7;
  int32 *piVar8;
  strings_Builder *in_RDI;
  int iVar9;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  string sVar10;
  string s_02;
  string sVar11;
  interface___ e;
  interface___ e_00;
  interface___ e_01;
  interface___ e_02;
  runtime_slice rVar12;
  runtime_slice old;
  multireturn_int32_int_ mVar13;
  func_int32__int32 **mapping_spill;
  string s_spill;
  uint8 *local_b8;
  strings_Builder *local_b0;
  uint8 *local_a8;
  strings_Builder *local_a0;
  uint8 *local_98;
  long local_90;
  int local_88;
  uint8 *local_40;
  uint8 *local_38;
  uint8 *local_30;
  strings_Builder b;
  uint8 *puVar6;
  
  old.cap = in_RDI;
  while (&local_40 <= *(uint8 ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  b.addr = (strings_Builder *)0x0;
  b.buf.array = (uint8 *)0x0;
  b.buf.len = 0;
  b.buf.cap = 0;
  psVar5 = (strings_Builder *)0x0;
  puVar6 = local_b8;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int32 c@[???] */
LAB_005b0cd2:
  local_b8 = puVar6;
  psVar3 = psVar5;
  if (s_spill.len <= (long)psVar3) goto LAB_005b10f6;
  piVar8 = (int32 *)(ulong)s_spill.str[(long)psVar3];
  if (s_spill.str[(long)psVar3] < 0x80) {
    psVar5 = (strings_Builder *)((long)&psVar3->addr + 1);
  }
  else {
    local_b8 = (uint8 *)s_spill.len;
    s_00.len = (int)s_spill.str;
    s_00.str = (uint8 *)psVar3;
    runtime_decoderune(s_00,s_spill.len);
    piVar8 = (int32 *)((ulong)local_a8 & 0xffffffff);
    psVar5 = local_a0;
    local_b0 = psVar3;
  }
  puVar2 = local_b8;
  iVar7 = (int)piVar8;
                    /* Unresolved local var: int32 r@[???]
                       Unresolved local var: int width@[???] */
  old.cap = psVar5;
  (**mapping_spill)((int32)psVar5,piVar8);
  iVar1 = (int)local_b8;
  s_01.str = (uint8 *)((ulong)local_b8 & 0xffffffff);
  if (iVar7 == (int)local_b8) {
    puVar6 = local_b8;
    if (iVar7 != 0xfffd) goto LAB_005b0cd2;
LAB_005b0d98:
    if ((ulong)s_spill.len < psVar3) goto LAB_005b1325;
    s_01.len = s_spill.len - (long)psVar3;
    unicode_utf8_DecodeRuneInString(s_01);
    puVar4 = local_a8;
    if ((local_a8 == (uint8 *)0x1) ||
       (puVar6 = (uint8 *)(s_spill.len - (long)psVar3), (int)local_b0 != (int)local_b8))
    goto code_r0x005b0e5e;
    goto LAB_005b0cd2;
  }
  if (iVar7 == 0xfffd) goto LAB_005b0d98;
  if (iVar7 < 0) {
    puVar4 = (uint8 *)0xffffffffffffffff;
  }
  else if (iVar7 < 0x80) {
    puVar4 = (uint8 *)0x1;
  }
  else if (iVar7 < 0x800) {
    puVar4 = (uint8 *)0x2;
  }
  else if (iVar7 - 0xd800U < 0x800) {
    puVar4 = (uint8 *)0xffffffffffffffff;
  }
  else if (iVar7 < 0x10000) {
    puVar4 = (uint8 *)0x3;
  }
  else if (iVar7 < 0x110000) {
    puVar4 = &DAT_00000004;
  }
  else {
    puVar4 = (uint8 *)0xffffffffffffffff;
  }
code_r0x005b0e5e:
  cap_00 = b.buf.len;
  e_01.data = (void *)((ulong)local_b8 & 0xffffffff);
  if (b.addr == (strings_Builder *)0x0) {
    b.addr = &b;
  }
  else if (b.addr != &b) goto LAB_005b1306;
  if (-1 < s_spill.len + 4) {
    puVar6 = b.buf.array;
    cap = b.buf.cap;
    if (b.buf.cap - b.buf.len < s_spill.len + 4) {
                    /* Unresolved local var: []uint8 buf@[???] */
      cap = s_spill.len + b.buf.cap * 2 + 4;
      runtime_makeslice((runtime__type *)&DAT_00225720,(int)e_01.data,cap);
      puVar6 = local_a8;
      if (b.buf.array != local_a8) {
        local_30 = local_a8;
        runtime_memmove();
        puVar6 = local_30;
      }
    }
    b.buf.cap = cap;
    b.buf.array = puVar6;
    old.array = (void *)((ulong)local_b8 & 0xffffffff);
    old.cap = &b;
    b.buf.len = cap_00;
    if (psVar3 <= (ulong)s_spill.len) {
      psVar5 = old.cap;
      if ((b.addr == (strings_Builder *)0x0) || (psVar5 = b.addr, b.addr == old.cap)) {
        b.addr = psVar5;
        psVar5 = (strings_Builder *)((long)&psVar3->addr + cap_00);
        iVar9 = b.buf.cap;
        local_38 = b.buf.array;
        if ((ulong)b.buf.cap < psVar5) {
          local_a8 = (uint8 *)b.buf.cap;
          old.len = (int)psVar3;
          rVar12 = runtime_growslice((runtime__type *)&DAT_00225720,old,cap_00);
          old.array = (void *)rVar12.len;
          iVar9 = local_88;
          local_38 = local_98;
          local_a0 = psVar5;
        }
        local_b8 = s_spill.str;
        runtime_memmove();
        b.buf.array = local_38;
        b.buf.len = (int)psVar5;
        b.buf.cap = iVar9;
        if (-1 < iVar1) {
          local_b8 = (uint8 *)((ulong)puVar2 & 0xffffffff);
          strings___Builder__WriteRune
                    ((strings_Builder *)((ulong)puVar2 & 0xffffffff),(int32)old.array);
        }
        puVar4 = puVar4 + (long)psVar3;
        if ((ulong)s_spill.len < puVar4) {
LAB_005b12c0:
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        s_spill.len = s_spill.len - (long)puVar4;
        s_spill.str = s_spill.str + ((ulong)puVar4 & -s_spill.len >> 0x3f);
LAB_005b10f6:
        if (b.buf.cap == 0) {
          sVar10.len = s_spill.len;
          sVar10.str = s_spill.str;
          return sVar10;
        }
        psVar5 = (strings_Builder *)0x0;
        local_40 = s_spill.str;
                    /* Unresolved local var: int32 c@[???] */
        do {
          while( true ) {
            do {
              if (s_spill.len <= (long)psVar5) {
                sVar11.len = s_spill.len;
                sVar11.str = b.buf.array;
                return sVar11;
              }
              piVar8 = (int32 *)(ulong)local_40[(long)&psVar5->addr];
              if (local_40[(long)&psVar5->addr] < 0x80) {
                psVar5 = (strings_Builder *)((long)&psVar5->addr + 1);
                puVar6 = (uint8 *)s_spill.len;
              }
              else {
                s_02.len = s_spill.len;
                s_02.str = local_40;
                mVar13 = runtime_decoderune(s_02,(int)psVar5);
                puVar6 = (uint8 *)mVar13.pos;
                piVar8 = (int32 *)((ulong)local_a8 & 0xffffffff);
                psVar5 = local_a0;
                local_b8 = (uint8 *)s_spill.len;
              }
              puVar2 = local_b8;
                    /* Unresolved local var: int32 r@[???] */
              (**mapping_spill)((int32)old.cap,piVar8);
            } while ((int)local_b8 < 0);
            if ((int)local_b8 < 0x80) break;
            strings___Builder__WriteRune(&b,(int32)puVar6);
          }
          if (b.addr == (strings_Builder *)0x0) {
            b.addr = &b;
          }
          else if (b.addr != &b) {
            e.data = &b;
            e._type = (runtime__type *)&net_http__stmp_78;
            runtime_gopanic(e);
            goto LAB_005b12c0;
          }
          psVar3 = (strings_Builder *)(b.buf.len + 1);
          old.cap = (strings_Builder *)b.buf.cap;
          if ((ulong)b.buf.cap < psVar3) {
            local_b8 = b.buf.array;
            local_a8 = (uint8 *)b.buf.cap;
            rVar12.len = b.buf.len;
            rVar12.array = psVar3;
            rVar12.cap = b.buf.cap;
            runtime_growslice((runtime__type *)&DAT_00225720,rVar12,(int)b.buf.array);
            b.buf.cap = local_88;
            b.buf.array = local_98;
            b.buf.len = local_90;
            local_a0 = psVar3;
          }
          b.buf.array[b.buf.len] = (uint8)puVar2;
          b.buf.len = b.buf.len + 1;
        } while( true );
      }
      e_00.data = old.array;
      e_00._type = (runtime__type *)&net_http__stmp_78;
      runtime_gopanic(e_00);
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAlen();
  }
  e_01._type = (runtime__type *)&net_http__stmp_79;
  runtime_gopanic(e_01);
LAB_005b1306:
  e_02.data = e_01.data;
  e_02._type = (runtime__type *)&net_http__stmp_78;
  runtime_gopanic(e_02);
LAB_005b1325:
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}



/* WARNING: Removing unreachable block (ram,0x004c6096) */
/* WARNING: Unknown calling convention */

void runtime_heapBitsSetType(uintptr x,uintptr size,uintptr dataSize,runtime__type *typ)

{
  runtime_heapArena *prVar1;
  byte *allocSize;
  int iVar2;
  uint uVar5;
  uint uVar6;
  uint uVar8;
  ulong uVar3;
  sbyte sVar4;
  uint8 *puVar9;
  uint8 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  byte bVar16;
  byte *pbVar17;
  byte *pbVar18;
  long in_FS_OFFSET;
  bool bVar19;
  string s;
  string sVar20;
  string s_00;
  string s_01;
  runtime_heapBits h;
  runtime_heapBits h_00;
  runtime_heapBits h_01;
  runtime_heapBits h_02;
  runtime_heapBits rVar21;
  runtime_heapBits h_04;
  uintptr x_spill;
  uintptr size_spill;
  uintptr dataSize_spill;
  runtime__type *typ_spill;
  uint8 *local_f0;
  uint8 *local_e8;
  undefined8 local_e0;
  uint8 *local_d8;
  uint8 *local_d0;
  byte *local_c8;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_80 [2];
  ulong local_70;
  uint8 *local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  uint8 *local_48;
  uint8 *local_40;
  byte *local_38;
  uint8 *local_30;
  byte *local_28;
  uint8 *local_20;
  uint8 *local_18;
  uintptr local_10;
  runtime_heapBits h_03;
  uint uVar7;
  
                    /* Unresolved local var: uint8 * ptrmask@[???]
                       Unresolved local var: uint8 * p@[???]
                       Unresolved local var: uintptr b@[???]
                       Unresolved local var: uintptr nb@[???]
                       Unresolved local var: uint8 * endp@[???]
                       Unresolved local var: uintptr endnb@[???]
                       Unresolved local var: uintptr pbits@[???]
                       Unresolved local var: uintptr w@[???]
                       Unresolved local var: uintptr nw@[???]
                       Unresolved local var: uint8 * hbitp@[???]
                       Unresolved local var: uintptr hb@[???]
                       Unresolved local var: runtime.heapBits h@[???] */
  while (local_80 <= *(ulong **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (size_spill == 8) {
    return;
  }
                    /* Unresolved local var: runtime.heapArena * ha@[???] */
  local_50 = x_spill + 0x800000000000 >> 0x1a;
  if (0x3fffff < local_50) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndexU();
  }
  prVar1 = (*runtime_mheap_.arenas[0])[local_50];
  if (prVar1 == (runtime_heapArena *)0x0) {
                    /* Unresolved local var: runtime.heapArena * ha@[???] */
    puVar10 = (uint8 *)0x0;
    uVar11 = 0;
    puVar9 = (uint8 *)0x0;
    uVar3 = 0;
  }
  else {
    puVar10 = prVar1->bitmap + (x_spill >> 5 & 0x1fffff);
    uVar11 = x_spill >> 3 & 3;
    puVar9 = prVar1->bitmap + 0x1fffff;
    uVar3 = local_50;
  }
  allocSize = typ_spill->gcdata;
  h_02.arena = (uint)uVar11;
  rVar21.shift = SUB84(puVar9,0);
  if (size_spill == 0x10) {
                    /* Unresolved local var: uint32 hb@[???] */
    sVar4 = (sbyte)uVar11;
    if (typ_spill->size == 8) {
      *puVar10 = *puVar10 | (byte)(0x33 << sVar4) & -(h_02.arena < 0x20);
      return;
    }
    uVar3 = typ_spill->ptrdata >> 3;
    *puVar10 = -(h_02.arena < 0x20) &
               (byte)((*allocSize & 3 |
                      (-(uint)(uVar3 < 0x20) & 0x10 << ((byte)uVar3 & 0x1f)) - 1 & 0xf0) << sVar4) |
               ~((byte)(0x33 << sVar4) & -(h_02.arena < 0x20)) & *puVar10;
    return;
  }
  if (size_spill == 0x18) {
                    /* Unresolved local var: uint8 b@[???]
                       Unresolved local var: uint8 hb@[???] */
    uVar5 = (uint)*allocSize;
    if (typ_spill->size == 8) {
      uVar5 = 7;
    }
    uVar5 = (uVar5 & 7) << 4 | uVar5 & 7;
    uVar7 = (uint)(((byte)uVar5 & 0x40) >> 1);
    uVar6 = uVar7 | uVar5;
    uVar8 = uVar6 | 0x10;
    bVar15 = (byte)uVar8;
    if (h_02.arena < 2) {
      if (h_02.arena == 0) {
        *puVar10 = *puVar10 & 0x88 | (byte)uVar6 | 0x10;
      }
      else {
        *puVar10 = (byte)(uVar8 << 1) | *puVar10 & 0x11;
      }
    }
    else if (h_02.arena == 2) {
      *puVar10 = (byte)((uVar7 | uVar5 & 0x33 | 0x10) << 2) | *puVar10 & 0x33;
      if (puVar10 == puVar9) {
        rVar21.bitp = (uint8 *)uVar3;
        rVar21.last = (uint8 *)uVar11;
        rVar21.arena = 3;
        runtime_heapBits_nextArena(rVar21);
      }
      else {
        local_e8 = puVar10 + 1;
      }
      *local_e8 = bVar15 >> 2 & 0x11 | *local_e8 & 0xee;
    }
    else if (h_02.arena == 3) {
      h_00.arena = (uVar5 & 0x11 | 0x10) << 3;
      *puVar10 = *puVar10 & 0x77 | (byte)h_00.arena;
      if (puVar10 == puVar9) {
        h_00.shift = rVar21.shift;
        h_00.bitp = (uint8 *)uVar3;
        h_00.last = (uint8 *)uVar11;
        runtime_heapBits_nextArena(h_00);
      }
      else {
        local_e8 = puVar10 + 1;
      }
      *local_e8 = bVar15 >> 1 & 0x33 | *local_e8 & 0xcc;
    }
    return;
  }
  local_40 = (uint8 *)(uVar3 & 0xffffffff);
  local_48 = (uint8 *)(size_spill + x_spill + 0x7fffffffffff >> 0x1a);
  if (local_40 != local_48) {
    puVar9 = (uint8 *)0x0;
    puVar10 = (uint8 *)x_spill;
  }
  if ((typ_spill->kind & 0x40) != 0) {
    local_e8 = (uint8 *)typ_spill->ptrdata;
    local_e0 = (uint8 *)typ_spill->size;
    local_d8 = (uint8 *)dataSize_spill;
    local_d0 = (uint8 *)size_spill;
    local_c8 = allocSize + 4;
    h.shift = SUB84(puVar9,0);
    h.bitp = local_c8;
    h.arena = SUB84(local_e8,0);
    h.last = (uint8 *)uVar11;
    runtime_heapBitsSetTypeGCProg
              (h,(uintptr)puVar10,(uintptr)local_e0,(uintptr)typ_spill,(uintptr)allocSize,local_48);
    bVar19 = local_40 == local_48;
    goto LAB_004c6000;
  }
  uVar3 = typ_spill->size;
  pbVar18 = allocSize;
  if (uVar3 < dataSize_spill) {
    uVar11 = typ_spill->ptrdata >> 3;
    local_58 = uVar3;
    if (uVar11 < 0x3a) {
      local_80[0] = 0;
                    /* Unresolved local var: uintptr i@[???] */
      for (local_98 = 0; local_98 < uVar11; local_98 = local_98 + 8) {
        local_70 = -(ulong)(local_98 < 0x40);
        local_80[0] = local_80[0] | local_70 & (ulong)*pbVar18 << ((byte)local_98 & 0x3f);
        pbVar18 = pbVar18 + 1;
      }
      local_a0 = uVar3 >> 3;
      uVar11 = local_a0;
      local_a8 = local_80[0];
      h_01.bitp = local_80[0];
      if (local_a0 * 2 < 0x3a) {
        for (; uVar11 < 0x41; uVar11 = uVar11 * 2) {
          local_70 = -(ulong)(uVar11 < 0x40);
          bVar15 = (byte)uVar11;
          h_01.bitp = h_01.bitp << (bVar15 & 0x3f) & local_70 | h_01.bitp;
        }
        if ((char)local_a0 == '\0') {
                    /* WARNING: Subroutine does not return */
          runtime_panicdivide();
        }
        local_a0 = local_a0 * (byte)(0x39 / ((ushort)local_a0 & 0xff));
        local_a8 = h_01.bitp & (-(ulong)(local_a0 < 0x40) & 1L << ((byte)local_a0 & 0x3f)) - 1;
      }
      local_28 = (byte *)0x0;
      pbVar18 = (byte *)0x0;
      local_90 = local_a0;
    }
    else {
                    /* Unresolved local var: uintptr n@[???] */
      uVar11 = uVar11 + 7 >> 3;
      local_90 = (uVar3 >> 3) + (uVar11 - 1) * -8;
      local_28 = allocSize + (uVar11 - 1);
      local_a0 = 0;
      local_a8 = 0;
    }
  }
  else {
    local_a0 = 0;
    local_28 = (byte *)0x0;
    local_a8 = 0;
    local_90 = 0;
  }
  if (pbVar18 == (byte *)0x0) {
    pbVar17 = (byte *)0x0;
    uVar11 = local_a8;
  }
  else {
    pbVar17 = pbVar18 + 1;
    local_a0 = 8;
    uVar11 = (ulong)*pbVar18;
  }
  if (dataSize_spill == uVar3) {
    h_01.bitp = typ_spill->ptrdata;
  }
  else {
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicdivide();
    }
    h_01.bitp = (dataSize_spill / uVar3 - 1) * uVar3 + typ_spill->ptrdata;
  }
  h_01.bitp = h_01.bitp >> 3;
  if (h_01.bitp == 0) {
    sVar20 = runtime____type__string((runtime__type *)0x0);
    local_68 = local_f0;
    runtime_printlock();
    sVar20.str = &DAT_0029df4d;
    runtime_printstring(sVar20);
    s_00.len = sVar20.len;
    s_00.str = local_68;
    runtime_printstring(s_00);
    runtime_printnl();
    runtime_printunlock();
    s_01.len = sVar20.len;
    s_01.str = &DAT_002a7eda;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_01);
  }
  if (h_02.arena == 0) {
    bVar15 = (byte)uVar11 & 0xf | 0xf0;
    if (h_01.bitp < 5) {
      uVar11 = 4;
      puVar9 = puVar10;
    }
    else {
      *puVar10 = bVar15;
      iVar2 = 4;
      lVar12 = local_a0 - 4;
      uVar3 = 4;
LAB_004c63e6:
      puVar9 = puVar10 + 1;
      local_80[0] = uVar11 >> iVar2;
      uVar14 = lVar12 - 4;
      while( true ) {
        bVar15 = (byte)local_80[0] & 0xf | 0xf0;
        uVar11 = uVar3 + 4;
        if (h_01.bitp <= uVar11) break;
        *puVar9 = bVar15;
        local_80[0] = local_80[0] >> 4;
        bVar15 = (byte)uVar14;
        if (pbVar17 == local_28) {
          if (pbVar17 == (byte *)0x0) {
            if (uVar14 < 8) {
              local_80[0] = local_80[0] | local_a8 << (bVar15 & 0x3f);
              uVar14 = uVar14 + local_90;
            }
            uVar13 = uVar14 - 8;
          }
          else {
            local_80[0] = local_80[0] | -(ulong)(uVar14 < 0x40) & (ulong)*pbVar17 << (bVar15 & 0x3f)
            ;
            uVar13 = uVar14 + local_90;
            if (uVar13 < 8) {
              local_80[0] = local_80[0] | (ulong)*allocSize << ((byte)uVar13 & 0x3f);
              pbVar17 = allocSize + 1;
            }
            else {
              uVar13 = (uVar14 + local_90) - 8;
              pbVar17 = allocSize;
            }
          }
        }
        else if (uVar14 < 8) {
          local_80[0] = local_80[0] | (ulong)*pbVar17 << (bVar15 & 0x3f);
          uVar13 = uVar14;
          pbVar17 = pbVar17 + 1;
        }
        else {
          uVar13 = uVar14 - 8;
        }
        bVar15 = (byte)local_80[0] & 0xf | 0xf0;
        uVar11 = uVar3 + 8;
        if (h_01.bitp <= uVar11) {
          puVar9 = puVar9 + 1;
          break;
        }
        puVar9[1] = bVar15;
        local_80[0] = local_80[0] >> 4;
        puVar9 = puVar9 + 2;
        uVar14 = uVar13;
        uVar3 = uVar11;
      }
    }
  }
  else {
    if (h_02.arena != 2) {
      s.len = uVar3;
      s.str = (uint8 *)0x2a302e;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    bVar15 = (byte)((uVar11 & 3) << 2);
    bVar16 = bVar15 | 0x40;
    if (1 < h_01.bitp) {
      bVar16 = bVar15 | 0xc0;
    }
    *puVar10 = bVar16 | *puVar10 & 0x33;
    puVar9 = puVar10 + 1;
    if (2 < h_01.bitp) {
      iVar2 = 2;
      lVar12 = local_a0 - 2;
      uVar3 = 2;
      goto LAB_004c63e6;
    }
    uVar11 = 6;
    bVar15 = 0;
  }
  if (h_01.bitp < uVar11) {
                    /* Unresolved local var: uintptr mask@[???] */
    uVar3 = -((uVar11 - h_01.bitp) + -4);
    bVar16 = ((byte)(1L << ((byte)uVar3 & 0x3f)) & -(uVar3 < 0x40)) - 1;
    bVar15 = bVar15 & (bVar16 * '\x10' | bVar16);
  }
  uVar3 = size_spill >> 3;
  if (uVar11 <= uVar3) {
    *puVar9 = bVar15;
    while( true ) {
      puVar9 = puVar9 + 1;
      uVar11 = uVar11 + 4;
      if (uVar3 < uVar11) break;
      *puVar9 = 0;
    }
    bVar15 = 0;
  }
  if (uVar11 == uVar3 + 2) {
    *puVar9 = bVar15 | *puVar9 & 0xcc;
    bVar19 = local_40 == local_48;
  }
  else {
    bVar19 = local_40 == local_48;
  }
LAB_004c6000:
  if (!bVar19) {
    prVar1 = (*runtime_mheap_.arenas[0])[local_50];
    if (prVar1 == (runtime_heapArena *)0x0) {
      puVar9 = (uint8 *)0x0;
      uVar11 = 0;
      puVar10 = (uint8 *)0x0;
      uVar3 = 0;
    }
    else {
      puVar9 = prVar1->bitmap + (x_spill >> 5 & 0x1fffff);
      uVar11 = x_spill >> 3 & 3;
      puVar10 = prVar1->bitmap + 0x1fffff;
      uVar3 = local_50;
                    /* Unresolved local var: uintptr cnw@[???]
                       Unresolved local var: uint8 * src@[???]
                       Unresolved local var: runtime.heapBits h@[???] */
    }
    h_01.bitp = size_spill >> 3;
    if ((int)uVar11 == 2) {
      *puVar9 = *(byte *)x_spill | *puVar9 & 0x33;
      if (puVar10 == puVar9) {
        local_10 = x_spill;
        h_01.arena = (undefined4)uVar3;
        h_01.shift = 2;
        h_01.last = puVar10;
        local_60 = h_01.bitp;
        runtime_heapBits_nextArena(h_01);
        uVar11 = (ulong)local_e0 & 0xffffffff;
        uVar3 = (ulong)local_e0._4_4_;
        h_01.bitp = local_60;
        puVar9 = local_e8;
        x_spill = local_10;
        puVar10 = local_d8;
      }
      else {
        uVar11 = 0;
        puVar9 = puVar9 + 1;
      }
      h_01.bitp = h_01.bitp - 2;
      x_spill = x_spill + 1;
    }
    while( true ) {
      h_02.shift = (uint)uVar11;
      h_02.arena = (uint)uVar3;
      local_38 = (byte *)x_spill;
      if (h_01.bitp < 4) break;
                    /* Unresolved local var: uintptr words@[???] */
      h_02.bitp = (uint8 *)(h_01.bitp & 0xfffffffffffffffc);
      h_02.last = puVar10;
      local_30 = puVar9;
      runtime_heapBits_forwardOrBoundary(h_02,x_spill);
      local_18 = local_e0;
      uVar3 = (ulong)local_d8 >> 0x20;
      local_20 = local_d0;
      local_48 = (uint8 *)((ulong)local_c8 >> 2);
      runtime_memmove();
      h_01.bitp = h_01.bitp - (long)local_c8;
      x_spill = (uintptr)(local_38 + (long)local_48);
      uVar11 = (ulong)local_d8 & 0xffffffff;
      puVar9 = local_18;
      puVar10 = local_20;
      local_e8 = h_02.bitp;
    }
    if (h_01.bitp == 2) {
      h_03.bitp = (ulong)(*puVar9 & 0xffffffcc);
      *puVar9 = *(byte *)x_spill | (byte)(*puVar9 & 0xffffffcc);
      if (h_02.shift < 3) {
        uVar3 = (ulong)(h_02.shift + 1);
        local_e8 = puVar9;
        local_d8 = puVar10;
      }
      else if (puVar10 == puVar9) {
        h_03.shift = h_02.shift;
        h_03.last = puVar10;
        h_03.arena = h_02.arena;
        rVar21 = runtime_heapBits_nextArena(h_03);
        uVar11 = (ulong)rVar21.shift;
        uVar3 = (ulong)local_e0 & 0xffffffff;
        h_02.arena = local_e0._4_4_;
      }
      else {
        local_e8 = puVar9 + 1;
        uVar3 = 0;
        local_d8 = puVar10;
      }
      if ((2 < (uint)uVar3) && (local_e8 == local_d8)) {
        h_04.shift = (undefined4)uVar11;
        h_04.bitp = (uint8 *)uVar3;
        h_04.last = local_d8;
        h_04.arena = h_02.arena;
        runtime_heapBits_nextArena(h_04);
      }
    }
    runtime_memclrNoHeapPointers();
  }
  return;
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.IP.String(net.IP ip, string ~r0) */

string net_IP_String(net_IP ip)

{
  ulong uVar1;
  byte bVar2;
  uint8 uVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  uint8 *puVar7;
  ulong uVar8;
  uint8 *puVar9;
  ushort uVar10;
  uint uVar11;
  ulong in_RSI;
  uint8 *puVar12;
  uint8 *in_RDI;
  uint8 *puVar13;
  uint8 *puVar14;
  uint8 *puVar15;
  uint8 *puVar16;
  uint8 *puVar17;
  long lVar18;
  long in_FS_OFFSET;
  string sVar19;
  string sVar20;
  string sVar21;
  string sVar22;
  string a1;
  __uint8 b;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  string a0;
  net_IP ip_spill;
  uint8 *local_b0;
  uint8 *local_a0;
  uint8 *local_98;
  uint8 *local_90;
  uint8 *local_48;
  uint8 local_3e [54];
  
  sVar21.len = (uint8 *)ip.len;
                    /* Unresolved local var: int e0@[???]
                       Unresolved local var: int e1@[???]
                       Unresolved local var: net.IP p@[???]
                       Unresolved local var: []uint8 b@[???] */
  while (&local_48 <= *(uint8 ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (ip_spill.len == 0) {
    sVar21.str = &DAT_002889bc;
    return sVar21;
  }
  if (ip_spill.len == 4) {
    bVar5 = true;
    pbVar6 = ip_spill.array;
                    /* Unresolved local var: net.IP p4@[???] */
  }
  else {
    if (ip_spill.len == 0x10) {
                    /* Unresolved local var: int i@[???] */
      for (lVar18 = 0; sVar21.len = ip_spill.array, lVar18 < 10; lVar18 = lVar18 + 1) {
        in_RSI = (ulong)ip_spill.array[lVar18];
        if (ip_spill.array[lVar18] != 0) goto LAB_00590494;
      }
      if ((ip_spill.array[10] == 0xff) && (ip_spill.array[0xb] == 0xff)) {
        pbVar6 = ip_spill.array + 0xc;
        bVar5 = true;
        goto LAB_005904a0;
      }
    }
LAB_00590494:
    pbVar6 = (byte *)0x0;
    bVar5 = false;
  }
LAB_005904a0:
  if (bVar5) {
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: []uint8 b@[???] */
    local_3e[1] = 0;
    local_3e[2] = 0;
    local_3e[3] = 0;
    local_3e[4] = 0;
    local_3e[5] = 0;
    local_3e[6] = 0;
    local_3e[7] = 0;
    local_3e[8] = 0;
    local_3e[9] = 0;
    local_3e[10] = 0;
    local_3e[0xb] = 0;
    local_3e[0xc] = 0;
    local_3e[0xd] = 0;
    local_3e[0xe] = 0;
    bVar2 = *pbVar6;
    if (bVar2 < 10) {
      local_3e[0] = bVar2 + 0x30;
      uVar8 = 1;
    }
    else if (bVar2 < 100) {
      local_3e[1] = bVar2 % 10 + 0x30;
      local_3e[0] = bVar2 / 10 + 0x30;
      uVar8 = 2;
    }
    else {
      cVar4 = (char)(bVar2 / 10);
      local_3e[2] = bVar2 + cVar4 * -10 + 0x30;
      local_3e[1] = cVar4 + (char)((bVar2 / 10) / 10) * -10 + 0x30;
      local_3e[0] = bVar2 / 100 + 0x30;
      uVar8 = 3;
    }
    if (0xe < uVar8) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    local_3e[uVar8] = 0x2e;
    uVar1 = uVar8 + 1;
    bVar2 = pbVar6[1];
    if (bVar2 < 10) {
      if (0xe < uVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_3e[uVar8 + 1] = bVar2 + 0x30;
      lVar18 = 1;
    }
    else if (bVar2 < 100) {
      if (0xe < uVar8 + 2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_3e[uVar8 + 2] = bVar2 % 10 + 0x30;
      if (0xe < uVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_3e[uVar8 + 1] = bVar2 / 10 + 0x30;
      lVar18 = 2;
    }
    else {
      cVar4 = (char)(bVar2 / 10);
      if (0xe < uVar8 + 3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_3e[uVar8 + 3] = bVar2 + cVar4 * -10 + 0x30;
      if (0xe < uVar8 + 2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_3e[uVar8 + 2] = cVar4 + (char)((bVar2 / 10) / 10) * -10 + 0x30;
      if (0xe < uVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_3e[uVar8 + 1] = bVar2 / 100 + 0x30;
      lVar18 = 3;
    }
    sVar21.len = (uint8 *)(lVar18 + uVar8);
    if (0xe < lVar18 + uVar8 + 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    (local_3e + 1)[(long)sVar21.len] = 0x2e;
    uVar1 = lVar18 + uVar8 + 2;
    bVar2 = pbVar6[2];
    if (bVar2 < 10) {
      if (0xe < uVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      (local_3e + 2)[(long)sVar21.len] = bVar2 + 0x30;
      lVar18 = 1;
    }
    else if (bVar2 < 100) {
      if (0xe < lVar18 + uVar8 + 3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      sVar21.len[(long)(local_3e + 3)] = bVar2 % 10 + 0x30;
      if (0xe < uVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      (local_3e + 2)[(long)sVar21.len] = bVar2 / 10 + 0x30;
      lVar18 = 2;
    }
    else {
      cVar4 = (char)(bVar2 / 10);
      if (0xe < lVar18 + uVar8 + 4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      sVar21.len[(long)(local_3e + 4)] = bVar2 + cVar4 * -10 + 0x30;
      if (0xe < lVar18 + uVar8 + 3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      sVar21.len[(long)(local_3e + 3)] = cVar4 + (char)((bVar2 / 10) / 10) * -10 + 0x30;
      if (0xe < uVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      (local_3e + 2)[(long)sVar21.len] = bVar2 / 100 + 0x30;
      lVar18 = 3;
    }
    puVar9 = sVar21.len + lVar18;
    if (&DAT_0000000e < sVar21.len + lVar18 + 2) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    (local_3e + 2)[(long)puVar9] = 0x2e;
    puVar12 = sVar21.len + lVar18 + 3;
    bVar2 = pbVar6[3];
    if (bVar2 < 10) {
      if (&DAT_0000000e < puVar12) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      puVar9[(long)(local_3e + 3)] = bVar2 + 0x30;
      lVar18 = 1;
    }
    else if (bVar2 < 100) {
      puVar7 = sVar21.len + lVar18 + 4;
      sVar21.len = (uint8 *)(ulong)(bVar2 / 10);
      cVar4 = (char)(bVar2 / 10);
      if (&DAT_0000000e < puVar7) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      puVar9[(long)(local_3e + 4)] = bVar2 + cVar4 * -10 + 0x30;
      if (&DAT_0000000e < puVar12) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      puVar9[(long)(local_3e + 3)] = cVar4 + 0x30;
      lVar18 = 2;
    }
    else {
      if (&DAT_0000000e < sVar21.len + lVar18 + 5) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      puVar9[(long)(local_3e + 5)] = bVar2 + (char)(bVar2 / 10) * -10 + 0x30;
      if (&DAT_0000000e < sVar21.len + lVar18 + 4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      uVar11 = (bVar2 / 10) % 10 + 0x30;
      sVar21.len = (uint8 *)(ulong)uVar11;
      puVar9[(long)(local_3e + 4)] = (uint8)uVar11;
      if (&DAT_0000000e < puVar12) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      puVar9[(long)(local_3e + 3)] = bVar2 / 100 + 0x30;
      lVar18 = 3;
    }
    if (&DAT_00000010 <= puVar9 + lVar18 + 3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    sVar21 = runtime_slicebytetostring
                       ((runtime_tmpBuf *)local_3e,sVar21.len,(int)(puVar9 + lVar18 + 3));
    sVar20.len = sVar21.len;
    sVar20.str = local_b0;
    return sVar20;
  }
  if (ip_spill.len != 0x10) {
    b.len = (int)sVar21.len;
    b.array = (uint8 *)ip_spill.cap;
    b.cap = ip_spill.len;
    sVar21 = net_hexString(b);
    a0.str = (uint8 *)sVar21.len;
    a1.len = in_RSI;
    a1.str = in_RDI;
    a0.len = ip_spill.len;
    sVar21 = runtime_concatstring2((runtime_tmpBuf *)((long)&DAT_0028774c + 1),a0,a1);
    sVar19.len = sVar21.len;
    sVar19.str = local_a0;
    return sVar19;
  }
  puVar9 = (uint8 *)0xffffffffffffffff;
  puVar12 = (uint8 *)0xffffffffffffffff;
  for (sVar21.len = (uint8 *)0x0; puVar7 = sVar21.len, (long)sVar21.len < 0x10;
      sVar21.len = sVar21.len + 2) {
    for (; (long)puVar7 < 0x10; puVar7 = puVar7 + 2) {
      if (&DAT_0000000f < puVar7) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (puVar7[(long)ip_spill.array] != 0) break;
      if (&DAT_0000000f < puVar7 + 1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if ((puVar7 + 1)[(long)ip_spill.array] != 0) break;
    }
    if (((long)sVar21.len < (long)puVar7) &&
       ((long)puVar12 - (long)puVar9 < (long)puVar7 - (long)sVar21.len)) {
      puVar9 = sVar21.len;
      sVar21.len = puVar7;
      puVar12 = puVar7;
    }
                    /* Unresolved local var: int i@[???] */
                    /* Unresolved local var: int j@[???] */
  }
  if ((long)puVar12 - (long)puVar9 < 3) {
    puVar9 = (uint8 *)0xffffffffffffffff;
    puVar12 = (uint8 *)0xffffffffffffffff;
  }
                    /* Unresolved local var: int i@[???] */
  local_3e[0xf] = 0;
  local_3e[0x10] = 0;
  local_3e[0x11] = 0;
  local_3e[0x12] = 0;
  local_3e[0x13] = 0;
  local_3e[0x14] = 0;
  local_3e[0x15] = 0;
  local_3e[0x16] = 0;
  local_3e[0x17] = 0;
  local_3e[0x18] = 0;
  local_3e[0x19] = 0;
  local_3e[0x1a] = 0;
  local_3e[0x1b] = 0;
  local_3e[0x1c] = 0;
  local_3e[0x1d] = 0;
  local_3e[0x1e] = 0;
  local_3e[0x1f] = 0;
  local_3e[0x20] = 0;
  local_3e[0x21] = 0;
  local_3e[0x22] = 0;
  local_3e[0x23] = 0;
  local_3e[0x24] = 0;
  local_3e[0x25] = 0;
  local_3e[0x26] = 0;
  local_3e[0x27] = 0;
  local_3e[0x28] = 0;
  local_3e[0x29] = 0;
  local_3e[0x2a] = 0;
  local_3e[0x2b] = 0;
  local_3e[0x2c] = 0;
  local_3e[0x2d] = 0;
  local_3e[0x2e] = 0;
  local_3e[0x2f] = 0;
  local_3e[0x30] = 0;
  local_3e[0x31] = 0;
  local_3e[0x32] = 0;
  local_3e[0x33] = 0;
  local_3e[0x34] = 0;
  local_3e[0x35] = 0;
  puVar7 = (uint8 *)0x0;
  puVar14 = &DAT_00000027;
  puVar17 = local_3e + 0xf;
  sVar21.len = (uint8 *)0x0;
  while ((long)sVar21.len < 0x10) {
    if (puVar9 == sVar21.len) {
      puVar16 = puVar7 + 2;
      puVar13 = puVar14;
      if (puVar14 < puVar16) {
        old.len = 0x10;
        old.array = puVar9;
        old.cap = (int)puVar12;
        runtime_growslice((runtime__type *)&DAT_00225720,old,(int)puVar7);
        puVar16 = local_98 + 2;
        sVar21.len = local_98;
        puVar13 = local_90;
        puVar17 = local_a0;
        local_b0 = puVar14;
      }
      puVar14 = puVar13;
      puVar17[(long)puVar7] = 0x3a;
      (puVar17 + 1)[(long)puVar7] = 0x3a;
      puVar13 = puVar12;
      if (0xf < (long)puVar12) break;
    }
    else {
      puVar13 = sVar21.len;
      puVar16 = puVar7;
      if (0 < (long)sVar21.len) {
        puVar16 = puVar7 + 1;
        puVar15 = puVar14;
        if (puVar14 < puVar16) {
          old_00.len = 0x10;
          old_00.array = puVar9;
          old_00.cap = (int)puVar12;
          local_48 = sVar21.len;
          runtime_growslice((runtime__type *)&DAT_00225720,old_00,(int)puVar7);
          puVar16 = local_98 + 1;
          sVar21.len = local_48;
          puVar15 = local_90;
          puVar17 = local_a0;
          local_b0 = puVar14;
        }
        puVar17[(long)puVar7] = 0x3a;
        puVar13 = sVar21.len;
        puVar14 = puVar15;
      }
    }
    if (&DAT_0000000f < puVar13) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (&DAT_0000000f < puVar13 + 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    uVar10 = *(ushort *)(ip_spill.array + (long)puVar13) << 8 |
             *(ushort *)(ip_spill.array + (long)puVar13) >> 8;
                    /* Unresolved local var: int j@[???]
                       Unresolved local var: uint32 v@[???] */
    if (uVar10 == 0) {
      puVar7 = puVar16 + 1;
      sVar21.len = puVar14;
      if (puVar14 < puVar7) {
        old_01.len = 0x10;
        old_01.array = puVar9;
        old_01.cap = (int)puVar13;
        runtime_growslice((runtime__type *)&DAT_00225720,old_01,(int)puVar7);
        puVar7 = local_98 + 1;
        sVar21.len = local_90;
        puVar17 = local_a0;
        local_b0 = puVar14;
      }
      puVar14 = sVar21.len;
      puVar17[(long)puVar16] = 0x30;
    }
    else {
      puVar7 = puVar16;
      for (lVar18 = 7; -1 < lVar18; lVar18 = lVar18 + -1) {
        uVar11 = (uint)(uVar10 >> ((byte)(lVar18 << 2) & 0x1f)) &
                 -(uint)((ulong)(lVar18 << 2) < 0x20);
        if (uVar11 != 0) {
          sVar21.len = puVar7 + 1;
          uVar8 = (ulong)(uVar11 & 0xf);
          uVar3 = (&DAT_002992b5)[uVar8];
          puVar16 = puVar14;
          if (puVar14 < sVar21.len) {
            old_02.len = (int)ip_spill.array;
            old_02.array = puVar9;
            old_02.cap = (int)puVar13;
            runtime_growslice((runtime__type *)&DAT_00225720,old_02,uVar8);
            sVar21.len = local_98 + 1;
            puVar16 = local_90;
            puVar17 = local_a0;
            local_b0 = puVar14;
          }
          puVar17[(long)puVar7] = uVar3;
          puVar14 = puVar16;
          puVar7 = sVar21.len;
        }
      }
    }
    sVar21.len = puVar13 + 2;
  }
  sVar21 = runtime_slicebytetostring((runtime_tmpBuf *)sVar21.len,puVar9,0x10);
  sVar22.len = sVar21.len;
  sVar22.str = local_b0;
  return sVar22;
}


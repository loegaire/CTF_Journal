
/* WARNING: Removing unreachable block (ram,0x005924d8) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.parseIPv6(string s, net.IP ip) */

net_IP net_parseIPv6(string s)

{
  uint8 *puVar1;
  uint8 *puVar2;
  int in_RCX;
  uint8 *puVar3;
  long lVar4;
  uint8 *puVar5;
  uint8 *puVar6;
  uint8 *puVar7;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  multireturn_int_int_bool__conflict2 mVar8;
  net_IP nVar9;
  net_IP nVar10;
  net_IP nVar11;
  net_IP nVar12;
  net_IP nVar13;
  net_IP nVar14;
  net_IP nVar15;
  net_IP nVar16;
  net_IP nVar17;
  net_IP nVar18;
  string s_spill;
  uint8 *local_48;
  uint8 *local_40;
  char local_38;
  
                    /* Unresolved local var: int ellipsis@[???]
                       Unresolved local var: int i@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_48 = &DAT_00000010;
  runtime_makeslice((runtime__type *)&DAT_00225720,s.len,in_RCX);
  if (((s_spill.len < 2) || (*s_spill.str != 0x3a)) || (s_spill.str[1] != 0x3a)) {
    puVar3 = (uint8 *)0xffffffffffffffff;
  }
  else {
    s_spill.str = s_spill.str + (-(long)(s_spill.len + -2) >> 0x3f & 2);
    if (s_spill.len == 2) {
      nVar9.len = 0;
      nVar9.array = local_40;
      nVar9.cap = 2;
      return nVar9;
    }
    puVar3 = (uint8 *)0x0;
    s_spill.len = (int)(s_spill.len + -2);
  }
  puVar6 = (uint8 *)0x0;
  do {
    do {
      puVar2 = local_40;
      puVar7 = puVar6;
      if (0xf < (long)puVar6) goto LAB_00592590;
      s_00.len = (int)puVar6;
      s_00.str = local_40;
      mVar8 = net_xtoi(s_00);
      nVar14.len = mVar8.i;
      if (local_38 == '\0') {
        nVar14.array = local_40;
        nVar14.cap = 0x10;
        return nVar14;
      }
      if ((long)local_40 < s_spill.len) {
        if ((ulong)s_spill.len <= local_40) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        if (s_spill.str[(long)local_40] == 0x2e) {
                    /* Unresolved local var: net.IP ip4@[???] */
          if (((long)puVar3 < 0) && (puVar6 != &DAT_0000000c)) {
            nVar10.len = (int)s_spill.str;
            nVar10.array = puVar3;
            nVar10.cap = (int)puVar6;
            return nVar10;
          }
          if (0x10 < (long)(puVar6 + 4)) {
            nVar11.len = (int)s_spill.str;
            nVar11.array = puVar3;
            nVar11.cap = (int)puVar6;
            return nVar11;
          }
          s_01.len = (int)s_spill.str;
          s_01.str = puVar3;
          net_parseIPv4(s_01);
          if (local_40 < &DAT_0000000d) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          local_40[(long)puVar6] = DAT_0000001c;
          if (local_40 < &DAT_0000000e) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          if (&DAT_0000000f < puVar6 + 1) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          (puVar6 + 1)[(long)local_40] = DAT_0000001d;
          if (local_40 < &DAT_0000000f) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          if (&DAT_0000000f < puVar6 + 2) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          (puVar6 + 2)[(long)local_40] = DAT_0000001e;
          if (local_40 < &DAT_00000010) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          if (&DAT_0000000f < puVar6 + 3) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          (puVar6 + 3)[(long)local_40] = DAT_0000001f;
                    /* Unresolved local var: int j@[???] */
          s_spill.len = 0;
          puVar2 = local_48;
          puVar7 = puVar6 + 4;
          goto LAB_00592590;
        }
      }
      local_40[(long)puVar6] = 0;
      if (&DAT_0000000f < puVar6 + 1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      (puVar6 + 1)[(long)local_40] = 0x10;
      if ((ulong)s_spill.len < local_40) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      puVar7 = puVar6 + 2;
      lVar4 = s_spill.len - (long)local_40;
      nVar12.array = (uint8 *)((ulong)local_40 & -lVar4 >> 0x3f);
      puVar2 = nVar12.array;
      if (lVar4 == 0) {
        s_spill.len = 0;
        puVar6 = s_spill.str;
        goto LAB_00592590;
      }
      if ((s_spill.str[(long)nVar12.array] != 0x3a) || (lVar4 == 1)) {
        nVar13.len = (int)s_spill.str;
        nVar13.array = nVar12.array;
        nVar13.cap = 0;
        return nVar13;
      }
      puVar5 = s_spill.str + (long)nVar12.array;
      s_spill.len = lVar4 + -1;
      if ((uint8 *)s_spill.len == (uint8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      puVar1 = s_spill.str + 1;
      s_spill.str = puVar5 + 1;
      puVar6 = puVar7;
    } while (puVar1[(long)nVar12.array] != 0x3a);
    if (-1 < (long)puVar3) {
      nVar12.len = (int)puVar3;
      nVar12.cap = s_spill.len;
      return nVar12;
    }
    s_spill.len = lVar4 + -2;
    s_spill.str = puVar5 + 1 + (-s_spill.len >> 0x3f & 1);
    puVar3 = puVar7;
  } while (lVar4 != 2);
  puVar6 = (uint8 *)0x0;
LAB_00592590:
  if ((uint8 *)s_spill.len != (uint8 *)0x0) {
    nVar17.len = (int)puVar6;
    nVar17.array = puVar2;
    nVar17.cap = (int)puVar3;
    return nVar17;
  }
  if ((long)puVar7 < 0x10) {
    puVar5 = puVar7;
    if ((long)puVar3 < 0) {
      nVar15.len = (int)puVar6;
      nVar15.array = puVar2;
      nVar15.cap = (int)puVar3;
      return nVar15;
    }
    while (puVar5 = puVar5 + -1, (long)puVar3 <= (long)puVar5) {
      if (&DAT_0000000f < puVar5) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if ((uint8 *)0xf < puVar5 + (0x10 - (long)puVar7)) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_40[(long)(puVar5 + (0x10 - (long)puVar7))] = puVar5[(long)local_40];
      puVar2 = puVar5;
    }
                    /* Unresolved local var: int j@[???] */
    for (puVar6 = puVar3 + -(long)puVar7 + 0xf; puVar5 = puVar3 + -(long)puVar7,
        (long)puVar3 <= (long)puVar6; puVar6 = puVar6 + -1) {
      if (&DAT_0000000f < puVar6) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_40[(long)puVar6] = 0;
    }
  }
  else {
    puVar5 = puVar3;
    if (-1 < (long)puVar3) {
      nVar16.len = (int)puVar6;
      nVar16.array = puVar2;
      nVar16.cap = (int)puVar3;
      return nVar16;
    }
  }
  nVar18.len = (int)puVar6;
  nVar18.array = puVar2;
  nVar18.cap = (int)puVar5;
  return nVar18;
}


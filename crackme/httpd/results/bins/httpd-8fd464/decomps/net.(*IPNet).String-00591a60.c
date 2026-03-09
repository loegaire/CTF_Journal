
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*IPNet).String(net.IPNet * n, string ~r0) */

string net___IPNet__String(net_IPNet *n)

{
  uint8 *puVar1;
  ulong uVar2;
  uint8 *puVar3;
  uint8 *puVar4;
  uint8 *puVar5;
  int in_R9;
  long in_FS_OFFSET;
  string sVar6;
  string sVar7;
  string sVar8;
  string a1;
  string a1_00;
  net_IPMask mask;
  net_IP ip;
  __uint8 b;
  net_IP ip_00;
  string a0;
  string a0_00;
  string a2;
  string a2_00;
  net_IPNet *n_spill;
  long local_c8;
  int local_c0;
  uint8 *local_b8;
  uint8 *local_b0;
  long local_a8;
  uint8 *local_a0;
  uint8 *local_98;
  char acStack_55 [5];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
                    /* Unresolved local var: int l@[???]
                       Unresolved local var: net.IP nn@[???]
                       Unresolved local var: net.IPMask m@[???] */
  while (&uStack_50 <= *(undefined4 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  net_networkNumberAndMask(n_spill);
  if ((local_c8 != 0) && (local_b0 != (uint8 *)0x0)) {
    mask.len = local_c0;
    mask.array = (uint8 *)local_a8;
    mask.cap = (int)local_b0;
    puVar1 = local_b0;
    puVar3 = local_b8;
    puVar4 = local_a0;
    puVar5 = local_b0;
    net_simpleMaskLength(mask);
    if (local_b8 == (uint8 *)0xffffffffffffffff) {
      ip.len = local_c0;
      ip.array = (uint8 *)0xffffffffffffffff;
      ip.cap = (int)puVar1;
      sVar6 = net_IP_String(ip);
      b.len = sVar6.len;
      if (local_a8 == 0) {
        puVar1 = &DAT_002889bc;
      }
      else {
        b.array = local_a0;
        b.cap = (int)local_b0;
        net_hexString(b);
        puVar1 = (uint8 *)0xffffffffffffffff;
      }
      a1.len = (int)puVar3;
      a1.str = puVar4;
      a0.len = (int)local_b0;
      a0.str = puVar1;
      a2.len = in_R9;
      a2.str = puVar5;
      sVar6 = runtime_concatstring3((runtime_tmpBuf *)&net__stmp_87,a0,a1,a2);
      sVar7.len = sVar6.len;
      sVar7.str = local_98;
      return sVar7;
    }
    ip_00.len = local_c0;
    ip_00.array = local_b8;
    ip_00.cap = (int)puVar1;
    net_IP_String(ip_00);
                    /* Unresolved local var: uint8[20] buf@[???]
                       Unresolved local var: int i@[???] */
    if (local_b8 == (uint8 *)0x0) {
      local_b8 = (uint8 *)((long)&go_string__ + 5);
    }
    else {
      acStack_55[1] = '\0';
      acStack_55[2] = '\0';
      acStack_55[3] = '\0';
      acStack_55[4] = '\0';
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uVar2 = 0x13;
      puVar1 = local_b8;
      while (&DAT_00000009 < puVar1) {
        puVar5 = (uint8 *)((long)((ulong)puVar1 / 10) * 10);
        if (0x13 < uVar2) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        puVar4 = (uint8 *)((ulong)puVar1 % 10 + 0x30);
        acStack_55[uVar2 + 1] = (char)puVar4;
        uVar2 = uVar2 - 1;
        puVar1 = (uint8 *)((ulong)puVar1 / 10);
        puVar3 = local_b8;
      }
      if (0x13 < uVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      acStack_55[uVar2 + 1] = (char)puVar1 + '0';
      puVar1 = (uint8 *)(uVar2 & (long)(uVar2 - 0x14) >> 0x3f);
      runtime_slicebytetostring
                ((runtime_tmpBuf *)(puVar1 + (long)(acStack_55 + 1)),puVar1,-(uVar2 - 0x14));
    }
    a1_00.len = (int)puVar3;
    a1_00.str = puVar4;
    a0_00.len = (int)local_b0;
    a0_00.str = local_b8;
    a2_00.len = in_R9;
    a2_00.str = puVar5;
    sVar6 = runtime_concatstring3((runtime_tmpBuf *)&net__stmp_87,a0_00,a1_00,a2_00);
    sVar8.len = sVar6.len;
    sVar8.str = local_98;
    return sVar8;
  }
  sVar6.len = local_c0;
  sVar6.str = &DAT_002889bc;
  return sVar6;
}


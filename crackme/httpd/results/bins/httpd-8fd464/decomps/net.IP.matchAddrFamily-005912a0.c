
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.IP.matchAddrFamily(net.IP ip, net.IP x, bool ~r1) */

bool net_IP_matchAddrFamily(net_IP ip,net_IP x)

{
  uint8 uVar1;
  uint8 uVar2;
  uint8 uVar3;
  uint8 uVar4;
  uint8 *puVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  net_IP ip_spill;
  net_IP x_spill;
  uint8 local_28 [32];
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  puVar5 = ip_spill.array;
  if (ip_spill.len != 4) {
    if (ip_spill.len == 0x10) {
                    /* Unresolved local var: int i@[???] */
      for (lVar6 = 0; lVar6 < 10; lVar6 = lVar6 + 1) {
        if (ip_spill.array[lVar6] != 0) goto LAB_005912e6;
      }
      if ((ip_spill.array[10] == 0xff) && (ip_spill.array[0xb] == 0xff)) {
        puVar5 = ip_spill.array + 0xc;
        goto LAB_005912e8;
      }
    }
LAB_005912e6:
    puVar5 = (uint8 *)0x0;
  }
LAB_005912e8:
  if (puVar5 != (uint8 *)0x0) {
    puVar5 = x_spill.array;
    if (x_spill.len != 4) {
      if (x_spill.len == 0x10) {
                    /* Unresolved local var: int i@[???] */
        for (lVar6 = 0; lVar6 < 10; lVar6 = lVar6 + 1) {
          if (x_spill.array[lVar6] != 0) goto LAB_00591585;
        }
        if ((x_spill.array[10] == 0xff) && (x_spill.array[0xb] == 0xff)) {
          puVar5 = x_spill.array + 0xc;
          goto LAB_00591587;
        }
      }
LAB_00591585:
      puVar5 = (uint8 *)0x0;
    }
LAB_00591587:
    if (puVar5 != (uint8 *)0x0) {
      return true;
    }
  }
  if (ip_spill.len == 4) {
    uVar1 = *ip_spill.array;
    uVar2 = ip_spill.array[1];
    uVar3 = ip_spill.array[2];
    uVar4 = ip_spill.array[3];
                    /* Unresolved local var: net.IP p@[???] */
    local_28[0x10] = 0;
    local_28[0x11] = 0;
    local_28[0x12] = 0;
    local_28[0x13] = 0;
    local_28[0x14] = 0;
    local_28[0x15] = 0;
    local_28[0x16] = 0;
    local_28[0x17] = 0;
    local_28[0x18] = 0;
    local_28[0x19] = 0;
    local_28[0x1a] = 0;
    local_28[0x1b] = 0;
    local_28[0x1c] = 0;
    local_28[0x1d] = 0;
    local_28[0x1e] = 0;
    local_28[0x1f] = 0;
    if (net_v4InV6Prefix.array != local_28 + 0x10) {
      runtime_memmove();
    }
    local_28[0x1c] = uVar1;
    local_28[0x1d] = uVar2;
    local_28[0x1e] = uVar3;
    local_28[0x1f] = uVar4;
    puVar5 = local_28 + 0x10;
  }
  else {
    puVar5 = ip_spill.array;
    if (ip_spill.len != 0x10) {
      puVar5 = (uint8 *)0x0;
    }
  }
  if (puVar5 == (uint8 *)0x0) {
    bVar7 = false;
  }
  else {
    if (ip_spill.len != 4) {
      if (ip_spill.len == 0x10) {
                    /* Unresolved local var: int i@[???] */
        for (lVar6 = 0; lVar6 < 10; lVar6 = lVar6 + 1) {
          if (ip_spill.array[lVar6] != 0) goto LAB_00591468;
        }
        if ((ip_spill.array[10] == 0xff) && (ip_spill.array[0xb] == 0xff)) {
          ip_spill.array = ip_spill.array + 0xc;
          goto LAB_0059146a;
        }
      }
LAB_00591468:
      ip_spill.array = (uint8 *)0x0;
    }
LAB_0059146a:
    if (ip_spill.array == (uint8 *)0x0) {
      if (x_spill.len == 4) {
                    /* Unresolved local var: net.IP p@[???] */
        local_28[0] = 0;
        local_28[1] = 0;
        local_28[2] = 0;
        local_28[3] = 0;
        local_28[4] = 0;
        local_28[5] = 0;
        local_28[6] = 0;
        local_28[7] = 0;
        local_28[8] = 0;
        local_28[9] = 0;
        local_28[10] = 0;
        local_28[0xb] = 0;
        local_28[0xc] = 0;
        local_28[0xd] = 0;
        local_28[0xe] = 0;
        local_28[0xf] = 0;
        if (net_v4InV6Prefix.array != local_28) {
          runtime_memmove();
        }
        puVar5 = local_28;
      }
      else {
        puVar5 = x_spill.array;
        if (x_spill.len != 0x10) {
          puVar5 = (uint8 *)0x0;
        }
      }
      bVar7 = puVar5 != (uint8 *)0x0;
    }
    else {
      bVar7 = false;
    }
  }
  if (!bVar7) {
    return false;
  }
  if (x_spill.len != 4) {
    if (x_spill.len == 0x10) {
                    /* Unresolved local var: int i@[???] */
      for (lVar6 = 0; lVar6 < 10; lVar6 = lVar6 + 1) {
        if (x_spill.array[lVar6] != 0) goto LAB_0059143d;
      }
      if ((x_spill.array[10] == 0xff) && (x_spill.array[0xb] == 0xff)) {
        x_spill.array = x_spill.array + 0xc;
        goto LAB_00591435;
      }
    }
LAB_0059143d:
    x_spill.array = (uint8 *)0x0;
  }
LAB_00591435:
  return x_spill.array == (uint8 *)0x0;
}


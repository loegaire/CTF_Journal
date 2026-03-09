
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.networkNumberAndMask(net.IPNet * n, net.IP ip, net.IPMask m)
    */

multireturn_net_IP_net_IPMask_ net_networkNumberAndMask(net_IPNet *n)

{
  uint8 *puVar1;
  long lVar2;
  uint8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  multireturn_net_IP_net_IPMask_ mVar8;
  multireturn_net_IP_net_IPMask_ mVar9;
  multireturn_net_IP_net_IPMask_ mVar10;
  multireturn_net_IP_net_IPMask_ mVar11;
  net_IPNet *n_spill;
  
  puVar1 = (n_spill->IP).array;
  lVar4 = (n_spill->IP).len;
  lVar2 = (n_spill->IP).cap;
  puVar3 = puVar1;
  lVar6 = lVar4;
  lVar5 = lVar2;
  if (lVar4 != 4) {
    if (lVar4 == 0x10) {
                    /* Unresolved local var: int i@[???] */
      for (lVar6 = 0; lVar6 < 10; lVar6 = lVar6 + 1) {
        if (puVar1[lVar6] != 0) goto LAB_00591898;
      }
      if ((puVar1[10] == 0xff) && (puVar1[0xb] == 0xff)) {
        puVar3 = puVar1 + 0xc;
        lVar6 = 4;
        lVar5 = lVar2 + -0xc;
        goto LAB_005917ba;
      }
    }
LAB_00591898:
    puVar3 = (uint8 *)0x0;
    lVar6 = 0;
    lVar5 = 0;
  }
LAB_005917ba:
  lVar7 = lVar5;
  if ((puVar3 == (uint8 *)0x0) && (puVar3 = puVar1, lVar7 = lVar2, lVar6 = lVar4, lVar4 != 0x10)) {
    mVar11.ip.len = lVar5;
    mVar11.ip.array = (uint8 *)n_spill;
    mVar11.m.len = (int)puVar1;
    mVar11.m.array = (uint8 *)lVar2;
    mVar11.ip.cap = 0;
    mVar11.m.cap = lVar4;
    return mVar11;
  }
  lVar4 = (n_spill->Mask).len;
  lVar2 = (n_spill->Mask).cap;
  if (lVar4 == 4) {
    if (lVar6 != 4) {
      mVar8.ip.len = lVar5;
      mVar8.ip.array = (uint8 *)lVar2;
      mVar8.m.len = (int)puVar3;
      mVar8.m.array = (uint8 *)lVar7;
      mVar8.ip.cap = 4;
      mVar8.m.cap = lVar6;
      return mVar8;
    }
  }
  else {
    if (lVar4 != 0x10) {
      mVar10.ip.len = lVar5;
      mVar10.ip.array = (uint8 *)lVar2;
      mVar10.m.len = (int)puVar3;
      mVar10.m.array = (uint8 *)lVar7;
      mVar10.ip.cap = lVar4;
      mVar10.m.cap = lVar6;
      return mVar10;
    }
    if (lVar6 == 4) {
      lVar2 = lVar2 + -0xc;
      lVar4 = 4;
    }
  }
  mVar9.ip.len = lVar5;
  mVar9.ip.array = (uint8 *)lVar2;
  mVar9.m.len = (int)puVar3;
  mVar9.m.array = (uint8 *)lVar7;
  mVar9.ip.cap = lVar4;
  mVar9.m.cap = lVar6;
  return mVar9;
}


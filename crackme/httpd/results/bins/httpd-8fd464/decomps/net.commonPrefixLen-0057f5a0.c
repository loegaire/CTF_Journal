
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.commonPrefixLen(net.IP a, net.IP b, int cpl) */

int net_commonPrefixLen(net_IP a,net_IP b)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  net_IP a_spill;
  net_IP b_spill;
  
                    /* Unresolved local var: net.IP a4@[???] */
  pbVar1 = a_spill.array;
  lVar2 = a_spill.cap;
  lVar4 = a_spill.len;
  if (a_spill.len != 4) {
    if (a_spill.len == 0x10) {
                    /* Unresolved local var: int i@[???] */
      for (lVar2 = 0; lVar2 < 10; lVar2 = lVar2 + 1) {
        if (a_spill.array[lVar2] != 0) goto LAB_0057f5db;
      }
      if ((a_spill.array[10] == 0xff) && (a_spill.array[0xb] == 0xff)) {
        pbVar1 = a_spill.array + 0xc;
        lVar2 = a_spill.cap + -0xc;
        lVar4 = 4;
        goto LAB_0057f5e1;
      }
    }
LAB_0057f5db:
    pbVar1 = (byte *)0x0;
    lVar2 = 0;
    lVar4 = 0;
  }
LAB_0057f5e1:
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = a_spill.array;
    lVar2 = a_spill.cap;
    lVar4 = a_spill.len;
  }
  pbVar5 = b_spill.array;
  lVar6 = b_spill.len;
  lVar7 = b_spill.cap;
  if (b_spill.len != 4) {
    if (b_spill.len == 0x10) {
                    /* Unresolved local var: int i@[???] */
      for (lVar6 = 0; lVar6 < 10; lVar6 = lVar6 + 1) {
        if (b_spill.array[lVar6] != 0) goto LAB_0057f625;
      }
      if ((b_spill.array[10] == 0xff) && (b_spill.array[0xb] == 0xff)) {
        pbVar5 = b_spill.array + 0xc;
        lVar6 = 4;
        lVar7 = b_spill.cap + -0xc;
        goto LAB_0057f62c;
      }
    }
LAB_0057f625:
    pbVar5 = (byte *)0x0;
    lVar6 = 0;
    lVar7 = 0;
  }
LAB_0057f62c:
  if (pbVar5 == (byte *)0x0) {
    pbVar5 = b_spill.array;
    lVar6 = b_spill.len;
    lVar7 = b_spill.cap;
  }
  if (lVar6 != lVar4) {
    return (int)pbVar1;
  }
  if (8 < lVar4) {
    lVar4 = 8;
    lVar6 = 8;
  }
                    /* Unresolved local var: uint8 ab@[???]
                       Unresolved local var: uint8 bb@[???]
                       Unresolved local var: int bits@[???] */
  lVar3 = 0;
  while( true ) {
    if (lVar4 < 1) {
      return (int)pbVar1;
    }
    bVar8 = *pbVar1;
    if (lVar6 == 0) break;
    bVar9 = *pbVar5;
    if (bVar9 != bVar8) {
      lVar2 = 8;
      while( true ) {
        bVar8 = bVar8 >> 1;
        bVar9 = bVar9 >> 1;
        if (bVar9 == bVar8) break;
        lVar2 = lVar2 + -1;
      }
      return lVar2 + lVar3 + -1;
    }
    lVar3 = lVar3 + 8;
    lVar2 = lVar2 + -1;
    pbVar1 = pbVar1 + (-lVar2 >> 0x3f & 1);
    lVar4 = lVar4 + -1;
    lVar7 = lVar7 + -1;
    pbVar5 = pbVar5 + (-lVar7 >> 0x3f & 1);
    lVar6 = lVar6 + -1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}


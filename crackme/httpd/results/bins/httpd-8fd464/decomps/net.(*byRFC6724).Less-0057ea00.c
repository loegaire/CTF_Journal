
/* WARNING: Removing unreachable block (ram,0x0057ee1f) */
/* WARNING: Removing unreachable block (ram,0x0057ee37) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*byRFC6724).Less(net.byRFC6724 * s, int i, int j, bool ~r2)
    */

bool net___byRFC6724__Less(net_byRFC6724 *s,int i,int j)

{
  byte bVar1;
  net_IPAddr *pnVar2;
  ulong uVar3;
  int iVar4;
  net_IP *pnVar5;
  uint8 *puVar6;
  net_ipAttr *pnVar7;
  net_ipAttr *pnVar8;
  bool bVar9;
  byte bVar10;
  uint8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  net_IP a;
  net_IP a_00;
  net_IP b;
  net_IP b_00;
  net_byRFC6724 *s_spill;
  int i_spill;
  int j_spill;
  uint8 *local_60;
  uint8 *local_10;
  uint8 *puVar15;
  long lVar16;
  
                    /* Unresolved local var: net.IP DA@[???]
                       Unresolved local var: net.IP DB@[???]
                       Unresolved local var: net.IP SourceDA@[???]
                       Unresolved local var: net.IP SourceDB@[???] */
  while (&local_10 <= *(uint8 ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  pnVar2 = (s_spill->addrs).array;
  uVar3 = (s_spill->addrs).len;
  if (uVar3 <= (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  puVar15 = pnVar2[i_spill].IP.array;
  lVar16 = pnVar2[i_spill].IP.len;
  if (uVar3 <= (ulong)j_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  local_10 = pnVar2[j_spill].IP.array;
  lVar13 = pnVar2[j_spill].IP.len;
  iVar4 = pnVar2[j_spill].IP.cap;
  pnVar5 = (s_spill->srcs).array;
  uVar3 = (s_spill->srcs).len;
  if (uVar3 <= (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if (uVar3 <= (ulong)j_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  uVar14 = j_spill * 3;
  puVar6 = pnVar5[j_spill].array;
  pnVar7 = (s_spill->addrAttr).array;
  uVar3 = (s_spill->addrAttr).len;
  if (uVar3 <= (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if (uVar3 <= (ulong)j_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  pnVar8 = (s_spill->srcAttr).array;
  uVar3 = (s_spill->srcAttr).len;
  if (uVar3 <= (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if (uVar3 <= (ulong)j_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  bVar9 = SUB81(i_spill,0);
  if ((pnVar5[i_spill].array == (uint8 *)0x0) && (puVar6 == (uint8 *)0x0)) {
    return bVar9;
  }
  if (puVar6 == (uint8 *)0x0) {
    return bVar9;
  }
  if (pnVar5[i_spill].array == (uint8 *)0x0) {
    return bVar9;
  }
  bVar10 = pnVar7[i_spill].Scope;
  if (pnVar8[i_spill].Scope == bVar10) {
    if (pnVar8[j_spill].Scope != pnVar7[j_spill].Scope) {
      return (bool)bVar10;
    }
    if (pnVar8[i_spill].Scope != bVar10) goto LAB_0057eb9e;
  }
  else {
LAB_0057eb9e:
    if (pnVar8[j_spill].Scope == pnVar7[j_spill].Scope) {
      return (bool)bVar10;
    }
  }
  if (pnVar7[i_spill].Label == pnVar8[i_spill].Label) {
    if (pnVar7[j_spill].Label != pnVar8[j_spill].Label) {
      return (bool)bVar10;
    }
    if (pnVar7[i_spill].Label != pnVar8[i_spill].Label) goto LAB_0057ec0f;
  }
  else {
LAB_0057ec0f:
    if (pnVar7[j_spill].Label == pnVar8[j_spill].Label) {
      return (bool)bVar10;
    }
  }
  if (pnVar7[j_spill].Precedence < pnVar7[i_spill].Precedence) {
    return (bool)bVar10;
  }
  if (pnVar7[j_spill].Precedence != pnVar7[i_spill].Precedence) {
    return (bool)bVar10;
  }
  bVar1 = pnVar7[j_spill].Scope;
  if (bVar1 >= bVar10 && bVar1 != bVar10) {
    return (bool)bVar10;
  }
  if (bVar1 < bVar10) {
    return (bool)bVar10;
  }
  puVar11 = puVar15;
  if (lVar16 != 4) {
    if (lVar16 == 0x10) {
                    /* Unresolved local var: int i@[???] */
      for (lVar12 = 0; lVar12 < 10; lVar12 = lVar12 + 1) {
        if (puVar15[lVar12] != 0) goto LAB_0057ed3e;
      }
      if ((puVar15[10] == 0xff) && (puVar15[0xb] == 0xff)) {
        puVar11 = puVar15 + 0xc;
        goto LAB_0057ed40;
      }
    }
LAB_0057ed3e:
    puVar11 = (uint8 *)0x0;
  }
LAB_0057ed40:
  if (puVar11 != (uint8 *)0x0) goto LAB_0057ed6f;
  puVar11 = local_10;
  if (lVar13 != 4) {
    if (lVar13 == 0x10) {
                    /* Unresolved local var: int i@[???] */
      for (lVar13 = 0; lVar13 < 10; lVar13 = lVar13 + 1) {
        uVar14 = (ulong)local_10[lVar13];
        if (local_10[lVar13] != 0) goto LAB_0057ee4f;
      }
      if ((local_10[10] == 0xff) && (local_10[0xb] == 0xff)) {
        puVar11 = local_10 + 0xc;
        goto LAB_0057ed87;
      }
    }
LAB_0057ee4f:
    puVar11 = (uint8 *)0x0;
  }
LAB_0057ed87:
  if (puVar11 == (uint8 *)0x0) {
    a.len = (int)puVar6;
    a.array = (uint8 *)pnVar2[i_spill].IP.cap;
    a.cap = pnVar5[i_spill].cap;
    b.len = uVar14;
    b.array = puVar15;
    b.cap = lVar16;
    net_commonPrefixLen(a,b);
    a_00.len = (int)puVar6;
    a_00.array = local_60;
    a_00.cap = iVar4;
    b_00.len = uVar14;
    b_00.array = puVar15;
    b_00.cap = lVar16;
    net_commonPrefixLen(a_00,b_00);
    puVar11 = local_60;
  }
LAB_0057ed6f:
  return SUB81(puVar11,0);
}


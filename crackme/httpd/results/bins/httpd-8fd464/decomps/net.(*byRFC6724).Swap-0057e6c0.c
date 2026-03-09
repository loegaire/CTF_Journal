
/* WARNING: Unknown calling convention */

void net___byRFC6724__Swap(net_byRFC6724 *s,int i,int j)

{
  net_scope nVar1;
  uint8 uVar2;
  uint8 uVar3;
  uint8 uVar4;
  uint8 uVar5;
  net_IPAddr *dst;
  void *src;
  net_IPAddr *pnVar6;
  net_IP *pnVar7;
  uint8 *puVar8;
  int iVar9;
  net_ipAttr *pnVar10;
  ulong uVar11;
  ulong extraout_RAX;
  ulong extraout_RAX_00;
  ulong uVar12;
  net_byRFC6724 *extraout_RDX;
  net_byRFC6724 *extraout_RDX_00;
  long lVar13;
  uint8 *puVar14;
  int iVar15;
  int iVar16;
  long in_FS_OFFSET;
  net_byRFC6724 *s_spill;
  int i_spill;
  int j_spill;
  uint8 *local_30;
  uintptr local_28;
  int iStack_20;
  func_unsafe_Pointer__unsafe_Pointer__bool **local_18;
  uint8 *puStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  dst = (s_spill->addrs).array;
  src = (void *)(s_spill->addrs).len;
  if (src <= (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  local_30 = dst[i_spill].IP.array;
  local_28 = dst[i_spill].IP.len;
  iStack_20 = dst[i_spill].IP.cap;
  local_18 = (func_unsafe_Pointer__unsafe_Pointer__bool **)dst[i_spill].Zone.str;
  puStack_10 = (uint8 *)dst[i_spill].Zone.len;
  pnVar6 = (s_spill->addrs).array;
  uVar12 = (s_spill->addrs).len;
  if (uVar12 <= (ulong)j_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if (uVar12 <= (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    pnVar6[i_spill].IP.array = pnVar6[j_spill].IP.array;
    iVar15 = pnVar6[j_spill].IP.cap;
    pnVar6[i_spill].IP.len = pnVar6[j_spill].IP.len;
    pnVar6[i_spill].IP.cap = iVar15;
    iVar15 = pnVar6[j_spill].Zone.len;
    pnVar6[i_spill].Zone.str = pnVar6[j_spill].Zone.str;
    pnVar6[i_spill].Zone.len = iVar15;
  }
  else {
    runtime_typedmemmove((runtime__type *)&DAT_0024c960,dst,src);
  }
  if (src <= (ulong)j_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    dst[j_spill].IP.array = local_30;
    dst[j_spill].IP.len = local_28;
    dst[j_spill].IP.cap = iStack_20;
    dst[j_spill].Zone.str = (uint8 *)local_18;
    dst[j_spill].Zone.len = (int)puStack_10;
  }
  else {
    runtime_typedmemmove((runtime__type *)&local_30,dst,src);
  }
  pnVar7 = (s_spill->srcs).array;
  uVar12 = (s_spill->srcs).len;
  if (uVar12 <= (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  lVar13 = i_spill * 3;
  puVar14 = pnVar7[i_spill].array;
  iVar15 = pnVar7[i_spill].len;
  iVar16 = pnVar7[i_spill].cap;
  if (uVar12 <= (ulong)j_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  puVar8 = pnVar7[j_spill].array;
  iVar9 = pnVar7[j_spill].cap;
  pnVar7[i_spill].len = pnVar7[j_spill].len;
  pnVar7[i_spill].cap = iVar9;
  uVar12 = j_spill;
  if (runtime_writeBarrier._0_4_ == 0) {
    pnVar7[i_spill].array = puVar8;
  }
  else {
    runtime_gcWriteBarrierSI();
    i_spill = extraout_RAX;
    s_spill = extraout_RDX;
  }
  pnVar7[j_spill].len = iVar15;
  pnVar7[j_spill].cap = iVar16;
  if (runtime_writeBarrier._0_4_ == 0) {
    pnVar7[j_spill].array = puVar14;
  }
  else {
    runtime_gcWriteBarrierR8();
    i_spill = extraout_RAX_00;
    s_spill = extraout_RDX_00;
  }
  pnVar10 = (s_spill->addrAttr).array;
  uVar11 = (s_spill->addrAttr).len;
  if (uVar11 <= (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  nVar1 = (&pnVar10->Scope)[lVar13];
  uVar2 = (&pnVar10->Precedence)[lVar13];
  uVar3 = (&pnVar10->Label)[lVar13];
  if (uVar11 <= uVar12) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  uVar4 = pnVar10[j_spill].Precedence;
  uVar5 = pnVar10[j_spill].Label;
  (&pnVar10->Scope)[lVar13] = pnVar10[j_spill].Scope;
  (&pnVar10->Precedence)[lVar13] = uVar4;
  (&pnVar10->Label)[lVar13] = uVar5;
  pnVar10[j_spill].Scope = nVar1;
  pnVar10[j_spill].Precedence = uVar2;
  pnVar10[j_spill].Label = uVar3;
  pnVar10 = (s_spill->srcAttr).array;
  uVar11 = (s_spill->srcAttr).len;
  if ((ulong)i_spill < uVar11) {
    nVar1 = (&pnVar10->Scope)[lVar13];
    uVar2 = (&pnVar10->Precedence)[lVar13];
    uVar3 = (&pnVar10->Label)[lVar13];
    if (uVar12 < uVar11) {
      uVar4 = pnVar10[j_spill].Precedence;
      uVar5 = pnVar10[j_spill].Label;
      (&pnVar10->Scope)[lVar13] = pnVar10[j_spill].Scope;
      (&pnVar10->Precedence)[lVar13] = uVar4;
      (&pnVar10->Label)[lVar13] = uVar5;
      pnVar10[j_spill].Scope = nVar1;
      pnVar10[j_spill].Precedence = uVar2;
      pnVar10[j_spill].Label = uVar3;
      return;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}


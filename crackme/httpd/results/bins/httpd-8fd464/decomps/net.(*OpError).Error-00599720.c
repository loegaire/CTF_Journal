
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*OpError).Error(net.OpError * e, string ~r0) */

string net___OpError__Error(net_OpError *e)

{
  runtime_tmpBuf *pauVar1;
  runtime_itab *prVar2;
  runtime_interfacetype *prVar3;
  code *pcVar4;
  runtime_tmpBuf *pauVar5;
  runtime_tmpBuf *pauVar6;
  uint8 *puVar7;
  uint8 *puVar8;
  int unaff_RBX;
  void *pvVar10;
  uint8 *in_RDI;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  string sVar11;
  string sVar12;
  string a0;
  string a0_00;
  string a0_01;
  string a0_02;
  string a0_03;
  string a0_04;
  string a1;
  string a1_00;
  string a1_01;
  string a1_02;
  string a1_03;
  string a1_04;
  string a2;
  string a2_00;
  string a2_01;
  net_OpError *e_spill;
  runtime_tmpBuf *local_58;
  uint8 *local_50;
  runtime_tmpBuf *local_38;
  uint8 *local_30;
  runtime_tmpBuf *local_28;
  uint8 *local_20;
  uint8 *puVar9;
  
                    /* Unresolved local var: string s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (e_spill != (net_OpError *)0x0) {
    pauVar6 = (runtime_tmpBuf *)(e_spill->Op).str;
    puVar9 = (uint8 *)(e_spill->Op).len;
    puVar8 = (uint8 *)(e_spill->Net).len;
    pauVar1 = (runtime_tmpBuf *)(e_spill->Net).str;
    pauVar5 = pauVar6;
    puVar7 = puVar9;
    if (puVar8 != (uint8 *)0x0) {
      a0.len = (int)pauVar6;
      a0.str = puVar8;
      a1.len = (int)pauVar1;
      a1.str = in_RDI;
      a2.len = in_R9;
      a2.str = in_R8;
      runtime_concatstring3((runtime_tmpBuf *)&syscall__stmp_16,a0,a1,a2);
      pauVar5 = local_28;
      puVar7 = local_20;
      local_58 = pauVar6;
      local_50 = puVar9;
      local_38 = pauVar1;
      local_30 = puVar8;
    }
    prVar2 = (e_spill->Source).tab;
    pvVar10 = (e_spill->Source).data;
    puVar9 = (uint8 *)0x0;
    pauVar6 = pauVar5;
    puVar8 = puVar7;
    if (prVar2 != (runtime_itab *)0x0) {
      (*(code *)prVar2[1].inter)();
      local_38 = local_58;
      local_30 = local_50;
      a0_00.len = (int)local_50;
      a0_00.str = (uint8 *)prVar2;
      a1_00.len = (int)pvVar10;
      a1_00.str = in_RDI;
      a2_00.len = in_R9;
      a2_00.str = in_R8;
      sVar11 = runtime_concatstring3(local_58,a0_00,a1_00,a2_00);
      puVar9 = (uint8 *)sVar11.len;
      pauVar6 = local_28;
      puVar8 = local_20;
      local_58 = pauVar5;
      local_50 = puVar7;
    }
    if ((e_spill->Addr).tab != (runtime_itab *)0x0) {
      if ((e_spill->Source).tab == (runtime_itab *)0x0) {
        a0_02.len = (int)pauVar6;
        a0_02.str = puVar9;
        a1_02.len = (int)pvVar10;
        a1_02.str = in_RDI;
        runtime_concatstring2((runtime_tmpBuf *)&syscall__stmp_16,a0_02,a1_02);
      }
      else {
        a0_01.len = (int)pauVar6;
        a0_01.str = puVar9;
        a1_01.len = (int)pvVar10;
        a1_01.str = in_RDI;
        runtime_concatstring2((runtime_tmpBuf *)&DAT_00287789,a0_01,a1_01);
      }
      local_50 = local_30;
      pvVar10 = (e_spill->Addr).data;
      prVar3 = (e_spill->Addr).tab[1].inter;
      (*(code *)prVar3)();
      local_58 = local_38;
      a0_03.len = (int)puVar8;
      a0_03.str = (uint8 *)prVar3;
      a1_03.len = (int)pvVar10;
      a1_03.str = in_RDI;
      runtime_concatstring2(pauVar6,a0_03,a1_03);
    }
    pcVar4 = (code *)((e_spill->Err).tab)->fun[0];
    (*pcVar4)();
    a0_04.len = (int)local_50;
    a0_04.str = (uint8 *)pcVar4;
    a1_04.len = (int)pvVar10;
    a1_04.str = in_RDI;
    a2_01.len = in_R9;
    a2_01.str = in_R8;
    sVar11 = runtime_concatstring3(local_58,a0_04,a1_04,a2_01);
    sVar12.len = sVar11.len;
    sVar12.str = *local_28;
    return sVar12;
  }
  sVar11.len = unaff_RBX;
  sVar11.str = &DAT_002889bc;
  return sVar11;
}


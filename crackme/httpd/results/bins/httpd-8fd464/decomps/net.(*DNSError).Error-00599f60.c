
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*DNSError).Error(net.DNSError * e, string ~r0) */

string net___DNSError__Error(net_DNSError *e)

{
  long lVar1;
  int unaff_RBX;
  int in_RSI;
  uint8 *in_RDI;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  string sVar2;
  string sVar3;
  string a1;
  string a1_00;
  string a1_01;
  string a0;
  string a0_00;
  string a0_01;
  string a2;
  string a2_00;
  net_DNSError *e_spill;
  uint8 *local_28;
  int local_20;
  uint8 *local_18;
  int local_10;
  
                    /* Unresolved local var: string s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (e_spill != (net_DNSError *)0x0) {
    a1.len = in_RSI;
    a1.str = in_RDI;
    a0.len = (int)(e_spill->Name).str;
    a0.str = &DAT_0028af7c;
    runtime_concatstring2((runtime_tmpBuf *)e_spill,a0,a1);
    lVar1 = (e_spill->Server).len;
    if (lVar1 != 0) {
      a1_00.len = local_20;
      a1_00.str = in_RDI;
      a0_00.len = lVar1;
      a0_00.str = local_28;
      a2.len = in_R9;
      a2.str = in_R8;
      runtime_concatstring3((runtime_tmpBuf *)&DAT_00287dbd,a0_00,a1_00,a2);
      local_28 = local_18;
      local_20 = local_10;
    }
    a1_01.len = local_20;
    a1_01.str = in_RDI;
    a0_01.len = (int)(e_spill->Err).str;
    a0_01.str = local_28;
    a2_00.len = in_R9;
    a2_00.str = in_R8;
    sVar2 = runtime_concatstring3((runtime_tmpBuf *)(e_spill->Err).len,a0_01,a1_01,a2_00);
    sVar3.len = sVar2.len;
    sVar3.str = local_18;
    return sVar3;
  }
  sVar2.len = unaff_RBX;
  sVar2.str = &DAT_002889bc;
  return sVar2;
}



/* WARNING: Removing unreachable block (ram,0x005a035e) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*TCPAddr).String(net.TCPAddr * a, string ~r0) */

string net___TCPAddr__String(net_TCPAddr *a)

{
  long lVar1;
  runtime_tmpBuf *pauVar2;
  int unaff_RBX;
  int in_RSI;
  undefined *puVar4;
  uint8 *in_RDI;
  uint8 *in_R8;
  int in_R9;
  uint8 *in_R10;
  int in_R11;
  long in_FS_OFFSET;
  string sVar5;
  string sVar6;
  string sVar7;
  string a1;
  string a1_00;
  string a1_01;
  string a1_02;
  string a0;
  string a0_00;
  string a0_01;
  string a0_02;
  net_IP ip;
  string a2;
  string a2_00;
  string a2_01;
  string a2_02;
  string a3;
  string a3_00;
  net_TCPAddr *a_spill;
  long local_b8;
  runtime_tmpBuf *local_b0;
  long local_a8;
  uint8 *local_a0;
  uint8 *local_88;
  int local_80;
  uint8 *local_78;
  undefined1 local_40 [24];
  long local_28;
  long local_20;
  long local_18;
  int iVar3;
  
                    /* Unresolved local var: string ip@[???]
                       Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
  while (local_40 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (a_spill == (net_TCPAddr *)0x0) {
    sVar7.len = unaff_RBX;
    sVar7.str = &DAT_002889bc;
    return sVar7;
  }
  lVar1 = (a_spill->IP).len;
  pauVar2 = (runtime_tmpBuf *)(a_spill->IP).cap;
  if (lVar1 == 0) {
    local_a0 = (uint8 *)0x0;
    local_28 = 0;
  }
  else {
    ip.len = (int)pauVar2;
    ip.array = (uint8 *)a_spill;
    ip.cap = lVar1;
    net_IP_String(ip);
    local_28 = local_a8;
    local_b8 = lVar1;
    local_b0 = pauVar2;
  }
  if ((a_spill->Zone).len == 0) {
    internal_itoa_Itoa(a_spill->Port);
    local_18 = local_b8;
    pauVar2 = local_b0;
    internal_bytealg_IndexByteString();
    if (local_a8 < 0) {
      a1_02.len = in_RSI;
      a1_02.str = in_RDI;
      a0_02.len = (int)pauVar2;
      a0_02.str = local_a0;
      a2_02.len = in_R9;
      a2_02.str = in_R8;
      sVar5 = runtime_concatstring3(local_b0,a0_02,a1_02,a2_02);
      iVar3 = sVar5.len;
      local_78 = local_88;
    }
    else {
      a1_01.len = in_RSI;
      a1_01.str = in_RDI;
      a0_01.len = (int)pauVar2;
      a0_01.str = local_a0;
      a2_01.len = in_R9;
      a2_01.str = in_R8;
      a3_00.len = in_R11;
      a3_00.str = in_R10;
      sVar5 = runtime_concatstring4(local_b0,a0_01,a1_01,a2_01,a3_00);
      iVar3 = sVar5.len;
    }
    sVar6.len = iVar3;
    sVar6.str = local_78;
    return sVar6;
  }
  internal_itoa_Itoa((int)a_spill);
  local_20 = local_b8;
  a1.len = (int)&DAT_002f3a2c;
  a1.str = in_RDI;
  puVar4 = &DAT_002f3a2c;
  a0.len = (int)(a_spill->Zone).str;
  a0.str = *local_b0;
  a2.len = in_R9;
  a2.str = in_R8;
  sVar5 = runtime_concatstring3((runtime_tmpBuf *)(a_spill->Zone).len,a0,a1,a2);
  a0_00.str = (uint8 *)sVar5.len;
  internal_bytealg_IndexByteString();
  a1_00.len = (int)puVar4;
  a1_00.str = in_RDI;
  a0_00.len = local_80;
  a2_00.len = in_R9;
  a2_00.str = in_R8;
  a3.len = in_R11;
  a3.str = in_R10;
  sVar5 = runtime_concatstring4(local_b0,a0_00,a1_00,a2_00,a3);
  sVar5.str = local_78;
  return sVar5;
}


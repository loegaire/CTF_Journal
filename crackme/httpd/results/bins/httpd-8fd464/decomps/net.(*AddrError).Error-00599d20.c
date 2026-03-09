
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*AddrError).Error(net.AddrError * e, string ~r0) */

string net___AddrError__Error(net_AddrError *e)

{
  uint8 *puVar1;
  int unaff_RBX;
  uint8 *in_RDI;
  uint8 *in_R8;
  int in_R9;
  uint8 *in_R10;
  int in_R11;
  long in_FS_OFFSET;
  string a1;
  string sVar2;
  string a0;
  string a2;
  string a3;
  net_AddrError *e_spill;
  
                    /* Unresolved local var: string s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (e_spill != (net_AddrError *)0x0) {
    puVar1 = (uint8 *)(e_spill->Addr).len;
    sVar2 = e_spill->Addr;
    if (puVar1 != (uint8 *)0x0) {
      a1.len = (int)&DAT_0028bcda;
      a1.str = in_RDI;
      a0.len = (int)(e_spill->Err).str;
      a0.str = puVar1;
      a2.len = in_R9;
      a2.str = in_R8;
      a3.len = in_R11;
      a3.str = in_R10;
      sVar2 = runtime_concatstring4((runtime_tmpBuf *)&DAT_002877a3,a0,a1,a2,a3);
    }
    return sVar2;
  }
  sVar2.len = unaff_RBX;
  sVar2.str = &DAT_002889bc;
  return sVar2;
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*IPAddr).String(net.IPAddr * a, string ~r0) */

string net___IPAddr__String(net_IPAddr *a)

{
  long lVar1;
  uint8 *puVar2;
  int unaff_RBX;
  int in_RSI;
  uint8 *in_RDI;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  string sVar3;
  string sVar4;
  string a0;
  string a1;
  net_IP ip;
  string a2;
  net_IPAddr *a_spill;
  uint8 *local_18;
  
                    /* Unresolved local var: string ip@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (a_spill == (net_IPAddr *)0x0) {
    sVar4.len = unaff_RBX;
    sVar4.str = &DAT_002889bc;
    return sVar4;
  }
  lVar1 = (a_spill->IP).len;
  if (lVar1 != 0) {
    ip.len = (a_spill->IP).cap;
    ip.array = (uint8 *)a_spill;
    ip.cap = lVar1;
    net_IP_String(ip);
  }
  puVar2 = (uint8 *)(a_spill->Zone).len;
  if (puVar2 == (uint8 *)0x0) {
    return a_spill->Zone;
  }
  a0.len = (int)&DAT_002f3a2c;
  a0.str = puVar2;
  a1.len = in_RSI;
  a1.str = in_RDI;
  a2.len = in_R9;
  a2.str = in_R8;
  sVar3 = runtime_concatstring3((runtime_tmpBuf *)(a_spill->Zone).str,a0,a1,a2);
  sVar3.str = local_18;
  return sVar3;
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.IPMask.String(net.IPMask m, string ~r0) */

string net_IPMask_String(net_IPMask m)

{
  long in_FS_OFFSET;
  string sVar1;
  string sVar2;
  __uint8 b;
  net_IPMask m_spill;
  uint8 *local_18;
  
  sVar1.len = m.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (m_spill.len == 0) {
    sVar1.str = &DAT_002889bc;
    return sVar1;
  }
  b.len = sVar1.len;
  b.array = (uint8 *)m_spill.cap;
  b.cap = (int)m_spill.array;
  sVar1 = net_hexString(b);
  sVar2.len = sVar1.len;
  sVar2.str = local_18;
  return sVar2;
}


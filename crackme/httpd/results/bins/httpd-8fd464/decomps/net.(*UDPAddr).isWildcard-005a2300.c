
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*UDPAddr).isWildcard(net.UDPAddr * a, bool ~r0) */

bool net___UDPAddr__isWildcard(net_UDPAddr *a)

{
  uint8 *puVar1;
  int iVar2;
  undefined8 unaff_RBX;
  long in_FS_OFFSET;
  net_IP ip;
  net_UDPAddr *a_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  iVar2 = 0;
  if (a_spill != (net_UDPAddr *)0x0) {
    puVar1 = (a_spill->IP).array;
    iVar2 = (a_spill->IP).cap;
    if (puVar1 != (uint8 *)0x0) {
      ip.len = unaff_RBX;
      ip.array = (uint8 *)iVar2;
      ip.cap = (int)puVar1;
      net_IP_IsUnspecified(ip);
      return (bool)local_10;
    }
  }
  return SUB81(iVar2,0);
}


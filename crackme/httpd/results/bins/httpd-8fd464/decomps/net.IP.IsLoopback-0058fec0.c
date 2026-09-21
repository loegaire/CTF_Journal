
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.IP.IsLoopback(net.IP ip, bool ~r0) */

bool net_IP_IsLoopback(net_IP ip)

{
  bool bVar1;
  long lVar2;
  uint8 *puVar3;
  undefined8 in_RDI;
  int in_R8;
  long in_FS_OFFSET;
  net_IP ip_00;
  net_IP x;
  net_IP ip_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: net.IP ip4@[???] */
  if (ip_spill.len == 4) {
    bVar1 = true;
    puVar3 = ip_spill.array;
  }
  else {
    if (ip_spill.len == 0x10) {
                    /* Unresolved local var: int i@[???] */
      for (lVar2 = 0; lVar2 < 10; lVar2 = lVar2 + 1) {
        if (ip_spill.array[lVar2] != 0) goto LAB_0058ff87;
      }
      if ((ip_spill.array[10] == 0xff) && (ip_spill.array[0xb] == 0xff)) {
        bVar1 = true;
        puVar3 = ip_spill.array + 0xc;
        goto LAB_0058ff0d;
      }
    }
LAB_0058ff87:
    bVar1 = false;
    puVar3 = (uint8 *)0x0;
  }
LAB_0058ff0d:
  if (puVar3 == (uint8 *)0x0) {
    ip_00.len = net_IPv6loopback.cap;
    ip_00.array = (uint8 *)ip_spill.cap;
    ip_00.cap = (int)net_IPv6loopback.array;
    x.len = (int)ip_spill.array;
    x.array = (uint8 *)in_RDI;
    x.cap = in_R8;
    net_IP_Equal(ip_00,x);
    return (bool)local_10;
  }
  if (!bVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  return SUB81(ip_spill.len,0);
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.IP.IsUnspecified(net.IP ip, bool ~r0) */

bool net_IP_IsUnspecified(net_IP ip)

{
  int in_R8;
  long in_FS_OFFSET;
  net_IP ip_00;
  net_IP ip_01;
  net_IP x;
  net_IP x_00;
  net_IP ip_spill;
  undefined1 local_10;
  int iVar1;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  ip_00.len = (int)ip_spill.array;
  ip_00.array = net_IPv4zero.array;
  ip_00.cap = net_IPv4zero.len;
  x.len = ip_spill.len;
  x.array = (uint8 *)ip_spill.cap;
  x.cap = in_R8;
  iVar1 = ip_spill.cap;
  net_IP_Equal(ip_00,x);
  if (local_10 == '\0') {
    ip_01.len = ip_spill.cap;
    ip_01.array = net_IPv6unspecified.array;
    ip_01.cap = net_IPv6unspecified.len;
    x_00.len = ip_spill.len;
    x_00.array = (uint8 *)iVar1;
    x_00.cap = in_R8;
    net_IP_Equal(ip_01,x_00);
  }
  return local_10 != '\0';
}


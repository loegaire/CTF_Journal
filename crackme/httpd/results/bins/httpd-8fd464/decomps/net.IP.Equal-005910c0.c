
/* WARNING: Removing unreachable block (ram,0x0059118d) */
/* WARNING: Removing unreachable block (ram,0x0059122d) */
/* WARNING: Removing unreachable block (ram,0x005910f2) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.IP.Equal(net.IP ip, net.IP x, bool ~r1) */

bool net_IP_Equal(net_IP ip,net_IP x)

{
  char cVar1;
  long in_FS_OFFSET;
  net_IP ip_spill;
  net_IP x_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (x_spill.len == ip_spill.len) {
    runtime_memequal();
    return (bool)local_10;
  }
  if ((ip_spill.len == 4) && (x_spill.len == 0x10)) {
    if (net_v4InV6Prefix.len == 0xc) {
      runtime_memequal();
      cVar1 = local_10;
    }
    else {
      cVar1 = '\0';
    }
    if (cVar1 == '\0') {
      local_10 = '\0';
    }
    else {
      runtime_memequal();
    }
    return (bool)local_10;
  }
  if ((ip_spill.len == 0x10) && (x_spill.len == 4)) {
    if (net_v4InV6Prefix.len == 0xc) {
      runtime_memequal();
      cVar1 = local_10;
    }
    else {
      cVar1 = '\0';
    }
    if (cVar1 == '\0') {
      local_10 = '\0';
    }
    else {
      runtime_memequal();
    }
    return (bool)local_10;
  }
  return SUB81(x_spill.len,0);
}


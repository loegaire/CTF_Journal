
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.supportsIPv4map(bool ~r0) */

bool net_supportsIPv4map(void)

{
  func__ **unaff_RBX;
  long in_FS_OFFSET;
  code *local_18;
  net_ipStackCapabilities *pnStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_18 = net___ipStackCapabilities__probe_fm;
  pnStack_10 = &net_ipStackCaps;
  if (net_ipStackCaps.Once.done == 0) {
    sync___Once__doSlow((sync_Once *)&local_18,unaff_RBX);
  }
  return net_ipStackCaps.ipv4MappedIPv6Enabled;
}


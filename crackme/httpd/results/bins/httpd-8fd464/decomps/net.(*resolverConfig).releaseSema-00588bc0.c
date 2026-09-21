
/* WARNING: Unknown calling convention */

void net___resolverConfig__releaseSema(net_resolverConfig *conf)

{
  void *unaff_RBX;
  long in_FS_OFFSET;
  net_resolverConfig *conf_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_chanrecv1((runtime_hchan *)conf_spill->ch,unaff_RBX);
  return;
}


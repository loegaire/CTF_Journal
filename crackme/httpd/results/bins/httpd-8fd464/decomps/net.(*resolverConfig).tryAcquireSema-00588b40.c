
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*resolverConfig).tryAcquireSema(net.resolverConfig * conf,
   bool ~r0) */

bool net___resolverConfig__tryAcquireSema(net_resolverConfig *conf)

{
  bool bVar1;
  void *unaff_RBX;
  long in_FS_OFFSET;
  net_resolverConfig *conf_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  bVar1 = runtime_selectnbsend((runtime_hchan *)&stack0xfffffffffffffff8,unaff_RBX);
  if (local_10 != '\0') {
    return bVar1;
  }
  return bVar1;
}


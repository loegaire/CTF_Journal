
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void net___resolverConfig__init_fm(void)

{
  long *plVar1;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  net_resolverConfig *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
    *plVar1 = (long)&local_10;
  }
  local_10 = *(net_resolverConfig **)(in_RDX + 8);
  net___resolverConfig__init(local_10);
  return;
}


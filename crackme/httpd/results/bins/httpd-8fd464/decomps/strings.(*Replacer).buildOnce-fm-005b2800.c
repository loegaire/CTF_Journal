
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void strings___Replacer__buildOnce_fm(void)

{
  long *plVar1;
  long in_RDX;
  strings_Replacer *extraout_RDX;
  strings_Replacer *psVar2;
  long extraout_RDX_00;
  long in_FS_OFFSET;
  strings_Replacer *local_28;
  runtime_itab *local_20;
  void *local_18;
  strings_Replacer *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX_00;
  }
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if ((plVar1 != (long *)0x0) && ((undefined1 *)*plVar1 == &stack0x00000008)) {
    *plVar1 = (long)&local_28;
  }
  local_28 = *(strings_Replacer **)(in_RDX + 8);
  local_10 = local_28;
  strings___Replacer__build(local_28);
  (local_10->r).tab = local_20;
  if (runtime_writeBarrier._0_4_ == 0) {
    (local_10->r).data = local_18;
    psVar2 = local_10;
  }
  else {
    runtime_gcWriteBarrier();
    psVar2 = extraout_RDX;
  }
  (psVar2->oldnew).len = 0;
  (psVar2->oldnew).cap = 0;
  if (runtime_writeBarrier._0_4_ == 0) {
    (psVar2->oldnew).array = (string *)0x0;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}


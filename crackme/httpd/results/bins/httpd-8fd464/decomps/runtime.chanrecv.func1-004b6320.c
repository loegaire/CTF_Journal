
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_chanrecv_func1(void)

{
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.hchan * c@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  runtime_unlock2((runtime_mutex *)(*(long *)(in_RDX + 8) + 0x58));
  return;
}


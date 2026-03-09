
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_mProf_Malloc_func1(void)

{
  long in_RDX;
  long extraout_RDX;
  runtime_bucket *unaff_RBX;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: void * p@[???]
                       Unresolved local var: runtime.bucket * b@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  runtime_setprofilebucket(*(void **)(in_RDX + 0x10),unaff_RBX);
  return;
}


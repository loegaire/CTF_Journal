
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_cgoCheckTypedBlock_func1(void)

{
  long in_RDX;
  long extraout_RDX;
  uintptr in_RDI;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime._type * typ@[???]
                       Unresolved local var: void * src@[???]
                       Unresolved local var: uintptr off@[???]
                       Unresolved local var: uintptr size@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  runtime_cgoCheckUsingType
            (*(runtime__type **)(in_RDX + 0x10),*(void **)(in_RDX + 0x20),
             *(uintptr *)(in_RDX + 0x18),in_RDI);
  return;
}


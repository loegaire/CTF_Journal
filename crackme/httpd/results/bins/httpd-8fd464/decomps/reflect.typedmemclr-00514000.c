
/* WARNING: Unknown calling convention */

void reflect_typedmemclr(runtime__type *typ,void *ptr)

{
  long in_FS_OFFSET;
  runtime__type *typ_spill;
  void *ptr_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_typedmemclr(ptr_spill,ptr);
  return;
}


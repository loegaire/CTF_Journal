
/* WARNING: Unknown calling convention */

void reflect_typedmemmove(runtime__type *typ,void *dst,void *src)

{
  long in_FS_OFFSET;
  runtime__type *typ_spill;
  void *dst_spill;
  void *src_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_typedmemmove(src_spill,dst,src);
  return;
}


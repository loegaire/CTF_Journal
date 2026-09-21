
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.unsafe_New(runtime._type * typ, void * ~r1) */

void * reflect_unsafe_New(runtime__type *typ)

{
  runtime__type *unaff_RBX;
  long in_FS_OFFSET;
  runtime__type *typ_spill;
  void *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_mallocgc((uintptr)typ_spill,unaff_RBX,SUB81(typ_spill->size,0));
  return local_10;
}


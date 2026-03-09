
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.unsafe_NewArray(runtime._type * typ, int n, void * ~r2) */

void * reflect_unsafe_NewArray(runtime__type *typ,int n)

{
  long in_FS_OFFSET;
  runtime__type *typ_spill;
  int n_spill;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newarray((runtime__type *)n_spill,n);
  return local_10;
}


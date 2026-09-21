
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.convT16(uint16 val, void * x) */

void * runtime_convT16(uint16 val)

{
  undefined8 in_RCX;
  runtime__type *unaff_RBX;
  long in_FS_OFFSET;
  uint16 val_spill;
  uint64 *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (val_spill < 0x100) {
    local_10 = runtime_staticuint64s + val_spill;
  }
  else {
    runtime_mallocgc((uintptr)runtime_uint16Type,unaff_RBX,SUB81(in_RCX,0));
    *(uint16 *)local_10 = val_spill;
  }
  return local_10;
}


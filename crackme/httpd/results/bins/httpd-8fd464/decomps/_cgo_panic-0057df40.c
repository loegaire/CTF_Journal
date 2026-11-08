
/* WARNING: Unknown calling convention */

void _cgo_panic(struct___runtime_cgo_cstr__uint8__ *a)

{
  long in_FS_OFFSET;
  struct___runtime_cgo_cstr__uint8__ *a_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime__cgo_panic_internal(a_spill->cstr);
  return;
}


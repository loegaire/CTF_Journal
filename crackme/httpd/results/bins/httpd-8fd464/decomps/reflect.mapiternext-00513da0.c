
/* WARNING: Unknown calling convention */

void reflect_mapiternext(runtime_hiter *it)

{
  long in_FS_OFFSET;
  runtime_hiter *it_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_mapiternext(it_spill);
  return;
}


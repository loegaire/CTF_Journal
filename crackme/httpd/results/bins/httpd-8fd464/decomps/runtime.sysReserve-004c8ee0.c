
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.sysReserve(void * v, uintptr n, void * ~r2) */

void * runtime_sysReserve(void *v,uintptr n)

{
  long in_FS_OFFSET;
  void *v_spill;
  uintptr n_spill;
  undefined8 local_18;
  undefined8 local_10;
  
                    /* Unresolved local var: void * p@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_mmap();
  if (local_10 != 0) {
    return local_18;
  }
  return local_18;
}


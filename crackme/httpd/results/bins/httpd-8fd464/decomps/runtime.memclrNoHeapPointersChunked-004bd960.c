
/* WARNING: Unknown calling convention */

void runtime_memclrNoHeapPointersChunked(uintptr size,void *x)

{
  void *pvVar1;
  long in_FS_OFFSET;
  uintptr size_spill;
  void *x_spill;
  
                    /* Unresolved local var: uintptr v@[???]
                       Unresolved local var: uintptr vsize@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  pvVar1 = (void *)(size_spill + (long)x_spill);
                    /* Unresolved local var: uintptr voff@[???] */
  for (; x_spill < pvVar1; x_spill = (void *)((long)x_spill + 0x40000)) {
    if (*(char *)(*(long *)(in_FS_OFFSET + -8) + 0xb1) != '\0') {
      runtime_mcall();
    }
                    /* Unresolved local var: uintptr n@[???] */
    runtime_memclrNoHeapPointers();
  }
  return;
}


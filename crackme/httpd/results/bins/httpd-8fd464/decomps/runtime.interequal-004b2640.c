
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.interequal(void * p, void * q, bool ~r2) */

bool runtime_interequal(void *p,void *q)

{
  long in_FS_OFFSET;
  void *p_spill;
  void *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (*(void **)q_spill == *(void **)p_spill) {
    runtime_ifaceeq(*(runtime_itab **)((long)p_spill + 8),*(void **)((long)q_spill + 8),
                    *(void **)p_spill);
  }
  else {
    local_10 = 0;
  }
  return (bool)local_10;
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.runtime._func(runtime._func * p, runtime._func * q, bool
   r) */

bool type__eq_runtime__func(runtime__func *p,runtime__func *q)

{
  long in_FS_OFFSET;
  runtime__func *p_spill;
  runtime__func *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (q_spill->nfuncdata == p_spill->nfuncdata) {
    runtime_memequal();
  }
  else {
    local_10 = 0;
  }
  return (bool)local_10;
}


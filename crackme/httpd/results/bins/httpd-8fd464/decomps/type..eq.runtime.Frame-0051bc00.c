
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.runtime.Frame(runtime.Frame * p, runtime.Frame * q, bool
   r) */

bool type__eq_runtime_Frame(runtime_Frame *p,runtime_Frame *q)

{
  long in_FS_OFFSET;
  runtime_Frame *p_spill;
  runtime_Frame *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((((q_spill->PC == p_spill->PC) && (q_spill->Func == p_spill->Func)) &&
      ((q_spill->Function).len == (p_spill->Function).len)) &&
     ((((q_spill->File).len == (p_spill->File).len && (runtime_memequal(), local_10 != '\0')) &&
      (runtime_memequal(), local_10 != '\0')))) {
    runtime_memequal();
    return (bool)local_10;
  }
  return false;
}


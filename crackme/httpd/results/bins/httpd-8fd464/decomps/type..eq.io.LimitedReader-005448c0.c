
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.io.LimitedReader(io.LimitedReader * p, io.LimitedReader *
   q, bool r) */

bool type__eq_io_LimitedReader(io_LimitedReader *p,io_LimitedReader *q)

{
  runtime_itab *y;
  long in_FS_OFFSET;
  io_LimitedReader *p_spill;
  io_LimitedReader *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  y = (p_spill->R).tab;
  if (((q_spill->R).tab == y) &&
     (runtime_ifaceeq((runtime_itab *)p_spill,(q_spill->R).data,y), local_10 != '\0')) {
    return q_spill->N == p_spill->N;
  }
  return false;
}


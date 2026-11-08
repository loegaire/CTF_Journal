
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void io.(*LimitedReader).Read(io.LimitedReader * l, []uint8 p, int n,
   error err) */

multireturn_int_error_ io___LimitedReader__Read(io_LimitedReader *l,__uint8 p)

{
  long in_FS_OFFSET;
  multireturn_int_error_ mVar1;
  multireturn_int_error_ mVar2;
  io_LimitedReader *l_spill;
  __uint8 p_spill;
  long local_20;
  void *local_18;
  
  mVar2.err.tab = p.array;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (0 < l_spill->N) {
    (*(code *)((l_spill->R).tab)->fun[0])();
    l_spill->N = l_spill->N - local_20;
    mVar1.err.tab = (runtime_itab *)l_spill;
    mVar1.n = local_20;
    mVar1.err.data = local_18;
    return mVar1;
  }
  mVar2.n = (int)io_EOF.tab;
  mVar2.err.data = io_EOF.data;
  return mVar2;
}


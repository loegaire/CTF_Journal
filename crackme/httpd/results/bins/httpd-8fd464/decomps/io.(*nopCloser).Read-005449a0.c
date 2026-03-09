
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void io.(*nopCloser).Read([]uint8 p, int n, error err) */

multireturn_int_error_ io___nopCloser__Read(__uint8 p)

{
  long *plVar1;
  long in_FS_OFFSET;
  multireturn_int_error_ mVar2;
  __uint8 p_spill;
  undefined8 local_40;
  int local_38;
  int local_30;
  undefined8 local_20;
  void *local_18;
  
  mVar2.err.tab = p.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if ((plVar1 != (long *)0x0) && ((__uint8 *)*plVar1 == &p_spill)) {
    *plVar1 = (long)&local_40;
  }
  local_40 = *(undefined8 *)(p_spill.array + 8);
  local_38 = p_spill.len;
  local_30 = p_spill.cap;
  (**(code **)(*(long *)p_spill.array + 0x18))();
  mVar2.n = local_20;
  mVar2.err.data = local_18;
  return mVar2;
}


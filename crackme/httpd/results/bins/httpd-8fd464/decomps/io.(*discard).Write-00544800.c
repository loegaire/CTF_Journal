
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void io.(*discard).Write([]uint8 p, int ~r1, error ~r2) */

multireturn_int_error__conflict io___discard__Write(__uint8 p)

{
  long *plVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  multireturn_int_error__conflict mVar3;
  __uint8 p_spill;
  
  pvVar2 = (void *)p.cap;
  mVar3.~r2.tab = p.len;
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if (plVar1 != (long *)0x0) goto LAB_00544849;
  while (p_spill.array == (uint8 *)0x0) {
    runtime_panicwrap();
LAB_00544849:
    if ((__uint8 *)*plVar1 == &p_spill) {
      *plVar1 = (long)&stack0xfffffffffffffff8;
    }
  }
  mVar3.~r1 = p_spill.cap;
  mVar3.~r2.data = pvVar2;
  return mVar3;
}


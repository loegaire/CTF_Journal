
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void io.(*discard).WriteString(string s, int ~r1, error ~r2) */

multireturn_int_error__conflict io___discard__WriteString(string s)

{
  long *plVar1;
  void *in_RCX;
  long in_FS_OFFSET;
  multireturn_int_error__conflict mVar2;
  string s_spill;
  undefined8 in_stack_00000018;
  
  mVar2.~r2.tab = s.len;
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if (plVar1 != (long *)0x0) goto LAB_005448a9;
  while (s_spill.str == (uint8 *)0x0) {
    runtime_panicwrap();
LAB_005448a9:
    if ((string *)*plVar1 == &s_spill) {
      *plVar1 = (long)&stack0xfffffffffffffff8;
    }
  }
  mVar2.~r1 = in_stack_00000018;
  mVar2.~r2.data = in_RCX;
  return mVar2;
}


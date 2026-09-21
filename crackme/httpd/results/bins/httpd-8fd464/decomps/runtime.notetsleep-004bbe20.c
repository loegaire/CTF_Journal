
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.notetsleep(runtime.note * n, int64 ns, bool ~r2) */

bool runtime_notetsleep(runtime_note *n,int64 ns)

{
  long *plVar1;
  long in_FS_OFFSET;
  string s;
  runtime_note *n_spill;
  int64 ns_spill;
  undefined1 local_10;
  
                    /* Unresolved local var: runtime.g * gp@[DW_OP_reg0(RAX)] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  if ((*plVar1 != *(long *)(in_FS_OFFSET + -8)) && (plVar1[0x21] != 0)) {
    s.len = ns;
    s.str = &DAT_0029c086;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  runtime_notetsleep_internal((runtime_note *)ns_spill,ns);
  return (bool)local_10;
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.notetsleepg(runtime.note * n, int64 ns, bool ~r2) */

bool runtime_notetsleepg(runtime_note *n,int64 ns)

{
  long in_FS_OFFSET;
  string s;
  runtime_note *n_spill;
  int64 ns_spill;
  undefined1 local_18;
  
                    /* Unresolved local var: runtime.g * gp@[DW_OP_reg0(RAX)]
                       Unresolved local var: bool ok@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (**(long **)(*(long *)(in_FS_OFFSET + -8) + 0x30) != *(long *)(in_FS_OFFSET + -8)) {
    runtime_entersyscallblock();
    runtime_notetsleep_internal((runtime_note *)ns_spill,ns);
    runtime_exitsyscall();
    return (bool)local_18;
  }
  s.len = ns;
  s.str = &DAT_0029a28f;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}


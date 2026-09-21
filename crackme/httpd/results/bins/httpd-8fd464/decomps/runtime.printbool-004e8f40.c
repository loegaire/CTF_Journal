
/* WARNING: Unknown calling convention */

void runtime_printbool(bool v)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  bool v_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (v_spill) {
    s.len = unaff_RBX;
    s.str = &DAT_002887cd;
    runtime_printstring(s);
  }
  else {
    s_00.len = unaff_RBX;
    s_00.str = &DAT_00288d45;
    runtime_printstring(s_00);
  }
  return;
}


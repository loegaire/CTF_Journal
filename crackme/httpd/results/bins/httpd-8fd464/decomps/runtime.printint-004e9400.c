
/* WARNING: Unknown calling convention */

void runtime_printint(int64 v)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  int64 v_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (v_spill < 0) {
    s.len = unaff_RBX;
    s.str = (uint8 *)((long)&go_string__ + 3);
    runtime_printstring(s);
    v_spill = -v_spill;
  }
  runtime_printuint(v_spill);
  return;
}


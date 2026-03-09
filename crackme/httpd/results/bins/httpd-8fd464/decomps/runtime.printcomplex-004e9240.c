
/* WARNING: Unknown calling convention */

void runtime_printcomplex(complex128 c)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_printlock();
  s.len = unaff_RBX;
  s.str = (uint8 *)((long)&go_string__ + 1);
  runtime_printstring(s);
  runtime_printfloat((float64)c._0_8_);
  runtime_printfloat((float64)c._8_8_);
  s_00.len = unaff_RBX;
  s_00.str = &DAT_00287851;
  runtime_printstring(s_00);
  runtime_printunlock();
  return;
}


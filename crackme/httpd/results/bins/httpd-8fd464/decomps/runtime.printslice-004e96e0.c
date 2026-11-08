
/* WARNING: Unknown calling convention */

void runtime_printslice(__uint8 s)

{
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  string s_02;
  __uint8 s_spill;
  
  s_00.len = s.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_printlock();
  s_00.str = (uint8 *)&DAT_00287754;
  runtime_printstring(s_00);
  runtime_printint(s_spill.len);
  s_01.len = s_00.len;
  s_01.str = &net__stmp_87;
  runtime_printstring(s_01);
  runtime_printint(s_spill.cap);
  s_02.len = s_00.len;
  s_02.str = (uint8 *)((long)&DAT_00287754 + 3);
  runtime_printstring(s_02);
  runtime_printunlock();
  runtime_printhex((uint64)s_spill.array);
  return;
}


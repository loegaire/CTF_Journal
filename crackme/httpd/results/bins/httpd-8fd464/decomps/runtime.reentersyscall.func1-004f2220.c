
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_reentersyscall_func1(void)

{
  uint64 *puVar1;
  uint64 v;
  uint64 v_00;
  uint64 v_01;
  long in_RDX;
  long extraout_RDX;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  
                    /* Unresolved local var: runtime.g * _g_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  puVar1 = *(uint64 **)(in_RDX + 8);
  v = puVar1[0xe];
  v_00 = *puVar1;
  v_01 = puVar1[1];
  runtime_printlock();
  s.len = unaff_RBX;
  s.str = &DAT_0029f48b;
  runtime_printstring(s);
  runtime_printhex(v);
  s_00.len = unaff_RBX;
  s_00.str = (uint8 *)((long)&DAT_0028776c + 7);
  runtime_printstring(s_00);
  runtime_printhex(v_00);
  s_01.len = unaff_RBX;
  s_01.str = (uint8 *)&DAT_002f3a2f;
  runtime_printstring(s_01);
  runtime_printhex(v_01);
  s_02.len = unaff_RBX;
  s_02.str = &DAT_0028783b;
  runtime_printstring(s_02);
  runtime_printunlock();
  s_03.len = unaff_RBX;
  s_03.str = &DAT_00293466;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_03);
}


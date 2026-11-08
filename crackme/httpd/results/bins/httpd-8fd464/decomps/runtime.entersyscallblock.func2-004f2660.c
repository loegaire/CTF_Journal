
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_entersyscallblock_func2(void)

{
  uint64 *puVar1;
  uint64 v;
  uint64 v_00;
  uint64 v_01;
  uint64 v_02;
  uint64 v_03;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  
                    /* Unresolved local var: uintptr sp@[???]
                       Unresolved local var: runtime.g * _g_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  puVar1 = *(uint64 **)(in_RDX + 0x10);
  v = *(uint64 *)(in_RDX + 8);
  v_00 = puVar1[7];
  v_01 = puVar1[0xe];
  v_02 = *puVar1;
  v_03 = puVar1[1];
  runtime_printlock();
  s.len = v_01;
  s.str = (uint8 *)0x2a1ecc;
  runtime_printstring(s);
  runtime_printhex(v);
  runtime_printsp();
  runtime_printhex(v_00);
  runtime_printsp();
  runtime_printhex(v_01);
  s_00.len = v_01;
  s_00.str = (uint8 *)((long)&DAT_0028776c + 7);
  runtime_printstring(s_00);
  runtime_printhex(v_02);
  s_01.len = v_01;
  s_01.str = (uint8 *)&DAT_002f3a2f;
  runtime_printstring(s_01);
  runtime_printhex(v_03);
  s_02.len = v_01;
  s_02.str = &DAT_0028783b;
  runtime_printstring(s_02);
  runtime_printunlock();
  s_03.len = v_01;
  s_03.str = &DAT_0029a108;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_03);
}


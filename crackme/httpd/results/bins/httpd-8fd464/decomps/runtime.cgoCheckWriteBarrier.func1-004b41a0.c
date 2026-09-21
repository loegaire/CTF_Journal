
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_cgoCheckWriteBarrier_func1(void)

{
  uint64 v;
  uint64 v_00;
  long in_RDX;
  long extraout_RDX;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  
                    /* Unresolved local var: uintptr src@[???]
                       Unresolved local var: uintptr * dst@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  v = *(uint64 *)(in_RDX + 0x10);
  v_00 = *(uint64 *)(in_RDX + 8);
  runtime_printlock();
  s.len = unaff_RBX;
  s.str = &DAT_0029c252;
  runtime_printstring(s);
  runtime_printhex(v_00);
  s_00.len = unaff_RBX;
  s_00.str = &DAT_0029a4b2;
  runtime_printstring(s_00);
  runtime_printhex(v);
  runtime_printnl();
  runtime_printunlock();
  s_01.len = unaff_RBX;
  s_01.str = &DAT_002a49b1;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_01);
}


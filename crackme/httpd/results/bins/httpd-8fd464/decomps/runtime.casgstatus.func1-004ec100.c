
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_casgstatus_func1(void)

{
  uint uVar1;
  uint uVar2;
  long in_RDX;
  long extraout_RDX;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  uVar1 = *(uint *)(in_RDX + 0xc);
  uVar2 = *(uint *)(in_RDX + 8);
  runtime_printlock();
  s.len = unaff_RBX;
  s.str = (uint8 *)0x2a078c;
  runtime_printstring(s);
  runtime_printhex((ulong)uVar2);
  s_00.len = unaff_RBX;
  s_00.str = &DAT_0028b892;
  runtime_printstring(s_00);
  runtime_printhex((ulong)uVar1);
  runtime_printnl();
  runtime_printunlock();
  s_01.len = unaff_RBX;
  s_01.str = (uint8 *)0x2a1e8e;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_01);
}


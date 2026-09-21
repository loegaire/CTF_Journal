
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_throw_func1(void)

{
  uint8 *puVar1;
  long in_RDX;
  long extraout_RDX;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  
                    /* Unresolved local var: string s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  puVar1 = *(uint8 **)(in_RDX + 0x10);
  runtime_printlock();
  s.len = unaff_RBX;
  s.str = &DAT_00295285;
  runtime_printstring(s);
  s_00.len = unaff_RBX;
  s_00.str = puVar1;
  runtime_printstring(s_00);
  runtime_printnl();
  runtime_printunlock();
  return;
}


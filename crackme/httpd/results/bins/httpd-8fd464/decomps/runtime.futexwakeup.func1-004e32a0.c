
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_futexwakeup_func1(void)

{
  int iVar1;
  void *p;
  long in_RDX;
  long extraout_RDX;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  
                    /* Unresolved local var: uint32 * addr@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  iVar1 = *(int *)(in_RDX + 0x10);
  p = *(void **)(in_RDX + 8);
  runtime_printlock();
  s.len = unaff_RBX;
  s.str = &DAT_0029919f;
  runtime_printstring(s);
  runtime_printpointer(p);
  s_00.len = unaff_RBX;
  s_00.str = &DAT_00288908;
  runtime_printstring(s_00);
  runtime_printint((long)iVar1);
  runtime_printnl();
  runtime_printunlock();
  return;
}


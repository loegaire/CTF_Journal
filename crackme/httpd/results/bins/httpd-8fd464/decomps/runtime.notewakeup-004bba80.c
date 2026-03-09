
/* WARNING: Unknown calling convention */

void runtime_notewakeup(runtime_note *n)

{
  uint uVar1;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  runtime_note *n_spill;
  
                    /* Unresolved local var: uint32 old@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  LOCK();
  uVar1 = (uint)n_spill->key;
  *(undefined4 *)&n_spill->key = 1;
  UNLOCK();
  if (uVar1 == 0) {
    runtime_futexwakeup((uint32 *)0x0,(uint32)unaff_RBX);
    return;
  }
  runtime_printlock();
  s.len = unaff_RBX;
  s.str = (uint8 *)0x2a06e4;
  runtime_printstring(s);
  runtime_printuint((ulong)uVar1);
  s_00.len = unaff_RBX;
  s_00.str = &DAT_00287783;
  runtime_printstring(s_00);
  runtime_printunlock();
  s_01.len = unaff_RBX;
  s_01.str = &DAT_0029f5f7;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_01);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_traceGCSweepStart(void)

{
  long lVar1;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  
                    /* Unresolved local var: runtime.p * _p_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
  if (*(char *)(lVar1 + 0x1638) == '\0') {
    *(undefined1 *)(lVar1 + 0x1638) = 1;
    *(undefined8 *)(lVar1 + 0x1640) = 0;
    *(undefined8 *)(lVar1 + 0x1648) = 0;
    return;
  }
  s.len = unaff_RBX;
  s.str = &DAT_0029e607;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}


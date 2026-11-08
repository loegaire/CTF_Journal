
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_minitSignalMask(void)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 local_18;
  undefined8 uStack_10;
  
                    /* Unresolved local var: runtime.sigset nmask@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar2 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  uStack_10 = *(undefined8 *)(lVar2 + 0x88);
  local_18 = *(undefined8 *)(lVar2 + 0x80);
  uVar3 = 0;
                    /* Unresolved local var: int i@[???] */
  while( true ) {
    if (0x20 < (long)uVar3) {
      runtime_sigprocmask();
      return;
    }
                    /* Unresolved local var: int32 flags@[???] */
    if (0x20 < (uVar3 & 0xffffffff)) break;
    if ((((uint)runtime_sigtable[uVar3 & 0xffffffff].flags >> 7 & 1) != 0) ||
       (((runtime_isarchive == false && (runtime_islibrary == false)) &&
        ((runtime_sigtable[uVar3 & 0xffffffff].flags & 6U) != 0)))) {
      uVar4 = (long)(((ulong)((long)(uVar3 - 1) >> 0x3f) >> 0x3b) + uVar3 + -1) >> 5;
      if (3 < uVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      puVar1 = (uint *)((long)&local_18 + uVar4 * 4);
      *puVar1 = *puVar1 & ~(1 << ((char)uVar3 - 1U & 0x1f));
    }
    uVar3 = uVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}


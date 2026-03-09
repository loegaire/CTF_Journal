
/* WARNING: Unknown calling convention */

void runtime___profBuf__wakeupExtra(runtime_profBuf *b)

{
  ulong uVar1;
  long in_FS_OFFSET;
  bool bVar2;
  runtime_profBuf *b_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  do {
                    /* Unresolved local var: runtime.profIndex old@[???]
                       Unresolved local var: runtime.profIndex new@[???] */
    uVar1 = b_spill->w;
    LOCK();
    bVar2 = uVar1 == b_spill->w;
    if (bVar2) {
      b_spill->w = uVar1 | 0x200000000;
    }
    UNLOCK();
  } while (!bVar2);
  if ((uVar1 >> 0x20 & 1) != 0) {
    runtime_notewakeup(&b_spill->wait);
  }
  return;
}


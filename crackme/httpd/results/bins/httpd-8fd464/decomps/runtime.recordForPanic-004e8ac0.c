
/* WARNING: Unknown calling convention */

void runtime_recordForPanic(__uint8 b)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  __uint8 b_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_printlock();
  if (runtime_panicking == 0) {
    for (uVar1 = 0; (long)uVar1 < b_spill.len; uVar1 = lVar4 + uVar1) {
      if (0x200 < (ulong)runtime_printBacklogIndex) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      lVar3 = runtime_printBacklogIndex + -0x200;
      if ((ulong)b_spill.len < uVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      lVar2 = b_spill.len - uVar1;
      lVar4 = -lVar3;
      if (-lVar2 != lVar3 && lVar2 <= -lVar3) {
        lVar4 = lVar2;
      }
      if (b_spill.array + ((long)(uVar1 - b_spill.cap) >> 0x3f & uVar1) !=
          runtime_printBacklog + (lVar3 >> 0x3f & runtime_printBacklogIndex)) {
        runtime_memmove();
      }
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int n@[???] */
      lVar3 = runtime_printBacklogIndex + lVar4;
      runtime_printBacklogIndex =
           lVar3 + ((long)(((ulong)(lVar3 >> 0x3f) >> 0x37) + lVar3) >> 9) * -0x200;
    }
  }
  runtime_printunlock();
  return;
}


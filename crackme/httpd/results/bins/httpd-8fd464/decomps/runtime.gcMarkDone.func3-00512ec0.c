
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcMarkDone_func3(void)

{
  uint64 *puVar1;
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_10;
  
                    /* Unresolved local var: int64 now@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    in_RAX = extraout_RAX;
  }
  runtime_startTheWorldWithSema(SUB81(in_RAX,0));
  runtime_work.pauseNS = runtime_work.pauseNS + (local_10 - runtime_work.pauseStart);
  uVar2 = local_10 - runtime_work.pauseStart;
                    /* Unresolved local var: uint superBucket@[???]
                       Unresolved local var: uint subBucket@[???] */
  if ((long)uVar2 < 0) {
    LOCK();
    runtime_memstats.gcPauseDist.underflow = runtime_memstats.gcPauseDist.underflow + 1;
    UNLOCK();
  }
  else {
    if ((long)uVar2 < 0x10) {
      lVar4 = 0;
    }
    else {
      lVar3 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      if (uVar2 == 0) {
        lVar3 = -1;
      }
      lVar4 = lVar3 + -3;
      if ((ulong)(lVar4 * 0x10) < 0x2d0) {
        lVar3 = (long)uVar2 >> (((byte)(lVar3 - 4U) | ~-(lVar3 - 4U < 0x40)) & 0x3f);
        uVar2 = lVar3 + ((long)(((ulong)(lVar3 >> 0x3f) >> 0x3c) + lVar3) >> 4) * -0x10;
      }
      else {
        lVar4 = 0x2c;
        uVar2 = 0xf;
      }
    }
    uVar2 = lVar4 * 0x10 + uVar2;
    if (0x2cf < uVar2) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    puVar1 = runtime_memstats.gcPauseDist.counts + uVar2;
    LOCK();
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return;
}


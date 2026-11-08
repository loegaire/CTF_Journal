
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcStart_func2(void)

{
  uint64 *puVar1;
  long *plVar2;
  ulong uVar3;
  long in_RDX;
  long lVar4;
  long extraout_RDX;
  long lVar5;
  long in_FS_OFFSET;
  long local_18;
  
                    /* Unresolved local var: int64 * &now@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  plVar2 = *(long **)(in_RDX + 8);
  runtime_startTheWorldWithSema(SUB81(plVar2,0));
  *plVar2 = local_18;
  runtime_work.pauseNS = runtime_work.pauseNS + (local_18 - runtime_work.pauseStart);
  runtime_work.tMark = *plVar2;
  uVar3 = *plVar2 - runtime_work.pauseStart;
                    /* Unresolved local var: uint superBucket@[???]
                       Unresolved local var: uint subBucket@[???] */
  if ((long)uVar3 < 0) {
    LOCK();
    runtime_memstats.gcPauseDist.underflow = runtime_memstats.gcPauseDist.underflow + 1;
    UNLOCK();
  }
  else {
    if ((long)uVar3 < 0x10) {
      lVar5 = 0;
    }
    else {
      lVar4 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      if (uVar3 == 0) {
        lVar4 = -1;
      }
      lVar5 = lVar4 + -3;
      if ((ulong)(lVar5 * 0x10) < 0x2d0) {
        lVar4 = (long)uVar3 >> (((byte)(lVar4 - 4U) | ~-(lVar4 - 4U < 0x40)) & 0x3f);
        uVar3 = lVar4 + ((long)(((ulong)(lVar4 >> 0x3f) >> 0x3c) + lVar4) >> 4) * -0x10;
      }
      else {
        lVar5 = 0x2c;
        uVar3 = 0xf;
      }
    }
    uVar3 = lVar5 * 0x10 + uVar3;
    if (0x2cf < uVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    puVar1 = runtime_memstats.gcPauseDist.counts + uVar3;
    LOCK();
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return;
}


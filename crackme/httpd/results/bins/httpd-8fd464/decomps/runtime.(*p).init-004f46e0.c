
/* WARNING: Unknown calling convention */

void runtime___p__init(runtime_p *pp,int32 id)

{
  ulong uVar1;
  runtime_p *prVar2;
  long lVar3;
  undefined4 unaff_0000001c;
  long lVar4;
  uint uVar5;
  int iVar6;
  long in_FS_OFFSET;
  string s;
  runtime_p *pp_spill;
  int32 id_spill;
  
  lVar4 = CONCAT44(unaff_0000001c,id);
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  pp_spill->id = id_spill;
  pp_spill->status = 3;
  (pp_spill->sudogcache).len = 0;
  (pp_spill->sudogcache).cap = 0x80;
  prVar2 = pp_spill;
  if (runtime_writeBarrier._0_4_ == 0) {
    (pp_spill->sudogcache).array = pp_spill->sudogbuf;
  }
  else {
    runtime_gcWriteBarrierDX();
  }
                    /* Unresolved local var: int i@[???] */
  for (lVar3 = 0; lVar3 < 5; lVar3 = lVar3 + 1) {
    lVar4 = lVar3 * 3;
    prVar2->deferpool[lVar3].len = 0;
    prVar2->deferpool[lVar3].cap = 0x20;
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar2->deferpool[lVar3].array = prVar2->deferpoolbuf[lVar3];
    }
    else {
      runtime_gcWriteBarrierDX();
    }
  }
  runtime___wbBuf__reset(&prVar2->wbBuf);
  if (pp_spill->mcache == (runtime_mcache *)0x0) {
    if (id_spill == 0) {
      if (runtime_mcache0 == (runtime_mcache *)0x0) {
        s.len = lVar4;
        s.str = &DAT_00298dc1;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s);
      }
      pp_spill->mcache = runtime_mcache0;
    }
    else {
      runtime_allocmcache();
      pp_spill->mcache = (runtime_mcache *)&prVar2->wbBuf;
    }
  }
  iVar6 = (int)(id_spill + ((uint)(id_spill >> 0x1f) >> 0x1b)) >> 5;
  uVar5 = id_spill + iVar6 * -0x20;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicshift();
  }
  uVar5 = 1 << ((byte)uVar5 & 0x1f) & -(uint)(uVar5 < 0x20);
  uVar1 = (ulong)iVar6;
  if ((ulong)runtime_timerpMask.len <= uVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  LOCK();
  runtime_timerpMask.array[uVar1] = runtime_timerpMask.array[uVar1] | uVar5;
  UNLOCK();
  if ((ulong)runtime_idlepMask.len <= uVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  LOCK();
  runtime_idlepMask.array[uVar1] = runtime_idlepMask.array[uVar1] & ~uVar5;
  UNLOCK();
  return;
}


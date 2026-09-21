
/* WARNING: Unknown calling convention */

void runtime_semrelease1(uint32 *addr,bool handoff,int skipframes)

{
  uint32 *puVar1;
  struct___runtime_root_runtime_semaRoot__runtime_pad__40_uint8__ *l;
  uint uVar2;
  uint32 uVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint32 *skip;
  long in_FS_OFFSET;
  bool bVar8;
  multireturn_runtime_sudog___int64_ mVar9;
  string s;
  uint32 *addr_spill;
  bool handoff_spill;
  int skipframes_spill;
  runtime_sudog *local_40;
  
                    /* Unresolved local var: runtime.semaRoot * root@[???]
                       Unresolved local var: runtime.sudog * s@[???]
                       Unresolved local var: int64 t0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  LOCK();
  uVar2 = *addr_spill;
  *addr_spill = *addr_spill + 1;
  UNLOCK();
  uVar5 = (ulong)addr_spill >> 3;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar5;
  uVar7 = SUB168(ZEXT816(0x5197f7d73404147) * auVar4,8);
  lVar6 = uVar5 + ((uVar7 + uVar5 >> 1 | (ulong)CARRY8(uVar7,uVar5) << 0x3f) >> 7) * -0xfb;
  puVar1 = &runtime_semtable[lVar6].root.nwait;
  if (*puVar1 == 0) {
    return;
  }
  l = runtime_semtable + lVar6;
  runtime_lock2((runtime_mutex *)l);
  if (*puVar1 == 0) {
    runtime_unlock2((runtime_mutex *)l);
    return;
  }
  mVar9 = runtime___semaRoot__dequeue((runtime_semaRoot *)addr_spill,(uint32 *)(ulong)uVar2);
  skip = (uint32 *)mVar9.now;
  if (local_40 != (runtime_sudog *)0x0) {
    LOCK();
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    skip = puVar1;
  }
  runtime_unlock2((runtime_mutex *)l);
  if (local_40 != (runtime_sudog *)0x0) {
                    /* Unresolved local var: int64 acquiretime@[???] */
    if (local_40->acquiretime != 0) {
      sync_event(skipframes_spill,(int)skip);
    }
    if (local_40->ticket != 0) {
      s.len = (int)skip;
      s.str = &DAT_0029f3ef;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    if (handoff_spill) {
      do {
        uVar3 = *addr_spill;
        if (uVar3 == 0) break;
        LOCK();
        bVar8 = uVar3 == *addr_spill;
        if (bVar8) {
          *addr_spill = uVar3 - 1;
        }
        UNLOCK();
        skip = (uint32 *)(ulong)CONCAT31((int3)(uVar3 - 1 >> 8),bVar8);
      } while (!bVar8);
      if (uVar3 != 0) {
        local_40->ticket = 1;
      }
    }
    runtime_readyWithTime(local_40,(int)skip);
    if ((local_40->ticket == 1) &&
       (*(int *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0x110) == 0)) {
      runtime_mcall();
    }
  }
  return;
}


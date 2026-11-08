
/* WARNING: Unknown calling convention */

void runtime_semacquire1(uint32 *addr,bool lifo,runtime_semaProfileFlags profile,int skipframes)

{
  uint32 *puVar1;
  uint32 uVar2;
  uint32 uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  runtime_sudog *prVar9;
  undefined7 unaff_00000019;
  uint32 *puVar10;
  struct___runtime_root_runtime_semaRoot__runtime_pad__40_uint8__ *psVar11;
  long in_FS_OFFSET;
  bool bVar12;
  string s;
  uint32 *addr_spill;
  bool lifo_spill;
  runtime_semaProfileFlags profile_spill;
  int skipframes_spill;
  runtime_sudog *local_58;
  
  s.len._1_7_ = unaff_00000019;
  s.len._0_1_ = lifo;
                    /* Unresolved local var: runtime.g * gp@[DW_OP_reg2(RCX)]
                       Unresolved local var: runtime.sudog * s@[???]
                       Unresolved local var: runtime.semaRoot * root@[???]
                       Unresolved local var: int64 t0@[???]
                       Unresolved local var: runtime.semaRoot * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (*(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 200) !=
      *(long *)(in_FS_OFFSET + -8)) {
    s.str = (uint8 *)0x2a101a;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  while (uVar3 = *addr_spill, uVar3 != 0) {
    LOCK();
    uVar2 = *addr_spill;
    if (uVar3 == uVar2) {
      *addr_spill = uVar3 - 1;
    }
    UNLOCK();
    if (uVar3 == uVar2) {
      return;
    }
  }
  runtime_acquireSudog();
  local_58->releasetime = 0;
  local_58->acquiretime = 0;
  local_58->ticket = 0;
  uVar6 = (ulong)addr_spill >> 3;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar6;
  uVar8 = SUB168(ZEXT816(0x5197f7d73404147) * auVar5,8);
  lVar7 = uVar6 + ((uVar8 + uVar6 >> 1 | (ulong)CARRY8(uVar8,uVar6) << 0x3f) >> 7) * -0xfb;
  if (((profile_spill & 1U) == 0) || (runtime_blockprofilerate == 0)) {
    prVar9 = (runtime_sudog *)0x0;
  }
  else {
    runtime_cputicks();
    local_58->releasetime = -1;
    prVar9 = local_58;
                    /* Unresolved local var: uint32 v@[???] */
  }
  if ((((uint)profile_spill >> 1 & 1) != 0) && (runtime_mutexprofilerate != 0)) {
    if (prVar9 == (runtime_sudog *)0x0) {
      runtime_cputicks();
      prVar9 = local_58;
    }
    local_58->acquiretime = (int64)prVar9;
  }
  psVar11 = runtime_semtable + lVar7;
  do {
    runtime_lock2((runtime_mutex *)runtime_semtable);
    puVar1 = &runtime_semtable[lVar7].root.nwait;
    LOCK();
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    do {
      uVar4 = *addr_spill;
      uVar6 = (ulong)uVar4;
      if (uVar4 == 0) break;
      LOCK();
      bVar12 = uVar4 == *addr_spill;
      if (bVar12) {
        *addr_spill = uVar4 - 1;
      }
      UNLOCK();
      psVar11 = (struct___runtime_root_runtime_semaRoot__runtime_pad__40_uint8__ *)(ulong)bVar12;
    } while (!bVar12);
    puVar10 = addr_spill;
    if (uVar4 != 0) {
      LOCK();
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      runtime_unlock2((runtime_mutex *)(runtime_semtable + lVar7));
      break;
    }
    runtime___semaRoot__queue(&runtime_semtable[lVar7].root,addr_spill,local_58,SUB81(psVar11,0));
    runtime_gopark((func__runtime_g__unsafe_Pointer__bool **)&PTR_runtime_parkunlock_c_002b39a0,
                   addr_spill,(runtime_waitReason)skipframes_spill,(uint8)psVar11,uVar6);
    if (local_58->ticket == 0) {
      do {
        uVar3 = *addr_spill;
        if (uVar3 == 0) break;
        LOCK();
        bVar12 = uVar3 == *addr_spill;
        if (bVar12) {
          *addr_spill = uVar3 - 1;
        }
        UNLOCK();
        puVar10 = (uint32 *)(ulong)CONCAT31((int3)(uVar3 - 1 >> 8),bVar12);
      } while (!bVar12);
      bVar12 = uVar3 != 0;
    }
    else {
      bVar12 = true;
    }
  } while (!bVar12);
  if (0 < local_58->releasetime) {
    runtime_blockevent(skipframes_spill + 3,(int)puVar10);
  }
  runtime_releaseSudog(local_58);
  return;
}


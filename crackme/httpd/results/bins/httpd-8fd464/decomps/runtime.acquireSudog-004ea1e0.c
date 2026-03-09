
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.acquireSudog(runtime.sudog * ~r0) */

runtime_sudog * runtime_acquireSudog(void)

{
  runtime_sudog **pprVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  ulong extraout_RAX;
  ulong uVar5;
  long lVar6;
  long extraout_RAX_00;
  long extraout_RAX_01;
  long extraout_RAX_02;
  long extraout_RAX_03;
  long extraout_RAX_04;
  long lVar7;
  long lVar8;
  long lVar9;
  long extraout_RDX;
  runtime_sudog *extraout_RDX_00;
  runtime_sudog *prVar10;
  long lVar11;
  long in_RDI;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  string s;
  runtime_slice old;
  runtime_slice old_00;
  long local_60;
  long local_40;
  long local_38;
  undefined8 local_30;
  
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.p * pp@[???]
                       Unresolved local var: runtime.sudog * s@[???]
                       Unresolved local var: runtime.m * ~R0@[???] */
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar11 = *(long *)(in_FS_OFFSET + -8);
  piVar2 = (int *)(*(long *)(lVar11 + 0x30) + 0x110);
  *piVar2 = *piVar2 + 1;
  lVar11 = *(long *)(lVar11 + 0x30);
  lVar12 = *(long *)(lVar11 + 0xd8);
  if (*(long *)(lVar12 + 0xe18) == 0) {
    runtime_lock2(&runtime_sched.sudoglock);
    lVar9 = lVar12 + 0xe10;
    lVar6 = lVar12;
    lVar7 = lVar9;
    while ((prVar10 = runtime_sched.sudogcache,
           *(long *)(lVar6 + 0xe18) < (long)(*(ulong *)(lVar6 + 0xe20) >> 1) &&
           (runtime_sched.sudogcache != (runtime_sudog *)0x0))) {
      if (runtime_writeBarrier._0_4_ == 0) {
        pprVar1 = &(runtime_sched.sudogcache)->next;
        runtime_sched.sudogcache = (runtime_sched.sudogcache)->next;
        *pprVar1 = (runtime_sudog *)0x0;
      }
      else {
        runtime_gcWriteBarrierBX();
        in_RDI = extraout_RDX + 8;
        runtime_gcWriteBarrierBX();
        lVar6 = extraout_RAX_00;
        prVar10 = extraout_RDX_00;
      }
      lVar8 = *(long *)(lVar6 + 0xe18);
      lVar13 = *(long *)(lVar6 + 0xe10);
      if (*(ulong *)(lVar6 + 0xe20) < lVar8 + 1U) {
        old.len = lVar7;
        old.array = (void *)lVar8;
        old.cap = in_RDI;
        runtime_growslice((runtime__type *)&DAT_0021e920,old,lVar8 + 1U);
        *(undefined8 *)(lVar12 + 0xe20) = local_30;
        lVar8 = local_38;
        local_60 = lVar13;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(long *)(lVar12 + 0xe10) = local_40;
          lVar6 = lVar12;
          lVar7 = lVar9;
          lVar13 = local_40;
        }
        else {
          lVar7 = lVar9;
          runtime_gcWriteBarrier();
          lVar6 = lVar12;
          lVar13 = extraout_RAX_01;
        }
      }
      *(long *)(lVar6 + 0xe18) = lVar8 + 1;
      in_RDI = lVar13 + lVar8 * 8;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(runtime_sudog **)(lVar13 + lVar8 * 8) = prVar10;
      }
      else {
        runtime_gcWriteBarrierDX();
        lVar6 = extraout_RAX_02;
      }
    }
    runtime_unlock2(&runtime_sched.sudoglock);
    if (*(long *)(lVar12 + 0xe18) == 0) {
      runtime_newobject((runtime__type *)&DAT_0027a480);
      lVar9 = *(long *)(lVar12 + 0xe18);
      lVar6 = *(long *)(lVar12 + 0xe10);
      if (*(ulong *)(lVar12 + 0xe20) < lVar9 + 1U) {
        old_00.len = lVar9;
        old_00.array = (void *)*(ulong *)(lVar12 + 0xe20);
        old_00.cap = local_60;
        runtime_growslice((runtime__type *)&DAT_0021e920,old_00,lVar9 + 1U);
        *(undefined8 *)(lVar12 + 0xe20) = local_30;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(long *)(lVar12 + 0xe10) = local_40;
          lVar9 = local_38;
          lVar6 = local_40;
        }
        else {
          runtime_gcWriteBarrier();
          lVar9 = local_38;
          lVar6 = extraout_RAX_03;
        }
      }
      *(long *)(lVar12 + 0xe18) = lVar9 + 1;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(long *)(lVar6 + lVar9 * 8) = local_60;
      }
      else {
        runtime_gcWriteBarrierCX();
        lVar12 = extraout_RAX_04;
      }
    }
  }
  uVar4 = *(ulong *)(lVar12 + 0xe18);
  lVar9 = *(long *)(lVar12 + 0xe10);
  uVar5 = uVar4 - 1;
  if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  lVar6 = *(long *)(lVar9 + -8 + uVar4 * 8);
  if (runtime_writeBarrier._0_4_ == 0) {
    *(undefined8 *)(lVar9 + -8 + uVar4 * 8) = 0;
  }
  else {
    lVar9 = 0;
    runtime_gcWriteBarrierBX();
    uVar5 = extraout_RAX;
  }
  if (*(ulong *)(lVar12 + 0xe20) < uVar5) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAcap();
  }
  *(ulong *)(lVar12 + 0xe18) = uVar5;
  if (*(long *)(lVar6 + 0x18) != 0) {
    s.len = lVar9;
    s.str = &DAT_002a722d;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
                    /* Unresolved local var: runtime.g * _g_@[???] */
  prVar10 = *(runtime_sudog **)(in_FS_OFFSET + -8);
  iVar3 = *(int *)(lVar11 + 0x110);
  *(int *)(lVar11 + 0x110) = iVar3 + -1;
  if ((iVar3 == 1) && (*(char *)((long)&prVar10[2].g + 1) != '\0')) {
    prVar10->prev = (runtime_sudog *)0xfffffffffffffade;
  }
  return prVar10;
}


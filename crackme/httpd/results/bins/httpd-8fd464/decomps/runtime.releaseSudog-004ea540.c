
/* WARNING: Unknown calling convention */

void runtime_releaseSudog(runtime_sudog *s)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  runtime_sudog *prVar7;
  long extraout_RAX;
  runtime__type *prVar8;
  runtime_sudog *prVar9;
  runtime_sudog *extraout_RAX_00;
  runtime_sudog *prVar10;
  runtime_sudog *prVar11;
  runtime_sudog *prVar12;
  long lVar13;
  runtime_sudog **in_RDI;
  long lVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  runtime_slice old;
  runtime_sudog *s_spill;
  long local_40;
  runtime__type *local_38;
  undefined8 local_30;
  
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.p * pp@[???]
                       Unresolved local var: runtime.m * ~R0@[???] */
  if (s_spill->elem != (void *)0x0) {
    s_06.len = (int)s_spill;
    s_06.str = (uint8 *)0x2a29b0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_06);
  }
  if (s_spill->isSelect != false) {
    s_05.len = (int)s_spill;
    s_05.str = &DAT_002a5ad5;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_05);
  }
  if (s_spill->next != (runtime_sudog *)0x0) {
    s_04.len = (int)s_spill;
    s_04.str = (uint8 *)0x2a29d0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_04);
  }
  if (s_spill->prev != (runtime_sudog *)0x0) {
    s_03.len = (int)s_spill;
    s_03.str = (uint8 *)0x2a29f0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_03);
  }
  if (s_spill->waitlink != (runtime_sudog *)0x0) {
    s_02.len = (int)s_spill;
    s_02.str = &DAT_002a4e31;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_02);
  }
  if (s_spill->c != (runtime_hchan *)0x0) {
    s_01.len = (int)s_spill;
    s_01.str = (uint8 *)0x2a0fc3;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_01);
  }
  lVar14 = *(long *)(in_FS_OFFSET + -8);
  if (*(long *)(lVar14 + 0x88) != 0) {
    s_00.len = (int)s_spill;
    s_00.str = &DAT_002a7854;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  piVar2 = (int *)(*(long *)(lVar14 + 0x30) + 0x110);
  *piVar2 = *piVar2 + 1;
  lVar14 = *(long *)(lVar14 + 0x30);
  lVar4 = *(long *)(lVar14 + 0xd8);
  if (*(long *)(lVar4 + 0xe18) == *(long *)(lVar4 + 0xe20)) {
    prVar9 = (runtime_sudog *)0x0;
    prVar11 = (runtime_sudog *)0x0;
    lVar13 = lVar4;
    while( true ) {
      lVar5 = *(long *)(lVar13 + 0xe10);
      uVar6 = *(ulong *)(lVar13 + 0xe18);
      if ((long)uVar6 <= (long)(*(ulong *)(lVar13 + 0xe20) >> 1)) break;
                    /* Unresolved local var: runtime.sudog * p@[???] */
      uVar15 = uVar6 - 1;
      if (uVar6 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      prVar7 = *(runtime_sudog **)(lVar5 + -8 + uVar6 * 8);
      in_RDI = (runtime_sudog **)(lVar5 + uVar6 * 8 + -8);
      if (runtime_writeBarrier._0_4_ == 0) {
        *(undefined8 *)(lVar5 + -8 + uVar6 * 8) = 0;
        prVar10 = prVar9;
        prVar12 = prVar11;
      }
      else {
        runtime_gcWriteBarrierSI();
        prVar10 = extraout_RAX_00;
        prVar12 = prVar11;
      }
      if (*(ulong *)(lVar13 + 0xe20) < uVar15) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      *(ulong *)(lVar13 + 0xe18) = uVar15;
      prVar9 = prVar7;
      prVar11 = prVar7;
      if (prVar12 != (runtime_sudog *)0x0) {
        if (runtime_writeBarrier._0_4_ == 0) {
          prVar10->next = prVar7;
          prVar11 = prVar12;
        }
        else {
          in_RDI = &prVar10->next;
          runtime_gcWriteBarrierSI();
          prVar11 = prVar12;
        }
      }
    }
    runtime_lock2(&runtime_sched.sudoglock);
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar9->next = runtime_sched.sudogcache;
      runtime_sched.sudogcache = prVar11;
    }
    else {
      runtime_gcWriteBarrierCX();
      in_RDI = &runtime_sched.sudogcache;
      runtime_gcWriteBarrier();
    }
    runtime_unlock2(&runtime_sched.sudoglock);
  }
  prVar8 = *(runtime__type **)(lVar4 + 0xe18);
  puVar1 = (undefined1 *)((long)&prVar8->size + 1);
  lVar13 = *(long *)(lVar4 + 0xe10);
  if (*(undefined1 **)(lVar4 + 0xe20) < puVar1) {
    old.len = (int)puVar1;
    old.array = &DAT_0021e920;
    old.cap = (int)in_RDI;
    runtime_growslice(prVar8,old,(int)*(undefined1 **)(lVar4 + 0xe20));
    *(undefined8 *)(lVar4 + 0xe20) = local_30;
    prVar8 = local_38;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(long *)(lVar4 + 0xe10) = local_40;
      lVar13 = local_40;
    }
    else {
      runtime_gcWriteBarrier();
      lVar13 = extraout_RAX;
    }
  }
  *(undefined1 **)(lVar4 + 0xe18) = (undefined1 *)((long)&prVar8->size + 1);
  if (runtime_writeBarrier._0_4_ == 0) {
    *(runtime_sudog **)(lVar13 + (long)prVar8 * 8) = s_spill;
  }
  else {
    runtime_gcWriteBarrierBX();
  }
  lVar4 = *(long *)(in_FS_OFFSET + -8);
  iVar3 = *(int *)(lVar14 + 0x110);
  *(int *)(lVar14 + 0x110) = iVar3 + -1;
  if ((iVar3 == 1) && (*(char *)(lVar4 + 0xb1) != '\0')) {
    *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffade;
  }
  return;
}


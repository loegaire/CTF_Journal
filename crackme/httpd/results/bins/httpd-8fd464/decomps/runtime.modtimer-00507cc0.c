
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.modtimer(runtime.timer * t, int64 when, int64 period,
   func(interface_{},_uintptr) * * f, interface_{} arg, uintptr seq, bool ~r6) */

bool runtime_modtimer(runtime_timer *t,int64 when,int64 period,func_interface_____uintptr_ **f,
                     interface___ arg,uintptr seq)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  runtime_puintptr rVar6;
  runtime_mutex *l;
  char extraout_AL;
  char extraout_AL_00;
  char cVar7;
  int64 iVar8;
  uint32 uVar9;
  uint32 uVar10;
  undefined1 uVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  string s;
  string s_00;
  runtime_timer *t_spill;
  int64 when_spill;
  int64 period_spill;
  func_interface_____uintptr_ **f_spill;
  interface___ arg_spill;
  uintptr seq_spill;
  
                    /* Unresolved local var: uint32 status@[???]
                       Unresolved local var: bool wasRemoved@[???]
                       Unresolved local var: bool pending@[???]
                       Unresolved local var: runtime.m * mp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (when_spill < 1) {
    s_00.len = when;
    s_00.str = (uint8 *)0x2a0005;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  if (period_spill < 0) {
    s.len = when;
    s.str = (uint8 *)0x2a3490;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
LAB_00507d02:
  while( true ) {
    while (uVar3 = t_spill->status, 3 < uVar3) {
      if (uVar3 < 6) {
        if (uVar3 != 4) goto LAB_00507dbc;
        goto code_r0x00507ec0;
      }
      if (uVar3 == 6) {
        runtime_osyield();
      }
      else {
        if (uVar3 < 9) goto LAB_00507e45;
        if (uVar3 == 9) goto code_r0x00507ec0;
        runtime_badTimer();
      }
    }
    if (1 < uVar3) break;
    if (uVar3 == 0) {
LAB_00507dbc:
                    /* Unresolved local var: runtime.g * _g_@[???] */
      lVar12 = *(long *)(in_FS_OFFSET + -8);
      piVar1 = (int *)(*(long *)(lVar12 + 0x30) + 0x110);
      *piVar1 = *piVar1 + 1;
      lVar12 = *(long *)(lVar12 + 0x30);
      LOCK();
      bVar13 = uVar3 == t_spill->status;
      if (bVar13) {
        t_spill->status = 6;
      }
      UNLOCK();
      if (bVar13) {
        cVar7 = '\x01';
        uVar11 = 0;
        goto LAB_00507f49;
      }
                    /* Unresolved local var: runtime.g * _g_@[???] */
      lVar5 = *(long *)(in_FS_OFFSET + -8);
      iVar4 = *(int *)(lVar12 + 0x110);
      *(int *)(lVar12 + 0x110) = iVar4 + -1;
      if ((iVar4 == 1) && (*(char *)(lVar5 + 0xb1) != '\0')) {
        *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffade;
      }
    }
    else {
LAB_00507e45:
                    /* Unresolved local var: runtime.g * _g_@[???] */
      lVar12 = *(long *)(in_FS_OFFSET + -8);
      piVar1 = (int *)(*(long *)(lVar12 + 0x30) + 0x110);
      *piVar1 = *piVar1 + 1;
      lVar12 = *(long *)(lVar12 + 0x30);
      LOCK();
      bVar13 = uVar3 == t_spill->status;
      if (bVar13) {
        t_spill->status = 6;
      }
      UNLOCK();
      if (bVar13) {
        cVar7 = '\0';
        uVar11 = 1;
        goto LAB_00507f49;
      }
                    /* Unresolved local var: runtime.g * _g_@[???] */
      lVar5 = *(long *)(in_FS_OFFSET + -8);
      iVar4 = *(int *)(lVar12 + 0x110);
      *(int *)(lVar12 + 0x110) = iVar4 + -1;
      if ((iVar4 == 1) && (*(char *)(lVar5 + 0xb1) != '\0')) {
        *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffade;
      }
    }
  }
  if (uVar3 == 2) {
code_r0x00507ec0:
    runtime_osyield();
                    /* Unresolved local var: uint32 newStatus@[???]
                       Unresolved local var: runtime.p * tpp@[???] */
    goto LAB_00507d02;
  }
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar12 = *(long *)(in_FS_OFFSET + -8);
  piVar1 = (int *)(*(long *)(lVar12 + 0x30) + 0x110);
  *piVar1 = *piVar1 + 1;
  lVar12 = *(long *)(lVar12 + 0x30);
  LOCK();
  bVar13 = uVar3 == t_spill->status;
  if (bVar13) {
    t_spill->status = 6;
  }
  UNLOCK();
  if (!bVar13) {
                    /* Unresolved local var: runtime.g * _g_@[???] */
    lVar5 = *(long *)(in_FS_OFFSET + -8);
    iVar4 = *(int *)(lVar12 + 0x110);
    *(int *)(lVar12 + 0x110) = iVar4 + -1;
    if ((iVar4 == 1) && (*(char *)(lVar5 + 0xb1) != '\0')) {
      *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffade;
    }
    goto LAB_00507d02;
  }
  LOCK();
  piVar1 = (int *)(t_spill->pp + 0x26fc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  cVar7 = '\0';
  uVar11 = 0;
LAB_00507f49:
  uVar10 = 6;
  t_spill->period = period_spill;
  iVar8 = when_spill;
  if (runtime_writeBarrier._0_4_ == 0) {
    t_spill->f = f_spill;
  }
  else {
    uVar10 = 6;
    runtime_gcWriteBarrierR9();
    cVar7 = extraout_AL;
  }
  (t_spill->arg)._type = arg_spill._type;
  if (runtime_writeBarrier._0_4_ == 0) {
    (t_spill->arg).data = arg_spill.data;
  }
  else {
    runtime_gcWriteBarrierR9();
    cVar7 = extraout_AL_00;
  }
  t_spill->seq = seq_spill;
  if (cVar7 == '\0') {
    t_spill->nextwhen = iVar8;
    uVar9 = 8;
    if (iVar8 < t_spill->when) {
      uVar9 = 7;
    }
    rVar6 = t_spill->pp;
    if (uVar9 == 7) {
      do {
        lVar5 = *(long *)(rVar6 + 0x1670);
        if ((lVar5 != 0) && (lVar5 < iVar8)) break;
        plVar2 = (long *)(rVar6 + 0x1670);
        LOCK();
        bVar13 = lVar5 == *plVar2;
        if (bVar13) {
          *plVar2 = iVar8;
        }
        UNLOCK();
      } while (!bVar13);
    }
    LOCK();
    bVar13 = uVar10 == t_spill->status;
    if (bVar13) {
      t_spill->status = uVar9;
    }
    UNLOCK();
    if (!bVar13) {
      runtime_badTimer();
                    /* Unresolved local var: runtime.g * _g_@[???] */
    }
    lVar5 = *(long *)(in_FS_OFFSET + -8);
    iVar4 = *(int *)(lVar12 + 0x110);
    *(int *)(lVar12 + 0x110) = iVar4 + -1;
    if ((iVar4 == 1) && (*(char *)(lVar5 + 0xb1) != '\0')) {
      *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffade;
    }
    if (uVar9 == 7) {
      runtime_wakeNetPoller(lVar5);
    }
  }
  else {
                    /* Unresolved local var: runtime.p * pp@[???] */
    t_spill->when = iVar8;
    l = *(runtime_mutex **)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
    runtime_lock2(l);
    runtime_doaddtimer((runtime_p *)t_spill,t_spill);
    runtime_unlock2(l + 0x4db);
    LOCK();
    bVar13 = t_spill->status == 6;
    if (bVar13) {
      t_spill->status = 1;
    }
    UNLOCK();
    if (!bVar13) {
      runtime_badTimer();
    }
                    /* Unresolved local var: runtime.g * _g_@[???] */
    lVar5 = *(long *)(in_FS_OFFSET + -8);
    iVar4 = *(int *)(lVar12 + 0x110);
    *(int *)(lVar12 + 0x110) = iVar4 + -1;
    if ((iVar4 == 1) && (*(char *)(lVar5 + 0xb1) != '\0')) {
      *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffade;
    }
    runtime_wakeNetPoller(when_spill);
  }
  return (bool)uVar11;
}


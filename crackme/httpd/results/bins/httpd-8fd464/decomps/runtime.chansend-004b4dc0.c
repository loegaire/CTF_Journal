
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.chansend(runtime.hchan * c, void * ep, bool block, uintptr
   callerpc, bool ~r4) */

bool runtime_chansend(runtime_hchan *c,void *ep,bool block,uintptr callerpc)

{
  uint32 *puVar1;
  runtime_waitReason reason;
  ushort uVar2;
  runtime_sudog *prVar3;
  long *plVar4;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  undefined1 extraout_AL_01;
  runtime_mutex *l;
  runtime_sudog *extraout_RAX;
  long extraout_RAX_00;
  runtime_sudog *extraout_RAX_01;
  undefined8 *extraout_RAX_02;
  undefined8 *extraout_RAX_03;
  undefined8 *extraout_RAX_04;
  undefined8 *extraout_RAX_05;
  undefined8 *puVar5;
  runtime_sudog *extraout_RAX_06;
  runtime_sudog *extraout_RAX_07;
  runtime_sudog *extraout_RAX_08;
  runtime_sudog *prVar6;
  runtime_mutex *prVar7;
  runtime_sudog *prVar8;
  long lVar9;
  undefined1 extraout_DL;
  undefined1 uVar10;
  undefined8 uVar11;
  void *pvVar12;
  undefined1 *puVar13;
  undefined1 *unaff_RBP;
  int in_RSI;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long in_FS_OFFSET;
  bool bVar17;
  string s;
  string s_00;
  interface___ e;
  string s_01;
  interface___ e_00;
  runtime_hchan *c_spill;
  void *ep_spill;
  bool block_spill;
  uintptr callerpc_spill;
  
  prVar7 = (runtime_mutex *)(ulong)block;
  do {
                    /* Unresolved local var: int64 t0@[???]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: runtime.sudog * mysg@[???] */
    puVar13 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar13 = (undefined1 *)((long)register0x00000020 + -0x80);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      l = *(runtime_mutex **)((long)register0x00000020 + 8);
      if (l == (runtime_mutex *)0x0) {
        if (*(byte *)((long)register0x00000020 + 0x18) != 0) {
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
          *(undefined2 *)((long)register0x00000020 + -0x70) = 0x1004;
          *(undefined8 *)((long)register0x00000020 + -0x68) = 2;
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b4ec5;
          runtime_gopark((func__runtime_g__unsafe_Pointer__bool **)
                         (ulong)*(byte *)((long)register0x00000020 + 0x18),ep,
                         (runtime_waitReason)prVar7,(uint8)callerpc,in_RSI);
          *(undefined **)((long)register0x00000020 + -0x80) = &DAT_0029256d;
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0xb;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b4ede;
          s.len = (int)ep;
          s.str = &DAT_0029256d;
          runtime_throw(s);
        }
        *(undefined1 *)((long)register0x00000020 + 0x28) = 0;
        return false;
      }
      if ((*(char *)((long)register0x00000020 + 0x18) == '\0') &&
         (*(int *)((long)&l[3].key + 4) == 0)) {
        if (l[1].key == 0) {
          bVar17 = l[7].key == 0;
        }
        else {
          bVar17 = l->key == l[1].key;
        }
        if (bVar17) {
          *(undefined1 *)((long)register0x00000020 + 0x28) = 0;
          return SUB81(l,0);
        }
      }
      if (runtime_blockprofilerate == 0) {
        uVar11 = 0;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b4e4b;
        runtime_cputicks();
        uVar11 = *(undefined8 *)((long)register0x00000020 + -0x80);
        l = *(runtime_mutex **)((long)register0x00000020 + 8);
      }
      *(undefined8 *)((long)register0x00000020 + -0x50) = uVar11;
      prVar7 = l + 0xb;
      *(runtime_mutex **)((long)register0x00000020 + -0x40) = prVar7;
      *(runtime_mutex **)((long)register0x00000020 + -0x80) = prVar7;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b4e72;
      runtime_lock2(l);
      prVar6 = *(runtime_sudog **)((long)register0x00000020 + 8);
      if (*(int *)((long)&prVar6->elem + 4) == 0) break;
      *(runtime_mutex **)((long)register0x00000020 + -0x80) =
           *(runtime_mutex **)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b5425;
      runtime_unlock2(*(runtime_mutex **)((long)register0x00000020 + -0x40));
      *(undefined **)((long)register0x00000020 + -0x80) = &DAT_00237ca0;
      *(undefined ***)((long)register0x00000020 + -0x78) = &runtime__stmp_70;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b5445;
      e_00.data = ep;
      e_00._type = (runtime__type *)&runtime__stmp_70;
      runtime_gopanic(e_00);
    }
    *(undefined8 *)(puVar13 + -8) = 0x4b544b;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar13;
  } while( true );
  while( true ) {
    callerpc = (uintptr)&prVar6->parent;
    prVar3 = prVar8->next;
    if (prVar3 == (runtime_sudog *)0x0) {
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar6->parent = (runtime_sudog *)0x0;
        prVar6->waitlink = (runtime_sudog *)0x0;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b4f5a;
        runtime_gcWriteBarrierDX();
        callerpc = extraout_RAX_00 + 0x40;
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b4f65;
        runtime_gcWriteBarrierDX();
        prVar6 = extraout_RAX_01;
      }
    }
    else if (runtime_writeBarrier._0_4_ == 0) {
      prVar3->prev = (runtime_sudog *)0x0;
      prVar6->parent = prVar3;
      prVar8->next = (runtime_sudog *)0x0;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b4f2c;
      runtime_gcWriteBarrierR8();
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b4f34;
      runtime_gcWriteBarrierDX();
      callerpc = (uintptr)&prVar8->next;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b4f3d;
      runtime_gcWriteBarrierR8();
      prVar6 = extraout_RAX;
    }
    if (prVar8->isSelect == false) {
      bVar17 = false;
    }
    else {
      puVar1 = &prVar8->g->selectDone;
      LOCK();
      bVar17 = *puVar1 == 0;
      if (bVar17) {
        *puVar1 = 1;
      }
      UNLOCK();
      bVar17 = !bVar17;
    }
    in_RSI = 1;
    if (!bVar17) break;
    prVar8 = prVar6->parent;
    if (prVar8 == (runtime_sudog *)0x0) {
      prVar8 = (runtime_sudog *)0x0;
      break;
    }
  }
                    /* Unresolved local var: runtime.sudog * sg@[???] */
  if (prVar8 != (runtime_sudog *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0;
    *(code **)((long)register0x00000020 + -0x18) = runtime_chansend_func1;
    *(runtime_sudog **)((long)register0x00000020 + -0x10) = prVar6;
    *(runtime_sudog **)((long)register0x00000020 + -0x80) = prVar6;
    *(runtime_sudog **)((long)register0x00000020 + -0x78) = prVar8;
    *(undefined8 *)((long)register0x00000020 + -0x70) =
         *(undefined8 *)((long)register0x00000020 + 0x10);
    *(runtime_hchan **)((long)register0x00000020 + -0x68) =
         (runtime_hchan *)((long)register0x00000020 + -0x18);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 3;
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b53a5;
    runtime_send((runtime_hchan *)((long)register0x00000020 + -0x18),prVar6,prVar8,
                 (func__ **)callerpc,in_RSI);
    *(undefined1 *)((long)register0x00000020 + 0x28) = 1;
    return (bool)extraout_AL_01;
  }
  if (prVar6->g < (runtime_g *)prVar6->next) {
                    /* Unresolved local var: void * qp@[???] */
    lVar9 = prVar6->releasetime;
    pvVar12 = (void *)prVar6->acquiretime;
    uVar2 = *(ushort *)&prVar6->elem;
    prVar8 = prVar6->prev;
    *(void **)((long)register0x00000020 + -0x80) = pvVar12;
    *(runtime_g ***)((long)register0x00000020 + -0x78) =
         (runtime_g **)((long)&prVar8->g + lVar9 * (ulong)uVar2);
    *(runtime__type **)((long)register0x00000020 + -0x70) =
         *(runtime__type **)((long)register0x00000020 + 0x10);
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b530c;
    runtime_typedmemmove(*(runtime__type **)((long)register0x00000020 + 0x10),prVar6,pvVar12);
    plVar4 = *(long **)((long)register0x00000020 + 8);
    lVar9 = plVar4[5];
    plVar4[5] = lVar9 + 1;
    if (plVar4[1] == lVar9 + 1) {
      plVar4[5] = 0;
    }
    *plVar4 = *plVar4 + 1;
    *(runtime_mutex **)((long)register0x00000020 + -0x80) =
         *(runtime_mutex **)((long)register0x00000020 + -0x40);
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b5345;
    runtime_unlock2(*(runtime_mutex **)((long)register0x00000020 + -0x40));
    *(undefined1 *)((long)register0x00000020 + 0x28) = 1;
    return (bool)extraout_AL_00;
  }
  if (*(char *)((long)register0x00000020 + 0x18) == '\0') {
    *(runtime_mutex **)((long)register0x00000020 + -0x80) =
         *(runtime_mutex **)((long)register0x00000020 + -0x40);
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b4fd4;
    runtime_unlock2(*(runtime_mutex **)((long)register0x00000020 + -0x40));
    *(undefined1 *)((long)register0x00000020 + 0x28) = 0;
    return (bool)extraout_AL;
  }
  *(undefined8 *)((long)register0x00000020 + -0x38) = *(undefined8 *)(in_FS_OFFSET + -8);
  *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b4ff9;
  runtime_acquireSudog();
  puVar5 = *(undefined8 **)((long)register0x00000020 + -0x80);
  puVar5[5] = 0;
  if (*(long *)((long)register0x00000020 + -0x50) != 0) {
    puVar5[5] = 0xffffffffffffffff;
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    puVar5[3] = *(undefined8 *)((long)register0x00000020 + 0x10);
    puVar5[8] = 0;
    pvVar12 = *(void **)((long)register0x00000020 + -0x38);
    *puVar5 = pvVar12;
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b5053;
    runtime_gcWriteBarrierDX();
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b505e;
    runtime_gcWriteBarrierBX();
    pvVar12 = *(void **)((long)register0x00000020 + -0x38);
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b506b;
    runtime_gcWriteBarrierSI();
    puVar5 = extraout_RAX_02;
  }
  *(undefined1 *)((long)puVar5 + 0x34) = 0;
  puVar14 = puVar5 + 10;
  if (runtime_writeBarrier._0_4_ == 0) {
    lVar9 = *(long *)((long)register0x00000020 + 8);
    puVar5[10] = lVar9;
  }
  else {
    lVar9 = *(long *)((long)register0x00000020 + 8);
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b509a;
    runtime_gcWriteBarrierSI();
    puVar5 = extraout_RAX_03;
  }
  lVar15 = (long)pvVar12 + 0x148;
  lVar16 = (long)pvVar12 + 0x88;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(undefined8 **)((long)pvVar12 + 0x148) = puVar5;
    *(undefined8 *)((long)pvVar12 + 0x88) = 0;
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b50d2;
    runtime_gcWriteBarrier();
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b50df;
    runtime_gcWriteBarrierCX();
    puVar5 = extraout_RAX_04;
  }
                    /* Unresolved local var: runtime.sudog * x@[???] */
  if (runtime_writeBarrier._0_4_ == 0) {
    puVar5[1] = 0;
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b510d;
    runtime_gcWriteBarrierCX();
    puVar5 = extraout_RAX_05;
  }
  *(undefined8 **)((long)register0x00000020 + -0x48) = puVar5;
  *(undefined8 **)((long)register0x00000020 + -0x20) = puVar14;
  *(long *)((long)register0x00000020 + -0x28) = lVar15;
  *(long *)((long)register0x00000020 + -0x30) = lVar16;
  lVar15 = *(long *)(lVar9 + 0x50);
  if (lVar15 == 0) {
    if (runtime_writeBarrier._0_4_ == 0) {
      puVar5[2] = 0;
      *(undefined8 **)(lVar9 + 0x48) = puVar5;
      *(undefined8 **)(lVar9 + 0x50) = puVar5;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b51ad;
      runtime_gcWriteBarrierCX();
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b51b6;
      runtime_gcWriteBarrier();
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b51be;
      runtime_gcWriteBarrier();
    }
  }
  else if (runtime_writeBarrier._0_4_ == 0) {
    puVar5[2] = lVar15;
    *(undefined8 **)(lVar15 + 8) = puVar5;
    *(undefined8 **)(lVar9 + 0x50) = puVar5;
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b5165;
    runtime_gcWriteBarrierSI();
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b516e;
    runtime_gcWriteBarrier();
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b5176;
    runtime_gcWriteBarrier();
  }
  LOCK();
  reason = *(runtime_waitReason *)((long)pvVar12 + 0xb9);
  *(runtime_waitReason *)((long)pvVar12 + 0xb9) = 1;
  UNLOCK();
  *(undefined ***)((long)register0x00000020 + -0x80) = &PTR_runtime_chanparkcommit_002b37b0;
  *(func__runtime_g__unsafe_Pointer__bool ***)((long)register0x00000020 + -0x78) =
       *(func__runtime_g__unsafe_Pointer__bool ***)((long)register0x00000020 + -0x40);
  *(undefined2 *)((long)register0x00000020 + -0x70) = 0x160f;
  *(undefined8 *)((long)register0x00000020 + -0x68) = 2;
  *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b51fc;
  runtime_gopark(*(func__runtime_g__unsafe_Pointer__bool ***)((long)register0x00000020 + -0x40),
                 pvVar12,reason,(uint8)puVar14,lVar9);
  prVar6 = *(runtime_sudog **)((long)register0x00000020 + -0x48);
  lVar9 = *(long *)((long)register0x00000020 + -0x38);
  if (*(runtime_sudog **)(lVar9 + 0x148) == prVar6) {
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)(lVar9 + 0x148) = 0;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b5235;
      runtime_gcWriteBarrierDX();
      prVar6 = extraout_RAX_06;
    }
    *(undefined1 *)(lVar9 + 0xb8) = 0;
    uVar10 = prVar6->success;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)(lVar9 + 0x88) = 0;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b5265;
      runtime_gcWriteBarrierCX();
      prVar6 = extraout_RAX_07;
      uVar10 = extraout_DL;
    }
    *(undefined1 *)((long)register0x00000020 + -0x51) = uVar10;
    if (0 < prVar6->releasetime) {
      *(int64 *)((long)register0x00000020 + -0x80) =
           prVar6->releasetime - *(long *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 2;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b528c;
      runtime_blockevent(*(long *)((long)register0x00000020 + -0x50),(int)pvVar12);
      prVar6 = *(runtime_sudog **)((long)register0x00000020 + -0x48);
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar6->c = (runtime_hchan *)0x0;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b52b5;
      runtime_gcWriteBarrierCX();
      prVar6 = extraout_RAX_08;
    }
    *(runtime_sudog **)((long)register0x00000020 + -0x80) = prVar6;
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b52be;
    runtime_releaseSudog(prVar6);
    if (*(char *)((long)register0x00000020 + -0x51) != '\0') {
      *(undefined1 *)((long)register0x00000020 + 0x28) = 1;
      return (bool)*(char *)((long)register0x00000020 + -0x51);
    }
    if (*(int *)(*(long *)((long)register0x00000020 + 8) + 0x1c) == 0) {
      *(undefined **)((long)register0x00000020 + -0x80) = &DAT_0029ec13;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x19;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b53de;
      s_00.len = (int)pvVar12;
      s_00.str = &DAT_0029ec13;
      runtime_throw(s_00);
    }
    *(undefined **)((long)register0x00000020 + -0x80) = &DAT_00237ca0;
    *(undefined ***)((long)register0x00000020 + -0x78) = &runtime__stmp_70;
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b53fa;
    e.data = pvVar12;
    e._type = (runtime__type *)&runtime__stmp_70;
    runtime_gopanic(e);
  }
  *(undefined **)((long)register0x00000020 + -0x80) = &DAT_0029f97b;
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0x1b;
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)register0x00000020 + -0x88) = 0x4b5413;
  s_01.len = (int)pvVar12;
  s_01.str = &DAT_0029f97b;
  runtime_throw(s_01);
}


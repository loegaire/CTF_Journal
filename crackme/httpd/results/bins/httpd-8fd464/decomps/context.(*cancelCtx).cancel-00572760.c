
/* WARNING: Unknown calling convention */

void context___cancelCtx__cancel(context_cancelCtx *c,bool removeFromParent,error err)

{
  int *piVar1;
  uint32 *puVar2;
  int iVar3;
  uint32 uVar4;
  code *pcVar5;
  long *plVar6;
  runtime__type *prVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  sync_Mutex *m;
  runtime_hchan *extraout_RAX;
  runtime_hchan *c_00;
  runtime_maptype *t;
  runtime_itab *extraout_RAX_00;
  runtime_itab *prVar10;
  undefined8 uVar11;
  long extraout_RDX;
  long lVar12;
  undefined7 unaff_00000019;
  runtime_hmap *h;
  undefined1 *puVar13;
  undefined1 *unaff_RBP;
  long lVar14;
  long in_FS_OFFSET;
  bool bVar15;
  context_Context parent;
  interface___ e;
  context_canceler child;
  context_cancelCtx *c_spill;
  bool removeFromParent_spill;
  error err_spill;
  
  e.data._1_7_ = unaff_00000019;
  e.data._0_1_ = removeFromParent;
  do {
                    /* Unresolved local var: chan_struct_{} d@[???] */
    puVar13 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0x20)) {
      puVar13 = (undefined1 *)((long)register0x00000020 + -0xa0);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      if (*(long *)((long)register0x00000020 + 0x18) != 0) {
        m = (sync_Mutex *)0x0;
        lVar12 = *(long *)((long)register0x00000020 + 8);
        LOCK();
        uVar9 = *(uint *)(lVar12 + 0x10);
        bVar15 = uVar9 == 0;
        if (bVar15) {
          *(uint *)(lVar12 + 0x10) = 1;
        }
        else {
          m = (sync_Mutex *)(ulong)uVar9;
        }
        UNLOCK();
        lVar14 = lVar12 + 0x10;
        *(long *)((long)register0x00000020 + -0x80) = lVar14;
        if (!bVar15) {
          *(long *)((long)register0x00000020 + -0xa0) = lVar14;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x5727d6;
          sync___Mutex__lockSlow(m);
                    /* Unresolved local var: context.canceler child@[???] */
          lVar12 = *(long *)((long)register0x00000020 + 8);
                    /* Unresolved local var: int32 new@[???] */
          lVar14 = *(long *)((long)register0x00000020 + -0x80);
        }
        if (*(long *)(lVar12 + 0x30) == 0) {
          *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)((long)register0x00000020 + 0x18);
          if (runtime_writeBarrier._0_4_ == 0) {
            c_00 = *(runtime_hchan **)((long)register0x00000020 + 0x20);
            *(runtime_hchan **)(lVar12 + 0x38) = c_00;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x57282a;
            runtime_gcWriteBarrier();
            c_00 = extraout_RAX;
            lVar12 = extraout_RDX;
          }
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
                    /* Unresolved local var: sync/atomic.ifaceWords * vp@[???]
                       Unresolved local var: void * typ@[???]
                       Unresolved local var: void * data@[???] */
          lVar14 = *(long *)(lVar12 + 0x18);
          if ((lVar14 == 0) || (lVar14 == -1)) {
            *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
            *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
          }
          else {
            uVar11 = *(undefined8 *)(lVar12 + 0x20);
            *(long *)((long)register0x00000020 + -0x78) = lVar14;
            *(undefined8 *)((long)register0x00000020 + -0x70) = uVar11;
          }
          h = *(runtime_hmap **)((long)register0x00000020 + -0x70);
          if (*(undefined **)((long)register0x00000020 + -0x78) != &DAT_00222ea0) {
            h = (runtime_hmap *)0x0;
          }
          if (h == (runtime_hmap *)0x0) {
            *(sync_atomic_Value **)((long)register0x00000020 + -0xa0) =
                 (sync_atomic_Value *)(lVar12 + 0x18);
            *(undefined **)((long)register0x00000020 + -0x98) = &DAT_00222ea0;
            *(chan_struct___ *)((long)register0x00000020 + -0x90) = context_closedchan;
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x5728a5;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = context_closedchan;
            sync_atomic___Value__Store
                      ((sync_atomic_Value *)(lVar12 + 0x18),(interface___)(auVar8 << 0x40));
          }
          else {
            *(runtime_hmap **)((long)register0x00000020 + -0xa0) = h;
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x572885;
            runtime_closechan(c_00);
          }
          uVar11 = *(undefined8 *)(*(long *)((long)register0x00000020 + 8) + 0x28);
          puVar13 = (undefined1 *)((long)register0x00000020 + -0x88);
          *(undefined1 **)((long)register0x00000020 + -0xb0) = unaff_RBP;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x5728cf;
          t = (runtime_maptype *)FUN_0051a18b();
          *(undefined **)((long)register0x00000020 + -0xa0) = &DAT_002352a0;
          *(undefined8 *)((long)register0x00000020 + -0x98) = uVar11;
          *(runtime_hiter **)((long)register0x00000020 + -0x90) =
               (runtime_hiter *)((long)register0x00000020 + -0x68);
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x5728f2;
          runtime_mapiterinit(t,h,(runtime_hiter *)((long)register0x00000020 + -0x68));
          while (plVar6 = *(long **)((long)register0x00000020 + -0x68), plVar6 != (long *)0x0) {
            pcVar5 = *(code **)(*plVar6 + 0x20);
            *(long *)((long)register0x00000020 + -0xa0) = plVar6[1];
            *(undefined1 *)((long)register0x00000020 + -0x98) = 0;
            *(undefined8 *)((long)register0x00000020 + -0x90) =
                 *(undefined8 *)((long)register0x00000020 + 0x18);
            *(undefined8 *)((long)register0x00000020 + -0x88) =
                 *(undefined8 *)((long)register0x00000020 + 0x20);
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x572952;
            (*pcVar5)();
            *(runtime_hiter **)((long)register0x00000020 + -0xa0) =
                 (runtime_hiter *)((long)register0x00000020 + -0x68);
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x572965;
            runtime_mapiternext((runtime_hiter *)((long)register0x00000020 + -0x68));
          }
          if (runtime_writeBarrier._0_4_ == 0) {
            prVar10 = *(runtime_itab **)((long)register0x00000020 + 8);
            prVar10[1]._type = (runtime__type *)0x0;
          }
          else {
            puVar13 = (undefined1 *)(*(long *)((long)register0x00000020 + 8) + 0x28);
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x57299d;
            runtime_gcWriteBarrierCX();
            prVar10 = extraout_RAX_00;
          }
                    /* Unresolved local var: int32 new@[???] */
          LOCK();
          puVar2 = &prVar10->hash;
          uVar4 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if (uVar4 - 1 != 0) {
            *(sync_Mutex **)((long)register0x00000020 + -0xa0) =
                 *(sync_Mutex **)((long)register0x00000020 + -0x80);
            *(uint32 *)((long)register0x00000020 + -0x98) = uVar4 - 1;
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x5729c5;
            sync___Mutex__unlockSlow(*(sync_Mutex **)((long)register0x00000020 + -0x80),(int32)h);
            prVar10 = *(runtime_itab **)((long)register0x00000020 + 8);
          }
          if (*(char *)((long)register0x00000020 + 0x10) != '\0') {
            prVar7 = prVar10->_type;
            *(runtime_interfacetype **)((long)register0x00000020 + -0xa0) = prVar10->inter;
            *(runtime__type **)((long)register0x00000020 + -0x98) = prVar7;
            *(undefined1 **)((long)register0x00000020 + -0x90) =
                 go_itab__context_cancelCtx_context_canceler;
            *(runtime_itab **)((long)register0x00000020 + -0x88) = prVar10;
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x5729ff;
            parent.data = h;
            parent.tab = prVar10;
            child.data = puVar13;
            child.tab = (runtime_itab *)go_itab__context_cancelCtx_context_canceler;
            context_removeChild(parent,child);
          }
          return;
        }
        LOCK();
        piVar1 = (int *)(lVar12 + 0x10);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        uVar9 = iVar3 - 1;
        if (uVar9 != 0) {
          *(long *)((long)register0x00000020 + -0xa0) = lVar14;
          *(uint *)((long)register0x00000020 + -0x98) = uVar9;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x572912;
          sync___Mutex__unlockSlow((sync_Mutex *)(ulong)uVar9,(uint)bVar15);
        }
        return;
      }
      *(undefined **)((long)register0x00000020 + -0xa0) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x98) = context__stmp_2;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x572a2b;
      e._type = (runtime__type *)context__stmp_2;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar13 + -8) = 0x572a31;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar13;
  } while( true );
}


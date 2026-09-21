
/* WARNING: Unknown calling convention */

void context___timerCtx__cancel(context_timerCtx *c,bool removeFromParent,error err)

{
  int *piVar1;
  int iVar2;
  runtime_itab *prVar3;
  runtime__type *prVar4;
  long lVar5;
  uint uVar6;
  sync_Mutex *m;
  long extraout_RAX;
  long lVar7;
  undefined7 unaff_00000019;
  void *pvVar8;
  undefined1 *puVar9;
  undefined1 *unaff_RBP;
  void *pvVar10;
  long in_FS_OFFSET;
  context_Context parent;
  interface___ e;
  error err_00;
  context_canceler child;
  context_timerCtx *c_spill;
  bool removeFromParent_spill;
  error err_spill;
  
  pvVar8 = (void *)CONCAT71(unaff_00000019,removeFromParent);
  pvVar10 = err.data;
  do {
    puVar9 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar9 = (undefined1 *)((long)register0x00000020 + -0x30);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      *(context_cancelCtx **)((long)register0x00000020 + -0x30) =
           *(context_cancelCtx **)((long)register0x00000020 + 8);
      *(undefined1 *)((long)register0x00000020 + -0x28) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x20) =
           *(undefined8 *)((long)register0x00000020 + 0x18);
      *(runtime_itab **)((long)register0x00000020 + -0x18) =
           *(runtime_itab **)((long)register0x00000020 + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x5732ca;
      err_00.data = pvVar10;
      err_00.tab = *(runtime_itab **)((long)register0x00000020 + 0x20);
      context___cancelCtx__cancel
                (*(context_cancelCtx **)((long)register0x00000020 + 8),SUB81(pvVar8,0),err_00);
      if (*(char *)((long)register0x00000020 + 0x10) != '\0') {
        prVar3 = *(runtime_itab **)((long)register0x00000020 + 8);
        prVar4 = prVar3->_type;
        *(runtime_interfacetype **)((long)register0x00000020 + -0x30) = prVar3->inter;
        *(runtime__type **)((long)register0x00000020 + -0x28) = prVar4;
        *(undefined1 **)((long)register0x00000020 + -0x20) =
             go_itab__context_timerCtx_context_canceler;
        *(runtime_itab **)((long)register0x00000020 + -0x18) = prVar3;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x5732fe;
        parent.data = pvVar8;
        parent.tab = prVar3;
        child.data = pvVar10;
        child.tab = (runtime_itab *)go_itab__context_timerCtx_context_canceler;
        context_removeChild(parent,child);
      }
      m = (sync_Mutex *)0x0;
      lVar7 = *(long *)((long)register0x00000020 + 8);
      LOCK();
      uVar6 = *(uint *)(lVar7 + 0x10);
      if (uVar6 == 0) {
        *(uint *)(lVar7 + 0x10) = 1;
      }
      else {
        m = (sync_Mutex *)(ulong)uVar6;
      }
      UNLOCK();
      pvVar8 = (void *)(lVar7 + 0x10);
      *(void **)((long)register0x00000020 + -0x10) = pvVar8;
      if (uVar6 != 0) {
        *(void **)((long)register0x00000020 + -0x30) = pvVar8;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x573328;
        sync___Mutex__lockSlow(m);
        lVar7 = *(long *)((long)register0x00000020 + 8);
                    /* Unresolved local var: int32 new@[???] */
        pvVar8 = *(void **)((long)register0x00000020 + -0x10);
      }
      lVar5 = *(long *)(lVar7 + 0x40);
      if (lVar5 == 0) goto code_r0x00573381;
      if (*(long *)(lVar5 + 0x20) != 0) {
        *(runtime_timer **)((long)register0x00000020 + -0x30) = (runtime_timer *)(lVar5 + 8);
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x573350;
        time_stopTimer((runtime_timer *)(lVar5 + 8));
        if (runtime_writeBarrier._0_4_ == 0) {
          lVar7 = *(long *)((long)register0x00000020 + 8);
          *(undefined8 *)(lVar7 + 0x40) = 0;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0x573378;
          runtime_gcWriteBarrierCX();
          lVar7 = extraout_RAX;
        }
        pvVar8 = *(void **)((long)register0x00000020 + -0x10);
code_r0x00573381:
        LOCK();
        piVar1 = (int *)(lVar7 + 0x10);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        uVar6 = iVar2 - 1;
        if (uVar6 != 0) {
          *(void **)((long)register0x00000020 + -0x30) = pvVar8;
          *(uint *)((long)register0x00000020 + -0x28) = uVar6;
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0x57339e;
          sync___Mutex__unlockSlow((sync_Mutex *)(ulong)uVar6,(int32)pvVar8);
        }
        return;
      }
      *(undefined **)((long)register0x00000020 + -0x30) = &DAT_00225520;
      *(undefined ***)((long)register0x00000020 + -0x28) = &net_http__stmp_76;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x5733c5;
      e.data = pvVar8;
      e._type = (runtime__type *)&net_http__stmp_76;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar9 + -8) = 0x5733cb;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar9;
  } while( true );
}


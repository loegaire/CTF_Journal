
/* WARNING: Unknown calling convention */

void runtime_closechan(runtime_hchan *c)

{
  runtime_mutex *l;
  runtime__type *typ;
  runtime_g *gp;
  void *ptr;
  void *extraout_RAX;
  void *extraout_RAX_00;
  long *plVar1;
  long extraout_RDX;
  long lVar2;
  long extraout_RDX_00;
  void *unaff_RBX;
  undefined1 *puVar3;
  undefined1 *unaff_RBP;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  interface___ e;
  interface___ e_00;
  runtime_hchan *c_spill;
  
  do {
                    /* Unresolved local var: runtime.gList glist@[???] */
    puVar3 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar3 = (undefined1 *)((long)register0x00000020 + -0x38);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      l = *(runtime_mutex **)((long)register0x00000020 + 8);
      if (l != (runtime_mutex *)0x0) {
        *(runtime_mutex **)((long)register0x00000020 + -0x10) = l + 0xb;
        *(runtime_mutex **)((long)register0x00000020 + -0x38) = l + 0xb;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b5765;
        runtime_lock2(l);
        ptr = *(void **)((long)register0x00000020 + 8);
        if (*(int *)((long)ptr + 0x1c) == 0) break;
        *(runtime_mutex **)((long)register0x00000020 + -0x38) =
             *(runtime_mutex **)((long)register0x00000020 + -0x10);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b5ad5;
        runtime_unlock2(*(runtime_mutex **)((long)register0x00000020 + -0x10));
        *(undefined **)((long)register0x00000020 + -0x38) = &DAT_00237ca0;
        *(undefined1 **)((long)register0x00000020 + -0x30) = runtime__stmp_73;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b5af1;
        e.data = unaff_RBX;
        e._type = (runtime__type *)runtime__stmp_73;
        runtime_gopanic(e);
      }
      *(undefined **)((long)register0x00000020 + -0x38) = &DAT_00237ca0;
      *(undefined1 **)((long)register0x00000020 + -0x30) = runtime__stmp_72;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b5b0d;
      e_00.data = unaff_RBX;
      e_00._type = (runtime__type *)runtime__stmp_72;
      runtime_gopanic(e_00);
    }
    *(undefined8 *)(puVar3 + -8) = 0x4b5b13;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar3;
  } while( true );
  *(undefined4 *)((long)ptr + 0x1c) = 1;
  *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
LAB_004b5862:
  plVar1 = *(long **)((long)ptr + 0x38);
  if (plVar1 != (long *)0x0) goto code_r0x004b586f;
  plVar1 = (long *)0x0;
  goto LAB_004b57af;
code_r0x004b586f:
  lVar2 = plVar1[1];
  if (lVar2 == 0) {
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)((long)ptr + 0x38) = 0;
      *(undefined8 *)((long)ptr + 0x40) = 0;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b58dd;
      runtime_gcWriteBarrierDX();
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b58e6;
      runtime_gcWriteBarrierDX();
      ptr = extraout_RAX_00;
    }
  }
  else if (runtime_writeBarrier._0_4_ == 0) {
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(long *)((long)ptr + 0x38) = lVar2;
    plVar1[1] = 0;
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b58ad;
    runtime_gcWriteBarrierR8();
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b58b5;
    runtime_gcWriteBarrierDX();
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b58be;
    runtime_gcWriteBarrierR8();
    ptr = extraout_RAX;
  }
  if (*(char *)((long)plVar1 + 0x34) == '\0') {
    bVar5 = false;
  }
  else {
    LOCK();
    bVar5 = *(int *)(*plVar1 + 0x178) == 0;
    if (bVar5) {
      *(int *)(*plVar1 + 0x178) = 1;
    }
    UNLOCK();
    bVar5 = !bVar5;
  }
  if (!bVar5) {
LAB_004b57af:
    uVar4 = 1;
    if (plVar1 != (long *)0x0) {
      *(long **)((long)register0x00000020 + -0x20) = plVar1;
      lVar2 = plVar1[3];
      if (lVar2 != 0) {
        typ = *(runtime__type **)((long)ptr + 0x20);
        *(runtime__type **)((long)register0x00000020 + -0x38) = typ;
        *(long *)((long)register0x00000020 + -0x30) = lVar2;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b57d8;
        runtime_typedmemclr(typ,ptr);
        if (runtime_writeBarrier._0_4_ == 0) {
          plVar1 = *(long **)((long)register0x00000020 + -0x20);
          plVar1[3] = 0;
        }
        else {
          plVar1 = *(long **)((long)register0x00000020 + -0x20);
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b5805;
          runtime_gcWriteBarrierDX();
        }
        ptr = *(void **)((long)register0x00000020 + 8);
      }
      if (plVar1[5] != 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b581b;
        runtime_cputicks();
        plVar1 = *(long **)((long)register0x00000020 + -0x20);
        plVar1[5] = *(long *)((long)register0x00000020 + -0x38);
        ptr = *(void **)((long)register0x00000020 + 8);
      }
      lVar2 = *plVar1;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(long **)(lVar2 + 0x88) = plVar1;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b585a;
        runtime_gcWriteBarrierCX();
        lVar2 = extraout_RDX;
      }
                    /* Unresolved local var: runtime.sudog * sg@[???]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: runtime.sudog * ~R0@[???] */
      *(undefined1 *)((long)plVar1 + 0x35) = 0;
      *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)((long)register0x00000020 + -0x28);
      *(long *)((long)register0x00000020 + -0x28) = lVar2;
                    /* Unresolved local var: runtime.sudog * sgp@[???]
                       Unresolved local var: runtime.sudog * y@[???] */
      goto LAB_004b5862;
    }
    goto LAB_004b59ba;
  }
  goto LAB_004b5862;
LAB_004b59ba:
  plVar1 = *(long **)((long)ptr + 0x48);
  if (plVar1 != (long *)0x0) goto code_r0x004b59c9;
  plVar1 = (long *)0x0;
  goto LAB_004b5940;
code_r0x004b59c9:
  lVar2 = plVar1[1];
  if (lVar2 == 0) {
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)((long)ptr + 0x48) = 0;
      *(undefined8 *)((long)ptr + 0x50) = 0;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b5a35;
      runtime_gcWriteBarrierDX();
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b5a3e;
      runtime_gcWriteBarrierDX();
    }
  }
  else if (runtime_writeBarrier._0_4_ == 0) {
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(long *)((long)ptr + 0x48) = lVar2;
    plVar1[1] = 0;
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b5a07;
    runtime_gcWriteBarrierR9();
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b5a0f;
    runtime_gcWriteBarrierDX();
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b5a18;
    runtime_gcWriteBarrierR9();
  }
  if (*(char *)((long)plVar1 + 0x34) == '\0') {
    bVar5 = false;
  }
  else {
    LOCK();
    bVar5 = *(int *)(*plVar1 + 0x178) == 0;
    if (bVar5) {
      *(int *)(*plVar1 + 0x178) = (int)uVar4;
    }
    UNLOCK();
    bVar5 = !bVar5;
  }
  if (!bVar5) {
LAB_004b5940:
    if (plVar1 == (long *)0x0) {
      *(runtime_mutex **)((long)register0x00000020 + -0x38) =
           *(runtime_mutex **)((long)register0x00000020 + -0x10);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b5a7d;
      runtime_unlock2(*(runtime_mutex **)((long)register0x00000020 + -0x10));
      while (gp = *(runtime_g **)((long)register0x00000020 + -0x28), gp != (runtime_g *)0x0) {
        if (gp != (runtime_g *)0x0) {
          *(runtime_guintptr *)((long)register0x00000020 + -0x28) = gp->schedlink;
        }
                    /* Unresolved local var: runtime.g * gp@[???] */
        gp->schedlink = 0;
        *(runtime_g **)((long)register0x00000020 + -0x38) = gp;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 3;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b5a9c;
        runtime_goready(gp,(int)ptr);
      }
      return;
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      plVar1[3] = 0;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b5967;
      runtime_gcWriteBarrierDX();
    }
    if (plVar1[5] != 0) {
      *(long **)((long)register0x00000020 + -0x18) = plVar1;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b5978;
      runtime_cputicks();
      plVar1 = *(long **)((long)register0x00000020 + -0x18);
      plVar1[5] = *(long *)((long)register0x00000020 + -0x38);
      ptr = *(void **)((long)register0x00000020 + 8);
      uVar4 = 1;
    }
    lVar2 = *plVar1;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(long **)(lVar2 + 0x88) = plVar1;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4b59b5;
      runtime_gcWriteBarrierCX();
      lVar2 = extraout_RDX_00;
    }
                    /* Unresolved local var: runtime.sudog * sg@[???]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: runtime.sudog * ~R0@[???] */
    *(undefined1 *)((long)plVar1 + 0x35) = 0;
    *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)((long)register0x00000020 + -0x28);
    *(long *)((long)register0x00000020 + -0x28) = lVar2;
  }
  goto LAB_004b59ba;
}


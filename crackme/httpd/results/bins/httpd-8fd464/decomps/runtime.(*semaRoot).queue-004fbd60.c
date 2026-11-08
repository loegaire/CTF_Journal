
/* WARNING: Unknown calling convention */

void runtime___semaRoot__queue(runtime_semaRoot *root,uint32 *addr,runtime_sudog *s,bool lifo)

{
  uint uVar1;
  long lVar2;
  runtime_sudog *prVar3;
  void *pvVar4;
  runtime_sudog **pprVar5;
  runtime_sudog *extraout_RAX;
  runtime_sudog *extraout_RAX_00;
  runtime_sudog *extraout_RAX_01;
  runtime_sudog *prVar6;
  uint uVar7;
  runtime_sudog *prVar8;
  runtime_sudog *extraout_RDX;
  undefined1 *puVar9;
  undefined1 *unaff_RBP;
  runtime_sudog *prVar10;
  runtime_sudog *prVar11;
  long in_FS_OFFSET;
  interface___ e;
  runtime_semaRoot *root_spill;
  uint32 *addr_spill;
  runtime_sudog *s_spill;
  bool lifo_spill;
  
code_r0x004fbd60:
                    /* Unresolved local var: runtime.sudog * last@[???]
                       Unresolved local var: runtime.sudog * * pt@[???] */
  puVar9 = (undefined1 *)register0x00000020;
  if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
    puVar9 = (undefined1 *)((long)register0x00000020 + -0x18);
    *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
    unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
    prVar8 = *(runtime_sudog **)((long)register0x00000020 + 0x18);
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar8->g = *(runtime_g **)(in_FS_OFFSET + -8);
      pvVar4 = *(void **)((long)register0x00000020 + 0x10);
      prVar8->elem = pvVar4;
      prVar8->next = (runtime_sudog *)0x0;
      prVar8->prev = (runtime_sudog *)0x0;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fbdbe;
      runtime_gcWriteBarrier();
      pvVar4 = *(void **)((long)register0x00000020 + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fbdd2;
      runtime_gcWriteBarrierSI();
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fbddc;
      runtime_gcWriteBarrier();
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fbde5;
      runtime_gcWriteBarrier();
                    /* Unresolved local var: runtime.sudog * t@[???] */
    }
    prVar6 = *(runtime_sudog **)((long)register0x00000020 + 8);
    pprVar5 = &prVar6->next;
    prVar3 = prVar6->next;
    prVar11 = (runtime_sudog *)0x0;
    while (prVar10 = prVar3, prVar10 != (runtime_sudog *)0x0) {
      if (pvVar4 == prVar10->elem) {
        if (*(char *)((long)register0x00000020 + 0x20) == '\0') {
          if (prVar10->waittail == (runtime_sudog *)0x0) {
            if (runtime_writeBarrier._0_4_ == 0) {
              prVar10->waitlink = prVar8;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fc03d;
              runtime_gcWriteBarrierCX();
            }
          }
          else if (runtime_writeBarrier._0_4_ == 0) {
            prVar10->waittail->waitlink = prVar8;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fc01a;
            runtime_gcWriteBarrierCX();
          }
          if (runtime_writeBarrier._0_4_ == 0) {
            prVar10->waittail = prVar8;
            prVar8->waitlink = (runtime_sudog *)0x0;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fc066;
            runtime_gcWriteBarrierCX();
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fc071;
            runtime_gcWriteBarrier();
          }
        }
        else {
          if (runtime_writeBarrier._0_4_ == 0) {
            *pprVar5 = prVar8;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fbe65;
            runtime_gcWriteBarrier();
            prVar8 = extraout_RAX;
          }
          prVar8->ticket = prVar10->ticket;
          prVar8->acquiretime = prVar10->acquiretime;
          if (runtime_writeBarrier._0_4_ == 0) {
            prVar8->parent = prVar10->parent;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fbe99;
            runtime_gcWriteBarrier();
          }
          prVar6 = prVar10->prev;
          if (runtime_writeBarrier._0_4_ == 0) {
            prVar8->prev = prVar6;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fbeba;
            runtime_gcWriteBarrier();
            prVar6 = extraout_RAX_00;
          }
          if (runtime_writeBarrier._0_4_ == 0) {
            prVar8->next = prVar10->next;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fbedb;
            runtime_gcWriteBarrierDX();
            prVar6 = extraout_RAX_01;
          }
          if (prVar6 != (runtime_sudog *)0x0) {
            if (runtime_writeBarrier._0_4_ == 0) {
              prVar6->parent = prVar8;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fbf05;
              runtime_gcWriteBarrierCX();
            }
          }
          if (prVar8->next != (runtime_sudog *)0x0) {
            if (runtime_writeBarrier._0_4_ == 0) {
              prVar8->next->parent = prVar8;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fbf31;
              runtime_gcWriteBarrierCX();
            }
          }
          if (runtime_writeBarrier._0_4_ == 0) {
            prVar8->waitlink = prVar10;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fbf52;
            runtime_gcWriteBarrierR8();
          }
          prVar6 = prVar10->waittail;
          if (runtime_writeBarrier._0_4_ == 0) {
            prVar8->waittail = prVar6;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fbf77;
            runtime_gcWriteBarrierCX();
            prVar8 = extraout_RDX;
          }
          if (prVar6 == (runtime_sudog *)0x0) {
            if (runtime_writeBarrier._0_4_ == 0) {
              prVar8->waittail = prVar10;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fbf96;
              runtime_gcWriteBarrierR8();
            }
          }
          if (runtime_writeBarrier._0_4_ == 0) {
            prVar10->parent = (runtime_sudog *)0x0;
            prVar10->prev = (runtime_sudog *)0x0;
            prVar10->next = (runtime_sudog *)0x0;
            prVar10->waittail = (runtime_sudog *)0x0;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fbfd0;
            runtime_gcWriteBarrier();
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fbfd9;
            runtime_gcWriteBarrier();
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fbfe5;
            runtime_gcWriteBarrier();
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fbfee;
            runtime_gcWriteBarrier();
          }
        }
        return;
      }
      if (pvVar4 < prVar10->elem) {
        pprVar5 = &prVar10->prev;
      }
      else {
        pprVar5 = &prVar10->next;
      }
      prVar11 = prVar10;
      prVar3 = *pprVar5;
    }
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 s1@[???]
                       Unresolved local var: uint32 s0@[???] */
    lVar2 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
    uVar7 = *(uint *)(lVar2 + 0x128);
    uVar1 = *(uint *)(lVar2 + 300);
    *(uint *)(lVar2 + 0x128) = uVar1;
    uVar7 = uVar7 << 0x11 ^ uVar7;
    uVar7 = uVar1 >> 0x10 ^ uVar7 >> 7 ^ uVar1 ^ uVar7;
    *(uint *)(lVar2 + 300) = uVar7;
    prVar8->ticket = uVar1 + uVar7 | 1;
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar8->parent = prVar11;
      *pprVar5 = prVar8;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fc0e9;
      runtime_gcWriteBarrierR9();
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fc0f1;
      runtime_gcWriteBarrierCX();
    }
    do {
      prVar3 = prVar8->parent;
      if ((prVar3 == (runtime_sudog *)0x0) || (prVar3->ticket <= prVar8->ticket)) {
        return;
      }
      if (prVar3->prev == prVar8) {
        *(runtime_sudog **)((long)register0x00000020 + -0x18) = prVar6;
        *(runtime_sudog **)((long)register0x00000020 + -0x10) = prVar3;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fc13b;
        runtime___semaRoot__rotateRight((runtime_semaRoot *)prVar3,prVar6);
      }
      else {
        if (prVar3->next != prVar8) goto LAB_004fc147;
        *(runtime_sudog **)((long)register0x00000020 + -0x18) = prVar6;
        *(runtime_sudog **)((long)register0x00000020 + -0x10) = prVar3;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fc12b;
        runtime___semaRoot__rotateLeft((runtime_semaRoot *)prVar3,prVar6);
      }
      prVar8 = *(runtime_sudog **)((long)register0x00000020 + 0x18);
      prVar6 = *(runtime_sudog **)((long)register0x00000020 + 8);
    } while( true );
  }
  goto LAB_004fc166;
LAB_004fc147:
  *(undefined **)((long)register0x00000020 + -0x18) = &DAT_00225520;
  *(undefined1 **)((long)register0x00000020 + -0x10) = runtime__stmp_109;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4fc165;
  e.data = prVar6;
  e._type = (runtime__type *)runtime__stmp_109;
  runtime_gopanic(e);
LAB_004fc166:
  *(undefined8 *)(puVar9 + -8) = 0x4fc16b;
  runtime_morestack_noctxt();
  register0x00000020 = (BADSPACEBASE *)puVar9;
  goto code_r0x004fbd60;
}


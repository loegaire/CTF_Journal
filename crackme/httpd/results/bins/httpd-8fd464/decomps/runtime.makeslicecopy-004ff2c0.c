
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.makeslicecopy(runtime._type * et, int tolen, int fromlen,
   void * from, void * ~r4) */

void * runtime_makeslicecopy(runtime__type *et,int tolen,int fromlen,void *from)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  runtime__type *prVar3;
  uintptr dst;
  runtime__type *size;
  ulong uVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  runtime__type *et_spill;
  int tolen_spill;
  int fromlen_spill;
  void *from_spill;
  
  do {
                    /* Unresolved local var: uintptr tomem@[???]
                       Unresolved local var: uintptr copymem@[???]
                       Unresolved local var: void * to@[???] */
    puVar6 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar6 = (undefined1 *)((long)register0x00000020 + -0x40);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      uVar4 = *(ulong *)((long)register0x00000020 + 0x10);
      if (uVar4 <= *(ulong *)((long)register0x00000020 + 0x18)) {
        plVar5 = *(long **)((long)register0x00000020 + 8);
        size = (runtime__type *)(*plVar5 * uVar4);
        prVar3 = size;
        goto LAB_004ff34c;
      }
      tolen = **(ulong **)((long)register0x00000020 + 8);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = tolen;
      prVar3 = SUB168(auVar1 * auVar2,0);
      if (((SUB168(auVar1 * auVar2,8) == 0) && (prVar3 < (runtime__type *)0x1000000000001)) &&
         (-1 < (long)uVar4)) {
        size = (runtime__type *)(*(ulong *)((long)register0x00000020 + 0x18) * tolen);
        plVar5 = *(long **)((long)register0x00000020 + 8);
        tolen = (int)size;
LAB_004ff34c:
        *(runtime__type **)((long)register0x00000020 + -0x18) = size;
        if (plVar5[1] == 0) {
          *(runtime__type **)((long)register0x00000020 + -0x20) = prVar3;
          *(runtime__type **)((long)register0x00000020 + -0x40) = prVar3;
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
          *(undefined1 *)((long)register0x00000020 + -0x30) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4ff374;
          runtime_mallocgc((uintptr)size,(runtime__type *)tolen,SUB81(prVar3,0));
          dst = *(uintptr *)((long)register0x00000020 + -0x28);
          uVar4 = *(ulong *)((long)register0x00000020 + -0x18);
          if (uVar4 < *(ulong *)((long)register0x00000020 + -0x20)) {
            *(uintptr *)((long)register0x00000020 + -0x10) = dst;
            *(uintptr *)((long)register0x00000020 + -0x40) = dst + uVar4;
            *(ulong *)((long)register0x00000020 + -0x38) =
                 *(ulong *)((long)register0x00000020 + -0x20) - uVar4;
            *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4ff3a5;
            runtime_memclrNoHeapPointers();
            dst = *(uintptr *)((long)register0x00000020 + -0x10);
            uVar4 = *(ulong *)((long)register0x00000020 + -0x18);
          }
        }
        else {
          *(runtime__type **)((long)register0x00000020 + -0x40) = prVar3;
          *(long **)((long)register0x00000020 + -0x38) = plVar5;
          *(undefined1 *)((long)register0x00000020 + -0x30) = 1;
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4ff3c5;
          runtime_mallocgc((uintptr)size,(runtime__type *)tolen,SUB81(prVar3,0));
          dst = *(uintptr *)((long)register0x00000020 + -0x28);
          uVar4 = *(uintptr *)((long)register0x00000020 + -0x18);
          if ((uVar4 != 0) && (runtime_writeBarrier.enabled != false)) {
            *(uintptr *)((long)register0x00000020 + -0x10) = dst;
            *(uintptr *)((long)register0x00000020 + -0x40) = dst;
            *(uintptr *)((long)register0x00000020 + -0x38) =
                 *(uintptr *)((long)register0x00000020 + 0x20);
            *(ulong *)((long)register0x00000020 + -0x30) = uVar4;
            *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4ff3fa;
            runtime_bulkBarrierPreWriteSrcOnly
                      (dst,*(uintptr *)((long)register0x00000020 + 0x20),uVar4);
            dst = *(uintptr *)((long)register0x00000020 + -0x10);
            uVar4 = *(ulong *)((long)register0x00000020 + -0x18);
          }
        }
        *(uintptr *)((long)register0x00000020 + -0x10) = dst;
        *(uintptr *)((long)register0x00000020 + -0x40) = dst;
        *(undefined8 *)((long)register0x00000020 + -0x38) =
             *(undefined8 *)((long)register0x00000020 + 0x20);
        *(ulong *)((long)register0x00000020 + -0x30) = uVar4;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4ff425;
        runtime_memmove();
        *(void **)((long)register0x00000020 + 0x28) = *(void **)((long)register0x00000020 + -0x10);
        return *(void **)((long)register0x00000020 + -0x10);
      }
      *(undefined **)((long)register0x00000020 + -0x40) = &DAT_00237b20;
      *(undefined ***)((long)register0x00000020 + -0x38) = &runtime__stmp_110;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4ff456;
      e.data = (void *)tolen;
      e._type = (runtime__type *)&runtime__stmp_110;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar6 + -8) = 0x4ff45c;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar6;
  } while( true );
}


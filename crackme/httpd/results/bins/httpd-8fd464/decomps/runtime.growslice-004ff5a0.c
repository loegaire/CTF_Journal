
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.growslice(runtime._type * et, runtime.slice old, int cap,
   runtime.slice ~r3) */

runtime_slice runtime_growslice(runtime__type *et,runtime_slice old,int cap)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  runtime__type *size;
  ulong uVar4;
  uintptr dst;
  byte bVar5;
  int iVar6;
  runtime__type *prVar7;
  uintptr size_00;
  ulong uVar8;
  runtime__type *prVar9;
  runtime__type *prVar10;
  undefined1 *puVar11;
  undefined1 *unaff_RBP;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  interface___ e;
  interface___ e_00;
  runtime_slice rVar14;
  runtime_slice rVar15;
  runtime__type *et_spill;
  runtime_slice old_spill;
  int newcap;
  
  iVar6 = old.len;
  do {
                    /* Unresolved local var: int doublecap@[???]
                       Unresolved local var: bool overflow@[???]
                       Unresolved local var: uintptr lenmem@[???]
                       Unresolved local var: uintptr capmem@[???]
                       Unresolved local var: void * p@[???] */
    puVar11 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar11 = (undefined1 *)((long)register0x00000020 + -0x58);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      prVar10 = *(runtime__type **)((long)register0x00000020 + 0x20);
      size = *(runtime__type **)((long)register0x00000020 + 0x28);
      if ((long)prVar10 <= (long)size) break;
      *(undefined **)((long)register0x00000020 + -0x58) = &DAT_00237b20;
      *(undefined ***)((long)register0x00000020 + -0x50) = &runtime__stmp_126;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffc74;
      e_00.data = size;
      e_00._type = (runtime__type *)&runtime__stmp_126;
      runtime_gopanic(e_00);
    }
    *(undefined8 *)(puVar11 + -8) = 0x4ffc7a;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar11;
  } while( true );
  puVar1 = *(ulong **)((long)register0x00000020 + 8);
  uVar8 = *puVar1;
  if (uVar8 == 0) {
    *(uintptr **)((long)register0x00000020 + 0x30) = &runtime_zerobase;
    *(undefined8 *)((long)register0x00000020 + 0x38) =
         *(undefined8 *)((long)register0x00000020 + 0x18);
    *(runtime__type **)((long)register0x00000020 + 0x40) = size;
    rVar14.len = (int)size;
    rVar14.array = (void *)*(undefined8 *)((long)register0x00000020 + 0x18);
    rVar14.cap = iVar6;
    return rVar14;
  }
  prVar9 = size;
  if (((long)size <= (long)prVar10 * 2) &&
     (prVar9 = (runtime__type *)((long)prVar10 * 2), 0x3ff < (long)prVar10)) {
    for (; 0 < (long)prVar10;
        prVar10 = (runtime__type *)((long)&prVar10->size + ((long)prVar10 >> 2))) {
      if ((long)size <= (long)prVar10) {
        prVar9 = prVar10;
        if (0 < (long)prVar10) goto LAB_004ff640;
        break;
      }
    }
    prVar9 = size;
  }
LAB_004ff640:
  if (uVar8 == 1) {
    if (prVar9 < (runtime__type *)0x8000) {
      if (prVar9 < (runtime__type *)0x3f9) {
        uVar8 = (ulong)((long)&prVar9->size + 7U) >> 3;
        if (0x80 < uVar8) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffc1f;
          runtime_panicIndexU();
        }
        if (0x43 < (ulong)runtime_size_to_class8[uVar8]) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffc12;
          runtime_panicIndex();
        }
        prVar7 = (runtime__type *)(ulong)runtime_class_to_size[runtime_size_to_class8[uVar8]];
      }
      else {
        uVar8 = (ulong)((long)&prVar9[-0x13].ptrdata + 7U) >> 7;
        if (0xf8 < uVar8) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffc05;
          runtime_panicIndexU();
        }
        if (0x43 < (ulong)runtime_size_to_class128[uVar8]) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffbf3;
          runtime_panicIndex();
        }
        prVar7 = (runtime__type *)(ulong)runtime_class_to_size[runtime_size_to_class128[uVar8]];
      }
    }
    else {
      prVar7 = prVar9;
      if (prVar9 <= &prVar9[0xaa].gcdata) {
        prVar7 = (runtime__type *)((ulong)((long)&prVar9[0xaa].equal + 7U) & 0xffffffffffffe000);
      }
    }
    bVar13 = (runtime__type *)0x1000000000000 < prVar9;
    lVar12 = *(long *)((long)register0x00000020 + 0x18);
    prVar10 = prVar7;
  }
  else if (uVar8 == 8) {
    prVar10 = (runtime__type *)((long)prVar9 * 8);
    if (prVar10 < (runtime__type *)0x8000) {
      if (prVar10 < (runtime__type *)0x3f9) {
        uVar8 = (ulong)((long)&prVar10->size + 7U) >> 3;
        if (0x80 < uVar8) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffbe6;
          runtime_panicIndexU();
        }
        if (0x43 < (ulong)runtime_size_to_class8[uVar8]) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffbd9;
          runtime_panicIndex();
        }
        prVar10 = (runtime__type *)(ulong)runtime_class_to_size[runtime_size_to_class8[uVar8]];
      }
      else {
        uVar8 = (ulong)((long)&prVar10[-0x13].ptrdata + 7U) >> 7;
        if (0xf8 < uVar8) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffbcc;
          runtime_panicIndexU();
        }
        if (0x43 < (ulong)runtime_size_to_class128[uVar8]) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffbbf;
          runtime_panicIndex();
        }
        prVar10 = (runtime__type *)(ulong)runtime_class_to_size[runtime_size_to_class128[uVar8]];
      }
    }
    else if (prVar10 <= &prVar10[0xaa].gcdata) {
      prVar10 = (runtime__type *)((ulong)((long)&prVar10[0xaa].equal + 7U) & 0xffffffffffffe000);
    }
    bVar13 = (runtime__type *)0x200000000000 < prVar9;
    lVar12 = *(long *)((long)register0x00000020 + 0x18) << 3;
    size = (runtime__type *)((long)size << 3);
    prVar7 = (runtime__type *)((ulong)prVar10 >> 3);
  }
  else if ((uVar8 & uVar8 - 1) == 0) {
    lVar12 = 0;
    if (uVar8 != 0) {
      for (; (uVar8 >> lVar12 & 1) == 0; lVar12 = lVar12 + 1) {
      }
    }
    bVar5 = (byte)lVar12;
    lVar12 = *(long *)((long)register0x00000020 + 0x18) << (bVar5 & 0x3f);
    size = (runtime__type *)((long)size << (bVar5 & 0x3f));
    prVar10 = (runtime__type *)((long)prVar9 << (bVar5 & 0x3f));
    if (prVar10 < (runtime__type *)0x8000) {
      if (prVar10 < (runtime__type *)0x3f9) {
        uVar8 = (ulong)((long)&prVar10->size + 7U) >> 3;
        if (0x80 < uVar8) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffbb2;
          runtime_panicIndexU();
        }
        if (0x43 < (ulong)runtime_size_to_class8[uVar8]) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffba5;
          runtime_panicIndex();
        }
        prVar10 = (runtime__type *)(ulong)runtime_class_to_size[runtime_size_to_class8[uVar8]];
      }
      else {
        uVar8 = (ulong)((long)&prVar10[-0x13].ptrdata + 7U) >> 7;
        if (0xf8 < uVar8) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffb94;
          runtime_panicIndexU();
        }
        if (0x43 < (ulong)runtime_size_to_class128[uVar8]) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffb87;
          runtime_panicIndex();
        }
        prVar10 = (runtime__type *)(ulong)runtime_class_to_size[runtime_size_to_class128[uVar8]];
      }
    }
    else if (prVar10 <= &prVar10[0xaa].gcdata) {
      prVar10 = (runtime__type *)((ulong)((long)&prVar10[0xaa].equal + 7U) & 0xffffffffffffe000);
    }
    bVar13 = (runtime__type *)(0x1000000000000U >> (bVar5 & 0x3f)) < prVar9;
    prVar7 = (runtime__type *)((ulong)prVar10 >> (bVar5 & 0x3f));
  }
  else {
    prVar10 = (runtime__type *)((long)prVar9 * uVar8);
    lVar12 = *(long *)((long)register0x00000020 + 0x18) * uVar8;
    size = (runtime__type *)((long)size * uVar8);
    if (prVar10 < (runtime__type *)0x8000) {
      if (prVar10 < (runtime__type *)0x3f9) {
        uVar4 = (ulong)((long)&prVar10->size + 7U) >> 3;
        if (0x80 < uVar4) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffb7a;
          runtime_panicIndexU();
        }
        if (0x43 < (ulong)runtime_size_to_class8[uVar4]) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffb70;
          runtime_panicIndex();
        }
        prVar10 = (runtime__type *)(ulong)runtime_class_to_size[runtime_size_to_class8[uVar4]];
      }
      else {
        uVar4 = (ulong)((long)&prVar10[-0x13].ptrdata + 7U) >> 7;
        if (0xf8 < uVar4) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffb66;
          runtime_panicIndexU();
        }
        if (0x43 < (ulong)runtime_size_to_class128[uVar4]) goto LAB_004ffb52;
        prVar10 = (runtime__type *)(ulong)runtime_class_to_size[runtime_size_to_class128[uVar4]];
      }
    }
    else if (prVar10 < &prVar10[0xaa].gcdata || (long)prVar10 - (long)&prVar10[0xaa].gcdata == 0) {
      prVar10 = (runtime__type *)((ulong)((long)&prVar10[0xaa].equal + 7U) & 0xffffffffffffe000);
    }
    *(ulong *)((long)register0x00000020 + -0x18) = (ulong)prVar10 / uVar8;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = prVar9;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar8;
    bVar13 = SUB168(auVar2 * auVar3,8) != 0;
    prVar7 = *(runtime__type **)((long)register0x00000020 + -0x18);
  }
  if ((!bVar13) && (prVar10 < (runtime__type *)0x1000000000001)) {
    *(long *)((long)register0x00000020 + -0x28) = lVar12;
    *(runtime__type **)((long)register0x00000020 + -0x30) = prVar7;
    if (puVar1[1] == 0) {
      *(runtime__type **)((long)register0x00000020 + -0x20) = prVar10;
      *(runtime__type **)((long)register0x00000020 + -0x38) = size;
      *(runtime__type **)((long)register0x00000020 + -0x58) = prVar10;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
      *(undefined1 *)((long)register0x00000020 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffa4d;
      runtime_mallocgc((uintptr)size,prVar10,SUB81(prVar7,0));
      *(long *)((long)register0x00000020 + -0x10) = *(long *)((long)register0x00000020 + -0x40);
      *(long *)((long)register0x00000020 + -0x58) =
           *(long *)((long)register0x00000020 + -0x40) + *(long *)((long)register0x00000020 + -0x38)
      ;
      *(long *)((long)register0x00000020 + -0x50) =
           *(long *)((long)register0x00000020 + -0x20) - *(long *)((long)register0x00000020 + -0x38)
      ;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffa76;
      runtime_memclrNoHeapPointers();
      lVar12 = *(long *)((long)register0x00000020 + -0x28);
      dst = *(uintptr *)((long)register0x00000020 + -0x10);
    }
    else {
      *(runtime__type **)((long)register0x00000020 + -0x58) = prVar10;
      *(ulong **)((long)register0x00000020 + -0x50) = puVar1;
      *(undefined1 *)((long)register0x00000020 + -0x48) = 1;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffa95;
      runtime_mallocgc((uintptr)size,prVar10,SUB81(prVar7,0));
      dst = *(uintptr *)((long)register0x00000020 + -0x40);
      lVar12 = *(long *)((long)register0x00000020 + -0x28);
      if ((lVar12 != 0) && (runtime_writeBarrier.enabled != false)) {
        *(uintptr *)((long)register0x00000020 + -0x10) = dst;
        prVar10 = *(runtime__type **)((long)register0x00000020 + 0x10);
        size_00 = (lVar12 - **(long **)((long)register0x00000020 + 8)) +
                  (*(long **)((long)register0x00000020 + 8))[1];
        *(uintptr *)((long)register0x00000020 + -0x58) = dst;
        *(runtime__type **)((long)register0x00000020 + -0x50) = prVar10;
        *(uintptr *)((long)register0x00000020 + -0x48) = size_00;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffada;
        runtime_bulkBarrierPreWriteSrcOnly(dst,(uintptr)prVar10,size_00);
        dst = *(uintptr *)((long)register0x00000020 + -0x10);
        lVar12 = *(long *)((long)register0x00000020 + -0x28);
      }
    }
    *(uintptr *)((long)register0x00000020 + -0x10) = dst;
    *(uintptr *)((long)register0x00000020 + -0x58) = dst;
    *(undefined8 *)((long)register0x00000020 + -0x50) =
         *(undefined8 *)((long)register0x00000020 + 0x10);
    *(long *)((long)register0x00000020 + -0x48) = lVar12;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffb05;
    runtime_memmove();
    *(undefined8 *)((long)register0x00000020 + 0x30) =
         *(undefined8 *)((long)register0x00000020 + -0x10);
    *(undefined8 *)((long)register0x00000020 + 0x38) =
         *(undefined8 *)((long)register0x00000020 + 0x18);
    *(undefined8 *)((long)register0x00000020 + 0x40) =
         *(undefined8 *)((long)register0x00000020 + -0x30);
    rVar15.len = (int)prVar10;
    rVar15.array = (void *)*(undefined8 *)((long)register0x00000020 + -0x30);
    rVar15.cap = lVar12;
    return rVar15;
  }
  *(undefined **)((long)register0x00000020 + -0x58) = &DAT_00237b20;
  *(undefined ***)((long)register0x00000020 + -0x50) = &runtime__stmp_126;
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffb52;
  e.data = prVar10;
  e._type = (runtime__type *)&runtime__stmp_126;
  runtime_gopanic(e);
LAB_004ffb52:
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4ffb5c;
  runtime_panicIndex();
}


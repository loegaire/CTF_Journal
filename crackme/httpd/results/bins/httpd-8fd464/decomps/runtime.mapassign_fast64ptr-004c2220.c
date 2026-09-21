
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.mapassign_fast64ptr(runtime.maptype * t, runtime.hmap * h,
   void * key, void * ~r3) */

void * runtime_mapassign_fast64ptr(runtime_maptype *t,runtime_hmap *h,void *key)

{
  void **ppvVar1;
  code *pcVar2;
  undefined8 *puVar3;
  byte bVar4;
  runtime_maptype *t_00;
  runtime_hmap *extraout_RAX;
  runtime_hmap *prVar5;
  uint uVar6;
  long *plVar7;
  runtime_hmap *b;
  ulong uVar8;
  long *extraout_RDX;
  long extraout_RDX_00;
  long lVar9;
  runtime_hmap *prVar10;
  runtime_hmap *prVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *unaff_RBP;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  string s;
  string s_00;
  interface___ e;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  void *key_spill;
  
  do {
                    /* Unresolved local var: uintptr hash@[???]
                       Unresolved local var: uintptr bucket@[???]
                       Unresolved local var: runtime.bmap * b@[???]
                       Unresolved local var: runtime.bmap * insertb@[???]
                       Unresolved local var: uintptr inserti@[???]
                       Unresolved local var: void * insertk@[???]
                       Unresolved local var: void * elem@[???] */
    puVar13 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar13 = (undefined1 *)((long)register0x00000020 + -0x38);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar9 = *(long *)((long)register0x00000020 + 0x10);
      if (lVar9 != 0) break;
      *(undefined **)((long)register0x00000020 + -0x38) = &DAT_00237ca0;
      *(undefined1 **)((long)register0x00000020 + -0x30) = runtime__stmp_76;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c256c;
      e.data = h;
      e._type = (runtime__type *)runtime__stmp_76;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar13 + -8) = 0x4c2572;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar13;
  } while( true );
  if ((*(byte *)(lVar9 + 8) & 4) != 0) {
    *(undefined **)((long)register0x00000020 + -0x38) = &DAT_0029c838;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x15;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c2550;
    s_00.len = (int)h;
    s_00.str = &DAT_0029c838;
    runtime_throw(s_00);
  }
  pcVar2 = (code *)**(undefined8 **)(*(long *)((long)register0x00000020 + 8) + 0x48);
  uVar6 = *(uint *)(lVar9 + 0xc);
  *(undefined1 **)((long)register0x00000020 + -0x38) =
       (undefined1 *)((long)register0x00000020 + 0x18);
  *(ulong *)((long)register0x00000020 + -0x30) = (ulong)uVar6;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c227b;
  (*pcVar2)();
  t_00 = *(runtime_maptype **)((long)register0x00000020 + -0x28);
  *(runtime_maptype **)((long)register0x00000020 + -0x18) = t_00;
  plVar7 = *(long **)((long)register0x00000020 + 0x10);
  bVar4 = *(byte *)(plVar7 + 1);
  *(char *)(plVar7 + 1) = (char)(bVar4 ^ 4);
  if (plVar7[2] == 0) {
    puVar3 = *(undefined8 **)(*(uintptr *)((long)register0x00000020 + 8) + 0x40);
    *(undefined8 *)((long)register0x00000020 + -0x38) = *puVar3;
    *(undefined8 **)((long)register0x00000020 + -0x30) = puVar3;
    *(undefined1 *)((long)register0x00000020 + -0x28) = 1;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c22ba;
    runtime_mallocgc(*(uintptr *)((long)register0x00000020 + 8),(runtime__type *)(ulong)(bVar4 ^ 4),
                     SUB81(puVar3,0));
    if (runtime_writeBarrier._0_4_ == 0) {
      plVar7 = *(long **)((long)register0x00000020 + 0x10);
      plVar7[2] = *(long *)((long)register0x00000020 + -0x20);
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c22e5;
      runtime_gcWriteBarrier();
      plVar7 = extraout_RDX;
    }
    t_00 = *(runtime_maptype **)((long)register0x00000020 + -0x18);
  }
  lVar9 = *(long *)((long)register0x00000020 + 8);
  do {
    bVar4 = *(byte *)((long)plVar7 + 9);
    prVar10 = (runtime_hmap *)((1L << (bVar4 & 0x3f)) - 1U & (ulong)t_00);
    if (plVar7[3] != 0) {
      *(runtime_hmap **)((long)register0x00000020 + -0x10) = prVar10;
      *(long *)((long)register0x00000020 + -0x38) = lVar9;
      *(long **)((long)register0x00000020 + -0x30) = plVar7;
      *(runtime_hmap **)((long)register0x00000020 + -0x28) = prVar10;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c2354;
      runtime_growWork_fast64(t_00,prVar10,(ulong)bVar4);
                    /* Unresolved local var: uint8 top@[???] */
      t_00 = *(runtime_maptype **)((long)register0x00000020 + -0x18);
      lVar9 = *(long *)((long)register0x00000020 + 8);
      prVar10 = *(runtime_hmap **)((long)register0x00000020 + -0x10);
      plVar7 = *(long **)((long)register0x00000020 + 0x10);
    }
    b = (runtime_hmap *)0x0;
    uVar14 = 0;
    prVar10 = (runtime_hmap *)((long)prVar10 * (ulong)*(ushort *)(lVar9 + 0x52) + plVar7[2]);
                    /* Unresolved local var: runtime.bmap * ovf@[???]
                       Unresolved local var: uintptr i@[???] */
    do {
      prVar5 = prVar10;
      for (uVar8 = 0; prVar11 = b, uVar8 < 8; uVar8 = uVar8 + 1) {
        if (*(uint8 *)((long)&prVar5->count + uVar8) < 2) {
          uVar15 = uVar8;
          prVar11 = prVar5;
          if (b != (runtime_hmap *)0x0) {
            uVar15 = uVar14;
            prVar11 = b;
          }
          uVar14 = uVar15;
          if (*(uint8 *)((long)&prVar5->count + uVar8) == 0) goto LAB_004c2384;
        }
        else {
          lVar12 = *(long *)(&prVar5->flags + uVar8 * 8);
          if (*(long *)((long)register0x00000020 + 0x18) == lVar12) goto LAB_004c24f0;
        }
        b = prVar11;
                    /* Unresolved local var: void * k@[???] */
      }
      prVar10 = *(runtime_hmap **)((long)prVar5 + ((ulong)*(ushort *)(lVar9 + 0x52) - 8));
    } while (prVar10 != (runtime_hmap *)0x0);
LAB_004c2384:
    if (plVar7[3] != 0) goto LAB_004c2480;
    bVar4 = *(byte *)((long)plVar7 + 9);
    uVar6 = (uint)bVar4;
    if (((long)(*plVar7 + 1U) < 9) || (*plVar7 + 1U <= ((ulong)(1L << (bVar4 & 0x3f)) >> 1) * 0xd))
    {
      if (0xf < bVar4) {
        uVar6 = 0xf;
      }
      b = (runtime_hmap *)(ulong)(uVar6 & 0xf);
      if (*(ushort *)((long)plVar7 + 10) < (ushort)(1 << (sbyte)(uVar6 & 0xf))) {
LAB_004c2480:
        uVar8 = uVar14;
        if (prVar11 == (runtime_hmap *)0x0) {
          *(long **)((long)register0x00000020 + -0x38) = plVar7;
          *(long *)((long)register0x00000020 + -0x30) = lVar9;
          *(runtime_hmap **)((long)register0x00000020 + -0x28) = prVar5;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c2498;
          runtime___hmap__newoverflow((runtime_hmap *)t_00,(runtime_maptype *)0x0,(runtime_bmap *)b)
          ;
          t_00 = *(runtime_maptype **)((long)register0x00000020 + -0x18);
          lVar9 = *(long *)((long)register0x00000020 + 8);
          plVar7 = *(long **)((long)register0x00000020 + 0x10);
          uVar8 = 0;
          prVar11 = *(runtime_hmap **)((long)register0x00000020 + -0x20);
        }
        prVar5 = prVar11;
        bVar4 = (byte)((ulong)t_00 >> 0x38);
        if (bVar4 < 5) {
          bVar4 = bVar4 + 5;
        }
        *(byte *)((long)&prVar5->count + (uVar8 & 7)) = bVar4;
        lVar12 = *(long *)((long)register0x00000020 + 0x18);
        if (runtime_writeBarrier._0_4_ == 0) {
          *(long *)(&prVar5->flags + uVar8 * 8) = lVar12;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c24ed;
          runtime_gcWriteBarrierBX();
          prVar5 = extraout_RAX;
          lVar9 = extraout_RDX_00;
        }
        *plVar7 = *plVar7 + 1;
LAB_004c24f0:
        ppvVar1 = (void **)((long)&prVar5[1].oldbuckets + *(byte *)(lVar9 + 0x51) * uVar8);
        if ((*(byte *)(plVar7 + 1) & 4) != 0) {
          *(byte *)(plVar7 + 1) = *(byte *)(plVar7 + 1) & 0xfb;
          *(void ***)((long)register0x00000020 + 0x20) = ppvVar1;
          return ppvVar1;
        }
        *(undefined **)((long)register0x00000020 + -0x38) = &DAT_0029c838;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x15;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c2537;
        s.len = lVar12;
        s.str = &DAT_0029c838;
        runtime_throw(s);
      }
    }
    *(long *)((long)register0x00000020 + -0x38) = lVar9;
    *(long **)((long)register0x00000020 + -0x30) = plVar7;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c2305;
    runtime_hashGrow(t_00,prVar11);
    plVar7 = *(long **)((long)register0x00000020 + 0x10);
    t_00 = *(runtime_maptype **)((long)register0x00000020 + -0x18);
    lVar9 = *(long *)((long)register0x00000020 + 8);
  } while( true );
}


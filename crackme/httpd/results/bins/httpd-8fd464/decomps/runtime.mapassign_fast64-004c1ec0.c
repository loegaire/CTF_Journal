
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.mapassign_fast64(runtime.maptype * t, runtime.hmap * h,
   uint64 key, void * ~r3) */

void * runtime_mapassign_fast64(runtime_maptype *t,runtime_hmap *h,uint64 key)

{
  void **ppvVar1;
  code *pcVar2;
  undefined8 *puVar3;
  byte bVar4;
  runtime_maptype *t_00;
  runtime_hmap *prVar5;
  uint uVar6;
  long *plVar7;
  runtime_hmap *b;
  ulong uVar8;
  long *extraout_RDX;
  long lVar9;
  runtime_hmap *prVar10;
  runtime_hmap *prVar11;
  undefined1 *puVar12;
  undefined1 *unaff_RBP;
  ulong uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  string s;
  string s_00;
  interface___ e;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  uint64 key_spill;
  
  do {
                    /* Unresolved local var: uintptr hash@[???]
                       Unresolved local var: uintptr bucket@[???]
                       Unresolved local var: runtime.bmap * b@[???]
                       Unresolved local var: runtime.bmap * insertb@[???]
                       Unresolved local var: uintptr inserti@[???]
                       Unresolved local var: void * insertk@[???]
                       Unresolved local var: void * elem@[???] */
    puVar12 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar12 = (undefined1 *)((long)register0x00000020 + -0x38);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar9 = *(long *)((long)register0x00000020 + 0x10);
      if (lVar9 != 0) break;
      *(undefined **)((long)register0x00000020 + -0x38) = &DAT_00237ca0;
      *(undefined1 **)((long)register0x00000020 + -0x30) = runtime__stmp_76;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c21fa;
      e.data = h;
      e._type = (runtime__type *)runtime__stmp_76;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar12 + -8) = 0x4c2205;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar12;
  } while( true );
  if ((*(byte *)(lVar9 + 8) & 4) != 0) {
    *(undefined **)((long)register0x00000020 + -0x38) = &DAT_0029c838;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x15;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c21de;
    s_00.len = (int)h;
    s_00.str = &DAT_0029c838;
    runtime_throw(s_00);
  }
  pcVar2 = (code *)**(undefined8 **)(*(long *)((long)register0x00000020 + 8) + 0x48);
  uVar6 = *(uint *)(lVar9 + 0xc);
  *(undefined1 **)((long)register0x00000020 + -0x38) =
       (undefined1 *)((long)register0x00000020 + 0x18);
  *(ulong *)((long)register0x00000020 + -0x30) = (ulong)uVar6;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c1f1b;
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
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c1f5a;
    runtime_mallocgc(*(uintptr *)((long)register0x00000020 + 8),(runtime__type *)(ulong)(bVar4 ^ 4),
                     SUB81(puVar3,0));
    if (runtime_writeBarrier._0_4_ == 0) {
      plVar7 = *(long **)((long)register0x00000020 + 0x10);
      plVar7[2] = *(long *)((long)register0x00000020 + -0x20);
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c1f85;
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
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c1ff3;
      runtime_growWork_fast64(t_00,prVar10,(ulong)bVar4);
                    /* Unresolved local var: uint8 top@[???] */
      t_00 = *(runtime_maptype **)((long)register0x00000020 + -0x18);
      lVar9 = *(long *)((long)register0x00000020 + 8);
      prVar10 = *(runtime_hmap **)((long)register0x00000020 + -0x10);
      plVar7 = *(long **)((long)register0x00000020 + 0x10);
    }
    b = (runtime_hmap *)0x0;
    uVar13 = 0;
    prVar10 = (runtime_hmap *)((long)prVar10 * (ulong)*(ushort *)(lVar9 + 0x52) + plVar7[2]);
                    /* Unresolved local var: runtime.bmap * ovf@[???]
                       Unresolved local var: uintptr i@[???] */
    do {
      prVar5 = prVar10;
      for (uVar8 = 0; prVar11 = b, uVar8 < 8; uVar8 = uVar8 + 1) {
        if (*(uint8 *)((long)&prVar5->count + uVar8) < 2) {
          uVar14 = uVar8;
          prVar11 = prVar5;
          if (b != (runtime_hmap *)0x0) {
            uVar14 = uVar13;
            prVar11 = b;
          }
          uVar13 = uVar14;
          if (*(uint8 *)((long)&prVar5->count + uVar8) == 0) goto LAB_004c2023;
        }
        else {
          prVar10 = *(runtime_hmap **)(&prVar5->flags + uVar8 * 8);
          if (*(runtime_hmap **)((long)register0x00000020 + 0x18) == prVar10) goto LAB_004c217e;
        }
        b = prVar11;
                    /* Unresolved local var: uint64 k@[???] */
      }
      prVar10 = *(runtime_hmap **)((long)prVar5 + ((ulong)*(ushort *)(lVar9 + 0x52) - 8));
    } while (prVar10 != (runtime_hmap *)0x0);
LAB_004c2023:
    if (plVar7[3] != 0) goto LAB_004c2120;
    bVar4 = *(byte *)((long)plVar7 + 9);
    uVar6 = (uint)bVar4;
    if (((long)(*plVar7 + 1U) < 9) || (*plVar7 + 1U <= ((ulong)(1L << (bVar4 & 0x3f)) >> 1) * 0xd))
    {
      if (0xf < bVar4) {
        uVar6 = 0xf;
      }
      b = (runtime_hmap *)(ulong)(uVar6 & 0xf);
      if (*(ushort *)((long)plVar7 + 10) < (ushort)(1 << (sbyte)(uVar6 & 0xf))) {
LAB_004c2120:
        uVar8 = uVar13;
        if (prVar11 == (runtime_hmap *)0x0) {
          *(long **)((long)register0x00000020 + -0x38) = plVar7;
          *(long *)((long)register0x00000020 + -0x30) = lVar9;
          *(runtime_hmap **)((long)register0x00000020 + -0x28) = prVar5;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c2138;
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
        *(undefined8 *)(&prVar5->flags + uVar8 * 8) =
             *(undefined8 *)((long)register0x00000020 + 0x18);
        *plVar7 = *plVar7 + 1;
        prVar10 = prVar5;
LAB_004c217e:
        ppvVar1 = (void **)((long)&prVar5[1].oldbuckets + uVar8 * *(byte *)(lVar9 + 0x51));
        if ((*(byte *)(plVar7 + 1) & 4) != 0) {
          *(byte *)(plVar7 + 1) = *(byte *)(plVar7 + 1) & 0xfb;
          *(void ***)((long)register0x00000020 + 0x20) = ppvVar1;
          return ppvVar1;
        }
        *(undefined **)((long)register0x00000020 + -0x38) = &DAT_0029c838;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x15;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c21c5;
        s.len = (int)prVar10;
        s.str = &DAT_0029c838;
        runtime_throw(s);
      }
    }
    *(long *)((long)register0x00000020 + -0x38) = lVar9;
    *(long **)((long)register0x00000020 + -0x30) = plVar7;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4c1fa5;
    runtime_hashGrow(t_00,prVar11);
    plVar7 = *(long **)((long)register0x00000020 + 0x10);
    t_00 = *(runtime_maptype **)((long)register0x00000020 + -0x18);
    lVar9 = *(long *)((long)register0x00000020 + 8);
  } while( true );
}


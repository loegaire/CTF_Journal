
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.mapassign(runtime.maptype * t, runtime.hmap * h, void *
   key, void * ~r3) */

void * runtime_mapassign(runtime_maptype *t,runtime_hmap *h,void *key)

{
  ushort uVar1;
  long lVar2;
  code *pcVar3;
  func_unsafe_Pointer__unsafe_Pointer__bool **ppfVar4;
  func_unsafe_Pointer__unsafe_Pointer__bool *pfVar5;
  uintptr uVar6;
  byte bVar7;
  runtime_maptype *t_00;
  runtime_maptype *t_01;
  runtime__type *prVar8;
  runtime_bmap *extraout_RAX;
  runtime_bmap *prVar9;
  uint uVar10;
  runtime_bmap *prVar11;
  runtime_bmap *b;
  void *src;
  long *plVar12;
  runtime_maptype *t_02;
  undefined1 *puVar13;
  undefined1 *unaff_RBP;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  runtime_bmap *prVar17;
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
                       Unresolved local var: uint8 top@[???]
                       Unresolved local var: uint8 * inserti@[???]
                       Unresolved local var: void * insertk@[???]
                       Unresolved local var: void * elem@[???] */
    puVar13 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar13 = (undefined1 *)((long)register0x00000020 + -0x78);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar2 = *(long *)((long)register0x00000020 + 0x10);
      if (lVar2 != 0) break;
      *(undefined **)((long)register0x00000020 + -0x78) = &DAT_00237ca0;
      *(undefined1 **)((long)register0x00000020 + -0x70) = runtime__stmp_76;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4bf6da;
      e.data = h;
      e._type = (runtime__type *)runtime__stmp_76;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar13 + -8) = 0x4bf6e5;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar13;
  } while( true );
  if ((*(byte *)(lVar2 + 8) & 4) != 0) {
    *(undefined **)((long)register0x00000020 + -0x78) = &DAT_0029c838;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x15;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4bf6be;
    s_00.len = (int)h;
    s_00.str = &DAT_0029c838;
    runtime_throw(s_00);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)((long)register0x00000020 + 8) + 0x48);
  uVar10 = *(uint *)(lVar2 + 0xc);
  *(undefined8 *)((long)register0x00000020 + -0x78) =
       *(undefined8 *)((long)register0x00000020 + 0x18);
  *(ulong *)((long)register0x00000020 + -0x70) = (ulong)uVar10;
  *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4bf1c4;
  (*pcVar3)();
  t_00 = *(runtime_maptype **)((long)register0x00000020 + -0x68);
  *(runtime_maptype **)((long)register0x00000020 + -0x48) = t_00;
  plVar12 = *(long **)((long)register0x00000020 + 0x10);
  bVar7 = *(byte *)(plVar12 + 1);
  *(char *)(plVar12 + 1) = (char)(bVar7 ^ 4);
  if (plVar12[2] == 0) {
    puVar16 = *(undefined8 **)(*(uintptr *)((long)register0x00000020 + 8) + 0x40);
    *(undefined8 *)((long)register0x00000020 + -0x78) = *puVar16;
    *(undefined8 **)((long)register0x00000020 + -0x70) = puVar16;
    *(undefined1 *)((long)register0x00000020 + -0x68) = 1;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4bf209;
    runtime_mallocgc(*(uintptr *)((long)register0x00000020 + 8),(runtime__type *)(ulong)(bVar7 ^ 4),
                     SUB81(puVar16,0));
    if (runtime_writeBarrier._0_4_ == 0) {
      plVar12 = *(long **)((long)register0x00000020 + 0x10);
      plVar12[2] = *(long *)((long)register0x00000020 + -0x60);
    }
    else {
      plVar12 = *(long **)((long)register0x00000020 + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4bf236;
      runtime_gcWriteBarrier();
    }
    t_00 = *(runtime_maptype **)((long)register0x00000020 + -0x48);
  }
  t_02 = *(runtime_maptype **)((long)register0x00000020 + 8);
  do {
    bVar7 = *(byte *)((long)plVar12 + 9);
    uVar14 = (1L << (bVar7 & 0x3f)) - 1U & (ulong)t_00;
    if (plVar12[3] != 0) {
      *(ulong *)((long)register0x00000020 + -0x40) = uVar14;
      *(runtime_maptype **)((long)register0x00000020 + -0x78) = t_02;
      *(long **)((long)register0x00000020 + -0x70) = plVar12;
      *(ulong *)((long)register0x00000020 + -0x68) = uVar14;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4bf2b5;
      runtime_growWork(t_00,(runtime_hmap *)t_02,(ulong)bVar7);
                    /* Unresolved local var: uint8 top@[???] */
      t_00 = *(runtime_maptype **)((long)register0x00000020 + -0x48);
      plVar12 = *(long **)((long)register0x00000020 + 0x10);
      t_02 = *(runtime_maptype **)((long)register0x00000020 + 8);
      uVar14 = *(ulong *)((long)register0x00000020 + -0x40);
    }
    uVar1 = t_02->bucketsize;
    lVar2 = plVar12[2];
    t_01 = (runtime_maptype *)((ulong)t_00 >> 0x38);
    bVar7 = (byte)((ulong)t_00 >> 0x38);
    if (bVar7 < 5) {
      t_01 = (runtime_maptype *)(ulong)(bVar7 + 5);
    }
    *(char *)((long)register0x00000020 + -0x51) = (char)t_01;
    prVar11 = (runtime_bmap *)0x0;
    prVar9 = (runtime_bmap *)0x0;
    prVar17 = (runtime_bmap *)0x0;
    lVar2 = uVar14 * uVar1 + lVar2;
                    /* Unresolved local var: runtime.bmap * ovf@[???]
                       Unresolved local var: uintptr i@[???] */
    do {
      lVar15 = lVar2;
      *(long *)((long)register0x00000020 + -0x18) = lVar15;
      for (uVar14 = 0; uVar14 < 8; uVar14 = uVar14 + 1) {
                    /* Unresolved local var: void * k@[???] */
        bVar7 = *(byte *)(lVar15 + uVar14);
        if ((byte)t_01 == bVar7) {
          *(ulong *)((long)register0x00000020 + -0x50) = uVar14;
          *(runtime_bmap **)((long)register0x00000020 + -0x20) = prVar17;
          *(runtime_bmap **)((long)register0x00000020 + -0x30) = prVar9;
          *(runtime_bmap **)((long)register0x00000020 + -0x28) = prVar11;
          puVar16 = (undefined8 *)(t_02->keysize * uVar14 + lVar15 + 8);
          if ((t_02->flags & 1) != 0) {
            puVar16 = (undefined8 *)*puVar16;
          }
          *(undefined8 **)((long)register0x00000020 + -0x38) = puVar16;
          ppfVar4 = t_02->key->equal;
          pfVar5 = *ppfVar4;
          *(undefined8 *)((long)register0x00000020 + -0x78) =
               *(undefined8 *)((long)register0x00000020 + 0x18);
          *(undefined8 **)((long)register0x00000020 + -0x70) = puVar16;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4bf454;
          (*pfVar5)(t_00,puVar16,(bool *)ppfVar4);
          if (*(char *)((long)register0x00000020 + -0x68) != '\0') {
            prVar8 = *(runtime__type **)((long)register0x00000020 + 8);
            if ((*(uint *)((long)&prVar8[1].gcdata + 4) >> 3 & 1) != 0) {
              *(uintptr *)((long)register0x00000020 + -0x78) = prVar8[1].size;
              *(undefined8 *)((long)register0x00000020 + -0x70) =
                   *(undefined8 *)((long)register0x00000020 + -0x38);
              *(void **)((long)register0x00000020 + -0x68) =
                   *(void **)((long)register0x00000020 + 0x18);
              *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4bf4c8;
              runtime_typedmemmove(prVar8,t_02,*(void **)((long)register0x00000020 + 0x18));
              prVar8 = *(runtime__type **)((long)register0x00000020 + 8);
            }
            plVar12 = (long *)(*(long *)((long)register0x00000020 + -0x18) +
                               (ulong)*(byte *)((long)&prVar8[1].gcdata + 1) *
                               *(long *)((long)register0x00000020 + -0x50) +
                               (ulong)*(byte *)&prVar8[1].gcdata * 8 + 8);
            goto LAB_004bf655;
          }
          t_01 = (runtime_maptype *)(ulong)*(byte *)((long)register0x00000020 + -0x51);
          plVar12 = *(long **)((long)register0x00000020 + 0x10);
          t_02 = *(runtime_maptype **)((long)register0x00000020 + 8);
          lVar15 = *(long *)((long)register0x00000020 + -0x18);
          t_00 = *(runtime_maptype **)((long)register0x00000020 + -0x48);
          uVar14 = *(ulong *)((long)register0x00000020 + -0x50);
          prVar11 = *(runtime_bmap **)((long)register0x00000020 + -0x28);
          prVar9 = *(runtime_bmap **)((long)register0x00000020 + -0x30);
          prVar17 = *(runtime_bmap **)((long)register0x00000020 + -0x20);
        }
        else {
          if ((bVar7 < 2) && (prVar11 == (runtime_bmap *)0x0)) {
            prVar9 = (runtime_bmap *)(uVar14 * t_02->keysize + lVar15 + 8);
            prVar17 = (runtime_bmap *)
                      (t_02->elemsize * uVar14 + (ulong)t_02->keysize * 8 + lVar15 + 8);
            prVar11 = (runtime_bmap *)(lVar15 + uVar14);
          }
          if (bVar7 == 0) goto LAB_004bf2fa;
        }
      }
      lVar2 = *(long *)(lVar15 + (ulong)t_02->bucketsize + -8);
    } while (lVar2 != 0);
LAB_004bf2fa:
    b = prVar11;
    if (plVar12[3] != 0) goto LAB_004bf4fa;
    bVar7 = *(byte *)((long)plVar12 + 9);
    if (((long)(*plVar12 + 1U) < 9) || (*plVar12 + 1U <= ((ulong)(1L << (bVar7 & 0x3f)) >> 1) * 0xd)
       ) {
      uVar10 = (uint)bVar7;
      if (0xf < bVar7) {
        uVar10 = 0xf;
      }
      b = (runtime_bmap *)(ulong)(uVar10 & 0xf);
      if (*(ushort *)((long)plVar12 + 10) < (ushort)(1 << (sbyte)(uVar10 & 0xf))) {
LAB_004bf4fa:
        if (prVar11 == (runtime_bmap *)0x0) {
          *(long **)((long)register0x00000020 + -0x78) = plVar12;
          *(runtime_maptype **)((long)register0x00000020 + -0x70) = t_02;
          *(long *)((long)register0x00000020 + -0x68) = lVar15;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4bf512;
          runtime___hmap__newoverflow((runtime_hmap *)t_01,t_02,b);
          prVar11 = *(runtime_bmap **)((long)register0x00000020 + -0x60);
          prVar9 = prVar11 + 1;
          prVar17 = prVar11 + (ulong)*(byte *)(*(long *)((long)register0x00000020 + 8) + 0x50) + 1;
          t_02 = *(runtime_maptype **)((long)register0x00000020 + 8);
        }
        *(runtime_bmap **)((long)register0x00000020 + -0x20) = prVar17;
        *(runtime_bmap **)((long)register0x00000020 + -0x28) = prVar11;
        if ((t_02->flags & 1) != 0) {
          *(runtime_bmap **)((long)register0x00000020 + -0x10) = prVar9;
                    /* Unresolved local var: void * kmem@[???] */
          prVar8 = t_02->key;
          uVar6 = prVar8->size;
          *(uintptr *)((long)register0x00000020 + -0x78) = uVar6;
          *(runtime__type **)((long)register0x00000020 + -0x70) = prVar8;
          *(undefined1 *)((long)register0x00000020 + -0x68) = 1;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4bf57c;
          runtime_mallocgc((uintptr)prVar8,&t_02->typ,SUB81(uVar6,0));
          prVar9 = *(runtime_bmap **)((long)register0x00000020 + -0x60);
          if (runtime_writeBarrier._0_4_ == 0) {
            **(long **)((long)register0x00000020 + -0x10) = (long)prVar9;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4bf59b;
            runtime_gcWriteBarrier();
            prVar9 = extraout_RAX;
          }
          t_02 = *(runtime_maptype **)((long)register0x00000020 + 8);
        }
        src = (void *)(ulong)t_02->flags;
        if ((t_02->flags >> 1 & 1) != 0) {
          *(runtime_bmap **)((long)register0x00000020 + -0x30) = prVar9;
                    /* Unresolved local var: void * vmem@[???] */
          prVar8 = t_02->elem;
          src = (void *)prVar8->size;
          *(void **)((long)register0x00000020 + -0x78) = src;
          *(runtime__type **)((long)register0x00000020 + -0x70) = prVar8;
          *(undefined1 *)((long)register0x00000020 + -0x68) = 1;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4bf5e5;
          runtime_mallocgc((uintptr)prVar8,&t_02->typ,SUB81(src,0));
          if (runtime_writeBarrier._0_4_ == 0) {
            **(undefined8 **)((long)register0x00000020 + -0x20) =
                 *(undefined8 *)((long)register0x00000020 + -0x60);
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4bf605;
            runtime_gcWriteBarrier();
          }
          t_02 = *(runtime_maptype **)((long)register0x00000020 + 8);
          prVar9 = *(runtime_bmap **)((long)register0x00000020 + -0x30);
        }
        *(runtime__type **)((long)register0x00000020 + -0x78) = t_02->key;
        *(runtime_bmap **)((long)register0x00000020 + -0x70) = prVar9;
        *(runtime__type **)((long)register0x00000020 + -0x68) =
             *(runtime__type **)((long)register0x00000020 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4bf631;
        runtime_typedmemmove(*(runtime__type **)((long)register0x00000020 + 0x18),t_02,src);
        **(undefined1 **)((long)register0x00000020 + -0x28) =
             *(undefined1 *)((long)register0x00000020 + -0x51);
        **(long **)((long)register0x00000020 + 0x10) =
             **(long **)((long)register0x00000020 + 0x10) + 1;
        prVar8 = *(runtime__type **)((long)register0x00000020 + 8);
        plVar12 = *(long **)((long)register0x00000020 + -0x20);
LAB_004bf655:
        bVar7 = *(byte *)(*(long *)((long)register0x00000020 + 0x10) + 8);
        if ((bVar7 & 4) == 0) {
          *(undefined **)((long)register0x00000020 + -0x78) = &DAT_0029c838;
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x15;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4bf6a5;
          s.len._0_1_ = bVar7;
          s.str = &DAT_0029c838;
          s.len._1_7_ = 0;
          runtime_throw(s);
        }
        *(byte *)(*(long *)((long)register0x00000020 + 0x10) + 8) = bVar7 & 0xfb;
        uVar10 = *(uint *)((long)&prVar8[1].gcdata + 4);
        if ((uVar10 >> 1 & 1) != 0) {
          plVar12 = (long *)*plVar12;
        }
        *(long **)((long)register0x00000020 + 0x20) = plVar12;
        return (void *)(ulong)uVar10;
      }
    }
    *(runtime_maptype **)((long)register0x00000020 + -0x78) = t_02;
    *(long **)((long)register0x00000020 + -0x70) = plVar12;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x4bf256;
    runtime_hashGrow(t_01,(runtime_hmap *)t_02);
    t_00 = *(runtime_maptype **)((long)register0x00000020 + -0x48);
    plVar12 = *(long **)((long)register0x00000020 + 0x10);
    t_02 = *(runtime_maptype **)((long)register0x00000020 + 8);
  } while( true );
}


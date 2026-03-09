
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.mapassign_faststr(runtime.maptype * t, runtime.hmap * h,
   string s, void * ~r3) */

void * runtime_mapassign_faststr(runtime_maptype *t,runtime_hmap *h,string s)

{
  runtime__type **pprVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  uintptr uVar6;
  byte bVar7;
  runtime_maptype *prVar8;
  runtime_maptype *t_00;
  ulong extraout_RAX;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  runtime_maptype *prVar12;
  runtime_maptype *b;
  long *extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long lVar13;
  runtime_hmap *h_00;
  runtime_maptype *t_01;
  undefined1 *puVar14;
  undefined1 *unaff_RBP;
  ulong uVar15;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  interface___ e;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  string s_spill;
  
  do {
                    /* Unresolved local var: runtime.stringStruct * key@[???]
                       Unresolved local var: uintptr hash@[???]
                       Unresolved local var: uintptr bucket@[???]
                       Unresolved local var: runtime.bmap * b@[???]
                       Unresolved local var: uint8 top@[???]
                       Unresolved local var: runtime.bmap * insertb@[???]
                       Unresolved local var: uintptr inserti@[???]
                       Unresolved local var: void * insertk@[???]
                       Unresolved local var: void * elem@[???] */
    puVar14 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar14 = (undefined1 *)((long)register0x00000020 + -0x68);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar13 = *(long *)((long)register0x00000020 + 0x10);
      if (lVar13 != 0) break;
      *(undefined **)((long)register0x00000020 + -0x68) = &DAT_00237ca0;
      *(undefined1 **)((long)register0x00000020 + -0x60) = runtime__stmp_76;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4c3b05;
      e.data = h;
      e._type = (runtime__type *)runtime__stmp_76;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar14 + -8) = 0x4c3b0b;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar14;
  } while( true );
  if ((*(byte *)(lVar13 + 8) & 4) != 0) {
    *(undefined **)((long)register0x00000020 + -0x68) = &DAT_0029c838;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x15;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4c3ae9;
    s_01.len = (int)h;
    s_01.str = &DAT_0029c838;
    runtime_throw(s_01);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)((long)register0x00000020 + 8) + 0x48);
  uVar10 = *(uint *)(lVar13 + 0xc);
  *(undefined1 **)((long)register0x00000020 + -0x68) =
       (undefined1 *)((long)register0x00000020 + 0x18);
  *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar10;
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4c373e;
  (*pcVar3)();
  prVar8 = *(runtime_maptype **)((long)register0x00000020 + -0x58);
  *(runtime_maptype **)((long)register0x00000020 + -0x38) = prVar8;
  plVar11 = *(long **)((long)register0x00000020 + 0x10);
  bVar7 = *(byte *)(plVar11 + 1);
  *(char *)(plVar11 + 1) = (char)(bVar7 ^ 4);
  if (plVar11[2] == 0) {
    puVar4 = *(undefined8 **)(*(uintptr *)((long)register0x00000020 + 8) + 0x40);
    *(undefined8 *)((long)register0x00000020 + -0x68) = *puVar4;
    *(undefined8 **)((long)register0x00000020 + -0x60) = puVar4;
    *(undefined1 *)((long)register0x00000020 + -0x58) = 1;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4c377d;
    runtime_mallocgc(*(uintptr *)((long)register0x00000020 + 8),(runtime__type *)(ulong)(bVar7 ^ 4),
                     SUB81(puVar4,0));
    if (runtime_writeBarrier._0_4_ == 0) {
      plVar11 = *(long **)((long)register0x00000020 + 0x10);
      plVar11[2] = *(long *)((long)register0x00000020 + -0x50);
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4c37a5;
      runtime_gcWriteBarrier();
      plVar11 = extraout_RDX;
    }
    prVar8 = *(runtime_maptype **)((long)register0x00000020 + -0x38);
  }
  lVar13 = *(long *)((long)register0x00000020 + 8);
  do {
    bVar7 = *(byte *)((long)plVar11 + 9);
    h_00 = (runtime_hmap *)((1L << (bVar7 & 0x3f)) - 1U & (ulong)prVar8);
    if (plVar11[3] != 0) {
      *(runtime_hmap **)((long)register0x00000020 + -0x30) = h_00;
      *(long *)((long)register0x00000020 + -0x68) = lVar13;
      *(long **)((long)register0x00000020 + -0x60) = plVar11;
      *(runtime_hmap **)((long)register0x00000020 + -0x58) = h_00;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4c3814;
      runtime_growWork_faststr(prVar8,h_00,(ulong)bVar7);
                    /* Unresolved local var: uint8 top@[???] */
      prVar8 = *(runtime_maptype **)((long)register0x00000020 + -0x38);
      lVar13 = *(long *)((long)register0x00000020 + 8);
      h_00 = *(runtime_hmap **)((long)register0x00000020 + -0x30);
      plVar11 = *(long **)((long)register0x00000020 + 0x10);
    }
    uVar2 = *(ushort *)(lVar13 + 0x52);
    lVar5 = plVar11[2];
    t_00 = (runtime_maptype *)((ulong)prVar8 >> 0x38);
    bVar7 = (byte)((ulong)prVar8 >> 0x38);
    if (bVar7 < 5) {
      t_00 = (runtime_maptype *)(ulong)(bVar7 + 5);
    }
    *(char *)((long)register0x00000020 + -0x41) = (char)t_00;
    prVar12 = (runtime_maptype *)0x0;
    uVar9 = 0;
    prVar8 = (runtime_maptype *)((long)h_00 * (ulong)uVar2 + lVar5);
                    /* Unresolved local var: runtime.bmap * ovf@[???]
                       Unresolved local var: uintptr i@[???] */
    do {
      t_01 = prVar8;
      *(runtime_maptype **)((long)register0x00000020 + -0x10) = t_01;
      for (uVar15 = 0; uVar15 < 8; uVar15 = uVar15 + 1) {
                    /* Unresolved local var: runtime.stringStruct * k@[???]
                       Unresolved local var: void * ~R0@[???] */
        bVar7 = *(byte *)((long)&(t_01->typ).size + uVar15);
        if ((byte)t_00 == bVar7) {
          prVar8 = (runtime_maptype *)(&(t_01->typ).ptrdata + uVar15 * 2);
          if (*(long *)(&(t_01->typ).hash + uVar15 * 4) ==
              *(long *)((long)register0x00000020 + 0x20)) {
            uVar6 = (prVar8->typ).size;
            if (*(uintptr *)((long)register0x00000020 + 0x18) == uVar6) {
              bVar7 = 0;
            }
            else {
              *(ulong *)((long)register0x00000020 + -0x28) = uVar15;
              *(runtime_maptype **)((long)register0x00000020 + -0x20) = prVar8;
              *(ulong *)((long)register0x00000020 + -0x40) = uVar9;
              *(runtime_maptype **)((long)register0x00000020 + -0x18) = prVar12;
              *(uintptr *)((long)register0x00000020 + -0x68) = uVar6;
              *(uintptr *)((long)register0x00000020 + -0x60) =
                   *(uintptr *)((long)register0x00000020 + 0x18);
              *(long *)((long)register0x00000020 + -0x58) =
                   *(long *)((long)register0x00000020 + 0x20);
              *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4c3991;
              runtime_memequal();
              bVar7 = *(byte *)((long)register0x00000020 + -0x50) ^ 1;
              prVar12 = *(runtime_maptype **)((long)register0x00000020 + -0x18);
              lVar13 = *(long *)((long)register0x00000020 + 8);
              prVar8 = *(runtime_maptype **)((long)register0x00000020 + -0x20);
              plVar11 = *(long **)((long)register0x00000020 + 0x10);
              uVar9 = *(ulong *)((long)register0x00000020 + -0x40);
              uVar15 = *(ulong *)((long)register0x00000020 + -0x28);
              t_01 = *(runtime_maptype **)((long)register0x00000020 + -0x10);
              t_00 = (runtime_maptype *)(ulong)*(byte *)((long)register0x00000020 + -0x41);
            }
            if (bVar7 == 0) {
              if (runtime_writeBarrier._0_4_ == 0) {
                (prVar8->typ).size = *(uintptr *)((long)register0x00000020 + 0x18);
              }
              else {
                *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4c39fa;
                runtime_gcWriteBarrier();
                lVar13 = extraout_RDX_00;
              }
              goto LAB_004c3a83;
            }
          }
        }
        else {
          if ((bVar7 < 2) && (prVar12 == (runtime_maptype *)0x0)) {
            prVar12 = t_01;
            uVar9 = uVar15;
          }
          if (bVar7 == 0) goto LAB_004c3854;
        }
      }
      prVar8 = *(runtime_maptype **)((long)t_01 + ((ulong)*(ushort *)(lVar13 + 0x52) - 8));
    } while (prVar8 != (runtime_maptype *)0x0);
LAB_004c3854:
    b = prVar12;
    if (plVar11[3] != 0) goto LAB_004c3a02;
    bVar7 = *(byte *)((long)plVar11 + 9);
    if (((long)(*plVar11 + 1U) < 9) || (*plVar11 + 1U <= ((ulong)(1L << (bVar7 & 0x3f)) >> 1) * 0xd)
       ) {
      uVar10 = (uint)bVar7;
      if (0xf < bVar7) {
        uVar10 = 0xf;
      }
      b = (runtime_maptype *)(ulong)(uVar10 & 0xf);
      if (*(ushort *)((long)plVar11 + 10) < (ushort)(1 << (sbyte)(uVar10 & 0xf))) {
LAB_004c3a02:
        prVar8 = prVar12;
        if (prVar12 == (runtime_maptype *)0x0) {
          *(long **)((long)register0x00000020 + -0x68) = plVar11;
          *(long *)((long)register0x00000020 + -0x60) = lVar13;
          *(runtime_maptype **)((long)register0x00000020 + -0x58) = t_01;
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4c3a1a;
          runtime___hmap__newoverflow((runtime_hmap *)t_00,t_01,(runtime_bmap *)b);
          prVar8 = *(runtime_maptype **)((long)register0x00000020 + -0x50);
          t_00 = (runtime_maptype *)(ulong)*(byte *)((long)register0x00000020 + -0x41);
          lVar13 = *(long *)((long)register0x00000020 + 8);
          plVar11 = *(long **)((long)register0x00000020 + 0x10);
          uVar9 = 0;
        }
        *(uint8 *)((long)&(prVar8->typ).size + (uVar9 & 7)) = (uint8)t_00;
        uVar6 = *(uintptr *)((long)register0x00000020 + 0x18);
        *(undefined8 *)(&(prVar8->typ).hash + uVar9 * 4) =
             *(undefined8 *)((long)register0x00000020 + 0x20);
        if (runtime_writeBarrier._0_4_ == 0) {
          (&(prVar8->typ).ptrdata)[uVar9 * 2] = uVar6;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4c3a7a;
          runtime_gcWriteBarrierR8();
          uVar9 = extraout_RAX;
          lVar13 = extraout_RDX_01;
        }
        *plVar11 = *plVar11 + 1;
        uVar15 = uVar9;
        t_01 = prVar8;
LAB_004c3a83:
        pprVar1 = (runtime__type **)((long)&t_01[1].key + *(byte *)(lVar13 + 0x51) * uVar15);
        if ((*(byte *)(plVar11 + 1) & 4) == 0) {
          *(undefined **)((long)register0x00000020 + -0x68) = &DAT_0029c838;
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x15;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4c3ad0;
          s_00.len = (int)prVar8;
          s_00.str = &DAT_0029c838;
          runtime_throw(s_00);
        }
        *(byte *)(plVar11 + 1) = *(byte *)(plVar11 + 1) & 0xfb;
        *(runtime__type ***)((long)register0x00000020 + 0x28) = pprVar1;
        return pprVar1;
      }
    }
    *(long *)((long)register0x00000020 + -0x68) = lVar13;
    *(long **)((long)register0x00000020 + -0x60) = plVar11;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4c37c5;
    runtime_hashGrow(t_00,(runtime_hmap *)t_01);
    plVar11 = *(long **)((long)register0x00000020 + 0x10);
    prVar8 = *(runtime_maptype **)((long)register0x00000020 + -0x38);
    lVar13 = *(long *)((long)register0x00000020 + 8);
  } while( true );
}


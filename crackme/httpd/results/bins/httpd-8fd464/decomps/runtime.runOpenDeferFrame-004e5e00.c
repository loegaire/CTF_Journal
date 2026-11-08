
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.runOpenDeferFrame(runtime.g * gp, runtime._defer * d, bool
   ~r2) */

bool runtime_runOpenDeferFrame(runtime_g *gp,runtime__defer *d)

{
  byte bVar1;
  byte bVar2;
  runtime__panic *arg;
  runtime__defer *extraout_RAX;
  runtime__defer *p;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong extraout_RDX;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  uint32 argsize;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long in_FS_OFFSET;
  interface___ e;
  interface___ e_00;
  interface___ e_01;
  interface___ e_02;
  interface___ e_03;
  interface___ e_04;
  interface___ e_05;
  interface___ e_06;
  interface___ e_07;
  interface___ e_08;
  interface___ e_09;
  interface___ e_10;
  runtime_g *gp_spill;
  runtime__defer *d_spill;
  
                    /* Unresolved local var: bool done@[???]
                       Unresolved local var: void * fd@[???]
                       Unresolved local var: uint32 deferBitsOffset@[???]
                       Unresolved local var: uint32 nDefers@[???]
                       Unresolved local var: uint8 deferBits@[???]
                       Unresolved local var: uint32 ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar3 = 0;
  e_08.data = d_spill->fd;
                    /* Unresolved local var: uint32 r@[???]
                       Unresolved local var: int shift@[???] */
  while (e_09.data = e_08.data + 1, 0x7f < *e_08.data) {
    if (lVar3 < 0) goto LAB_004e66c5;
    lVar3 = lVar3 + 7;
    e_08.data = e_09.data;
    if (0x1c < lVar3) {
      e_10.data = e_09.data;
      e_10._type = (runtime__type *)runtime__stmp_90;
      runtime_gopanic(e_10);
LAB_004e66c5:
                    /* WARNING: Subroutine does not return */
      runtime_panicshift();
    }
  }
  if (lVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicshift();
  }
  iVar7 = 0;
  uVar8 = 0;
                    /* Unresolved local var: uint32 r@[???]
                       Unresolved local var: int shift@[???]
                       Unresolved local var: uint8 b@[???] */
  while( true ) {
    bVar1 = *e_09.data;
    e_09.data = e_09.data + 1;
    if (bVar1 < 0x80) break;
    if ((long)uVar8 < 0) goto LAB_004e6697;
    iVar7 = ((bVar1 & 0xffffff7f) << ((byte)uVar8 & 0x1f) & -(uint)(uVar8 < 0x20)) + iVar7;
    uVar8 = uVar8 + 7;
    if (0x1c < (long)uVar8) {
      e_09._type = (runtime__type *)runtime__stmp_90;
      runtime_gopanic(e_09);
LAB_004e6697:
                    /* WARNING: Subroutine does not return */
      runtime_panicshift();
    }
  }
  if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicshift();
  }
  uVar4 = iVar7 + ((uint)bVar1 << ((byte)uVar8 & 0x1f) & -(uint)(uVar8 < 0x20));
  iVar7 = 0;
  uVar8 = 0;
                    /* Unresolved local var: uint32 r@[???]
                       Unresolved local var: int shift@[???]
                       Unresolved local var: uint8 b@[???] */
  do {
    bVar1 = *e_09.data;
    e_08.data = e_09.data + 1;
    if (bVar1 < 0x80) {
      if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        runtime_panicshift();
      }
      uVar13 = (ulong)*(byte *)(d_spill->varp - (ulong)uVar4);
      uVar8 = (ulong)(iVar7 + ((uint)bVar1 << ((byte)uVar8 & 0x1f) & -(uint)(uVar8 < 0x20)));
                    /* Unresolved local var: int i@[???] */
      do {
        uVar6 = (ulong)uVar4;
        uVar8 = uVar8 - 1;
        if ((long)uVar8 < 0) {
          return true;
        }
        iVar7 = 0;
        uVar9 = 0;
                    /* Unresolved local var: uint32 r@[???]
                       Unresolved local var: int shift@[???]
                       Unresolved local var: uint8 b@[???] */
        while( true ) {
          bVar1 = *e_08.data;
          e_07.data = e_08.data + 1;
          if (bVar1 < 0x80) break;
          if ((long)uVar9 < 0) goto LAB_004e664b;
          iVar7 = ((bVar1 & 0xffffff7f) << ((byte)uVar9 & 0x1f) & -(uint)(uVar9 < 0x20)) + iVar7;
          uVar9 = uVar9 + 7;
          e_08.data = e_07.data;
          if (0x1c < (long)uVar9) {
            e_07._type = (runtime__type *)runtime__stmp_90;
            runtime_gopanic(e_07);
LAB_004e664b:
                    /* WARNING: Subroutine does not return */
            runtime_panicshift();
          }
        }
        if ((long)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          runtime_panicshift();
        }
        iVar15 = 0;
        uVar10 = 0;
                    /* Unresolved local var: uint32 r@[???]
                       Unresolved local var: int shift@[???]
                       Unresolved local var: uint8 b@[???] */
        while( true ) {
          bVar12 = *e_07.data;
          e_06.data = e_07.data + 1;
          if (bVar12 < 0x80) break;
          if ((long)uVar10 < 0) goto LAB_004e6625;
          iVar15 = ((bVar12 & 0xffffff7f) << ((byte)uVar10 & 0x1f) & -(uint)(uVar10 < 0x20)) +
                   iVar15;
          uVar10 = uVar10 + 7;
          e_07.data = e_06.data;
          if (0x1c < (long)uVar10) {
            e_06._type = (runtime__type *)runtime__stmp_90;
            runtime_gopanic(e_06);
LAB_004e6625:
                    /* WARNING: Subroutine does not return */
            runtime_panicshift();
          }
        }
        if ((long)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          runtime_panicshift();
        }
        iVar16 = 0;
        uVar11 = 0;
                    /* Unresolved local var: uint32 r@[???]
                       Unresolved local var: int shift@[???]
                       Unresolved local var: uint8 b@[???] */
        while( true ) {
          bVar2 = *e_06.data;
          e_05.data = e_06.data + 1;
          if (bVar2 < 0x80) break;
          if ((long)uVar11 < 0) goto LAB_004e65f7;
          iVar16 = ((bVar2 & 0xffffff7f) << ((byte)uVar11 & 0x1f) & -(uint)(uVar11 < 0x20)) + iVar16
          ;
          uVar11 = uVar11 + 7;
          e_06.data = e_05.data;
          if (0x1c < (long)uVar11) {
            e_05._type = (runtime__type *)runtime__stmp_90;
            runtime_gopanic(e_05);
LAB_004e65f7:
                    /* WARNING: Subroutine does not return */
            runtime_panicshift();
          }
        }
        if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          runtime_panicshift();
        }
        uVar17 = -(uint)(uVar8 < 0x20) & 1 << ((byte)uVar8 & 0x1f);
        uVar5 = iVar16 + ((uint)bVar2 << ((byte)uVar11 & 0x1f) & -(uint)(uVar11 < 0x20));
        uVar11 = (ulong)uVar5;
        if ((byte)((byte)uVar17 & (byte)uVar13) == 0) {
          for (uVar17 = 0; uVar17 < uVar5; uVar17 = uVar17 + 1) {
            e_03.data = (void *)0x0;
                    /* Unresolved local var: uint32 r@[???]
                       Unresolved local var: int shift@[???] */
            while (0x7f < *e_05.data) {
              if ((long)e_03.data < 0) goto LAB_004e65d1;
              e_03.data = (void *)((long)e_03.data + 7);
              e_05.data = e_05.data + 1;
              if (0x1c < (long)e_03.data) {
                e_04.data = e_03.data;
                e_04._type = (runtime__type *)runtime__stmp_90;
                runtime_gopanic(e_04);
LAB_004e65d1:
                    /* WARNING: Subroutine does not return */
                runtime_panicshift();
              }
            }
            if ((long)e_03.data < 0) {
                    /* WARNING: Subroutine does not return */
              runtime_panicshift();
            }
            e_03.data = (void *)0x0;
            e_08.data = e_05.data + 1;
                    /* Unresolved local var: uint32 r@[???]
                       Unresolved local var: int shift@[???] */
            while (0x7f < *e_08.data) {
              if ((long)e_03.data < 0) goto LAB_004e65ab;
              e_03.data = (void *)((long)e_03.data + 7);
              e_08.data = e_08.data + 1;
              if (0x1c < (long)e_03.data) {
                e_03._type = (runtime__type *)runtime__stmp_90;
                runtime_gopanic(e_03);
LAB_004e65ab:
                    /* WARNING: Subroutine does not return */
                runtime_panicshift();
              }
            }
            if ((long)e_03.data < 0) {
                    /* WARNING: Subroutine does not return */
              runtime_panicshift();
            }
            e_02.data = (void *)0x0;
            e_08.data = e_08.data + 1;
                    /* Unresolved local var: uint32 r@[???]
                       Unresolved local var: int shift@[???] */
            while (e_05.data = e_08.data + 1, 0x7f < *e_08.data) {
              if ((long)e_02.data < 0) goto LAB_004e6585;
              e_02.data = (void *)((long)e_02.data + 7);
              e_08.data = e_05.data;
              if (0x1c < (long)e_02.data) {
                e_02._type = (runtime__type *)runtime__stmp_90;
                runtime_gopanic(e_02);
LAB_004e6585:
                    /* WARNING: Subroutine does not return */
                runtime_panicshift();
              }
            }
            if ((long)e_02.data < 0) {
                    /* WARNING: Subroutine does not return */
              runtime_panicshift();
            }
                    /* Unresolved local var: uint32 j@[???] */
          }
          uVar5 = (uint)uVar13;
        }
        else {
          argsize = (int)d_spill + 0x18;
          if (runtime_writeBarrier._0_4_ == 0) {
            d_spill->fn = *(runtime_funcval **)
                           (d_spill->varp -
                           (ulong)(((uint)bVar12 << ((byte)uVar10 & 0x1f) & -(uint)(uVar10 < 0x20))
                                  + iVar15));
            p = d_spill;
          }
          else {
            runtime_gcWriteBarrierSI();
            p = extraout_RAX;
            uVar6 = extraout_RDX;
          }
          uVar10 = uVar11;
          uVar14 = uVar13;
          uVar18 = uVar17;
                    /* Unresolved local var: uint32 j@[???] */
          for (uVar5 = 0; uVar5 < (uint)uVar10; uVar5 = uVar5 + 1) {
            lVar3 = 0;
                    /* Unresolved local var: uint32 r@[???]
                       Unresolved local var: int shift@[???]
                       Unresolved local var: uint8 b@[???] */
            while (e_01.data = e_05.data + 1, 0x7f < *e_05.data) {
              if (lVar3 < 0) goto LAB_004e64b5;
              lVar3 = lVar3 + 7;
              e_05.data = e_01.data;
              if (0x1c < lVar3) {
                e_01._type = (runtime__type *)runtime__stmp_90;
                runtime_gopanic(e_01);
LAB_004e64b5:
                    /* WARNING: Subroutine does not return */
                runtime_panicshift();
              }
            }
            if (lVar3 < 0) {
                    /* WARNING: Subroutine does not return */
              runtime_panicshift();
            }
            lVar3 = 0;
                    /* Unresolved local var: uint32 r@[???]
                       Unresolved local var: int shift@[???]
                       Unresolved local var: uint8 b@[???] */
            while (e_00.data = e_01.data + 1, 0x7f < *e_01.data) {
              if (lVar3 < 0) goto LAB_004e648f;
              lVar3 = lVar3 + 7;
              e_01.data = e_00.data;
              if (0x1c < lVar3) {
                e_00._type = (runtime__type *)runtime__stmp_90;
                runtime_gopanic(e_00);
LAB_004e648f:
                    /* WARNING: Subroutine does not return */
                runtime_panicshift();
              }
            }
            if (lVar3 < 0) {
                    /* WARNING: Subroutine does not return */
              runtime_panicshift();
            }
            lVar3 = 0;
            while (e.data = e_00.data + 1, 0x7f < *e_00.data) {
              if (lVar3 < 0) goto LAB_004e6469;
              lVar3 = lVar3 + 7;
              e_00.data = e.data;
              if (0x1c < lVar3) {
                e._type = (runtime__type *)runtime__stmp_90;
                runtime_gopanic(e);
LAB_004e6469:
                    /* WARNING: Subroutine does not return */
                runtime_panicshift();
              }
            }
            if (lVar3 < 0) {
                    /* WARNING: Subroutine does not return */
              runtime_panicshift();
            }
                    /* Unresolved local var: uint32 r@[???]
                       Unresolved local var: int shift@[???]
                       Unresolved local var: uint8 b@[???] */
            runtime_memmove();
            uVar6 = (ulong)uVar4;
            uVar10 = uVar11 & 0xffffffff;
            uVar14 = uVar13 & 0xff;
            uVar18 = uVar17 & 0xff;
            p = d_spill;
            e_05.data = e.data;
          }
                    /* Unresolved local var: uint32 argOffset@[???]
                       Unresolved local var: uint32 argLen@[???]
                       Unresolved local var: uint32 argCallOffset@[???] */
          bVar12 = (byte)uVar14 & ~(byte)uVar18;
          *(byte *)(p->varp - uVar6) = bVar12;
          arg = p->_panic;
          runtime_reflectcallSave
                    ((runtime__panic *)p,
                     (void *)(ulong)(((uint)bVar1 << ((byte)uVar9 & 0x1f) & -(uint)(uVar9 < 0x20)) +
                                    iVar7),arg,argsize);
          if ((arg != (runtime__panic *)0x0) && (arg->aborted != false)) {
            return true;
          }
          if (runtime_writeBarrier._0_4_ == 0) {
            d_spill->fn = (runtime_funcval *)0x0;
          }
          else {
            runtime_gcWriteBarrier();
          }
          runtime_memclrNoHeapPointers();
          if ((d_spill->_panic != (runtime__panic *)0x0) && (d_spill->_panic->recovered != false)) {
            return bVar12 == 0;
          }
          uVar5 = (uint)bVar12;
        }
                    /* Unresolved local var: uint32 argWidth@[???]
                       Unresolved local var: uint32 closureOffset@[???]
                       Unresolved local var: uint32 nArgs@[???]
                       Unresolved local var: runtime.funcval * closure@[???]
                       Unresolved local var: void * deferArgs@[???]
                       Unresolved local var: runtime._panic * p@[???]
                       Unresolved local var: void * ~R0@[???] */
        uVar13 = (ulong)uVar5;
        e_08.data = e_05.data;
      } while( true );
    }
    if ((long)uVar8 < 0) goto LAB_004e6671;
    iVar7 = ((bVar1 & 0xffffff7f) << ((byte)uVar8 & 0x1f) & -(uint)(uVar8 < 0x20)) + iVar7;
    uVar8 = uVar8 + 7;
    e_09.data = e_08.data;
  } while ((long)uVar8 < 0x1d);
  e_08._type = (runtime__type *)runtime__stmp_90;
  runtime_gopanic(e_08);
LAB_004e6671:
                    /* WARNING: Subroutine does not return */
  runtime_panicshift();
}


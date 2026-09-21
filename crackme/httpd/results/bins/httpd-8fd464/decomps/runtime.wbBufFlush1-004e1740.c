
/* WARNING: Unknown calling convention */

void runtime_wbBufFlush1(runtime_p *_p_)

{
  runtime_workbuf *prVar1;
  runtime_gcWork *w;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  uintptr refBase;
  undefined1 *puVar6;
  undefined1 *unaff_RBP;
  byte bVar7;
  uint uVar8;
  ulong in_RDI;
  ulong uVar9;
  long in_FS_OFFSET;
  __uintptr obj;
  runtime_p *_p__spill;
  
  do {
                    /* Unresolved local var: uintptr start@[???]
                       Unresolved local var: runtime.gcWork * gcw@[???]
                       Unresolved local var: int pos@[???]
                       Unresolved local var: []uintptr ptrs@[???] */
    puVar6 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18) < register0x00000020) {
      puVar6 = (undefined1 *)((long)register0x00000020 + -0x50);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      w = *(runtime_gcWork **)((long)register0x00000020 + 8);
      uVar2 = (ulong)(w[0x91].scanWork - (long)(w + 0x92)) >> 3;
      if (uVar2 < 0x201) {
        *(ulong *)((long)register0x00000020 + -0x10) = uVar2;
        w[0x91].scanWork = 0;
        if (runtime_useCheckmark != false) {
          lVar4 = 0;
                    /* Unresolved local var: uintptr ptr@[???] */
          while (lVar4 < (long)uVar2) {
            *(long *)((long)register0x00000020 + -0x18) = lVar4;
            *(runtime_workbuf **)((long)register0x00000020 + -0x50) = (&w[0x92].wbuf1)[lVar4];
            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4e17c6;
            runtime_shade((uintptr)w);
            w = *(runtime_gcWork **)((long)register0x00000020 + 8);
            uVar2 = *(ulong *)((long)register0x00000020 + -0x10);
            lVar4 = *(long *)((long)register0x00000020 + -0x18) + 1;
          }
          *(int64 **)((long)register0x00000020 + -0x50) = &w[0x91].scanWork;
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4e17ed;
          runtime___wbBuf__reset((runtime_wbBuf *)&w[0x91].scanWork);
          return;
        }
        lVar4 = 0;
        refBase = 0;
                    /* Unresolved local var: uintptr ptr@[???] */
        do {
          if ((long)uVar2 <= lVar4) {
            if (refBase < 0x201) {
              *(int64 **)((long)register0x00000020 + -0x50) = &w[0x90].scanWork;
              *(runtime_gcWork **)((long)register0x00000020 + -0x48) = w + 0x92;
              *(uintptr *)((long)register0x00000020 + -0x40) = refBase;
              *(undefined8 *)((long)register0x00000020 + -0x38) = 0x200;
              *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4e19ba;
              obj.len = (int)(w + 0x92);
              obj.array = (uintptr *)refBase;
              obj.cap = in_RDI;
              runtime___gcWork__putBatch(w,obj);
              *(runtime_wbBuf **)((long)register0x00000020 + -0x50) =
                   (runtime_wbBuf *)(*(long *)((long)register0x00000020 + 8) + 0x16c0);
              *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4e19ce;
              runtime___wbBuf__reset
                        ((runtime_wbBuf *)(*(long *)((long)register0x00000020 + 8) + 0x16c0));
              return;
            }
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4e19e5;
            runtime_panicSliceAcap();
          }
          prVar1 = (&w[0x92].wbuf1)[lVar4];
                    /* Unresolved local var: uintptr obj@[???]
                       Unresolved local var: runtime.mspan * span@[???]
                       Unresolved local var: uintptr objIndex@[???]
                       Unresolved local var: runtime.heapArena * arena@[???]
                       Unresolved local var: uintptr pageIdx@[???]
                       Unresolved local var: runtime.markBits mbits@[???] */
          if ((runtime_workbuf *)0xfff < prVar1) {
            *(long *)((long)register0x00000020 + -0x18) = lVar4;
            *(uintptr *)((long)register0x00000020 + -0x20) = refBase;
            *(runtime_workbuf **)((long)register0x00000020 + -0x50) = prVar1;
            *(undefined8 *)((long)register0x00000020 + -0x48) = 0;
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4e1837;
            runtime_findObject((uintptr)w,refBase,uVar2);
            lVar4 = *(long *)((long)register0x00000020 + -0x30);
            prVar1 = *(runtime_workbuf **)((long)register0x00000020 + -0x38);
            if (prVar1 == (runtime_workbuf *)0x0) {
              w = *(runtime_gcWork **)((long)register0x00000020 + 8);
              uVar2 = *(ulong *)((long)register0x00000020 + -0x10);
              lVar4 = *(long *)((long)register0x00000020 + -0x18);
              refBase = *(uintptr *)((long)register0x00000020 + -0x20);
            }
            else {
                    /* Unresolved local var: uint8 * bytep@[???] */
              uVar8 = 1 << ((byte)*(ulong *)((long)register0x00000020 + -0x28) & 7);
              in_RDI = (ulong)uVar8;
              pbVar5 = (byte *)((*(ulong *)((long)register0x00000020 + -0x28) >> 3) +
                               *(long *)(lVar4 + 0x50));
              bVar7 = (byte)uVar8;
              if ((bVar7 & *pbVar5) == 0) {
                LOCK();
                *pbVar5 = *pbVar5 | bVar7;
                UNLOCK();
                uVar2 = *(ulong *)(lVar4 + 0x18);
                in_RDI = 0x800000000000;
                uVar9 = uVar2 + 0x800000000000 >> 0x1a;
                if (0x3fffff < uVar9) {
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4e19f7;
                  runtime_panicIndexU();
                }
                uVar3 = uVar2 >> 0x10 & 0x3ff;
                bVar7 = (byte)(1 << ((byte)(uVar2 >> 0xd) & 7));
                if ((bVar7 & (&DAT_00210400)
                             [(long)((*runtime_mheap_.arenas[0])[uVar9]->bitmap + uVar3)]) == 0) {
                  LOCK();
                  (&DAT_00210400)[(long)((*runtime_mheap_.arenas[0])[uVar9]->bitmap + uVar3)] =
                       (&DAT_00210400)[(long)((*runtime_mheap_.arenas[0])[uVar9]->bitmap + uVar3)] |
                       bVar7;
                  UNLOCK();
                }
                if ((*(byte *)(lVar4 + 0x62) & 1) == 0) {
                  uVar9 = *(ulong *)((long)register0x00000020 + -0x20);
                  uVar2 = *(ulong *)((long)register0x00000020 + -0x10);
                  if (uVar2 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4e19ea;
                    runtime_panicIndex();
                  }
                  w = *(runtime_gcWork **)((long)register0x00000020 + 8);
                  (&w[0x92].wbuf1)[uVar9] = prVar1;
                  refBase = uVar9 + 1;
                  lVar4 = *(long *)((long)register0x00000020 + -0x18);
                }
                else {
                  w = *(runtime_gcWork **)((long)register0x00000020 + 8);
                  w[0x91].wbuf1 =
                       (runtime_workbuf *)
                       ((long)(w[0x91].wbuf1)->obj + *(long *)(lVar4 + 0x68) + -0x18);
                  uVar2 = *(ulong *)((long)register0x00000020 + -0x10);
                  lVar4 = *(long *)((long)register0x00000020 + -0x18);
                  refBase = *(uintptr *)((long)register0x00000020 + -0x20);
                }
              }
              else {
                w = *(runtime_gcWork **)((long)register0x00000020 + 8);
                uVar2 = *(ulong *)((long)register0x00000020 + -0x10);
                lVar4 = *(long *)((long)register0x00000020 + -0x18);
                refBase = *(uintptr *)((long)register0x00000020 + -0x20);
              }
            }
          }
          lVar4 = lVar4 + 1;
        } while( true );
      }
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4e1a05;
      runtime_panicSliceAlenU();
    }
    *(undefined8 *)(puVar6 + -8) = 0x4e1a0b;
    runtime_morestackc();
    register0x00000020 = (BADSPACEBASE *)puVar6;
  } while( true );
}


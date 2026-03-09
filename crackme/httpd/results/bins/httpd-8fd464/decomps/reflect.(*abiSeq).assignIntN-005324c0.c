
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*abiSeq).assignIntN(reflect.abiSeq * a, uintptr offset,
   uintptr size, int n, uint8 ptrMap, bool ~r4) */

bool reflect___abiSeq__assignIntN(reflect_abiSeq *a,uintptr offset,uintptr size,int n,uint8 ptrMap)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_RAX;
  long lVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  undefined1 *puVar8;
  undefined1 *unaff_RBP;
  long *cap;
  long lVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  interface___ e;
  interface___ e_00;
  runtime_slice old;
  reflect_abiSeq *a_spill;
  uintptr offset_spill;
  uintptr size_spill;
  int n_spill;
  uint8 ptrMap_spill;
  
  do {
    puVar8 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar8 = (undefined1 *)((long)register0x00000020 + -0x80);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      uVar3 = *(ulong *)((long)register0x00000020 + 0x20);
      if (uVar3 < 9) {
        bVar7 = *(byte *)((long)register0x00000020 + 0x28);
        if (bVar7 == 0) {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: reflect.abiStepKind kind@[???] */
          offset = *(undefined8 *)((long)register0x00000020 + 0x18);
LAB_0053251a:
          cap = *(long **)((long)register0x00000020 + 8);
          if ((long)(cap[7] + uVar3) <= reflect_intArgRegs) {
            lVar9 = *(long *)((long)register0x00000020 + 0x10);
            for (uVar5 = 0; (long)uVar5 < (long)uVar3; uVar5 = uVar5 + 1) {
              *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
              *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
              *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
              *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
              *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
              *(undefined8 *)((long)register0x00000020 + -0x10) = 0;
              uVar10 = 2;
              if ((bVar7 & (byte)(1 << ((byte)uVar5 & 0x1f)) & -(uVar5 < 0x20)) != 0) {
                uVar10 = 3;
              }
              *(undefined8 *)((long)register0x00000020 + -0x38) = uVar10;
              old.len = uVar5 * offset;
              *(long *)((long)register0x00000020 + -0x30) = lVar9 + old.len;
              *(uintptr *)((long)register0x00000020 + -0x28) = offset;
              *(long *)((long)register0x00000020 + -0x18) = cap[7];
              lVar6 = cap[1];
              lVar4 = *cap;
              uVar2 = cap[2];
              if (uVar2 < lVar6 + 1U) {
                *(ulong *)((long)register0x00000020 + -0x40) = uVar5;
                *(undefined **)((long)register0x00000020 + -0x80) = &DAT_0026e2a0;
                *(long *)((long)register0x00000020 + -0x78) = lVar4;
                *(long *)((long)register0x00000020 + -0x70) = lVar6;
                *(ulong *)((long)register0x00000020 + -0x68) = uVar2;
                *(ulong *)((long)register0x00000020 + -0x60) = lVar6 + 1U;
                *(undefined8 *)((long)register0x00000020 + -0x88) = 0x532652;
                old.array = (void *)offset;
                old.cap = lVar9;
                runtime_growslice((runtime__type *)&DAT_0026e2a0,old,(int)cap);
                lVar4 = *(long *)((long)register0x00000020 + -0x58);
                lVar6 = *(long *)((long)register0x00000020 + -0x50);
                cap = *(long **)((long)register0x00000020 + 8);
                cap[2] = *(long *)((long)register0x00000020 + -0x48);
                if (runtime_writeBarrier._0_4_ == 0) {
                  *cap = lVar4;
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -0x88) = 0x532685;
                  runtime_gcWriteBarrier();
                  lVar4 = extraout_RAX;
                }
                bVar7 = *(byte *)((long)register0x00000020 + 0x28);
                offset = *(undefined8 *)((long)register0x00000020 + 0x18);
                lVar9 = *(long *)((long)register0x00000020 + 0x10);
                uVar5 = *(ulong *)((long)register0x00000020 + -0x40);
                uVar3 = *(ulong *)((long)register0x00000020 + 0x20);
              }
              cap[1] = lVar6 + 1;
              puVar1 = (undefined8 *)(lVar4 + lVar6 * 0x30);
              uVar10 = *(undefined8 *)((long)register0x00000020 + -0x30);
              *puVar1 = *(undefined8 *)((long)register0x00000020 + -0x38);
              puVar1[1] = uVar10;
              lVar4 = lVar4 + lVar6 * 0x30;
              uVar10 = *(undefined8 *)((long)register0x00000020 + -0x20);
              *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)((long)register0x00000020 + -0x28);
              *(undefined8 *)(lVar4 + 0x18) = uVar10;
              uVar10 = *(undefined8 *)((long)register0x00000020 + -0x10);
              *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)((long)register0x00000020 + -0x18);
              *(undefined8 *)(lVar4 + 0x28) = uVar10;
              cap[7] = cap[7] + 1;
            }
            *(undefined1 *)((long)register0x00000020 + 0x30) = 1;
            return SUB81(uVar3,0);
          }
          *(undefined1 *)((long)register0x00000020 + 0x30) = 0;
          return SUB81(uVar3,0);
        }
        offset = *(undefined8 *)((long)register0x00000020 + 0x18);
        if ((undefined1 *)offset == &DAT_00000008) goto LAB_0053251a;
        *(undefined **)((long)register0x00000020 + -0x80) = &DAT_00225520;
        *(undefined1 **)((long)register0x00000020 + -0x78) = reflect__stmp_7;
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x5326ec;
        e.data = (void *)offset;
        e._type = (runtime__type *)reflect__stmp_7;
        runtime_gopanic(e);
      }
      *(undefined **)((long)register0x00000020 + -0x80) = &DAT_00225520;
      *(undefined ***)((long)register0x00000020 + -0x78) = &reflect__stmp_1;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x532708;
      e_00.data = (void *)offset;
      e_00._type = (runtime__type *)&reflect__stmp_1;
      runtime_gopanic(e_00);
    }
    *(undefined8 *)(puVar8 + -8) = 0x53270e;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar8;
  } while( true );
}


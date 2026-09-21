
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void io.discard.ReadFrom(io.Reader r, int64 n, error err) */

multireturn_int64_error__conflict io_discard_ReadFrom(io_Reader r)

{
  runtime__type *prVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  runtime_itab *y;
  undefined1 *puVar8;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ iVar9;
  multireturn_int64_error__conflict mVar10;
  multireturn_int64_error__conflict mVar11;
  io_Reader r_spill;
  
  do {
                    /* Unresolved local var: []uint8 * bufp@[???] */
    puVar8 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar8 = (undefined1 *)((long)register0x00000020 + -0x78);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      *(sync_Pool **)((long)register0x00000020 + -0x78) = &io_blackHolePool;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x5441b1;
      iVar9 = sync___Pool__Get(&io_blackHolePool);
      puVar6 = *(undefined8 **)((long)register0x00000020 + -0x68);
      prVar1 = *(runtime__type **)((long)register0x00000020 + -0x70);
      if (prVar1 == (runtime__type *)&DAT_00219520) {
        *(undefined8 **)((long)register0x00000020 + -0x30) = puVar6;
        lVar7 = 0;
        while( true ) {
          *(long *)((long)register0x00000020 + -0x38) = lVar7;
          pcVar2 = *(code **)(*(long *)((long)register0x00000020 + 8) + 0x18);
          uVar3 = *puVar6;
          uVar4 = puVar6[1];
          uVar5 = puVar6[2];
          *(undefined8 *)((long)register0x00000020 + -0x78) =
               *(undefined8 *)((long)register0x00000020 + 0x10);
          *(undefined8 *)((long)register0x00000020 + -0x70) = uVar3;
          *(undefined8 *)((long)register0x00000020 + -0x68) = uVar4;
          *(undefined8 *)((long)register0x00000020 + -0x60) = uVar5;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x544215;
          (*pcVar2)();
          lVar7 = *(long *)((long)register0x00000020 + -0x38) +
                  *(long *)((long)register0x00000020 + -0x58);
          prVar1 = *(runtime__type **)((long)register0x00000020 + -0x50);
          if (*(long *)((long)register0x00000020 + -0x50) != 0) break;
          puVar6 = *(undefined8 **)((long)register0x00000020 + -0x30);
        }
        *(undefined8 *)((long)register0x00000020 + -0x10) =
             *(undefined8 *)((long)register0x00000020 + -0x48);
        *(runtime__type **)((long)register0x00000020 + -0x18) = prVar1;
        *(long *)((long)register0x00000020 + -0x40) = lVar7;
        *(undefined8 *)((long)register0x00000020 + -0x20) =
             *(undefined8 *)((long)register0x00000020 + -0x48);
        *(void **)((long)register0x00000020 + -0x28) = *(void **)((long)register0x00000020 + -0x50);
        *(sync_Pool **)((long)register0x00000020 + -0x78) = &io_blackHolePool;
        *(undefined8 **)((long)register0x00000020 + -0x70) = &DAT_00219520;
        *(sync_Pool **)((long)register0x00000020 + -0x68) =
             *(sync_Pool **)((long)register0x00000020 + -0x30);
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x54427a;
        iVar9.data = *(void **)((long)register0x00000020 + -0x50);
        iVar9._type = prVar1;
        sync___Pool__Put(*(sync_Pool **)((long)register0x00000020 + -0x30),iVar9);
        y = *(runtime_itab **)((long)register0x00000020 + -0x28);
        if (io_EOF.tab == y) {
          *(runtime_itab **)((long)register0x00000020 + -0x78) = y;
          y = *(runtime_itab **)((long)register0x00000020 + -0x20);
          *(runtime_itab **)((long)register0x00000020 + -0x70) = y;
          *(void **)((long)register0x00000020 + -0x68) = io_EOF.data;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x5442a7;
          runtime_ifaceeq(io_EOF.data,prVar1,y);
          if (*(char *)((long)register0x00000020 + -0x60) != '\0') {
            *(undefined8 *)((long)register0x00000020 + 0x18) =
                 *(undefined8 *)((long)register0x00000020 + -0x40);
            *(undefined8 *)((long)register0x00000020 + 0x20) = 0;
            *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
            mVar11.err.tab = (runtime_itab *)prVar1;
            mVar11.n = *(undefined8 *)((long)register0x00000020 + -0x40);
            mVar11.err.data = y;
            return mVar11;
          }
        }
        *(undefined8 *)((long)register0x00000020 + 0x18) =
             *(undefined8 *)((long)register0x00000020 + -0x40);
        *(undefined8 *)((long)register0x00000020 + 0x20) =
             *(undefined8 *)((long)register0x00000020 + -0x18);
        *(undefined8 *)((long)register0x00000020 + 0x28) =
             *(undefined8 *)((long)register0x00000020 + -0x10);
        mVar10.err.tab = (runtime_itab *)prVar1;
        mVar10.n = *(undefined8 *)((long)register0x00000020 + -0x10);
        mVar10.err.data = y;
        return mVar10;
      }
      *(runtime__type **)((long)register0x00000020 + -0x78) = prVar1;
      *(undefined8 **)((long)register0x00000020 + -0x70) = &DAT_00219520;
      *(undefined8 **)((long)register0x00000020 + -0x68) = &DAT_0022dfe0;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x54431d;
      runtime_panicdottypeE((runtime__type *)&DAT_0022dfe0,iVar9.data,prVar1);
    }
    *(undefined8 *)(puVar8 + -8) = 0x544325;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar8;
  } while( true );
}



/* WARNING: Unknown calling convention */

void sync___WaitGroup__Add(sync_WaitGroup *wg,int delta)

{
  void *pvVar1;
  ulong *addr;
  ulong *skipframes;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  interface___ e_00;
  interface___ e_01;
  sync_WaitGroup *wg_spill;
  int delta_spill;
  
  do {
                    /* Unresolved local var: uint64 * statep@[???]
                       Unresolved local var: uint32 * semap@[???]
                       Unresolved local var: uint64 state@[???]
                       Unresolved local var: uint32 w@[???] */
    puVar4 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar4 = (undefined1 *)((long)register0x00000020 + -0x30);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      skipframes = *(ulong **)((long)register0x00000020 + 8);
      if (((ulong)skipframes & 7) == 0) {
        addr = skipframes + 1;
      }
      else {
        skipframes = (ulong *)((long)skipframes + 4);
        addr = *(ulong **)((long)register0x00000020 + 8);
      }
      pvVar1 = *(void **)((long)register0x00000020 + 0x10);
      LOCK();
      uVar3 = *skipframes;
      *skipframes = *skipframes + ((long)pvVar1 << 0x20);
      UNLOCK();
      uVar3 = uVar3 + ((long)pvVar1 << 0x20);
      if (-1 < (long)uVar3) {
        iVar2 = (int)(uVar3 >> 0x20);
        if ((((int)uVar3 == 0) || ((long)pvVar1 < 1)) || ((int)pvVar1 != iVar2)) {
          if ((iVar2 != 0 && -1 < (long)uVar3) || ((int)uVar3 == 0)) {
            return;
          }
          if (*skipframes == uVar3) {
            *(ulong **)((long)register0x00000020 + -0x10) = addr;
            *skipframes = 0;
            while ((int)uVar3 != 0) {
              *(int *)((long)register0x00000020 + -0x14) = (int)uVar3;
              *(ulong **)((long)register0x00000020 + -0x30) = addr;
              *(undefined1 *)((long)register0x00000020 + -0x28) = 0;
              *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
              *(undefined8 *)((long)register0x00000020 + -0x38) = 0x52bb87;
              sync_runtime_Semrelease((uint32 *)addr,SUB81(pvVar1,0),(int)skipframes);
              addr = *(ulong **)((long)register0x00000020 + -0x10);
              uVar3 = (ulong)(*(int *)((long)register0x00000020 + -0x14) - 1);
            }
            return;
          }
          *(undefined **)((long)register0x00000020 + -0x30) = &DAT_00225520;
          *(undefined1 **)((long)register0x00000020 + -0x28) = sync__stmp_5;
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0x52bbbd;
          e.data = pvVar1;
          e._type = (runtime__type *)sync__stmp_5;
          runtime_gopanic(e);
        }
        *(undefined **)((long)register0x00000020 + -0x30) = &DAT_00225520;
        *(undefined1 **)((long)register0x00000020 + -0x28) = sync__stmp_5;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x52bbd9;
        e_00.data = pvVar1;
        e_00._type = (runtime__type *)sync__stmp_5;
        runtime_gopanic(e_00);
      }
      *(undefined **)((long)register0x00000020 + -0x30) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x28) = &sync__stmp_4;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x52bbf5;
      e_01.data = pvVar1;
      e_01._type = (runtime__type *)&sync__stmp_4;
      runtime_gopanic(e_01);
    }
    *(undefined8 *)(puVar4 + -8) = 0x52bbfb;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar4;
  } while( true );
}


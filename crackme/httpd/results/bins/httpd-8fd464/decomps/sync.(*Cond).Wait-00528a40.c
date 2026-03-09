
/* WARNING: Unknown calling convention */

void sync___Cond__Wait(sync_Cond *c)

{
  long lVar1;
  runtime_notifyList *l;
  long lVar2;
  code *pcVar3;
  void *pvVar4;
  undefined1 *puVar5;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  bool bVar6;
  interface___ e;
  sync_Cond *c_spill;
  
  do {
                    /* Unresolved local var: uint32 t@[???] */
    puVar5 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar5 = (undefined1 *)((long)register0x00000020 + -0x28);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar2 = *(long *)((long)register0x00000020 + 8);
      lVar1 = lVar2 + 0x30;
      if (*(long *)(lVar2 + 0x30) == lVar1) {
        pvVar4 = (void *)0x0;
      }
      else {
        LOCK();
        bVar6 = *(long *)(lVar2 + 0x30) == 0;
        if (bVar6) {
          *(long *)(lVar2 + 0x30) = lVar1;
        }
        UNLOCK();
        pvVar4 = (void *)(ulong)((uint)CONCAT71((int7)((ulong)lVar1 >> 8),bVar6) ^ 1);
      }
      if (((char)pvVar4 == '\0') || (*(long *)(lVar2 + 0x30) == lVar1)) {
        l = (runtime_notifyList *)(lVar2 + 0x10);
        *(runtime_notifyList **)((long)register0x00000020 + -0x10) = l;
        *(runtime_notifyList **)((long)register0x00000020 + -0x28) = l;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x528aa7;
        sync_runtime_notifyListAdd(l);
        lVar1 = **(long **)((long)register0x00000020 + 8);
        *(undefined4 *)((long)register0x00000020 + -0x14) =
             *(undefined4 *)((long)register0x00000020 + -0x20);
        lVar2 = (*(long **)((long)register0x00000020 + 8))[1];
        pcVar3 = *(code **)(lVar1 + 0x20);
        *(long *)((long)register0x00000020 + -0x28) = lVar2;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x528ac5;
        (*pcVar3)();
        *(undefined8 *)((long)register0x00000020 + -0x28) =
             *(undefined8 *)((long)register0x00000020 + -0x10);
        *(uint *)((long)register0x00000020 + -0x20) = *(uint *)((long)register0x00000020 + -0x14);
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x528adb;
        sync_runtime_notifyListWait
                  ((runtime_notifyList *)(ulong)*(uint *)((long)register0x00000020 + -0x14),
                   (uint32)lVar2);
        pcVar3 = *(code **)(**(long **)((long)register0x00000020 + 8) + 0x18);
        *(long *)((long)register0x00000020 + -0x28) = (*(long **)((long)register0x00000020 + 8))[1];
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x528af1;
        (*pcVar3)();
        return;
      }
      *(undefined **)((long)register0x00000020 + -0x28) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x20) = sync__stmp_0;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x528b17;
      e.data = pvVar4;
      e._type = (runtime__type *)sync__stmp_0;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar5 + -8) = 0x528b1d;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar5;
  } while( true );
}


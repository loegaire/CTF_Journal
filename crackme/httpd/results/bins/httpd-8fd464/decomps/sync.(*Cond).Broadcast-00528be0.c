
/* WARNING: Unknown calling convention */

void sync___Cond__Broadcast(sync_Cond *c)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  undefined1 *puVar4;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  bool bVar5;
  interface___ e;
  sync_Cond *c_spill;
  
  do {
    puVar4 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar4 = (undefined1 *)((long)register0x00000020 + -0x18);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar2 = *(long *)((long)register0x00000020 + 8);
      lVar1 = lVar2 + 0x30;
      if (*(long *)(lVar2 + 0x30) == lVar1) {
        pvVar3 = (void *)0x0;
      }
      else {
        LOCK();
        bVar5 = *(long *)(lVar2 + 0x30) == 0;
        if (bVar5) {
          *(long *)(lVar2 + 0x30) = lVar1;
        }
        UNLOCK();
        pvVar3 = (void *)(ulong)((uint)CONCAT71((int7)((ulong)lVar1 >> 8),bVar5) ^ 1);
      }
      if (((char)pvVar3 == '\0') || (*(long *)(lVar2 + 0x30) == lVar1)) {
        *(runtime_notifyList **)((long)register0x00000020 + -0x18) =
             (runtime_notifyList *)(lVar2 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x528c3e;
        sync_runtime_notifyListNotifyAll((runtime_notifyList *)(lVar2 + 0x10));
        return;
      }
      *(undefined **)((long)register0x00000020 + -0x18) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x10) = sync__stmp_0;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x528c65;
      e.data = pvVar3;
      e._type = (runtime__type *)sync__stmp_0;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar4 + -8) = 0x528c6b;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar4;
  } while( true );
}


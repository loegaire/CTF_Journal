
/* WARNING: Unknown calling convention */

void context_propagateCancel(context_Context parent,context_canceler child)

{
  runtime_hmap *h;
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  sync_Mutex *m;
  undefined7 uVar7;
  long in_FS_OFFSET;
  context_Context parent_00;
  multireturn_context_cancelCtx___bool_ mVar5;
  multireturn_bool_bool_ mVar6;
  context_Context parent_spill;
  context_canceler child_spill;
  runtime_hmap *local_58;
  long local_50;
  void *local_48;
  char local_40;
  runtime_funcval *fn;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  pvVar4 = (void *)(*(code *)parent_spill.tab[1].inter)();
  if (local_50 != 0) {
    mVar6 = runtime_selectnbrecv(pvVar4,parent.data);
    register0x00000019 = parent.data._1_7_;
    parent_00.data._0_1_ = mVar6.received;
    if ((char)local_48 == '\0') {
                    /* Unresolved local var: context.cancelCtx * p@[???] */
      local_58 = (runtime_hmap *)parent_spill.tab;
      parent_00.tab = parent_spill.tab;
      mVar5 = context_parentCancelCtx(parent_00);
      fn = (runtime_funcval *)CONCAT71(register0x00000019,mVar5.~r2);
      if (local_40 == '\0') {
        LOCK();
        context_goroutines = context_goroutines + 1;
        UNLOCK();
        runtime_newproc((int32)child_spill.data,fn);
      }
      else {
        m = (sync_Mutex *)0x0;
        LOCK();
        uVar2 = *(uint *)((long)local_48 + 0x10);
        if (uVar2 == 0) {
          *(uint *)((long)local_48 + 0x10) = 1;
        }
        else {
          m = (sync_Mutex *)(ulong)uVar2;
        }
        UNLOCK();
        h = (runtime_hmap *)((long)local_48 + 0x10);
        if (uVar2 != 0) {
          sync___Mutex__lockSlow(m);
                    /* Unresolved local var: int32 new@[???] */
          local_58 = h;
        }
        if (*(long *)((long)local_48 + 0x30) == 0) {
          pvVar4 = local_48;
          if (*(long *)((long)local_48 + 0x28) == 0) {
            runtime_makemap_small();
            if (runtime_writeBarrier._0_4_ == 0) {
              *(runtime_hmap **)((long)local_48 + 0x28) = local_58;
            }
            else {
              runtime_gcWriteBarrier();
            }
          }
          runtime_mapassign((runtime_maptype *)&stack0xffffffffffffffe8,h,pvVar4);
          child_spill.data = h;
        }
        else {
          (*(code *)child_spill.tab[1].inter)();
        }
        LOCK();
        piVar1 = (int *)((long)local_48 + 0x10);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 - 1U != 0) {
          sync___Mutex__unlockSlow((sync_Mutex *)(ulong)(iVar3 - 1U),(int32)child_spill.data);
        }
      }
      return;
    }
    (*(code *)parent_spill.tab[1]._type)();
    (*(code *)child_spill.tab[1].inter)();
    return;
  }
  return;
}



/* WARNING: Unknown calling convention */

void runtime_cgocallbackg1(void *fn,void *frame,uintptr ctxt)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  runtime_slice old;
  void *fn_spill;
  void *frame_spill;
  uintptr ctxt_spill;
  long local_80;
  long local_78;
  ulong local_70;
  undefined1 local_63;
  byte local_62;
  byte local_61;
  ulong local_60;
  ulong local_58;
  long local_48;
  long local_40;
  void *local_38;
  undefined1 *local_30;
  undefined **ppuStack_28;
  void *local_20;
  undefined **ppuStack_18;
  undefined **local_10;
  
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: bool restore@[???]
                       Unresolved local var: runtime.funcval cbFV@[???] */
  while (&ppuStack_28 <= *(undefined ****)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_30 = (undefined1 *)0x0;
  ppuStack_28 = (undefined **)0x0;
  local_20 = (void *)0x0;
  ppuStack_18 = (undefined **)0x0;
  local_38 = *(void **)(in_FS_OFFSET + -8);
  local_10 = &PTR_runtime_unlockOSThread_002b3a78;
  local_61 = 1;
  if ((*(char *)(*(long *)((long)local_38 + 0x30) + 0x130) != '\0') || (runtime_extraMWaiters != 0))
  {
    *(undefined1 *)(*(long *)((long)local_38 + 0x30) + 0x130) = 0;
    runtime_systemstack();
                    /* Unresolved local var: []uintptr s@[???] */
  }
  if (ctxt_spill == 0) {
    local_62 = 1;
  }
  else {
    lVar2 = *(long *)((long)local_38 + 0x158);
    uVar3 = lVar2 + 1;
    uVar4 = *(ulong *)((long)local_38 + 0x160);
    lVar5 = *(long *)((long)local_38 + 0x150);
    if (*(ulong *)((long)local_38 + 0x160) < uVar3) {
      old.len = ctxt;
      old.array = local_38;
      old.cap = lVar2;
      local_48 = lVar2;
      runtime_growslice((runtime__type *)&DAT_00225760,old,ctxt_spill);
      uVar3 = local_78 + 1;
      lVar2 = local_48;
      uVar4 = local_70;
      lVar5 = local_80;
    }
    *(uintptr *)(lVar5 + lVar2 * 8) = ctxt_spill;
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (runtime_writeBarrier.enabled != false) {
      local_60 = uVar3;
      local_58 = uVar4;
      local_40 = lVar5;
      runtime_atomicwb((void **)((long)local_38 + 0x150),local_38);
      uVar3 = local_60;
      uVar4 = local_58;
      lVar5 = local_40;
    }
    LOCK();
    *(long *)((long)local_38 + 0x150) = lVar5;
    UNLOCK();
    *(ulong *)((long)local_38 + 0x160) = uVar4;
    *(ulong *)((long)local_38 + 0x158) = uVar3;
    ppuStack_18 = &PTR_runtime_cgocallbackg1_func1_002b37a0;
    local_61 = 3;
    local_62 = 3;
    local_20 = local_38;
  }
  if (*(int *)(*(long *)((long)local_38 + 0x30) + 0x140) == 0) {
    runtime_chanrecv1((runtime_hchan *)runtime_main_init_done,local_38);
  }
  local_63 = 1;
  ppuStack_28 = &PTR_runtime_unwindm_002b3a88;
  local_30 = &local_63;
  local_62 = local_62 | 4;
  local_61 = local_62;
  (*fn_spill)();
  local_63 = 0;
  if ((local_62 & 4) != 0) {
    uVar1 = (uint)local_62;
    local_62 = (byte)(uVar1 & 0xfffffffb);
    local_61 = local_62;
    runtime_unwindm((bool *)(ulong)(uVar1 & 0xfffffffb));
  }
  if ((local_62 & 2) != 0) {
    uVar1 = (uint)local_62;
    local_62 = (byte)(uVar1 & 0xfffffffd);
    local_61 = local_62;
    runtime_cgocallbackg1_func1((runtime_g *)(ulong)(uVar1 & 0xfffffffd));
  }
  if ((local_62 & 1) != 0) {
    local_61 = local_62 & 0xfe;
    runtime_unlockOSThread();
  }
  return;
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.newdefer(int32 siz, runtime._defer * ~r1) */

runtime__defer * runtime_newdefer(int32 siz)

{
  long lVar1;
  ulong extraout_RAX;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  int32 siz_spill;
  runtime__defer *d;
  long local_40;
  code *local_38;
  runtime__defer **local_28;
  code *local_20;
  long lStack_18;
  ulong local_10;
  
                    /* Unresolved local var: uintptr sc@[???]
                       Unresolved local var: runtime.g * gp@[???] */
  d = (runtime__defer *)0x0;
  if ((ulong)(long)siz_spill < 9) {
    uVar3 = 0;
  }
  else {
    uVar3 = (long)siz_spill + 7U >> 4;
  }
  if (uVar3 < 5) {
                    /* Unresolved local var: runtime.p * pp@[???] */
    lVar4 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
    lVar5 = uVar3 * 3;
    if ((*(long *)(lVar4 + 0x70 + uVar3 * 0x18) == 0) &&
       (runtime_sched.deferpool[uVar3] != (runtime__defer *)0x0)) {
      local_20 = runtime_newdefer_func1;
      local_40 = lVar4;
      lStack_18 = lVar4;
      local_10 = uVar3;
      runtime_systemstack();
                    /* Unresolved local var: int n@[???] */
      lVar4 = local_40;
    }
    lVar1 = *(long *)(lVar4 + 0x70 + uVar3 * 0x18);
    if (0 < lVar1) {
      d = *(runtime__defer **)(*(long *)(lVar4 + 0x68 + uVar3 * 0x18) + -8 + lVar1 * 8);
      uVar2 = lVar1 - 1;
      if (*(ulong *)(lVar4 + 0x70 + uVar3 * 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (runtime_writeBarrier._0_4_ == 0) {
        *(undefined8 *)(*(long *)(lVar4 + 0x68 + uVar3 * 0x18) + -8 + lVar1 * 8) = 0;
      }
      else {
        runtime_gcWriteBarrierSI();
        uVar2 = extraout_RAX;
      }
      if (*(ulong *)(lVar4 + 0x78 + lVar5 * 8) < uVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      *(ulong *)(lVar4 + 0x70 + lVar5 * 8) = uVar2;
    }
  }
  if (d == (runtime__defer *)0x0) {
    local_38 = runtime_newdefer_func2;
    local_28 = &d;
    runtime_systemstack();
  }
  d->siz = siz_spill;
  d->heap = true;
  return d;
}


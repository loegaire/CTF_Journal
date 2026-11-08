
/* WARNING: Unknown calling convention */

void runtime_scanblock(uintptr b0,uintptr n0,uint8 *ptrmask,runtime_gcWork *gcw,
                      runtime_stackScanState *stk)

{
  ulong uVar1;
  runtime_gcWork *base;
  ulong refBase;
  runtime_gcWork *gcw_00;
  runtime_mspan *prVar2;
  runtime_mspan *span;
  ulong objIndex;
  long in_FS_OFFSET;
  multireturn_uintptr_runtime_mspan___uintptr_ mVar3;
  uintptr b;
  uintptr n;
  uint8 *ptrmask_spill;
  runtime_gcWork *gcw_spill;
  runtime_stackScanState *stk_spill;
  runtime_gcWork *local_40;
  runtime_gcWork *local_38;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: uintptr i@[???] */
  base = (runtime_gcWork *)0x0;
  while (base < n) {
                    /* Unresolved local var: uint32 bits@[???] */
    refBase = (ulong)ptrmask_spill[(ulong)base >> 6];
    if (ptrmask_spill[(ulong)base >> 6] == 0) {
      base = (runtime_gcWork *)&base[1].scanWork;
    }
    else {
      prVar2 = (runtime_mspan *)0x0;
      for (; ((long)prVar2 < 8 && (base < n)); base = (runtime_gcWork *)&base->wbuf2) {
                    /* Unresolved local var: uintptr p@[???] */
        if (((refBase & 1) != 0) && (uVar1 = *(ulong *)((long)&base->wbuf1 + b), uVar1 != 0)) {
          gcw_00 = base;
          span = prVar2;
          objIndex = uVar1;
                    /* Unresolved local var: uintptr obj@[???]
                       Unresolved local var: runtime.mspan * span@[???]
                       Unresolved local var: uintptr objIndex@[???] */
          mVar3 = runtime_findObject((uintptr)ptrmask_spill,refBase,n);
          if (local_40 == (runtime_gcWork *)0x0) {
            if (((stk_spill != (runtime_stackScanState *)0x0) && ((stk_spill->stack).lo <= uVar1))
               && (uVar1 < (stk_spill->stack).hi)) {
              runtime___stackScanState__putPtr(stk_spill,(uintptr)mVar3.s,SUB81(uVar1,0));
            }
          }
          else {
            local_40 = local_38;
            local_38 = gcw_spill;
            runtime_greyobject(b,(uintptr)base,(uintptr)gcw_spill,span,gcw_00,objIndex);
          }
        }
                    /* Unresolved local var: int j@[???] */
        prVar2 = (runtime_mspan *)((long)&prVar2->next + 1);
        refBase = refBase >> 1;
      }
    }
  }
  return;
}


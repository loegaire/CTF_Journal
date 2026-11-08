
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*mheap).alloc(runtime.mheap * h, uintptr npages,
   runtime.spanClass spanclass, bool needzero, runtime.mspan * ~r3, bool ~r4) */

multireturn_runtime_mspan___bool_
runtime___mheap__alloc(runtime_mheap *h,uintptr npages,runtime_spanClass spanclass,bool needzero)

{
  runtime_mspan *prVar1;
  long in_FS_OFFSET;
  multireturn_runtime_mspan___bool_ mVar2;
  runtime_mheap *h_spill;
  uintptr npages_spill;
  runtime_spanClass spanclass_spill;
  bool needzero_spill;
  runtime_mspan *s;
  code *local_30;
  ulong local_18;
  runtime_mspan **pprStack_10;
  
  mVar2.~r4 = SUB81(npages,0);
                    /* Unresolved local var: bool isZeroed@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  s = (runtime_mspan *)0x0;
  local_30 = runtime___mheap__alloc_func1;
  local_18 = (ulong)spanclass_spill;
  pprStack_10 = &s;
  runtime_systemstack();
  if (s != (runtime_mspan *)0x0) {
    if ((needzero_spill) && (s->needzero != 0)) {
      runtime_memclrNoHeapPointers();
      prVar1 = (runtime_mspan *)0x1;
    }
    else {
      prVar1 = (runtime_mspan *)CONCAT71((int7)((ulong)s >> 8),s->needzero == 0);
    }
    s->needzero = 0;
    mVar2.~r3 = prVar1;
    return mVar2;
  }
  return (multireturn_runtime_mspan___bool_)((unkuint9)mVar2.~r4 << 0x40);
}


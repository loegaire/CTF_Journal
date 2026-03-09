
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*mcache).allocLarge(runtime.mcache * c, uintptr size,
   bool needzero, bool noscan, runtime.mspan * ~r3, bool ~r4) */

multireturn_runtime_mspan___bool_
runtime___mcache__allocLarge(runtime_mcache *c,uintptr size,bool needzero,bool noscan)

{
  uintptr spanBytes;
  uint8 *puVar1;
  ulong uVar2;
  int in_RSI;
  runtime_mspan *s;
  undefined7 in_register_00000039;
  undefined8 uVar3;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  multireturn_runtime_mspan___bool_ mVar4;
  runtime_heapBits h;
  __uint64 args;
  runtime_mcache *c_spill;
  uintptr size_spill;
  bool needzero_spill;
  bool noscan_spill;
  runtime_spanSet *local_40;
  ulong local_38;
  uint64 local_10;
  
  uVar3 = CONCAT71(in_register_00000039,noscan);
                    /* Unresolved local var: uintptr npages@[???]
                       Unresolved local var: runtime.mspan * s@[???]
                       Unresolved local var: bool isZeroed@[???]
                       Unresolved local var: runtime.heapStatsDelta * stats@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (size_spill + 0x2000 < size_spill) {
    s_01.len = size;
    s_01.str = &DAT_00295b8f;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_01);
  }
  uVar2 = size_spill >> 0xd;
  if ((size_spill & 0x1fff) != 0) {
    uVar2 = (size_spill >> 0xd) + 1;
  }
  spanBytes = uVar2 * 0x2000;
  runtime_deductSweepCredit(spanBytes,size);
  mVar4 = runtime___mheap__alloc
                    ((runtime_mheap *)(ulong)noscan_spill,size,needzero_spill,SUB81(uVar3,0));
  s_00.len = (runtime_mspan *)CONCAT71((int7)(size >> 8),mVar4.~r4);
  if (local_40 == (runtime_spanSet *)0x0) {
    s_00.str = &DAT_00295b8f;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  runtime___consistentHeapStats__acquire(&runtime_memstats.heapStats);
  LOCK();
  *(long *)(uVar2 + 0x38) = *(long *)(uVar2 + 0x38) + spanBytes;
  UNLOCK();
  LOCK();
  *(long *)(uVar2 + 0x40) = *(long *)(uVar2 + 0x40) + 1;
  UNLOCK();
  runtime___consistentHeapStats__release(&runtime_memstats.heapStats);
  LOCK();
  runtime_gcController.heapLive = runtime_gcController.heapLive + spanBytes;
  UNLOCK();
  if (runtime_trace.enabled != false) {
    args.len = uVar3;
    args.array = (uint64 *)0xcfa850;
    args.cap = in_RSI;
    local_10 = runtime_gcController.heapLive;
    runtime_traceEvent((uint8)&local_10,(int)s_00.len,args);
  }
  if (runtime_gcBlackenEnabled != 0) {
    runtime___gcControllerState__revise(&runtime_gcController);
  }
  if (noscan_spill < 0x88) {
    runtime___spanSet__push(local_40,s_00.len);
    local_40[2].index = local_40->spineCap + size_spill;
                    /* Unresolved local var: runtime.heapArena * ha@[???] */
    uVar2 = local_40->spineCap + 0x800000000000 >> 0x1a;
    if (uVar2 < 0x400000) {
      if ((*runtime_mheap_.arenas[0])[uVar2] == (runtime_heapArena *)0x0) {
        uVar2 = 0;
        s = (runtime_mspan *)0x0;
        puVar1 = (uint8 *)0x0;
      }
      else {
        s = (runtime_mspan *)(local_40->spineCap >> 3 & 3);
        puVar1 = (*runtime_mheap_.arenas[0])[uVar2]->bitmap + 0x1fffff;
      }
      h.shift = (undefined4)uVar2;
      h.bitp = (uint8 *)local_40;
      h.arena = SUB84(puVar1,0);
      h.last = (uint8 *)uVar3;
      runtime_heapBits_initSpan(h,s);
      mVar4.~r3 = (runtime_mspan *)(local_38 & 0xff);
      mVar4.~r4 = SUB81(uVar2,0);
      return mVar4;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndexU();
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}


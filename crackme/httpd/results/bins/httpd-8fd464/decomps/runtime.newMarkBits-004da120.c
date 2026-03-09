
/* WARNING: Removing unreachable block (ram,0x004da302) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.newMarkBits(uintptr nelems, runtime.gcBits * ~r1) */

runtime_gcBits * runtime_newMarkBits(uintptr nelems)

{
  bool bVar1;
  uintptr uVar2;
  runtime_gcBitsArena *prVar3;
  runtime_gcBits *prVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  string s;
  uintptr nelems_spill;
  
                    /* Unresolved local var: runtime.gcBitsArena * head@[???]
                       Unresolved local var: runtime.gcBitsArena * fresh@[???]
                       Unresolved local var: runtime.gcBits * p@[???]
                       Unresolved local var: runtime.gcBits * ~R0@[???] */
  while (prVar3 = runtime_gcBitsArenas.next,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar5 = nelems_spill + 0x3f >> 6;
                    /* Unresolved local var: uintptr end@[???]
                       Unresolved local var: uintptr start@[???] */
  if (runtime_gcBitsArenas.next == (runtime_gcBitsArena *)0x0) {
    bVar1 = true;
  }
  else {
    bVar1 = 0xfff0 < (runtime_gcBitsArenas.next)->free + uVar5 * 8;
  }
  lVar6 = uVar5 * 8;
  if (bVar1) {
                    /* Unresolved local var: uintptr end@[???]
                       Unresolved local var: uintptr start@[???] */
    prVar4 = (runtime_gcBits *)0x0;
                    /* Unresolved local var: runtime.gcBits * p@[???] */
  }
  else {
    LOCK();
    uVar2 = (runtime_gcBitsArenas.next)->free;
    (runtime_gcBitsArenas.next)->free = (runtime_gcBitsArenas.next)->free + lVar6;
    UNLOCK();
    uVar7 = uVar2 + uVar5 * 8;
    if (uVar7 < 0xfff1) {
      uVar7 = uVar7 + uVar5 * -8;
      if (0xffef < uVar7) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      prVar4 = (runtime_gcBits *)((long)prVar3 + uVar7 + 0x10);
    }
    else {
      prVar4 = (runtime_gcBits *)0x0;
    }
  }
  if (prVar4 != (runtime_gcBits *)0x0) {
    return prVar4;
  }
  runtime_lock2(&runtime_gcBitsArenas.lock);
  prVar3 = runtime_gcBitsArenas.next;
                    /* Unresolved local var: runtime.gcBits * p@[???]
                       Unresolved local var: runtime.gcBits * ~R0@[???] */
  if (runtime_gcBitsArenas.next == (runtime_gcBitsArena *)0x0) {
    bVar1 = true;
  }
  else {
    bVar1 = 0xfff0 < (runtime_gcBitsArenas.next)->free + uVar5 * 8;
  }
  if (bVar1) {
                    /* Unresolved local var: uintptr end@[???]
                       Unresolved local var: uintptr start@[???] */
    prVar4 = (runtime_gcBits *)0x0;
  }
  else {
    LOCK();
    uVar2 = (runtime_gcBitsArenas.next)->free;
    (runtime_gcBitsArenas.next)->free = (runtime_gcBitsArenas.next)->free + lVar6;
    UNLOCK();
    uVar7 = uVar2 + uVar5 * 8;
    if (uVar7 < 0xfff1) {
      uVar7 = uVar7 + uVar5 * -8;
      if (0xffef < uVar7) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      prVar4 = (runtime_gcBits *)((long)prVar3 + uVar7 + 0x10);
    }
    else {
      prVar4 = (runtime_gcBits *)0x0;
    }
  }
  if (prVar4 != (runtime_gcBits *)0x0) {
    runtime_unlock2(&runtime_gcBitsArenas.lock);
    return prVar4;
  }
  runtime_newArenaMayUnlock();
  prVar3 = runtime_gcBitsArenas.next;
                    /* Unresolved local var: runtime.gcBits * p@[???]
                       Unresolved local var: runtime.gcBits * ~R0@[???] */
  if (runtime_gcBitsArenas.next == (runtime_gcBitsArena *)0x0) {
    bVar1 = true;
  }
  else {
    bVar1 = 0xfff0 < (runtime_gcBitsArenas.next)->free + uVar5 * 8;
  }
  if (bVar1) {
                    /* Unresolved local var: uintptr end@[???]
                       Unresolved local var: uintptr start@[???] */
    prVar4 = (runtime_gcBits *)0x0;
  }
  else {
    LOCK();
    uVar2 = (runtime_gcBitsArenas.next)->free;
    (runtime_gcBitsArenas.next)->free = (runtime_gcBitsArenas.next)->free + lVar6;
    UNLOCK();
    uVar7 = uVar2 + uVar5 * 8;
    if (uVar7 < 0xfff1) {
      uVar7 = uVar7 + uVar5 * -8;
      if (0xffef < uVar7) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      prVar4 = (runtime_gcBits *)((long)prVar3 + uVar7 + 0x10);
    }
    else {
      prVar4 = (runtime_gcBits *)0x0;
    }
  }
  if (prVar4 != (runtime_gcBits *)0x0) {
    runtime_gcBitsArenas.free = (runtime_gcBitsArena *)&runtime_gcBitsArenas;
    runtime_unlock2(&runtime_gcBitsArenas.lock);
    return prVar4;
  }
  if (runtime_gcBitsArenas.lock.key + uVar5 * 8 < 0xfff1) {
    LOCK();
    uVar2 = runtime_gcBitsArenas.lock.key + lVar6;
    UNLOCK();
    uVar7 = runtime_gcBitsArenas.lock.key + uVar5 * 8;
    runtime_gcBitsArenas.lock.key = uVar2;
    if (uVar7 < 0xfff1) {
      uVar7 = uVar7 + uVar5 * -8;
      if (0xffef < uVar7) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      prVar4 = (runtime_gcBits *)((long)&runtime_gcBitsArenas + uVar7 + 0x10);
    }
    else {
      prVar4 = (runtime_gcBits *)0x0;
    }
  }
  else {
    prVar4 = (runtime_gcBits *)0x0;
    uVar7 = uVar5;
  }
  if (prVar4 == (runtime_gcBits *)0x0) {
    s.len = uVar7;
    s.str = &DAT_0029a24b;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  runtime_gcBitsArenas.free = runtime_gcBitsArenas.next;
  LOCK();
  runtime_gcBitsArenas.next = (runtime_gcBitsArena *)&runtime_gcBitsArenas;
  UNLOCK();
  runtime_unlock2(&runtime_gcBitsArenas.lock);
  return prVar4;
}


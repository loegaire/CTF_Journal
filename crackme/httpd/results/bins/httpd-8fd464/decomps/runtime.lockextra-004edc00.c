
/* WARNING: Removing unreachable block (ram,0x004edc6d) */
/* WARNING: Removing unreachable block (ram,0x004edc80) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.lockextra(bool nilokay, runtime.m * ~r1) */

runtime_m * runtime_lockextra(bool nilokay)

{
  bool bVar1;
  uintptr uVar2;
  bool nilokay_spill;
  
                    /* Unresolved local var: bool incr@[???] */
  bVar1 = false;
  while( true ) {
    while (uVar2 = runtime_extram, runtime_extram == 1) {
      runtime_osyield();
    }
    if ((runtime_extram != 0) || (nilokay_spill)) break;
    if (!bVar1) {
      LOCK();
      runtime_extraMWaiters = runtime_extraMWaiters + 1;
      UNLOCK();
    }
    runtime_usleep();
    bVar1 = true;
  }
  LOCK();
  runtime_extram = 1;
  UNLOCK();
  return (runtime_m *)uVar2;
}


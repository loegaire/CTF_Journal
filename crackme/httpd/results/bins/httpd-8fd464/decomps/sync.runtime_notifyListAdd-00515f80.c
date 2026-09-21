
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sync.runtime_notifyListAdd(runtime.notifyList * l, uint32 ~r1) */

uint32 sync_runtime_notifyListAdd(runtime_notifyList *l)

{
  uint32 uVar1;
  runtime_notifyList *l_spill;
  
  LOCK();
  uVar1 = l_spill->wait;
  l_spill->wait = l_spill->wait + 1;
  UNLOCK();
  return uVar1;
}



/* WARNING: Unknown calling convention */

void runtime_netpollready(runtime_gList *toRun,runtime_pollDesc *pd,int32 mode)

{
  runtime_guintptr rVar1;
  runtime_guintptr rVar2;
  bool bVar3;
  runtime_gList *toRun_spill;
  runtime_pollDesc *pd_spill;
  int32 mode_spill;
  
                    /* Unresolved local var: runtime.g * rg@[???]
                       Unresolved local var: runtime.g * wg@[???] */
  if ((mode_spill == 0x72) || (mode_spill == 0xe9)) {
    do {
      rVar2 = pd_spill->rg;
      if (rVar2 == 1) {
        rVar2 = 0;
        goto LAB_004e1c0d;
      }
      LOCK();
      bVar3 = rVar2 == pd_spill->rg;
      if (bVar3) {
        pd_spill->rg = 1;
      }
      UNLOCK();
    } while (!bVar3);
    if (rVar2 == 2) {
      rVar2 = 0;
    }
  }
  else {
    rVar2 = 0;
  }
LAB_004e1c0d:
  if ((mode_spill == 0x77) || (mode_spill == 0xe9)) {
    do {
      rVar1 = pd_spill->wg;
      if (rVar1 == 1) {
        rVar1 = 0;
        goto LAB_004e1c25;
      }
      LOCK();
      bVar3 = rVar1 == pd_spill->wg;
      if (bVar3) {
        pd_spill->wg = 1;
      }
      UNLOCK();
    } while (!bVar3);
    if (rVar1 == 2) {
      rVar1 = 0;
    }
  }
  else {
    rVar1 = 0;
  }
LAB_004e1c25:
  if (rVar2 != 0) {
    *(runtime_guintptr *)(rVar2 + 0xa0) = toRun_spill->head;
    toRun_spill->head = rVar2;
  }
  if (rVar1 != 0) {
    *(runtime_guintptr *)(rVar1 + 0xa0) = toRun_spill->head;
    toRun_spill->head = rVar1;
  }
  return;
}


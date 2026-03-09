
int32_t x_cgo_sigaction(intptr_t signum,go_sigaction_t *goact,go_sigaction_t *oldgoact)

{
  ulong uVar1;
  uint32_t *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  sigaction *__oact;
  ulong uVar6;
  sigaction *__act;
  sigaction oldact;
  sigaction act;
  
                    /* Unresolved local var: size_t i@[???]
                       Unresolved local var: int32_t ret@[???] */
  act.__sigaction_u.__sa_handler = (_func_void_int *)0x0;
  act.sa_flags = 0;
  act.sa_mask.__bits[0] = 0;
  act.sa_mask.__bits[1] = 0;
  act.sa_mask.__bits[2] = 0;
  act.sa_mask.__bits[3] = 0;
  act._28_4_ = 0;
  oldact.__sigaction_u.__sa_handler = (_func_void_int *)0x0;
  oldact.sa_flags = 0;
  oldact.sa_mask.__bits[0] = 0;
  oldact.sa_mask.__bits[1] = 0;
  oldact.sa_mask.__bits[2] = 0;
  oldact.sa_mask.__bits[3] = 0;
  oldact._28_4_ = 0;
  if (goact != (go_sigaction_t *)0x0) {
    act.__sigaction_u = (anon_union_8_2_fa1a4e3e_for___sigaction_u)goact->handler;
    sigemptyset((sigset_t *)&act.sa_mask);
    uVar6 = 0;
    do {
      if (((goact->mask).__bits[uVar6 >> 5] >> ((uint)uVar6 & 0x1f) & 1) != 0) {
        sigaddset((sigset_t *)&act.sa_mask,(uint)uVar6 + 1);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x80);
    act.sa_flags = goact->flags;
  }
  __act = (sigaction *)&act;
  if (goact == (go_sigaction_t *)0x0) {
    __act = (sigaction *)0x0;
  }
  __oact = (sigaction *)&oldact;
  if (oldgoact == (go_sigaction_t *)0x0) {
    __oact = (sigaction *)0x0;
  }
  iVar3 = sigaction((int)signum,__act,__oact);
  if (iVar3 == -1) {
    piVar5 = (int *)__error();
    iVar3 = *piVar5;
  }
  else if (oldgoact != (go_sigaction_t *)0x0) {
    oldgoact->handler = (uintptr_t)oldact.__sigaction_u;
    (oldgoact->mask).__bits[0] = 0;
    (oldgoact->mask).__bits[1] = 0;
    (oldgoact->mask).__bits[2] = 0;
    (oldgoact->mask).__bits[3] = 0;
    uVar6 = 0;
    do {
      uVar1 = uVar6 + 1;
      iVar4 = sigismember((sigset_t *)&oldact.sa_mask,(int)uVar1);
      if (iVar4 == 1) {
        puVar2 = (oldgoact->mask).__bits + (uVar6 >> 5);
        *puVar2 = *puVar2 | 1 << ((byte)uVar6 & 0x1f);
      }
      uVar6 = uVar1;
    } while (uVar1 != 0x80);
    oldgoact->flags = oldact.sa_flags;
  }
  return iVar3;
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.netpollblockcommit(runtime.g * gp, void * gpp, bool ~r2)
    */

bool runtime_netpollblockcommit(runtime_g *gp,void *gpp)

{
  undefined1 uVar1;
  bool bVar3;
  runtime_g *gp_spill;
  void *gpp_spill;
  long lVar2;
  
                    /* Unresolved local var: bool r@[???] */
  LOCK();
  lVar2 = *(long *)gpp_spill;
  bVar3 = lVar2 == 2;
  if (bVar3) {
    *(runtime_g **)gpp_spill = gp_spill;
    lVar2 = 2;
  }
  uVar1 = (undefined1)lVar2;
  UNLOCK();
  if (bVar3) {
    LOCK();
    uVar1 = (undefined1)runtime_netpollWaiters;
    UNLOCK();
    runtime_netpollWaiters = runtime_netpollWaiters + 1;
  }
  return (bool)uVar1;
}


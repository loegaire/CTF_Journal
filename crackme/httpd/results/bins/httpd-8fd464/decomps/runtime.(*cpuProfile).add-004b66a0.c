
/* WARNING: Unknown calling convention */

void runtime___cpuProfile__add(runtime_cpuProfile *p,runtime_g *gp,__uintptr stk)

{
  int iVar1;
  int iVar2;
  int in_R8;
  undefined8 in_R9;
  undefined8 in_R10;
  int in_R11;
  long in_FS_OFFSET;
  bool bVar3;
  __uint64 hdr;
  __uintptr stk_00;
  runtime_cpuProfile *p_spill;
  runtime_g *gp_spill;
  __uintptr stk_spill;
  runtime_cpuProfile *local_58;
  
  iVar1 = stk.cap;
  iVar2 = stk.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  while( true ) {
    LOCK();
    bVar3 = runtime_prof.signalLock == 0;
    if (bVar3) {
      runtime_prof.signalLock = 1;
    }
    UNLOCK();
    if (bVar3) break;
    runtime_osyield();
  }
  if (runtime_prof.hz != 0) {
                    /* Unresolved local var: void * * tagPtr@[???]
                       Unresolved local var: uint64[1] hdr@[???] */
    if (((0 < p_spill->numExtra) || (p_spill->lostExtra != 0)) || (p_spill->lostAtomic != 0)) {
      local_58 = p_spill;
      runtime___cpuProfile__addExtra(p_spill);
    }
    runtime_nanotime1();
    hdr.len = iVar1;
    hdr.array = (uint64 *)iVar2;
    hdr.cap = in_R8;
    stk_00.len = in_R10;
    stk_00.array = (uintptr *)in_R9;
    stk_00.cap = in_R11;
    runtime___profBuf__write
              ((runtime_profBuf *)stk_spill.cap,(void **)CONCAT71((int7)((ulong)gp >> 8),1),
               (int64)local_58,hdr,stk_00);
  }
  LOCK();
  runtime_prof.signalLock = 0;
  UNLOCK();
  return;
}


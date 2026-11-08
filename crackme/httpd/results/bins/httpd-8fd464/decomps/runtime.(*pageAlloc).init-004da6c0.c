
/* WARNING: Unknown calling convention */

void runtime___pageAlloc__init
               (runtime_pageAlloc *p,runtime_mutex *mheapLock,runtime_sysMemStat *sysStat)

{
  uint uVar1;
  runtime_pageAlloc *extraout_RAX;
  runtime_pageAlloc *a;
  int64 v;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  runtime_pageAlloc *p_spill;
  runtime_mutex *mheapLock_spill;
  runtime_sysMemStat *sysStat_spill;
  
  while (uVar1 = runtime_levelLogPages[0],
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_levelLogPages[0] < 0x16) {
    if (runtime_writeBarrier._0_4_ == 0) {
      p_spill->sysStat = sysStat_spill;
      a = p_spill;
    }
    else {
      runtime_gcWriteBarrierCX();
      a = extraout_RAX;
    }
    runtime___addrRanges__init((runtime_addrRanges *)a,&mheapLock->key);
    runtime___pageAlloc__sysInit(p_spill);
    (p_spill->searchAddr).a = runtime_maxSearchAddr.a;
    if (runtime_writeBarrier._0_4_ == 0) {
      p_spill->mheapLock = mheapLock_spill;
    }
    else {
      runtime_gcWriteBarrier();
    }
    (p_spill->scav).scavLWM.a = runtime_maxSearchAddr.a;
    return;
  }
  runtime_printlock();
  s.len = (int)mheapLock;
  s.str = (uint8 *)0x2a2970;
  runtime_printstring(s);
  runtime_printint(-(ulong)(uVar1 < 0x40));
  runtime_printnl();
  runtime_printunlock();
  runtime_printlock();
  s_00.len = (int)mheapLock;
  s_00.str = (uint8 *)0x2a0fe0;
  runtime_printstring(s_00);
  runtime_printint(v);
  runtime_printnl();
  runtime_printunlock();
  s_01.len = (int)mheapLock;
  s_01.str = &DAT_002a777d;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_01);
}


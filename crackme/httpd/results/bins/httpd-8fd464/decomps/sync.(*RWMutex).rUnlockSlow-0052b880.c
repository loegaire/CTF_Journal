
/* WARNING: Unknown calling convention */

void sync___RWMutex__rUnlockSlow(sync_RWMutex *rw,int32 r)

{
  int32 *piVar1;
  int iVar2;
  undefined4 unaff_0000001c;
  long in_FS_OFFSET;
  string s;
  sync_RWMutex *rw_spill;
  int32 r_spill;
  
  s.len._4_4_ = unaff_0000001c;
  s.len._0_4_ = r;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((r_spill == -1) || (r_spill == -0x40000001)) {
    s.str = (uint8 *)0x2a346f;
    sync_throw(s);
  }
  LOCK();
  piVar1 = &rw_spill->readerWait;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    sync_runtime_Semrelease(&rw_spill->writerSem,SUB41(r,0),(int)rw_spill);
  }
  return;
}


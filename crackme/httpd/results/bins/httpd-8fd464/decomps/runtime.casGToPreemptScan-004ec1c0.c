
/* WARNING: Unknown calling convention */

void runtime_casGToPreemptScan(runtime_g *gp,uint32 old,uint32 new)

{
  undefined4 unaff_0000001c;
  long in_FS_OFFSET;
  bool bVar1;
  string s;
  runtime_g *gp_spill;
  uint32 old_spill;
  uint32 new_spill;
  
  s.len._4_4_ = unaff_0000001c;
  s.len._0_4_ = old;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((old_spill == 2) && (new_spill == 0x1009)) {
    do {
      LOCK();
      bVar1 = gp_spill->atomicstatus == 2;
      if (bVar1) {
        gp_spill->atomicstatus = 0x1009;
      }
      UNLOCK();
    } while (!bVar1);
    return;
  }
  s.str = &DAT_00299845;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.casGFromPreempted(runtime.g * gp, uint32 old, uint32 new,
   bool ~r3) */

bool runtime_casGFromPreempted(runtime_g *gp,uint32 old,uint32 new)

{
  uint32 uVar1;
  undefined4 unaff_0000001c;
  long in_FS_OFFSET;
  string s;
  runtime_g *gp_spill;
  uint32 old_spill;
  uint32 new_spill;
  
  s.len._4_4_ = unaff_0000001c;
  s.len._0_4_ = old;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((old_spill == 9) && (new_spill == 4)) {
    LOCK();
    uVar1 = gp_spill->atomicstatus;
    if (uVar1 == 9) {
      gp_spill->atomicstatus = 4;
      uVar1 = 9;
    }
    UNLOCK();
    return SUB41(uVar1,0);
  }
  s.str = &DAT_00299845;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.castogscanstatus(runtime.g * gp, uint32 oldval, uint32
   newval, bool ~r3) */

bool runtime_castogscanstatus(runtime_g *gp,uint32 oldval,uint32 newval)

{
  uint32 uVar1;
  undefined4 unaff_0000001c;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  runtime_g *gp_spill;
  uint32 oldval_spill;
  uint32 newval_spill;
  
  s.len = CONCAT44(unaff_0000001c,oldval);
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((oldval_spill - 1 < 4) && (newval_spill == (oldval_spill | 0x1000))) {
                    /* Unresolved local var: bool r@[???] */
    LOCK();
    uVar1 = gp_spill->atomicstatus;
    if (oldval_spill == uVar1) {
      gp_spill->atomicstatus = newval_spill;
      uVar1 = oldval_spill;
    }
    UNLOCK();
    return SUB41(uVar1,0);
  }
  runtime_printlock();
  s.str = (uint8 *)0x2a32e3;
  runtime_printstring(s);
  runtime_printhex((ulong)oldval_spill);
  s_00.len = s.len;
  s_00.str = &DAT_0028b892;
  runtime_printstring(s_00);
  runtime_printhex((ulong)newval_spill);
  runtime_printnl();
  runtime_printunlock();
  s_01.len = s.len;
  s_01.str = &DAT_00299885;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_01);
}


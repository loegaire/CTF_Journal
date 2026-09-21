
/* WARNING: Unknown calling convention */

void runtime_checkdead_func1(runtime_g *gp)

{
  uint uVar1;
  uint uVar2;
  runtime_g *gp_00;
  int64 v;
  uint uVar3;
  long in_RDX;
  long extraout_RDX;
  bool unaff_BL;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  runtime_g *gp_spill;
  char local_28;
  
                    /* Unresolved local var: int * &grunning@[DW_OP_reg0(RAX)]
                       Unresolved local var: uint32 s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  gp_00 = *(runtime_g **)(in_RDX + 8);
  runtime_isSystemGoroutine(gp_00,unaff_BL);
  if (local_28 == '\0') {
    uVar2 = gp_spill->atomicstatus;
    uVar3 = uVar2 & 0xffffefff;
    uVar1 = uVar3 - 1;
    if (2 < uVar1) {
      if ((uVar3 == 4) || (uVar3 == 9)) {
        (gp_00->stack).lo = (gp_00->stack).lo + 1;
      }
      return;
    }
    v = gp_spill->goid;
    runtime_printlock();
    s.len._0_4_ = uVar1;
    s.str = &DAT_0029fea6;
    s.len._4_4_ = 0;
    runtime_printstring(s);
    runtime_printint(v);
    s_00.len._0_4_ = uVar1;
    s_00.str = &DAT_00290927;
    s_00.len._4_4_ = 0;
    runtime_printstring(s_00);
    runtime_printuint((ulong)uVar2);
    runtime_printnl();
    runtime_printunlock();
    s_01.len._0_4_ = uVar1;
    s_01.str = &DAT_0029c823;
    s_01.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_01);
  }
  return;
}


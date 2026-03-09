
/* WARNING: Unknown calling convention */

void runtime_gcMarkRootCheck_func1(runtime_g *gp)

{
  bool v;
  uint uVar1;
  long lVar2;
  int64 v_00;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  runtime_g *gp_spill;
  
                    /* Unresolved local var: int * &i@[DW_OP_reg0(RAX)]
                       Unresolved local var: uint32 ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  lVar2 = **(long **)(in_RDX + 8);
  if (lVar2 < runtime_work.nStackRoots) {
    if (gp_spill->gcscandone != false) {
      **(long **)(in_RDX + 8) = lVar2 + 1;
      return;
    }
    uVar1 = gp_spill->atomicstatus;
    v_00 = gp_spill->goid;
    v = gp_spill->gcscandone;
    runtime_printlock();
    s.len._0_1_ = v;
    s.str = &DAT_00287b46;
    s.len._1_7_ = 0;
    runtime_printstring(s);
    runtime_printpointer(gp_spill);
    s_00.len._0_1_ = v;
    s_00.str = &DAT_002893d8;
    s_00.len._1_7_ = 0;
    runtime_printstring(s_00);
    runtime_printint(v_00);
    s_01.len._0_1_ = v;
    s_01.str = &DAT_0028b8c2;
    s_01.len._1_7_ = 0;
    runtime_printstring(s_01);
    runtime_printuint((ulong)uVar1);
    s_02.len._0_1_ = v;
    s_02.str = &DAT_00292782;
    s_02.len._1_7_ = 0;
    runtime_printstring(s_02);
    runtime_printbool(v);
    runtime_printnl();
    runtime_printunlock();
    s_03.len._0_1_ = v;
    s_03.str = &DAT_00299028;
    s_03.len._1_7_ = 0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_03);
  }
  return;
}


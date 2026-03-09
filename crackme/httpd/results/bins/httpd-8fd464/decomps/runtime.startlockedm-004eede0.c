
/* WARNING: Unknown calling convention */

void runtime_startlockedm(runtime_g *gp)

{
  runtime_muintptr rVar1;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  runtime_g *gp_spill;
  undefined8 local_20;
  
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg0(RAX)]
                       Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.p * _p_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  rVar1 = gp_spill->lockedm;
  if (*(runtime_muintptr *)(*(long *)(in_FS_OFFSET + -8) + 0x30) != rVar1) {
    if (*(long *)(rVar1 + 0xe0) == 0) {
      local_20 = CONCAT44(local_20._4_4_,0xffffffff);
      runtime_incidlelocked((int32)*(long *)(in_FS_OFFSET + -8));
      runtime_releasep();
      *(undefined8 *)(rVar1 + 0xe0) = local_20;
      runtime_notewakeup((runtime_note *)(rVar1 + 0x158));
      runtime_stopm();
      return;
    }
    s.len = unaff_RBX;
    s.str = &DAT_0029cb02;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  s_00.len = unaff_RBX;
  s_00.str = &DAT_0029f6fb;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_00);
}


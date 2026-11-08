
/* WARNING: Unknown calling convention */

void runtime_shrinkstack(runtime_g *gp)

{
  ulong uVar1;
  runtime_g *unaff_RBX;
  uintptr uVar2;
  long in_FS_OFFSET;
  bool bVar3;
  string s;
  string s_00;
  string s_01;
  string s_02;
  runtime_g *gp_spill;
  long local_18;
  
                    /* Unresolved local var: uintptr oldsize@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((gp_spill->stack).lo == 0) {
    s_02.len = (int)unaff_RBX;
    s_02.str = (uint8 *)0x2a0658;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_02);
  }
                    /* Unresolved local var: uint32 s@[???] */
  if ((gp_spill->atomicstatus >> 0xc & 1) == 0) {
    unaff_RBX = (*(runtime_g **)(in_FS_OFFSET + -8))->m->curg;
    if (((gp_spill != unaff_RBX) || (*(runtime_g **)(in_FS_OFFSET + -8) == unaff_RBX)) ||
       (gp_spill->atomicstatus != 2)) {
      s_01.len = (int)unaff_RBX;
      s_01.str = &DAT_0029ebc8;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_01);
    }
  }
  if (gp_spill->syscallsp == 0) {
    if (gp_spill->asyncSafePoint == false) {
      bVar3 = gp_spill->parkingOnChan == 0;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    if ((*(runtime_g **)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 200) == gp_spill) &&
       (gp_spill->m->libcallsp != 0)) {
      s.len = (int)unaff_RBX;
      s.str = &DAT_0029f6e1;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    if (0 < runtime_debug.gcshrinkstackoff) {
      return;
    }
    runtime_findfunc((uintptr)gp_spill);
    if ((local_18 != 0) && (*(char *)(local_18 + 0x28) == '\x06')) {
      return;
    }
    uVar2 = (gp_spill->stack).hi;
    uVar1 = uVar2 - (gp_spill->stack).lo;
    if (uVar1 >> 1 < 0x800) {
      return;
    }
                    /* Unresolved local var: uintptr used@[???] */
    uVar2 = (uVar2 - (gp_spill->sched).sp) + 800;
    if (uVar1 >> 2 <= uVar2) {
      return;
    }
    runtime_copystack(gp_spill,uVar2);
    return;
  }
  s_00.len = (int)unaff_RBX;
  s_00.str = &DAT_0029dfd7;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_00);
}


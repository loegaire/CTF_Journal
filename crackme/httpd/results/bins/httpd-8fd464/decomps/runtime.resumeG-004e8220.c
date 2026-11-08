
/* WARNING: Unknown calling convention */

void runtime_resumeG(void)

{
  uint uVar1;
  void *p;
  int64 v;
  int64 v_00;
  undefined1 next;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  runtime_g *gp;
  char cStack0000000000000010;
  char cStack0000000000000011;
  
                    /* Unresolved local var: uint32 ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (cStack0000000000000010 == '\0') {
    uVar1 = gp->atomicstatus;
    if ((uVar1 != 0x1001) && (1 < uVar1 - 0x1003)) {
                    /* Unresolved local var: runtime.g * _g_@[???] */
      p = *(void **)(in_FS_OFFSET + -8);
      uVar1 = gp->atomicstatus;
      v = gp->goid;
      runtime_printlock();
      s.len = v;
      s.str = &DAT_00299ad5;
      runtime_printstring(s);
      runtime_printpointer(gp);
      s_00.len = v;
      s_00.str = &DAT_0028a40e;
      runtime_printstring(s_00);
      runtime_printint(v);
      s_01.len = v;
      s_01.str = &DAT_0029ae57;
      runtime_printstring(s_01);
      runtime_printuint((ulong)uVar1);
      runtime_printnl();
      runtime_printunlock();
      uVar1 = *(uint *)((long)p + 0x90);
      v_00 = *(int64 *)((long)p + 0x98);
      runtime_printlock();
      s_02.len = v;
      s_02.str = &DAT_00299aa5;
      runtime_printstring(s_02);
      runtime_printpointer(p);
      s_03.len = v;
      s_03.str = &DAT_0028a40e;
      runtime_printstring(s_03);
      runtime_printint(v_00);
      s_04.len = v;
      s_04.str = &DAT_0029ae44;
      runtime_printstring(s_04);
      runtime_printuint((ulong)uVar1);
      runtime_printnl();
      runtime_printunlock();
      s_05.len = v;
      s_05.str = &DAT_0029b836;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_05);
    }
    next = (undefined1)(uVar1 & 0xffffefff);
    runtime_casfrom_Gscanstatus(gp,(uint32)unaff_RBX,uVar1 & 0xffffefff);
    if (cStack0000000000000011 != '\0') {
      runtime_ready(gp,unaff_RBX,(bool)next);
    }
    return;
  }
  return;
}


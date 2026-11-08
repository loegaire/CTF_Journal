
/* WARNING: Unknown calling convention */

void runtime_ready(runtime_g *gp,int traceskip,bool next)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  runtime_g *gp_00;
  void *p;
  int64 v;
  int64 v_00;
  undefined1 next_00;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  runtime_g *gp_spill;
  int traceskip_spill;
  bool next_spill;
  
                    /* Unresolved local var: uint32 status@[???]
                       Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.m * ~R0@[???]
                       Unresolved local var: uint32 ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_trace.enabled != false) {
    runtime_traceGoUnpark(gp_spill,traceskip);
  }
  uVar2 = gp_spill->atomicstatus;
  lVar4 = *(long *)(in_FS_OFFSET + -8);
  piVar1 = (int *)(*(long *)(lVar4 + 0x30) + 0x110);
  *piVar1 = *piVar1 + 1;
  gp_00 = *(runtime_g **)(lVar4 + 0x30);
  if ((uVar2 & 0xffffefff) == 4) {
    next_00 = 4;
    runtime_casgstatus(gp_spill,(uint32)gp_00,4);
    runtime_runqput((runtime_p *)(ulong)next_spill,gp_00,(bool)next_00);
    runtime_wakep();
                    /* Unresolved local var: runtime.g * _g_@[???] */
    lVar4 = *(long *)(in_FS_OFFSET + -8);
    iVar3 = (int)gp_00->sigcode0;
    *(int *)&gp_00->sigcode0 = iVar3 + -1;
    if ((iVar3 == 1) && (*(char *)(lVar4 + 0xb1) != '\0')) {
      *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffade;
    }
    return;
  }
                    /* Unresolved local var: runtime.g * _g_@[???] */
  p = *(void **)(in_FS_OFFSET + -8);
  uVar2 = gp_spill->atomicstatus;
  v = gp_spill->goid;
  runtime_printlock();
  s.len = v;
  s.str = &DAT_00299ad5;
  runtime_printstring(s);
  runtime_printpointer(gp_spill);
  s_00.len = v;
  s_00.str = &DAT_0028a40e;
  runtime_printstring(s_00);
  runtime_printint(v);
  s_01.len = v;
  s_01.str = &DAT_0029ae57;
  runtime_printstring(s_01);
  runtime_printuint((ulong)uVar2);
  runtime_printnl();
  runtime_printunlock();
  uVar2 = *(uint *)((long)p + 0x90);
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
  runtime_printuint((ulong)uVar2);
  runtime_printnl();
  runtime_printunlock();
  s_05.len = v;
  s_05.str = &DAT_0029d13d;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_05);
}


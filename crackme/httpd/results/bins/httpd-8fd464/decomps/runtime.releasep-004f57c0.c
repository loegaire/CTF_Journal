
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.releasep(runtime.p * ~r0) */

runtime_p * runtime_releasep(void)

{
  uint uVar1;
  runtime_p *prVar2;
  void *p;
  void *p_00;
  void *v;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: runtime.p * _p_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar2 = *(runtime_p **)(in_FS_OFFSET + -8);
  p = (void *)(prVar2->sysmontick).syscallwhen;
  p_00 = *(void **)((long)p + 0xd8);
  if (p_00 != (void *)0x0) {
    v = *(void **)((long)p_00 + 0x38);
    if ((v == p) && (*(int *)((long)p_00 + 4) == 1)) {
      if (runtime_trace.enabled != false) {
        runtime_traceProcStop(prVar2);
      }
      prVar2 = (runtime_p *)(prVar2->sysmontick).syscallwhen;
      prVar2->deferpool[4].cap = 0;
      *(undefined8 *)((long)p_00 + 0x38) = 0;
      *(undefined4 *)((long)p_00 + 4) = 0;
      return prVar2;
    }
    uVar1 = *(uint *)((long)p_00 + 4);
    runtime_printlock();
    s.len = (int)v;
    s.str = &DAT_00293e92;
    runtime_printstring(s);
    runtime_printpointer(p);
    s_00.len = (int)v;
    s_00.str = &DAT_002893ea;
    runtime_printstring(s_00);
    runtime_printpointer(p_00);
    s_01.len = (int)v;
    s_01.str = &DAT_002893f6;
    runtime_printstring(s_01);
    runtime_printhex((uint64)v);
    s_02.len = (int)v;
    s_02.str = &DAT_00290953;
    runtime_printstring(s_02);
    runtime_printuint((ulong)uVar1);
    runtime_printnl();
    runtime_printunlock();
    s_03.len = (int)v;
    s_03.str = &DAT_0029ee20;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_03);
  }
  s_04.len = unaff_RBX;
  s_04.str = &DAT_0029ca45;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_04);
}



/* WARNING: Unknown calling convention */

void runtime_printpanics(runtime__panic *p)

{
  void *unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  interface___ i;
  string s_01;
  runtime__panic *p_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (p_spill->link != (runtime__panic *)0x0) {
    runtime_printpanics(p_spill);
    if (p_spill->link->goexit == false) {
      runtime_printlock();
      s.len = (int)unaff_RBX;
      s.str = &DAT_002b2e50;
      runtime_printstring(s);
      runtime_printunlock();
    }
  }
  if (p_spill->goexit == false) {
    runtime_printlock();
    s_00.len = (int)unaff_RBX;
    s_00.str = &DAT_0028b207;
    runtime_printstring(s_00);
    runtime_printunlock();
    i.data = unaff_RBX;
    i._type = (runtime__type *)p_spill;
    runtime_printany(i);
    if (p_spill->recovered != false) {
      runtime_printlock();
      s_01.len = (int)unaff_RBX;
      s_01.str = &DAT_0029275e;
      runtime_printstring(s_01);
      runtime_printunlock();
    }
    runtime_printlock();
    runtime_printnl();
    runtime_printunlock();
    return;
  }
  return;
}


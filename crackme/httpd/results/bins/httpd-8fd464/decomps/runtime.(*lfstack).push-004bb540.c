
/* WARNING: Unknown calling convention */

void runtime___lfstack__push(runtime_lfstack *head,runtime_lfnode *node)

{
  runtime_lfstack rVar1;
  runtime_lfstack rVar2;
  ulong v;
  runtime_lfnode *p;
  ulong v_00;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  runtime_lfstack *head_spill;
  runtime_lfnode *node_spill;
  
                    /* Unresolved local var: uint64 new@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  v_00 = node_spill->pushcnt + 1;
  node_spill->pushcnt = v_00;
  v = (long)node_spill << 0x10 | v_00 & 0x7ffff;
  p = (runtime_lfnode *)(((long)v >> 0x13) * 8);
                    /* Unresolved local var: runtime.lfnode * node1@[???] */
  if (node_spill != p) {
    runtime_printlock();
    s.len = (int)node_spill;
    s.str = &DAT_002a7cc4;
    runtime_printstring(s);
    runtime_printpointer(node_spill);
    s_00.len = (int)node_spill;
    s_00.str = &DAT_002888e5;
    runtime_printstring(s_00);
    runtime_printhex(v_00);
    s_01.len = (int)node_spill;
    s_01.str = &DAT_0028b8a2;
    runtime_printstring(s_01);
    runtime_printhex(v);
    s_02.len = (int)node_spill;
    s_02.str = &DAT_0028d1ab;
    runtime_printstring(s_02);
    runtime_printpointer(p);
    runtime_printnl();
    runtime_printunlock();
    s_03.len = (int)node_spill;
    s_03.str = &DAT_0029390a;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_03);
  }
  do {
                    /* Unresolved local var: uint64 old@[???] */
    rVar2 = *head_spill;
    node_spill->next = rVar2;
    LOCK();
    rVar1 = *head_spill;
    if (rVar2 == rVar1) {
      *head_spill = v;
    }
    UNLOCK();
  } while (rVar2 != rVar1);
  return;
}


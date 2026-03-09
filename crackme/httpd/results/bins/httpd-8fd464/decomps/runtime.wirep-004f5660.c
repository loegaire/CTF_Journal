
/* WARNING: Unknown calling convention */

void runtime_wirep(runtime_p *_p_)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint64 v;
  int64 v_00;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  runtime_p *_p__spill;
  
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg0(RAX)] */
  lVar2 = *(long *)(in_FS_OFFSET + -8);
  lVar3 = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar3 + 0xd8) != 0) {
    s_03.len = unaff_RBX;
    s_03.str = &DAT_0029c22a;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_03);
  }
  v = _p__spill->m;
  if (v == 0) {
    if (_p__spill->status == 0) {
      *(runtime_p **)(lVar3 + 0xd8) = _p__spill;
      _p__spill->m = *(runtime_muintptr *)(lVar2 + 0x30);
      _p__spill->status = 1;
      return;
    }
    v_00 = 0;
  }
  else {
    v_00 = *(int64 *)(v + 0xf0);
  }
  uVar1 = _p__spill->status;
  runtime_printlock();
  s.len = v;
  s.str = &DAT_00294432;
  runtime_printstring(s);
  runtime_printuint(v);
  s_00.len = v;
  s_00.str = (uint8 *)((long)&go_string__ + 1);
  runtime_printstring(s_00);
  runtime_printint(v_00);
  s_01.len = v;
  s_01.str = &DAT_00292842;
  runtime_printstring(s_01);
  runtime_printuint((ulong)uVar1);
  runtime_printnl();
  runtime_printunlock();
  s_02.len = v;
  s_02.str = &DAT_0029d5cb;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_02);
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.TrimRight([]uint8 s, string cutset, []uint8 ~r2) */

__uint8 bytes_TrimRight(__uint8 s,string cutset)

{
  func_int32__bool **f;
  long in_FS_OFFSET;
  string cutset_00;
  __uint8 _Var1;
  __uint8 _Var2;
  __uint8 s_spill;
  string cutset_spill;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  
  cutset_00.len = s.len;
  f = (func_int32__bool **)cutset.str;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  cutset_00.str = (uint8 *)cutset_spill.len;
  bytes_makeCutsetFunc(cutset_00);
  _Var1.len = cutset_00.len;
  _Var1.array = (uint8 *)local_30;
  _Var1.cap = s_spill.cap;
  _Var1 = bytes_TrimRightFunc(_Var1,f);
  _Var2.len = _Var1.len;
  _Var2.array = (uint8 *)local_20;
  _Var2.cap = local_18;
  return _Var2;
}


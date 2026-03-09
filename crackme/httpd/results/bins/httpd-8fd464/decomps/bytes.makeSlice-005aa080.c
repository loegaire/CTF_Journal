
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.makeSlice(int n, []uint8 ~r1) */

__uint8 bytes_makeSlice(int n)

{
  undefined8 extraout_RAX;
  int in_RCX;
  int unaff_RBX;
  long in_FS_OFFSET;
  __uint8 _Var1;
  int n_spill;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000020 = 0;
  runtime_makeslice((runtime__type *)n_spill,unaff_RBX,in_RCX);
  bytes_makeSlice_func1();
  _Var1.len = unaff_RBX;
  _Var1.array = (uint8 *)extraout_RAX;
  _Var1.cap = in_RCX;
  return _Var1;
}


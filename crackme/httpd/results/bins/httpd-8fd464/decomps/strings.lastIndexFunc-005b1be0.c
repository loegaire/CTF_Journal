
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.lastIndexFunc(string s, func(int32)_bool * * f, bool
   truth, int ~r3) */

int strings_lastIndexFunc(string s,func_int32__bool **f,bool truth)

{
  uint8 *puVar1;
  uint8 *puVar2;
  bool *in_RSI;
  undefined3 in_register_00000039;
  int32 iVar3;
  long in_FS_OFFSET;
  string s_00;
  int in_stack_00000008;
  int i;
  func_int32__bool **f_spill;
  bool truth_spill;
  char local_30;
  long local_20;
  
  iVar3 = CONCAT31(in_register_00000039,truth);
  while (puVar1 = (uint8 *)i,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  while( true ) {
    if ((long)puVar1 < 1) {
      return (int)puVar1;
    }
    if ((ulong)i < puVar1) break;
    s_00.len = in_stack_00000008;
    s_00.str = puVar1;
    unicode_utf8_DecodeLastRuneInString(s_00);
    (**f_spill)(iVar3,in_RSI);
    puVar2 = puVar1 + -local_20;
    local_30 = (char)puVar1;
    puVar1 = puVar2;
    if ((bool)local_30 == truth_spill) {
      return (int)puVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAlen();
}


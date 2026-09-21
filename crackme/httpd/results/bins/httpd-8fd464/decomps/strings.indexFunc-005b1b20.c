
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.indexFunc(string s, func(int32)_bool * * f, bool truth,
   int ~r3) */

int strings_indexFunc(string s,func_int32__bool **f,bool truth)

{
  uint8 *puVar1;
  bool *pbVar2;
  uint8 *puVar3;
  long in_FS_OFFSET;
  string s_00;
  string s_spill;
  func_int32__bool **f_spill;
  bool truth_spill;
  int local_38;
  uint local_28;
  uint8 *local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int32 r@[???] */
  puVar3 = (uint8 *)0x0;
  do {
    puVar1 = puVar3;
    if (s_spill.len <= (long)puVar1) {
      return (int)puVar1;
    }
    pbVar2 = (bool *)(ulong)s_spill.str[(long)puVar1];
    if (s_spill.str[(long)puVar1] < 0x80) {
      puVar3 = puVar1 + 1;
    }
    else {
      local_38 = s_spill.len;
      s_00.len = (int)s_spill.str;
      s_00.str = puVar1;
      runtime_decoderune(s_00,s_spill.len);
      pbVar2 = (bool *)(ulong)local_28;
      puVar3 = local_20;
    }
    (**f_spill)((int32)puVar3,pbVar2);
  } while ((bool)(char)local_38 != truth_spill);
  return (int)puVar1;
}


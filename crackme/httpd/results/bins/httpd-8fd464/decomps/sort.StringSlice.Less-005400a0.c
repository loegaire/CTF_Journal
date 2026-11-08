
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sort.StringSlice.Less(sort.StringSlice x, int i, int j, bool ~r2)
    */

bool sort_StringSlice_Less(sort_StringSlice x,int i,int j)

{
  undefined1 extraout_AL;
  long in_FS_OFFSET;
  sort_StringSlice x_spill;
  int i_spill;
  int j_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((ulong)i_spill < (ulong)x_spill.len) {
    if ((ulong)j_spill < (ulong)x_spill.len) {
      runtime_cmpstring();
      return (bool)extraout_AL;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}


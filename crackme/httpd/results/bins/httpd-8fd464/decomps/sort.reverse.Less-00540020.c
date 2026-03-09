
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sort.reverse.Less(sort.reverse r, int i, int j, bool ~r2) */

bool sort_reverse_Less(sort_reverse r,int i,int j)

{
  long in_FS_OFFSET;
  sort_reverse r_spill;
  int i_spill;
  int j_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  (*(code *)r_spill.Interface.tab[1].inter)();
  return (bool)local_10;
}


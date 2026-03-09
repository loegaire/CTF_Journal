
/* WARNING: Unknown calling convention */

void sort_medianOfThree(sort_Interface data,int m1,int m0,int m2)

{
  long in_FS_OFFSET;
  sort_Interface data_spill;
  int m1_spill;
  int m0_spill;
  int m2_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  (*(code *)data_spill.tab[1].inter)();
  if (local_10 != '\0') {
    (*(code *)data_spill.tab[1]._type)();
  }
  (*(code *)data_spill.tab[1].inter)();
  if (local_10 != '\0') {
    (*(code *)data_spill.tab[1]._type)();
    (*(code *)data_spill.tab[1].inter)();
    if (local_10 != '\0') {
      (*(code *)data_spill.tab[1]._type)();
    }
  }
  return;
}


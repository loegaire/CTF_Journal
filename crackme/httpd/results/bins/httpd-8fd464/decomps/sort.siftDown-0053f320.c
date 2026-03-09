
/* WARNING: Unknown calling convention */

void sort_siftDown(sort_Interface data,int lo,int hi,int first)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  sort_Interface data_spill;
  int root;
  int hi_spill;
  int first_spill;
  char local_30;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  while( true ) {
    lVar1 = root * 2 + 1;
    if (hi_spill <= lVar1) {
      return;
    }
    lVar2 = root * 2 + 2;
    root = lVar1;
    if ((lVar2 < hi_spill) && ((*(code *)data_spill.tab[1].inter)(), local_30 != '\0')) {
      root = lVar2;
    }
    (*(code *)data_spill.tab[1].inter)();
    if (local_30 == '\0') break;
    (*(code *)data_spill.tab[1]._type)();
  }
  return;
}


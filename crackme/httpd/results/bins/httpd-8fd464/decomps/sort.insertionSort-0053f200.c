
/* WARNING: Unknown calling convention */

void sort_insertionSort(sort_Interface data,int a,int b)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long in_FS_OFFSET;
  sort_Interface data_spill;
  int a_spill;
  int b_spill;
  char local_28;
  
  while (lVar1 = a_spill, &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10))
  {
    runtime_morestack_noctxt();
  }
  while (lVar1 = lVar1 + 1, lVar2 = lVar1, lVar1 < b_spill) {
    while( true ) {
      if (a_spill < lVar2) {
        (*(code *)data_spill.tab[1].inter)();
        cVar3 = local_28;
      }
      else {
        cVar3 = '\0';
      }
      if (cVar3 == '\0') break;
      (*(code *)data_spill.tab[1]._type)();
      lVar2 = lVar2 + -1;
    }
  }
  return;
}



/* WARNING: Unknown calling convention */

void sort_quickSort(sort_Interface data,int a,int b,int maxDepth)

{
  runtime_itab *b_00;
  long lVar1;
  long in_FS_OFFSET;
  sort_Interface data_00;
  sort_Interface data_01;
  sort_Interface data_02;
  sort_Interface data_03;
  sort_Interface data_04;
  sort_Interface data_spill;
  int a_spill;
  int b_spill;
  int maxDepth_spill;
  runtime_itab *local_48;
  runtime_itab *local_40;
  void *local_38;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  while( true ) {
    b_00 = (runtime_itab *)b_spill;
    if ((long)b_00 - a_spill < 0xd) {
      if (1 < (long)b_00 - a_spill) {
                    /* Unresolved local var: int i@[???] */
        for (lVar1 = a_spill + 6; lVar1 < (long)b_00; lVar1 = lVar1 + 1) {
          (*(code *)data_spill.tab[1].inter)();
          if ((char)local_48 != '\0') {
            (*(code *)data_spill.tab[1]._type)();
          }
        }
        data_04.data = (void *)a_spill;
        data_04.tab = data_spill.data;
        sort_insertionSort(data_04,(int)data_spill.tab,(int)b_00);
      }
      return;
    }
    if ((runtime_itab *)maxDepth_spill == (runtime_itab *)0x0) break;
    data_00.data = (void *)a_spill;
    data_00.tab = data_spill.data;
    sort_doPivot(data_00,(int)data_spill.tab,(int)b_00);
    data_01.tab = (runtime_itab *)((long)((runtime_itab *)(maxDepth_spill + -0x20))->fun + 7);
    lVar1 = (long)b_00 - (long)local_38;
    maxDepth_spill = (int)data_01.tab;
    if ((long)local_40 - a_spill < lVar1) {
      local_48 = local_40;
      data_01.data = (void *)a_spill;
      sort_quickSort(data_01,(int)data_spill.tab,lVar1,(int)local_40);
      a_spill = (int)local_38;
      b_spill = (int)b_00;
      local_40 = data_01.tab;
    }
    else {
      data_02.data = data_spill.data;
      data_02.tab = data_01.tab;
      sort_quickSort(data_02,(int)data_spill.tab,lVar1,(int)local_40);
      b_spill = (int)local_40;
      local_48 = b_00;
      local_40 = data_01.tab;
    }
  }
  data_03.data = (void *)a_spill;
  data_03.tab = data_spill.data;
  sort_heapSort(data_03,(int)data_spill.tab,(int)b_00);
  return;
}


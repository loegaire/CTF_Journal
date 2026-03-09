
/* WARNING: Unknown calling convention */

void sort_heapSort(sort_Interface data,int a,int b)

{
  long lVar1;
  undefined1 *puVar2;
  void *first_00;
  undefined1 *hi;
  long in_FS_OFFSET;
  sort_Interface data_00;
  sort_Interface data_01;
  sort_Interface data_spill;
  int first;
  int b_spill;
  
                    /* Unresolved local var: int hi@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  data_00.tab = (runtime_itab *)(b_spill - first);
                    /* Unresolved local var: int i@[???] */
  puVar2 = (undefined1 *)((long)data_00.tab[-1].fun + 7);
  for (lVar1 = (long)data_00.tab + (-1 - ((long)puVar2 >> 0x3f)) >> 1; -1 < lVar1;
      lVar1 = lVar1 + -1) {
    data_00.data = data_spill.tab;
    sort_siftDown(data_00,first,b,(int)data_spill.data);
                    /* Unresolved local var: int i@[???] */
  }
  for (; -1 < (long)puVar2; puVar2 = puVar2 + -1) {
    hi = puVar2 + first;
    first_00 = data_spill.data;
    (*(code *)data_spill.tab[1]._type)();
    data_01.data = (void *)first;
    data_01.tab = data_spill.tab;
    sort_siftDown(data_01,(int)data_spill.data,(int)hi,(int)first_00);
  }
  return;
}



/* WARNING: Unknown calling convention */

void sort_stable(sort_Interface data,int n)

{
  runtime_itab *prVar1;
  undefined1 *puVar2;
  runtime_itab *prVar3;
  runtime_itab *a;
  undefined1 *b;
  undefined1 *m;
  undefined1 *puVar4;
  int in_RDI;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  sort_Interface data_00;
  sort_Interface data_01;
  sort_Interface data_02;
  sort_Interface data_03;
  sort_Interface data_spill;
  int n_spill;
  
                    /* Unresolved local var: int blockSize@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar1 = (runtime_itab *)&DAT_00000014;
  a = (runtime_itab *)0x0;
  while (prVar3 = prVar1, (long)prVar3 <= n_spill) {
    data_00.data = data_spill.data;
    data_00.tab = prVar3;
    sort_insertionSort(data_00,(int)a,in_RDI);
    a = prVar3;
    prVar1 = (runtime_itab *)prVar3->_;
  }
  data_01.data = data_spill.data;
  data_01.tab = data_spill.tab;
  sort_insertionSort(data_01,(int)a,in_RDI);
  m = &DAT_00000014;
  while (b = m, (long)b < n_spill) {
    m = (undefined1 *)((long)b << 1);
    puVar2 = m;
    puVar5 = (undefined1 *)0x0;
    while (puVar4 = puVar2, (long)puVar4 <= n_spill) {
      data_03.data = puVar4;
      data_03.tab = data_spill.tab;
      sort_symMerge(data_03,(int)data_spill.data,(int)m,(int)b);
      puVar5 = puVar4;
      puVar2 = puVar4 + (long)b * 2;
    }
                    /* Unresolved local var: int m@[???] */
    if ((long)(puVar5 + (long)b) < n_spill) {
      data_02.data = puVar5 + (long)b;
      data_02.tab = data_spill.tab;
      sort_symMerge(data_02,(int)data_spill.data,(int)m,(int)b);
    }
  }
  return;
}


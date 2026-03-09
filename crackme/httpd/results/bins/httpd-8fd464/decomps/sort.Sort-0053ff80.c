
/* WARNING: Unknown calling convention */

void sort_Sort(sort_Interface data)

{
  int iVar1;
  int in_RSI;
  int in_RDI;
  long in_FS_OFFSET;
  sort_Interface data_00;
  sort_Interface data_spill;
  int local_28;
  
  data_00.data = data.data;
                    /* Unresolved local var: int n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  (*(code *)(data_spill.tab)->fun[0])();
                    /* Unresolved local var: int depth@[???]
                       Unresolved local var: int i@[???] */
  for (iVar1 = local_28; 0 < iVar1; iVar1 = iVar1 >> 1) {
  }
  data_00.tab = data_spill.data;
  sort_quickSort(data_00,local_28,in_RDI,in_RSI);
  return;
}


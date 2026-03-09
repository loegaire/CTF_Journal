
/* WARNING: Unknown calling convention */

void sort_Stable(sort_Interface data)

{
  long in_FS_OFFSET;
  sort_Interface data_00;
  sort_Interface data_spill;
  runtime_itab *local_18;
  
  data_00.data = data.data;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  (*(code *)(data_spill.tab)->fun[0])();
  data_00.tab = local_18;
  sort_stable(data_00,(int)data_spill.data);
  return;
}


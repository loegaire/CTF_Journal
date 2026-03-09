
/* WARNING: Unknown calling convention */

void sort_reverse_Swap(int i,int j)

{
  long *plVar1;
  long in_FS_OFFSET;
  int i_spill;
  int j_spill;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  int local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if ((plVar1 != (long *)0x0) && ((int *)*plVar1 == &i_spill)) {
    *plVar1 = (long)&local_20;
  }
  local_20 = j_spill;
  local_18 = in_stack_00000018;
  local_10 = in_stack_00000020;
  (**(code **)(i_spill + 0x28))();
  return;
}


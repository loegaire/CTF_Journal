
/* WARNING: Unknown calling convention */

void sort_medianOfThree_func(sort_lessSwap data,int m1,int m0,int m2)

{
  long in_FS_OFFSET;
  sort_lessSwap data_spill;
  int m1_spill;
  int m0_spill;
  int m2_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  (**data_spill.Less)(m0,m2,(bool *)data_spill.Less);
  if (local_10 != '\0') {
    (**data_spill.Swap)(m0,m2);
  }
  (**data_spill.Less)(m0,m2,(bool *)data_spill.Less);
  if (local_10 != '\0') {
    (**data_spill.Swap)(m0,m2);
    (**data_spill.Less)(m0,m2,(bool *)data_spill.Less);
    if (local_10 != '\0') {
      (**data_spill.Swap)(m0,m2);
    }
  }
  return;
}


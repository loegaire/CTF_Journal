
/* WARNING: Unknown calling convention */

void sort_insertionSort_func(sort_lessSwap data,int a,int b)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  sort_lessSwap data_spill;
  int a_spill;
  int b_spill;
  undefined1 local_28;
  
  while (lVar1 = a_spill, &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10))
  {
    runtime_morestack_noctxt();
  }
  while (lVar1 = lVar1 + 1, lVar2 = lVar1, lVar1 < b_spill) {
    while( true ) {
      if (a_spill < lVar2) {
        (**data_spill.Less)(b,b_spill,(bool *)data_spill.Less);
        b = (int)local_28;
      }
      else {
        b = 0;
      }
      if ((char)b == '\0') break;
      (**data_spill.Swap)(b,b_spill);
      lVar2 = lVar2 + -1;
    }
  }
  return;
}


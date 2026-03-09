
/* WARNING: Unknown calling convention */

void sort_heapSort_func(sort_lessSwap data,int a,int b)

{
  func_int__int_ **ppfVar1;
  func_int__int_ **ppfVar2;
  long in_FS_OFFSET;
  sort_lessSwap data_00;
  sort_lessSwap data_01;
  sort_lessSwap data_spill;
  int first;
  int b_spill;
  
                    /* Unresolved local var: int hi@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  data_00.Less = (func_int__int__bool **)(b_spill - first);
                    /* Unresolved local var: int i@[???] */
  ppfVar2 = (func_int__int_ **)((long)data_00.Less + -1);
  for (ppfVar1 = (func_int__int_ **)((long)data_00.Less + (-1 - ((long)ppfVar2 >> 0x3f)) >> 1);
      -1 < (long)ppfVar1; ppfVar1 = (func_int__int_ **)((long)ppfVar1 + -1)) {
    data_00.Swap = ppfVar1;
    sort_siftDown_func(data_00,first,b,(int)data_spill.Swap);
                    /* Unresolved local var: int i@[???] */
  }
  for (; -1 < (long)ppfVar2; ppfVar2 = (func_int__int_ **)((long)ppfVar2 + -1)) {
    (**data_spill.Swap)(b,(int)ppfVar2);
    data_01.Swap = ppfVar2;
    data_01.Less = data_spill.Less;
    sort_siftDown_func(data_01,(int)data_spill.Swap,b,first);
  }
  return;
}



/* WARNING: Unknown calling convention */

void sort_quickSort_func(sort_lessSwap data,int a,int b,int maxDepth)

{
  func_int__int_ **ppfVar1;
  func_int__int_ **ppfVar2;
  func_int__int_ **b_00;
  long lVar3;
  long in_FS_OFFSET;
  sort_lessSwap data_00;
  sort_lessSwap data_01;
  sort_lessSwap data_02;
  sort_lessSwap data_03;
  sort_lessSwap data_04;
  sort_lessSwap data_spill;
  int a_spill;
  int b_spill;
  int maxDepth_spill;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  while( true ) {
    ppfVar2 = (func_int__int_ **)a_spill;
    b_00 = (func_int__int_ **)(b_spill - (long)ppfVar2);
    if ((long)b_00 < 0xd) {
      if (1 < (long)b_00) {
                    /* Unresolved local var: int i@[???] */
        ppfVar2 = (func_int__int_ **)((long)ppfVar2 + 6);
        while (ppfVar1 = ppfVar2, (long)ppfVar1 < b_spill) {
          lVar3 = (long)ppfVar1 + -6;
          (**data_spill.Less)((int)b_00,lVar3,(bool *)data_spill.Less);
          if ((char)local_50 != '\0') {
            (**data_spill.Swap)((int)b_00,lVar3);
          }
          b_00 = ppfVar1;
          ppfVar2 = (func_int__int_ **)((long)ppfVar1 + 1);
        }
        data_04.Swap = ppfVar1;
        data_04.Less = (func_int__int__bool **)data_spill.Swap;
        sort_insertionSort_func(data_04,(int)data_spill.Less,(int)b_00);
      }
      return;
    }
    if ((func_int__int__bool **)maxDepth_spill == (func_int__int__bool **)0x0) break;
    data_00.Swap = (func_int__int_ **)maxDepth_spill;
    data_00.Less = (func_int__int__bool **)data_spill.Swap;
    sort_doPivot_func(data_00,(int)data_spill.Less,(int)b_00);
    data_01.Less = (func_int__int__bool **)(maxDepth_spill + -1);
    lVar3 = b_spill - (long)local_38;
    maxDepth_spill = (int)data_01.Less;
    if ((long)local_40 - (long)ppfVar2 < lVar3) {
      data_01.Swap = ppfVar2;
      sort_quickSort_func(data_01,(int)data_spill.Less,lVar3,(int)local_40);
      a_spill = (int)local_38;
      local_50 = ppfVar2;
      local_40 = data_01.Less;
    }
    else {
      local_50 = local_38;
      data_02.Swap = data_spill.Swap;
      data_02.Less = data_01.Less;
      sort_quickSort_func(data_02,(int)data_spill.Less,lVar3,(int)local_40);
      a_spill = (int)ppfVar2;
      b_spill = (int)local_40;
      local_40 = data_01.Less;
    }
  }
  data_03.Swap = (func_int__int_ **)0x0;
  data_03.Less = (func_int__int__bool **)data_spill.Swap;
  sort_heapSort_func(data_03,(int)data_spill.Less,(int)b_00);
  return;
}


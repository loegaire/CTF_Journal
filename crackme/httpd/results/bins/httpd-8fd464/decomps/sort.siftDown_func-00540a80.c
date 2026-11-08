
/* WARNING: Unknown calling convention */

void sort_siftDown_func(sort_lessSwap data,int lo,int hi,int first)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  sort_lessSwap data_spill;
  int root;
  int hi_spill;
  int first_spill;
  char local_30;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  while( true ) {
    lVar1 = root * 2 + 1;
    if (hi_spill <= lVar1) {
      return;
    }
    lVar2 = root * 2 + 2;
    if ((lVar2 < hi_spill) &&
       ((**data_spill.Less)(hi,first_spill + root * 2 + 2,(bool *)data_spill.Less), local_30 != '\0'
       )) {
      lVar1 = lVar2;
    }
    root = lVar1;
    hi = root + first_spill;
    iVar3 = first_spill;
    (**data_spill.Less)(hi,first_spill,(bool *)data_spill.Less);
    if (local_30 == '\0') break;
    (**data_spill.Swap)(hi,iVar3);
  }
  return;
}


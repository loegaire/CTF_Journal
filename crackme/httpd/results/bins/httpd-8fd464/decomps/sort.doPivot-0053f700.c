
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sort.doPivot(sort.Interface data, int lo, int hi, int midlo, int
   midhi) */

multireturn_int_int__conflict sort_doPivot(sort_Interface data,int lo,int hi)

{
  bool bVar1;
  long lVar2;
  void *m1;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  int in_RSI;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  sort_Interface data_00;
  sort_Interface data_01;
  sort_Interface data_02;
  sort_Interface data_03;
  multireturn_int_int__conflict mVar8;
  sort_Interface data_spill;
  int pivot;
  int hi_spill;
  byte local_60;
  
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int c@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: bool protect@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar3 = (ulong)(hi_spill + pivot) >> 1;
  lVar2 = hi_spill - pivot;
  if (0x28 < lVar2) {
                    /* Unresolved local var: int s@[???] */
    m1 = (void *)(lVar2 >> 3);
    lVar4 = pivot + (long)m1 * 2;
    data_00.data = data_spill.data;
    data_00.tab = (runtime_itab *)pivot;
    sort_medianOfThree(data_00,(int)m1,lVar4,in_RSI);
    data_01.data = m1;
    data_01.tab = data_spill.tab;
    sort_medianOfThree(data_01,(int)data_spill.data,lVar4,uVar3);
    lVar6 = hi_spill + (long)m1 * -2;
    data_02.data = (void *)(lVar6 + -1);
    data_02.tab = data_spill.tab;
    sort_medianOfThree(data_02,(int)data_spill.data,lVar4,lVar6);
  }
  lVar4 = hi_spill + -1;
  data_03.data = (void *)hi_spill;
  data_03.tab = (runtime_itab *)pivot;
  sort_medianOfThree(data_03,(int)data_spill.tab,lVar4,(int)data_spill.data);
  do {
    pivot = pivot + 1;
    local_60 = (byte)uVar3;
    if (pivot < lVar4) {
      (*(code *)data_spill.tab[1].inter)();
      bVar5 = local_60;
    }
    else {
      bVar5 = 0;
    }
    lVar6 = pivot;
  } while (bVar5 != 0);
  while( true ) {
    while( true ) {
      if (lVar6 < lVar4) {
        (*(code *)data_spill.tab[1].inter)();
        bVar5 = local_60 ^ 1;
      }
      else {
        bVar5 = 0;
      }
      if (bVar5 == 0) break;
      lVar6 = lVar6 + 1;
    }
    while( true ) {
      if (lVar6 < lVar4) {
        (*(code *)data_spill.tab[1].inter)();
        bVar5 = local_60;
      }
      else {
        bVar5 = 0;
      }
      if (bVar5 == 0) break;
      lVar4 = lVar4 + -1;
    }
    if (lVar4 <= lVar6) break;
    lVar4 = lVar4 + -1;
    (*(code *)data_spill.tab[1]._type)();
                    /* Unresolved local var: int dups@[???] */
    lVar6 = lVar6 + 1;
  }
  lVar7 = hi_spill - lVar4;
  if ((lVar7 < 5) || ((long)(((ulong)(lVar2 >> 0x3f) >> 0x3e) + lVar2) >> 2 <= lVar7)) {
    bVar1 = lVar7 < 5;
  }
  else {
    (*(code *)data_spill.tab[1].inter)();
    if (local_60 == 0) {
      (*(code *)data_spill.tab[1]._type)();
      lVar4 = lVar4 + 1;
    }
    (*(code *)data_spill.tab[1].inter)();
    uVar3 = (ulong)(local_60 ^ 1);
    if (local_60 == 0) {
      uVar3 = 2;
      lVar6 = lVar6 + -1;
    }
    (*(code *)data_spill.tab[1].inter)();
    if (local_60 == 0) {
      lVar6 = lVar6 + -1;
      (*(code *)data_spill.tab[1]._type)();
      uVar3 = uVar3 + 1;
    }
    bVar1 = 1 < uVar3;
  }
  if (bVar1) {
    while( true ) {
      while( true ) {
        if (pivot < lVar6) {
          (*(code *)data_spill.tab[1].inter)();
          bVar5 = local_60 ^ 1;
        }
        else {
          bVar5 = 0;
        }
        if (bVar5 == 0) break;
        lVar6 = lVar6 + -1;
      }
      while( true ) {
        if (pivot < lVar6) {
          (*(code *)data_spill.tab[1].inter)();
          bVar5 = local_60;
        }
        else {
          bVar5 = 0;
        }
        if (bVar5 == 0) break;
        pivot = pivot + 1;
      }
      if (lVar6 <= pivot) break;
      lVar6 = lVar6 + -1;
      (*(code *)data_spill.tab[1]._type)();
      pivot = pivot + 1;
    }
  }
  (*(code *)data_spill.tab[1]._type)();
  mVar8.midhi = (int)data_spill.data;
  mVar8.midlo = lVar4;
  return mVar8;
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sort.doPivot_func(sort.lessSwap data, int lo, int hi, int midlo,
   int midhi) */

multireturn_int_int__conflict sort_doPivot_func(sort_lessSwap data,int lo,int hi)

{
  func_int__int_ *pfVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  func_int__int_ **ppfVar5;
  long lVar6;
  ulong m2;
  ulong m0;
  byte bVar7;
  int in_RSI;
  long lVar8;
  int iVar9;
  long in_FS_OFFSET;
  sort_lessSwap data_00;
  sort_lessSwap data_01;
  sort_lessSwap data_02;
  sort_lessSwap data_03;
  multireturn_int_int__conflict mVar10;
  sort_lessSwap data_spill;
  int pivot;
  int hi_spill;
  byte local_68;
  
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int c@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: bool protect@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  m2 = (ulong)(hi_spill + pivot) >> 1;
  lVar4 = hi_spill - pivot;
  if (0x28 < lVar4) {
                    /* Unresolved local var: int s@[???] */
    ppfVar5 = (func_int__int_ **)(lVar4 >> 3);
    lVar6 = pivot + (long)ppfVar5 * 2;
    data_00.Swap = data_spill.Swap;
    data_00.Less = (func_int__int__bool **)pivot;
    sort_medianOfThree_func(data_00,(int)ppfVar5,lVar6,in_RSI);
    data_01.Swap = ppfVar5;
    data_01.Less = data_spill.Less;
    sort_medianOfThree_func(data_01,(int)data_spill.Swap,lVar6,m2);
    lVar8 = hi_spill + (long)ppfVar5 * -2;
    data_02.Swap = (func_int__int_ **)(lVar8 + -1);
    data_02.Less = data_spill.Less;
    sort_medianOfThree_func(data_02,(int)data_spill.Swap,lVar6,lVar8);
  }
  m0 = hi_spill - 1;
  data_03.Swap = (func_int__int_ **)hi_spill;
  data_03.Less = (func_int__int__bool **)pivot;
  ppfVar5 = data_spill.Swap;
  uVar3 = m0;
  sort_medianOfThree_func(data_03,(int)data_spill.Less,m0,(int)data_spill.Swap);
  lVar6 = pivot;
  do {
    lVar6 = lVar6 + 1;
    local_68 = (byte)pivot;
    if (lVar6 < (long)m0) {
      (**data_spill.Less)(uVar3,(int)ppfVar5,(bool *)data_spill.Less);
      bVar7 = local_68;
    }
    else {
      bVar7 = 0;
    }
    lVar8 = lVar6;
  } while (bVar7 != 0);
  while( true ) {
    while( true ) {
      if (lVar8 < (long)m0) {
        (**data_spill.Less)(uVar3,lVar6,(bool *)data_spill.Less);
        uVar3 = (ulong)(local_68 ^ 1);
      }
      else {
        uVar3 = 0;
      }
      if ((char)uVar3 == '\0') break;
      lVar8 = lVar8 + 1;
    }
    while( true ) {
      if (lVar8 < (long)m0) {
        (**data_spill.Less)(uVar3,m0 - 1,(bool *)data_spill.Less);
        uVar3 = pivot & 0xff;
      }
      else {
        uVar3 = 0;
      }
      if ((char)uVar3 == '\0') break;
      m0 = m0 - 1;
    }
    if ((long)m0 <= lVar8) break;
    m0 = m0 - 1;
    (**data_spill.Swap)(uVar3,m0);
                    /* Unresolved local var: int dups@[???] */
    lVar8 = lVar8 + 1;
  }
  iVar9 = hi_spill - m0;
  if ((iVar9 < 5) || ((long)(((ulong)(lVar4 >> 0x3f) >> 0x3e) + lVar4) >> 2 <= iVar9)) {
    bVar2 = iVar9 < 5;
    pivot = iVar9;
  }
  else {
    lVar4 = lVar6;
    (**data_spill.Less)(iVar9,lVar6,(bool *)data_spill.Less);
    if (local_68 == 0) {
      (**data_spill.Swap)(iVar9,lVar4);
      m0 = m0 + 1;
    }
    (**data_spill.Less)(pivot,lVar8 + -1,(bool *)data_spill.Less);
    uVar3 = (ulong)(local_68 ^ 1);
    if (local_68 == 0) {
      uVar3 = 2;
      lVar8 = lVar8 + -1;
    }
    (**data_spill.Less)(pivot,m2,(bool *)data_spill.Less);
    if (local_68 == 0) {
      lVar8 = lVar8 + -1;
      (**data_spill.Swap)(pivot,m2);
      uVar3 = uVar3 + 1;
    }
    bVar2 = 1 < uVar3;
  }
  if (bVar2) {
    while( true ) {
      while( true ) {
        if (lVar6 < lVar8) {
          (**data_spill.Less)(pivot,lVar8 + -1,(bool *)data_spill.Less);
          bVar7 = local_68 ^ 1;
        }
        else {
          bVar7 = 0;
        }
        if (bVar7 == 0) break;
        lVar8 = lVar8 + -1;
      }
      while( true ) {
        if (lVar6 < lVar8) {
          (**data_spill.Less)(pivot,lVar6,(bool *)data_spill.Less);
          bVar7 = local_68;
        }
        else {
          bVar7 = 0;
        }
        if (bVar7 == 0) break;
        lVar6 = lVar6 + 1;
      }
      if (lVar8 <= lVar6) break;
      lVar8 = lVar8 + -1;
      (**data_spill.Swap)(pivot,lVar6);
      lVar6 = lVar6 + 1;
    }
  }
  pfVar1 = *data_spill.Swap;
  (*pfVar1)(pivot,lVar6);
  mVar10.midhi = (int)pfVar1;
  mVar10.midlo = m0;
  return mVar10;
}


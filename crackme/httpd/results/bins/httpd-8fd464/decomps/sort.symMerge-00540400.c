
/* WARNING: Unknown calling convention */

void sort_symMerge(sort_Interface data,int a,int m,int b)

{
  ulong uVar1;
  ulong uVar2;
  long b_00;
  long m_00;
  ulong uVar3;
  long in_FS_OFFSET;
  sort_Interface data_00;
  sort_Interface data_01;
  sort_Interface data_02;
  sort_Interface data_spill;
  int start;
  int r;
  int j;
  char local_70;
  
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: int end@[???] */
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (r - start != 1) {
    uVar3 = r;
    if (j - r != 1) {
      uVar1 = (ulong)(j + start) >> 1;
      b_00 = start;
      if ((long)uVar1 < r) {
        uVar3 = uVar1;
        b_00 = (r + uVar1) - j;
      }
      while (uVar2 = uVar3, b_00 < (long)uVar2) {
        uVar3 = b_00 + uVar2 >> 1;
        (*(code *)data_spill.tab[1].inter)();
        if (local_70 == '\0') {
          b_00 = uVar3 + 1;
          uVar3 = uVar2;
        }
      }
      m_00 = (r + uVar1) - b_00;
      if ((b_00 < r) && (r < m_00)) {
        data_00.data = (void *)j;
        data_00.tab = data_spill.tab;
        sort_rotate(data_00,(int)data_spill.data,m_00,b_00);
      }
      if ((start < b_00) && (b_00 < (long)uVar1)) {
        data_01.data = (void *)j;
        data_01.tab = data_spill.tab;
        sort_symMerge(data_01,start,m_00,b_00);
      }
      if (((long)uVar1 < m_00) && (m_00 < j)) {
        data_02.data = (void *)j;
        data_02.tab = data_spill.data;
        sort_symMerge(data_02,start,m_00,b_00);
      }
      return;
    }
    while (uVar1 = uVar3, start < (long)uVar1) {
      uVar3 = start + uVar1 >> 1;
      (*(code *)data_spill.tab[1].inter)();
      if (local_70 == '\0') {
        start = uVar3 + 1;
        uVar3 = uVar1;
      }
    }
    for (; start < r; r = r + -1) {
      (*(code *)data_spill.tab[1]._type)();
    }
    return;
  }
  while (uVar3 = j, r < (long)uVar3) {
    j = r + uVar3 >> 1;
    (*(code *)data_spill.tab[1].inter)();
    if (local_70 != '\0') {
      r = j + 1;
      j = uVar3;
    }
  }
  for (; start < r + -1; start = start + 1) {
    (*(code *)data_spill.tab[1]._type)();
  }
  return;
}



/* WARNING: Unknown calling convention */

void sort_rotate(sort_Interface data,int a,int m,int b)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  sort_Interface data_spill;
  int a_spill;
  int m_spill;
  int b_spill;
  
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar1 = m_spill - a_spill;
  lVar2 = b_spill - m_spill;
  while (lVar2 != lVar1) {
    if (lVar2 < lVar1) {
                    /* Unresolved local var: int i@[???] */
      for (lVar3 = 0; lVar3 < lVar2; lVar3 = lVar3 + 1) {
        (*(code *)data_spill.tab[1]._type)();
      }
      lVar1 = lVar1 - lVar2;
    }
    else {
                    /* Unresolved local var: int i@[???] */
      for (lVar3 = 0; lVar3 < lVar1; lVar3 = lVar3 + 1) {
        (*(code *)data_spill.tab[1]._type)();
      }
      lVar2 = lVar2 - lVar1;
    }
  }
                    /* Unresolved local var: int i@[???] */
  for (lVar2 = 0; lVar2 < lVar1; lVar2 = lVar2 + 1) {
    (*(code *)data_spill.tab[1]._type)();
  }
  return;
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sort.Search(int n, func(int)_bool * * f, int ~r2) */

int sort_Search(int n,func_int__bool **f)

{
  long lVar1;
  ulong uVar2;
  int in_RDI;
  long in_FS_OFFSET;
  int j;
  func_int__bool **f_spill;
  undefined1 local_28;
  
                    /* Unresolved local var: int i@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar1 = 0;
  while (uVar2 = j, lVar1 < (long)uVar2) {
    j = lVar1 + uVar2 >> 1;
    (**f_spill)(in_RDI,(bool *)*f_spill);
    if (local_28 == '\0') {
      lVar1 = j + 1;
      j = uVar2;
    }
  }
  return lVar1;
}


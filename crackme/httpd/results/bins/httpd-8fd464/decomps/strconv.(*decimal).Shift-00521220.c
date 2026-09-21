
/* WARNING: Unknown calling convention */

void strconv___decimal__Shift(strconv_decimal *a,int k)

{
  long in_FS_OFFSET;
  strconv_decimal *a_spill;
  int k_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (a_spill->nd != 0) {
    if (k_spill < 1) {
      if (k_spill < 0) {
        for (; k_spill < -0x3c; k_spill = k_spill + 0x3c) {
          strconv_rightShift(a_spill,k);
        }
        strconv_rightShift(a_spill,k);
      }
    }
    else {
      for (; 0x3c < k_spill; k_spill = k_spill + -0x3c) {
        strconv_leftShift(a_spill,k);
      }
      strconv_leftShift(a_spill,k);
    }
  }
  return;
}


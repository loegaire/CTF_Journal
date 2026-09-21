
/* WARNING: Unknown calling convention */

void runtime_printfloat(float64 v)

{
  long lVar1;
  long lVar2;
  int unaff_RBX;
  long in_FS_OFFSET;
  double dVar3;
  string s;
  string s_00;
  string s_01;
  __uint8 b;
  float64 v_spill;
  undefined1 local_16;
  char cStack_15;
  char acStack_14 [10];
  char local_a;
  char local_9;
  
                    /* Unresolved local var: int e@[???]
                       Unresolved local var: uint8[14] buf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (NAN((double)v_spill)) {
    s_01.len = unaff_RBX;
    s_01.str = &DAT_00287960;
    runtime_printstring(s_01);
    return;
  }
  dVar3 = (double)v_spill + (double)v_spill;
  if (((double)v_spill == dVar3) && (!NAN((double)v_spill) && !NAN(dVar3))) {
    if (0.0 < (double)v_spill) {
      s_00.len = unaff_RBX;
      s_00.str = &DAT_00287de1;
      runtime_printstring(s_00);
      return;
    }
    if (((double)v_spill == dVar3) && ((double)v_spill < 0.0)) {
      s.len = unaff_RBX;
      s.str = &DAT_00287de5;
      runtime_printstring(s);
      return;
    }
  }
  acStack_14[0] = '\0';
  acStack_14[1] = '\0';
  acStack_14[2] = '\0';
  acStack_14[3] = '\0';
  acStack_14[4] = '\0';
  acStack_14[5] = '\0';
  acStack_14[6] = 0;
  local_16 = 0x2b;
  if (((double)v_spill != 0.0) || (NAN((double)v_spill))) {
                    /* Unresolved local var: float64 h@[???] */
    if ((double)v_spill < 0.0) {
      local_16 = 0x2d;
      v_spill = (float64)-(double)v_spill;
    }
    lVar1 = 0;
    for (; 10.0 <= (double)v_spill; v_spill = (float64)((double)v_spill / 10.0)) {
      lVar1 = lVar1 + 1;
    }
    for (; (double)v_spill < 1.0; v_spill = (float64)((double)v_spill * 10.0)) {
      lVar1 = lVar1 + -1;
    }
    dVar3 = 5.0;
    for (lVar2 = 0; lVar2 < 7; lVar2 = lVar2 + 1) {
      dVar3 = dVar3 / 10.0;
                    /* Unresolved local var: int i@[???] */
    }
    v_spill = (float64)(dVar3 + (double)v_spill);
    if (10.0 <= (double)v_spill) {
      lVar1 = lVar1 + 1;
      v_spill = (float64)((double)v_spill / 10.0);
    }
  }
  else {
    if (1.0 / (double)v_spill < 0.0) {
      local_16 = 0x2d;
    }
    lVar1 = 0;
  }
  for (lVar2 = 0; lVar2 < 7; lVar2 = lVar2 + 1) {
    acStack_14[lVar2] = (char)(long)(double)v_spill + '0';
    v_spill = (float64)(((double)v_spill - (double)(long)(double)v_spill) * 10.0);
  }
  cStack_15 = acStack_14[0];
  acStack_14[0] = 0x2e;
  acStack_14[7] = 0x65;
  acStack_14[8] = 0x2b;
  if (lVar1 < 0) {
    acStack_14[8] = 0x2d;
    lVar1 = -lVar1;
  }
  acStack_14[9] =
       ((char)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar1),8) + lVar1 >> 6) -
       (char)(lVar1 >> 0x3f)) + '0';
  b.array = lVar1 * -0x3333333333333333;
  lVar2 = (SUB168(SEXT816(-0x3333333333333333) * SEXT816(lVar1),8) + lVar1 >> 3) - (lVar1 >> 0x3f);
  local_a = (char)lVar2 + (char)(((uint)lVar2 & 0xff) / 10) * -10 + '0';
  b.len = lVar1 + lVar2 * -10;
  local_9 = (char)b.len + '0';
  b.cap = (int)&local_16;
  runtime_gwrite(b);
  return;
}


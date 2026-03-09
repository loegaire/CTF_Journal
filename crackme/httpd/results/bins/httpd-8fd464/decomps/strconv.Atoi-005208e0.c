
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.Atoi(string s, int ~r1, error ~r2) */

multireturn_int_error__conflict strconv_Atoi(string s)

{
  ulong uVar1;
  char *pcVar2;
  char cVar3;
  void *pvVar4;
  undefined8 *extraout_RAX;
  undefined8 *extraout_RAX_00;
  undefined8 extraout_RAX_01;
  undefined8 *extraout_RAX_02;
  undefined8 *extraout_RAX_03;
  long lVar5;
  char *pcVar6;
  undefined1 *puVar7;
  ulong uVar8;
  int in_RDI;
  long lVar9;
  long in_FS_OFFSET;
  string s_00;
  multireturn_int_error__conflict mVar10;
  multireturn_int_error__conflict mVar11;
  multireturn_int_error__conflict mVar12;
  multireturn_int_error__conflict mVar13;
  char *in_stack_00000008;
  int sLen;
  undefined8 *local_38;
  undefined8 local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  
  s_00.len = s.len;
                    /* Unresolved local var: int64 i64@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar1 = sLen - 1;
  if (0x11 < uVar1) {
    s_00.str = (uint8 *)sLen;
    strconv_ParseInt(s_00,(int)in_stack_00000008,in_RDI);
    puVar7 = go_itab__strconv_NumError_error;
    if (local_18 == go_itab__strconv_NumError_error) {
      local_10[1] = 4;
      if (runtime_writeBarrier._0_4_ == 0) {
        puVar7 = &DAT_00287e75;
        *local_10 = &DAT_00287e75;
      }
      else {
        puVar7 = &DAT_00287e75;
        runtime_gcWriteBarrierBX();
        local_20 = extraout_RAX_01;
      }
    }
    mVar11.~r2.tab = (runtime_itab *)puVar7;
    mVar11.~r1 = local_20;
    mVar11.~r2.data = local_18;
    return mVar11;
  }
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: string s0@[???] */
  cVar3 = *in_stack_00000008;
  if (((cVar3 == '-') || (pcVar6 = in_stack_00000008, uVar8 = sLen, cVar3 == '+')) &&
     (pcVar6 = in_stack_00000008 + ((long)-uVar1 >> 0x3f & 1), uVar8 = uVar1, (long)uVar1 < 1)) {
    runtime_newobject((runtime__type *)&DAT_00258d20);
    local_38[1] = 4;
    *local_38 = &DAT_00287e75;
    local_38[3] = sLen;
    if (runtime_writeBarrier._0_4_ == 0) {
      local_38[2] = in_stack_00000008;
    }
    else {
      runtime_gcWriteBarrierCX();
      local_38 = extraout_RAX;
    }
    pvVar4 = strconv_ErrSyntax.data;
    local_38[4] = strconv_ErrSyntax.tab;
    if (runtime_writeBarrier._0_4_ == 0) {
      local_38[5] = pvVar4;
    }
    else {
      runtime_gcWriteBarrierCX();
      local_38 = extraout_RAX_00;
    }
    mVar10.~r2.tab._0_1_ = cVar3;
    mVar10.~r1 = (int)local_38;
    mVar10.~r2.tab._1_7_ = 0;
    mVar10.~r2.data = go_itab__strconv_NumError_error;
    return mVar10;
  }
  lVar9 = 0;
  lVar5 = 0;
  while( true ) {
    if ((long)uVar8 <= lVar9) {
      if (cVar3 == '-') {
        lVar5 = -lVar5;
      }
      mVar13.~r2.tab._0_1_ = cVar3;
      mVar13.~r1 = lVar5;
      mVar13.~r2.tab._1_7_ = 0;
      mVar13.~r2.data = pcVar6;
      return mVar13;
    }
    pcVar2 = pcVar6 + lVar9;
    if (9 < (byte)(*pcVar2 - 0x30U)) break;
    lVar9 = lVar9 + 1;
    lVar5 = (ulong)(byte)(*pcVar2 - 0x30U) + lVar5 * 10;
  }
  runtime_newobject((runtime__type *)&DAT_00258d20);
  local_38[1] = 4;
  *local_38 = &DAT_00287e75;
  local_38[3] = sLen;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_38[2] = in_stack_00000008;
  }
  else {
    runtime_gcWriteBarrierCX();
    local_38 = extraout_RAX_02;
  }
  pvVar4 = strconv_ErrSyntax.data;
  local_38[4] = strconv_ErrSyntax.tab;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_38[5] = pvVar4;
  }
  else {
    runtime_gcWriteBarrierCX();
    local_38 = extraout_RAX_03;
  }
  mVar12.~r2.tab._0_1_ = cVar3;
  mVar12.~r1 = (int)local_38;
  mVar12.~r2.tab._1_7_ = 0;
  mVar12.~r2.data = go_itab__strconv_NumError_error;
  return mVar12;
}


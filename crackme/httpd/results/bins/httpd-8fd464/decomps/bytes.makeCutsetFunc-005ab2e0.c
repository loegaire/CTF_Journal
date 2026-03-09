
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.makeCutsetFunc(string cutset, func(int32)_bool * * ~r1) */

func_int32__bool ** bytes_makeCutsetFunc(string cutset)

{
  uint *puVar1;
  byte bVar2;
  func_int32__bool **extraout_RAX;
  func_int32__bool **extraout_RAX_00;
  func_int32__bool **extraout_RAX_01;
  long lVar3;
  long in_FS_OFFSET;
  string cutset_spill;
  func_int32__bool **local_38;
  func_int32__bool *local_30;
  func_int32__bool *pfStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  func_int32__bool **local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((cutset_spill.len == 1) && (*cutset_spill.str < 0x80)) {
    runtime_newobject((runtime__type *)&DAT_002458a0);
    *local_38 = bytes_makeCutsetFunc_func1;
    local_38[2] = (func_int32__bool *)0x1;
    if (runtime_writeBarrier._0_4_ == 0) {
      local_38[1] = (func_int32__bool *)cutset_spill.str;
    }
    else {
      runtime_gcWriteBarrierCX();
      local_38 = extraout_RAX;
    }
    return local_38;
  }
                    /* Unresolved local var: bytes.asciiSet * &as@[???] */
  runtime_newobject((runtime__type *)&DAT_00234820);
  local_30 = (func_int32__bool *)0x0;
  pfStack_28 = (func_int32__bool *)0x0;
  local_20 = 0;
  uStack_18 = 0;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint8 c@[???] */
  for (lVar3 = 0; (lVar3 < cutset_spill.len && (bVar2 = cutset_spill.str[lVar3], bVar2 < 0x80));
      lVar3 = lVar3 + 1) {
    puVar1 = (uint *)((long)&local_30 + (ulong)(bVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << (bVar2 & 0x1f);
  }
  *local_38 = local_30;
  local_38[1] = pfStack_28;
  local_38[2] = (func_int32__bool *)0x0;
  local_38[3] = (func_int32__bool *)0x0;
  if (cutset_spill.len <= lVar3) {
    local_10 = local_38;
    runtime_newobject((runtime__type *)&DAT_00245820);
    *local_38 = bytes_makeCutsetFunc_func2;
    if (runtime_writeBarrier._0_4_ == 0) {
      local_38[1] = (func_int32__bool *)local_10;
    }
    else {
      runtime_gcWriteBarrierCX();
      local_38 = extraout_RAX_01;
    }
    return local_38;
  }
  runtime_newobject((runtime__type *)&DAT_002458a0);
  *local_38 = bytes_makeCutsetFunc_func3;
  local_38[2] = (func_int32__bool *)cutset_spill.len;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_38[1] = (func_int32__bool *)cutset_spill.str;
  }
  else {
    runtime_gcWriteBarrierCX();
    local_38 = extraout_RAX_00;
  }
  return local_38;
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.Fields(string s, []string ~r1) */

__string strings_Fields(string s)

{
  byte *pbVar1;
  long extraout_RAX;
  long extraout_RAX_00;
  long lVar2;
  uint8 *extraout_RDX;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint8 *puVar7;
  long in_FS_OFFSET;
  string s_00;
  __string _Var8;
  __string _Var9;
  string s_spill;
  long local_28;
  int local_20;
  
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: int wasSpace@[???]
                       Unresolved local var: uint8 setBits@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: int na@[???]
                       Unresolved local var: int fieldStart@[???]
                       Unresolved local var: []string a@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar3 = 0;
  uVar5 = 0;
  uVar4 = 1;
                    /* Unresolved local var: int i@[???] */
  for (lVar2 = 0; lVar2 < s_spill.len; lVar2 = lVar2 + 1) {
                    /* Unresolved local var: uint8 r@[???] */
    pbVar1 = s_spill.str + lVar2;
    uVar3 = (ulong)((uint)uVar3 | (uint)*pbVar1);
    uVar5 = uVar5 + (uVar4 & ~(ulong)strings_asciiSpace[*pbVar1]);
    uVar4 = (ulong)strings_asciiSpace[*pbVar1];
  }
  if (0x7f < (byte)uVar3) {
    s_00.len = uVar3;
    s_00.str = (uint8 *)&PTR_unicode_IsSpace_002b3b68;
    _Var8 = strings_FieldsFunc(s_00,(func_int32__bool **)s_spill.str);
    _Var8.array = (string *)local_28;
    _Var8.cap = local_20;
    return _Var8;
  }
  runtime_makeslice((runtime__type *)&DAT_00225520,uVar3,(int)s_spill.str);
  uVar4 = 0;
  while (((long)uVar4 < s_spill.len && (strings_asciiSpace[s_spill.str[uVar4]] != 0))) {
    uVar4 = uVar4 + 1;
  }
  puVar7 = strings_asciiSpace;
  uVar3 = 0;
  uVar6 = uVar4;
  do {
    while( true ) {
      if (s_spill.len <= (long)uVar4) {
        if ((long)uVar6 < s_spill.len) {
          if ((ulong)s_spill.len < uVar6) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceB();
          }
          uVar4 = s_spill.len - uVar6;
          s_spill.len = (long)-uVar4 >> 0x3f;
          if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          *(ulong *)(local_28 + 8 + uVar3 * 0x10) = uVar4;
          if (runtime_writeBarrier._0_4_ == 0) {
            *(uint8 **)(local_28 + uVar3 * 0x10) = s_spill.str + (uVar6 & s_spill.len);
          }
          else {
            runtime_gcWriteBarrierDX();
            local_28 = extraout_RAX_00;
          }
        }
        _Var9.len = uVar4;
        _Var9.array = (string *)local_28;
        _Var9.cap = s_spill.len;
        return _Var9;
      }
      if ((ulong)s_spill.len <= uVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (puVar7[s_spill.str[uVar4]] != 0) break;
      uVar4 = uVar4 + 1;
    }
    if (uVar4 < uVar6) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    *(ulong *)(local_28 + 8 + uVar3 * 0x10) = uVar4 - uVar6;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(uint8 **)(local_28 + uVar3 * 0x10) = s_spill.str + (uVar6 & (long)-(uVar4 - uVar6) >> 0x3f);
    }
    else {
      runtime_gcWriteBarrierBX();
      s_spill.str = extraout_RDX;
      local_28 = extraout_RAX;
    }
    do {
      uVar4 = uVar4 + 1;
      if (s_spill.len <= (long)uVar4) break;
      if ((ulong)s_spill.len <= uVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
    } while (puVar7[s_spill.str[uVar4]] != 0);
    uVar3 = uVar3 + 1;
    uVar6 = uVar4;
  } while( true );
}


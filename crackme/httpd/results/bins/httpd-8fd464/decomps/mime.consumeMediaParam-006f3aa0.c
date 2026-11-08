
/* WARNING: Removing unreachable block (ram,0x006f3def) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void mime.consumeMediaParam(string v, string param, string value,
   string rest) */

multireturn_string_string_string_ mime_consumeMediaParam(string v)

{
  undefined1 auVar1 [48];
  uint8 *puVar2;
  func_int32__bool **ppfVar3;
  long lVar4;
  func_int32__bool **ppfVar5;
  undefined8 in_RSI;
  undefined8 in_RDI;
  int iVar6;
  undefined8 in_R8;
  long in_FS_OFFSET;
  string s;
  string v_00;
  string sVar7;
  string s_01;
  string s_02;
  string v_01;
  multireturn_string_string_string_ mVar8;
  multireturn_string_string_string_ mVar9;
  multireturn_string_string_string_ mVar10;
  multireturn_string_string_ mVar11;
  multireturn_string_string__conflict mVar12;
  string v_spill;
  uint7 uStack_9f;
  func_int32__bool **local_98;
  func_int32__bool **local_90;
  func_int32__bool **local_38;
  uint8 *local_30;
  uint8 *local_28;
  func_int32__bool **local_20;
  undefined **local_18;
  undefined **local_10;
  string s_00;
  
  sVar7.len = v.len;
                    /* Unresolved local var: string rest2@[???]
                       Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
  while (&local_38 <= *(func_int32__bool ****)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sVar7.str = v_spill.str;
                    /* Unresolved local var: int i@[???] */
  strings_indexFunc(sVar7,(func_int32__bool **)v_spill.len,SUB81(in_RDI,0));
  if (local_98 == (func_int32__bool **)0xffffffffffffffff) {
    lVar4 = 0;
    puVar2 = (uint8 *)0x0;
  }
  else {
    if ((ulong)v_spill.len < local_98) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    lVar4 = v_spill.len - (long)local_98;
    puVar2 = v_spill.str + ((ulong)local_98 & -lVar4 >> 0x3f);
  }
  if ((lVar4 < 1) || (*puVar2 != 0x3b)) {
    mVar10.param.len = lVar4;
    mVar10.param.str = puVar2;
    mVar10.rest.str = (uint8 *)in_RSI;
    mVar10.value.len = in_RDI;
    mVar10.value.str = v_spill.str;
    mVar10.rest.len = in_R8;
    return mVar10;
  }
  s.str = puVar2 + (-(long)(lVar4 - 1U) >> 0x3f & 1);
  s.len = lVar4;
  local_28 = s.str;
                    /* Unresolved local var: int i@[???] */
  strings_indexFunc(s,(func_int32__bool **)&PTR_unicode_IsSpace_002b3b68,SUB81(in_RDI,0));
  if (local_98 == (func_int32__bool **)0xffffffffffffffff) {
    puVar2 = (uint8 *)0x0;
  }
  else {
    if ((func_int32__bool **)(lVar4 - 1U) < local_98) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    puVar2 = local_28 + ((ulong)local_98 & -((lVar4 - (long)local_98) + -1) >> 0x3f);
  }
  v_00.len = lVar4;
  v_00.str = puVar2;
  mVar11 = mime_consumeToken(v_00);
  iVar6 = mVar11.rest.len;
                    /* Unresolved local var: int i@[???] */
  local_38 = local_98;
  s_00.len = (int)local_98;
  s_00.str = (uint8 *)&PTR_unicode_IsSpace_002b3b68;
  sVar7 = strings_ToLower(s_00);
  s_01.len = sVar7.len;
  if ((ulong)uStack_9f != 0) {
    local_10 = &PTR_unicode_IsSpace_002b3b68;
    s_01.str = (uint8 *)local_38;
    ppfVar3 = local_90;
    strings_indexFunc(s_01,local_90,SUB81(iVar6,0));
    if (local_98 == (func_int32__bool **)0xffffffffffffffff) {
      lVar4 = 0;
      puVar2 = (uint8 *)0x0;
      local_38 = ppfVar3;
    }
    else {
      if (local_90 < local_98) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      lVar4 = (long)local_90 - (long)local_98;
      puVar2 = (uint8 *)(((ulong)local_98 & -lVar4 >> 0x3f) + (long)local_38);
    }
    if ((0 < lVar4) && (*puVar2 == 0x3d)) {
      ppfVar3 = (func_int32__bool **)(lVar4 - 1);
      s_02.str = puVar2 + (-(long)ppfVar3 >> 0x3f & 1);
      s_02.len = (int)ppfVar3;
      local_30 = s_02.str;
                    /* Unresolved local var: int i@[???] */
      strings_indexFunc(s_02,(func_int32__bool **)&PTR_unicode_IsSpace_002b3b68,SUB81(iVar6,0));
      if (local_98 == (func_int32__bool **)0xffffffffffffffff) {
        ppfVar5 = (func_int32__bool **)0x0;
        puVar2 = (uint8 *)0x0;
      }
      else {
        if (ppfVar3 < local_98) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        ppfVar5 = (func_int32__bool **)((lVar4 - (long)local_98) + -1);
        puVar2 = local_30 + ((ulong)local_98 & -(long)ppfVar5 >> 0x3f);
      }
      v_01.len = (int)ppfVar3;
      v_01.str = puVar2;
      mVar12 = mime_consumeValue(v_01);
      iVar6 = mVar12.rest.len;
      if ((uStack_9f == 0) && (ppfVar5 == local_90)) {
        local_20 = local_98;
        local_18 = &PTR_unicode_IsSpace_002b3b68;
        runtime_memequal();
        local_98 = local_20;
      }
      auVar1._7_8_ = local_90;
      auVar1._0_7_ = uStack_9f;
      auVar1._31_8_ = (ulong)uStack_9f << 8;
      auVar1._23_8_ = iVar6;
      auVar1._15_8_ = local_98;
      auVar1._39_8_ = in_R8;
      auVar1[0x2f] = 0;
      return (multireturn_string_string_string_)(auVar1 << 8);
    }
    mVar8.param.len = s_01.len;
    mVar8.param.str = (uint8 *)v_spill.len;
    mVar8.rest.str = (uint8 *)in_RSI;
    mVar8.value.len = iVar6;
    mVar8.value.str = (uint8 *)local_38;
    mVar8.rest.len = in_R8;
    return mVar8;
  }
  mVar9.param.len = s_01.len;
  mVar9.param.str = (uint8 *)v_spill.len;
  mVar9.rest.str = (uint8 *)in_RSI;
  mVar9.value.len = iVar6;
  mVar9.value.str = (uint8 *)0x0;
  mVar9.rest.len = in_R8;
  return mVar9;
}


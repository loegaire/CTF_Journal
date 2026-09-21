
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.FieldsFunc(string s, func(int32)_bool * * f, []string ~r2)
    */

__string strings_FieldsFunc(string s,func_int32__bool **f)

{
  runtime__type *prVar1;
  ulong uVar2;
  ulong uVar3;
  runtime__type *prVar4;
  runtime__type *prVar5;
  runtime__type *et;
  runtime__type *extraout_RAX;
  runtime__type *k;
  ulong extraout_RDX;
  runtime__type *len;
  runtime__type *prVar6;
  bool *pbVar8;
  int iVar9;
  long lVar10;
  long in_FS_OFFSET;
  runtime_slice old;
  runtime_slice rVar11;
  __string _Var12;
  string s_00;
  string s_spill;
  func_int32__bool **f_spill;
  bool *local_270;
  runtime__type *local_260;
  runtime__type *local_258;
  bool *local_250;
  long local_248;
  runtime__type *local_240;
  bool local_210 [24];
  undefined1 local_1f8 [488];
  bool *local_10;
  runtime__type *prVar7;
  
                    /* Unresolved local var: int start@[???]
                       Unresolved local var: []strings.span.1 spans@[???]
                       Unresolved local var: []string a@[???] */
  while (local_1f8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  FUN_0051a0f8(local_210);
  len = (runtime__type *)&DAT_00000020;
  prVar5 = (runtime__type *)0x0;
  k = (runtime__type *)0xffffffffffffffff;
  et = (runtime__type *)0x0;
  pbVar8 = local_210;
                    /* Unresolved local var: int end@[???]
                       Unresolved local var: int32 rune@[???] */
  while (prVar7 = prVar5, (long)prVar7 < s_spill.len) {
    iVar9 = s_spill.len;
    local_10 = pbVar8;
    if (s_spill.str[(long)prVar7] < 0x80) {
      prVar5 = (runtime__type *)((long)&prVar7->size + 1);
    }
    else {
      local_270 = (bool *)s_spill.len;
      s_00.len = (int)len;
      s_00.str = (uint8 *)prVar7;
      runtime_decoderune(s_00,(int)k);
      prVar5 = local_258;
    }
    (**f_spill)((int32)iVar9,pbVar8);
    pbVar8 = local_10;
    if ((char)local_270 == '\0') {
      if ((long)k < 0) {
        k = prVar7;
      }
    }
    else if (-1 < (long)k) {
      prVar1 = (runtime__type *)((long)&et->size + 1);
      prVar6 = prVar1;
      prVar4 = len;
      if (len < prVar1) {
        local_270 = local_10;
        old.len = (int)et;
        old.array = prVar1;
        old.cap = iVar9;
        runtime_growslice((runtime__type *)&DAT_0024e3a0,old,(int)len);
        pbVar8 = local_250;
        prVar6 = (runtime__type *)(local_248 + 1);
        prVar4 = local_240;
        local_260 = len;
        local_258 = prVar1;
      }
      len = prVar4;
      *(runtime__type **)(pbVar8 + (long)et * 0x10) = k;
      *(runtime__type **)(pbVar8 + (long)et * 0x10 + 8) = prVar7;
      k = (runtime__type *)~(ulong)k;
      et = prVar6;
    }
  }
  if (-1 < (long)k) {
    prVar5 = (runtime__type *)((long)&et->size + 1);
    prVar7 = len;
    if (len < prVar5) {
      rVar11.len = (int)&DAT_0024e3a0;
      rVar11.array = len;
      rVar11.cap = s_spill.len;
      rVar11 = runtime_growslice(prVar5,rVar11,(int)pbVar8);
      prVar7 = (runtime__type *)rVar11.len;
      prVar5 = (runtime__type *)(local_248 + 1);
      pbVar8 = local_250;
      local_260 = len;
    }
    *(runtime__type **)(pbVar8 + (long)et * 0x10) = k;
    *(int *)(pbVar8 + (long)et * 0x10 + 8) = s_spill.len;
    et = prVar5;
    len = prVar7;
  }
  local_10 = pbVar8;
  runtime_makeslice(et,(int)len,0x225520);
                    /* Unresolved local var: int i@[???] */
  if (0 < (long)et) {
    lVar10 = 0;
    pbVar8 = local_10;
    while( true ) {
      uVar2 = *(ulong *)(pbVar8 + 8);
      uVar3 = *(ulong *)pbVar8;
      if ((ulong)s_spill.len < uVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      if (uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      (&local_260->ptrdata)[lVar10 * 2] = uVar2 - uVar3;
      if (runtime_writeBarrier._0_4_ == 0) {
        (&local_260->size)[lVar10 * 2] =
             (uintptr)(s_spill.str + (uVar3 & (long)-(uVar2 - uVar3) >> 0x3f));
      }
      else {
        runtime_gcWriteBarrierR8();
        local_260 = extraout_RAX;
        s_spill.len = extraout_RDX;
      }
      lVar10 = lVar10 + 1;
      len = (runtime__type *)s_spill.str;
      if ((long)et <= lVar10) break;
      pbVar8 = pbVar8 + 0x10;
    }
  }
  _Var12.len = (int)len;
  _Var12.array = (string *)local_260;
  _Var12.cap = (int)et;
  return _Var12;
}


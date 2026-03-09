
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.typesByString(string s, []*reflect.rtype ~r1) */

___reflect_rtype reflect_typesByString(string s)

{
  ulong uVar1;
  ulong uVar2;
  uint8 *puVar3;
  uint8 *puVar4;
  uint8 *puVar5;
  uint8 *puVar6;
  uint8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  ___reflect_rtype _Var12;
  runtime_slice old;
  string s_spill;
  long local_e8;
  ulong local_e0;
  uint8 *local_d8;
  uint8 *local_d0;
  uint8 *local_c8;
  long local_c0;
  long local_b8;
  uint8 *local_b0;
  ulong local_68;
  uint8 *local_60;
  uint8 *local_58;
  ulong local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  reflect_rtype *local_20;
  long local_18;
  uint8 *local_10;
  
  puVar3 = local_c8;
                    /* Unresolved local var: []unsafe.Pointer sections@[???]
                       Unresolved local var: [][]int32 offset@[???]
                       Unresolved local var: []*reflect.rtype ret@[???] */
  while (&local_68 <= *(ulong **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  reflect_typelinks();
                    /* Unresolved local var: int offsI@[???]
                       Unresolved local var: []int32 offs@[???] */
                    /* Unresolved local var: void * section@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???] */
  if (0 < (long)local_c8) {
    local_40 = local_e8;
    uVar8 = 0;
    puVar6 = (uint8 *)0x0;
    puVar4 = (uint8 *)0x0;
    lVar10 = 0;
    puVar5 = local_d0;
    do {
      uVar2 = *(ulong *)(puVar5 + 8);
      if (local_e0 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
                    /* Unresolved local var: int j@[???]
                       Unresolved local var: reflect.rtype * typ@[???] */
      local_38 = *(long *)(local_e8 + uVar8 * 8);
      uVar1 = uVar2;
      uVar11 = 0;
      local_30 = lVar10;
      local_28 = *(long *)puVar5;
      local_10 = puVar5;
      while (uVar9 = uVar1, puVar5 = puVar6, lVar10 = local_30, (long)uVar11 < (long)uVar9) {
        lVar10 = (long)(uVar9 - uVar11) >> 1;
        uVar1 = lVar10 + uVar11;
        if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        local_68 = uVar11;
        local_50 = uVar1;
        local_48 = lVar10;
        reflect___rtype__String((reflect_rtype *)(*(int *)(local_28 + uVar1 * 4) + local_38));
        local_d8 = s_spill.str;
        local_d0 = (uint8 *)s_spill.len;
        runtime_cmpstring();
        local_e8 = local_40;
        uVar1 = local_50;
        uVar11 = local_68;
        if ((long)local_c8 < 0) {
          uVar1 = uVar9;
          uVar11 = local_48 + local_68 + 1;
        }
      }
      for (; puVar6 = puVar5, (long)uVar11 < (long)uVar2; uVar11 = uVar11 + 1) {
        if (uVar2 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        local_20 = (reflect_rtype *)(*(int *)(local_28 + uVar11 * 4) + local_38);
        local_60 = puVar4;
        local_58 = puVar5;
        local_18 = lVar10;
        reflect___rtype__String(local_20);
        local_e8 = local_40;
        puVar6 = local_58;
        puVar4 = local_60;
        lVar10 = local_18;
        if (local_d8 != (uint8 *)s_spill.len) break;
        runtime_memequal();
        local_e8 = local_40;
        puVar6 = local_58;
        puVar4 = local_60;
        lVar10 = local_18;
        if ((char)local_d0 == '\0') break;
        puVar6 = local_58 + 1;
        puVar7 = puVar6;
        if (local_60 < puVar6) {
          local_d8 = local_58;
          local_d0 = local_60;
          old.len = local_18;
          old.array = puVar6;
          old.cap = (int)puVar5;
          runtime_growslice((runtime__type *)&DAT_00281a20,old,(int)local_60);
          puVar7 = (uint8 *)(local_b8 + 1);
          puVar4 = local_b0;
          lVar10 = local_c0;
          local_c8 = puVar6;
        }
        if (runtime_writeBarrier._0_4_ == 0) {
          *(reflect_rtype **)(lVar10 + (long)local_58 * 8) = local_20;
        }
        else {
          runtime_gcWriteBarrierDX();
        }
        local_e8 = local_40;
        puVar5 = puVar7;
      }
      uVar8 = uVar8 + 1;
      if ((long)puVar3 <= (long)uVar8) goto LAB_00538470;
      puVar5 = local_10 + 0x18;
    } while( true );
  }
  puVar4 = (uint8 *)0x0;
  puVar6 = (uint8 *)0x0;
LAB_00538470:
  _Var12.len = local_e0;
  _Var12.array = (reflect_rtype **)puVar4;
  _Var12.cap = (int)puVar6;
  return _Var12;
}


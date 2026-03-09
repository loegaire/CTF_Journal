
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.newAbiDesc(reflect.funcType * t, reflect.rtype * rcvr,
   reflect.abiDesc ~r2) */

reflect_abiDesc reflect_newAbiDesc(reflect_funcType *t,reflect_rtype *rcvr)

{
  ushort uVar1;
  uint uVar2;
  reflect_abiDesc rVar3;
  uintptr extraout_RAX;
  ulong uVar4;
  uintptr extraout_RAX_00;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 extraout_RDX;
  long *plVar8;
  ulong uVar9;
  reflect_rtype *prVar10;
  ulong uVar11;
  int *piVar12;
  ushort uVar13;
  reflect_abiSeq *prVar14;
  long lVar15;
  uintptr uVar16;
  long in_FS_OFFSET;
  runtime_slice old;
  runtime_slice old_00;
  multireturn_reflect_abiStep___bool_ mVar17;
  reflect_abiDesc return_value_alias_variable;
  reflect_funcType *t_spill;
  reflect_rtype *rcvr_spill;
  reflect_rtype *local_190;
  reflect_abiSeq *local_188;
  char local_180;
  uintptr local_170;
  reflect_abiSeq *local_168;
  func_unsafe_Pointer__unsafe_Pointer__bool **local_160;
  reflect_rtype *local_128;
  long lStack_118;
  long local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long local_b8;
  reflect_rtype *local_b0;
  reflect_abiSeq *local_a8;
  reflect_abiSeq *local_a0;
  long local_98;
  ulong local_90;
  ulong uStack_88;
  long local_80;
  ulong uStack_78;
  undefined8 local_70;
  reflect_rtype *prStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  reflect_abiSeq local_50;
  
                    /* Unresolved local var: uintptr spill@[???]
                       Unresolved local var: reflect.bitVector * stackPtrs@[???]
                       Unresolved local var: uintptr stackCallArgsSize@[???]
                       Unresolved local var: uintptr retOffset@[???]
                       Unresolved local var: reflect.abiSeq in@[???]
                       Unresolved local var: reflect.abiSeq out@[???]
                       Unresolved local var: uintptr ~R0@[???] */
  while (&lStack_118 <= *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  return_value_alias_variable.call.steps.cap = 0;
  piVar12 = &return_value_alias_variable.call.steps.len;
  FUN_0051a16f();
  runtime_newobject((runtime__type *)&DAT_0024d680);
  local_b0 = local_190;
  local_50.steps.array = (reflect_abiStep *)0x0;
  local_50.steps.len = 0;
  local_50.steps.cap = 0;
  local_50.valueStart.array = (int *)0x0;
  local_50.valueStart.len = 0;
  local_50.valueStart.cap = 0;
  local_50.stackBytes = 0;
  local_50.iregs = 0;
  local_50.fregs = 0;
  if (return_value_alias_variable.call.steps.len == 0) {
    lVar5 = 0;
  }
  else {
    iVar6 = return_value_alias_variable.call.steps.len;
    mVar17 = reflect___abiSeq__addRcvr(&local_50,rcvr);
    old.array = (reflect_rtype *)CONCAT71((int7)((ulong)rcvr >> 8),mVar17.~r2);
    if (local_188 == (reflect_abiSeq *)0x0) {
                    /* Unresolved local var: reflect.abiStep * stkStep@[???] */
      lVar5 = 8;
      rcvr = old.array;
    }
    else {
      if (local_180 == '\0') {
        prVar10 = local_b0;
        if ((local_b0->size & 7) == 0) {
          prVar14 = *(reflect_abiSeq **)&local_b0->hash;
          uVar16 = local_b0->ptrdata;
          if (local_b0->equal <
              (func_unsafe_Pointer__unsafe_Pointer__bool **)((long)&(prVar14->steps).array + 1U)) {
            old_00.len = iVar6;
            old_00.array = old.array;
            old_00.cap = (int)piVar12;
            runtime_growslice((runtime__type *)&DAT_00225720,old_00,(int)local_b0);
            old.array = local_b0;
            local_b0->equal = local_160;
            prVar10 = old.array;
            local_188 = prVar14;
            if (runtime_writeBarrier._0_4_ == 0) {
              local_b0->ptrdata = local_170;
              prVar14 = local_168;
              uVar16 = local_170;
            }
            else {
              runtime_gcWriteBarrier();
              prVar14 = local_168;
              uVar16 = extraout_RAX_00;
            }
          }
          *(undefined1 **)&prVar10->hash = (undefined1 *)((long)&(prVar14->steps).array + 1);
          *(undefined1 *)((long)&(prVar14->steps).array + uVar16) = 0;
        }
        uVar4._0_4_ = prVar10->hash;
        uVar4._4_1_ = prVar10->tflag;
        uVar4._5_1_ = prVar10->align;
        uVar4._6_1_ = prVar10->fieldAlign;
        uVar4._7_1_ = prVar10->kind;
        if (uVar4 <= (uint)prVar10->size >> 3) goto LAB_00532fc7;
        *(int *)&prVar10->size = (int)prVar10->size + 1;
      }
      else {
        prVar10 = local_b0;
        if ((local_b0->size & 7) == 0) {
          prVar14 = *(reflect_abiSeq **)&local_b0->hash;
          uVar16 = local_b0->ptrdata;
          if (local_b0->equal <
              (func_unsafe_Pointer__unsafe_Pointer__bool **)((long)&(prVar14->steps).array + 1U)) {
            old.len = iVar6;
            old.cap = (int)piVar12;
            runtime_growslice((runtime__type *)&DAT_00225720,old,(int)local_b0);
            old.array = local_b0;
            local_b0->equal = local_160;
            prVar10 = old.array;
            local_188 = prVar14;
            if (runtime_writeBarrier._0_4_ == 0) {
              local_b0->ptrdata = local_170;
              prVar14 = local_168;
              uVar16 = local_170;
            }
            else {
              runtime_gcWriteBarrier();
              prVar14 = local_168;
              uVar16 = extraout_RAX;
            }
          }
          *(undefined1 **)&prVar10->hash = (undefined1 *)((long)&(prVar14->steps).array + 1);
          *(undefined1 *)((long)&(prVar14->steps).array + uVar16) = 0;
        }
        uVar11._0_4_ = prVar10->hash;
        uVar11._4_1_ = prVar10->tflag;
        uVar11._5_1_ = prVar10->align;
        uVar11._6_1_ = prVar10->fieldAlign;
        uVar11._7_1_ = prVar10->kind;
        uVar2 = (uint)prVar10->size;
        uVar4 = (ulong)(uVar2 >> 3);
        if (uVar11 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        *(byte *)(prVar10->ptrdata + uVar4) =
             *(byte *)(prVar10->ptrdata + uVar4) | (byte)(1 << (uVar2 & 7));
        *(int *)&prVar10->size = (int)prVar10->size + 1;
      }
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: reflect.rtype * arg@[???]
                       Unresolved local var: reflect.rtype * * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
      lVar5 = 0;
      rcvr = old.array;
    }
  }
                    /* Unresolved local var: uintptr uadd@[???] */
  if (((return_value_alias_variable.call.steps.array)->size & 0x100000000) == 0) {
    local_b8 = 0x38;
  }
  else {
    local_b8 = 0x48;
  }
  uVar13 = (ushort)return_value_alias_variable.call.steps.array[1].kind;
  uVar4 = (ulong)uVar13;
  if (uVar13 == 0) {
    uVar4 = 0;
    local_b8 = 0;
  }
  else {
    local_b8 = (long)&(return_value_alias_variable.call.steps.array)->kind + local_b8;
    if (0x100000 < uVar4) {
      runtime_panicSlice3Alen();
LAB_00532fc7:
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
  }
  old.array = (reflect_rtype *)0x0;
  do {
    uVar16 = local_50.stackBytes;
    if ((long)old.array < (long)uVar4) {
      local_a0 = *(reflect_abiSeq **)(local_b8 + (long)old.array * 8);
      reflect___abiSeq__addArg(local_a0,rcvr);
      local_128 = old.array;
      if (local_188 == (reflect_abiSeq *)0x0) {
        uVar11 = (ulong)*(byte *)((long)&(local_a0->steps).cap + 5);
        lVar5 = (long)&((local_a0->steps).array)->kind + (-uVar11 & (lVar5 + uVar11) - 1);
                    /* Unresolved local var: int s@[???]
                       Unresolved local var: int e@[???] */
        if ((ulong)local_50.valueStart.len <= old.array) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        uVar11 = local_50.valueStart.array[(long)old.array];
        uVar9 = local_50.steps.len;
        if (old.array !=
            (reflect_rtype *)
            ((long)&((reflect_rtype *)(local_50.valueStart.len + -0x30))->ptrToThis + 3U)) {
          if ((ulong)local_50.valueStart.len <= (reflect_rtype *)((long)&(old.array)->size + 1U)) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          uVar9 = local_50.valueStart.array[(long)((long)&(old.array)->size + 1)];
        }
        if ((ulong)local_50.steps.cap < uVar9) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAcap();
        }
        if (uVar9 < uVar11) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        plVar8 = (long *)((long)&(local_50.steps.array)->kind +
                         ((long)(uVar11 - local_50.steps.cap) >> 0x3f & uVar11 * 0x30));
                    /* Unresolved local var: reflect.abiStep st@[???] */
        if (0 < (long)(uVar9 - uVar11)) {
          lVar15 = 0;
          while( true ) {
            local_f0 = *plVar8;
            lStack_e8 = plVar8[1];
            local_e0 = plVar8[2];
            lStack_d8 = plVar8[3];
            local_d0 = plVar8[4];
            lStack_c8 = plVar8[5];
            if (local_f0 == 3) {
                    /* WARNING: Subroutine does not return */
              runtime_panicIndex();
            }
            lVar15 = lVar15 + 1;
            if ((long)(uVar9 - uVar11) <= lVar15) break;
            plVar8 = plVar8 + 6;
          }
        }
      }
      else {
        local_188 = local_a0;
        reflect_addTypeBits((reflect_bitVector *)local_a0,(uintptr)rcvr,local_b0);
      }
    }
    else {
      local_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      local_60 = 0;
      uStack_58 = 0;
      old.array = (reflect_rtype *)(local_50.stackBytes + 7 & 0xfffffffffffffff8);
      if (((return_value_alias_variable.call.steps.array)->size & 0x100000000) == 0) {
        local_c0 = 0x38;
      }
      else {
        local_c0 = 0x48;
      }
      uVar13 = *(ushort *)((long)&return_value_alias_variable.call.steps.array[1].kind + 2) & 0x7fff
      ;
      prStack_68 = old.array;
      if (uVar13 == 0) {
        lVar15 = 0;
        local_c0 = 0;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: reflect.rtype * res@[???]
                       Unresolved local var: reflect.rtype * * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
LAB_00532c6b:
        uVar4 = 0;
        do {
          if (lVar15 <= (long)uVar4) {
            prStack_68 = (reflect_rtype *)((long)prStack_68 - (long)old.array);
            return_value_alias_variable.call.steps.cap = 0;
            FUN_0051a16f(&return_value_alias_variable.call.steps.len,local_c0,uVar16);
            rVar3.call.steps.len = return_value_alias_variable.call.steps.len;
            rVar3.call.steps.array = return_value_alias_variable.call.steps.array;
            rVar3.call.steps.cap = (int)local_50.steps.array;
            rVar3.call.valueStart.array = (int *)local_50.steps.len;
            rVar3.call.valueStart.len = local_50.steps.cap;
            rVar3.call.valueStart.cap = (int)local_50.valueStart.array;
            rVar3.call.stackBytes = local_50.valueStart.len;
            rVar3.call.iregs = local_50.valueStart.cap;
            rVar3.call.fregs = local_50.stackBytes;
            rVar3.ret.steps.array = (reflect_abiStep *)local_50.iregs;
            rVar3.ret.steps.len = local_50.fregs;
            rVar3.ret.steps.cap = local_98;
            rVar3.ret.valueStart.array = (int *)local_90;
            rVar3.ret.valueStart.len = uStack_88;
            rVar3.ret.valueStart.cap = local_80;
            rVar3.ret.stackBytes = uStack_78;
            rVar3.ret.iregs = local_70;
            rVar3.ret.fregs = (int)prStack_68;
            rVar3.stackCallArgsSize = local_60;
            rVar3.retOffset = uStack_58;
            rVar3.spill = extraout_RDX;
            rVar3.stackPtrs = (reflect_bitVector *)old.array;
            rVar3._176_8_ = lVar5 + 7U & 0xfffffffffffffff8;
            return rVar3;
          }
          local_a8 = *(reflect_abiSeq **)(local_c0 + uVar4 * 8);
                    /* Unresolved local var: reflect.abiStep * stkStep@[???] */
          reflect___abiSeq__addArg(local_a8,old.array);
          if (local_188 == (reflect_abiSeq *)0x0) {
                    /* Unresolved local var: int s@[???]
                       Unresolved local var: int e@[???] */
            if (uStack_78 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              runtime_panicIndex();
            }
            uVar11 = *(ulong *)(local_80 + uVar4 * 8);
            uVar9 = local_90;
            if (uVar4 != uStack_78 - 1) {
              if (uStack_78 <= uVar4 + 1) {
                    /* WARNING: Subroutine does not return */
                runtime_panicIndex();
              }
              uVar9 = *(ulong *)(local_80 + 8 + uVar4 * 8);
            }
            if (uStack_88 < uVar9) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceAcap();
            }
            if (uVar9 < uVar11) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceB();
            }
            plVar8 = (long *)(local_98 + ((long)(uVar11 - uStack_88) >> 0x3f & uVar11 * 0x30));
                    /* Unresolved local var: reflect.abiStep st@[???] */
            if (0 < (long)(uVar9 - uVar11)) {
              lVar7 = 0;
              while( true ) {
                lStack_118 = plVar8[1];
                local_110 = plVar8[2];
                lStack_108 = plVar8[3];
                local_100 = plVar8[4];
                lStack_f8 = plVar8[5];
                if (*plVar8 == 3) {
                    /* WARNING: Subroutine does not return */
                  runtime_panicIndex();
                }
                lVar7 = lVar7 + 1;
                if ((long)(uVar9 - uVar11) <= lVar7) break;
                plVar8 = plVar8 + 6;
              }
            }
          }
          else {
            local_188 = local_a8;
            reflect_addTypeBits((reflect_bitVector *)local_a8,(uintptr)old.array,local_b0);
          }
          uVar4 = uVar4 + 1;
        } while( true );
      }
      uVar1 = (ushort)return_value_alias_variable.call.steps.array[1].kind;
      uVar9 = (ulong)uVar1;
      local_c0 = (long)&(return_value_alias_variable.call.steps.array)->kind + local_c0;
      uVar11 = (ulong)(ushort)(uVar13 + uVar1);
      if (uVar9 <= uVar11) {
        lVar15 = uVar11 - uVar9;
        local_c0 = local_c0 + (uVar9 << 3 & -lVar15 >> 0x3f);
        goto LAB_00532c6b;
      }
      lVar5 = local_c0;
      runtime_panicSlice3C();
    }
    old.array = (reflect_rtype *)((long)&local_128->size + 1);
                    /* Unresolved local var: uintptr uadd@[???]
                       Unresolved local var: uint16 outCount@[???] */
    rcvr = local_128;
  } while( true );
}


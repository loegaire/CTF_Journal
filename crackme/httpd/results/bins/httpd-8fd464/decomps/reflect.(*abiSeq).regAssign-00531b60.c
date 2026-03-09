
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*abiSeq).regAssign(reflect.abiSeq * a, reflect.rtype * t,
   uintptr offset, bool ~r2) */

bool reflect___abiSeq__regAssign(reflect_abiSeq *a,reflect_rtype *t,uintptr offset)

{
  uintptr uVar1;
  bool bVar2;
  reflect_abiStep *extraout_RAX;
  reflect_abiStep *extraout_RAX_00;
  reflect_abiStep *extraout_RAX_01;
  long lVar3;
  reflect_abiSeq *prVar4;
  long lVar5;
  ulong uVar6;
  uint8 ptrMap;
  undefined8 in_RSI;
  int in_RDI;
  reflect_abiStep *prVar7;
  long in_FS_OFFSET;
  string s;
  interface___ e;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  reflect_abiSeq *a_spill;
  reflect_arrayType *tt;
  uintptr offset_spill;
  char local_f0;
  undefined1 local_e0;
  undefined7 uStack_df;
  long local_d8;
  int local_d0;
  reflect_abiSeq *local_b0;
  reflect_rtype *local_a0;
  uintptr local_88;
  uintptr uStack_80;
  int local_78;
  int iStack_70;
  reflect_abiStepKind local_68;
  uintptr uStack_60;
  uintptr local_58;
  uintptr uStack_50;
  int local_48;
  int iStack_40;
  reflect_abiStepKind local_38;
  uintptr uStack_30;
  ulong local_28;
  uintptr uStack_20;
  int local_18;
  int iStack_10;
  
  while (&local_88 <= *(uintptr **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: reflect.Kind ~R0@[???] */
  s.len._0_4_ = (tt->rtype).kind & 0x1f;
  uVar6 = (ulong)(uint)s.len;
  ptrMap = (uint8)in_RSI;
  if (0x10 < uVar6) {
    if (uVar6 < 0x17) {
      if (uVar6 < 0x14) {
        if (uVar6 == 0x11) {
          uVar1 = tt->len;
          if (uVar1 == 0) {
            return false;
          }
          if (uVar1 != 1) {
            return SUB81(uVar1,0);
          }
          reflect___abiSeq__regAssign
                    ((reflect_abiSeq *)offset_spill,(reflect_rtype *)&DAT_00000011,(uintptr)a_spill)
          ;
          return (bool)local_f0;
        }
      }
      else if (uVar6 == 0x14) {
        reflect___abiSeq__assignIntN((reflect_abiSeq *)offset_spill,0x14,offset,in_RDI,ptrMap);
        return (bool)local_e0;
      }
    }
    else {
      if (uVar6 < 0x19) {
        if (uVar6 != 0x17) {
          reflect___abiSeq__assignIntN((reflect_abiSeq *)offset_spill,uVar6,offset,in_RDI,ptrMap);
          return (bool)local_e0;
        }
        reflect___abiSeq__assignIntN((reflect_abiSeq *)offset_spill,0x17,offset,in_RDI,ptrMap);
        return (bool)local_e0;
      }
      if (uVar6 == 0x19) {
                    /* Unresolved local var: int i@[???] */
        local_a0 = (reflect_rtype *)tt->len;
        local_b0 = (reflect_abiSeq *)0x0;
        goto LAB_00532019;
      }
      if (uVar6 != 0x1a) goto LAB_00531fa1;
    }
    reflect___abiSeq__assignIntN
              ((reflect_abiSeq *)(tt->rtype).size,uVar6,offset_spill,in_RDI,ptrMap);
    return (bool)local_e0;
  }
  if (uVar6 < 0xc) {
    if (uVar6 < 7) {
      if (4 < uVar6 - 1) {
        if (uVar6 == 6) {
LAB_00531d0b:
          reflect___abiSeq__assignIntN((reflect_abiSeq *)offset_spill,uVar6,offset,in_RDI,ptrMap);
          return (bool)local_e0;
        }
LAB_00531fa1:
        runtime_printlock();
        s.str = &DAT_002905a6;
        s.len._4_4_ = 0;
        runtime_printstring(s);
        runtime_printuint(uVar6);
        runtime_printnl();
        runtime_printunlock();
        e.data._0_4_ = (uint)s.len;
        e._type = (runtime__type *)reflect__stmp_4;
        e.data._4_4_ = 0;
        runtime_gopanic(e);
        do {
          local_b0 = (reflect_abiSeq *)((long)&(local_b0->steps).array + 1);
LAB_00532019:
          if ((long)local_a0 <= (long)local_b0) {
            return SUB81(local_b0,0);
          }
          if ((reflect_abiSeq *)tt->len <= local_b0) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          bVar2 = reflect___abiSeq__regAssign
                            (local_b0,local_a0,
                             (*(ulong *)(&tt->slice->hash + (long)local_b0 * 6) >> 1) + offset_spill
                            );
        } while (local_f0 != '\0');
        return bVar2;
      }
    }
    else if (10 < uVar6) {
      if (uVar6 == 0xb) goto LAB_00531d0b;
      goto LAB_00531fa1;
    }
  }
  else {
    if (0xe < uVar6) {
      if (uVar6 != 0xf) {
                    /* Unresolved local var: int i@[???] */
        if ((reflect_floatArgRegs < a_spill->fregs + 2) || (reflect_floatRegSize < 8)) {
          bVar2 = false;
        }
        else {
          for (lVar5 = 0; lVar5 < 2; lVar5 = lVar5 + 1) {
            uStack_80 = 0;
            local_78 = 0;
            local_88 = 8;
            iStack_70 = a_spill->fregs;
            lVar3 = (a_spill->steps).len;
            prVar7 = (a_spill->steps).array;
            if ((ulong)(a_spill->steps).cap < lVar3 + 1U) {
              old.len = offset_spill;
              old.array = (void *)lVar3;
              old.cap = (int)prVar7;
              runtime_growslice((runtime__type *)&DAT_0026e2a0,old,lVar3 + 1U);
              prVar7 = (reflect_abiStep *)CONCAT71(uStack_df,local_e0);
              (a_spill->steps).cap = local_d0;
              lVar3 = local_d8;
              if (runtime_writeBarrier._0_4_ == 0) {
                (a_spill->steps).array = prVar7;
              }
              else {
                runtime_gcWriteBarrier();
                prVar7 = extraout_RAX;
              }
            }
            (a_spill->steps).len = lVar3 + 1;
            prVar7[lVar3].kind = 4;
            prVar7[lVar3].offset = offset_spill + lVar5 * 8;
            prVar7[lVar3].size = local_88;
            prVar7[lVar3].stkOff = uStack_80;
            prVar7[lVar3].ireg = local_78;
            prVar7[lVar3].freg = iStack_70;
            a_spill->fregs = a_spill->fregs + 1;
          }
          bVar2 = true;
        }
        return bVar2;
      }
                    /* Unresolved local var: int i@[???] */
      if ((reflect_floatArgRegs < a_spill->fregs + 2) || (reflect_floatRegSize < 4)) {
        bVar2 = false;
      }
      else {
        for (lVar5 = 0; lVar5 < 2; lVar5 = lVar5 + 1) {
          uStack_50 = 0;
          local_48 = 0;
          local_68 = 4;
          uStack_60 = offset_spill + lVar5 * 4;
          local_58 = 4;
          iStack_40 = a_spill->fregs;
          lVar3 = (a_spill->steps).len;
          prVar7 = (a_spill->steps).array;
          if ((ulong)(a_spill->steps).cap < lVar3 + 1U) {
            old_00.len = offset_spill;
            old_00.array = (void *)lVar3;
            old_00.cap = (int)prVar7;
            runtime_growslice((runtime__type *)&DAT_0026e2a0,old_00,lVar3 + 1U);
            prVar7 = (reflect_abiStep *)CONCAT71(uStack_df,local_e0);
            (a_spill->steps).cap = local_d0;
            lVar3 = local_d8;
            if (runtime_writeBarrier._0_4_ == 0) {
              (a_spill->steps).array = prVar7;
            }
            else {
              runtime_gcWriteBarrier();
              prVar7 = extraout_RAX_00;
            }
          }
          (a_spill->steps).len = lVar3 + 1;
          prVar7[lVar3].kind = local_68;
          prVar7[lVar3].offset = uStack_60;
          prVar7[lVar3].size = local_58;
          prVar7[lVar3].stkOff = uStack_50;
          prVar7[lVar3].ireg = local_48;
          prVar7[lVar3].freg = iStack_40;
          a_spill->fregs = a_spill->fregs + 1;
        }
        bVar2 = true;
      }
      return bVar2;
    }
    if (uVar6 != 0xc) {
      uVar6 = (tt->rtype).size;
                    /* Unresolved local var: int i@[???] */
      if ((reflect_floatArgRegs < a_spill->fregs + 1) || (reflect_floatRegSize < uVar6)) {
        bVar2 = false;
      }
      else {
        prVar4 = a_spill;
        for (lVar5 = 0; lVar5 < 1; lVar5 = lVar5 + 1) {
          uStack_20 = 0;
          local_18 = 0;
          local_38 = 4;
          uStack_30 = lVar5 * uVar6 + offset_spill;
          iStack_10 = prVar4->fregs;
          lVar3 = (prVar4->steps).len;
          prVar7 = (prVar4->steps).array;
          local_28 = uVar6;
          if ((ulong)(prVar4->steps).cap < lVar3 + 1U) {
            old_01.len = (int)prVar4;
            old_01.array = (void *)lVar3;
            old_01.cap = lVar3 + 1U;
            runtime_growslice((runtime__type *)&DAT_0026e2a0,old_01,lVar5);
            prVar7 = (reflect_abiStep *)CONCAT71(uStack_df,local_e0);
            (a_spill->steps).cap = local_d0;
            lVar3 = local_d8;
            if (runtime_writeBarrier._0_4_ == 0) {
              (a_spill->steps).array = prVar7;
              prVar4 = a_spill;
            }
            else {
              prVar4 = a_spill;
              runtime_gcWriteBarrier();
              prVar7 = extraout_RAX_01;
            }
          }
          (prVar4->steps).len = lVar3 + 1;
          prVar7[lVar3].kind = local_38;
          prVar7[lVar3].offset = uStack_30;
          prVar7[lVar3].size = local_28;
          prVar7[lVar3].stkOff = uStack_20;
          prVar7[lVar3].ireg = local_18;
          prVar7[lVar3].freg = iStack_10;
          prVar4->fregs = prVar4->fregs + 1;
        }
        bVar2 = true;
      }
      return bVar2;
    }
  }
  reflect___abiSeq__assignIntN((reflect_abiSeq *)(tt->rtype).size,uVar6,offset_spill,in_RDI,ptrMap);
  return (bool)local_e0;
}


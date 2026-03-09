
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.typelinks([]unsafe.Pointer ~r0, [][]int32 ~r1) */

multireturn___unsafe_Pointer_____int32_ reflect_typelinks(void)

{
  runtime_moduledata *prVar1;
  int32 *piVar2;
  runtime__type *typ;
  long lVar3;
  long extraout_RAX;
  long extraout_RAX_00;
  long lVar4;
  int iVar5;
  uintptr *extraout_RDX;
  uintptr *extraout_RDX_00;
  long lVar6;
  ulong cap;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uintptr uVar12;
  ulong uVar13;
  uintptr uVar14;
  uintptr uVar15;
  long in_FS_OFFSET;
  runtime_slice old;
  runtime_slice old_00;
  multireturn___unsafe_Pointer_____int32_ mVar16;
  uintptr *local_d8;
  uintptr *local_b8;
  long local_b0;
  ulong local_a8;
  uintptr local_60;
  long local_58;
  long local_50;
  runtime_moduledata **local_48;
  uintptr *local_40;
  uintptr *local_38;
  long local_30;
  uintptr local_28;
  uintptr local_20;
  long local_18;
  uintptr *local_10;
  
                    /* Unresolved local var: []*runtime.moduledata modules@[???]
                       Unresolved local var: []unsafe.Pointer sections@[???]
                       Unresolved local var: [][]int32 ret@[???]
                       Unresolved local var: runtime.moduledata * * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.cap@[???]
                       Unresolved local var: int ~R0.len@[???] */
  while (&local_60 <= *(uintptr **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: []*runtime.moduledata * p@[???] */
  if (runtime_modulesSlice == (___runtime_moduledata *)0x0) {
    iVar5 = 0;
    local_48 = (runtime_moduledata **)0x0;
    typ = (runtime__type *)0x0;
  }
  else {
    local_48 = runtime_modulesSlice->array;
    iVar5 = runtime_modulesSlice->len;
    typ = (runtime__type *)runtime_modulesSlice->cap;
  }
  runtime_newobject(typ);
  if (iVar5 != 0) {
    local_10 = local_d8;
                    /* Unresolved local var: runtime.moduledata * md@[???] */
    local_18 = (-(long)((long)&typ[-1].ptrToThis + 3) >> 0x3f & 8U) + (long)local_48;
    if (runtime_writeBarrier._0_4_ == 0) {
      *local_d8 = (*local_48)->types;
    }
    else {
      runtime_gcWriteBarrierDX();
    }
    runtime_newobject((runtime__type *)&DAT_00226320);
    prVar1 = *local_48;
    piVar2 = (prVar1->typelinks).array;
    uVar14 = (prVar1->typelinks).cap;
    local_d8[1] = (prVar1->typelinks).len;
    local_d8[2] = uVar14;
    if (runtime_writeBarrier._0_4_ == 0) {
      *local_d8 = (uintptr)piVar2;
    }
    else {
      runtime_gcWriteBarrierCX();
    }
    lVar3 = iVar5 + -1;
    cap = 1;
    uVar8 = 1;
    uVar10 = 1;
    local_58 = 0;
    lVar4 = local_18;
    uVar9 = 1;
    local_50 = lVar3;
    while (local_58 < lVar3) {
      lVar11 = *(long *)(lVar4 + local_58 * 8);
      uVar13 = uVar9 + 1;
      uVar14 = *(uintptr *)(lVar11 + 0x118);
      if (uVar10 < uVar13) {
        old.len = lVar4;
        old.array = (void *)local_58;
        old.cap = (int)local_d8;
        local_38 = local_d8;
        local_30 = lVar11;
        local_20 = *(uintptr *)(lVar11 + 0x118);
        runtime_growslice((runtime__type *)&DAT_002257a0,old,cap);
        uVar13 = local_b0 + 1;
        lVar3 = local_50;
        lVar4 = local_18;
        local_10 = local_b8;
        local_d8 = local_38;
        uVar10 = local_a8;
        lVar11 = local_30;
        uVar14 = local_20;
      }
      lVar6 = local_58;
      uVar7 = cap;
      if (runtime_writeBarrier._0_4_ == 0) {
        local_10[uVar9] = uVar14;
      }
      else {
        runtime_gcWriteBarrierCX();
        lVar3 = extraout_RAX;
        lVar4 = local_18;
        local_10 = extraout_RDX;
      }
      uVar14 = *(uintptr *)(lVar11 + 0x148);
      uVar9 = uVar7 + 1;
      uVar12 = *(uintptr *)(lVar11 + 0x150);
      uVar15 = *(uintptr *)(lVar11 + 0x140);
      if (uVar8 < uVar7 + 1) {
        old_00.len = lVar4;
        old_00.array = (void *)lVar6;
        old_00.cap = (int)local_d8;
        local_60 = *(uintptr *)(lVar11 + 0x150);
        local_40 = local_10;
        local_28 = *(uintptr *)(lVar11 + 0x140);
        runtime_growslice((runtime__type *)&DAT_00221460,old_00,uVar7);
        lVar3 = local_50;
        lVar4 = local_18;
        local_10 = local_40;
        lVar6 = local_58;
        uVar7 = cap;
        local_d8 = local_b8;
        uVar8 = local_a8;
        uVar9 = local_b0 + 1;
        uVar12 = local_60;
        uVar15 = local_28;
      }
      cap = uVar9;
      local_d8[uVar7 * 3 + 1] = uVar14;
      local_d8[uVar7 * 3 + 2] = uVar12;
      if (runtime_writeBarrier._0_4_ == 0) {
        local_d8[uVar7 * 3] = uVar15;
      }
      else {
        runtime_gcWriteBarrierCX();
        lVar3 = extraout_RAX_00;
        local_10 = extraout_RDX_00;
      }
      uVar9 = uVar13;
      local_58 = lVar6 + 1;
    }
    mVar16.~r0.len = local_58;
    mVar16.~r0.array = (void **)lVar3;
    mVar16.~r1.len = cap;
    mVar16.~r1.array = (__int32 *)local_d8;
    mVar16.~r0.cap = lVar4;
    mVar16.~r1.cap = uVar8;
    return mVar16;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}


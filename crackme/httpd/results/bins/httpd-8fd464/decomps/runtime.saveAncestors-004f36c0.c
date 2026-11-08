
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.saveAncestors(runtime.g * callergp, []runtime.ancestorInfo
   * ~r1) */

__runtime_ancestorInfo * runtime_saveAncestors(runtime_g *callergp)

{
  void *dstPtr;
  __runtime_ancestorInfo *p_Var1;
  runtime_g *extraout_RAX;
  uint uVar2;
  ulong srcLen;
  void *in_RDI;
  runtime_g *prVar3;
  uintptr *in_R8;
  int in_R9;
  func__runtime_stkframe__unsafe_Pointer__bool **in_R10;
  void *in_R11;
  long in_FS_OFFSET;
  runtime_g *callergp_spill;
  runtime_g *local_3d0;
  runtime_g *local_3c0;
  undefined1 local_388 [48];
  undefined1 local_358 [784];
  runtime_ancestorInfo *local_48;
  runtime_g *local_40;
  runtime_g *local_38;
  undefined1 local_30 [8];
  runtime_g *local_28;
  runtime_g *prStack_20;
  uintptr local_18;
  runtime__panic *prStack_10;
  
                    /* Unresolved local var: int32 n@[???]
                       Unresolved local var: int npcs@[???]
                       Unresolved local var: []runtime.ancestorInfo * ancestorsp@[???]
                       Unresolved local var: []runtime.ancestorInfo callerAncestors@[???]
                       Unresolved local var: []runtime.ancestorInfo ancestors@[???]
                       Unresolved local var: []uintptr ipcs@[???]
                       Unresolved local var: uintptr[100] pcs@[???]
                       Unresolved local var: int ~R0@[???] */
  while (local_358 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((runtime_debug.tracebackancestors < 1) || (callergp_spill->goid == 0)) {
    return (__runtime_ancestorInfo *)(ulong)(uint)runtime_debug.tracebackancestors;
  }
  p_Var1 = callergp_spill->ancestors;
  if (p_Var1 == (__runtime_ancestorInfo *)0x0) {
    local_388._16_8_ = 0;
    local_48 = (runtime_ancestorInfo *)0x0;
  }
  else {
    local_48 = p_Var1->array;
    local_388._16_8_ = p_Var1->len;
  }
  uVar2 = (int)local_388._16_8_ + 1;
  if (runtime_debug.tracebackancestors < (int)uVar2) {
    uVar2 = runtime_debug.tracebackancestors;
  }
  srcLen = (ulong)uVar2;
  local_388._24_8_ = SEXT48((int)uVar2);
  runtime_makeslice((runtime__type *)local_388._24_8_,(int)local_48,0x2585a0);
  if ((runtime__type *)local_388._24_8_ != (runtime__type *)0x0) {
    local_38 = local_3c0;
    dstPtr = (void *)((long)&((runtime__type *)(local_388._24_8_ + -0x30))->ptrToThis + 3);
    runtime_typedslicecopy((runtime__type *)local_3c0,dstPtr,local_388._24_8_,in_RDI,srcLen);
    prVar3 = (runtime_g *)local_388;
    FUN_0051a08e();
    runtime_gentraceback
              ((uintptr)callergp_spill,(uintptr)dstPtr,(uintptr)(local_388 + 0x20),prVar3,srcLen,
               in_R8,in_R9,in_R10,in_R11,0xffffffffffffffff);
    local_388._8_8_ = local_388._0_8_;
    local_3d0 = (runtime_g *)local_388._0_8_;
    runtime_makeslice((runtime__type *)local_388._0_8_,(int)dstPtr,0x225760);
    prVar3 = (runtime_g *)(local_388 + 0x20);
    local_40 = callergp_spill;
    if (callergp_spill != prVar3) {
      runtime_memmove();
      local_3d0 = prVar3;
    }
    local_28 = (runtime_g *)local_388._8_8_;
    prStack_20 = (runtime_g *)local_388._8_8_;
    local_18 = callergp_spill->goid;
    prStack_10 = (runtime__panic *)callergp_spill->gopc;
    if (runtime_writeBarrier._0_4_ == 0) {
      (local_38->stack).lo = (uintptr)local_40;
      (local_38->stack).hi = local_388._8_8_;
      local_38->stackguard0 = local_388._8_8_;
      local_38->stackguard1 = local_18;
      local_38->_panic = prStack_10;
    }
    else {
      local_3d0 = local_38;
      runtime_typedmemmove((runtime__type *)local_38,prVar3,local_30);
    }
    runtime_newobject((runtime__type *)&DAT_00221ca0);
    (local_3d0->stack).hi = local_388._24_8_;
    local_3d0->stackguard0 = local_388._24_8_;
    if (runtime_writeBarrier._0_4_ == 0) {
      (local_3d0->stack).lo = (uintptr)local_38;
    }
    else {
      runtime_gcWriteBarrier();
      local_38 = extraout_RAX;
    }
    return (__runtime_ancestorInfo *)local_38;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}


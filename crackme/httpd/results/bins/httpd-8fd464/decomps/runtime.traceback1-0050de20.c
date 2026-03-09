
/* WARNING: Unknown calling convention */

void runtime_traceback1(uintptr pc,uintptr sp,uintptr lr,runtime_g *gp,uint flags)

{
  uint32 uVar1;
  runtime_m *prVar2;
  __runtime_ancestorInfo *p_Var3;
  long lVar4;
  runtime_cgoCallers *callers;
  long lVar5;
  uintptr *in_R8;
  int in_R9;
  func__runtime_stkframe__unsafe_Pointer__bool **in_R10;
  void *in_R11;
  long in_FS_OFFSET;
  string s;
  runtime_ancestorInfo ancestor;
  uintptr pc_spill;
  uintptr sp_spill;
  uintptr lr_spill;
  runtime_g *gp_spill;
  uint flags_spill;
  long local_168;
  runtime_ancestorInfo *local_38;
  uintptr *local_30;
  uintptr local_28;
  uintptr uStack_20;
  uintptr local_18;
  uintptr uStack_10;
  
                    /* Unresolved local var: int n@[???] */
  while (&stack0xfffffffffffffec8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((((runtime_iscgo != false) && (prVar2 = gp_spill->m, prVar2 != (runtime_m *)0x0)) &&
       (0 < prVar2->ncgo)) &&
      ((gp_spill->syscallsp != 0 && (prVar2->cgoCallers != (runtime_cgoCallers *)0x0)))) &&
     ((*prVar2->cgoCallers)[0] != 0)) {
                    /* Unresolved local var: runtime.cgoCallers cgoCallers@[???] */
    LOCK();
    uVar1 = prVar2->cgoCallersUse;
    prVar2->cgoCallersUse = 1;
    UNLOCK();
    gp = (runtime_g *)&stack0xfffffffffffffec8;
    callers = (runtime_cgoCallers *)FUN_0051a460(gp,gp_spill->m->cgoCallers,uVar1);
    **(undefined8 **)((*callers)[6] + 0x148) = 0;
    LOCK();
    *(undefined4 *)((*callers)[6] + 0x144) = 0;
    UNLOCK();
    runtime_printCgoTraceback(callers);
  }
  if ((gp_spill->atomicstatus & 0xffffefff) == 3) {
    pc_spill = gp_spill->syscallpc;
    flags_spill = flags_spill & 0xfffffffffffffffd;
  }
  runtime_gentraceback
            ((uintptr)gp_spill,flags_spill,pc_spill,gp,lr_spill,in_R8,in_R9,in_R10,in_R11,pc_spill);
  if ((local_168 == 0) && ((flags_spill & 1) == 0)) {
    runtime_gentraceback
              ((uintptr)gp_spill,flags_spill,flags_spill | 1,gp,lr_spill,in_R8,in_R9,in_R10,in_R11,
               pc_spill);
  }
  if (local_168 == 100) {
    runtime_printlock();
    s.len = flags_spill;
    s.str = (uint8 *)0x2a1b87;
    runtime_printstring(s);
    runtime_printunlock();
  }
  runtime_printcreatedby(gp_spill);
  p_Var3 = gp_spill->ancestors;
  if (p_Var3 == (__runtime_ancestorInfo *)0x0) {
    return;
  }
                    /* Unresolved local var: runtime.ancestorInfo ancestor@[???] */
  lVar4 = p_Var3->len;
  local_38 = p_Var3->array;
  if (0 < lVar4) {
    lVar5 = 0;
    while( true ) {
      local_30 = (local_38->pcs).array;
      local_28 = (local_38->pcs).len;
      uStack_20 = (local_38->pcs).cap;
      local_18 = local_38->goid;
      uStack_10 = local_38->gopc;
      ancestor.pcs.len = flags_spill;
      ancestor.pcs.array = (uintptr *)local_38;
      ancestor.pcs.cap = (int)local_30;
      ancestor.gopc = lr_spill;
      ancestor.goid = (int64)gp;
      runtime_printAncestorTraceback(ancestor);
      lVar5 = lVar5 + 1;
      if (lVar4 <= lVar5) break;
      local_38 = local_38 + 1;
      flags_spill = (uint)local_38;
    }
  }
  return;
}


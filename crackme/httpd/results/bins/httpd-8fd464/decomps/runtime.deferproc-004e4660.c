
/* WARNING: Unknown calling convention */

void runtime_deferproc(int32 siz,runtime_funcval *fn)

{
  long lVar1;
  int *extraout_RAX;
  int *extraout_RAX_00;
  int *piVar2;
  long in_FS_OFFSET;
  string s;
  string s_00;
  undefined8 unaff_retaddr;
  int32 siz_spill;
  runtime_funcval *fn_spill;
  undefined8 in_stack_00000018;
  int *local_28;
  
                    /* Unresolved local var: runtime.g * gp@[DW_OP_reg0(RAX)]
                       Unresolved local var: uintptr sp@[???]
                       Unresolved local var: uintptr argp@[???]
                       Unresolved local var: uintptr callerpc@[???]
                       Unresolved local var: runtime._defer * d@[???] */
  lVar1 = *(long *)(in_FS_OFFSET + -8);
  if (*(long *)(*(long *)(lVar1 + 0x30) + 200) != lVar1) {
    s_00.len = (int)fn;
    s_00.str = &DAT_0029c877;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  runtime_newdefer((int32)&fn_spill);
  if (*(long *)(local_28 + 8) == 0) {
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)(local_28 + 10) = *(undefined8 *)(lVar1 + 0x28);
      *(int **)(lVar1 + 0x28) = local_28;
    }
    else {
      runtime_gcWriteBarrierDX();
      runtime_gcWriteBarrier();
      local_28 = extraout_RAX;
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      *(runtime_funcval **)(local_28 + 6) = fn_spill;
    }
    else {
      runtime_gcWriteBarrierCX();
      local_28 = extraout_RAX_00;
    }
    *(undefined8 *)(local_28 + 4) = unaff_retaddr;
    *(int32 **)(local_28 + 2) = &siz_spill;
    if (siz_spill != 0) {
      if (siz_spill == 8) {
        if (*local_28 == 0) {
          piVar2 = (int *)0x0;
        }
        else {
          piVar2 = local_28 + 0x12;
        }
        *(undefined8 *)piVar2 = in_stack_00000018;
      }
      else {
        runtime_memmove();
      }
    }
    runtime_return0();
    return;
  }
  s.len = (int)fn;
  s.str = &DAT_002a6537;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}



/* WARNING: Unknown calling convention */

void runtime_sigprof(uintptr pc,uintptr sp,uintptr lr,runtime_g *gp,runtime_m *mp)

{
  int *piVar1;
  runtime_cgoCallers *pauVar2;
  uintptr pc0;
  ulong uVar3;
  runtime_m *gp_00;
  runtime_g *flags;
  runtime_g *gp_01;
  uintptr *in_R8;
  int in_R9;
  func__runtime_stkframe__unsafe_Pointer__bool **in_R10;
  void *in_R11;
  long in_FS_OFFSET;
  __uintptr stk;
  uintptr pc_spill;
  uintptr sp_spill;
  uintptr lr_spill;
  runtime_g *gp_spill;
  runtime_m *mp_spill;
  ulong local_218;
  runtime_mutex local_208;
  uintptr local_200;
  
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: uintptr[64] stk@[???] */
  while (&stack0xfffffffffffffe18 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_prof.hz == 0) {
    return;
  }
  if ((mp_spill != (runtime_m *)0x0) && (mp_spill->profilehz == 0)) {
    return;
  }
  flags = *(runtime_g **)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  *(int *)&(flags->writebuf).array = *(int *)&(flags->writebuf).array + 1;
  gp_01 = (runtime_g *)&stack0xfffffffffffffdf8;
  FUN_0051a0f8();
  uVar3 = local_218;
  if ((((mp_spill->ncgo < 1) || (flags = mp_spill->curg, flags == (runtime_g *)0x0)) ||
      (flags->syscallpc == 0)) || (flags->syscallsp == 0)) {
    runtime_gentraceback
              (pc_spill,(uintptr)mp_spill,(uintptr)gp_spill,gp_01,(int)flags,in_R8,in_R9,in_R10,
               in_R11,pc_spill);
  }
  else {
                    /* Unresolved local var: int cgoOff@[???] */
    if (((mp_spill->cgoCallersUse == 0) &&
        (pauVar2 = mp_spill->cgoCallers, pauVar2 != (runtime_cgoCallers *)0x0)) &&
       ((*pauVar2)[0] != 0)) {
      for (pc0 = 0; ((long)pc0 < 0x20 && ((*pauVar2)[pc0] != 0)); pc0 = pc0 + 1) {
      }
      if (0x20 < pc0) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      if (pauVar2 != (runtime_cgoCallers *)&stack0xfffffffffffffdf8.key) {
        runtime_memmove();
      }
      (*mp_spill->cgoCallers)[0] = 0;
    }
    else {
      pc0 = 0;
    }
    flags = (runtime_g *)mp_spill->curg->syscallpc;
    gp_01 = (runtime_g *)mp_spill->curg->syscallsp;
    if (0x3f < pc0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    runtime_gentraceback
              (pc0,(uintptr)mp_spill,-(pc0 - 0x40),gp_01,(int)flags,in_R8,in_R9,in_R10,in_R11,
               (uint)flags);
    if (0 < (long)local_218) {
      uVar3 = pc0 + local_218;
    }
  }
  gp_00 = mp_spill;
  if ((long)uVar3 < 1) {
    if ((mp_spill == (runtime_m *)0x0) ||
       (gp_00 = (runtime_m *)mp_spill->vdsoSP, gp_00 == (runtime_m *)0x0)) {
      uVar3 = 0;
    }
    else {
      runtime_gentraceback
                ((uintptr)mp_spill,(uintptr)gp_00,(uintptr)gp_spill,gp_01,(int)flags,in_R8,in_R9,
                 in_R10,in_R11,mp_spill->vdsoPC);
      uVar3 = local_218;
    }
    if (uVar3 == 0) {
      if (runtime_firstmoduledata.etext < pc_spill) {
        pc_spill = (uintptr)(code *)0x4f40c1;
      }
      if ((mp_spill->preemptoff).len == 0) {
        local_200 = 0x4f4081;
      }
      else {
        local_200 = 0x4f4141;
      }
      uVar3 = 2;
      gp_00 = (runtime_m *)pc_spill;
      local_208.key = pc_spill;
    }
  }
  if (runtime_prof.hz != 0) {
    if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    stk.len = (int)gp_01;
    stk.array = (uintptr *)uVar3;
    stk.cap = (int)flags;
    runtime___cpuProfile__add((runtime_cpuProfile *)&stack0xfffffffffffffdf8,(runtime_g *)gp_00,stk)
    ;
  }
  piVar1 = (int *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xf8);
  *piVar1 = *piVar1 + -1;
  return;
}


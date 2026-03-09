
/* WARNING: Unknown calling convention */

void runtime_scanConservative
               (uintptr b,uintptr n,uint8 *ptrmask,runtime_gcWork *gcw,runtime_stackScanState *state
               )

{
  byte bVar1;
  ulong p;
  ulong uVar2;
  runtime_gcWork *gcw_00;
  uint uVar3;
  uintptr in_R8;
  long in_FS_OFFSET;
  string s;
  uintptr b_spill;
  uintptr n_spill;
  uint8 *ptrmask_spill;
  runtime_gcWork *gcw_spill;
  runtime_stackScanState *state_spill;
  ulong local_40;
  runtime_stackScanState *span;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: uintptr i@[???] */
  p = 0;
  do {
    if (n_spill <= p) {
      return;
    }
                    /* Unresolved local var: uintptr val@[???]
                       Unresolved local var: runtime.mspan * span@[???]
                       Unresolved local var: uintptr obj@[???] */
    if (ptrmask_spill == (uint8 *)0x0) {
LAB_004d03af:
      uVar2 = *(ulong *)(p + b_spill);
      if (((state_spill == (runtime_stackScanState *)0x0) || (uVar2 < (state_spill->stack).lo)) ||
         ((state_spill->stack).hi <= uVar2)) {
        span = state_spill;
        runtime_spanOfHeap(n_spill);
        if (local_40 != 0) {
          uVar2 = (uVar2 - *(long *)(local_40 + 0x18)) * (ulong)*(uint *)(local_40 + 0x5c);
          gcw_00 = (runtime_gcWork *)(uVar2 >> 0x20);
                    /* Unresolved local var: uint8 * bytep@[???] */
          if (*(runtime_gcWork **)(local_40 + 0x30) <= gcw_00) {
            bVar1 = *(byte *)((uVar2 >> 0x23) + *(long *)(local_40 + 0x48));
            uVar3 = 1 << ((byte)(uVar2 >> 0x20) & 7);
            span = (runtime_stackScanState *)(ulong)uVar3;
            uVar2 = (ulong)bVar1;
            if (((byte)uVar3 & bVar1) == 0) goto LAB_004d034f;
          }
          local_40 = b_spill;
          runtime_greyobject((uintptr)gcw_spill,uVar2,b_spill,(runtime_mspan *)span,gcw_00,in_R8);
        }
      }
      else {
        runtime___stackScanState__putPtr((runtime_stackScanState *)n_spill,p,SUB81(b_spill,0));
        local_40 = uVar2;
      }
    }
    else {
                    /* Unresolved local var: uint8 bits@[???] */
      if (ptrmask_spill[p >> 6] == 0) {
        if ((p & 0x3f) != 0) {
          s.len = p;
          s.str = &DAT_00298da3;
                    /* WARNING: Subroutine does not return */
          runtime_throw(s);
        }
        p = p + 0x38;
      }
      else if ((ptrmask_spill[p >> 6] >> ((byte)(p >> 3) & 7) & 1) != 0) goto LAB_004d03af;
    }
LAB_004d034f:
    p = p + 8;
  } while( true );
}


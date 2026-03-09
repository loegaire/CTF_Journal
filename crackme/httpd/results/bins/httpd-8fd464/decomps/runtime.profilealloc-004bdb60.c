
/* WARNING: Unknown calling convention */

void runtime_profilealloc(runtime_m *mp,void *x,uintptr size)

{
  long lVar1;
  runtime_mcache *mean;
  uintptr uVar2;
  long in_FS_OFFSET;
  string s;
  runtime_m *mp_spill;
  void *x_spill;
  uintptr size_spill;
  int local_18;
  
                    /* Unresolved local var: runtime.mcache * c@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.p * pp@[???]
                       Unresolved local var: runtime.mcache * c@[???] */
  lVar1 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
  mean = runtime_mcache0;
  if (lVar1 != 0) {
    mean = *(runtime_mcache **)(lVar1 + 0x40);
  }
  if (mean == (runtime_mcache *)0x0) {
    s.len = (int)x;
    s.str = &DAT_002aa9fd;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  if (runtime_MemProfileRate == 1) {
    uVar2 = 0;
  }
  else {
    runtime_fastexprand((int)mean);
    uVar2 = (uintptr)local_18;
  }
  mean->nextSample = uVar2;
  runtime_mProf_Malloc((void *)size_spill,(uintptr)x);
  return;
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.netpollblock(runtime.pollDesc * pd, int32 mode, bool
   waitio, bool ~r3) */

bool runtime_netpollblock(runtime_pollDesc *pd,int32 mode,bool waitio)

{
  ulong uVar1;
  long lVar2;
  runtime_pollDesc *extraout_RAX;
  uintptr *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  string s;
  string s_00;
  runtime_pollDesc *pd_spill;
  int32 mode_spill;
  bool waitio_spill;
  
                    /* Unresolved local var: uintptr * gpp@[???]
                       Unresolved local var: uintptr old@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    pd = extraout_RAX;
  }
  puVar3 = &pd_spill->rg;
  if (mode_spill == 0x77) {
    puVar3 = &pd_spill->wg;
  }
  do {
                    /* Unresolved local var: uintptr old@[???] */
    if (*puVar3 == 1) {
      *puVar3 = 0;
      return SUB81(pd,0);
    }
    if (*puVar3 != 0) {
      s_00.len._0_4_ = mode_spill;
      s_00.str = &DAT_0029c13a;
      s_00.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_00);
    }
    LOCK();
    pd = (runtime_pollDesc *)*puVar3;
    bVar4 = pd == (runtime_pollDesc *)0x0;
    if (bVar4) {
      *puVar3 = 2;
      pd = (runtime_pollDesc *)0x0;
    }
    UNLOCK();
  } while (!bVar4);
  if (!waitio_spill) {
    if (pd_spill->closing == false) {
      if (((mode_spill == 0x72) && (pd_spill->rd < 0)) ||
         ((mode_spill == 0x77 && (pd_spill->wd < 0)))) {
        lVar2 = 2;
      }
      else if ((mode_spill == 0x72) && (pd_spill->everr != false)) {
        lVar2 = 3;
      }
      else {
        lVar2 = 0;
      }
    }
    else {
      lVar2 = 1;
    }
    if (lVar2 != 0) goto LAB_004e1e38;
  }
  runtime_gopark((func__runtime_g__unsafe_Pointer__bool **)&PTR_runtime_netpollblockcommit_002b3978,
                 (void *)(ulong)(uint)mode_spill,(runtime_waitReason)pd_spill,1,2);
LAB_004e1e38:
  LOCK();
  uVar1 = *puVar3;
  *puVar3 = 0;
  UNLOCK();
  if (2 < uVar1) {
    s.len._0_4_ = mode_spill;
    s.str = &DAT_0029fedc;
    s.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  return SUB81(uVar1,0);
}


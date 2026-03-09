
/* WARNING: Unknown calling convention */

void runtime_copystack(runtime_g *gp,uintptr newsize)

{
  runtime_g *prVar1;
  uintptr uVar2;
  runtime_adjustinfo *adjinfo;
  int skip;
  runtime_sudog *prVar3;
  runtime_g *gp_00;
  uintptr *pcbuf;
  runtime_g *in_R10;
  void *in_R11;
  long in_FS_OFFSET;
  runtime_stack stk;
  string s;
  string s_00;
  string s_01;
  runtime_g *gp_spill;
  uintptr newsize_spill;
  uintptr local_1a8;
  uintptr local_1a0;
  long local_198;
  uintptr local_148;
  uintptr local_140;
  runtime_g *local_138;
  runtime_g *local_130;
  runtime_g *local_128;
  runtime_g *local_120;
  runtime_g *local_118;
  runtime_g *local_10;
  
                    /* Unresolved local var: uintptr used@[???]
                       Unresolved local var: uintptr ncopy@[???]
                       Unresolved local var: runtime.adjustinfo adjinfo@[???] */
  while (&local_130 <= *(runtime_g ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (gp_spill->syscallsp == 0) {
    local_130 = (runtime_g *)(gp_spill->stack).hi;
    local_138 = (runtime_g *)(gp_spill->stack).lo;
    if (local_138 == (runtime_g *)0x0) {
      s_00.len = newsize;
      s_00.str = &DAT_002959ef;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_00);
    }
    local_140 = (gp_spill->sched).sp;
    runtime_stackalloc((uint32)gp_spill);
    local_148 = local_1a8;
    uVar2 = local_1a0;
    FUN_0051a146(&local_148);
    local_128 = local_138;
    local_120 = local_130;
    local_118 = (runtime_g *)(uVar2 - (long)local_130);
    s.len = (runtime_adjustinfo *)((long)local_130 - local_140);
    if (gp_spill->activeStackChans == false) {
      if ((newsize_spill < (ulong)((long)local_130 - (long)local_138)) &&
         (gp_spill->parkingOnChan != 0)) {
        s.str = &DAT_002a8a56;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s);
      }
                    /* Unresolved local var: runtime.sudog * s@[???] */
      for (prVar3 = gp_spill->waiting; gp_00 = (runtime_g *)0x0, adjinfo = s.len,
          prVar3 != (runtime_sudog *)0x0; prVar3 = prVar3->waitlink) {
                    /* Unresolved local var: uintptr p@[???] */
        newsize_spill = (uintptr)prVar3->elem;
        if ((local_138 <= newsize_spill) && (newsize_spill < local_130)) {
          newsize_spill = newsize_spill + (long)local_118;
          prVar3->elem = (void *)newsize_spill;
          in_R10 = local_118;
        }
      }
    }
    else {
      newsize_spill = 0;
                    /* Unresolved local var: uintptr sghi@[???]
                       Unresolved local var: runtime.sudog * sg@[???]
                       Unresolved local var: uintptr p@[???] */
      for (prVar3 = gp_spill->waiting; prVar3 != (runtime_sudog *)0x0; prVar3 = prVar3->waitlink) {
        in_R11 = prVar3->elem;
        in_R10 = (runtime_g *)((ulong)prVar3->c->elemsize + (long)in_R11);
        if (((local_138 <= in_R10) && (in_R10 < local_130)) && (newsize_spill < in_R10)) {
          newsize_spill = (uintptr)in_R10;
        }
      }
      gp_00 = local_130;
      local_10 = (runtime_g *)newsize_spill;
      runtime_syncadjustsudogs
                ((runtime_g *)&stack0xfffffffffffffed8,(uintptr)s.len,(runtime_adjustinfo *)gp_spill
                );
      adjinfo = (runtime_adjustinfo *)((long)s.len - local_198);
      uVar2 = local_1a0;
    }
    skip = uVar2 - (long)adjinfo;
    pcbuf = (uintptr *)((long)local_130 - (long)adjinfo);
    runtime_memmove();
                    /* Unresolved local var: uintptr p@[???] */
    prVar1 = (gp_spill->sched).ctxt;
    if ((local_128 <= prVar1) && (prVar1 < local_120)) {
      (gp_spill->sched).ctxt = (void *)((long)&(prVar1->stack).lo + (long)&(local_118->stack).lo);
    }
                    /* Unresolved local var: uintptr p@[???] */
    prVar1 = (runtime_g *)(gp_spill->sched).bp;
    if ((local_128 <= prVar1) && (prVar1 < local_120)) {
      (gp_spill->sched).bp = (long)&(prVar1->stack).lo + (long)&(local_118->stack).lo;
    }
    runtime_adjustdefers(gp_spill,adjinfo);
                    /* Unresolved local var: uintptr p@[???] */
    prVar1 = (runtime_g *)gp_spill->_panic;
    if ((local_128 <= prVar1) && (prVar1 < local_120)) {
      gp_spill->_panic =
           (runtime__panic *)((long)&(prVar1->stack).lo + (long)&(local_118->stack).lo);
    }
    if (local_10 != (runtime_g *)0x0) {
      local_10 = (runtime_g *)((long)&(local_10->stack).lo + (long)&(local_118->stack).lo);
    }
    (gp_spill->stack).lo = local_148;
    (gp_spill->stack).hi = local_1a0;
    gp_spill->stackguard0 = local_148 + 0x3a0;
    (gp_spill->sched).sp = local_1a0 - (long)s.len;
    gp_spill->stktopsp = (long)&(local_118->stack).lo + gp_spill->stktopsp;
    runtime_gentraceback
              ((uintptr)&stack0xfffffffffffffed8,(uintptr)adjinfo,(uintptr)local_118,gp_00,skip,
               pcbuf,newsize_spill,(func__runtime_stkframe__unsafe_Pointer__bool **)in_R10,in_R11,
               0xffffffffffffffff);
    stk.hi = (uintptr)adjinfo;
    stk.lo = (uintptr)local_130;
    runtime_stackfree(stk);
    return;
  }
  s_01.len = newsize;
  s_01.str = &DAT_002a60b8;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_01);
}


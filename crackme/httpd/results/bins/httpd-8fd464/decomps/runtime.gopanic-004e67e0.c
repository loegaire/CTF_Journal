
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void runtime_gopanic(interface___ e)

{
  runtime_g *gp;
  runtime_m *prVar1;
  uintptr uVar2;
  uintptr uVar3;
  uint8 *puVar4;
  interface___ *piVar5;
  char cVar6;
  char extraout_AL;
  runtime_g *extraout_RAX;
  runtime_g *extraout_RAX_00;
  runtime_g *extraout_RAX_01;
  runtime_g *extraout_RAX_02;
  runtime_g *prVar7;
  runtime_g *extraout_RAX_03;
  runtime__defer *prVar8;
  runtime__defer *extraout_RAX_04;
  runtime__defer *extraout_RAX_05;
  runtime__defer *extraout_RAX_06;
  runtime__defer *prVar9;
  runtime_g *sp;
  runtime__panic *prVar10;
  runtime_g *extraout_RDX;
  runtime_g *extraout_RDX_00;
  runtime_g *extraout_RDX_01;
  runtime_g *extraout_RDX_02;
  runtime_g *extraout_RDX_03;
  uintptr uVar11;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  interface___ i;
  string s_03;
  string s_04;
  interface___ i_00;
  string s_05;
  string s_06;
  string s_07;
  string s_08;
  interface___ i_01;
  string s_09;
  string s_10;
  interface___ i_02;
  string s_11;
  uintptr unaff_retaddr;
  interface___ e_spill;
  runtime_g *local_d0;
  interface___ *piStack_c0;
  runtime__defer **local_50;
  runtime__panic **local_48;
  undefined1 local_40 [48];
  void *pvStack_10;
  
  s_02.len = e.data;
                    /* Unresolved local var: runtime.g * gp@[DW_OP_reg0(RAX)]
                       Unresolved local var: runtime._panic p@[???] */
  while (&local_50 <= *(runtime__defer ****)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  gp = *(runtime_g **)(in_FS_OFFSET + -8);
  prVar1 = gp->m;
  if (prVar1->curg != gp) {
    runtime_printlock();
    s_10.len = (int)s_02.len;
    s_10.str = &DAT_0028b207;
    runtime_printstring(s_10);
    runtime_printunlock();
    i_02.data = s_02.len;
    i_02._type = e_spill.data;
    runtime_printany(i_02);
    runtime_printlock();
    runtime_printnl();
    runtime_printunlock();
    s_11.len = (int)s_02.len;
    s_11.str = &DAT_0029c9b2;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_11);
  }
  if (prVar1->mallocing != 0) {
    runtime_printlock();
    s_08.len = (int)s_02.len;
    s_08.str = &DAT_0028b207;
    runtime_printstring(s_08);
    runtime_printunlock();
    i_01.data = s_02.len;
    i_01._type = e_spill.data;
    runtime_printany(i_01);
    runtime_printlock();
    runtime_printnl();
    runtime_printunlock();
    s_09.len = (int)s_02.len;
    s_09.str = &DAT_0029b694;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_09);
  }
  if ((prVar1->preemptoff).len != 0) {
    runtime_printlock();
    s_04.len = (int)s_02.len;
    s_04.str = &DAT_0028b207;
    runtime_printstring(s_04);
    runtime_printunlock();
    i_00.data = s_02.len;
    i_00._type = e_spill.data;
    runtime_printany(i_00);
    runtime_printlock();
    runtime_printnl();
    runtime_printunlock();
    runtime_printlock();
    s_05.len = (int)s_02.len;
    s_05.str = &DAT_0029c0fe;
    runtime_printstring(s_05);
    runtime_printunlock();
    puVar4 = (uint8 *)(gp->m->preemptoff).len;
    runtime_printlock();
    s_06.len = (int)s_02.len;
    s_06.str = puVar4;
    runtime_printstring(s_06);
    runtime_printunlock();
    runtime_printlock();
    runtime_printnl();
    runtime_printunlock();
    s_07.len = (int)s_02.len;
    s_07.str = &DAT_0029dec3;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_07);
  }
  if (prVar1->locks != 0) {
    runtime_printlock();
    s_02.str = &DAT_0028b207;
    runtime_printstring(s_02);
    runtime_printunlock();
    i.data = s_02.len;
    i._type = e_spill.data;
    runtime_printany(i);
    runtime_printlock();
    runtime_printnl();
    runtime_printunlock();
    s_03.len = (int)s_02.len;
    s_03.str = &DAT_0029b6ba;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_03);
  }
  local_40._0_8_ = (void *)0x0;
  local_40._32_8_ = (runtime__panic *)0x0;
  local_40._40_8_ = (runtime__defer *)0x0;
  pvStack_10 = (void *)0x0;
  local_40._8_8_ = e_spill._type;
  local_40._16_8_ = e_spill.data;
  local_40._24_8_ = gp->_panic;
  local_48 = &gp->_panic;
  if (runtime_writeBarrier._0_4_ == 0) {
    gp->_panic = (runtime__panic *)local_40;
    local_d0 = gp;
  }
  else {
    runtime_gcWriteBarrierCX();
    local_d0 = extraout_RAX;
  }
  LOCK();
  runtime_runningPanicDefers = runtime_runningPanicDefers + 1;
  UNLOCK();
  piStack_c0 = &e_spill;
  runtime_addOneOpenDeferFrame(local_d0,unaff_retaddr,piStack_c0);
LAB_004e6925:
  do {
                    /* Unresolved local var: runtime._defer * d@[???]
                       Unresolved local var: bool done@[???]
                       Unresolved local var: uintptr pc@[???]
                       Unresolved local var: void * sp@[???] */
    piVar5 = piStack_c0;
    sp = (runtime_g *)gp->_defer;
    if (sp == (runtime_g *)0x0) {
      runtime_preprintpanics((runtime__panic *)gp);
      runtime_fatalpanic(gp->_panic);
      _DAT_00000000 = 0;
      return;
    }
    prVar7 = gp;
    if (*(char *)((long)&(sp->stack).lo + 4) != '\0') {
      if (sp->_panic != (runtime__panic *)0x0) {
        sp->_panic->aborted = true;
      }
      if (runtime_writeBarrier._0_4_ == 0) {
        sp->_panic = (runtime__panic *)0x0;
      }
      else {
        runtime_gcWriteBarrierSI();
        prVar7 = extraout_RAX_00;
      }
      if (*(char *)((long)&(sp->stack).lo + 6) == '\0') {
        if (runtime_writeBarrier._0_4_ == 0) {
          sp->stackguard1 = 0;
        }
        else {
          runtime_gcWriteBarrierSI();
          prVar7 = extraout_RAX_01;
        }
        if (runtime_writeBarrier._0_4_ == 0) {
          prVar7->_defer = sp->_defer;
        }
        else {
          runtime_gcWriteBarrierDX();
          prVar7 = extraout_RAX_02;
        }
        runtime_freedefer((runtime__defer *)prVar7);
        local_d0 = sp;
        goto LAB_004e6925;
      }
    }
    *(undefined1 *)((long)&(sp->stack).lo + 4) = 1;
    if (runtime_writeBarrier._0_4_ == 0) {
      sp->_panic = (runtime__panic *)local_40;
    }
    else {
      runtime_gcWriteBarrierSI();
      prVar7 = extraout_RAX_03;
    }
    prVar9 = (runtime__defer *)local_40;
    local_50 = &gp->_defer;
    if (*(char *)((long)&(sp->stack).lo + 6) == '\0') {
      runtime_getargp();
      local_40._0_8_ = local_d0;
      if ((int)(sp->stack).lo == 0) {
        piStack_c0 = (interface___ *)0x0;
                    /* Unresolved local var: internal/abi.RegArgs regs@[???] */
      }
      else {
        piStack_c0 = (interface___ *)&(sp->sched).g;
      }
      prVar9 = (runtime__defer *)sp->stackguard1;
      local_d0 = (runtime_g *)0x0;
      runtime_reflectcall();
      prVar8 = (runtime__defer *)0x1;
    }
    else {
      runtime_runOpenDeferFrame(prVar7,prVar9);
      prVar8 = (runtime__defer *)((ulong)piStack_c0 & 0xff);
      local_d0 = prVar7;
      if (((char)piStack_c0 != '\0') && (sp->_panic->recovered == false)) {
        piStack_c0 = (interface___ *)0x0;
        runtime_addOneOpenDeferFrame(gp,(uintptr)prVar9,sp);
        prVar8 = (runtime__defer *)((ulong)piVar5 & 0xff);
        local_d0 = gp;
      }
    }
    local_40._0_8_ = (void *)0x0;
    if ((runtime_g *)gp->_defer != sp) {
      s_01.len = (int)prVar9;
      s_01.str = &DAT_0029e547;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_01);
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      sp->_panic = (runtime__panic *)0x0;
      prVar7 = gp;
    }
    else {
      runtime_gcWriteBarrierBX();
      prVar8 = extraout_RAX_04;
      prVar7 = extraout_RDX;
    }
    uVar2 = sp->stackguard0;
    uVar3 = (sp->stack).hi;
    if ((char)prVar8 != '\0') {
      if (runtime_writeBarrier._0_4_ == 0) {
        sp->stackguard1 = 0;
      }
      else {
        runtime_gcWriteBarrierR8();
        prVar8 = extraout_RAX_05;
        prVar7 = extraout_RDX_00;
      }
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar7->_defer = sp->_defer;
        prVar9 = prVar8;
      }
      else {
        runtime_gcWriteBarrierR8();
        prVar9 = extraout_RAX_06;
      }
      runtime_freedefer(prVar9);
      prVar8 = (runtime__defer *)((ulong)prVar8 & 0xff);
                    /* Unresolved local var: runtime._defer * d@[???]
                       Unresolved local var: runtime._defer * prev@[???] */
      prVar7 = gp;
      local_d0 = sp;
    }
    cVar6 = (char)prVar8;
  } while (pvStack_10._0_1_ == false);
  prVar10 = (runtime__panic *)local_40._24_8_;
  uVar11 = uVar3;
  if (runtime_writeBarrier._0_4_ == 0) {
    prVar7->_panic = (runtime__panic *)local_40._24_8_;
  }
  else {
    runtime_gcWriteBarrierCX();
    prVar7 = extraout_RDX_01;
    cVar6 = extraout_AL;
  }
  if (((prVar10 != (runtime__panic *)0x0) && (prVar10->goexit != false)) &&
     (prVar10->aborted != false)) {
    prVar7->sigcode0 = (uintptr)prVar10->sp;
    prVar7->sigcode1 = prVar10->pc;
    runtime_mcall();
    s_00.len = uVar2;
    s_00.str = &DAT_0029e577;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  LOCK();
  runtime_runningPanicDefers = runtime_runningPanicDefers - 1;
  UNLOCK();
  prVar9 = prVar7->_defer;
  if (cVar6 == '\0') {
    prVar8 = prVar9;
    prVar9 = prVar9->link;
                    /* Unresolved local var: runtime._defer * newd@[???] */
  }
  else {
    prVar8 = (runtime__defer *)0x0;
  }
  while ((prVar9 != (runtime__defer *)0x0 && (prVar9->started == false))) {
    if (prVar9->openDefer == false) {
      prVar8 = prVar9;
      prVar9 = prVar9->link;
    }
    else {
      if (prVar8 == (runtime__defer *)0x0) {
        if (runtime_writeBarrier._0_4_ == 0) {
          prVar7->_defer = prVar9->link;
        }
        else {
          runtime_gcWriteBarrierR8();
        }
      }
      else if (runtime_writeBarrier._0_4_ == 0) {
        prVar8->link = prVar9->link;
      }
      else {
        runtime_gcWriteBarrierR8();
      }
      prVar9 = prVar9->link;
      runtime_freedefer(prVar9);
      prVar7 = gp;
      uVar11 = uVar3;
    }
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    prVar7->_panic = (runtime__panic *)local_40._24_8_;
  }
  else {
    runtime_gcWriteBarrier();
    prVar7 = extraout_RDX_02;
  }
  do {
    prVar10 = prVar7->_panic;
    if (prVar10 == (runtime__panic *)0x0) {
LAB_004e6dab:
      prVar7->sig = 0;
LAB_004e6d74:
      prVar7->sigcode0 = uVar11;
      prVar7->sigcode1 = uVar2;
      runtime_mcall();
      s.len = uVar2;
      s.str = &DAT_00298f92;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    if (prVar10->aborted == false) {
      if (prVar10 != (runtime__panic *)0x0) goto LAB_004e6d74;
      goto LAB_004e6dab;
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar7->_panic = prVar10->link;
    }
    else {
      runtime_gcWriteBarrier();
      prVar7 = extraout_RDX_03;
    }
  } while( true );
}


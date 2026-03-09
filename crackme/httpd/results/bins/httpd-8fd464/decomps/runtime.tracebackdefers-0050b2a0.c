
/* WARNING: Unknown calling convention */

void runtime_tracebackdefers
               (runtime_g *gp,func__runtime_stkframe__unsafe_Pointer__bool **callback,void *v)

{
  uint uVar1;
  runtime_stkframe *prVar2;
  void *in_RSI;
  runtime_stkframe *prVar3;
  long in_FS_OFFSET;
  runtime_funcInfo rVar4;
  string s;
  string s_00;
  runtime_g *gp_spill;
  func__runtime_stkframe__unsafe_Pointer__bool **callback_spill;
  void *v_spill;
  runtime__func *local_a8;
  runtime_moduledata *local_a0;
  undefined1 local_88 [40];
  runtime_stkframe frame;
  
  while (&frame.fp <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  frame.fn._func = (runtime__func *)0x0;
  prVar3 = (runtime_stkframe *)local_88;
  FUN_0051a190();
                    /* Unresolved local var: runtime._defer * d@[???] */
  local_88._32_8_ = gp_spill->_defer;
  while( true ) {
    if ((runtime__defer *)local_88._32_8_ == (runtime__defer *)0x0) {
      return;
    }
                    /* Unresolved local var: runtime.funcval * fn@[???] */
    prVar2 = (runtime_stkframe *)((runtime__defer *)local_88._32_8_)->fn;
    if (prVar2 == (runtime_stkframe *)0x0) {
      frame.pc = 0;
      frame.fn._func = (runtime__func *)0x0;
      frame.fn.datap = (runtime_moduledata *)0x0;
      frame.argp = 0;
      frame.arglen = 0;
      frame.argmap = (runtime_bitvector *)0x0;
    }
    else {
      frame.pc = (uintptr)(prVar2->fn)._func;
      local_88._24_8_ = prVar2;
      rVar4 = runtime_findfunc(frame.pc);
      s.len = rVar4.datap;
      if (local_a8 == (runtime__func *)0x0) {
        local_88._16_8_ = frame.pc;
        runtime_printlock();
        s.str = (uint8 *)0x2a0ffd;
        runtime_printstring(s);
        runtime_printhex(local_88._16_8_);
        runtime_printnl();
        runtime_printunlock();
        s_00.len = (int)s.len;
        s_00.str = &DAT_002906fa;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_00);
      }
      frame.fn._func = local_a8;
      frame.fn.datap = local_a0;
      if ((int)*(uintptr *)local_88._32_8_ == 0) {
        frame.argp = 0;
      }
      else {
        frame.argp = local_88._32_8_ + 0x48;
      }
      uVar1 = local_a8->args;
      in_RSI = (void *)(ulong)uVar1;
      prVar3 = (runtime_stkframe *)(long)(int)uVar1;
      frame.argmap = (runtime_bitvector *)0x0;
      frame.arglen = (uintptr)prVar3;
      if (uVar1 == 0x80000000) {
        rVar4.datap = local_a0;
        rVar4._func = (runtime__func *)local_88._32_8_;
        runtime_getArgInfo((runtime_stkframe *)local_88._24_8_,rVar4,false,
                           (runtime_funcval *)0x80000000);
        frame.arglen = local_88._0_8_;
        frame.argmap = (runtime_bitvector *)local_88._8_8_;
      }
    }
    frame.continpc = frame.pc;
    local_a8 = v_spill;
    (**callback_spill)(prVar3,in_RSI,(bool *)callback_spill);
    if ((char)local_a0 == '\0') break;
    local_88._32_8_ = *(runtime__defer **)(local_88._32_8_ + 0x28);
  }
  return;
}


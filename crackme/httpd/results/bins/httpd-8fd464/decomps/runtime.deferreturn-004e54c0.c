
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_deferreturn(void)

{
  runtime_g *extraout_RAX;
  runtime_g *extraout_RAX_00;
  runtime_g *gp;
  runtime_g *extraout_RAX_01;
  runtime__defer *prVar1;
  runtime__defer *unaff_RBX;
  long in_FS_OFFSET;
  string s;
  undefined8 uStack0000000000000008;
  char local_30;
  
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: runtime._defer * d@[???]
                       Unresolved local var: uintptr sp@[???]
                       Unresolved local var: runtime.funcval * fn@[???] */
  gp = *(runtime_g **)(in_FS_OFFSET + -8);
  prVar1 = gp->_defer;
  if (prVar1 == (runtime__defer *)0x0) {
    return;
  }
  if ((undefined8 *)prVar1->sp != &uStack0000000000000008) {
    return;
  }
  if (prVar1->openDefer == false) {
    if (prVar1->siz != 0) {
      if (prVar1->siz == 8) {
        uStack0000000000000008._0_4_ = prVar1[1].siz;
        uStack0000000000000008._4_1_ = prVar1[1].started;
        uStack0000000000000008._5_1_ = prVar1[1].heap;
        uStack0000000000000008._6_1_ = prVar1[1].openDefer;
        uStack0000000000000008._7_1_ = prVar1[1].field_0x7;
      }
      else {
        runtime_memmove();
      }
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar1->fn = (runtime_funcval *)0x0;
    }
    else {
      runtime_gcWriteBarrierR8();
      gp = extraout_RAX;
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      gp->_defer = prVar1->link;
    }
    else {
      runtime_gcWriteBarrierBX();
      gp = extraout_RAX_00;
    }
    runtime_freedefer((runtime__defer *)gp);
    runtime_jmpdefer();
    return;
  }
  runtime_runOpenDeferFrame(gp,unaff_RBX);
  if (local_30 != '\0') {
    if (runtime_writeBarrier._0_4_ == 0) {
      gp->_defer = prVar1->link;
    }
    else {
      runtime_gcWriteBarrierDX();
      gp = extraout_RAX_01;
    }
    runtime_freedefer((runtime__defer *)gp);
    return;
  }
  s.len = (int)unaff_RBX;
  s.str = &DAT_002a792b;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_forcegchelper(void)

{
  runtime_g *prVar1;
  void *unaff_RBX;
  int in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  string s;
  string s_00;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar1 = *(runtime_g **)(in_FS_OFFSET + -8);
  if (runtime_writeBarrier._0_4_ != 0) {
    in_RDI = 0x79faa8;
    runtime_gcWriteBarrier();
    prVar1 = runtime_forcegc.g;
  }
  while (runtime_forcegc.g = prVar1, runtime_lock2(&runtime_forcegc.lock), runtime_forcegc.idle == 0
        ) {
    LOCK();
    runtime_forcegc.idle = 1;
    UNLOCK();
    runtime_gopark((func__runtime_g__unsafe_Pointer__bool **)&PTR_runtime_parkunlock_c_002b39a0,
                   unaff_RBX,0xa0,(uint8)in_RDI,in_RSI);
    if (0 < runtime_debug.gctrace) {
      runtime_printlock();
      s.len = (int)unaff_RBX;
      s.str = &DAT_0028eea4;
      runtime_printstring(s);
      runtime_printunlock();
    }
    runtime_nanotime1();
    runtime_gcStart();
    prVar1 = runtime_forcegc.g;
  }
  s_00.len = (int)unaff_RBX;
  s_00.str = &DAT_0029bf5a;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_00);
}


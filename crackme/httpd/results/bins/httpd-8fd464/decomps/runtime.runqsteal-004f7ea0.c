
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.runqsteal(runtime.p * _p_, runtime.p * p2, bool
   stealRunNextG, runtime.g * ~r3) */

runtime_g * runtime_runqsteal(runtime_p *_p_,runtime_p *p2,bool stealRunNextG)

{
  uint32 uVar1;
  uint uVar2;
  uint32 batchHead;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  string s;
  runtime_p *_p__spill;
  runtime_p *p2_spill;
  bool stealRunNextG_spill;
  uint local_18;
  
                    /* Unresolved local var: uint32 t@[???]
                       Unresolved local var: uint32 n@[???]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: uint32 h@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  batchHead = _p__spill->runqtail;
  runtime_runqgrab(_p__spill,(runtime_guintptr (*) [256])p2,batchHead,SUB81(in_RDI,0));
  if (local_18 == 0) {
    return (runtime_g *)(ulong)local_18;
  }
  uVar1 = (local_18 + batchHead) - 1;
  if (local_18 == 1) {
    return (runtime_g *)(ulong)local_18;
  }
  uVar2 = ((batchHead - _p__spill->runqhead) + local_18) - 1;
  if (uVar2 < 0x100) {
    LOCK();
    _p__spill->runqtail = uVar1;
    UNLOCK();
    return (runtime_g *)(ulong)uVar2;
  }
  s.len = _p__spill->runq[(byte)uVar1];
  s.str = &DAT_0029e76f;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}



/* WARNING: Unknown calling convention */

void runtime_goexit0(runtime_g *gp)

{
  uint uVar1;
  long lVar2;
  runtime_m *gp_00;
  runtime_p *extraout_RAX;
  runtime_p *extraout_RAX_00;
  runtime_p *extraout_RAX_01;
  runtime_p *extraout_RAX_02;
  runtime__defer *prVar3;
  runtime_g *extraout_RDX;
  runtime_g *extraout_RDX_00;
  runtime_g *extraout_RDX_01;
  runtime_g *gp_01;
  uint32 unaff_EBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  runtime_g *gp_spill;
  char local_28;
  
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg0(RAX)] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  gp_01 = *(runtime_g **)(in_FS_OFFSET + -8);
  runtime_casgstatus(gp_01,unaff_EBX,(uint32)gp_spill);
  runtime_isSystemGoroutine(gp_spill,SUB41(unaff_EBX,0));
  if (local_28 != '\0') {
    LOCK();
    runtime_sched.ngsys = runtime_sched.ngsys - 1;
    UNLOCK();
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    gp_spill->m = (runtime_m *)0x0;
  }
  else {
    runtime_gcWriteBarrierCX();
    gp_spill = (runtime_g *)extraout_RAX;
  }
  prVar3 = ((runtime_p *)gp_spill)->deferpoolbuf[0][1];
  ((runtime_p *)gp_spill)->deferpoolbuf[0][1] = (runtime__defer *)0x0;
  gp_01->m->lockedg = 0;
  *(undefined1 *)((long)&((runtime_p *)gp_spill)->deferpool[3].array + 2) = 0;
  *(undefined1 *)((long)&((runtime_p *)gp_spill)->deferpool[3].array + 5) = 0;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(undefined8 *)&(((runtime_p *)gp_spill)->sysmontick).syscalltick = 0;
    (((runtime_p *)gp_spill)->sysmontick).schedwhen = 0;
  }
  else {
    runtime_gcWriteBarrierBX();
    runtime_gcWriteBarrierBX();
    gp_spill = (runtime_g *)extraout_RAX_00;
    gp_01 = extraout_RDX;
  }
  ((runtime_p *)gp_spill)->deferpoolbuf[0][4] = (runtime__defer *)0x0;
  ((runtime_p *)gp_spill)->deferpoolbuf[0][5] = (runtime__defer *)0x0;
  if (runtime_writeBarrier._0_4_ == 0) {
    ((runtime_p *)gp_spill)->deferpoolbuf[0][3] = (runtime__defer *)0x0;
  }
  else {
    runtime_gcWriteBarrierBX();
    gp_spill = (runtime_g *)extraout_RAX_01;
    gp_01 = extraout_RDX_00;
  }
  *(undefined1 *)&((runtime_p *)gp_spill)->deferpool[3].array = 0;
  if (runtime_writeBarrier._0_4_ == 0) {
    ((runtime_p *)gp_spill)->deferpool[1].len = 0;
    ((runtime_p *)gp_spill)->deferpoolbuf[0][0x11] = (runtime__defer *)0x0;
    ((runtime_p *)gp_spill)->deferpoolbuf[0][0x12] = (runtime__defer *)0x0;
  }
  else {
    runtime_gcWriteBarrierBX();
    runtime_gcWriteBarrierBX();
    runtime_gcWriteBarrierBX();
    gp_spill = (runtime_g *)extraout_RAX_02;
    gp_01 = extraout_RDX_01;
  }
  if ((runtime_gcBlackenEnabled != 0) && (0 < (long)((runtime_p *)gp_spill)->deferpoolbuf[0][0x14]))
  {
                    /* Unresolved local var: int64 scanCredit@[???] */
    LOCK();
    runtime_gcController.bgScanCredit =
         runtime_gcController.bgScanCredit +
         (long)((double)(long)((runtime_p *)gp_spill)->deferpoolbuf[0][0x14] *
               (double)runtime_gcController.assistWorkPerByte);
    UNLOCK();
    ((runtime_p *)gp_spill)->deferpoolbuf[0][0x14] = (runtime__defer *)0x0;
  }
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar2 = *(long *)(in_FS_OFFSET + -8);
  *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x30) + 200) + 0x30) = 0;
  *(undefined8 *)(*(long *)(lVar2 + 0x30) + 200) = 0;
  gp_00 = gp_01->m;
  uVar1 = gp_00->lockedInt;
  if (uVar1 == 0) {
    runtime_gfput((runtime_p *)gp_spill,(runtime_g *)gp_00);
    if (prVar3 != (runtime__defer *)0x0) {
      runtime_gogo();
    }
    runtime_schedule();
    return;
  }
  runtime_printlock();
  s.len = (int)gp_00;
  s.str = &DAT_0029dd53;
  runtime_printstring(s);
  runtime_printuint((ulong)uVar1);
  runtime_printnl();
  runtime_printunlock();
  s_00.len = (int)gp_00;
  s_00.str = &DAT_0029fd2c;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_00);
}


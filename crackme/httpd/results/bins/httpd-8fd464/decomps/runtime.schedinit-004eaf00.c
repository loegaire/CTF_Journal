
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_schedinit(void)

{
  runtime_m *mp;
  runtime_p **b;
  int iVar1;
  runtime_moduledata *prVar2;
  uint8 *puVar3;
  long lVar4;
  int64 unaff_RBX;
  long in_FS_OFFSET;
  string sVar5;
  string s;
  string s_00;
  __uint8 r;
  multireturn_int_bool__conflict mVar6;
  byte local_40;
  undefined7 uStack_3f;
  
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: int32 procs@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  mp = *(runtime_m **)(in_FS_OFFSET + -8);
  runtime_sched.maxmcount = 10000;
                    /* Unresolved local var: runtime.moduledata * datap@[???] */
  for (prVar2 = &runtime_firstmoduledata; prVar2 != (runtime_moduledata *)0x0; prVar2 = prVar2->next
      ) {
    runtime_moduledataverify1((runtime_moduledata *)mp);
  }
  runtime_stackinit();
  runtime_mallocinit();
  r.len = unaff_RBX;
  r.array = (uint8 *)&runtime_fastrandseed;
  r.cap = (int)prVar2;
                    /* Unresolved local var: []uint8 s@[???] */
  runtime_getRandomData(r);
  runtime_mcommoninit(mp,unaff_RBX);
  runtime_cpuinit();
  runtime_alginit();
  runtime_modulesinit();
  runtime_typelinksinit();
  runtime_itabsinit();
  puVar3 = (uint8 *)((mp->morebuf).lr + 0x80);
  runtime_sigprocmask();
  runtime_initSigmask.__bits = *(uint32 (*) [4])((mp->morebuf).lr + 0x80);
  runtime_goargs();
  runtime_goenvs_unix();
  runtime_parsedebugvars();
  runtime_gcinit();
  runtime_lock2(&runtime_sched.lock);
  runtime_nanotime1();
  runtime_sched.lastpoll = 0x7a13b8;
  sVar5.str = (uint8 *)(ulong)(uint)runtime_ncpu;
  sVar5.len = unaff_RBX;
                    /* Unresolved local var: int32 n@[???]
                       Unresolved local var: bool ok@[???] */
  sVar5 = runtime_gogetenv(sVar5);
  s.len = sVar5.len;
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: bool ok@[???] */
  s.str = puVar3;
  mVar6 = runtime_atoi(s);
  s_00.len._1_7_ = sVar5.len._1_7_;
  s_00.len._0_1_ = mVar6.~r2;
  runtime_procresize((uint)CONCAT71((int7)((ulong)puVar3 >> 8),puVar3 == (uint8 *)(long)(int)puVar3)
                     & (uint)local_40);
  if (CONCAT71(uStack_3f,local_40) != 0) {
    s_00.str = &DAT_002a7956;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  runtime_unlock2(&runtime_sched.lock);
  iVar1 = runtime_allp.len;
  b = runtime_allp.array;
  if (1 < runtime_debug.cgocheck) {
    runtime_writeBarrier.cgo = true;
    runtime_writeBarrier.enabled = true;
                    /* Unresolved local var: runtime.p * p@[???] */
    for (lVar4 = 0; lVar4 < iVar1; lVar4 = lVar4 + 1) {
      runtime___wbBuf__reset((runtime_wbBuf *)b);
    }
  }
  if (runtime_buildVersion.len == 0) {
    runtime_buildVersion.len = 7;
    if (runtime_writeBarrier._0_4_ == 0) {
      runtime_buildVersion.str = &DAT_0028b71d;
    }
    else {
      runtime_gcWriteBarrier();
    }
  }
  if (runtime_modinfo.len == 1) {
    runtime_modinfo.len = 0;
    if (runtime_writeBarrier._0_4_ == 0) {
      runtime_modinfo.str = (uint8 *)0x0;
    }
    else {
      runtime_gcWriteBarrier();
    }
  }
  return;
}


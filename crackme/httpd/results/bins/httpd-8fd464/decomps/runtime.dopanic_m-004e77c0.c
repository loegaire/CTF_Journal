
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.dopanic_m(runtime.g * gp, uintptr pc, uintptr sp, bool
   ~r3) */

bool runtime_dopanic_m(runtime_g *gp,uintptr pc,uintptr sp)

{
  byte bVar1;
  uint uVar2;
  uint64 v;
  uint64 v_00;
  long lVar3;
  runtime_g *prVar4;
  uint32 uVar5;
  uint32 uVar6;
  uintptr lr;
  uintptr sp_00;
  uint8 *puVar7;
  runtime_m *gp_00;
  long in_FS_OFFSET;
  bool bVar8;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  runtime_g *gp_spill;
  uintptr pc_spill;
  uintptr sp_spill;
  
                    /* Unresolved local var: int32 level@[???]
                       Unresolved local var: bool all@[???]
                       Unresolved local var: runtime.g * _g_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar2 = gp_spill->sig;
  if (uVar2 != 0) {
    if (uVar2 < 0x21) {
      puVar7 = (uint8 *)runtime_sigtable[uVar2].name.len;
      pc = (uintptr)runtime_sigtable;
    }
    else {
      puVar7 = (uint8 *)0x0;
                    /* Unresolved local var: string signame@[???]
                       Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
    }
    if (puVar7 == (uint8 *)0x0) {
      runtime_printlock();
      s_01.len = pc;
      s_01.str = &DAT_0028bc9a;
      runtime_printstring(s_01);
      runtime_printhex((ulong)uVar2);
      runtime_printunlock();
    }
    else {
      runtime_printlock();
      s.len = pc;
      s.str = &DAT_0028bc9a;
      runtime_printstring(s);
      s_00.len = pc;
      s_00.str = puVar7;
      runtime_printstring(s_00);
      runtime_printunlock();
    }
    v = gp_spill->sigcode0;
    v_00 = gp_spill->sigcode1;
    pc = gp_spill->sigpc;
    runtime_printlock();
    s_02.len = pc;
    s_02.str = &DAT_002893c0;
    runtime_printstring(s_02);
    runtime_printhex(v);
    s_03.len = pc;
    s_03.str = &DAT_002893ae;
    runtime_printstring(s_03);
    runtime_printhex(v_00);
    s_04.len = pc;
    s_04.str = &DAT_00287dc1;
    runtime_printstring(s_04);
    runtime_printhex(pc);
    s_05.len = pc;
    s_05.str = &DAT_0028783b;
    runtime_printstring(s_05);
    runtime_printunlock();
  }
  uVar6 = runtime_traceback_cache;
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: uint32 t@[???] */
  lVar3 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  if (*(int *)(lVar3 + 0xfc) < 1) {
    sp_00 = CONCAT71((int7)(pc >> 8),(runtime_traceback_cache >> 1 & 1) != 0);
  }
  else {
    sp_00 = 1;
  }
  bVar1 = *(byte *)(lVar3 + 0x131);
  uVar2 = runtime_traceback_cache >> 2;
  if (bVar1 != 0) {
    uVar2 = (uint)bVar1;
  }
  lr = *(uintptr *)(in_FS_OFFSET + -8);
  if (uVar2 != 0) {
    gp_00 = gp_spill->m;
    prVar4 = gp_00->curg;
    if ((runtime_g *)((runtime_stack *)&gp_00->g0)->lo == gp_spill) {
      if ((1 < uVar2) || (lr = *(uintptr *)(lr + 0x30), 0 < *(int *)(lr + 0xfc))) {
        runtime_printlock();
        s_06.len = sp_00;
        s_06.str = &DAT_00299805;
        runtime_printstring(s_06);
        runtime_printunlock();
        runtime_traceback((uintptr)gp_spill,sp_00,lr,(runtime_g *)gp_00);
      }
    }
    else {
      runtime_printlock();
      runtime_printnl();
      runtime_printunlock();
      runtime_goroutineheader(gp_spill);
      runtime_traceback((uintptr)gp_spill,sp_00,lr,(runtime_g *)gp_00);
    }
    if ((runtime_didothers == false) && (prVar4 != gp_spill || (char)sp_00 != '\0')) {
      runtime_didothers = true;
      runtime_tracebackothers(gp_spill);
    }
  }
  runtime_unlock2(&runtime_paniclk);
  LOCK();
  uVar5 = runtime_panicking - 1;
  UNLOCK();
  bVar8 = runtime_panicking != 1;
  runtime_panicking = uVar5;
  if (bVar8) {
    runtime_lock2(&runtime_deadlock);
    runtime_lock2(&runtime_deadlock);
  }
  return SUB41(uVar6,0);
}



/* WARNING: Unknown calling convention */

void runtime_printAncestorTracebackFuncInfo(runtime_funcInfo f,uintptr pc)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uintptr in_RDI;
  long in_FS_OFFSET;
  runtime_funcInfo f_00;
  runtime_funcInfo f_01;
  runtime_funcInfo f_02;
  runtime_funcInfo f_03;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  runtime_funcInfo f_spill;
  uintptr pc_spill;
  runtime__func *local_70;
  uint8 *local_68;
  int local_58;
  undefined4 uStack_54;
  int local_50;
  string sVar5;
  runtime_moduledata *prVar4;
  
  f_00.datap = f.datap;
                    /* Unresolved local var: string name@[???]
                       Unresolved local var: string file@[???]
                       Unresolved local var: void * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  f_00._func = f_spill._func;
  sVar5 = runtime_funcname(f_00);
  prVar4 = (runtime_moduledata *)sVar5.len;
                    /* Unresolved local var: void * p@[???] */
  if ((f_spill._func)->nfuncdata < 4) {
    lVar3 = 0;
                    /* Unresolved local var: void * inldata@[???]
                       Unresolved local var: void * ~R0@[???] */
  }
  else {
    uVar1 = (f_spill._func)->npcdata;
    prVar4 = (runtime_moduledata *)((f_spill._func)->_ + (ulong)uVar1 * 4 + 2);
    if (((uint)prVar4 >> 2 & 1) != 0) {
      if (((uint)f_spill._func >> 2 & 1) != 0) {
        runtime_printlock();
        sVar5.len = (int)prVar4;
        sVar5.str = &DAT_0029ee6b;
        runtime_printstring(sVar5);
        runtime_printpointer(f_spill._func);
        runtime_printnl();
        runtime_printunlock();
      }
      prVar4 = (runtime_moduledata *)(f_spill._func[1]._ + (ulong)uVar1 * 4 + -0x2a);
    }
    lVar3 = (prVar4->funcnametab).cap;
  }
                    /* Unresolved local var: runtime.inlinedCall[1048576] * inltree@[???]
                       Unresolved local var: int32 ix@[???] */
  if ((lVar3 != 0) &&
     (f_01.datap = prVar4, f_01._func = (runtime__func *)f_spill.datap,
     runtime_pcdatavalue(f_01,(uint32)pc_spill,in_RDI,(runtime_pcvalueCache *)f_spill._func),
     -1 < local_58)) {
    if (0xfffff < (ulong)(long)local_58) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    f_02._func = (runtime__func *)(ulong)*(uint *)(lVar3 + 0xc + (long)local_58 * 0x14);
    f_02.datap = prVar4;
    sVar5 = runtime_funcnameFromNameoff(f_02,(uint)f_spill._func);
    prVar4 = (runtime_moduledata *)sVar5.len;
    local_68 = (uint8 *)0x0;
    local_70 = (runtime__func *)pc_spill;
  }
  f_03.datap = prVar4;
  f_03._func = local_70;
  runtime_funcline1(f_03,(uintptr)local_68,SUB81(in_RDI,0));
  s_02.str._4_4_ = uStack_54;
  s_02.str._0_4_ = local_58;
  if ((((local_68 == &DAT_0000000f) && (local_70->entry == 0x2e656d69746e7572)) &&
      (local_70->nameoff == 0x61706f67)) &&
     (((short)local_70->args == 0x696e && (*(char *)((long)&local_70->args + 2) == 'c')))) {
    local_68 = &DAT_00000005;
  }
  runtime_printlock();
  s.len = (int)local_68;
  s.str = local_68;
  runtime_printstring(s);
  s_00.len = (int)local_68;
  s_00.str = &DAT_00289438;
  runtime_printstring(s_00);
  runtime_printunlock();
  runtime_printlock();
  s_01.len = (int)local_68;
  s_01.str = &DAT_002b2e50;
  runtime_printstring(s_01);
  s_02.len = (int)local_68;
  runtime_printstring(s_02);
  s_03.len = (int)local_68;
  s_03.str = &DAT_00287748;
  runtime_printstring(s_03);
  runtime_printint((long)local_50);
  runtime_printunlock();
  uVar2 = (f_spill._func)->entry;
  if (uVar2 < pc_spill) {
    runtime_printlock();
    s_04.len = (int)local_68;
    s_04.str = (uint8 *)((long)&DAT_0028776c + 1);
    runtime_printstring(s_04);
    runtime_printhex(pc_spill - uVar2);
    runtime_printunlock();
  }
  runtime_printlock();
  runtime_printnl();
  runtime_printunlock();
  return;
}


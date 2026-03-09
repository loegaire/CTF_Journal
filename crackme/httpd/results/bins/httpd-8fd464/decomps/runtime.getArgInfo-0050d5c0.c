
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.getArgInfo(runtime.stkframe * frame, runtime.funcInfo f,
   bool needArgMap, runtime.funcval * ctxt, uintptr arglen, runtime.bitvector * argmap) */

multireturn_uintptr_runtime_bitvector___
runtime_getArgInfo(runtime_stkframe *frame,runtime_funcInfo f,bool needArgMap,runtime_funcval *ctxt)

{
  ulong uVar1;
  runtime__func *extraout_RAX;
  runtime__func *extraout_RAX_00;
  runtime__func *prVar2;
  char cVar3;
  runtime_bitvector *prVar4;
  long in_FS_OFFSET;
  runtime_funcInfo f_00;
  multireturn_uintptr_runtime_bitvector___ mVar5;
  runtime_funcInfo f_01;
  string s;
  string s_00;
  runtime_stkframe *frame_spill;
  runtime_funcInfo f_spill;
  bool needArgMap_spill;
  runtime_reflectMethodValue *mv;
  char local_28;
  undefined7 uStack_27;
  string sVar6;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar4 = (runtime_bitvector *)(long)(f_spill._func)->args;
  prVar2 = f_spill._func;
  if ((needArgMap_spill) && ((f_spill._func)->args == -0x80000000)) {
    f_00.datap._0_1_ = 1;
    f_00._func = f_spill._func;
    f_00.datap._1_7_ = 0;
    runtime_funcname(f_00);
    prVar2 = (runtime__func *)CONCAT71(uStack_27,local_28);
                    /* Unresolved local var: bool retValid@[???]
                       Unresolved local var: runtime.bitvector * bv@[???] */
    if (prVar2 == (runtime__func *)&DAT_00000014) {
      runtime_memequal();
      prVar2 = extraout_RAX_00;
    }
    else {
      if (prVar2 != (runtime__func *)0x17) goto LAB_0050d6de;
      runtime_memequal();
      prVar2 = extraout_RAX;
    }
    if (local_28 != '\0') {
      if (mv == (runtime_reflectMethodValue *)0x0) {
        mv = *(runtime_reflectMethodValue **)frame_spill->sp;
        cVar3 = *(char *)((undefined8 *)frame_spill->sp + 4);
      }
      else {
        cVar3 = '\0';
      }
      if ((f_spill._func)->entry != ((runtime__func *)mv)->entry) {
        f_01.datap = (runtime_moduledata *)f_spill._func;
        f_01._func = (runtime__func *)f_spill.datap;
        sVar6 = runtime_funcname(f_01);
        s.str._1_7_ = uStack_27;
        s.str._0_1_ = local_28;
        runtime_printlock();
        sVar6.str = &DAT_0029ca5a;
        runtime_printstring(sVar6);
        s.len = sVar6.len;
        runtime_printstring(s);
        runtime_printnl();
        runtime_printunlock();
        s_00.len = sVar6.len;
        s_00.str = &DAT_00299a85;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_00);
      }
      prVar4 = (runtime_bitvector *)(long)(**(int **)&((runtime__func *)mv)->nameoff << 3);
      prVar2 = (runtime__func *)mv;
      if (cVar3 == '\0') {
        uVar1._0_4_ = ((runtime__func *)mv)->deferreturn;
        uVar1._4_4_ = ((runtime__func *)mv)->pcsp;
        prVar4 = (runtime_bitvector *)(uVar1 & 0xfffffffffffffff8);
      }
    }
  }
LAB_0050d6de:
  mVar5.argmap = prVar4;
  mVar5.arglen = (uintptr)prVar2;
  return mVar5;
}


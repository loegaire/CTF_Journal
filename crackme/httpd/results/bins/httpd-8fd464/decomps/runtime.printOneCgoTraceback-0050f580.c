
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.printOneCgoTraceback(uintptr pc, int max,
   runtime.cgoSymbolizerArg * arg, int ~r3) */

int runtime_printOneCgoTraceback(uintptr pc,int max,runtime_cgoSymbolizerArg *arg)

{
  uint8 *puVar1;
  uint64 v;
  long lVar2;
  uint8 *puVar3;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  uintptr pc_spill;
  int max_spill;
  runtime_cgoSymbolizerArg *arg_spill;
  uint8 *local_60;
  
                    /* Unresolved local var: int c@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  arg_spill->pc = pc_spill;
  lVar2 = 0;
  do {
    if (max_spill < lVar2) {
      return lVar2;
    }
    runtime_callCgoSymbolizer((runtime_cgoSymbolizerArg *)pc_spill);
    if (arg_spill->funcName == (uint8 *)0x0) {
      runtime_printlock();
      s_00.len = max_spill;
      s_00.str = &DAT_00299a25;
      runtime_printstring(s_00);
      runtime_printunlock();
    }
    else {
                    /* Unresolved local var: runtime.stringStruct ss@[???]
                       Unresolved local var: string s@[???] */
      runtime_findnull((uint8 *)arg_spill);
      runtime_printlock();
      s.len = max_spill;
      s.str = local_60;
      runtime_printstring(s);
      runtime_printnl();
      runtime_printunlock();
    }
    runtime_printlock();
    s_01.len = max_spill;
    s_01.str = &DAT_002b2e50;
    runtime_printstring(s_01);
    runtime_printunlock();
    puVar1 = arg_spill->file;
    puVar3 = (uint8 *)max_spill;
    if (puVar1 != (uint8 *)0x0) {
                    /* Unresolved local var: runtime.stringStruct ss@[???]
                       Unresolved local var: string s@[???] */
      runtime_findnull((uint8 *)arg_spill);
      v = arg_spill->lineno;
      runtime_printlock();
      s_02.len = (int)puVar1;
      s_02.str = (uint8 *)0x1;
      runtime_printstring(s_02);
      s_03.len = (int)puVar1;
      s_03.str = &DAT_00287748;
      runtime_printstring(s_03);
      runtime_printuint(v);
      runtime_printsp();
      runtime_printunlock();
      puVar3 = puVar1;
    }
    runtime_printlock();
    local_60 = (uint8 *)0x3;
    s_04.len = (int)puVar3;
    s_04.str = &DAT_00287c4b;
    runtime_printstring(s_04);
    runtime_printhex(pc_spill);
    runtime_printnl();
    runtime_printunlock();
    lVar2 = lVar2 + 1;
  } while (arg_spill->more != 0);
  return lVar2;
}


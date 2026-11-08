
/* WARNING: Unknown calling convention */

void runtime_printAncestorTraceback(runtime_ancestorInfo ancestor)

{
  runtime__func *prVar1;
  runtime__func *prVar2;
  long lVar3;
  bool firstFrame;
  runtime__func *pc;
  long lVar4;
  long lVar5;
  runtime_funcID childID;
  uintptr uVar6;
  runtime_funcID funcID;
  int64 iVar7;
  long in_FS_OFFSET;
  string s;
  string s_00;
  runtime_funcInfo rVar8;
  runtime_funcInfo f;
  runtime_funcInfo f_00;
  string s_01;
  runtime_funcInfo f_01;
  runtime_ancestorInfo ancestor_spill;
  runtime__func *local_58;
  runtime__func *local_50;
  char local_48;
  
  uVar6 = ancestor.gopc;
  iVar7 = ancestor.goid;
  s.len = ancestor.pcs.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_printlock();
  s.str = (uint8 *)0x2a039c;
  runtime_printstring(s);
  runtime_printint(ancestor_spill.goid);
  local_58 = (runtime__func *)0x3;
  s_00.len = s.len;
  s_00.str = &DAT_002879ea;
  runtime_printstring(s_00);
  runtime_printunlock();
                    /* Unresolved local var: int fidx@[???]
                       Unresolved local var: uintptr pc@[???] */
  lVar3 = 0;
  lVar5 = s.len;
  while( true ) {
    lVar4 = lVar3;
    prVar2 = local_50;
    funcID = (runtime_funcID)iVar7;
    childID = (runtime_funcID)uVar6;
    firstFrame = SUB81(local_50,0);
    if (ancestor_spill.pcs.len <= lVar4) break;
    prVar1 = (runtime__func *)ancestor_spill.pcs.array[lVar4];
    rVar8 = runtime_findfunc((uintptr)ancestor_spill.pcs.array);
    f.datap = rVar8.datap;
    local_50._0_3_ = (uint3)(lVar4 == 0);
    f._func = local_58;
    pc = prVar2;
    runtime_showfuncinfo(f,firstFrame,(runtime_funcID)iVar7,(runtime_funcID)uVar6);
    if (local_48 != '\0') {
      f_00.datap = f.datap;
      f_00._func = prVar1;
      runtime_printAncestorTracebackFuncInfo(f_00,(uintptr)pc);
      local_50 = prVar1;
    }
    local_58 = prVar2;
    lVar3 = lVar4 + 1;
    lVar5 = lVar4;
  }
  if (ancestor_spill.pcs.len == 100) {
    runtime_printlock();
    local_58 = (runtime__func *)&DAT_0000001f;
    s_01.len = lVar5;
    s_01.str = (uint8 *)0x2a1b87;
    runtime_printstring(s_01);
    runtime_printunlock();
  }
  rVar8 = runtime_findfunc(ancestor_spill.gopc);
  if (local_58 == (runtime__func *)0x0) {
    local_48 = '\0';
  }
  else {
    rVar8._func = local_58;
    runtime_showfuncinfo(rVar8,firstFrame,funcID,childID);
  }
  if ((local_48 != '\0') && (ancestor_spill.goid != 1)) {
    f_01.datap = rVar8.datap;
    f_01._func = local_58;
    runtime_printcreatedby1(f_01,(uintptr)local_50);
  }
  return;
}


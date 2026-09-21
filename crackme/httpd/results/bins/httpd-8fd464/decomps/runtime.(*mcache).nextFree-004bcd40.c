
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*mcache).nextFree(runtime.mcache * c, runtime.spanClass
   spc, runtime.gclinkptr v, runtime.mspan * s, bool shouldhelpgc) */

multireturn_runtime_gclinkptr_runtime_mspan___bool_
runtime___mcache__nextFree(runtime_mcache *c,runtime_spanClass spc)

{
  uint64 v;
  ulong v_00;
  uint64 uVar1;
  runtime_mspan *s;
  runtime_mspan *s_00;
  undefined7 unaff_00000019;
  ushort uVar2;
  long in_FS_OFFSET;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  multireturn_runtime_gclinkptr_runtime_mspan___bool_ mVar3;
  runtime_mcache *c_spill;
  runtime_spanClass spc_spill;
  uint64 local_30;
  
  uVar1 = local_30;
  s_05.len = CONCAT71(unaff_00000019,spc);
                    /* Unresolved local var: uintptr freeIndex@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  s = (runtime_mspan *)(ulong)spc_spill;
  if ((runtime_mspan *)0x87 < s) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  s_00 = c_spill->alloc[(long)s];
  runtime___mspan__nextFreeIndex(s);
  v = s_00->nelems;
  if (v == local_30) {
    uVar2 = s_00->allocCount;
    if (v != uVar2) {
      runtime_printlock();
      s_05.str = &DAT_0029df7b;
      runtime_printstring(s_05);
      runtime_printuint((ulong)uVar2);
      s_06.len = s_05.len;
      s_06.str = &DAT_0029095e;
      runtime_printstring(s_06);
      runtime_printuint(v);
      runtime_printnl();
      runtime_printunlock();
      s_07.len = s_05.len;
      s_07.str = &DAT_002a92f9;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_07);
    }
    local_30 = CONCAT71(local_30._1_7_,spc_spill);
    runtime___mcache__refill(c_spill,spc);
    s_00 = c_spill->alloc[spc_spill];
    runtime___mspan__nextFreeIndex(s_00);
  }
  if (s_00->nelems <= local_30) {
    s_04.len = uVar1;
    s_04.str = &DAT_0029d1d7;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_04);
  }
  mVar3.v = local_30 * s_00->elemsize + s_00->startAddr;
  uVar2 = s_00->allocCount + 1;
  s_00->allocCount = uVar2;
  v_00 = s_00->nelems;
  if (v_00 < uVar2) {
    runtime_printlock();
    s_01.len = uVar1;
    s_01.str = &DAT_00297d99;
    runtime_printstring(s_01);
    runtime_printuint((ulong)uVar2);
    s_02.len = uVar1;
    s_02.str = &DAT_0029095e;
    runtime_printstring(s_02);
    runtime_printuint(v_00);
    runtime_printnl();
    runtime_printunlock();
    s_03.len = uVar1;
    s_03.str = &DAT_0029df92;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_03);
  }
  mVar3.s = (runtime_mspan *)uVar1;
  mVar3.shouldhelpgc = SUB81(s_00,0);
  return mVar3;
}


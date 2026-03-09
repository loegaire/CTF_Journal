
/* WARNING: Unknown calling convention */

void runtime_gcDumpObject(string label,uintptr obj,uintptr off)

{
  byte bVar1;
  uint64 uVar2;
  uint64 v;
  uint64 v_00;
  uint8 *puVar3;
  string *psVar4;
  ulong uVar5;
  runtime_mspan *prVar6;
  ulong v_01;
  int iVar7;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  string s_08;
  string s_09;
  string s_10;
  string s_11;
  string s_12;
  string s_13;
  string s_14;
  string s_15;
  string s_16;
  string label_spill;
  uintptr obj_spill;
  uintptr off_spill;
  
  s.len = label.len;
                    /* Unresolved local var: runtime.mspan * s@[???]
                       Unresolved local var: bool skipped@[???]
                       Unresolved local var: uintptr size@[???]
                       Unresolved local var: runtime.mspan * ~R0@[???]
                       Unresolved local var: uintptr ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.heapArena * ha@[???] */
  uVar5 = obj_spill + 0x800000000000 >> 0x1a;
  if (uVar5 < 0x400000) {
    if ((*runtime_mheap_.arenas[0])[uVar5] == (runtime_heapArena *)0x0) {
      prVar6 = (runtime_mspan *)0x0;
    }
    else {
      prVar6 = (*runtime_mheap_.arenas[0])[uVar5]->spans[obj_spill >> 0xd & 0x1fff];
    }
  }
  else {
    prVar6 = (runtime_mspan *)0x0;
  }
  runtime_printlock();
  s.str = label_spill.str;
  runtime_printstring(s);
  s_00.len = s.len;
  s_00.str = &DAT_0028774b;
  runtime_printstring(s_00);
  runtime_printhex(obj_spill);
  runtime_printunlock();
  if (prVar6 == (runtime_mspan *)0x0) {
    runtime_printlock();
    s_09.len = s.len;
    s_09.str = &DAT_0028a3f9;
    runtime_printstring(s_09);
    runtime_printunlock();
    return;
  }
  uVar2 = prVar6->limit;
  bVar1 = prVar6->spanclass;
  v = prVar6->elemsize;
  v_00 = prVar6->startAddr;
  runtime_printlock();
  s_01.len = v;
  s_01.str = &DAT_0028ec10;
  runtime_printstring(s_01);
  runtime_printhex(v_00);
  s_02.len = v;
  s_02.str = &DAT_0028d20e;
  runtime_printstring(s_02);
  runtime_printhex(uVar2);
  s_03.len = v;
  s_03.str = &DAT_00294551;
  runtime_printstring(s_03);
  runtime_printuint((ulong)bVar1);
  s_04.len = v;
  s_04.str = &DAT_002927e2;
  runtime_printstring(s_04);
  runtime_printuint(v);
  s_05.len = v;
  s_05.str = &DAT_0028d217;
  runtime_printstring(s_05);
  runtime_printunlock();
  psVar4 = runtime_mSpanStateNames.array;
  bVar1 = (prVar6->state).s;
                    /* Unresolved local var: runtime.mSpanState state@[???] */
  if ((long)(ulong)bVar1 < runtime_mSpanStateNames.len) {
    puVar3 = (uint8 *)runtime_mSpanStateNames.array[bVar1].len;
    runtime_printlock();
    s_06.len = (int)psVar4;
    s_06.str = puVar3;
    runtime_printstring(s_06);
    runtime_printnl();
    runtime_printunlock();
  }
  else {
    runtime_printlock();
    s_07.len = (int)psVar4;
    s_07.str = &DAT_0028d02a;
    runtime_printstring(s_07);
    runtime_printuint((ulong)bVar1);
    s_08.len = (int)psVar4;
    s_08.str = &DAT_00287783;
    runtime_printstring(s_08);
    runtime_printunlock();
  }
  uVar5 = prVar6->elemsize;
  if (((prVar6->state).s == 2) && (uVar5 == 0)) {
    uVar5 = off_spill + 8;
  }
  iVar7 = 0;
  for (v_01 = 0; v_01 < uVar5; v_01 = v_01 + 8) {
    if ((v_01 < 0x400) || ((off_spill - 0x80 < v_01 && (v_01 < off_spill + 0x80)))) {
      if ((char)iVar7 != '\0') {
        runtime_printlock();
        s_10.len = iVar7;
        s_10.str = &DAT_002888bd;
        runtime_printstring(s_10);
        runtime_printunlock();
      }
      uVar2 = *(uint64 *)(v_01 + obj_spill);
      runtime_printlock();
      s_11.len = iVar7;
      s_11.str = &DAT_00287879;
      runtime_printstring(s_11);
      s_12.len = iVar7;
      s_12.str = label_spill.str;
      runtime_printstring(s_12);
      s_13.len = iVar7;
      s_13.str = (uint8 *)&net__stmp_20;
      runtime_printstring(s_13);
      runtime_printuint(v_01);
      s_14.len = iVar7;
      s_14.str = &DAT_00287dd9;
      runtime_printstring(s_14);
      runtime_printhex(uVar2);
      runtime_printunlock();
      if (off_spill == v_01) {
        runtime_printlock();
        s_15.len = iVar7;
        s_15.str = &DAT_00287d99;
        runtime_printstring(s_15);
        runtime_printunlock();
      }
      runtime_printlock();
      runtime_printnl();
      runtime_printunlock();
      iVar7 = 0;
    }
    else {
      iVar7 = 1;
    }
  }
  if ((char)iVar7 != '\0') {
    runtime_printlock();
    s_16.len = iVar7;
    s_16.str = &DAT_002888bd;
    runtime_printstring(s_16);
    runtime_printunlock();
  }
  return;
}


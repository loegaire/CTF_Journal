
/* WARNING: Unknown calling convention */

void runtime_badPointer(runtime_mspan *s,uintptr p,uintptr refBase,uintptr refOff)

{
  byte bVar1;
  uint64 v;
  uint64 v_00;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  string s_08;
  string label;
  string s_09;
  runtime_mspan *s_spill;
  uintptr p_spill;
  uintptr refBase_spill;
  uintptr refOff_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_printlock();
  runtime_printlock();
  s_00.len = p;
  s_00.str = &DAT_0029a339;
  runtime_printstring(s_00);
  runtime_printhex(p_spill);
  runtime_printunlock();
  if (s_spill != (runtime_mspan *)0x0) {
    bVar1 = (s_spill->state).s;
    if (bVar1 == 1) {
      runtime_printlock();
      s_09.len = p;
      s_09.str = &DAT_0029e88f;
      runtime_printstring(s_09);
      runtime_printunlock();
    }
    else {
      runtime_printlock();
      s_01.len = p;
      s_01.str = &DAT_0029b92e;
      runtime_printstring(s_01);
      runtime_printunlock();
    }
    v = s_spill->limit;
    v_00 = s_spill->startAddr;
    refBase = v;
    runtime_printlock();
    s_02.len = p;
    s_02.str = &DAT_0029455e;
    runtime_printstring(s_02);
    runtime_printhex(v_00);
    s_03.len = p;
    s_03.str = &DAT_002927fa;
    runtime_printstring(s_03);
    runtime_printhex(v);
    s_04.len = p;
    s_04.str = &DAT_00292806;
    runtime_printstring(s_04);
    runtime_printuint((ulong)bVar1);
    runtime_printunlock();
  }
  runtime_printlock();
  runtime_printnl();
  runtime_printunlock();
  if (refBase_spill != 0) {
    runtime_printlock();
    s_06.len = p;
    s_06.str = (uint8 *)0x2a1a1e;
    runtime_printstring(s_06);
    runtime_printhex(refBase_spill);
    s_07.len = p;
    s_07.str = (uint8 *)&net__stmp_20;
    runtime_printstring(s_07);
    runtime_printhex(refOff_spill);
    s_08.len = p;
    s_08.str = &DAT_00287783;
    runtime_printstring(s_08);
    runtime_printunlock();
    label.len = p;
    label.str = (uint8 *)refOff_spill;
    runtime_gcDumpObject(label,refBase,refOff);
  }
  *(undefined1 *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0x131) = 2;
  s_05.len = p;
  s_05.str = &DAT_002ab539;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_05);
}


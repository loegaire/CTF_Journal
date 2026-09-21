
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.(*ParseError).Error(time.ParseError * e, string ~r0) */

string time___ParseError__Error(time_ParseError *e)

{
  int iVar1;
  int unaff_RBX;
  uint8 *in_RDI;
  undefined **ppuVar2;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string sVar3;
  string sVar4;
  string sVar5;
  string a1;
  string a0;
  __string a;
  string a2;
  time_ParseError *e_spill;
  runtime_tmpBuf *local_f0;
  int local_e8;
  uint8 *local_e0;
  uint8 *local_c8;
  undefined *local_88;
  uint8 local_80 [24];
  undefined *local_68;
  undefined8 local_60;
  undefined *local_48;
  undefined8 local_40;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  while (local_80 <= *(uint8 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((e_spill->Message).len == 0) {
    s.len = unaff_RBX;
    s.str = (uint8 *)e_spill;
    time_quote(s);
    s_00.len = (int)(e_spill->Layout).str;
    s_00.str = *local_f0;
    time_quote(s_00);
    s_01.len = (int)(e_spill->ValueElem).str;
    s_01.str = *local_f0;
    time_quote(s_01);
    s_02.len = (int)(e_spill->LayoutElem).str;
    s_02.str = *local_f0;
    time_quote(s_02);
    ppuVar2 = &local_88;
    iVar1 = local_e8;
    local_18 = FUN_0051a182();
    local_88 = &DAT_00295bdd;
    local_80[0] = 0xd;
    local_80[1] = 0;
    local_80[2] = 0;
    local_80[3] = 0;
    local_80[4] = 0;
    local_80[5] = 0;
    local_80[6] = 0;
    local_80[7] = 0;
    local_68 = &DAT_00287da1;
    local_60 = 4;
    local_48 = &DAT_002985ba;
    local_40 = 0xf;
    local_28 = &DAT_00287da1;
    local_20 = 4;
    a.len = iVar1;
    a.array = (string *)local_e8;
    a.cap = (int)ppuVar2;
    sVar3 = runtime_concatstrings((runtime_tmpBuf *)&local_88,a);
    sVar4.len = sVar3.len;
    sVar4.str = local_e0;
    return sVar4;
  }
  sVar3.len = unaff_RBX;
  sVar3.str = (uint8 *)e_spill;
  time_quote(sVar3);
  a1.len = (int)&DAT_00295bdd;
  a1.str = in_RDI;
  a0.len = local_e8;
  a0.str = (uint8 *)(e_spill->Message).len;
  a2.len = in_R9;
  a2.str = in_R8;
  sVar3 = runtime_concatstring3(local_f0,a0,a1,a2);
  sVar5.len = sVar3.len;
  sVar5.str = local_c8;
  return sVar5;
}


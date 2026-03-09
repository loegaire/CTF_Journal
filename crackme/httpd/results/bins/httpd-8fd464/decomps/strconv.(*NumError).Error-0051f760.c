
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.(*NumError).Error(strconv.NumError * e, string ~r0) */

string strconv___NumError__Error(strconv_NumError *e)

{
  uint8 *cap;
  uint8 *puVar1;
  uint8 *puVar2;
  long lVar3;
  uint8 *in_RDI;
  undefined1 *puVar4;
  uint8 in_R8B;
  undefined1 in_R9B;
  undefined1 in_R10B;
  long in_FS_OFFSET;
  string sVar5;
  string s;
  __uint8 _Var6;
  __string a;
  strconv_NumError *e_spill;
  runtime_tmpBuf *local_c8;
  int local_c0;
  undefined1 local_88 [16];
  uint8 *local_78;
  uint8 *local_70;
  undefined *local_68;
  uint8 local_60 [8];
  uint8 *local_58;
  int local_50;
  undefined *local_48;
  undefined8 local_40;
  uint8 *local_38;
  uint8 *local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
                    /* Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
  while (&local_78 <= *(uint8 ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  cap = (uint8 *)(e_spill->Num).len;
  local_70 = (e_spill->Num).str;
  lVar3 = (long)cap * 3;
  _Var6.len = lVar3 / 2;
  puVar2 = cap;
  runtime_makeslice((runtime__type *)e_spill,_Var6.len,(int)cap);
  puVar1 = local_70;
  s.len = lVar3;
  s.str = in_RDI;
  _Var6.array = cap;
  _Var6.cap = (int)puVar2;
  _Var6 = strconv_appendQuotedWith(_Var6,s,in_R8B,(bool)in_R9B,(bool)in_R10B);
  runtime_slicebytetostring(local_c8,(uint8 *)_Var6.len,local_c0);
  local_78 = puVar1;
  (*(code *)((e_spill->Err).tab)->fun[0])();
  puVar4 = local_88;
  local_18 = FUN_0051a18b();
  local_68 = &DAT_0028ce5a;
  local_60[0] = 8;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 0;
  local_60[7] = 0;
  local_58 = (e_spill->Func).str;
  local_50 = (e_spill->Func).len;
  local_48 = &DAT_0028ed5a;
  local_40 = 10;
  local_38 = local_78;
  local_28 = &DAT_002877a3;
  local_20 = 2;
  a.len = local_c0;
  a.array = (string *)local_58;
  a.cap = (int)puVar4;
  local_30 = cap;
  sVar5 = runtime_concatstrings((runtime_tmpBuf *)&local_68,a);
  sVar5.str = cap;
  return sVar5;
}


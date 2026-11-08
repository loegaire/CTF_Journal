
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*ValueError).Error(reflect.ValueError * e, string ~r0) */

string reflect___ValueError__Error(reflect_ValueError *e)

{
  ulong i;
  uint8 *unaff_RBX;
  int in_RSI;
  uint8 *in_RDI;
  uint8 *in_R8;
  int in_R9;
  uint8 *in_R10;
  int in_R11;
  long in_FS_OFFSET;
  string sVar1;
  string sVar2;
  string a0;
  string a0_00;
  string a0_01;
  string a1;
  string a1_00;
  string a1_01;
  string a2;
  string a2_00;
  string a3;
  reflect_ValueError *e_spill;
  runtime_tmpBuf *local_80;
  int local_78;
  uint8 *local_68;
  uint8 *local_58;
  uint8 *local_38;
  undefined1 local_10 [8];
  
  while (local_10 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  i = e_spill->Kind;
  if (i != 0) {
    if ((long)i < reflect_kindNames.len) {
      if ((ulong)reflect_kindNames.len <= i) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      local_68 = reflect_kindNames.array[i].str;
    }
    else {
      sVar1 = strconv_FormatInt(i,(int)reflect_kindNames.array);
      a0.str = (uint8 *)sVar1.len;
      a0.len = local_78;
      a1.len = in_RSI;
      a1.str = in_RDI;
      runtime_concatstring2(local_80,a0,a1);
    }
    a0_00.len = (int)local_68;
    a0_00.str = (e_spill->Method).str;
    a1_00.len = (int)&DAT_0029a2f5;
    a1_00.str = in_RDI;
    a2.len = in_R9;
    a2.str = in_R8;
    a3.len = in_R11;
    a3.str = in_R10;
    sVar1 = runtime_concatstring5
                      ((runtime_tmpBuf *)&DAT_002893a8,a0_00,a1_00,a2,a3,
                       (string)(ZEXT816(0x29a2f5) << 0x40));
    sVar2.len = sVar1.len;
    sVar2.str = local_38;
    return sVar2;
  }
  a0_01.len = (e_spill->Method).len;
  a0_01.str = unaff_RBX;
  a1_01.len = in_RSI;
  a1_01.str = in_RDI;
  a2_00.len = in_R9;
  a2_00.str = in_R8;
  sVar1 = runtime_concatstring3((runtime_tmpBuf *)&DAT_0029649b,a0_01,a1_01,a2_00);
  sVar1.str = local_58;
  return sVar1;
}


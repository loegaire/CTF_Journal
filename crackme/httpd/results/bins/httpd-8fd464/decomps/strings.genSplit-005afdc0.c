
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.genSplit(string s, string sep, int sepSave, int n,
   []string ~r4) */

__string strings_genSplit(string s,string sep,int sepSave,int n)

{
  undefined1 auVar1 [24];
  long lVar2;
  ulong uVar3;
  ulong extraout_RAX;
  uint8 *puVar4;
  runtime__type *prVar5;
  ulong extraout_RDX;
  runtime__type *extraout_RDX_00;
  runtime__type *prVar6;
  int iVar7;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  string s_02;
  __string _Var8;
  __string _Var9;
  string substr;
  string substr_00;
  string s_spill;
  string sep_spill;
  int sepSave_spill;
  int n_spill;
  long local_50;
  long local_48;
  
  iVar7 = sep.len;
  puVar4 = sep.str;
  s_01.len = (uint8 *)s.len;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: []string a@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (n_spill == 0) {
    auVar1._8_8_ = puVar4;
    auVar1._0_8_ = s_01.len;
    auVar1._16_8_ = 0;
    return (__string)(auVar1 << 0x40);
  }
  if (sep_spill.len == 0) {
    s_01.str = (uint8 *)n_spill;
    _Var8 = strings_explode(s_01,s_spill.len);
    _Var8.array = (string *)local_50;
    _Var8.cap = local_48;
    return _Var8;
  }
  if (n_spill < 0) {
    local_50 = sep_spill.len;
    s_00.len = (int)sep_spill.str;
    s_00.str = s_spill.str;
    substr.len = iVar7;
    substr.str = (uint8 *)sep_spill.len;
    strings_Count(s_00,substr);
    n_spill = local_48 + 1;
    s_01.len = sep_spill.str;
  }
  runtime_makeslice((runtime__type *)n_spill,(int)s_01.len,0x225520);
  prVar6 = (runtime__type *)0x0;
  lVar2 = local_50;
  prVar5 = (runtime__type *)n_spill;
  while( true ) {
    if (((long)((long)&((runtime__type *)(n_spill + -0x30))->ptrToThis + 3) <= (long)prVar6) ||
       (s_02.len = (int)prVar6, s_02.str = sep_spill.str, substr_00.len = (int)s_spill.str,
       substr_00.str = (uint8 *)sep_spill.len, strings_Index(s_02,substr_00), lVar2 = local_50,
       prVar5 = (runtime__type *)n_spill, local_48 < 0)) {
      if (prVar5 <= prVar6) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      s_01.len = (uint8 *)((long)prVar6 * 0x10);
      *(int *)(s_01.len + lVar2 + 8) = s_spill.len;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(uint8 **)(s_01.len + lVar2) = s_spill.str;
        s_spill.str = s_01.len;
      }
      else {
        runtime_gcWriteBarrierBX();
        prVar6 = extraout_RDX_00;
      }
      _Var9.len = (int)s_spill.str;
      _Var9.array = (string *)((long)&prVar6->size + 1);
      _Var9.cap = (int)prVar5;
      return _Var9;
    }
    if ((ulong)s_spill.len < (ulong)(sepSave_spill + local_48)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    if ((ulong)n_spill <= prVar6) break;
    *(int *)(local_50 + 8 + (long)prVar6 * 0x10) = sepSave_spill + local_48;
    uVar3 = local_48 + sep_spill.len;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(uint8 **)(local_50 + (long)prVar6 * 0x10) = s_spill.str;
    }
    else {
      runtime_gcWriteBarrierSI();
      uVar3 = extraout_RAX;
      s_spill.len = extraout_RDX;
    }
    if ((ulong)s_spill.len < uVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
                    /* Unresolved local var: int m@[???] */
    s_spill.len = s_spill.len - uVar3;
    s_spill.str = s_spill.str + (uVar3 & -s_spill.len >> 0x3f);
    prVar6 = (runtime__type *)((long)&prVar6->size + 1);
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}


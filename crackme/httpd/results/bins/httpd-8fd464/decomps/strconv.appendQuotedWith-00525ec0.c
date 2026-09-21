
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.appendQuotedWith([]uint8 buf, string s, uint8 quote, bool
   ASCIIonly, bool graphicOnly, []uint8 ~r5) */

__uint8 strconv_appendQuotedWith(__uint8 buf,string s,uint8 quote,bool ASCIIonly,bool graphicOnly)

{
  undefined1 uVar1;
  runtime__type *et;
  runtime__type *prVar2;
  runtime__type *prVar3;
  runtime__type *prVar4;
  runtime__type *prVar5;
  runtime__type *cap;
  runtime__type *cap_00;
  uint uVar6;
  runtime__type *prVar7;
  long in_FS_OFFSET;
  string s_00;
  __uint8 buf_00;
  runtime_slice rVar8;
  __uint8 _Var9;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  __uint8 buf_spill;
  string s_spill;
  uint8 quote_spill;
  bool ASCIIonly_spill;
  bool graphicOnly_spill;
  runtime__type *local_88;
  undefined8 local_80;
  runtime__type *local_78;
  runtime__type *local_70;
  runtime__type *local_68;
  runtime__type *local_60;
  byte *local_18;
  runtime__type *local_10;
  
  while (&local_18 <= *(byte ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_10 = (runtime__type *)buf_spill.array;
  if (buf_spill.cap - buf_spill.len < s_spill.len) {
                    /* Unresolved local var: []uint8 nBuf@[???] */
    buf_spill.cap = s_spill.len + buf_spill.len + 2;
    runtime_makeslice((runtime__type *)&DAT_00225720,buf_spill.len,buf_spill.cap);
    local_10 = local_80;
    local_88 = (runtime__type *)buf_spill.cap;
    if ((runtime__type *)buf_spill.array != local_80) {
      local_88 = (runtime__type *)buf_spill.len;
      runtime_memmove();
    }
  }
  prVar3 = (runtime__type *)(buf_spill.len + 1);
  et = local_10;
  prVar4 = prVar3;
  prVar5 = (runtime__type *)buf_spill.cap;
  if ((ulong)buf_spill.cap < prVar3) {
    local_88 = (runtime__type *)buf_spill.len;
    rVar8.len = (int)&DAT_00225720;
    rVar8.array = (void *)buf_spill.len;
    rVar8.cap = s_spill.len;
    runtime_growslice(local_10,rVar8,buf_spill.cap);
    prVar4 = (runtime__type *)((long)&local_68->size + 1);
    et = local_70;
    prVar5 = local_60;
    local_80 = (runtime__type *)buf_spill.cap;
    local_78 = prVar3;
  }
  *(uint8 *)((long)&et->size + buf_spill.len) = quote_spill;
  while( true ) {
                    /* Unresolved local var: int32 r@[???] */
    prVar3 = local_80;
    if (s_spill.len < 1) {
      prVar3 = (runtime__type *)((long)&prVar4->size + 1);
      if (prVar5 < prVar3) {
        old_02.len = (int)prVar3;
        old_02.array = &DAT_00225720;
        old_02.cap = s_spill.len;
        rVar8 = runtime_growslice(et,old_02,(int)prVar5);
        s_spill.str = (uint8 *)rVar8.len;
        prVar3 = (runtime__type *)((long)&local_68->size + 1);
        et = local_70;
      }
      *(uint8 *)((long)&prVar4->size + (long)&et->size) = quote_spill;
      _Var9.len = (int)s_spill.str;
      _Var9.array = (uint8 *)et;
      _Var9.cap = (int)prVar3;
      return _Var9;
    }
    local_18 = s_spill.str;
    if (*s_spill.str < 0x80) {
      prVar2 = (runtime__type *)0x1;
      uVar6 = (uint)*s_spill.str;
    }
    else {
      s_00.len = (int)s_spill.str;
      s_00.str = (uint8 *)et;
      unicode_utf8_DecodeRuneInString(s_00);
      prVar2 = local_80;
      uVar6 = (uint)local_88;
    }
    if ((prVar2 == (runtime__type *)0x1) && (uVar6 == 0xfffd)) {
      prVar3 = (runtime__type *)((long)&prVar4->size + 2);
      cap = prVar5;
      if (prVar5 < prVar3) {
        old.len = (int)&DAT_00225720;
        old.array = local_18;
        old.cap = s_spill.len;
        runtime_growslice(et,old,(int)prVar5);
        et = local_70;
        cap = local_60;
        local_88 = prVar4;
        local_80 = prVar5;
        local_78 = prVar3;
      }
      *(undefined2 *)((long)&prVar4->size + (long)&et->size) = 0x785c;
      prVar5 = (runtime__type *)((long)&prVar4->size + 3);
      uVar1 = (&DAT_002992b5)[*local_18 >> 4];
      cap_00 = cap;
      prVar7 = prVar5;
      if (cap < prVar5) {
        old_00.len = (int)&DAT_00225720;
        old_00.array = local_18;
        old_00.cap = s_spill.len;
        runtime_growslice(et,old_00,(int)cap);
        prVar7 = (runtime__type *)((long)&local_68->size + 1);
        et = local_70;
        cap_00 = local_60;
        local_88 = prVar3;
        local_80 = cap;
        local_78 = prVar5;
      }
      ((undefined1 *)((long)&prVar4->size + 2))[(long)et] = uVar1;
      prVar5 = (runtime__type *)((long)&prVar7->size + 1);
      uVar1 = (&DAT_002992b5)[*local_18 & 0xf];
      prVar4 = prVar5;
      prVar3 = cap_00;
      if (cap_00 < prVar5) {
        old_01.len = (int)&DAT_00225720;
        old_01.array = local_18;
        old_01.cap = s_spill.len;
        runtime_growslice(et,old_01,(int)cap_00);
        prVar4 = (runtime__type *)((long)&local_68->size + 1);
        et = local_70;
        prVar3 = local_60;
        local_88 = prVar7;
        local_80 = cap_00;
        local_78 = prVar5;
      }
      *(undefined1 *)((long)&prVar7->size + (long)&et->size) = uVar1;
    }
    else {
      buf_00.array = (ulong)ASCIIonly_spill;
      local_80._7_1_ = SUB81(prVar3,7);
      local_80._0_7_ =
           CONCAT16(graphicOnly_spill,CONCAT15(ASCIIonly_spill,CONCAT14(quote_spill,uVar6)));
      buf_00.len = (int)local_18;
      buf_00.cap._0_1_ = graphicOnly_spill;
      buf_00.cap._1_7_ = 0;
      strconv_appendEscapedRune
                (buf_00,(int32)s_spill.len,(uint8)prVar5,(bool)quote_spill,SUB41(uVar6,0));
      et = local_78;
      prVar4 = local_70;
      prVar3 = local_68;
      local_88 = prVar5;
    }
    if ((ulong)s_spill.len < prVar2) break;
    s_spill.len = s_spill.len - (long)prVar2;
    s_spill.str = local_18 + ((ulong)prVar2 & -s_spill.len >> 0x3f);
    prVar5 = prVar3;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}


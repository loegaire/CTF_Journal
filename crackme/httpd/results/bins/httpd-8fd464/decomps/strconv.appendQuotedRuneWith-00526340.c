
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.appendQuotedRuneWith([]uint8 buf, int32 r, uint8 quote,
   bool ASCIIonly, bool graphicOnly, []uint8 ~r5) */

__uint8 strconv_appendQuotedRuneWith
                  (__uint8 buf,int32 r,uint8 quote,bool ASCIIonly,bool graphicOnly)

{
  runtime__type *prVar1;
  runtime__type *prVar2;
  undefined4 in_register_0000003c;
  ulong uVar3;
  long in_FS_OFFSET;
  __uint8 buf_00;
  __uint8 _Var4;
  runtime_slice old;
  runtime_slice old_00;
  __uint8 buf_spill;
  int32 r_spill;
  uint8 quote_spill;
  bool ASCIIonly_spill;
  bool graphicOnly_spill;
  runtime__type *local_30;
  runtime__type *local_28;
  undefined1 *local_20;
  undefined1 *local_18;
  
  uVar3 = CONCAT44(in_register_0000003c,r);
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar1 = (runtime__type *)(buf_spill.len + 1);
  prVar2 = prVar1;
  if ((ulong)buf_spill.cap < prVar1) {
    old.len = (int)prVar1;
    old.array = &DAT_00225720;
    old.cap = uVar3;
    runtime_growslice((runtime__type *)buf_spill.len,old,(int)buf_spill.array);
    prVar2 = (runtime__type *)(local_20 + 1);
    buf_spill.array = (uint8 *)local_28;
    local_30 = prVar1;
  }
  *(uint8 *)((long)&((runtime__type *)buf_spill.array)->size + buf_spill.len) = quote_spill;
  if (0xd7ff < (uint)r_spill) {
    uVar3 = (ulong)(r_spill - 0xe000);
  }
  buf_00.array = (ulong)graphicOnly_spill;
  buf_00.len = (int)buf_spill.array;
  buf_00.cap = (int)prVar2;
  strconv_appendEscapedRune(buf_00,(int32)uVar3,quote_spill,ASCIIonly,graphicOnly);
  if (local_20 < (undefined1 *)((long)&local_28->size + 1U)) {
    old_00.len = (int)local_20;
    old_00.array = local_30;
    old_00.cap = uVar3;
    runtime_growslice(local_28,old_00,0x225720);
    local_20 = local_18;
    local_30 = local_28;
  }
  *(uint8 *)((long)&local_28->size + (long)&local_30->size) = quote_spill;
  _Var4.len = (int)local_30;
  _Var4.array = (uint8 *)local_28;
  _Var4.cap = (int)local_20;
  return _Var4;
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.IndexRune([]uint8 s, int32 r, int ~r2) */

int bytes_IndexRune(__uint8 s,int32 r)

{
  ulong uVar1;
  int iVar2;
  undefined8 in_RSI;
  undefined4 in_register_0000003c;
  undefined8 uVar3;
  int in_R8;
  long in_FS_OFFSET;
  __uint8 p;
  __uint8 s_00;
  __uint8 p_00;
  __uint8 sep;
  __uint8 s_spill;
  int32 r_spill;
  int local_38;
  ulong local_30;
  int local_20;
  undefined4 local_14;
  ulong local_10;
  
  uVar3 = CONCAT44(in_register_0000003c,r);
  iVar2 = s.cap;
  p.len = s.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((uint)r_spill < 0x80) {
    internal_bytealg_IndexByte();
    return local_30;
  }
  if (r_spill == 0xfffd) {
    uVar1 = 0;
    while( true ) {
      if (s_spill.len <= (long)uVar1) {
        return uVar1;
      }
      if ((ulong)s_spill.len < uVar1) break;
      p_00.cap = s_spill.len - uVar1;
      p_00.len = (int)s_spill.array;
      p_00.array = (uint8 *)uVar1;
      local_10 = uVar1;
      unicode_utf8_DecodeRune(p_00);
      if (local_38 == 0xfffd) {
        return local_10;
      }
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int n@[???] */
      uVar1 = local_30 + local_10;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  if ((0xd7ff < (uint)r_spill) && (0x101fff < r_spill - 0xe000U)) {
    return (ulong)(r_spill - 0xe000U);
  }
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: uint8[4] b@[???] */
  local_14 = 0;
  p.array = (uint8 *)&local_14;
  p.cap = iVar2;
  unicode_utf8_EncodeRune(p,(int32)uVar3);
  if (local_30 < 5) {
    s_00.len = p.len;
    s_00.array = (uint8 *)&local_14;
    s_00.cap = local_30;
    sep.len = in_RSI;
    sep.array = (uint8 *)uVar3;
    sep.cap = in_R8;
    bytes_Index(s_00,sep);
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAlen();
}


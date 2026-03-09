
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.indexFunc([]uint8 s, func(int32)_bool * * f, bool truth, int
   ~r3) */

int bytes_indexFunc(__uint8 s,func_int32__bool **f,bool truth)

{
  long lVar1;
  bool *pbVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  __uint8 p;
  __uint8 s_spill;
  func_int32__bool **f_spill;
  bool truth_spill;
  long local_38;
  long local_20;
  
                    /* Unresolved local var: int start@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar4 = 0;
  while( true ) {
    if (s_spill.len <= (long)uVar4) {
      return uVar4;
    }
    if ((ulong)s_spill.len <= uVar4) break;
    pbVar2 = (bool *)s_spill.array;
    if (s_spill.array[uVar4] < 0x80) {
      lVar1 = 1;
      lVar3 = s_spill.len;
    }
    else {
      p.cap = s_spill.array + ((long)-(s_spill.cap - uVar4) >> 0x3f & uVar4);
      local_38 = s_spill.len - uVar4;
      p.len = s_spill.cap - uVar4;
      p.array = (uint8 *)uVar4;
      lVar3 = local_38;
      unicode_utf8_DecodeRune(p);
      lVar1 = local_20;
    }
    (**f_spill)((int32)lVar3,pbVar2);
    if ((bool)(char)local_38 == truth_spill) {
      return uVar4;
    }
                    /* Unresolved local var: int wid@[???]
                       Unresolved local var: int32 r@[???] */
    uVar4 = lVar1 + uVar4;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}


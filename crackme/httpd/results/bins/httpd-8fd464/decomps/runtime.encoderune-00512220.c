
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.encoderune([]uint8 p, int32 r, int ~r2) */

int runtime_encoderune(__uint8 p,int32 r)

{
  byte bVar1;
  uint uVar2;
  __uint8 p_spill;
  uint32 i;
  
  if (i < 0x80) {
    if (p_spill.len != 0) {
      *p_spill.array = (uint8)i;
      return (int)p_spill.array;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  bVar1 = (byte)((int)i >> 6);
  if (i < 0x800) {
    if (1 < (ulong)p_spill.len) {
      *p_spill.array = bVar1 | 0xc0;
      uVar2 = i & 0x3f | 0xffffff80;
      p_spill.array[1] = (uint8)uVar2;
      return (ulong)uVar2;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if ((i < 0x110000) && (0x7ff < i - 0xd800)) {
    if (0xffff < i) {
      if (3 < (ulong)p_spill.len) {
        *p_spill.array = (byte)((int)i >> 0x12) | 0xf0;
        p_spill.array[1] = (byte)((int)i >> 0xc) & 0x3f | 0x80;
        p_spill.array[2] = bVar1 & 0x3f | 0x80;
        uVar2 = i & 0x3f | 0xffffff80;
        p_spill.array[3] = (uint8)uVar2;
        return (ulong)uVar2;
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
  }
  else {
    i = 0xfffd;
  }
  if (2 < (ulong)p_spill.len) {
    *p_spill.array = (byte)((int)i >> 0xc) | 0xe0;
    uVar2 = (int)i >> 6 & 0x3fU | 0xffffff80;
    p_spill.array[1] = (uint8)uVar2;
    p_spill.array[2] = (byte)i & 0x3f | 0x80;
    return (ulong)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}


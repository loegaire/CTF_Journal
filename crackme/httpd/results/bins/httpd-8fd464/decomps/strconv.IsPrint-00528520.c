
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.IsPrint(int32 r, bool ~r1) */

bool strconv_IsPrint(int32 r)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ushort uVar5;
  bool bVar6;
  uint32 rr;
  
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???]
                       Unresolved local var: []uint32 isPrint@[???]
                       Unresolved local var: []uint16 isNotPrint@[???] */
  if ((int)rr < 0x100) {
    bVar6 = SUB41(rr - 0x20,0);
    if (rr - 0x20 < 0x5f) {
      return bVar6;
    }
    if ((int)rr < 0xa1) {
      return bVar6;
    }
    return bVar6;
  }
  uVar5 = (ushort)rr;
  if (0xffff < (int)rr) {
    uVar2 = 0;
    uVar1 = strconv_isPrint32.len;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???]
                       Unresolved local var: int h@[???] */
    while (uVar3 = uVar1, (long)uVar2 < (long)uVar3) {
      lVar4 = (long)(uVar3 - uVar2) >> 1;
      uVar1 = lVar4 + uVar2;
      if ((ulong)strconv_isPrint32.len <= uVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (strconv_isPrint32.array[uVar1] < rr) {
        uVar2 = uVar2 + lVar4 + 1;
        uVar1 = uVar3;
      }
    }
    if ((long)uVar2 < strconv_isPrint32.len) {
      if ((ulong)strconv_isPrint32.len <= (uVar2 & 0xfffffffffffffffe)) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (strconv_isPrint32.array[uVar2 & 0xfffffffffffffffe] <= rr) {
        if ((ulong)strconv_isPrint32.len <= (uVar2 | 1)) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        if (rr <= strconv_isPrint32.array[uVar2 | 1]) {
          if (0x1ffff < (int)rr) {
            return SUB81(strconv_isPrint32.len,0);
          }
          uVar2 = 0;
          uVar1 = strconv_isNotPrint32.len;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???]
                       Unresolved local var: int h@[???] */
          while( true ) {
            uVar3 = uVar1;
            if ((long)uVar3 <= (long)uVar2) {
              if ((long)uVar2 < strconv_isNotPrint32.len) {
                if ((ulong)strconv_isNotPrint32.len <= uVar2) {
                    /* WARNING: Subroutine does not return */
                  runtime_panicIndex();
                }
                bVar6 = strconv_isNotPrint32.array[uVar2] != uVar5;
              }
              else {
                bVar6 = true;
              }
              return bVar6;
            }
            lVar4 = (long)(uVar3 - uVar2) >> 1;
            uVar1 = lVar4 + uVar2;
            if ((ulong)strconv_isNotPrint32.len <= uVar1) break;
            if (strconv_isNotPrint32.array[uVar1] < uVar5) {
              uVar2 = uVar2 + lVar4 + 1;
              uVar1 = uVar3;
            }
          }
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
      }
    }
    return SUB81(strconv_isPrint32.len,0);
  }
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???]
                       Unresolved local var: []uint16 isPrint@[???]
                       Unresolved local var: []uint16 isNotPrint@[???] */
  uVar2 = 0;
  uVar1 = strconv_isPrint16.len;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???]
                       Unresolved local var: int h@[???] */
  while (uVar3 = uVar1, (long)uVar2 < (long)uVar3) {
    lVar4 = (long)(uVar3 - uVar2) >> 1;
    uVar1 = lVar4 + uVar2;
    if ((ulong)strconv_isPrint16.len <= uVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (strconv_isPrint16.array[uVar1] < uVar5) {
      uVar2 = uVar2 + lVar4 + 1;
      uVar1 = uVar3;
    }
  }
  if ((long)uVar2 < strconv_isPrint16.len) {
    if ((ulong)strconv_isPrint16.len <= (uVar2 & 0xfffffffffffffffe)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (strconv_isPrint16.array[uVar2 & 0xfffffffffffffffe] <= uVar5) {
      if ((ulong)strconv_isPrint16.len <= (uVar2 | 1)) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (uVar5 <= strconv_isPrint16.array[uVar2 | 1]) {
        uVar2 = 0;
        uVar1 = strconv_isNotPrint16.len;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???]
                       Unresolved local var: int h@[???] */
        while( true ) {
          uVar3 = uVar1;
          if ((long)uVar3 <= (long)uVar2) {
            if ((long)uVar2 < strconv_isNotPrint16.len) {
              if ((ulong)strconv_isNotPrint16.len <= uVar2) {
                    /* WARNING: Subroutine does not return */
                runtime_panicIndex();
              }
              bVar6 = strconv_isNotPrint16.array[uVar2] != uVar5;
            }
            else {
              bVar6 = true;
            }
            return bVar6;
          }
          lVar4 = (long)(uVar3 - uVar2) >> 1;
          uVar1 = lVar4 + uVar2;
          if ((ulong)strconv_isNotPrint16.len <= uVar1) break;
          if (strconv_isNotPrint16.array[uVar1] < uVar5) {
            uVar2 = uVar2 + lVar4 + 1;
            uVar1 = uVar3;
          }
        }
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
    }
  }
  return SUB81(strconv_isPrint16.len,0);
}


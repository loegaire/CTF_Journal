
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.runGCProg(uint8 * prog, uint8 * trailer, uint8 * dst, int
   size, uintptr ~r4) */

uintptr runtime_runGCProg(uint8 *prog,uint8 *trailer,uint8 *dst,int size)

{
  byte bVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint8 *p;
  uint8 *trailer_spill;
  uint8 *dstStart;
  int size_spill;
  
                    /* Unresolved local var: uintptr bits@[???]
                       Unresolved local var: uintptr nbits@[???]
                       Unresolved local var: uintptr totalBits@[???] */
  uVar3 = 0;
                    /* Unresolved local var: uintptr n@[???]
                       Unresolved local var: uintptr c@[???]
                       Unresolved local var: uint8 * src@[???]
                       Unresolved local var: uintptr off@[???] */
  uVar8 = 0;
  do {
    while( true ) {
      while( true ) {
        for (; pbVar7 = trailer_spill, trailer_spill = pbVar7, 7 < uVar3; uVar3 = uVar3 - 8) {
          if (size_spill == 1) {
            *dstStart = (byte)uVar8;
            dstStart = dstStart + 1;
          }
          else {
                    /* Unresolved local var: uintptr v@[???] */
            *dstStart = (byte)uVar8 & 0xf | 0xf0;
            dstStart[1] = (byte)(uVar8 >> 4) & 0xf | 0xf0;
            dstStart = dstStart + 2;
          }
          uVar8 = uVar8 >> 8;
        }
        bVar1 = *p;
        uVar10 = (ulong)bVar1 & 0x7f;
        p = p + 1;
        bVar5 = (byte)uVar3;
        if ((char)bVar1 < '\0') break;
        if ((bVar1 & 0x7f) == 0) {
          if (pbVar7 == (byte *)0x0) {
            if (size_spill == 1) {
              for (lVar4 = (-uVar3 & 7) + uVar3; lVar4 != 0; lVar4 = lVar4 + -8) {
                *dstStart = (byte)uVar8;
                uVar8 = uVar8 >> 8;
                dstStart = dstStart + 1;
              }
            }
            else {
              for (lVar4 = (-uVar3 & 3) + uVar3; lVar4 != 0; lVar4 = lVar4 + -4) {
                *dstStart = (byte)uVar8 & 0xf | 0xf0;
                uVar8 = uVar8 >> 4;
                dstStart = dstStart + 1;
              }
            }
            return 0;
          }
          trailer_spill = (byte *)0x0;
          p = pbVar7;
        }
        else {
                    /* Unresolved local var: uintptr i@[???] */
          for (uVar6 = 0; uVar6 < uVar10 >> 3; uVar6 = uVar6 + 1) {
            uVar8 = uVar8 | (ulong)*p << (bVar5 & 0x3f);
            if (size_spill == 1) {
              *dstStart = (byte)uVar8;
              dstStart = dstStart + 1;
            }
            else {
                    /* Unresolved local var: uintptr v@[???] */
              *dstStart = (byte)uVar8 & 0xf | 0xf0;
              dstStart[1] = (byte)(uVar8 >> 4) & 0xf | 0xf0;
              dstStart = dstStart + 2;
            }
            uVar8 = uVar8 >> 8;
            p = p + 1;
          }
          if ((bVar1 & 7) != 0) {
            uVar8 = uVar8 | (ulong)*p << (bVar5 & 0x3f);
            uVar3 = uVar3 + ((ulong)bVar1 & 7);
            p = p + 1;
          }
        }
      }
      if ((bVar1 & 0x7f) == 0) {
        uVar6 = 0;
        while( true ) {
          bVar1 = *p;
          uVar10 = uVar10 | ((ulong)bVar1 & 0x7f) << ((byte)uVar6 & 0x3f) & -(ulong)(uVar6 < 0x40);
          p = p + 1;
          if (-1 < (char)bVar1) break;
                    /* Unresolved local var: uint off@[???] */
          uVar6 = uVar6 + 7;
        }
      }
      uVar11 = 0;
      uVar6 = 0;
      while( true ) {
        bVar1 = *p;
        uVar11 = uVar11 | -(ulong)(uVar6 < 0x40) & ((ulong)bVar1 & 0x7f) << ((byte)uVar6 & 0x3f);
        p = p + 1;
        if (-1 < (char)bVar1) break;
                    /* Unresolved local var: uint off@[???] */
        uVar6 = uVar6 + 7;
      }
      uVar11 = uVar11 * uVar10;
      if (uVar10 < 0x3a) break;
      uVar10 = uVar10 - uVar3;
      if (size_spill == 1) {
                    /* Unresolved local var: uintptr frag@[???] */
        uVar6 = uVar10 & 7;
        pbVar7 = dstStart + -(uVar10 + 7 >> 3);
        if (uVar6 != 0) {
          uVar8 = uVar8 | ((ulong)(*pbVar7 >> ((byte)-(uVar6 - 8) & 0x3f)) &
                          -(ulong)(-(uVar6 - 8) < 0x40)) << (bVar5 & 0x3f);
          uVar3 = uVar3 + uVar6;
          uVar11 = uVar11 - uVar6;
          pbVar7 = pbVar7 + 1;
        }
                    /* Unresolved local var: uintptr i@[???] */
        for (uVar10 = uVar11 >> 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          uVar8 = uVar8 | (ulong)*pbVar7 << ((byte)uVar3 & 0x3f) & -(ulong)(uVar3 < 0x40);
          *dstStart = (byte)uVar8;
          uVar8 = uVar8 >> 8;
          pbVar7 = pbVar7 + 1;
          dstStart = dstStart + 1;
        }
        uVar11 = uVar11 & 7;
        if (uVar11 != 0) {
          uVar8 = uVar8 | ((1L << (sbyte)uVar11) - 1U & (ulong)*pbVar7) << ((byte)uVar3 & 0x3f) &
                          -(ulong)(uVar3 < 0x40);
          uVar3 = uVar3 + uVar11;
        }
      }
      else {
                    /* Unresolved local var: uintptr frag@[???] */
        uVar6 = uVar10 & 3;
        pbVar7 = dstStart + -(uVar10 + 3 >> 2);
        if (uVar6 != 0) {
          uVar8 = uVar8 | (((ulong)*pbVar7 & 0xf) >> ((byte)-(uVar6 - 4) & 0x3f) &
                          -(ulong)(-(uVar6 - 4) < 0x40)) << (bVar5 & 0x3f);
          uVar3 = uVar3 + uVar6;
          uVar11 = uVar11 - uVar6;
          pbVar7 = pbVar7 + 1;
        }
                    /* Unresolved local var: uintptr i@[???] */
        for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          uVar8 = uVar8 | ((ulong)*pbVar7 & 0xf) << ((byte)uVar3 & 0x3f) & -(ulong)(uVar3 < 0x40);
          *dstStart = (byte)uVar8 & 0xf | 0xf0;
          uVar8 = uVar8 >> 4;
          pbVar7 = pbVar7 + 1;
          dstStart = dstStart + 1;
        }
        uVar11 = uVar11 & 3;
        if (uVar11 != 0) {
          uVar8 = uVar8 | ((1L << (sbyte)uVar11) - 1U & (ulong)*pbVar7) << ((byte)uVar3 & 0x3f) &
                          -(ulong)(uVar3 < 0x40);
          uVar3 = uVar3 + uVar11;
        }
      }
    }
                    /* Unresolved local var: uintptr pattern@[???]
                       Unresolved local var: uintptr npattern@[???] */
    uVar6 = uVar3;
    uVar9 = uVar8;
    pbVar7 = dstStart;
    if (size_spill == 1) {
      for (; uVar6 < uVar10; uVar6 = uVar6 + 8) {
        uVar9 = uVar9 << 8 | (ulong)pbVar7[-1];
        pbVar7 = pbVar7 + -1;
      }
    }
    else {
      for (; uVar6 < uVar10; uVar6 = uVar6 + 4) {
        uVar9 = uVar9 << 4 | (ulong)pbVar7[-1] & 0xf;
        pbVar7 = pbVar7 + -1;
      }
    }
    if (uVar10 < uVar6) {
      uVar9 = uVar9 >> ((byte)(uVar6 - uVar10) & 0x3f) & -(ulong)(uVar6 - uVar10 < 0x40);
      uVar6 = uVar10;
    }
    if (uVar6 == 1) {
      uVar6 = uVar11;
      if (uVar9 == 1) {
        uVar9 = 0x1ffffffffffffff;
        uVar6 = 0x39;
      }
    }
    else {
                    /* Unresolved local var: uintptr b@[???]
                       Unresolved local var: uintptr nb@[???] */
      uVar10 = uVar6;
      if (uVar6 * 2 < 0x3a) {
        for (; uVar10 < 0x41; uVar10 = uVar10 * 2) {
          uVar9 = uVar9 << ((byte)uVar10 & 0x3f) & -(ulong)(uVar10 < 0x40) | uVar9;
        }
        if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          runtime_panicdivide();
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar6;
        uVar6 = uVar6 * SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x39)) / auVar2,0);
        uVar9 = uVar9 & (1L << ((byte)uVar6 & 0x3f) & -(ulong)(uVar6 < 0x40)) - 1;
      }
    }
    while (uVar6 <= uVar11) {
      uVar8 = uVar8 | uVar9 << ((byte)uVar3 & 0x3f) & -(ulong)(uVar3 < 0x40);
      uVar3 = uVar6 + uVar3;
      if (size_spill == 1) {
        for (; 7 < uVar3; uVar3 = uVar3 - 8) {
          *dstStart = (byte)uVar8;
          uVar8 = uVar8 >> 8;
          dstStart = dstStart + 1;
        }
      }
      else {
        for (; 3 < uVar3; uVar3 = uVar3 - 4) {
          *dstStart = (byte)uVar8 & 0xf | 0xf0;
          uVar8 = uVar8 >> 4;
          dstStart = dstStart + 1;
        }
      }
      uVar11 = uVar11 - uVar6;
    }
    if (uVar11 != 0) {
      uVar8 = uVar8 | (uVar9 & (1L << ((byte)uVar11 & 0x3f) & -(ulong)(uVar11 < 0x40)) - 1) <<
                      ((byte)uVar3 & 0x3f) & -(ulong)(uVar3 < 0x40);
      uVar3 = uVar3 + uVar11;
    }
  } while( true );
}


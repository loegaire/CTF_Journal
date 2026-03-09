
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.decoderune(string s, int k, int32 r, int pos) */

multireturn_int32_int_ runtime_decoderune(string s,int k)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  multireturn_int32_int_ mVar8;
  multireturn_int32_int_ mVar9;
  multireturn_int32_int_ mVar10;
  multireturn_int32_int_ mVar11;
  multireturn_int32_int_ mVar12;
  string s_spill;
  int k_spill;
  
  mVar12.pos = s.len;
  iVar4 = (int)k_spill;
  if (s_spill.len <= k_spill) {
    mVar12.r = iVar4 + 1;
    return mVar12;
  }
  if ((ulong)k_spill <= (ulong)s_spill.len) {
    lVar5 = s_spill.len - k_spill;
    uVar6 = -lVar5 >> 0x3f & k_spill;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    bVar1 = s_spill.str[uVar6];
    if (0xbf < bVar1) {
      uVar7 = (uint)bVar1;
      if (bVar1 < 0xe0) {
        if (((1 < lVar5) && (bVar1 = s_spill.str[uVar6 + 1], 0x7f < bVar1)) &&
           ((bVar1 < 0xc0 && (0x7f < ((uVar7 & 0x1f) << 6 | bVar1 & 0x3f))))) {
          mVar8.r = iVar4 + 2;
          mVar8.pos = (int)s_spill.str;
          return mVar8;
        }
      }
      else if (bVar1 < 0xf0) {
        if ((((2 < lVar5) && (bVar1 = s_spill.str[uVar6 + 1], 0x7f < bVar1)) && (bVar1 < 0xc0)) &&
           (((bVar2 = s_spill.str[uVar6 + 2], 0x7f < bVar2 && (bVar2 < 0xc0)) &&
            ((uVar7 = (bVar1 & 0x3f) << 6 | (uVar7 & 0xf) << 0xc | bVar2 & 0x3f, 0x7ff < uVar7 &&
             (0x7ff < uVar7 - 0xd800)))))) {
          mVar9.r = iVar4 + 3;
          mVar9.pos = (int)s_spill.str;
          return mVar9;
        }
      }
      else if (((((bVar1 < 0xf8) && (3 < lVar5)) && (bVar1 = s_spill.str[uVar6 + 1], 0x7f < bVar1))
               && ((bVar1 < 0xc0 && (bVar2 = s_spill.str[uVar6 + 2], 0x7f < bVar2)))) &&
              (((bVar2 < 0xc0 && ((bVar3 = s_spill.str[uVar6 + 3], 0x7f < bVar3 && (bVar3 < 0xc0))))
               && ((bVar3 & 0x3f | (uVar7 & 7) << 0x12 | (bVar1 & 0x3f) << 0xc | (bVar2 & 0x3f) << 6
                   ) - 0x10000 < 0x100000)))) {
        mVar10.r = iVar4 + 4;
        mVar10.pos = (int)s_spill.str;
        return mVar10;
      }
    }
    mVar11.r = iVar4 + 1;
    mVar11.pos = (int)s_spill.str;
    return mVar11;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}


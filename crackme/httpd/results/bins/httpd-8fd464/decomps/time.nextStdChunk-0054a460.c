
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.nextStdChunk(string layout, string prefix, int std, string
   suffix) */

multireturn_string_int_string_ time_nextStdChunk(string layout)

{
  long lVar1;
  uint8 uVar2;
  byte bVar3;
  ushort uVar4;
  ulong uVar5;
  ulong in_RCX;
  ulong uVar6;
  uint8 *in_RDI;
  multireturn_string_int_string_ mVar7;
  multireturn_string_int_string_ mVar8;
  multireturn_string_int_string_ mVar9;
  multireturn_string_int_string_ mVar10;
  multireturn_string_int_string_ mVar11;
  multireturn_string_int_string_ mVar12;
  multireturn_string_int_string_ mVar13;
  multireturn_string_int_string_ mVar14;
  multireturn_string_int_string_ mVar15;
  multireturn_string_int_string_ mVar16;
  multireturn_string_int_string_ mVar17;
  multireturn_string_int_string_ mVar18;
  multireturn_string_int_string_ mVar19;
  multireturn_string_int_string_ mVar20;
  multireturn_string_int_string_ mVar21;
  multireturn_string_int_string_ mVar22;
  multireturn_string_int_string_ mVar23;
  multireturn_string_int_string_ mVar24;
  multireturn_string_int_string_ mVar25;
  multireturn_string_int_string_ mVar26;
  multireturn_string_int_string_ mVar27;
  multireturn_string_int_string_ mVar28;
  multireturn_string_int_string_ mVar29;
  multireturn_string_int_string_ mVar30;
  multireturn_string_int_string_ mVar31;
  multireturn_string_int_string_ mVar32;
  multireturn_string_int_string_ mVar33;
  multireturn_string_int_string_ mVar34;
  multireturn_string_int_string_ mVar35;
  multireturn_string_int_string_ mVar36;
  multireturn_string_int_string_ mVar37;
  string layout_spill;
  
                    /* Unresolved local var: int i@[???] */
  uVar5 = 0;
  mVar20.std = in_RCX;
  do {
    if (layout_spill.len <= (long)uVar5) {
      mVar36.prefix.len = (int)layout_spill.str;
      mVar36.prefix.str = (uint8 *)uVar5;
      mVar36.std = mVar20.std;
      mVar36.suffix.len = layout_spill.len;
      mVar36.suffix.str = in_RDI;
      return mVar36;
    }
    mVar18.suffix.str = (uint8 *)(ulong)layout_spill.str[uVar5];
    if (&DAT_00000033 < mVar18.suffix.str) {
      if (&DAT_0000004d < mVar18.suffix.str) {
        if (&DAT_0000005a < mVar18.suffix.str) {
          if (mVar18.suffix.str == &DAT_0000005f) {
            mVar18.suffix.str = (uint8 *)(uVar5 + 2);
            if ((long)mVar18.suffix.str <= layout_spill.len) {
              if ((ulong)layout_spill.len <= uVar5 + 1) {
                    /* WARNING: Subroutine does not return */
                runtime_panicIndex();
              }
              if (layout_spill.str[uVar5 + 1] == 0x32) {
                mVar20.std = uVar5 + 5;
                if ((long)mVar20.std <= layout_spill.len) {
                  if ((ulong)layout_spill.len < mVar20.std) {
                    /* WARNING: Subroutine does not return */
                    runtime_panicSliceAlen();
                  }
                  if (mVar20.std < uVar5 + 1) {
                    /* WARNING: Subroutine does not return */
                    runtime_panicSliceB();
                  }
                  if (*(int *)(layout_spill.str + uVar5 + 1) == 0x36303032) {
                    mVar32.suffix.len = layout_spill.len - uVar5;
                    mVar32.std = mVar20.std & -(mVar32.suffix.len + -5) >> 0x3f;
                    mVar32.prefix.len = (int)layout_spill.str;
                    mVar32.prefix.str = layout_spill.str + mVar32.std;
                    mVar32.suffix.str = mVar18.suffix.str;
                    return mVar32;
                  }
                }
                if (mVar18.suffix.str <= (ulong)layout_spill.len) {
                  mVar33.suffix.len = layout_spill.len - uVar5;
                  mVar33.suffix.str =
                       (uint8 *)((ulong)mVar18.suffix.str & -(mVar33.suffix.len + -2) >> 0x3f);
                  mVar33.prefix.len = (int)layout_spill.str;
                  mVar33.prefix.str = layout_spill.str + (long)mVar33.suffix.str;
                  mVar33.std = mVar33.suffix.len + -2;
                  return mVar33;
                }
                    /* WARNING: Subroutine does not return */
                runtime_panicSliceB();
              }
            }
            uVar6 = uVar5 + 3;
            if ((long)uVar6 <= layout_spill.len) {
              if ((ulong)layout_spill.len <= uVar5 + 1) {
                    /* WARNING: Subroutine does not return */
                runtime_panicIndex();
              }
              if (layout_spill.str[uVar5 + 1] == 0x5f) {
                if ((ulong)layout_spill.len <= mVar18.suffix.str) {
                    /* WARNING: Subroutine does not return */
                  runtime_panicIndex();
                }
                mVar18.suffix.str = (uint8 *)(ulong)layout_spill.str[uVar5 + 2];
                if (layout_spill.str[uVar5 + 2] == 0x32) {
                  if (uVar6 <= (ulong)layout_spill.len) {
                    mVar34.suffix.len = layout_spill.len - uVar5;
                    mVar34.prefix.len = (int)layout_spill.str;
                    mVar34.prefix.str =
                         layout_spill.str + (uVar6 & -(mVar34.suffix.len + -3) >> 0x3f);
                    mVar34.std = mVar34.suffix.len + -3;
                    mVar34.suffix.str = &DAT_00000032;
                    return mVar34;
                  }
                    /* WARNING: Subroutine does not return */
                  runtime_panicSliceB();
                }
              }
            }
          }
          else if ((mVar18.suffix.str == (uint8 *)0x70) &&
                  (mVar18.suffix.str = (uint8 *)(uVar5 + 2),
                  (long)mVar18.suffix.str <= layout_spill.len)) {
            if ((ulong)layout_spill.len <= uVar5 + 1) {
                    /* WARNING: Subroutine does not return */
              runtime_panicIndex();
            }
            if (layout_spill.str[uVar5 + 1] == 0x6d) {
              if (mVar18.suffix.str <= (ulong)layout_spill.len) {
                mVar35.suffix.len = layout_spill.len - uVar5;
                mVar35.suffix.str =
                     (uint8 *)((ulong)mVar18.suffix.str & -(mVar35.suffix.len + -2) >> 0x3f);
                mVar35.prefix.len = (int)layout_spill.str;
                mVar35.prefix.str = layout_spill.str + (long)mVar35.suffix.str;
                mVar35.std = mVar35.suffix.len + -2;
                return mVar35;
              }
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceB();
            }
          }
        }
        else if (mVar18.suffix.str == &DAT_00000050) {
          mVar18.suffix.str = (uint8 *)(uVar5 + 2);
          if ((long)mVar18.suffix.str <= layout_spill.len) {
            if ((ulong)layout_spill.len <= uVar5 + 1) {
                    /* WARNING: Subroutine does not return */
              runtime_panicIndex();
            }
            if (layout_spill.str[uVar5 + 1] == 0x4d) {
              if (mVar18.suffix.str <= (ulong)layout_spill.len) {
                mVar26.suffix.len = layout_spill.len - uVar5;
                mVar26.suffix.str =
                     (uint8 *)((ulong)mVar18.suffix.str & -(mVar26.suffix.len + -2) >> 0x3f);
                mVar26.prefix.len = (int)layout_spill.str;
                mVar26.prefix.str = layout_spill.str + (long)mVar26.suffix.str;
                mVar26.std = mVar26.suffix.len + -2;
                return mVar26;
              }
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceB();
            }
          }
        }
        else if (mVar18.suffix.str == &DAT_0000005a) {
          mVar20.std = uVar5 + 7;
          if ((long)mVar20.std <= layout_spill.len) {
            if ((ulong)layout_spill.len < mVar20.std) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceAlen();
            }
            if (mVar20.std < uVar5) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceB();
            }
            mVar18.suffix.str = (uint8 *)(ulong)*(uint *)(layout_spill.str + uVar5);
            if (((*(uint *)(layout_spill.str + uVar5) == 0x3037305a) &&
                (mVar18.suffix.str = (uint8 *)(ulong)*(ushort *)(layout_spill.str + uVar5 + 4),
                *(ushort *)(layout_spill.str + uVar5 + 4) == 0x3030)) &&
               (mVar18.suffix.str = (uint8 *)(ulong)layout_spill.str[uVar5 + 6],
               layout_spill.str[uVar5 + 6] == 0x30)) {
              mVar27.suffix.len = layout_spill.len - uVar5;
              mVar27.std = mVar20.std & -(mVar27.suffix.len + -7) >> 0x3f;
              mVar27.prefix.len = (int)layout_spill.str;
              mVar27.prefix.str = layout_spill.str + mVar27.std;
              mVar27.suffix.str = &DAT_00000030;
              return mVar27;
            }
          }
          mVar20.std = uVar5 + 9;
          if ((long)mVar20.std <= layout_spill.len) {
            if ((ulong)layout_spill.len < mVar20.std) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceAlen();
            }
            if (mVar20.std < uVar5) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceB();
            }
            mVar18.suffix.str = *(uint8 **)(layout_spill.str + uVar5);
            if ((mVar18.suffix.str == (uint8 *)0x303a30303a37305a) &&
               (mVar18.suffix.str = (uint8 *)(ulong)layout_spill.str[uVar5 + 8],
               layout_spill.str[uVar5 + 8] == 0x30)) {
              mVar28.suffix.len = layout_spill.len - uVar5;
              mVar28.std = mVar20.std & -(mVar28.suffix.len + -9) >> 0x3f;
              mVar28.prefix.len = (int)layout_spill.str;
              mVar28.prefix.str = layout_spill.str + mVar28.std;
              mVar28.suffix.str = &DAT_00000030;
              return mVar28;
            }
          }
          mVar20.std = uVar5 + 5;
          if ((long)mVar20.std <= layout_spill.len) {
            if ((ulong)layout_spill.len < mVar20.std) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceAlen();
            }
            if (mVar20.std < uVar5) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceB();
            }
            mVar18.suffix.str = (uint8 *)(ulong)*(uint *)(layout_spill.str + uVar5);
            if ((*(uint *)(layout_spill.str + uVar5) == 0x3037305a) &&
               (mVar18.suffix.str = (uint8 *)(ulong)layout_spill.str[uVar5 + 4],
               layout_spill.str[uVar5 + 4] == 0x30)) {
              mVar29.suffix.len = layout_spill.len - uVar5;
              mVar29.std = mVar20.std & -(mVar29.suffix.len + -5) >> 0x3f;
              mVar29.prefix.len = (int)layout_spill.str;
              mVar29.prefix.str = layout_spill.str + mVar29.std;
              mVar29.suffix.str = &DAT_00000030;
              return mVar29;
            }
          }
          mVar20.std = uVar5 + 6;
          if ((long)mVar20.std <= layout_spill.len) {
            if ((ulong)layout_spill.len < mVar20.std) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceAlen();
            }
            if (mVar20.std < uVar5) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceB();
            }
            mVar18.suffix.str = (uint8 *)(ulong)*(uint *)(layout_spill.str + uVar5);
            if ((*(uint *)(layout_spill.str + uVar5) == 0x3a37305a) &&
               (mVar18.suffix.str = (uint8 *)(ulong)*(ushort *)(layout_spill.str + uVar5 + 4),
               *(ushort *)(layout_spill.str + uVar5 + 4) == 0x3030)) {
              mVar30.suffix.len = layout_spill.len - uVar5;
              mVar30.std = mVar20.std & -(mVar30.suffix.len + -6) >> 0x3f;
              mVar30.prefix.len = (int)layout_spill.str;
              mVar30.prefix.str = layout_spill.str + mVar30.std;
              mVar30.suffix.str = (uint8 *)0x3030;
              return mVar30;
            }
          }
          mVar20.std = uVar5 + 3;
          if ((long)mVar20.std <= layout_spill.len) {
            if ((ulong)layout_spill.len < mVar20.std) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceAlen();
            }
            if (mVar20.std < uVar5) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceB();
            }
            mVar18.suffix.str = (uint8 *)(ulong)*(ushort *)(layout_spill.str + uVar5);
            if ((*(ushort *)(layout_spill.str + uVar5) == 0x305a) &&
               (mVar18.suffix.str = (uint8 *)(ulong)layout_spill.str[uVar5 + 2],
               layout_spill.str[uVar5 + 2] == 0x37)) {
              mVar31.suffix.len = layout_spill.len - uVar5;
              mVar31.std = mVar20.std & -(mVar31.suffix.len + -3) >> 0x3f;
              mVar31.prefix.len = (int)layout_spill.str;
              mVar31.prefix.str = layout_spill.str + mVar31.std;
              mVar31.suffix.str = &DAT_00000037;
              return mVar31;
            }
          }
        }
      }
      else {
        if (mVar18.suffix.str < &DAT_00000036) {
          if (mVar18.suffix.str == &DAT_00000034) {
            mVar24.suffix.len = layout_spill.len - uVar5;
            mVar24.std = -(mVar24.suffix.len + -1) >> 0x3f;
            mVar24.prefix.str = layout_spill.str + (uVar5 + 1 & mVar24.std);
            mVar24.prefix.len = (int)layout_spill.str;
            mVar24.suffix.str = &DAT_00000034;
            return mVar24;
          }
          mVar25.suffix.len = layout_spill.len - uVar5;
          mVar25.std = -(mVar25.suffix.len + -1) >> 0x3f;
          mVar25.prefix.str = layout_spill.str + (uVar5 + 1 & mVar25.std);
          mVar25.prefix.len = (int)layout_spill.str;
          mVar25.suffix.str = mVar18.suffix.str;
          return mVar25;
        }
        if (mVar18.suffix.str == (uint8 *)0x4a) {
          mVar20.std = uVar5 + 3;
          if ((long)mVar20.std <= layout_spill.len) {
            if ((ulong)layout_spill.len < mVar20.std) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceAlen();
            }
            if (mVar20.std < uVar5) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceB();
            }
            mVar18.suffix.str = (uint8 *)(ulong)*(ushort *)(layout_spill.str + uVar5);
            if ((*(ushort *)(layout_spill.str + uVar5) == 0x614a) &&
               (mVar18.suffix.str = (uint8 *)(ulong)layout_spill.str[uVar5 + 2],
               layout_spill.str[uVar5 + 2] == 0x6e)) {
              uVar6 = uVar5 + 7;
              if ((long)uVar6 <= layout_spill.len) {
                if ((ulong)layout_spill.len < uVar6) {
                    /* WARNING: Subroutine does not return */
                  runtime_panicSliceAlen();
                }
                if (uVar6 < uVar5) {
                    /* WARNING: Subroutine does not return */
                  runtime_panicSliceB();
                }
                if (((*(int *)(layout_spill.str + uVar5) == 0x756e614a) &&
                    (*(short *)(layout_spill.str + uVar5 + 4) == 0x7261)) &&
                   (layout_spill.str[uVar5 + 6] == 0x79)) {
                  mVar19.suffix.len = layout_spill.len - uVar5;
                  mVar19.suffix.str = (uint8 *)(uVar6 & -(mVar19.suffix.len + -7) >> 0x3f);
                  mVar19.prefix.len = (int)layout_spill.str;
                  mVar19.prefix.str = layout_spill.str + (long)mVar19.suffix.str;
                  mVar19.std = mVar19.suffix.len + -7;
                  return mVar19;
                }
              }
              uVar6 = layout_spill.len - uVar5;
              mVar20.std = mVar20.std & (long)-(uVar6 - 3) >> 0x3f;
              mVar18.suffix.str = layout_spill.str + mVar20.std;
                    /* Unresolved local var: uint8 c@[???] */
              if ((uVar6 == 3) ||
                 (uVar6 = (ulong)(layout_spill.str[mVar20.std] - 0x61),
                 0x19 < (byte)(layout_spill.str[mVar20.std] - 0x61))) {
                mVar20.prefix.len = (int)layout_spill.str;
                mVar20.prefix.str = (uint8 *)uVar5;
                mVar20.suffix.len = uVar6;
                mVar20.suffix.str = mVar18.suffix.str;
                return mVar20;
              }
            }
          }
        }
        else if (mVar18.suffix.str == &DAT_0000004d) {
          mVar20.std = uVar5 + 3;
          if ((long)mVar20.std <= layout_spill.len) {
            if ((ulong)layout_spill.len < mVar20.std) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceAlen();
            }
            if (mVar20.std < uVar5) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceB();
            }
            uVar4 = *(ushort *)(layout_spill.str + uVar5);
            mVar18.suffix.str = (uint8 *)(ulong)uVar4;
            if ((uVar4 == 0x6f4d) && (layout_spill.str[uVar5 + 2] == 0x6e)) {
              uVar6 = uVar5 + 6;
              if ((long)uVar6 <= layout_spill.len) {
                if ((ulong)layout_spill.len < uVar6) {
                    /* WARNING: Subroutine does not return */
                  runtime_panicSliceAlen();
                }
                if (uVar6 < uVar5) {
                    /* WARNING: Subroutine does not return */
                  runtime_panicSliceB();
                }
                if ((*(int *)(layout_spill.str + uVar5) == 0x646e6f4d) &&
                   (*(short *)(layout_spill.str + uVar5 + 4) == 0x7961)) {
                  mVar21.suffix.len = layout_spill.len - uVar5;
                  mVar21.prefix.len = (int)layout_spill.str;
                  mVar21.prefix.str = layout_spill.str + (uVar6 & -(mVar21.suffix.len + -6) >> 0x3f)
                  ;
                  mVar21.std = mVar21.suffix.len + -6;
                  mVar21.suffix.str = (uint8 *)0x6f4d;
                  return mVar21;
                }
              }
              uVar6 = layout_spill.len - uVar5;
              lVar1 = uVar6 - 3;
                    /* Unresolved local var: uint8 c@[???] */
              if ((uVar6 == 3) ||
                 (uVar6 = (ulong)(layout_spill.str[-lVar1 >> 0x3f & mVar20.std] - 0x61),
                 0x19 < (byte)(layout_spill.str[-lVar1 >> 0x3f & mVar20.std] - 0x61))) {
                mVar22.prefix.len = (int)layout_spill.str;
                mVar22.prefix.str = (uint8 *)uVar5;
                mVar22.std = mVar20.std;
                mVar22.suffix.len = uVar6;
                mVar22.suffix.str = (uint8 *)0x6f4d;
                return mVar22;
              }
            }
            if ((uVar4 == 0x534d) && (layout_spill.str[uVar5 + 2] == 0x54)) {
              mVar23.std = mVar20.std & (long)-((layout_spill.len - uVar5) + -3) >> 0x3f;
              mVar23.prefix.len = (int)layout_spill.str;
              mVar23.prefix.str = layout_spill.str + mVar23.std;
              mVar23.suffix.len._0_1_ = 0x54;
              mVar23.suffix.str = (uint8 *)0x534d;
              mVar23.suffix.len._1_7_ = 0;
              return mVar23;
            }
          }
        }
      }
    }
    else if (&DAT_0000002e < mVar18.suffix.str) {
      if (&DAT_00000031 < mVar18.suffix.str) {
        if (mVar18.suffix.str != &DAT_00000032) {
          mVar18.suffix.len = layout_spill.len - uVar5;
          mVar18.std = -(mVar18.suffix.len + -1) >> 0x3f;
          mVar18.prefix.str = layout_spill.str + (uVar5 + 1 & mVar18.std);
          mVar18.prefix.len = (int)layout_spill.str;
          return mVar18;
        }
        mVar20.std = uVar5 + 4;
        if ((long)mVar20.std <= layout_spill.len) {
          if ((ulong)layout_spill.len < mVar20.std) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceAlen();
          }
          if (mVar20.std < uVar5) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceB();
          }
          if (*(int *)(layout_spill.str + uVar5) == 0x36303032) {
            mVar16.suffix.len = layout_spill.len - uVar5;
            mVar16.std = mVar20.std & -(mVar16.suffix.len + -4) >> 0x3f;
            mVar16.prefix.len = (int)layout_spill.str;
            mVar16.prefix.str = layout_spill.str + mVar16.std;
            mVar16.suffix.str = &DAT_00000032;
            return mVar16;
          }
        }
        mVar17.suffix.len = layout_spill.len - uVar5;
        mVar17.std = -(mVar17.suffix.len + -1) >> 0x3f;
        mVar17.prefix.str = layout_spill.str + (uVar5 + 1 & mVar17.std);
        mVar17.prefix.len = (int)layout_spill.str;
        mVar17.suffix.str = &DAT_00000032;
        return mVar17;
      }
      if (mVar18.suffix.str == &DAT_00000030) {
        mVar18.suffix.str = (uint8 *)(uVar5 + 2);
        if ((long)mVar18.suffix.str <= layout_spill.len) {
          if ((ulong)layout_spill.len <= uVar5 + 1) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          bVar3 = layout_spill.str[uVar5 + 1];
          if ((0x30 < bVar3) && (bVar3 < 0x37)) {
            if ((ulong)layout_spill.len < mVar18.suffix.str) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceB();
            }
            mVar12.suffix.str =
                 (uint8 *)((ulong)mVar18.suffix.str &
                          (long)-((layout_spill.len - uVar5) + -2) >> 0x3f);
            if ((ulong)(byte)(bVar3 - 0x31) < 6) {
              mVar12.prefix.len = (int)layout_spill.str;
              mVar12.prefix.str = (uint8 *)uVar5;
              mVar12.std = time_std0x[(byte)(bVar3 - 0x31)];
              mVar12.suffix.len = (int)(layout_spill.str + (long)mVar12.suffix.str);
              return mVar12;
            }
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
        }
        uVar6 = uVar5 + 3;
        if ((long)uVar6 <= layout_spill.len) {
          if ((ulong)layout_spill.len <= uVar5 + 1) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          if (layout_spill.str[uVar5 + 1] == 0x30) {
            if ((ulong)layout_spill.len <= mVar18.suffix.str) {
                    /* WARNING: Subroutine does not return */
              runtime_panicIndex();
            }
            mVar18.suffix.str = (uint8 *)(ulong)layout_spill.str[uVar5 + 2];
            if (layout_spill.str[uVar5 + 2] == 0x32) {
              if (uVar6 <= (ulong)layout_spill.len) {
                mVar13.suffix.len = layout_spill.len - uVar5;
                mVar13.prefix.len = (int)layout_spill.str;
                mVar13.prefix.str = layout_spill.str + (uVar6 & -(mVar13.suffix.len + -3) >> 0x3f);
                mVar13.std = mVar13.suffix.len + -3;
                mVar13.suffix.str = &DAT_00000032;
                return mVar13;
              }
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceB();
            }
          }
        }
      }
      else if (mVar18.suffix.str == &DAT_00000031) {
        mVar20.std = uVar5 + 2;
        mVar18.suffix.str = &DAT_00000031;
        if ((long)mVar20.std <= layout_spill.len) {
          if ((ulong)layout_spill.len <= uVar5 + 1) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          mVar18.suffix.str = (uint8 *)(ulong)layout_spill.str[uVar5 + 1];
          if (layout_spill.str[uVar5 + 1] == 0x35) {
            if (mVar20.std <= (ulong)layout_spill.len) {
              mVar14.suffix.len = layout_spill.len - uVar5;
              mVar14.prefix.len = (int)layout_spill.str;
              mVar14.prefix.str =
                   layout_spill.str + (mVar20.std & -(mVar14.suffix.len + -2) >> 0x3f);
              mVar14.std = mVar14.suffix.len + -2;
              mVar14.suffix.str = &DAT_00000035;
              return mVar14;
            }
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceB();
          }
        }
        mVar15.suffix.len = layout_spill.len - uVar5;
        mVar15.std = -(mVar15.suffix.len + -1) >> 0x3f;
        mVar15.prefix.str = layout_spill.str + (uVar5 + 1 & mVar15.std);
        mVar15.prefix.len = (int)layout_spill.str;
        mVar15.suffix.str = mVar18.suffix.str;
        return mVar15;
      }
    }
    else if (mVar18.suffix.str == &DAT_0000002c) {
LAB_0054a619:
      mVar18.suffix.str = (uint8 *)(uVar5 + 1);
      if ((long)mVar18.suffix.str < layout_spill.len) {
        if ((ulong)layout_spill.len <= mVar18.suffix.str) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        uVar2 = layout_spill.str[uVar5 + 1];
        if ((uVar2 == 0x30) || (uVar2 == 0x39)) {
          for (; ((long)mVar18.suffix.str < layout_spill.len &&
                 (mVar18.suffix.str[(long)layout_spill.str] == uVar2));
              mVar18.suffix.str = mVar18.suffix.str + 1) {
                    /* Unresolved local var: int j@[???] */
          }
                    /* Unresolved local var: uint8 c@[???] */
          if (layout_spill.len <= (long)mVar18.suffix.str) {
code_r0x0054b549:
                    /* Unresolved local var: int std@[???] */
            mVar37.suffix.str = (uint8 *)((long)(mVar18.suffix.str + (-1 - uVar5)) * 0x10000);
            if (mVar18.suffix.str <= (ulong)layout_spill.len) {
              mVar37.suffix.len = -(layout_spill.len - (long)mVar18.suffix.str) >> 0x3f;
              mVar37.prefix.len = (int)layout_spill.str;
              mVar37.prefix.str = (uint8 *)(layout_spill.len - (long)mVar18.suffix.str);
              mVar37.std = (int)(layout_spill.str + ((ulong)mVar18.suffix.str & mVar37.suffix.len));
              return mVar37;
            }
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceB();
          }
          if ((ulong)layout_spill.len <= mVar18.suffix.str) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          if (9 < (byte)(mVar18.suffix.str[(long)layout_spill.str] - 0x30)) goto code_r0x0054b549;
        }
      }
    }
    else if (mVar18.suffix.str == &DAT_0000002d) {
      mVar20.std = uVar5 + 7;
      if ((long)mVar20.std <= layout_spill.len) {
        if ((ulong)layout_spill.len < mVar20.std) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAlen();
        }
        if (mVar20.std < uVar5) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        mVar18.suffix.str = (uint8 *)(ulong)*(uint *)(layout_spill.str + uVar5);
        if (((*(uint *)(layout_spill.str + uVar5) == 0x3037302d) &&
            (mVar18.suffix.str = (uint8 *)(ulong)*(ushort *)(layout_spill.str + uVar5 + 4),
            *(ushort *)(layout_spill.str + uVar5 + 4) == 0x3030)) &&
           (mVar18.suffix.str = (uint8 *)(ulong)layout_spill.str[uVar5 + 6],
           layout_spill.str[uVar5 + 6] == 0x30)) {
          mVar7.suffix.len = layout_spill.len - uVar5;
          mVar7.std = mVar20.std & -(mVar7.suffix.len + -7) >> 0x3f;
          mVar7.prefix.len = (int)layout_spill.str;
          mVar7.prefix.str = layout_spill.str + mVar7.std;
          mVar7.suffix.str = &DAT_00000030;
          return mVar7;
        }
      }
      mVar20.std = uVar5 + 9;
      if ((long)mVar20.std <= layout_spill.len) {
        if ((ulong)layout_spill.len < mVar20.std) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAlen();
        }
        if (mVar20.std < uVar5) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        mVar18.suffix.str = *(uint8 **)(layout_spill.str + uVar5);
        if ((mVar18.suffix.str == (uint8 *)0x303a30303a37302d) &&
           (mVar18.suffix.str = (uint8 *)(ulong)layout_spill.str[uVar5 + 8],
           layout_spill.str[uVar5 + 8] == 0x30)) {
          mVar8.suffix.len = layout_spill.len - uVar5;
          mVar8.std = mVar20.std & -(mVar8.suffix.len + -9) >> 0x3f;
          mVar8.prefix.len = (int)layout_spill.str;
          mVar8.prefix.str = layout_spill.str + mVar8.std;
          mVar8.suffix.str = &DAT_00000030;
          return mVar8;
        }
      }
      mVar20.std = uVar5 + 5;
      if ((long)mVar20.std <= layout_spill.len) {
        if ((ulong)layout_spill.len < mVar20.std) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAlen();
        }
        if (mVar20.std < uVar5) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        mVar18.suffix.str = (uint8 *)(ulong)*(uint *)(layout_spill.str + uVar5);
        if ((*(uint *)(layout_spill.str + uVar5) == 0x3037302d) &&
           (mVar18.suffix.str = (uint8 *)(ulong)layout_spill.str[uVar5 + 4],
           layout_spill.str[uVar5 + 4] == 0x30)) {
          mVar9.suffix.len = layout_spill.len - uVar5;
          mVar9.std = mVar20.std & -(mVar9.suffix.len + -5) >> 0x3f;
          mVar9.prefix.len = (int)layout_spill.str;
          mVar9.prefix.str = layout_spill.str + mVar9.std;
          mVar9.suffix.str = &DAT_00000030;
          return mVar9;
        }
      }
      mVar20.std = uVar5 + 6;
      if ((long)mVar20.std <= layout_spill.len) {
        if ((ulong)layout_spill.len < mVar20.std) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAlen();
        }
        if (mVar20.std < uVar5) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        mVar18.suffix.str = (uint8 *)(ulong)*(uint *)(layout_spill.str + uVar5);
        if ((*(uint *)(layout_spill.str + uVar5) == 0x3a37302d) &&
           (mVar18.suffix.str = (uint8 *)(ulong)*(ushort *)(layout_spill.str + uVar5 + 4),
           *(ushort *)(layout_spill.str + uVar5 + 4) == 0x3030)) {
          mVar10.suffix.len = layout_spill.len - uVar5;
          mVar10.std = mVar20.std & -(mVar10.suffix.len + -6) >> 0x3f;
          mVar10.prefix.len = (int)layout_spill.str;
          mVar10.prefix.str = layout_spill.str + mVar10.std;
          mVar10.suffix.str = (uint8 *)0x3030;
          return mVar10;
        }
      }
      mVar20.std = uVar5 + 3;
      if ((long)mVar20.std <= layout_spill.len) {
        if ((ulong)layout_spill.len < mVar20.std) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAlen();
        }
        if (mVar20.std < uVar5) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        mVar18.suffix.str = (uint8 *)(ulong)*(ushort *)(layout_spill.str + uVar5);
        if ((*(ushort *)(layout_spill.str + uVar5) == 0x302d) &&
           (mVar18.suffix.str = (uint8 *)(ulong)layout_spill.str[uVar5 + 2],
           layout_spill.str[uVar5 + 2] == 0x37)) {
          mVar11.suffix.len = layout_spill.len - uVar5;
          mVar11.std = mVar20.std & -(mVar11.suffix.len + -3) >> 0x3f;
          mVar11.prefix.len = (int)layout_spill.str;
          mVar11.prefix.str = layout_spill.str + mVar11.std;
          mVar11.suffix.str = &DAT_00000037;
          return mVar11;
        }
      }
    }
    else if (mVar18.suffix.str == &DAT_0000002e) goto LAB_0054a619;
    uVar5 = uVar5 + 1;
    in_RDI = mVar18.suffix.str;
  } while( true );
}


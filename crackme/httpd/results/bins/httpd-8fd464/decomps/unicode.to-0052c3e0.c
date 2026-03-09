
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void unicode.to(int _case, int32 r, []unicode.CaseRange caseRange,
   int32 mappedRune, bool foundMapping) */

multireturn_int32_bool_ unicode_to(int _case,int32 r,__unicode_CaseRange caseRange)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  multireturn_int32_bool_ mVar7;
  multireturn_int32_bool_ mVar8;
  multireturn_int32_bool_ mVar9;
  multireturn_int32_bool_ mVar10;
  int _case_spill;
  int32 r_spill;
  long in_stack_00000018;
  int hi;
  int local_1c;
  int iStack_18;
  int iStack_14;
  undefined8 uStack_10;
  
                    /* Unresolved local var: int lo@[???] */
  if (2 < (ulong)_case_spill) {
    mVar7.mappedRune = (int32)_case;
    mVar7.foundMapping = SUB41(r,0);
    return mVar7;
  }
  lVar5 = 0;
  uVar1 = hi;
  while( true ) {
    uVar4 = uVar1;
    mVar8.foundMapping = SUB81(in_stack_00000018,0);
    if ((long)uVar4 <= lVar5) {
      mVar10.mappedRune = (int32)hi;
      mVar10.foundMapping = mVar8.foundMapping;
      return mVar10;
    }
                    /* Unresolved local var: int m@[???]
                       Unresolved local var: unicode.CaseRange cr@[???] */
    lVar6 = (long)(uVar4 - lVar5) / 2;
    uVar1 = lVar6 + lVar5;
    if ((ulong)hi <= uVar1) break;
    local_1c = (int)*(undefined8 *)(in_stack_00000018 + uVar1 * 0x14);
    lVar2 = in_stack_00000018 + uVar1 * 0x14;
    uVar3 = *(undefined8 *)(lVar2 + 4);
    iStack_18 = (int)uVar3;
    iStack_14 = (int)((ulong)uVar3 >> 0x20);
    uStack_10 = *(undefined8 *)(lVar2 + 0xc);
    if (local_1c <= r_spill) {
      if (r_spill <= iStack_18) {
                    /* Unresolved local var: int32 delta@[???] */
        if ((&iStack_14)[_case_spill] < 0x110000) {
          mVar9.mappedRune = (&iStack_14)[_case_spill] + r_spill;
          mVar9.foundMapping = mVar8.foundMapping;
          return mVar9;
        }
        mVar8.mappedRune = (r_spill - local_1c & 0xfffffffeU | (uint)_case_spill & 1) + local_1c;
        return mVar8;
      }
      if (local_1c <= r_spill) {
        lVar5 = lVar6 + lVar5 + 1;
        uVar1 = uVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.parseNanoseconds(string value, int nbytes, int ns, string
   rangeErrString, error err) */

multireturn_int_string_error__conflict time_parseNanoseconds(string value,int nbytes)

{
  uint8 uVar1;
  void *pvVar2;
  runtime_itab *in_RDI;
  long in_FS_OFFSET;
  string s;
  multireturn_int_error__conflict8 mVar3;
  multireturn_int_string_error__conflict mVar4;
  multireturn_int_string_error__conflict mVar5;
  multireturn_int_string_error__conflict mVar6;
  multireturn_int_string_error__conflict mVar7;
  string value_spill;
  int nbytes_spill;
  ulong local_20;
  long local_18;
  
                    /* Unresolved local var: int scaleDigits@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (value_spill.len == 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  uVar1 = *value_spill.str;
  if ((uVar1 != 0x2e) && (uVar1 != 0x2c)) {
    mVar6.rangeErrString.str = value_spill.str;
    mVar6.ns = (int)time_errBad.tab;
    mVar6.rangeErrString.len = (int)time_errBad.data;
    mVar6.err.data._0_1_ = uVar1;
    mVar6.err.tab = in_RDI;
    mVar6.err.data._1_7_ = 0;
    return mVar6;
  }
  if ((ulong)value_spill.len < (ulong)nbytes_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAlen();
  }
  if (nbytes_spill != 0) {
    s.str = value_spill.str + (-(nbytes_spill + -1) >> 0x3f & 1);
    s.len = (int)value_spill.str;
    pvVar2 = (void *)nbytes_spill;
    mVar3 = time_atoi(s);
    mVar4.rangeErrString.str = mVar3.err.tab;
    if (local_18 != 0) {
      mVar5.rangeErrString.str = (uint8 *)mVar4.rangeErrString.str;
      mVar5.ns = local_20;
      mVar5.rangeErrString.len = local_18;
      mVar5.err.data = pvVar2;
      mVar5.err.tab = in_RDI;
      return mVar5;
    }
    if (local_20 < 1000000000) {
      mVar7.rangeErrString.str = -(nbytes_spill + -10);
                    /* Unresolved local var: int i@[???] */
      for (pvVar2 = (void *)0x0; (long)pvVar2 < mVar7.rangeErrString.str;
          pvVar2 = (void *)((long)pvVar2 + 1)) {
        local_20 = local_20 * 10;
      }
      mVar7.ns = local_20;
      mVar7.rangeErrString.len = 0;
      mVar7.err.data = pvVar2;
      mVar7.err.tab = in_RDI;
      return mVar7;
    }
    mVar4.ns = (int)&DAT_0029a12a;
    mVar4.rangeErrString.len = 0;
    mVar4.err.data = pvVar2;
    mVar4.err.tab = in_RDI;
    return mVar4;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}


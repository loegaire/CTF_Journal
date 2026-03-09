
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.tzsetOffset(string s, int offset, string rest, bool ok) */

multireturn_int_string_bool_ time_tzsetOffset(string s)

{
  uint8 uVar1;
  undefined1 auVar2 [25];
  uint8 *puVar3;
  char cVar4;
  undefined8 in_RCX;
  int min;
  long lVar5;
  undefined1 in_DIL;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  string s_02;
  multireturn_int_string_bool__conflict mVar6;
  multireturn_int_string_bool_ mVar7;
  multireturn_int_string_bool_ mVar8;
  multireturn_int_string_bool_ mVar9;
  multireturn_int_string_bool_ mVar10;
  multireturn_int_string_bool_ mVar11;
  multireturn_int_string_bool_ mVar12;
  string s_spill;
  long local_38;
  char *local_30;
  long local_28;
  char local_20;
  
                    /* Unresolved local var: bool neg@[???]
                       Unresolved local var: int hours@[???]
                       Unresolved local var: int off@[???]
                       Unresolved local var: int mins@[???]
                       Unresolved local var: int secs@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (s_spill.len == 0) {
    auVar2[0x10] = in_DIL;
    auVar2._8_8_ = in_RCX;
    auVar2._0_8_ = s.len;
    auVar2._17_8_ = 0;
    return (multireturn_int_string_bool_)(auVar2 << 0x40);
  }
  uVar1 = *s_spill.str;
  if (uVar1 == 0x2b) {
    s_spill.len = s_spill.len + -1;
    puVar3 = s_spill.str + (-s_spill.len >> 0x3f & 1);
    min = 0;
  }
  else {
    puVar3 = s_spill.str;
    if (uVar1 == 0x2d) {
      s_spill.len = s_spill.len + -1;
      puVar3 = s_spill.str + (-s_spill.len >> 0x3f & 1);
    }
    min = CONCAT71((int7)((ulong)s_spill.str >> 8),uVar1 == 0x2d);
  }
  cVar4 = (char)min;
  s_00.len = s_spill.len;
  s_00.str = puVar3;
  mVar6 = time_tzsetNum(s_00,min,CONCAT71(in_register_00000039,in_DIL));
  mVar7.ok = mVar6.ok;
  s_01.len = mVar6.rest.str;
  if (local_20 == '\0') {
    mVar12.rest.str = s_01.len;
    mVar12.offset = local_38;
    mVar12.ok = mVar7.ok;
    mVar12.rest.len = (int)local_30;
    return mVar12;
  }
  if ((local_28 == 0) || (*local_30 != ':')) {
    mVar7.offset = local_38 * -0xe10;
    lVar5 = local_38 * 0xe10;
    if (cVar4 != '\0') {
      lVar5 = mVar7.offset;
    }
    mVar7.rest.str = (uint8 *)lVar5;
    mVar7.rest.len = (int)local_30;
    return mVar7;
  }
  s_01.str = (uint8 *)(local_30 + (-(local_28 + -1) >> 0x3f & 1));
  mVar6 = time_tzsetNum(s_01,(int)local_30,CONCAT71(in_register_00000039,mVar7.ok));
  mVar8.ok = mVar6.ok;
  mVar11.rest.str = mVar6.rest.str;
  if (local_20 == '\0') {
    mVar11.offset = local_38;
    mVar11.ok = mVar8.ok;
    mVar11.rest.len = (int)local_30;
    return mVar11;
  }
  if ((local_28 != 0) && (*local_30 == ':')) {
    s_02.str = (uint8 *)(local_30 + (-(local_28 + -1) >> 0x3f & 1));
    s_02.len = local_38 * 0xe10;
    mVar6 = time_tzsetNum(s_02,(int)local_30,CONCAT71(in_register_00000039,mVar8.ok));
    mVar9.ok = mVar6.ok;
    mVar10.rest.str = mVar6.rest.str;
    if (local_20 == '\0') {
      mVar10.offset = local_38;
      mVar10.ok = mVar9.ok;
      mVar10.rest.len = (int)local_30;
      return mVar10;
    }
    mVar9.offset = local_38 * -0xe4d;
    lVar5 = local_38 * 0xe4d;
    if (cVar4 != '\0') {
      lVar5 = mVar9.offset;
    }
    mVar9.rest.str = (uint8 *)lVar5;
    mVar9.rest.len = (int)local_30;
    return mVar9;
  }
  mVar8.offset = local_38 * -0xe4c;
  lVar5 = local_38 * 0xe4c;
  if (cVar4 != '\0') {
    lVar5 = mVar8.offset;
  }
  mVar8.rest.str = (uint8 *)lVar5;
  mVar8.rest.len = (int)local_30;
  return mVar8;
}


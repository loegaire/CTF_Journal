
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.Time.MarshalBinary(time.Time t, []uint8 ~r0, error ~r1) */

multireturn___uint8_error__conflict time_Time_MarshalBinary(time_Time t)

{
  time_Location *ptVar1;
  long lVar2;
  ulong uVar3;
  void *in_RSI;
  runtime_itab *in_RDI;
  long in_FS_OFFSET;
  time_Time t_00;
  multireturn___uint8_error__conflict mVar5;
  multireturn___uint8_error__conflict mVar6;
  multireturn___uint8_error__conflict mVar7;
  time_Time t_spill;
  undefined1 *local_48;
  long local_28;
  multireturn_string_int_ mVar4;
  
  t_00.ext = t.ext;
                    /* Unresolved local var: int16 offsetMin@[???]
                       Unresolved local var: int64 sec@[???]
                       Unresolved local var: []uint8 enc@[???]
                       Unresolved local var: int64 ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: time.Location * l@[???] */
  ptVar1 = time_UTC;
  if (t_spill.loc != (time_Location *)0x0) {
    ptVar1 = t_spill.loc;
  }
  if (time_UTC == ptVar1) {
    lVar2 = 0xffffffff;
  }
  else {
    local_48 = (undefined1 *)t_spill.ext;
    t_00.wall = t_spill.wall;
    t_00.loc = t_spill.loc;
    mVar4 = time_Time_Zone(t_00);
    mVar5.~r0.len = mVar4.name.len;
    lVar2 = (local_28 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(local_28),8) >> 5) -
            (local_28 >> 0x3f);
    if (local_28 != lVar2 * 0x3c) {
      runtime_newobject((runtime__type *)&DAT_00241ea0);
      *(undefined8 *)(t_spill.ext + 8) = 0x35;
      *(undefined **)t_spill.ext = &DAT_002a9dd8;
      mVar7.~r0.len = mVar5.~r0.len;
      mVar7.~r0.array = (uint8 *)t_spill.ext;
      mVar7.~r0.cap = (int)&go_itab__errors_errorString_error;
      mVar7.~r1.data = in_RSI;
      mVar7.~r1.tab = in_RDI;
      return mVar7;
    }
    if (((lVar2 < -0x8000) || (lVar2 == -1)) || (t_00.ext = mVar5.~r0.len, 0x7fff < lVar2)) {
      runtime_newobject((runtime__type *)&DAT_00241ea0);
      *(undefined8 *)(t_spill.ext + 8) = 0x2a;
      *(undefined **)t_spill.ext = &DAT_002a7203;
      mVar5.~r0.array = (uint8 *)t_spill.ext;
      mVar5.~r0.cap = (int)&go_itab__errors_errorString_error;
      mVar5.~r1.data = in_RSI;
      mVar5.~r1.tab = in_RDI;
      return mVar5;
    }
  }
  if ((long)t_spill.wall < 0) {
    t_00.ext = 0xdd7b17f80;
    t_spill.ext = ((t_spill.wall << 1) >> 0x1f) + 0xdd7b17f80;
  }
  runtime_newobject((runtime__type *)&DAT_00226020);
  *local_48 = 1;
  local_48[1] = (char)((ulong)t_spill.ext >> 0x38);
  local_48[2] = (char)((ulong)t_spill.ext >> 0x30);
  local_48[3] = (char)((ulong)t_spill.ext >> 0x28);
  local_48[4] = (char)((ulong)t_spill.ext >> 0x20);
  local_48[5] = (char)((ulong)t_spill.ext >> 0x18);
  local_48[6] = (char)((ulong)t_spill.ext >> 0x10);
  local_48[7] = (char)((ulong)t_spill.ext >> 8);
  local_48[8] = (char)t_spill.ext;
  uVar3 = t_spill.wall & 0x3fffffff;
  local_48[9] = (char)(uVar3 >> 0x18);
  local_48[10] = (char)(uVar3 >> 0x10);
  local_48[0xb] = (char)(uVar3 >> 8);
  local_48[0xc] = (char)uVar3;
  mVar6.~r0.cap._0_2_ = (short)lVar2 >> 8;
  local_48[0xd] = (char)((ulong)lVar2 >> 8);
  local_48[0xe] = (char)lVar2;
  mVar6.~r0.len = t_00.ext;
  mVar6.~r0.array = local_48;
  mVar6.~r0.cap._2_6_ = 0;
  mVar6.~r1.data = in_RSI;
  mVar6.~r1.tab = in_RDI;
  return mVar6;
}


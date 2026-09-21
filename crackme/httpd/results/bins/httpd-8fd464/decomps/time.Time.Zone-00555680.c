
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.Time.Zone(time.Time t, string name, int offset) */

multireturn_string_int_ time_Time_Zone(time_Time t)

{
  long in_FS_OFFSET;
  multireturn_string_int_ mVar1;
  multireturn_string_int_int64_int64_bool_ mVar2;
  time_Time t_spill;
  int local_38;
  uint8 *local_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((long)t_spill.wall < 0) {
    t_spill.ext = ((t_spill.wall << 1) >> 0x1f) + 0xdd7b17f80;
  }
  mVar2 = time___Location__lookup((time_Location *)(t_spill.ext + -0xe7791f700),t.ext);
  mVar1.name.len = mVar2.name.len;
  mVar1.name.str = local_28;
  mVar1.offset = local_38;
  return mVar1;
}


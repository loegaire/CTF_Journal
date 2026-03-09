
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.Time.locabs(time.Time t, string name, int offset, uint64 abs)
    */

multireturn_string_int_uint64_ time_Time_locabs(time_Time t)

{
  time_zone *ptVar1;
  long sec;
  int64 in_RDI;
  long in_FS_OFFSET;
  multireturn_string_int_uint64_ mVar2;
  multireturn_string_int_int64_int64_bool_ mVar3;
  time_Time t_spill;
  time_Location *local_48;
  int local_38;
  long local_30;
  
                    /* Unresolved local var: time.Location * l@[???]
                       Unresolved local var: int64 sec@[???]
                       Unresolved local var: int64 ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((t_spill.loc == (time_Location *)0x0) || (t_spill.loc == &time_localLoc)) {
    time___Location__get(t_spill.loc);
    t_spill.loc = local_48;
  }
  if ((long)t_spill.wall < 0) {
    t_spill.ext = ((t_spill.wall << 1) >> 0x1f) + 0xdd7b17f80;
  }
  sec = t_spill.ext + -0xe7791f700;
  if (t_spill.loc == &time_utcLoc) {
    local_38 = 3;
  }
  else {
    ptVar1 = (t_spill.loc)->cacheZone;
    if (((ptVar1 == (time_zone *)0x0) || (sec < (t_spill.loc)->cacheStart)) ||
       ((t_spill.loc)->cacheEnd <= sec)) {
      mVar3 = time___Location__lookup(t_spill.loc,sec);
      in_RDI = mVar3.start;
    }
    else {
      local_38 = (ptVar1->name).len;
      local_30 = ptVar1->offset;
    }
    sec = t_spill.ext + local_30 + -0xe7791f700;
  }
  mVar2.name.str = (uint8 *)(sec + 0x7ffffffe1ad9c900);
  mVar2.name.len = local_38;
  mVar2.abs = in_RDI;
  mVar2.offset = sec;
  return mVar2;
}


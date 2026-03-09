
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.Time.abs(time.Time t, uint64 ~r0) */

uint64 time_Time_abs(time_Time t)

{
  long sec;
  long in_FS_OFFSET;
  time_Time t_spill;
  time_Location *local_48;
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
  if (t_spill.loc != &time_utcLoc) {
    if ((((t_spill.loc)->cacheZone == (time_zone *)0x0) || (sec < (t_spill.loc)->cacheStart)) ||
       ((t_spill.loc)->cacheEnd <= sec)) {
                    /* Unresolved local var: int offset@[???] */
      time___Location__lookup(t_spill.loc,sec);
      sec = local_30 + t_spill.ext + -0xe7791f700;
    }
    else {
      sec = (t_spill.loc)->cacheZone->offset + t_spill.ext + -0xe7791f700;
    }
  }
  return sec + 0x7ffffffe1ad9c900;
}


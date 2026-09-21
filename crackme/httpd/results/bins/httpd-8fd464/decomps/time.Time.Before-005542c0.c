
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.Time.Before(time.Time t, time.Time u, bool ~r1) */

bool time_Time_Before(time_Time t,time_Time u)

{
  bool bVar1;
  time_Time t_spill;
  time_Time u_spill;
  
                    /* Unresolved local var: int64 ts@[???]
                       Unresolved local var: int64 us@[???] */
  if ((long)(t_spill.wall & u_spill.wall) < 0) {
    return SUB81(t_spill.ext,0);
  }
  if ((long)t_spill.wall < 0) {
    t_spill.ext = ((t_spill.wall << 1) >> 0x1f) + 0xdd7b17f80;
  }
  if ((long)u_spill.wall < 0) {
    u_spill.ext = ((u_spill.wall << 1) >> 0x1f) + 0xdd7b17f80;
  }
  if (t_spill.ext < u_spill.ext) {
    bVar1 = true;
  }
  else if (u_spill.ext == t_spill.ext) {
    bVar1 = ((uint)t_spill.wall & 0x3fffffff) < ((uint)u_spill.wall & 0x3fffffff);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


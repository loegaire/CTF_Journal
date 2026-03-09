
/* WARNING: Removing unreachable block (ram,0x00555035) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.Time.Sub(time.Time t, time.Time u, time.Duration ~r1) */

time_Duration time_Time_Sub(time_Time t,time_Time u)

{
  long lVar1;
  long lVar2;
  time_Location *ptVar3;
  long in_FS_OFFSET;
  time_Time t_00;
  time_Time t_01;
  time_Time t_02;
  time_Time u_00;
  time_Time u_01;
  time_Time t_spill;
  time_Time u_spill;
  undefined8 local_28;
  undefined8 local_20;
  char local_18;
  undefined7 uStack_17;
  
  ptVar3 = u.loc;
                    /* Unresolved local var: time.Duration d@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (-1 < (long)(t_spill.wall & u_spill.wall)) {
    lVar1 = t_spill.ext;
    if ((long)t_spill.wall < 0) {
      lVar1 = ((t_spill.wall << 1) >> 0x1f) + 0xdd7b17f80;
    }
    lVar2 = u_spill.ext;
    if ((long)u_spill.wall < 0) {
      lVar2 = ((u_spill.wall << 1) >> 0x1f) + 0xdd7b17f80;
    }
    t_00.loc = (time_Location *)((lVar1 - lVar2) * 1000000000);
    t_00.wall = (long)&((t_00.loc)->name).str +
                (long)(int)(((uint)t_spill.wall & 0x3fffffff) - ((uint)u_spill.wall & 0x3fffffff));
    t_00.ext = u_spill.ext;
    time_Time_Add(t_00,(time_Duration)u_spill.loc);
    u_00.wall._1_7_ = uStack_17;
    u_00.wall._0_1_ = local_18;
    t_01.ext = local_28;
    t_01.wall = t_spill.wall;
    t_01.loc = (time_Location *)t_spill.ext;
    u_00.ext = local_20;
    u_00.loc = ptVar3;
    time_Time_Equal(t_01,u_00);
    if (local_18 == '\0') {
      t_02.ext = t_spill.ext;
      t_02.wall = t_spill.wall;
      t_02.loc = (time_Location *)u_spill.wall;
      u_01.ext = (int64)u_spill.loc;
      u_01.wall = (uint64)t_spill.loc;
      u_01.loc = ptVar3;
      time_Time_Before(t_02,u_01);
      return 0x7fffffffffffffff;
    }
    return t_00.wall;
  }
                    /* Unresolved local var: int64 te@[???]
                       Unresolved local var: int64 ue@[???]
                       Unresolved local var: time.Duration d@[???] */
  lVar1 = t_spill.ext - u_spill.ext;
  if ((lVar1 < 0) && (u_spill.ext < t_spill.ext)) {
    return 0x7fffffffffffffff;
  }
  if ((0 < lVar1) && (t_spill.ext < u_spill.ext)) {
    return -0x8000000000000000;
  }
  return lVar1;
}


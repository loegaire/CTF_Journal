
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.minNonzeroTime(time.Time a, time.Time b, time.Time ~r2) */

time_Time net_minNonzeroTime(time_Time a,time_Time b)

{
  long lVar2;
  long in_FS_OFFSET;
  time_Time tVar3;
  time_Time t;
  time_Time tVar4;
  time_Time tVar5;
  time_Time u;
  time_Time a_spill;
  time_Time b_spill;
  char local_40;
  time_Location *ptVar1;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar2 = a_spill.ext;
  if ((long)a_spill.wall < 0) {
    lVar2 = ((a_spill.wall << 1) >> 0x1f) + 0xdd7b17f80;
  }
  if ((lVar2 == 0) && ((a_spill.wall & 0x3fffffff) == 0)) {
    tVar3.ext = 0;
    tVar3.wall = (uint64)b_spill.loc;
    tVar3.loc = (time_Location *)a_spill.ext;
    return tVar3;
  }
  lVar2 = b_spill.ext;
  if ((long)b_spill.wall < 0) {
    lVar2 = ((b_spill.wall << 1) >> 0x1f) + 0xdd7b17f80;
  }
  if (((lVar2 != 0) || ((b_spill.wall & 0x3fffffff) != 0)) &&
     (t.ext = b_spill.wall, t.wall = a_spill.wall, t.loc = (time_Location *)a_spill.ext,
     u.ext = b_spill.ext, u.wall = lVar2, u.loc = b_spill.loc, ptVar1 = (time_Location *)a_spill.ext
     , time_Time_Before(t,u), local_40 == '\0')) {
    tVar5.ext = b_spill.wall;
    tVar5.wall = (uint64)b_spill.loc;
    tVar5.loc = ptVar1;
    return tVar5;
  }
  tVar4.ext = b_spill.wall;
  tVar4.wall = a_spill.wall;
  tVar4.loc = (time_Location *)a_spill.ext;
  return tVar4;
}


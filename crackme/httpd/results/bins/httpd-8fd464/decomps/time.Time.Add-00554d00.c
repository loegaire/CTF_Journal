
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.Time.Add(time.Time t, time.Duration d, time.Time ~r1) */

time_Time time_Time_Add(time_Time t,time_Duration d)

{
  time_Time *ptVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  time_Time *t_00;
  ulong uVar5;
  undefined1 *d_00;
  int iVar6;
  long in_FS_OFFSET;
  time_Time tVar7;
  time_Time t_spill;
  time_Duration d_spill;
  
                    /* Unresolved local var: int64 dsec@[???]
                       Unresolved local var: int32 nsec@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  ptVar1 = (time_Time *)(d_spill / 1000000000);
  d_00 = (undefined1 *)(d_spill % 1000000000);
  uVar2 = (uint)t_spill.wall & 0x3fffffff;
  iVar3 = (int)d_00;
  iVar6 = uVar2 + iVar3;
  if (iVar6 < 1000000000) {
    t_00 = ptVar1;
    if (iVar6 < 0) {
      t_00 = (time_Time *)((long)&ptVar1[-1].loc + 7);
      iVar6 = uVar2 + iVar3 + 1000000000;
    }
    d_00 = (undefined1 *)((long)&ptVar1[-1].loc + 7);
  }
  else {
    t_00 = (time_Time *)((long)&ptVar1->wall + 1);
    iVar6 = uVar2 + iVar3 + -1000000000;
  }
  t_spill.wall = t_spill.wall & 0xffffffffc0000000 | (long)iVar6;
  time___Time__addSec(t_00,(int64)d_00);
  puVar4 = (undefined1 *)t_spill.ext;
                    /* Unresolved local var: int64 te@[???] */
  if (((long)t_spill.wall < 0) &&
     (((d_00 = (undefined1 *)(d_spill + t_spill.ext), d_spill < 0 && (t_spill.ext < (long)d_00)) ||
      ((puVar4 = d_00, 0 < d_spill && ((long)d_00 < t_spill.ext)))))) {
    uVar5 = t_spill.wall << 1;
    t_spill.wall = (long)iVar6 & 0x3fffffff;
    puVar4 = (undefined1 *)((uVar5 >> 0x1f) + 0xdd7b17f80);
  }
  t_spill.ext = (int64)puVar4;
  tVar7.ext = (int64)d_00;
  tVar7.wall = t_spill.wall;
  tVar7.loc = (time_Location *)t_spill.ext;
  return tVar7;
}


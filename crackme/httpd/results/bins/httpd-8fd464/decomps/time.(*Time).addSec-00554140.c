
/* WARNING: Unknown calling convention */

void time___Time__addSec(time_Time *t,int64 d)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  time_Time *t_spill;
  int64 d_spill;
  
                    /* Unresolved local var: int64 sum@[???] */
  uVar3 = t_spill->wall;
  if ((long)uVar3 < 0) {
                    /* Unresolved local var: int64 dsec@[???] */
    uVar4 = (uVar3 << 1) >> 0x1f;
    uVar1 = uVar4 + d_spill;
    if (uVar1 < 0x200000000) {
      t_spill->wall = uVar1 * 0x40000000 | uVar3 & 0x3fffffff | 0x8000000000000000;
      return;
    }
    t_spill->ext = uVar4 + 0xdd7b17f80;
    t_spill->wall = t_spill->wall & 0x3fffffff;
  }
  lVar2 = t_spill->ext + d_spill;
  if (0 < d_spill == t_spill->ext < lVar2) {
    t_spill->ext = lVar2;
  }
  else if (d_spill < 1) {
    t_spill->ext = -0x7fffffffffffffff;
  }
  else {
    t_spill->ext = 0x7fffffffffffffff;
  }
  return;
}


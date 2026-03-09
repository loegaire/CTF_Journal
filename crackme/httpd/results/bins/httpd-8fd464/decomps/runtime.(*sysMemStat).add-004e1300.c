
/* WARNING: Unknown calling convention */

void runtime___sysMemStat__add(runtime_sysMemStat *s,int64 n)

{
  uint64 v;
  runtime_sysMemStat rVar1;
  string s_00;
  string s_01;
  string s_02;
  runtime_sysMemStat *s_spill;
  int64 n_spill;
  
                    /* Unresolved local var: uint64 val@[???] */
  if (s_spill == (runtime_sysMemStat *)0x0) {
    return;
  }
  LOCK();
  rVar1 = *s_spill;
  *s_spill = *s_spill + n_spill;
  UNLOCK();
  v = n_spill + rVar1;
  if (((n_spill < 1) || (n_spill <= (long)v)) &&
     ((-1 < n_spill || (n_spill <= (long)(rVar1 + n_spill * 2))))) {
    return;
  }
  runtime_printlock();
  s_00.len = n;
  s_00.str = &DAT_00295e8e;
  runtime_printstring(s_00);
  runtime_printuint(v);
  s_01.len = n;
  s_01.str = &DAT_00287888;
  runtime_printstring(s_01);
  runtime_printint(n_spill);
  runtime_printnl();
  runtime_printunlock();
  s_02.len = n;
  s_02.str = &DAT_0029b810;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_02);
}


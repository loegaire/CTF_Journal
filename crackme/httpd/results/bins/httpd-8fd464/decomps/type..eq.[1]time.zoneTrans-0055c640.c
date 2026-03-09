
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.[1]time.zoneTrans(time.zoneTrans[1] * p,
   time.zoneTrans[1] * q, bool r) */

bool type__eq__1_time_zoneTrans(time_zoneTrans (*p) [1],time_zoneTrans (*q) [1])

{
  bool bVar1;
  time_zoneTrans (*p_spill) [1];
  time_zoneTrans (*q_spill) [1];
  
  if ((((*q_spill)[0].when == (*p_spill)[0].when) && ((*q_spill)[0].index == (*p_spill)[0].index))
     && ((*q_spill)[0].isstd == (*p_spill)[0].isstd)) {
    bVar1 = (*q_spill)[0].isutc == (*p_spill)[0].isutc;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


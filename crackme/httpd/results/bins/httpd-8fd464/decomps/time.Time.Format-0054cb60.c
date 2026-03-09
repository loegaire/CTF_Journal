
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.Time.Format(time.Time t, string layout, string ~r1) */

string time_Time_Format(time_Time t,string layout)

{
  int iVar1;
  uint8 *puVar2;
  int in_R8;
  uint8 *in_R9;
  int in_R10;
  long in_FS_OFFSET;
  string sVar3;
  string layout_00;
  time_Time t_00;
  time_Time t_spill;
  string layout_spill;
  uint8 *local_90;
  int local_68;
  runtime_tmpBuf *local_60;
  uint8 local_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  __uint8 _Var4;
  
  iVar1 = layout.len;
  puVar2 = layout.str;
                    /* Unresolved local var: int max@[???]
                       Unresolved local var: []uint8 b@[???] */
  while (&local_28 <= *(undefined8 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (layout_spill.len + 10 < 0x40) {
                    /* Unresolved local var: uint8[64] buf@[???] */
    local_90 = local_48;
    local_48[0] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    local_48[4] = 0;
    local_48[5] = 0;
    local_48[6] = 0;
    local_48[7] = 0;
    local_48[8] = 0;
    local_48[9] = 0;
    local_48[10] = 0;
    local_48[0xb] = 0;
    local_48[0xc] = 0;
    local_48[0xd] = 0;
    local_48[0xe] = 0;
    local_48[0xf] = 0;
    local_48[0x10] = 0;
    local_48[0x11] = 0;
    local_48[0x12] = 0;
    local_48[0x13] = 0;
    local_48[0x14] = 0;
    local_48[0x15] = 0;
    local_48[0x16] = 0;
    local_48[0x17] = 0;
    local_48[0x18] = 0;
    local_48[0x19] = 0;
    local_48[0x1a] = 0;
    local_48[0x1b] = 0;
    local_48[0x1c] = 0;
    local_48[0x1d] = 0;
    local_48[0x1e] = 0;
    local_48[0x1f] = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    uStack_10 = 0;
  }
  else {
    runtime_makeslice((runtime__type *)&DAT_00225720,t.ext,layout_spill.len + 10);
  }
  _Var4.len = iVar1;
  _Var4.array = puVar2;
  _Var4.cap = in_R8;
  layout_00.len = in_R10;
  layout_00.str = in_R9;
  t_00.ext = (int64)t_spill.loc;
  t_00.wall = layout_spill.len;
  t_00.loc = (time_Location *)layout_spill.str;
  _Var4 = time_Time_AppendFormat(t_00,_Var4,layout_00);
  sVar3 = runtime_slicebytetostring(local_60,(uint8 *)_Var4.len,local_68);
  sVar3.str = local_90;
  return sVar3;
}


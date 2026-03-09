
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.(*timerCtx).String(context.timerCtx * c, string ~r0) */

string context___timerCtx__String(context_timerCtx *c)

{
  time_Location *ptVar1;
  void *unaff_RBX;
  time_Location **pptVar2;
  long in_FS_OFFSET;
  context_Context c_00;
  string sVar3;
  time_Time t;
  time_Time t_00;
  __string a;
  context_timerCtx *c_spill;
  uint8 local_a8 [8];
  time_Duration local_a0;
  time_Location *local_98;
  time_Location *local_88;
  time_Duration local_80;
  time_Duration local_78;
  uint8 local_70 [8];
  uint8 local_68 [8];
  time_Duration local_60;
  undefined *local_58;
  uint8 local_50 [8];
  time_Duration local_48;
  time_Location *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  time_Location *local_20;
  undefined *local_18;
  undefined8 local_10;
  
  while (&local_38 <= *(undefined8 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  c_00.data = unaff_RBX;
  c_00.tab = (runtime_itab *)c_spill;
  context_contextName(c_00);
  local_70 = local_a8;
  local_80 = local_a0;
  t.ext = (c_spill->deadline).wall;
  t.wall = (uint64)c_spill;
  t.loc = (time_Location *)(c_spill->deadline).ext;
  time_Time_String(t);
  local_78 = local_a0;
  local_88 = local_98;
  ptVar1 = (c_spill->deadline).loc;
  t_00.ext = (c_spill->deadline).ext;
  t_00.wall = local_a0;
  t_00.loc = local_98;
  time_Until(t_00);
  sVar3 = time_Duration_String(local_a0);
  a.array = sVar3.len;
  pptVar2 = &local_88;
  local_28 = FUN_0051a18b();
  local_68[0] = local_70[0];
  local_68[1] = local_70[1];
  local_68[2] = local_70[2];
  local_68[3] = local_70[3];
  local_68[4] = local_70[4];
  local_68[5] = local_70[5];
  local_68[6] = local_70[6];
  local_68[7] = local_70[7];
  local_60 = local_80;
  local_58 = &DAT_002964ef;
  local_50[0] = 0xe;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0;
  local_50[7] = 0;
  local_48 = local_78;
  local_40 = local_88;
  local_38 = 0x287773;
  local_30 = 2;
  local_18 = &DAT_00287835;
  local_10 = 2;
  a.len = (int)ptVar1;
  a.cap = (int)pptVar2;
  local_20 = ptVar1;
  sVar3 = runtime_concatstrings((runtime_tmpBuf *)local_68,a);
  sVar3.str = (uint8 *)local_98;
  return sVar3;
}


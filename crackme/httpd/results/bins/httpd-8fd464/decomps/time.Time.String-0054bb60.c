
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.Time.String(time.Time t, string ~r0) */

string time_Time_String(time_Time t)

{
  ulong uVar1;
  runtime__type *prVar2;
  uint8 *puVar3;
  uint8 *x;
  long lVar5;
  int in_RSI;
  uint8 *width;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string sVar6;
  string sVar7;
  string a1;
  time_Time t_00;
  __uint8 b;
  __uint8 _Var8;
  string a0;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  long in_stack_00000008;
  uint64 m2;
  uint8 *local_58;
  runtime__type *local_50;
  undefined1 *local_48;
  __uint8 b_00;
  int iVar4;
  
  t_00.ext = t.ext;
                    /* Unresolved local var: string s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sVar6.len = in_RSI;
  sVar6.str = in_RDI;
  t_00.wall = in_stack_00000008;
  t_00.loc = (time_Location *)m2;
  sVar6 = time_Time_Format(t_00,sVar6);
  iVar4 = sVar6.len;
                    /* Unresolved local var: uint8 sign@[???]
                       Unresolved local var: uint64 m1@[???]
                       Unresolved local var: int wid@[???]
                       Unresolved local var: []uint8 buf@[???] */
  if (in_stack_00000008 < 0) {
    if ((long)m2 < 0) {
      m2 = -m2;
      x = &DAT_0000002d;
    }
    else {
      x = &DAT_0000002b;
    }
    old.len = (int)local_50;
    old.array = x;
    old.cap = (int)in_RDI;
    runtime_growslice((runtime__type *)&DAT_00225720,old,in_RSI);
    local_58[0] = 0x20;
    local_58[1] = 0x6d;
    local_58[2] = 0x3d;
    old_00.array = m2 + ((m2 >> 1) / 500000000) * -1000000000;
    uVar1 = (m2 >> 1) / 1000000000;
    if (local_48 < &DAT_00000004) {
      old_00.len = (int)local_48;
      old_00.cap = uVar1;
      runtime_growslice((runtime__type *)&DAT_00225720,old_00,(int)local_58);
      prVar2 = (runtime__type *)((long)&local_50->size + 1);
    }
    else {
      prVar2 = (runtime__type *)&DAT_00000004;
    }
    local_58[3] = (uint8)x;
    lVar5 = old_00.array;
    if (uVar1 / 500000000 != 0) {
      _Var8.len = old_00.array;
      _Var8.array = (uint8 *)prVar2;
      _Var8.cap = (int)local_48;
      _Var8 = time_appendInt(_Var8,(int)x,(int)local_58);
      prVar2 = local_50;
      lVar5 = _Var8.len;
    }
    b.len = lVar5;
    b.array = (uint8 *)prVar2;
    b.cap = (int)local_48;
    width = local_58;
    time_appendInt(b,(int)x,(int)local_58);
    if (local_48 < (undefined1 *)((long)&local_50->size + 1)) {
      width = &DAT_00225720;
      old_01.len = (int)local_48;
      old_01.array = local_58;
      old_01.cap = (int)x;
      runtime_growslice(local_50,old_01,0x225720);
    }
    local_58[(long)local_50] = 0x2e;
    b_00.len = (int)local_58;
    b_00.array = (uint8 *)old_00.array;
    b_00.cap = (int)local_48;
    _Var8 = time_appendInt(b_00,(int)x,(int)width);
    puVar3 = local_58;
    sVar6 = runtime_slicebytetostring((runtime_tmpBuf *)local_50,(uint8 *)_Var8.len,(int)local_58);
    a0.str = (uint8 *)sVar6.len;
    a1.len = (int)width;
    a1.str = x;
    a0.len = (int)puVar3;
    sVar6 = runtime_concatstring2((runtime_tmpBuf *)local_50,a0,a1);
    iVar4 = sVar6.len;
  }
  sVar7.len = iVar4;
  sVar7.str = local_58;
  return sVar7;
}


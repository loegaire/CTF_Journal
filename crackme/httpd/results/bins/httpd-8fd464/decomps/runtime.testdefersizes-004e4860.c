
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_testdefersizes(void)

{
  long lVar1;
  ulong v;
  ulong v_00;
  ulong uVar2;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  int local_1c [5];
  
                    /* Unresolved local var: int32[5] m@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_1c[4] = 0;
                    /* Unresolved local var: int i@[???] */
  for (lVar1 = 0; lVar1 < 5; lVar1 = lVar1 + 1) {
    local_1c[lVar1] = -1;
  }
  v = 0;
  do {
    if (v < 9) {
      v_00 = 0;
                    /* Unresolved local var: uintptr defersc@[???]
                       Unresolved local var: uintptr siz@[???]
                       Unresolved local var: uintptr ~R0@[???] */
    }
    else {
      v_00 = v + 7 >> 4;
    }
    if (4 < v_00) {
      return;
    }
    if (v < 9) {
      uVar2 = 0x50;
    }
    else {
      uVar2 = v + 0x48;
    }
    if (uVar2 < 0x8000) {
      if (uVar2 < 0x3f9) {
        uVar2 = uVar2 + 7 >> 3;
        if (0x80 < uVar2) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndexU();
        }
        if (0x43 < (ulong)runtime_size_to_class8[uVar2]) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        uVar2 = (ulong)runtime_class_to_size[runtime_size_to_class8[uVar2]];
      }
      else {
        uVar2 = uVar2 - 0x381 >> 7;
        if (0xf8 < uVar2) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndexU();
        }
        if (0x43 < (ulong)runtime_size_to_class128[uVar2]) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        uVar2 = (ulong)runtime_class_to_size[runtime_size_to_class128[uVar2]];
      }
    }
    else if (uVar2 <= uVar2 + 0x2000) {
      uVar2 = uVar2 + 0x1fff & 0xffffffffffffe000;
    }
    if (local_1c[v_00] < 0) {
      local_1c[v_00] = (int)uVar2;
    }
    else if ((int)uVar2 != local_1c[v_00]) {
      runtime_printlock();
      s.len = uVar2;
      s.str = &DAT_0029e55f;
      runtime_printstring(s);
      runtime_printuint(v);
      s_00.len = uVar2;
      s_00.str = &DAT_0028890d;
      runtime_printstring(s_00);
      runtime_printuint(uVar2);
      s_01.len = uVar2;
      s_01.str = &DAT_0028d1bd;
      runtime_printstring(s_01);
      runtime_printuint(v_00);
      runtime_printnl();
      runtime_printunlock();
      s_02.len = uVar2;
      s_02.str = &DAT_0029be7e;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_02);
    }
                    /* Unresolved local var: uintptr i@[???] */
    v = v + 1;
  } while( true );
}


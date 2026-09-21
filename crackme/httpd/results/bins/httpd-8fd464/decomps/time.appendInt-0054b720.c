
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.appendInt([]uint8 b, int x, int width, []uint8 ~r3) */

__uint8 time_appendInt(__uint8 b,int x,int width)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  __uint8 _Var6;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  __uint8 b_spill;
  uint u;
  int width_spill;
  runtime__type *local_70;
  long local_68;
  ulong local_60;
  char acStack_25 [13];
  undefined8 uStack_18;
  char *local_10;
  
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint8[20] buf@[???] */
  while (&uStack_18 <= *(undefined8 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((long)u < 0) {
    uVar3 = b_spill.len + 1;
    if ((ulong)b_spill.cap < uVar3) {
      old.len = (int)b_spill.array;
      old.array = (void *)b_spill.len;
      old.cap = b_spill.cap;
      runtime_growslice((runtime__type *)&DAT_00225720,old,uVar3);
      uVar3 = local_68 + 1;
      b_spill.array = (uint8 *)local_70;
      b_spill.cap = local_60;
    }
    *(undefined1 *)((long)&((runtime__type *)b_spill.array)->size + b_spill.len) = 0x2d;
    u = -u;
    b_spill.len = uVar3;
  }
  acStack_25[1] = '\0';
  acStack_25[2] = '\0';
  acStack_25[3] = '\0';
  acStack_25[4] = '\0';
  acStack_25[5] = '\0';
  acStack_25[6] = '\0';
  acStack_25[7] = '\0';
  acStack_25[8] = '\0';
  acStack_25[9] = '\0';
  acStack_25[10] = '\0';
  acStack_25[0xb] = '\0';
  acStack_25[0xc] = '\0';
  uStack_18 = 0;
  uVar3 = 0x14;
  while( true ) {
    cVar2 = (char)u;
    if (u < 10) {
      uVar1 = uVar3 - 1;
      if (0x13 < uVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      acStack_25[uVar3] = cVar2 + '0';
                    /* Unresolved local var: int w@[???] */
      for (lVar4 = -(uVar3 - 0x15); lVar4 < width_spill; lVar4 = lVar4 + 1) {
        uVar5 = b_spill.len + 1;
        if ((ulong)b_spill.cap < uVar5) {
          old_00.len = (int)&DAT_00225720;
          old_00.array = (void *)uVar1;
          old_00.cap = b_spill.cap;
          runtime_growslice((runtime__type *)b_spill.array,old_00,b_spill.len);
          uVar5 = local_68 + 1;
          b_spill.array = (uint8 *)local_70;
          b_spill.cap = local_60;
        }
        *(undefined1 *)((long)&((runtime__type *)b_spill.array)->size + b_spill.len) = 0x30;
        b_spill.len = uVar5;
      }
      uVar5 = (b_spill.len - uVar3) + 0x15;
      local_10 = acStack_25 + (uVar1 & (long)(uVar3 - 0x15) >> 0x3f) + 1;
      if ((ulong)b_spill.cap < uVar5) {
        old_01.len = uVar5;
        old_01.array = &DAT_00225720;
        old_01.cap = b_spill.cap;
        runtime_growslice((runtime__type *)b_spill.array,old_01,b_spill.len - uVar3);
        b_spill.array = (uint8 *)local_70;
        b_spill.cap = local_60;
      }
      lVar4 = (long)&((runtime__type *)b_spill.array)->size + b_spill.len;
      runtime_memmove();
      _Var6.len = (int)local_10;
      _Var6.array = (uint8 *)b_spill.cap;
      _Var6.cap = lVar4;
      return _Var6;
    }
    u = u / 10;
    if (0x13 < uVar3 - 1) break;
    acStack_25[uVar3] = cVar2 + (char)u * -10 + '0';
    uVar3 = uVar3 - 1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}


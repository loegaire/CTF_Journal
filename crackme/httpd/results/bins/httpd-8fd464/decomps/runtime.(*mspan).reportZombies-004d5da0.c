
/* WARNING: Unknown calling convention */

void runtime___mspan__reportZombies(runtime_mspan *s)

{
  uint64 v;
  ulong uVar1;
  ulong uVar2;
  uint64 uVar3;
  ulong unaff_RBX;
  long in_FS_OFFSET;
  bool bVar4;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  string s_08;
  string s_09;
  runtime_mspan *s_spill;
  byte *local_38;
  byte local_30;
  byte *local_20;
  byte local_18;
  
                    /* Unresolved local var: runtime.markBits mbits@[???]
                       Unresolved local var: runtime.markBits abits@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_printlock();
  uVar3 = s_spill->elemsize;
  v = s_spill->freeindex;
  runtime_printlock();
  s_00.len = unaff_RBX;
  s_00.str = &DAT_002a4de9;
  runtime_printstring(s_00);
  runtime_printuintptr((uintptr)s_spill);
  s_01.len = unaff_RBX;
  s_01.str = &DAT_0029098a;
  runtime_printstring(s_01);
  runtime_printuint(uVar3);
  s_02.len = unaff_RBX;
  s_02.str = &DAT_00290906;
  runtime_printstring(s_02);
  runtime_printuint(v);
  s_03.len = unaff_RBX;
  s_03.str = &DAT_002a8150;
  runtime_printstring(s_03);
  runtime_printunlock();
  local_38 = s_spill->gcmarkBits;
  local_30 = 1;
  local_20 = s_spill->allocBits;
  local_18 = 1;
                    /* Unresolved local var: uintptr i@[???] */
  for (uVar1 = 0; uVar1 < s_spill->nelems; uVar1 = uVar1 + 1) {
                    /* Unresolved local var: uintptr addr@[???]
                       Unresolved local var: bool alloc@[???]
                       Unresolved local var: bool zombie@[???] */
    uVar3 = s_spill->elemsize * uVar1 + s_spill->startAddr;
    runtime_printlock();
    runtime_printhex(uVar3);
    runtime_printunlock();
    if (uVar1 < s_spill->freeindex) {
      bVar4 = true;
    }
    else {
      unaff_RBX = (ulong)local_18;
      bVar4 = (*local_20 & local_18) != 0;
    }
    if (bVar4) {
      runtime_printlock();
      s_04.len = unaff_RBX;
      s_04.str = &DAT_002893b4;
      runtime_printstring(s_04);
      runtime_printunlock();
    }
    else {
      runtime_printlock();
      s_05.len = unaff_RBX;
      s_05.str = &DAT_002893d2;
      runtime_printstring(s_05);
      runtime_printunlock();
    }
    if ((*local_38 & local_30) == 0) {
      runtime_printlock();
      s_07.len = unaff_RBX;
      s_07.str = &DAT_0028d23b;
      runtime_printstring(s_07);
      runtime_printunlock();
    }
    else {
      runtime_printlock();
      s_06.len = unaff_RBX;
      s_06.str = &DAT_0028d1ea;
      runtime_printstring(s_06);
      runtime_printunlock();
    }
    if ((*local_38 & local_30) == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = (bool)(bVar4 ^ 1);
    }
    if (bVar4) {
      runtime_printlock();
      s_08.len = unaff_RBX;
      s_08.str = &DAT_0028a400;
      runtime_printstring(s_08);
      runtime_printunlock();
    }
    runtime_printlock();
    runtime_printnl();
    runtime_printunlock();
    if (bVar4) {
                    /* Unresolved local var: uintptr length@[???] */
      uVar2 = s_spill->elemsize;
      unaff_RBX = 0x400;
      if (0x400 < uVar2) {
        uVar2 = 0x400;
      }
      runtime_hexdumpWords((uintptr)s_spill,0x400,(func_uintptr__uint8 **)(uVar2 + uVar3));
    }
    if (local_30 == 0x80) {
      local_38 = local_38 + 1;
      local_30 = 1;
    }
    else {
      local_30 = local_30 << 1;
    }
    if (local_18 == 0x80) {
      local_20 = local_20 + 1;
      local_18 = 1;
    }
    else {
      local_18 = local_18 << 1;
    }
  }
  s_09.len = unaff_RBX;
  s_09.str = (uint8 *)0x2a04b4;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_09);
}



/* WARNING: Unknown calling convention */

void runtime_goroutineheader(runtime_g *gp)

{
  byte bVar1;
  uint uVar2;
  int64 v;
  long lVar3;
  uint uVar4;
  long v_00;
  uint8 *puVar5;
  uint8 *puVar6;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  runtime_g *gp_spill;
  long local_40;
  
                    /* Unresolved local var: uint32 gpstatus@[???]
                       Unresolved local var: int64 waitfor@[???]
                       Unresolved local var: string status@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar2 = gp_spill->atomicstatus;
  uVar4 = uVar2 & 0xffffefff;
  if (uVar4 < 10) {
    puVar5 = (uint8 *)runtime_gStatusStrings[uVar4].len;
  }
  else {
    puVar5 = (uint8 *)0x3;
  }
  if (uVar4 == 4) {
    bVar1 = gp_spill->waitreason;
    if (bVar1 != 0) {
      if (bVar1 < 0x1b) {
        puVar5 = (uint8 *)runtime_waitReasonStrings[bVar1].len;
      }
      else {
        puVar5 = (uint8 *)0x13;
      }
    }
  }
  if (((uVar4 == 4) || (uVar4 == 3)) && (gp_spill->waitsince != 0)) {
    runtime_nanotime1();
    lVar3 = local_40 - gp_spill->waitsince;
    v_00 = lVar3 / 60000000000;
    puVar6 = (uint8 *)(lVar3 >> 0x3f);
  }
  else {
    v_00 = 0;
    puVar6 = puVar5;
  }
  v = gp_spill->goid;
  runtime_printlock();
  s.len = (int)puVar6;
  s.str = &DAT_0028f886;
  runtime_printstring(s);
  runtime_printint(v);
  s_00.len = (int)puVar6;
  s_00.str = (uint8 *)((long)&DAT_0028776c + 7);
  runtime_printstring(s_00);
  s_01.len = (int)puVar6;
  s_01.str = puVar5;
  runtime_printstring(s_01);
  runtime_printunlock();
  if ((uVar2 >> 0xc & 1) != 0) {
    runtime_printlock();
    s_02.len = (int)puVar6;
    s_02.str = &DAT_0028a3b3;
    runtime_printstring(s_02);
    runtime_printunlock();
  }
  if (0 < v_00) {
    runtime_printlock();
    s_03.len = (int)puVar6;
    s_03.str = &DAT_00287787;
    runtime_printstring(s_03);
    runtime_printint(v_00);
    s_04.len = (int)puVar6;
    s_04.str = &DAT_0028b882;
    runtime_printstring(s_04);
    runtime_printunlock();
  }
  if (gp_spill->lockedm != 0) {
    runtime_printlock();
    s_05.len = (int)puVar6;
    s_05.str = &DAT_0029a4d6;
    runtime_printstring(s_05);
    runtime_printunlock();
  }
  runtime_printlock();
  s_06.len = (int)puVar6;
  s_06.str = &DAT_002879ea;
  runtime_printstring(s_06);
  runtime_printunlock();
  return;
}


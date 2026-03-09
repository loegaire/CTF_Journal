
/* WARNING: Unknown calling convention */

void runtime_printArgs(runtime_funcInfo f,void *argp)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  uint8 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  runtime_funcInfo f_spill;
  void *argp_spill;
  code *local_18 [2];
  
                    /* Unresolved local var: uint8[171] * p@[???]
                       Unresolved local var: func(uint8,_uint8) * * print1@[???]
                       Unresolved local var: int pi@[???]
                       Unresolved local var: bool start@[???]
                       Unresolved local var: void * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: void * p@[???] */
  if ((f_spill._func)->nfuncdata < 6) {
    lVar5 = 0;
  }
  else {
    uVar2 = (f_spill._func)->npcdata;
    puVar6 = (f_spill._func)->_ + (ulong)uVar2 * 4 + 2;
    if (((uint)puVar6 >> 2 & 1) != 0) {
      if (((uint)f_spill._func >> 2 & 1) != 0) {
        runtime_printlock();
        s.len = (int)f_spill._func;
        s.str = &DAT_0029ee6b;
        runtime_printstring(s);
        runtime_printpointer(f_spill._func);
        runtime_printnl();
        runtime_printunlock();
      }
      puVar6 = f_spill._func[1]._ + (ulong)uVar2 * 4 + -0x2a;
    }
    lVar5 = *(long *)(puVar6 + 0x28);
  }
  if (lVar5 == 0) {
    return;
  }
  local_18[0] = runtime_printArgs_func1;
  bVar3 = true;
  uVar4 = 0;
  do {
    while( true ) {
      if (0xaa < uVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      bVar1 = *(byte *)(lVar5 + uVar4);
      uVar7 = uVar4 + 1;
      if (0xfc < bVar1) break;
      if (bVar1 == 0xfb) {
        if (!bVar3) {
          runtime_printlock();
          s_00.len = lVar5;
          s_00.str = &DAT_00287787;
          runtime_printstring(s_00);
          runtime_printunlock();
        }
        runtime_printlock();
        s_01.len = lVar5;
        s_01.str = (uint8 *)&github_com_google_gopacket_layers__stmp_23;
        runtime_printstring(s_01);
        runtime_printunlock();
      }
      else if (bVar1 == 0xfc) {
        if (!bVar3) {
          runtime_printlock();
          s_02.len = lVar5;
          s_02.str = &DAT_00287787;
          runtime_printstring(s_02);
          runtime_printunlock();
        }
        runtime_printlock();
        s_03.len = lVar5;
        s_03.str = &DAT_00287894;
        runtime_printstring(s_03);
        runtime_printunlock();
      }
      else {
LAB_0050d45e:
                    /* Unresolved local var: uint8 sz@[???] */
        if (!bVar3) {
          runtime_printlock();
          s_06.len = lVar5;
          s_06.str = &DAT_00287787;
          runtime_printstring(s_06);
          runtime_printunlock();
        }
        if (0xaa < uVar7) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        (*local_18[0])(local_18[0],bVar1,local_18);
        uVar7 = uVar4 + 2;
      }
LAB_0050d4fc:
      bVar3 = false;
      uVar4 = uVar7;
    }
    if (bVar1 == 0xfd) {
      runtime_printlock();
      s_07.len = lVar5;
      s_07.str = (uint8 *)&DAT_0028776c;
      runtime_printstring(s_07);
      runtime_printunlock();
      goto LAB_0050d4fc;
    }
    if (bVar1 != 0xfe) {
      if (bVar1 == 0xff) {
        return;
      }
      goto LAB_0050d45e;
    }
    if (!bVar3) {
      runtime_printlock();
      s_04.len = lVar5;
      s_04.str = &DAT_00287787;
      runtime_printstring(s_04);
      runtime_printunlock();
    }
    runtime_printlock();
    s_05.len = lVar5;
    s_05.str = (uint8 *)((long)&DAT_00287764 + 6);
    runtime_printstring(s_05);
    runtime_printunlock();
    bVar3 = true;
    uVar4 = uVar7;
  } while( true );
}


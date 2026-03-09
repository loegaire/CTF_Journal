
/* WARNING: Unknown calling convention */

void runtime_casfrom_Gscanstatus(runtime_g *gp,uint32 oldval,uint32 newval)

{
  uint uVar1;
  void *pvVar2;
  int64 iVar3;
  int64 iVar4;
  undefined4 unaff_0000001c;
  long in_FS_OFFSET;
  bool bVar5;
  string s;
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
  string s_10;
  string s_11;
  string s_12;
  string s_13;
  string s_14;
  string s_15;
  string s_16;
  string s_17;
  string s_18;
  runtime_g *gp_spill;
  uint32 oldval_spill;
  uint32 newval_spill;
  
  s_09.len = (runtime_g *)CONCAT44(unaff_0000001c,oldval);
                    /* Unresolved local var: bool success@[???]
                       Unresolved local var: uint32 ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((3 < oldval_spill - 0x1001) && (oldval_spill != 0x1009)) {
    runtime_printlock();
    s_09.str = &DAT_002a77fe;
    runtime_printstring(s_09);
    runtime_printpointer(gp_spill);
    s_10.len = (int)s_09.len;
    s_10.str = &DAT_0028d283;
    runtime_printstring(s_10);
    runtime_printhex((ulong)oldval_spill);
    s_11.len = (int)s_09.len;
    s_11.str = &DAT_0028d27a;
    runtime_printstring(s_11);
    runtime_printhex((ulong)newval_spill);
    runtime_printnl();
    runtime_printunlock();
                    /* Unresolved local var: runtime.g * _g_@[???] */
    pvVar2 = *(void **)(in_FS_OFFSET + -8);
    uVar1 = gp_spill->atomicstatus;
    iVar3 = gp_spill->goid;
    runtime_printlock();
    s_12.len = iVar3;
    s_12.str = &DAT_00299ad5;
    runtime_printstring(s_12);
    runtime_printpointer(gp_spill);
    s_13.len = iVar3;
    s_13.str = &DAT_0028a40e;
    runtime_printstring(s_13);
    runtime_printint(iVar3);
    s_14.len = iVar3;
    s_14.str = &DAT_0029ae57;
    runtime_printstring(s_14);
    runtime_printuint((ulong)uVar1);
    runtime_printnl();
    runtime_printunlock();
    uVar1 = *(uint *)((long)pvVar2 + 0x90);
    iVar4 = *(int64 *)((long)pvVar2 + 0x98);
    runtime_printlock();
    s_15.len = iVar3;
    s_15.str = &DAT_00299aa5;
    runtime_printstring(s_15);
    runtime_printpointer(pvVar2);
    s_16.len = iVar3;
    s_16.str = &DAT_0028a40e;
    runtime_printstring(s_16);
    runtime_printint(iVar4);
    s_17.len = iVar3;
    s_17.str = &DAT_0029ae44;
    runtime_printstring(s_17);
    runtime_printuint((ulong)uVar1);
    runtime_printnl();
    runtime_printunlock();
    s_18.len = iVar3;
    s_18.str = &DAT_002aa4ca;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_18);
  }
  if (newval_spill == (oldval_spill & 0xffffefff)) {
    LOCK();
    bVar5 = oldval_spill == gp_spill->atomicstatus;
    if (bVar5) {
      gp_spill->atomicstatus = newval_spill;
    }
    UNLOCK();
    s_09.len = gp_spill;
    if (bVar5) {
      return;
    }
  }
  runtime_printlock();
  s.len = (int)s_09.len;
  s.str = &DAT_002a6043;
  runtime_printstring(s);
  runtime_printpointer(gp_spill);
  s_00.len = (int)s_09.len;
  s_00.str = &DAT_0028d283;
  runtime_printstring(s_00);
  runtime_printhex((ulong)oldval_spill);
  s_01.len = (int)s_09.len;
  s_01.str = &DAT_0028d27a;
  runtime_printstring(s_01);
  runtime_printhex((ulong)newval_spill);
  runtime_printnl();
  runtime_printunlock();
                    /* Unresolved local var: runtime.g * _g_@[???] */
  pvVar2 = *(void **)(in_FS_OFFSET + -8);
  uVar1 = gp_spill->atomicstatus;
  iVar3 = gp_spill->goid;
  runtime_printlock();
  s_02.len = iVar3;
  s_02.str = &DAT_00299ad5;
  runtime_printstring(s_02);
  runtime_printpointer(gp_spill);
  s_03.len = iVar3;
  s_03.str = &DAT_0028a40e;
  runtime_printstring(s_03);
  runtime_printint(iVar3);
  s_04.len = iVar3;
  s_04.str = &DAT_0029ae57;
  runtime_printstring(s_04);
  runtime_printuint((ulong)uVar1);
  runtime_printnl();
  runtime_printunlock();
  uVar1 = *(uint *)((long)pvVar2 + 0x90);
  iVar4 = *(int64 *)((long)pvVar2 + 0x98);
  runtime_printlock();
  s_05.len = iVar3;
  s_05.str = &DAT_00299aa5;
  runtime_printstring(s_05);
  runtime_printpointer(pvVar2);
  s_06.len = iVar3;
  s_06.str = &DAT_0028a40e;
  runtime_printstring(s_06);
  runtime_printint(iVar4);
  s_07.len = iVar3;
  s_07.str = &DAT_0029ae44;
  runtime_printstring(s_07);
  runtime_printuint((ulong)uVar1);
  runtime_printnl();
  runtime_printunlock();
  s_08.len = iVar3;
  s_08.str = &DAT_002a9b33;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_08);
}


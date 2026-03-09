
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.netpoll(int64 delay, runtime.gList ~r1) */

runtime_gList runtime_netpoll(int64 delay)

{
  ushort uVar1;
  runtime_guintptr extraout_RAX;
  long lVar2;
  runtime_pollDesc *pd;
  long unaff_RBX;
  int iVar3;
  uintptr *puVar4;
  long in_FS_OFFSET;
  byte bVar5;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  int64 delay_spill;
  int local_850;
  runtime_gList local_840;
  runtime_pollDesc *local_838;
  long local_830;
  long lStack_828;
  undefined8 local_820;
  undefined8 uStack_818;
  long *local_810;
  uintptr local_808;
  ushort local_800 [8];
  long alStack_7f0 [253];
  
  bVar5 = 0;
                    /* Unresolved local var: runtime.timespec * tp@[???]
                       Unresolved local var: int32 n@[???]
                       Unresolved local var: runtime.timespec ts@[???]
                       Unresolved local var: runtime.keventt[64] events@[???]
                       Unresolved local var: runtime.gList toRun@[???] */
  while (local_800 <= *(ushort **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    delay = extraout_RAX;
  }
  if (runtime_kq == -1) {
    return (runtime_gList)delay;
  }
  local_830 = 0;
  lStack_828 = 0;
  if (delay_spill < 0) {
    local_810 = (long *)0x0;
  }
  else if (delay_spill == 0) {
    local_810 = &local_830;
  }
  else {
    local_830 = delay_spill / 1000000000 + (delay_spill >> 0x3f);
    unaff_RBX = local_830 * 1000000000;
    lStack_828 = delay_spill + local_830 * -1000000000;
    if (1000000 < local_830) {
      local_830 = 1000000;
    }
    local_810 = &local_830;
  }
  puVar4 = &local_808;
  for (lVar2 = 0x100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
  }
  while( true ) {
    runtime_kevent();
    if (-1 < local_850) {
      local_840.head = 0;
                    /* Unresolved local var: int i@[???] */
      pd = (runtime_pollDesc *)0x0;
      while( true ) {
        if ((long)local_850 <= (long)pd) {
          return (runtime_gList)local_840.head;
        }
                    /* Unresolved local var: int32 mode@[???] */
        if ((runtime_pollDesc *)&DAT_0000003f < pd) break;
        local_838 = pd;
        if (runtime_netpollBreakRd == (&local_808)[(long)pd * 4]) {
          uVar1 = local_800[(long)pd * 0x10];
          if (uVar1 != 0xffff) {
            runtime_printlock();
            s.len = (int)pd;
            s.str = &DAT_002a54a4;
            runtime_printstring(s);
            runtime_printint((long)(short)uVar1);
            runtime_printnl();
            runtime_printunlock();
            s_00.len = (int)pd;
            s_00.str = &DAT_002aacde;
                    /* WARNING: Subroutine does not return */
            runtime_throw(s_00);
          }
          if (delay_spill != 0) {
                    /* Unresolved local var: uint8[16] tmp@[???] */
            local_820 = 0;
            uStack_818 = 0;
            runtime_read();
            LOCK();
            runtime_netpollWakeSig = 0;
            UNLOCK();
          }
        }
        else {
          if (local_800[(long)pd * 0x10] == 0xfffe) {
            iVar3 = 0x77;
          }
          else if (local_800[(long)pd * 0x10] == 0xffff) {
            iVar3 = 0x72;
            if ((local_800[(long)pd * 0x10 + 1] & 0x8000) != 0) {
              iVar3 = 0xe9;
            }
          }
          else {
            iVar3 = 0;
          }
          if (iVar3 != 0) {
                    /* Unresolved local var: runtime.pollDesc * pd@[???] */
            lVar2 = alStack_7f0[(long)pd * 4];
            *(undefined1 *)(lVar2 + 0x19) = 0;
            uVar1 = local_800[(long)pd * 0x10 + 1];
            if (uVar1 == 0x4000) {
              *(undefined1 *)(lVar2 + 0x19) = 1;
            }
            runtime_netpollready(&local_840,pd,(uint)uVar1);
          }
        }
        pd = (runtime_pollDesc *)((long)&local_838->link + 1);
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (local_850 != -4) break;
    if (0 < delay_spill) {
      return (runtime_gList)delay_spill;
    }
  }
  runtime_printlock();
  s_01.len = unaff_RBX;
  s_01.str = &DAT_0029d455;
  runtime_printstring(s_01);
  runtime_printint((long)runtime_kq);
  s_02.len = unaff_RBX;
  s_02.str = &DAT_002944e9;
  runtime_printstring(s_02);
  runtime_printint((long)-local_850);
  runtime_printnl();
  runtime_printunlock();
  s_03.len = unaff_RBX;
  s_03.str = &DAT_0029df64;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_03);
}



/* WARNING: Unknown calling convention */

void sync_event(int64 cycles,int skip)

{
  uint uVar1;
  long rate;
  uint64 skip_00;
  long lVar2;
  uint uVar3;
  long in_FS_OFFSET;
  int64 cycles_spill;
  int skip_spill;
  
                    /* Unresolved local var: int64 rate@[???] */
  while (skip_00 = runtime_mutexprofilerate,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (0 < (long)runtime_mutexprofilerate) {
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 s1@[???]
                       Unresolved local var: uint32 s0@[???] */
    rate = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
    uVar1 = *(uint *)(rate + 300);
    uVar3 = *(uint *)(rate + 0x128) << 0x11 ^ *(uint *)(rate + 0x128);
    uVar3 = uVar1 >> 0x10 ^ uVar3 >> 7 ^ uVar1 ^ uVar3;
    lVar2 = (long)(ulong)(uVar1 + uVar3) % (long)runtime_mutexprofilerate;
    *(uint *)(rate + 0x128) = uVar1;
    *(uint *)(rate + 300) = uVar3;
    if (lVar2 == 0) {
      runtime_saveblockevent(skip_spill + 1,rate,skip_00,(ulong)uVar1);
    }
  }
  return;
}


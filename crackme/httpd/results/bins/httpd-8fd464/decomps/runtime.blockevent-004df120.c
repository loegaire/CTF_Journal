
/* WARNING: Unknown calling convention */

void runtime_blockevent(int64 cycles,int skip)

{
  uint uVar1;
  bool bVar2;
  uint64 skip_00;
  long lVar3;
  long rate;
  uint uVar4;
  ulong in_RDI;
  long in_FS_OFFSET;
  int64 cycles_spill;
  int skip_spill;
  
                    /* Unresolved local var: int64 rate@[???] */
  while (skip_00 = runtime_blockprofilerate,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  rate = 1;
  if (cycles_spill < 1) {
    cycles_spill = 1;
  }
  if ((long)runtime_blockprofilerate < 1) {
    bVar2 = true;
  }
  else if (cycles_spill < (long)runtime_blockprofilerate) {
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 s1@[???]
                       Unresolved local var: uint32 s0@[???] */
    rate = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
    uVar1 = *(uint *)(rate + 300);
    uVar4 = *(uint *)(rate + 0x128) << 0x11 ^ *(uint *)(rate + 0x128);
    in_RDI = (ulong)uVar1;
    uVar4 = uVar1 >> 0x10 ^ uVar4 >> 7 ^ uVar1 ^ uVar4;
    lVar3 = (long)(ulong)(uVar1 + uVar4) % (long)runtime_blockprofilerate;
    *(uint *)(rate + 0x128) = uVar1;
    *(uint *)(rate + 300) = uVar4;
    bVar2 = cycles_spill < lVar3;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    runtime_saveblockevent(skip_spill + 1,rate,skip_00,in_RDI);
  }
  return;
}


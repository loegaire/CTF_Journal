
/* WARNING: Removing unreachable block (ram,0x004ff205) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.sigsend(uint32 s, bool ~r1) */

bool runtime_sigsend(uint32 s)

{
  uint uVar1;
  uint32 uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  string s_00;
  uint32 s_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (0x3f < s_spill) {
    return SUB41(s_spill,0);
  }
  LOCK();
  uVar2 = runtime_sig.delivering + 1;
  UNLOCK();
                    /* Unresolved local var: uint32 w@[???] */
  uVar3 = (ulong)(s_spill >> 5);
  if (1 < uVar3) {
    runtime_sig.delivering = uVar2;
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if ((runtime_sig.wanted[uVar3] >> (s_spill & 0x1f) & 1) == 0) {
    LOCK();
    UNLOCK();
    return SUB41(uVar2,0);
  }
  do {
    runtime_sig.delivering = uVar2;
    uVar2 = runtime_sig.delivering;
    uVar1 = runtime_sig.mask[uVar3];
    if ((uVar1 >> (s_spill & 0x1f) & 1) != 0) {
      LOCK();
      runtime_sig.delivering = runtime_sig.delivering - 1;
      UNLOCK();
      return SUB41(uVar2,0);
    }
    LOCK();
    bVar4 = uVar1 == runtime_sig.mask[uVar3];
    if (bVar4) {
      runtime_sig.mask[uVar3] = uVar1 | 1 << (s_spill & 0x1f);
    }
    UNLOCK();
    uVar2 = runtime_sig.delivering;
  } while (!bVar4);
  while( true ) {
    while (1 < runtime_sig.state) {
      if (runtime_sig.state == 2) goto LAB_004ff26c;
      if (runtime_sig.state != 3) {
        s_00.len = 0xcfa18c;
        s_00.str = (uint8 *)0x29ff63;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_00);
      }
      runtime_mDoFixupAndOSYield();
    }
    if (runtime_sig.state == 0) break;
    LOCK();
    bVar4 = runtime_sig.state == 1;
    if (bVar4) {
      runtime_sig.state = 0;
    }
    UNLOCK();
    if (bVar4) {
      runtime_notewakeup(&runtime_sig.note);
LAB_004ff26c:
      uVar2 = runtime_sig.delivering;
      LOCK();
      runtime_sig.delivering = runtime_sig.delivering - 1;
      UNLOCK();
      return SUB41(uVar2,0);
    }
  }
  LOCK();
  runtime_sig.state = 2;
  UNLOCK();
  goto LAB_004ff26c;
}


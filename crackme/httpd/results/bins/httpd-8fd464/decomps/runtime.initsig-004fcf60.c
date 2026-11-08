
/* WARNING: Unknown calling convention */

void runtime_initsig(bool preinit)

{
  uint uVar1;
  ulong uVar2;
  uint sig;
  uint32 i;
  ulong uVar3;
  bool preinit_spill;
  runtime_sigactiont local_28;
  
  if (!preinit_spill) {
    runtime_signalsOK = true;
  }
  if (((runtime_isarchive) || (runtime_islibrary)) && (!preinit_spill)) {
    return;
  }
  uVar3 = 0;
  do {
    sig = (uint)uVar3;
    if (0x20 < sig) {
      return;
    }
    uVar1 = runtime_sigtable[uVar3].flags;
    if ((uVar1 != 0) && ((uVar1 >> 4 & 1) == 0)) {
                    /* Unresolved local var: runtime.sigactiont sa@[???] */
      local_28.sa_handler = 0;
      local_28.sa_flags = 0;
      local_28.sa_mask.__bits[0] = 0;
      local_28.sa_mask.__bits[1] = 0;
      local_28.sa_mask.__bits[2] = 0;
      local_28.sa_mask.__bits[3] = 0;
      local_28._28_4_ = 0;
      runtime_sigaction(sig,(runtime_sigactiont *)(ulong)uVar1,&local_28);
      runtime_fwdSig[uVar3] = local_28.sa_handler;
      if ((sig - 1 < 2) && (runtime_fwdSig[uVar3] == 1)) {
        i = 0;
      }
      else if (((uint)runtime_sigtable[uVar3].flags >> 6 & 1) == 0) {
        if (((runtime_isarchive == false) && (runtime_islibrary == false)) ||
           ((((uint)runtime_sigtable[uVar3].flags >> 3 & 1) != 0 || (sig == 0xd)))) {
          i = 1;
        }
        else {
          i = 0;
        }
      }
      else {
        i = 0;
      }
      if ((char)i == '\0') {
        if (runtime_fwdSig[uVar3] != 0) {
          if (runtime_fwdSig[uVar3] == 1) {
                    /* Unresolved local var: uint32 i@[???] */
            uVar2 = (ulong)(sig >> 5);
            if (1 < uVar2) {
                    /* WARNING: Subroutine does not return */
              runtime_panicIndex();
            }
            LOCK();
            runtime_sig.ignored[uVar2] = 1 << ((byte)uVar3 & 0x1f) | runtime_sig.ignored[uVar2];
            UNLOCK();
          }
          else {
            runtime_setsigstack(i);
          }
        }
      }
      else {
        runtime_handlingSig[uVar3] = 1;
        runtime_setsig(0xcfa440,(uintptr)runtime_sighandler);
      }
    }
                    /* Unresolved local var: uint32 i@[???] */
    uVar3 = (ulong)(sig + 1);
  } while( true );
}


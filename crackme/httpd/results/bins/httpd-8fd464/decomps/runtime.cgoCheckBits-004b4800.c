
/* WARNING: Unknown calling convention */

void runtime_cgoCheckBits(void *src,uint8 *gcbits,uintptr off,uintptr size)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  string s;
  void *src_spill;
  uint8 *gcbits_spill;
  uintptr off_spill;
  uintptr size_spill;
  char local_40;
  
                    /* Unresolved local var: uint8 * ptrmask@[???]
                       Unresolved local var: uint32 bits@[???]
                       Unresolved local var: void * ~R0@[???] */
  uVar1 = off_spill >> 6;
  lVar2 = off_spill + uVar1 * -0x40;
  s.len = size_spill + lVar2;
  pbVar3 = gcbits_spill + uVar1;
  uVar4 = 0;
  uVar5 = 0;
                    /* Unresolved local var: uintptr i@[???] */
  do {
    if (s.len <= uVar4) {
      return;
    }
    if ((uVar4 & 0x3f) == 0) {
      uVar5 = (uint)*pbVar3;
      pbVar3 = pbVar3 + 1;
    }
    else {
      uVar5 = uVar5 >> 1;
    }
    if (lVar2 == 0) {
                    /* Unresolved local var: void * v@[???] */
      if (((uVar5 & 1) != 0) &&
         (runtime_cgoIsGoPointer((void *)(uVar1 * 0x40 + (long)src_spill)), local_40 != '\0')) {
        s.str = &DAT_002a49b1;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s);
      }
    }
    else {
      lVar2 = lVar2 + -8;
    }
    uVar4 = uVar4 + 8;
  } while( true );
}


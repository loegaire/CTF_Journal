
/* WARNING: Variable defined which should be unmapped: s_spill */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*mspan).nextFreeIndex(runtime.mspan * s, uintptr ~r0) */

uintptr runtime___mspan__nextFreeIndex(runtime_mspan *s)

{
  ulong whichByte;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  string s_00;
  runtime_mspan *s_spill;
  
                    /* Unresolved local var: uintptr sfreeindex@[???]
                       Unresolved local var: uintptr snelems@[???]
                       Unresolved local var: uint64 aCache@[???]
                       Unresolved local var: int bitIndex@[???]
                       Unresolved local var: uintptr result@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar2 = s_spill->freeindex;
  whichByte = s_spill->nelems;
  if (whichByte == uVar2) {
    return (uintptr)s_spill;
  }
  if (whichByte < uVar2) {
    s_00.len = whichByte;
    s_00.str = &DAT_0029d4ad;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  uVar1 = s_spill->allocCache;
  lVar3 = 0;
  if (uVar1 != 0) {
    for (; (uVar1 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
    }
  }
  if (uVar1 == 0) {
    lVar3 = 0x40;
  }
  while( true ) {
    if (lVar3 != 0x40) {
      if (whichByte <= uVar2 + lVar3) {
        s_spill->freeindex = whichByte;
        return (uintptr)s_spill;
      }
      s_spill->allocCache =
           s_spill->allocCache >> ((byte)(lVar3 + 1U) & 0x3f) & -(ulong)(lVar3 + 1U < 0x40);
      uVar2 = uVar2 + lVar3 + 1;
      if (((uVar2 & 0x3f) == 0) && (whichByte != uVar2)) {
        runtime___mspan__refillAllocCache(s_spill,whichByte);
      }
      s_spill->freeindex = uVar2;
      return (uintptr)s_spill;
    }
    uVar2 = uVar2 + 0x40 & 0xffffffffffffffc0;
    if (whichByte <= uVar2) break;
    runtime___mspan__refillAllocCache(s_spill,whichByte);
    uVar1 = s_spill->allocCache;
    lVar3 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
      }
    }
    if (uVar1 == 0) {
      lVar3 = 0x40;
    }
  }
  s_spill->freeindex = whichByte;
  return (uintptr)s_spill;
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pageBits).popcntRange(runtime.pageBits * b, uint i, uint
   n, uint s) */

uint runtime___pageBits__popcntRange(runtime_pageBits *b,uint i,uint n)

{
  uint64 x;
  uint64 x_00;
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  long in_FS_OFFSET;
  runtime_pageBits *b_spill;
  uint i_spill;
  uint n_spill;
  uint local_30;
  
                    /* Unresolved local var: uint j@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  bVar2 = (byte)i_spill;
  if (n_spill == 1) {
    if (7 < i_spill >> 6) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    return (*b_spill)[i_spill >> 6] >> (bVar2 & 0x3f) & 1;
  }
  x = i_spill >> 6;
  if (7 < x) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndexU();
  }
  uVar1 = (n_spill + i_spill) - 1;
  uVar4 = uVar1 >> 6;
  if (uVar4 == x) {
    if (runtime_x86HasPOPCNT == false) {
      runtime_internal_sys_OnesCount64(0);
    }
    else {
      local_30 = POPCOUNT((-(ulong)(n_spill < 0x40) & 1L << ((byte)n_spill & 0x3f)) - 1 &
                          (*b_spill)[x] >> (bVar2 & 0x3f));
    }
    return local_30;
  }
  if (7 < uVar4) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndexU();
  }
  if (runtime_x86HasPOPCNT == false) {
    runtime_internal_sys_OnesCount64(x);
                    /* Unresolved local var: uint k@[???] */
    uVar3 = local_30;
    cVar5 = runtime_x86HasPOPCNT;
  }
  else {
    uVar3 = POPCOUNT((*b_spill)[x] >> (bVar2 & 0x3f));
    cVar5 = runtime_x86HasPOPCNT;
  }
  while (x_00 = x + 1, x_00 < uVar4) {
    if (cVar5 == '\0') {
      runtime_internal_sys_OnesCount64(x_00);
      uVar6 = local_30;
      cVar5 = runtime_x86HasPOPCNT;
    }
    else {
      uVar6 = POPCOUNT((*b_spill)[x + 1]);
    }
    uVar3 = uVar3 + uVar6;
    x = x_00;
  }
  uVar1 = (uVar1 & 0x3f) + 1;
  uVar1 = (1L << ((byte)uVar1 & 0x3f) & -(ulong)(uVar1 < 0x40)) - 1 & (*b_spill)[uVar4];
  if (cVar5 == '\0') {
    runtime_internal_sys_OnesCount64(uVar1);
  }
  else {
    local_30 = POPCOUNT(uVar1);
  }
  return local_30 + uVar3;
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*addrRanges).removeLast(runtime.addrRanges * a, uintptr
   nBytes, runtime.addrRange ~r1) */

runtime_addrRange runtime___addrRanges__removeLast(runtime_addrRanges *a,uintptr nBytes)

{
  runtime_addrRange *prVar1;
  long lVar2;
  runtime_offAddr rVar3;
  uintptr uVar4;
  runtime_offAddr rVar5;
  ulong uVar6;
  runtime_addrRange rVar7;
  runtime_addrRange rVar8;
  runtime_addrRange rVar9;
  runtime_addrRanges *a_spill;
  uintptr nBytes_spill;
  
                    /* Unresolved local var: uintptr size@[???] */
  prVar1 = (a_spill->ranges).array;
  lVar2 = (a_spill->ranges).len;
  if (lVar2 == 0) {
    rVar9.limit.a = nBytes;
    rVar9.base.a = (uintptr)a_spill;
    return rVar9;
  }
  rVar5.a = lVar2 - 1;
  rVar3.a = prVar1[rVar5.a].limit.a;
  uVar4 = prVar1[rVar5.a].base.a;
  if (uVar4 + 0x800000000000 < rVar3.a + 0x800000000000) {
    uVar6 = rVar3.a - uVar4;
  }
  else {
    uVar6 = 0;
  }
  if (nBytes_spill < uVar6) {
    prVar1[rVar5.a].limit.a = rVar3.a - nBytes_spill;
    a_spill->totalBytes = a_spill->totalBytes - nBytes_spill;
    rVar7.limit.a = rVar3.a;
    rVar7.base.a = (uintptr)a_spill;
    return rVar7;
  }
  (a_spill->ranges).len = rVar5.a;
  a_spill->totalBytes = a_spill->totalBytes - uVar6;
  rVar8.limit.a = rVar5.a;
  rVar8.base.a = (uintptr)a_spill;
  return rVar8;
}


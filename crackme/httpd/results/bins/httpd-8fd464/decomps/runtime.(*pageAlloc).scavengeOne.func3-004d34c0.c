
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pageAlloc).scavengeOne.func3(runtime.addrRange work,
   runtime.chunkIdx ~r1, bool ~r2) */

multireturn_runtime_chunkIdx_bool_ runtime___pageAlloc__scavengeOne_func3(runtime_addrRange work)

{
  ulong min;
  long lVar1;
  bool bVar2;
  runtime_offAddr m;
  undefined7 extraout_var;
  long in_RDX;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  multireturn_runtime_chunkIdx_bool_ mVar5;
  multireturn_runtime_chunkIdx_bool_ mVar6;
  undefined1 auVar7 [16];
  runtime_addrRange work_spill;
  undefined1 local_28;
  
  m = work.base.a;
                    /* Unresolved local var: runtime.pageAlloc * p@[???]
                       Unresolved local var: uintptr minPages@[DW_OP_reg3(RBX)] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    auVar7 = runtime_morestack();
    in_RDX = auVar7._8_8_;
    m.a = auVar7._0_8_;
  }
  min = *(ulong *)(in_RDX + 0x10);
  lVar1 = *(long *)(in_RDX + 8);
  uVar3 = work_spill.limit.a + 0x7fffffffffff >> 0x16;
                    /* Unresolved local var: runtime.chunkIdx i@[???] */
  while( true ) {
    mVar5.~r2 = SUB81(min,0);
    if (uVar3 < work_spill.base.a + 0x800000000000 >> 0x16) {
      mVar6.~r2 = mVar5.~r2;
      mVar6.~r1 = m.a;
      return mVar6;
    }
                    /* Unresolved local var: runtime.pallocData[8192] * l2@[???] */
    if (*(ulong *)(lVar1 + 0x68) <= uVar3) break;
    uVar4 = *(ulong *)(*(long *)(lVar1 + 0x60) + uVar3 * 8);
    if ((long)uVar4 < 0) {
      uVar4 = 0x200000;
    }
    else {
      uVar4 = uVar4 >> 0x15 & 0x1fffff;
    }
    if (min <= uVar4) {
      m.a = uVar3 >> 0xd;
      if ((runtime_pallocData *)0x1fff < m.a) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      if (*(long *)(lVar1 + m.a * 8 + 0x78) != 0) {
        bVar2 = runtime___pallocData__hasScavengeCandidate((runtime_pallocData *)m.a,min);
        m.a = CONCAT71(extraout_var,bVar2);
        if (local_28 != '\0') {
          mVar5.~r1 = uVar3;
          return mVar5;
        }
      }
    }
    uVar3 = uVar3 - 1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndexU();
}


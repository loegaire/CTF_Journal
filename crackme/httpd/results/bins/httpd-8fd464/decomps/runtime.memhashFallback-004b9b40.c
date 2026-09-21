
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.memhashFallback(void * p, uintptr seed, uintptr s, uintptr
   ~r3) */

uintptr runtime_memhashFallback(void *p,uintptr seed,uintptr s)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  ulong uVar14;
  uint8 auVar15 [8];
  uint8 auVar16 [8];
  ulong uVar17;
  ulong uVar18;
  uint8 (*q) [8];
  uintptr seed_spill;
  uintptr l;
  
                    /* Unresolved local var: uintptr a@[???]
                       Unresolved local var: uintptr b@[???] */
  uVar13 = seed_spill ^ runtime_hashkey[0] ^ 0xa0761d6478bd642f;
  if (l == 0) {
    return (uintptr)p;
  }
  if (l < 4) {
    auVar16[1] = (*q)[l >> 1];
    auVar16[0] = (*q)[0];
    auVar16[2] = q[-1][l + 7];
    auVar16[3] = 0;
    auVar16[4] = 0;
    auVar16[5] = 0;
    auVar16[6] = 0;
    auVar16[7] = 0;
    auVar15[0] = 0;
    auVar15[1] = 0;
    auVar15[2] = 0;
    auVar15[3] = 0;
    auVar15[4] = 0;
    auVar15[5] = 0;
    auVar15[6] = 0;
    auVar15[7] = 0;
  }
  else if (l == 4) {
    auVar15[4] = 0;
    auVar15[5] = 0;
    auVar15[6] = 0;
    auVar15[7] = 0;
    auVar15._0_4_ = *(uint *)*q;
    auVar16 = auVar15;
  }
  else if (l < 8) {
                    /* Unresolved local var: uint8[4] * q@[???] */
    auVar16[4] = 0;
    auVar16[5] = 0;
    auVar16[6] = 0;
    auVar16[7] = 0;
    auVar16._0_4_ = *(uint *)*q;
    auVar15[4] = 0;
    auVar15[5] = 0;
    auVar15[6] = 0;
    auVar15[7] = 0;
    auVar15._0_4_ = *(uint *)(q[-1] + l + 4);
  }
  else if (l == 8) {
    auVar15 = *q;
    auVar16 = auVar15;
  }
  else if (l < 0x11) {
                    /* Unresolved local var: uint8[8] * q@[???] */
    auVar15 = *(uint8 (*) [8])(q[-1] + l);
    auVar16 = *q;
  }
  else {
    uVar14 = l;
    uVar17 = uVar13;
    uVar18 = uVar13;
    if (0x30 < l) {
      for (; 0x30 < uVar14; uVar14 = uVar14 - 0x30) {
                    /* Unresolved local var: uint8[8] * q@[???] */
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)q[1] ^ uVar13;
                    /* Unresolved local var: uint64 hi@[???]
                       Unresolved local var: uint64 lo@[???] */
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)*q ^ 0xe7037ed1a0b428db;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)q[3] ^ uVar17;
                    /* Unresolved local var: uint64 hi@[???]
                       Unresolved local var: uint64 lo@[???] */
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)q[2] ^ 0x8ebc6af09c88c6e3;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)q[5] ^ uVar18;
                    /* Unresolved local var: uint64 hi@[???]
                       Unresolved local var: uint64 lo@[???] */
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)q[4] ^ 0x589965cc75374cc3;
        uVar13 = SUB168(auVar4 * auVar10,0) ^ SUB168(auVar4 * auVar10,8);
        q = q + 6;
        uVar17 = SUB168(auVar5 * auVar11,0) ^ SUB168(auVar5 * auVar11,8);
        uVar18 = SUB168(auVar6 * auVar12,0) ^ SUB168(auVar6 * auVar12,8);
      }
      uVar13 = uVar13 ^ uVar17 ^ uVar18;
    }
    for (; 0x10 < uVar14; uVar14 = uVar14 - 0x10) {
                    /* Unresolved local var: uint8[8] * q@[???] */
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)q[1] ^ uVar13;
                    /* Unresolved local var: uint64 hi@[???]
                       Unresolved local var: uint64 lo@[???] */
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)*q ^ 0xe7037ed1a0b428db;
      uVar13 = SUB168(auVar3 * auVar9,0) ^ SUB168(auVar3 * auVar9,8);
      q = q + 2;
    }
                    /* Unresolved local var: uint8[8] * q@[???] */
                    /* Unresolved local var: uint8[8] * q@[???] */
    auVar15 = *(uint8 (*) [8])(q[-1] + uVar14);
    auVar16 = *(uint8 (*) [8])(q[-2] + uVar14);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (ulong)auVar15 ^ uVar13;
                    /* Unresolved local var: uint64 hi@[???]
                       Unresolved local var: uint64 lo@[???] */
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (ulong)auVar16 ^ 0xe7037ed1a0b428db;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = SUB168(auVar1 * auVar7,0) ^ SUB168(auVar1 * auVar7,8);
                    /* Unresolved local var: uint64 hi@[???]
                       Unresolved local var: uint64 lo@[???] */
  auVar8._8_8_ = 0;
  auVar8._0_8_ = l ^ 0x1d8e4e27c47d124f;
  return SUB168(auVar2 * auVar8,0) ^ SUB168(auVar2 * auVar8,8);
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.memhash32Fallback(void * p, uintptr seed, uintptr ~r2) */

uintptr runtime_memhash32Fallback(void *p,uintptr seed)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint8 (*q) [4];
  uintptr seed_spill;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (ulong)(uint)*q ^ 0xe7037ed1a0b428db;
                    /* Unresolved local var: uint64 hi@[???]
                       Unresolved local var: uint64 lo@[???] */
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (uint)*q ^ seed_spill ^ runtime_hashkey[0] ^ 0xa0761d6478bd642f;
                    /* Unresolved local var: uint64 hi@[???]
                       Unresolved local var: uint64 lo@[???] */
  auVar3._8_8_ = 0;
  auVar3._0_8_ = SUB168(auVar1 * auVar2,0) ^ SUB168(auVar1 * auVar2,8);
  return SUB168(ZEXT816(0x1d8e4e27c47d124b) * auVar3,0) ^
         SUB168(ZEXT816(0x1d8e4e27c47d124b) * auVar3,8);
}


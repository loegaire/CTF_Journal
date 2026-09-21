
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*traceStackTable).find(runtime.traceStackTable * tab,
   []uintptr pcs, uintptr hash, uint32 ~r2) */

uint32 runtime___traceStackTable__find(runtime_traceStackTable *tab,__uintptr pcs,uintptr hash)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  runtime_traceStackTable *tab_spill;
  __uintptr pcs_spill;
  uintptr hash_spill;
  
                    /* Unresolved local var: int part@[???] */
                    /* Unresolved local var: runtime.traceStack * stk@[???] */
  puVar2 = (undefined8 *)tab_spill->tab[hash_spill & 0x1fff];
  do {
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    if ((puVar2[1] == hash_spill) && (uVar1 = puVar2[3], pcs_spill.len == uVar1)) {
      if (0x80 < uVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      lVar3 = 0;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uintptr stkpc@[???] */
      while( true ) {
        if ((long)uVar1 <= lVar3) {
          return *(uint32 *)(puVar2 + 2);
        }
        if (pcs_spill.array[lVar3] != puVar2[lVar3 + 4]) break;
        lVar3 = lVar3 + 1;
      }
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}


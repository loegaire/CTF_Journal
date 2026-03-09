
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*itabTableType).find(runtime.itabTableType * t,
   runtime.interfacetype * inter, runtime._type * typ, runtime.itab * ~r2) */

runtime_itab *
runtime___itabTableType__find
          (runtime_itabTableType *t,runtime_interfacetype *inter,runtime__type *typ)

{
  runtime_itab *prVar1;
  ulong uVar2;
  long lVar3;
  runtime_itabTableType *t_spill;
  runtime_interfacetype *inter_spill;
  runtime__type *typ_spill;
  
                    /* Unresolved local var: uintptr mask@[???]
                       Unresolved local var: uintptr h@[???] */
  uVar2 = (ulong)((inter_spill->typ).hash ^ typ_spill->hash);
  lVar3 = 1;
                    /* Unresolved local var: uintptr i@[???] */
  while( true ) {
    uVar2 = uVar2 & t_spill->size - 1;
    prVar1 = t_spill->entries[uVar2];
    if (prVar1 == (runtime_itab *)0x0) {
      return (runtime_itab *)t_spill;
    }
    if ((prVar1->inter == inter_spill) && (prVar1->_type == typ_spill)) break;
                    /* Unresolved local var: runtime.itab * * p@[???]
                       Unresolved local var: runtime.itab * m@[???] */
    uVar2 = uVar2 + lVar3;
    lVar3 = lVar3 + 1;
  }
  return (runtime_itab *)t_spill;
}


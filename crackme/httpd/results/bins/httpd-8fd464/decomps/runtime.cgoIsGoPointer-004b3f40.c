
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.cgoIsGoPointer(void * p, bool ~r1) */

bool runtime_cgoIsGoPointer(void *p)

{
  runtime_moduledata *prVar1;
  bool bVar2;
  int iVar3;
  runtime_moduledata **pprVar4;
  long lVar5;
  void *p_spill;
  char local_10;
  
  if (p_spill == (void *)0x0) {
    return false;
  }
  bVar2 = runtime_inHeapOrStack((uintptr)p_spill);
  if (local_10 == '\0') {
                    /* Unresolved local var: []*runtime.moduledata * p@[???] */
    if (runtime_modulesSlice == (___runtime_moduledata *)0x0) {
      iVar3 = 0;
      pprVar4 = (runtime_moduledata **)0x0;
    }
    else {
      pprVar4 = runtime_modulesSlice->array;
      iVar3 = runtime_modulesSlice->len;
                    /* Unresolved local var: runtime.moduledata * datap@[???] */
    }
    lVar5 = 0;
    while( true ) {
      if (iVar3 <= lVar5) {
        return SUB81(iVar3,0);
      }
      prVar1 = pprVar4[lVar5];
      if ((((void *)prVar1->data <= p_spill) && (p_spill < (void *)prVar1->edata)) ||
         (((void *)prVar1->bss <= p_spill && (p_spill < (void *)prVar1->ebss)))) break;
      lVar5 = lVar5 + 1;
    }
    return SUB81(iVar3,0);
  }
  return bVar2;
}


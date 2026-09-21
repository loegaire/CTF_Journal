
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.lookup([]string tab, string val, int ~r2, string ~r3, error
   ~r4) */

multireturn_int_string_error_ time_lookup(__string tab,string val)

{
  byte bVar1;
  runtime__type *prVar2;
  long lVar3;
  uint8 *puVar4;
  void *pvVar5;
  runtime_itab *prVar6;
  runtime__type *prVar7;
  byte bVar8;
  multireturn_int_string_error_ mVar9;
  multireturn_int_string_error_ mVar10;
  __string tab_spill;
  string val_spill;
  
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: string v@[???] */
  puVar4 = (uint8 *)tab.len;
  pvVar5 = (void *)val.len;
  prVar6 = (runtime_itab *)val.str;
  if (0 < tab_spill.len) {
    lVar3 = 0;
    while( true ) {
      prVar2 = ((runtime_itab *)tab_spill.array)->_type;
      if ((long)prVar2 <= val_spill.len) {
        prVar7 = (runtime__type *)0x0;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint8 c1@[???]
                       Unresolved local var: uint8 c2@[???] */
        while( true ) {
          if ((long)prVar2 <= (long)prVar7) {
            mVar10.~r4.data = (void *)(-(val_spill.len - (long)prVar2) >> 0x3f);
            mVar10.~r3.len = val_spill.str + ((ulong)prVar2 & (ulong)mVar10.~r4.data);
            mVar10.~r3.str = val_spill.str;
            mVar10.~r2 = val_spill.len - (long)prVar2;
            mVar10.~r4.tab = (runtime_itab *)tab_spill.array;
            return mVar10;
          }
          if (prVar2 <= prVar7) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          bVar1 = *(byte *)((long)&prVar7->size + (long)((runtime_itab *)tab_spill.array)->inter);
          if ((bVar1 != val_spill.str[(long)prVar7]) &&
             ((bVar8 = val_spill.str[(long)prVar7] | 0x20, (bVar1 | 0x20) != bVar8 ||
              (0x19 < (byte)(bVar8 + 0x9f))))) break;
          prVar7 = (runtime__type *)((long)&prVar7->size + 1);
        }
      }
      lVar3 = lVar3 + 1;
      puVar4 = val_spill.str;
      pvVar5 = (void *)val_spill.len;
      prVar6 = (runtime_itab *)tab_spill.array;
      if (tab_spill.len <= lVar3) break;
      tab_spill.array = (string *)&((runtime_itab *)tab_spill.array)->hash;
    }
  }
  mVar9.~r3.str = puVar4;
  mVar9.~r2 = (int)time_errBad.tab;
  mVar9.~r3.len = (int)time_errBad.data;
  mVar9.~r4.data = pvVar5;
  mVar9.~r4.tab = prVar6;
  return mVar9;
}


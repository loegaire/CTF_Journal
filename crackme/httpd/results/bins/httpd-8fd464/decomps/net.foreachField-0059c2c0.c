
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.foreachField([]uint8 x, func([]uint8)_error * * fn, error ~r2)
    */

error net_foreachField(__uint8 x,func___uint8__error **fn)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  __uint8 _Var4;
  __uint8 _Var5;
  runtime_itab *prVar6;
  runtime_itab *prVar7;
  byte *pbVar8;
  long in_FS_OFFSET;
  error eVar9;
  error eVar10;
  error eVar11;
  __uint8 x_spill;
  func___uint8__error **fn_spill;
  undefined7 uStack_37;
  runtime_itab *local_30;
  
  prVar7 = (runtime_itab *)x.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  for (; 0 < x_spill.len; x_spill.len = x_spill.len + -1) {
    bVar2 = *x_spill.array;
    prVar7 = (runtime_itab *)(ulong)bVar2;
    if ((((bVar2 != 0x20) && (bVar2 != 9)) && (bVar2 != 10)) && (bVar2 != 0xd)) break;
    x_spill.cap = (long)((runtime_itab *)(x_spill.cap + -0x20))->fun + 7;
    x_spill.array = x_spill.array + (-x_spill.cap >> 0x3f & 1);
    prVar7 = (runtime_itab *)x_spill.cap;
  }
  do {
    if (x_spill.len < 1) {
LAB_0059c360:
      do {
        if (x_spill.len < 1) {
          eVar10.data = prVar7;
          eVar10.tab = (runtime_itab *)x_spill.cap;
          return eVar10;
        }
                    /* Unresolved local var: int sp@[???] */
        internal_bytealg_IndexByte();
        if (local_30 == (runtime_itab *)0xffffffffffffffff) {
          _Var5.len = x_spill.len;
          _Var5.array = x_spill.array;
          _Var5.cap = x_spill.cap;
          (**fn_spill)(_Var5,(error *)fn);
          eVar9.tab._1_7_ = uStack_37;
          eVar9.tab._0_1_ = 0x20;
          eVar9.data = prVar7;
          return eVar9;
        }
                    /* Unresolved local var: []uint8 field@[???] */
        prVar7 = local_30;
        prVar6 = (runtime_itab *)x_spill.cap;
        pbVar8 = x_spill.array;
        if ((ulong)x_spill.cap < local_30) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAcap();
        }
        for (; (0 < (long)prVar7 &&
               (((bVar2 = *pbVar8, bVar2 == 0x20 || (bVar2 == 9)) ||
                ((bVar2 == 10 || (bVar2 == 0xd)))))); pbVar8 = pbVar8 + (-(long)prVar6 >> 0x3f & 1))
        {
          prVar6 = (runtime_itab *)((long)prVar6[-1].fun + 7);
          prVar7 = (runtime_itab *)((long)prVar7[-1].fun + 7);
        }
        for (; 0 < (long)prVar7; prVar7 = (runtime_itab *)((long)prVar7[-1].fun + 7)) {
          cVar3 = ((undefined1 *)((long)prVar7[-1].fun + 7))[(long)pbVar8];
          if ((((cVar3 != ' ') && (cVar3 != '\t')) && (cVar3 != '\n')) && (cVar3 != '\r')) {
            if (0 < (long)prVar7) {
                    /* Unresolved local var: error err@[???] */
              _Var4.len = (int)prVar7;
              _Var4.array = pbVar8;
              _Var4.cap = (int)prVar6;
              (**fn_spill)(_Var4,(error *)x_spill.cap);
              eVar11.tab._1_7_ = uStack_37;
              eVar11.tab._0_1_ = 0x20;
              if (CONCAT71(uStack_37,0x20) != 0) {
                eVar11.data = pbVar8;
                return eVar11;
              }
            }
            break;
          }
        }
        puVar1 = (undefined1 *)((long)&local_30->inter + 1);
        if ((ulong)x_spill.len < puVar1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        x_spill.cap = x_spill.cap + (-1 - (long)local_30);
        prVar7 = (runtime_itab *)(-x_spill.cap >> 0x3f);
        x_spill.len = x_spill.len + -(long)local_30;
        for (x_spill.array = x_spill.array + ((ulong)puVar1 & (ulong)prVar7);
            (x_spill.len = x_spill.len + -1, 0 < x_spill.len &&
            (((bVar2 = *x_spill.array, bVar2 == 0x20 || (bVar2 == 9)) ||
             ((bVar2 == 10 || (bVar2 == 0xd))))));
            x_spill.array = x_spill.array + (-x_spill.cap >> 0x3f & 1)) {
          x_spill.cap = (long)((runtime_itab *)(x_spill.cap + -0x20))->fun + 7;
        }
        for (; (fn = (func___uint8__error **)x_spill.cap, 0 < x_spill.len &&
               (((bVar2 = (x_spill.array + -1)[x_spill.len], bVar2 == 0x20 || (bVar2 == 9)) ||
                ((bVar2 == 10 || (bVar2 == 0xd)))))); x_spill.len = x_spill.len + -1) {
        }
      } while( true );
    }
    bVar2 = (x_spill.array + -1)[x_spill.len];
    prVar7 = (runtime_itab *)(ulong)bVar2;
    if (((bVar2 != 0x20) && (bVar2 != 9)) && ((bVar2 != 10 && (bVar2 != 0xd)))) goto LAB_0059c360;
    x_spill.len = x_spill.len + -1;
  } while( true );
}


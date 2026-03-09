
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.foreachLine([]uint8 x, func([]uint8)_error * * fn, error ~r2)
    */

error net_foreachLine(__uint8 x,func___uint8__error **fn)

{
  __uint8 _Var1;
  __uint8 _Var2;
  runtime_itab *prVar3;
  long in_FS_OFFSET;
  error eVar4;
  error eVar5;
  error eVar6;
  __uint8 x_spill;
  func___uint8__error **fn_spill;
  undefined7 uStack_3f;
  error *local_38;
  
  prVar3 = (runtime_itab *)x.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  while( true ) {
    if (x_spill.len < 1) {
      eVar6.data = prVar3;
      eVar6.tab = (runtime_itab *)x_spill.len;
      return eVar6;
    }
    internal_bytealg_IndexByte();
    if (local_38 == (error *)0xffffffffffffffff) {
      _Var2.len = x_spill.len;
      _Var2.array = x_spill.array;
      _Var2.cap = x_spill.cap;
      (**fn_spill)(_Var2,(error *)fn);
      eVar5.tab._1_7_ = uStack_3f;
      eVar5.tab._0_1_ = 10;
      eVar5.data = prVar3;
      return eVar5;
    }
    prVar3 = (runtime_itab *)((long)&local_38->tab + 1);
    if ((ulong)x_spill.cap < prVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    if ((ulong)x_spill.len < prVar3) break;
                    /* Unresolved local var: error err@[???] */
    _Var1.len = (int)prVar3;
    _Var1.array = x_spill.array;
    _Var1.cap = x_spill.cap;
    (**fn_spill)(_Var1,(error *)fn);
    x_spill.cap = x_spill.cap + (-1 - (long)local_38);
    eVar4.tab = (runtime_itab *)(x_spill.len - (long)local_38);
    x_spill.array = x_spill.array + ((ulong)prVar3 & -x_spill.cap >> 0x3f);
    if (CONCAT71(uStack_3f,10) != 0) {
      eVar4.data = (void *)x_spill.cap;
      return eVar4;
    }
                    /* Unresolved local var: int nl@[???]
                       Unresolved local var: []uint8 line@[???] */
    x_spill.len = (long)eVar4.tab[-1].fun + 7;
    prVar3 = (runtime_itab *)x_spill.cap;
    fn = (func___uint8__error **)local_38;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}


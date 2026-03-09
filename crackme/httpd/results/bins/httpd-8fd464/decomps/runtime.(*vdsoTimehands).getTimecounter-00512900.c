
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*vdsoTimehands).getTimecounter(runtime.vdsoTimehands *
   th, uint32 ~r0, bool ~r1) */

multireturn_uint32_bool__conflict runtime___vdsoTimehands__getTimecounter(runtime_vdsoTimehands *th)

{
  bool bVar1;
  bool unaff_BL;
  multireturn_uint32_bool__conflict mVar2;
  multireturn_uint32_bool__conflict mVar3;
  multireturn_uint32_bool__conflict mVar4;
  runtime_vdsoTimehands *th_spill;
  long local_38;
  byte local_2d;
  undefined4 local_2c;
  code *local_28;
  undefined4 *local_18;
  byte *pbStack_10;
  
  if (th_spill->algo == 1) {
                    /* Unresolved local var: int64 tsc@[???] */
    runtime_cputicks();
    bVar1 = SUB41(th_spill->x86_shift,0);
    mVar4.~r0 = (uint32)(local_38 >> ((~-(th_spill->x86_shift < 0x40) | bVar1) & 0x3fU));
    mVar4.~r1 = bVar1;
    return mVar4;
  }
                    /* Unresolved local var: uint32 tc@[???]
                       Unresolved local var: bool ok@[???] */
  if (th_spill->algo == 2) {
    local_2c = 0;
    local_2d = 0;
    local_28 = runtime___vdsoTimehands__getTimecounter_func1;
    local_18 = &local_2c;
    pbStack_10 = &local_2d;
    runtime_systemstack();
    mVar2.~r0 = (uint)local_2d;
    mVar2.~r1 = unaff_BL;
    return mVar2;
  }
  mVar3.~r0 = (uint32)th_spill;
  mVar3.~r1 = unaff_BL;
  return mVar3;
}


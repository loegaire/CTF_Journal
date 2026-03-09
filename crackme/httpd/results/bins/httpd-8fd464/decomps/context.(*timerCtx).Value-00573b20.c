
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.(*timerCtx).Value(interface_{} key, interface_{} ~r1) */

interface___ context___timerCtx__Value(interface___ key)

{
  void *in_RCX;
  interface___ iVar1;
  interface___ key_spill;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  
  iVar1._type = key.data;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  iVar1.data = in_RCX;
  iVar1 = context___cancelCtx__Value((context_cancelCtx *)key_spill._type,iVar1);
  return iVar1;
}


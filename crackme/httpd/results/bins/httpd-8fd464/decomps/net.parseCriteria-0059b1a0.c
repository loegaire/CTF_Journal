
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.parseCriteria([]uint8 x, []net.nssCriterion c, error err) */

multireturn___net_nssCriterion_error_ net_parseCriteria(__uint8 x)

{
  int iVar1;
  void *in_RSI;
  runtime_itab *in_RDI;
  long in_FS_OFFSET;
  error eVar2;
  __uint8 x_00;
  multireturn___net_nssCriterion_error_ mVar3;
  __uint8 x_spill;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 local_28;
  int local_20;
  code *local_18;
  undefined1 *puStack_10;
  
  iVar1 = x.cap;
  x_00.len = x.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  local_18 = net_parseCriteria_func1;
  puStack_10 = (undefined1 *)&stack0x00000020;
  x_00.array = (uint8 *)&local_18;
  x_00.cap = iVar1;
  eVar2 = net_foreachField(x_00,(func___uint8__error **)in_RDI);
  mVar3.c.len = eVar2.data;
  mVar3.c.array = (net_nssCriterion *)local_28;
  mVar3.c.cap = local_20;
  mVar3.err.data = in_RSI;
  mVar3.err.tab = in_RDI;
  return mVar3;
}


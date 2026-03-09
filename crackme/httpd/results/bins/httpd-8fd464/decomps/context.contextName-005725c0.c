
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.contextName(context.Context c, string ~r1) */

string context_contextName(context_Context c)

{
  runtime__type *prVar1;
  void *in_RCX;
  undefined1 *puVar2;
  long in_FS_OFFSET;
  runtime_iface rVar3;
  string sVar4;
  string sVar5;
  context_Context c_spill;
  long local_28;
  
  rVar3.tab = c.data;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  rVar3.data = in_RCX;
                    /* Unresolved local var: context.stringer s@[???] */
  rVar3 = runtime_assertI2I2(c_spill.data,rVar3);
  sVar4.len = rVar3.data;
  if (local_28 == 0) {
    prVar1 = (runtime__type *)0x0;
    if (c_spill.tab != (runtime_itab *)0x0) {
      prVar1 = (c_spill.tab)->_type;
    }
    if (prVar1 == (runtime__type *)0x0) {
      puVar2 = (undefined1 *)0x0;
    }
    else {
      puVar2 = go_itab__internal_reflectlite_rtype_internal_reflectlite_Type;
    }
    (**(code **)(puVar2 + 0x58))();
    sVar4.str = (uint8 *)c_spill.tab;
    return sVar4;
  }
  (**(code **)(local_28 + 0x18))();
  sVar5.len = (int)sVar4.len;
  sVar5.str = (uint8 *)c_spill.tab;
  return sVar5;
}



/* WARNING: Removing unreachable block (ram,0x004e5791) */
/* WARNING: Removing unreachable block (ram,0x004e57d7) */
/* WARNING: Removing unreachable block (ram,0x004e57d1) */
/* WARNING: Removing unreachable block (ram,0x004e57e5) */
/* WARNING: Unknown calling convention */

void runtime_preprintpanics(runtime__panic *p)

{
  runtime__type *prVar1;
  void *pvVar2;
  runtime__panic *extraout_RDX;
  runtime__type *unaff_RBX;
  long in_FS_OFFSET;
  runtime_iface rVar3;
  string val;
  runtime_eface e;
  runtime_eface e_00;
  runtime__panic *p_spill;
  long local_40;
  
  while (val.len = unaff_RBX,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  for (; p_spill != (runtime__panic *)0x0; p_spill = p_spill->link) {
    prVar1 = (p_spill->arg)._type;
    pvVar2 = (p_spill->arg).data;
    if (prVar1 != (runtime__type *)0x0) {
      e.data = prVar1;
      e._type = val.len;
                    /* Unresolved local var: error v@[???] */
      rVar3 = runtime_assertE2I2((runtime_interfacetype *)&DAT_0023c640,e);
      val.len = rVar3.data;
      if (local_40 == 0) {
        e_00.data = pvVar2;
        e_00._type = val.len;
                    /* Unresolved local var: runtime.stringer v@[???] */
        rVar3 = runtime_assertE2I2((runtime_interfacetype *)&DAT_0023d740,e_00);
        val.len = rVar3.data;
      }
      else {
        (**(code **)(local_40 + 0x18))();
        val.str = (uint8 *)prVar1;
        runtime_convTstring(val);
        (p_spill->arg)._type = (runtime__type *)&DAT_00225520;
        if (runtime_writeBarrier._0_4_ == 0) {
          (p_spill->arg).data = pvVar2;
        }
        else {
          runtime_gcWriteBarrier();
          p_spill = extraout_RDX;
        }
      }
    }
  }
  runtime_preprintpanics_func1();
  return;
}


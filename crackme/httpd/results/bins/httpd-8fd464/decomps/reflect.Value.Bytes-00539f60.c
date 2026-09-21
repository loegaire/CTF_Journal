
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Value.Bytes(reflect.Value v, []uint8 ~r0) */

__uint8 reflect_Value_Bytes(reflect_Value v)

{
  undefined *puVar1;
  undefined *extraout_RAX;
  long in_FS_OFFSET;
  reflect_Type rVar2;
  interface___ e;
  string sVar3;
  interface___ e_00;
  __uint8 _Var4;
  reflect_Value v_spill;
  runtime__type *local_38;
  undefined **local_30;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  puVar1 = (undefined *)(v_spill.flag & 0x1f);
  if (puVar1 == (undefined *)0x17) {
    rVar2 = reflect___rtype__Elem(v_spill.typ);
    _Var4.len = rVar2.data;
    (*(code *)local_30[0x13])();
    if (local_30 == (undefined **)&DAT_00000008) {
      _Var4.array = (uint8 *)*(undefined8 *)((long)v_spill.ptr + 0x10);
      _Var4.cap = *(int *)v_spill.ptr;
      return _Var4;
    }
    local_38 = (runtime__type *)&DAT_00225520;
    local_30 = &reflect__stmp_46;
    e.data = _Var4.len;
    e._type = (runtime__type *)&reflect__stmp_46;
    runtime_gopanic(e);
    puVar1 = extraout_RAX;
  }
  sVar3 = reflect_methodName();
  e_00.data = (void *)sVar3.len;
  runtime_newobject(local_38);
  local_30[1] = (undefined *)local_30;
  if (runtime_writeBarrier._0_4_ != 0) goto LAB_0053a06f;
  *local_30 = (undefined *)local_38;
  do {
    local_30[2] = puVar1;
    e_00._type = (runtime__type *)&DAT_00233920;
    runtime_gopanic(e_00);
LAB_0053a06f:
    runtime_gcWriteBarrier();
  } while( true );
}


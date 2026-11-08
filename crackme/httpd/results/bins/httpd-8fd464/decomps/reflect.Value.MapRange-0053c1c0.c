
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Value.MapRange(reflect.Value v, reflect.MapIter * ~r0) */

reflect_MapIter * reflect_Value_MapRange(reflect_Value v)

{
  reflect_MapIter *extraout_RAX;
  long in_FS_OFFSET;
  string sVar1;
  interface___ e;
  reflect_Value v_spill;
  runtime__type *local_30;
  undefined8 *local_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((v_spill.flag & 0x1f) == 0x15) {
    runtime_newobject((runtime__type *)&DAT_0024d540);
    local_28[2] = v_spill.flag;
    if (runtime_writeBarrier._0_4_ == 0) {
      *local_28 = v_spill.typ;
      local_28[1] = v_spill.ptr;
    }
    else {
      runtime_gcWriteBarrier();
      runtime_gcWriteBarrierDX();
      v_spill.ptr = extraout_RAX;
    }
    return v_spill.ptr;
  }
  sVar1 = reflect_methodName();
  e.data = (void *)sVar1.len;
  runtime_newobject(local_30);
  local_28[1] = local_28;
  if (runtime_writeBarrier._0_4_ != 0) goto LAB_0053c2c9;
  *local_28 = local_30;
  do {
    local_28[2] = v_spill.flag & 0x1f;
    e._type = (runtime__type *)&DAT_00233920;
    runtime_gopanic(e);
LAB_0053c2c9:
    runtime_gcWriteBarrier();
  } while( true );
}


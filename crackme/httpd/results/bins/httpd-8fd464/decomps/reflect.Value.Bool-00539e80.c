
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Value.Bool(reflect.Value v, bool ~r0) */

bool reflect_Value_Bool(reflect_Value v)

{
  long in_FS_OFFSET;
  string sVar1;
  interface___ e;
  reflect_Value v_spill;
  runtime__type *local_30;
  undefined8 *local_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((v_spill.flag & 0x1f) == 1) {
    return (bool)*(undefined1 *)v_spill.ptr;
  }
  sVar1 = reflect_methodName();
  e.data = (void *)sVar1.len;
  runtime_newobject(local_30);
  local_28[1] = local_28;
  if (runtime_writeBarrier._0_4_ != 0) goto LAB_00539f30;
  *local_28 = local_30;
  do {
    local_28[2] = v_spill.flag & 0x1f;
    e._type = (runtime__type *)&DAT_00233920;
    runtime_gopanic(e);
LAB_00539f30:
    runtime_gcWriteBarrier();
  } while( true );
}


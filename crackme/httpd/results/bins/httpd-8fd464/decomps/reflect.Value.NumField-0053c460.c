
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Value.NumField(reflect.Value v, int ~r0) */

int reflect_Value_NumField(reflect_Value v)

{
  long in_FS_OFFSET;
  string sVar1;
  interface___ e;
  reflect_structType *tt;
  ulong in_stack_00000018;
  runtime__type *local_30;
  undefined8 *local_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((in_stack_00000018 & 0x1f) == 0x19) {
    return (tt->fields).len;
  }
  sVar1 = reflect_methodName();
  e.data = (void *)sVar1.len;
  runtime_newobject(local_30);
  local_28[1] = local_28;
  if (runtime_writeBarrier._0_4_ != 0) goto LAB_0053c512;
  *local_28 = local_30;
  do {
    local_28[2] = in_stack_00000018 & 0x1f;
    e._type = (runtime__type *)&DAT_00233920;
    runtime_gopanic(e);
LAB_0053c512:
    runtime_gcWriteBarrier();
  } while( true );
}


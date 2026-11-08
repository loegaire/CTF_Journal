
/* WARNING: Removing unreachable block (ram,0x0053ba66) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Value.MapIndex(reflect.Value v, reflect.Value key,
   reflect.Value ~r1) */

reflect_Value reflect_Value_MapIndex(reflect_Value v,reflect_Value key)

{
  undefined *puVar1;
  runtime_maptype *t;
  undefined *extraout_RAX;
  undefined1 *ptr;
  reflect_rtype *prVar2;
  reflect_rtype *dst;
  void *in_R9;
  long in_FS_OFFSET;
  interface___ e;
  string sVar3;
  interface___ e_00;
  reflect_Value rVar4;
  reflect_Value rVar5;
  reflect_mapType *tt;
  runtime_hmap *in_stack_00000010;
  ulong in_stack_00000018;
  reflect_Value key_spill;
  runtime__type *local_70;
  undefined **local_68;
  runtime_maptype *local_30;
  ulong local_28;
  
  dst = (reflect_rtype *)key.flag;
  prVar2 = key.typ;
                    /* Unresolved local var: void * k@[???]
                       Unresolved local var: void * e@[???]
                       Unresolved local var: reflect.rtype * typ@[???]
                       Unresolved local var: reflect.flag fl@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  puVar1 = (undefined *)(in_stack_00000018 & 0x1f);
  if (puVar1 == (undefined *)0x15) {
    sVar3.len = (int)tt->key;
    sVar3.str = (uint8 *)prVar2;
    rVar4.ptr = tt;
    rVar4.typ = (reflect_rtype *)&DAT_0029d3fd;
    rVar4.flag = (reflect_flag)key_spill.ptr;
    rVar4 = reflect_Value_assignTo(rVar4,sVar3,dst,in_R9);
    e.data = rVar4.ptr;
    key_spill.flag = local_28;
    t = (runtime_maptype *)&key_spill.ptr;
    if ((local_28 & 0x80) != 0) {
      t = local_30;
    }
    if (((tt->rtype).size == 8) && ((tt->rtype).ptrdata != 0)) {
      if (((uint)in_stack_00000018 >> 7 & 1) != 0) {
        in_stack_00000010 = (runtime_hmap *)in_stack_00000010->count;
      }
      reflect_mapaccess(t,in_stack_00000010,tt);
      ptr = (undefined1 *)0x0;
      if (((in_stack_00000018 | key_spill.flag) & 0x60) != 0) {
        ptr = &DAT_00000020;
      }
      rVar4 = reflect_copyVal((reflect_rtype *)&DAT_0029d3fd,
                              (ulong)(tt->elem->kind & 0x1f) | (ulong)ptr,ptr);
      rVar5.ptr = rVar4.ptr;
      rVar5.typ = (reflect_rtype *)&DAT_0029d3fd;
      rVar5.flag = 0x16;
      return rVar5;
    }
    local_70 = (runtime__type *)&DAT_00225520;
    local_68 = &reflect__stmp_10;
    e._type = (runtime__type *)&reflect__stmp_10;
    runtime_gopanic(e);
    puVar1 = extraout_RAX;
  }
  sVar3 = reflect_methodName();
  e_00.data = (void *)sVar3.len;
  runtime_newobject(local_70);
  local_68[1] = (undefined *)local_68;
  if (runtime_writeBarrier._0_4_ != 0) goto LAB_0053bb0f;
  *local_68 = (undefined *)local_70;
  do {
    local_68[2] = puVar1;
    e_00._type = (runtime__type *)&DAT_00233920;
    runtime_gopanic(e_00);
LAB_0053bb0f:
    runtime_gcWriteBarrier();
  } while( true );
}


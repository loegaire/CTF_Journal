
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Value.MapKeys(reflect.Value v, []reflect.Value ~r0) */

__reflect_Value reflect_Value_MapKeys(reflect_Value v)

{
  reflect_rtype *ptr;
  ulong uVar1;
  ulong extraout_RAX;
  reflect_rtype *prVar2;
  reflect_rtype *fl;
  reflect_rtype *cap;
  long in_FS_OFFSET;
  interface___ e;
  string sVar3;
  interface___ e_00;
  __reflect_Value _Var4;
  reflect_mapType *tt;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  runtime__type *local_88;
  reflect_rtype *local_80;
  runtime_hiter *local_78;
  long local_70;
  reflect_rtype *local_68;
  undefined8 local_60;
  
                    /* Unresolved local var: reflect.rtype * keyType@[???]
                       Unresolved local var: reflect.flag fl@[???]
                       Unresolved local var: void * m@[???]
                       Unresolved local var: int mlen@[???]
                       Unresolved local var: void * it@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: []reflect.Value a@[???]
                       Unresolved local var: void * ~R0@[???] */
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar1 = in_stack_00000018 & 0x1f;
  if (uVar1 == 0x15) {
    ptr = tt->key;
    uVar1 = 0;
    if ((in_stack_00000018 & 0x60) != 0) {
      uVar1 = 0x20;
    }
    e.data = (reflect_rtype *)(uVar1 | ptr->kind & 0x1f);
    if (((tt->rtype).size == 8) && ((tt->rtype).ptrdata != 0)) {
      if (((uint)in_stack_00000018 >> 7 & 1) != 0) {
        in_stack_00000010 = (undefined8 *)*in_stack_00000010;
      }
      if (in_stack_00000010 == (undefined8 *)0x0) {
        cap = (reflect_rtype *)0x0;
      }
      else {
        reflect_maplen((runtime_hmap *)tt);
        cap = local_80;
      }
      reflect_mapiterinit((runtime_maptype *)tt,(runtime_hmap *)e.data);
      runtime_makeslice((runtime__type *)local_78,(int)e.data,(int)cap);
      prVar2 = (reflect_rtype *)0x0;
      fl = e.data;
      local_80 = cap;
      while (((long)prVar2 < (long)cap &&
             (reflect_mapiterkey(local_78), local_80 != (reflect_rtype *)0x0))) {
        reflect_copyVal(local_80,(reflect_flag)fl,ptr);
        *(undefined8 *)(local_70 + 0x10 + (long)prVar2 * 0x18) = local_60;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(long *)(local_70 + (long)prVar2 * 0x18) = local_70;
          *(reflect_rtype **)(local_70 + 8 + (long)prVar2 * 0x18) = local_68;
        }
        else {
          runtime_gcWriteBarrierDX();
          runtime_gcWriteBarrierBX();
        }
                    /* Unresolved local var: void * key@[???] */
        reflect_mapiternext(local_78);
        prVar2 = (reflect_rtype *)((long)&prVar2->size + 1);
        fl = local_68;
        local_80 = e.data;
      }
      if (cap < prVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      _Var4.len = (int)fl;
      _Var4.array = (reflect_Value *)local_70;
      _Var4.cap = (int)prVar2;
      return _Var4;
    }
    local_88 = (runtime__type *)&DAT_00225520;
    local_80 = (reflect_rtype *)&reflect__stmp_10;
    e._type = (runtime__type *)&reflect__stmp_10;
    runtime_gopanic(e);
    uVar1 = extraout_RAX;
  }
  sVar3 = reflect_methodName();
  e_00.data = (void *)sVar3.len;
  runtime_newobject(local_88);
  local_80->ptrdata = (uintptr)local_80;
  if (runtime_writeBarrier._0_4_ != 0) goto LAB_0053bdf1;
  local_80->size = (uintptr)local_88;
  do {
    local_80->hash = (int)uVar1;
    local_80->tflag = (char)(uVar1 >> 0x20);
    local_80->align = (char)(uVar1 >> 0x28);
    local_80->fieldAlign = (char)(uVar1 >> 0x30);
    local_80->kind = (char)(uVar1 >> 0x38);
    e_00._type = (runtime__type *)&DAT_00233920;
    runtime_gopanic(e_00);
LAB_0053bdf1:
    runtime_gcWriteBarrier();
  } while( true );
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.copyVal(reflect.rtype * typ, reflect.flag fl, void * ptr,
   reflect.Value ~r3) */

reflect_Value reflect_copyVal(reflect_rtype *typ,reflect_flag fl,void *ptr)

{
  long in_FS_OFFSET;
  reflect_Value rVar1;
  reflect_Value rVar2;
  reflect_rtype *typ_spill;
  reflect_flag fl_spill;
  void *ptr_spill;
  runtime__type *local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((typ_spill->kind & 0x20) == 0) {
                    /* Unresolved local var: void * c@[???] */
    reflect_unsafe_New((runtime__type *)typ_spill);
    reflect_typedmemmove(local_20,(void *)fl,typ_spill);
    rVar1.typ = fl_spill | 0x80;
    rVar1.ptr = (void *)fl;
    rVar1.flag = (reflect_flag)typ_spill;
    return rVar1;
  }
  rVar2.ptr = (void *)fl;
  rVar2.typ = (reflect_rtype *)fl_spill;
  rVar2.flag = *(reflect_flag *)ptr_spill;
  return rVar2;
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void fmt.getField(reflect.Value v, int i, reflect.Value ~r2) */

reflect_Value fmt_getField(reflect_Value v,int i)

{
  long *plVar1;
  reflect_flag rVar2;
  long in_FS_OFFSET;
  reflect_Value v_00;
  reflect_Value v_01;
  reflect_Value rVar3;
  reflect_Value v_spill;
  int i_spill;
  reflect_flag local_20;
  long *local_18;
  long *local_10;
  
  rVar2 = v.flag;
  v_00.ptr = v.ptr;
                    /* Unresolved local var: reflect.Value val@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  v_00.typ = (reflect_rtype *)i_spill;
  v_00.flag = rVar2;
  reflect_Value_Field(v_00,i);
  plVar1 = (long *)((ulong)local_10 & 0x1f);
  if ((plVar1 == (long *)&DAT_00000014) && (*local_18 != 0)) {
    v_01.ptr = local_10;
    v_01.typ = (reflect_rtype *)0x14;
    v_01.flag = local_20;
    reflect_Value_Elem(v_01);
    plVar1 = local_18;
    local_20 = i_spill;
    local_10 = local_18;
  }
  rVar3.ptr = local_10;
  rVar3.typ = (reflect_rtype *)plVar1;
  rVar3.flag = local_20;
  return rVar3;
}


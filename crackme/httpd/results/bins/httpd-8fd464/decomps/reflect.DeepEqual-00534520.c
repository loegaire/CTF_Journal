
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.DeepEqual(interface_{} x, interface_{} y, bool ~r2) */

bool reflect_DeepEqual(interface___ x,interface___ y)

{
  bool bVar1;
  runtime__type *extraout_RAX;
  runtime__type *extraout_RAX_00;
  runtime__type *prVar2;
  undefined8 *puVar3;
  ulong uVar4;
  map_reflect_visit_bool phVar5;
  undefined8 *puVar6;
  map_reflect_visit_bool visited;
  long in_FS_OFFSET;
  reflect_Type rVar7;
  reflect_Value v;
  reflect_Value v_00;
  reflect_Value v1;
  reflect_Value v2;
  interface___ x_spill;
  interface___ y_spill;
  undefined4 local_1f0;
  undefined8 local_1d8;
  runtime_itab *local_1d0;
  undefined1 local_1b8;
  undefined1 local_170 [32];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120 [35];
  
                    /* Unresolved local var: reflect.Value v1@[???]
                       Unresolved local var: reflect.Value v2@[???]
                       Unresolved local var: void * ~R0ptr@[???]
                       Unresolved local var: reflect.rtype * ~R0typ@[???]
                       Unresolved local var: reflect.flag ~R0flag@[???] */
  while (local_170 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((x_spill._type == (runtime__type *)0x0) || (y_spill._type == (runtime__type *)0x0)) {
    if (x_spill._type == y_spill._type) {
      runtime_efaceeq(y_spill.data,x.data,y_spill._type);
    }
    else {
      local_1d8._0_1_ = '\0';
    }
    return (bool)(char)local_1d8;
  }
  prVar2 = y_spill._type;
  if (reflect_dummy.b != false) {
    reflect_dummy.x._type = x_spill._type;
    if (runtime_writeBarrier._0_4_ == 0) {
      reflect_dummy.x.data = x_spill.data;
    }
    else {
      runtime_gcWriteBarrierDX();
      x_spill._type = extraout_RAX;
    }
  }
                    /* Unresolved local var: reflect.rtype * t@[???]
                       Unresolved local var: reflect.flag f@[???] */
  if (x_spill._type == (runtime__type *)0x0) {
    x_spill._type = (runtime__type *)0x0;
    uVar4 = 0;
  }
  else {
    uVar4 = (ulong)((x_spill._type)->kind & 0x1f);
    if (((x_spill._type)->kind & 0x20) == 0) {
      uVar4 = uVar4 | 0x80;
    }
  }
  if (reflect_dummy.b != false) {
    reflect_dummy.x._type = y_spill._type;
    if (runtime_writeBarrier._0_4_ == 0) {
      reflect_dummy.x.data = y_spill.data;
    }
    else {
      runtime_gcWriteBarrierBX();
      x_spill._type = extraout_RAX_00;
    }
  }
                    /* Unresolved local var: reflect.rtype * t@[???]
                       Unresolved local var: reflect.flag f@[???] */
  if (prVar2 == (runtime__type *)0x0) {
    prVar2 = (runtime__type *)0x0;
    y_spill.data = (void *)0x0;
    phVar5 = (map_reflect_visit_bool)0x0;
  }
  else {
    phVar5 = (map_reflect_visit_bool)(ulong)(prVar2->kind & 0x1f);
    if ((prVar2->kind & 0x20) == 0) {
      phVar5 = (map_reflect_visit_bool)((ulong)phVar5 | 0x80);
    }
  }
  v.ptr = y_spill.data;
  v.typ = (reflect_rtype *)x_spill._type;
  v.flag = (reflect_flag)prVar2;
  visited = phVar5;
  reflect_Value_Type(v);
  v_00.ptr = y_spill.data;
  v_00.typ = (reflect_rtype *)local_1d8;
  v_00.flag = (reflect_flag)local_1d0;
  rVar7 = reflect_Value_Type(v_00);
  v1.ptr = rVar7.data;
  bVar1 = runtime_ifaceeq(local_1d0,v1.ptr,local_1d0);
  if ((char)local_1d8 != '\0') {
    local_150 = 0;
    uStack_148 = 0;
    local_140 = (undefined8 *)0x0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_120[0] = 0;
    puVar6 = &uStack_148;
    FUN_0051a14b();
    puVar3 = local_120;
    local_140 = puVar3;
    runtime_fastrand();
    local_1f0 = (undefined4)local_1d8;
    uStack_148 = CONCAT44(local_1f0,(undefined4)uStack_148);
    v1.typ = (reflect_rtype *)&local_150;
    v1.flag = (reflect_flag)puVar3;
    v2.ptr = phVar5;
    v2.typ = (reflect_rtype *)puVar6;
    v2.flag = uVar4;
    reflect_deepValueEqual(v1,v2,visited);
    return (bool)local_1b8;
  }
  return bVar1;
}


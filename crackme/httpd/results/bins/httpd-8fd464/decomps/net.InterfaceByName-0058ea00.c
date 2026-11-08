
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.InterfaceByName(string name, net.Interface * ~r1, error ~r2)
    */

multireturn_net_Interface___error_ net_InterfaceByName(string name)

{
  runtime__type *prVar1;
  uintptr uVar2;
  func_unsafe_Pointer__unsafe_Pointer__bool **ppfVar3;
  runtime_tflag rVar4;
  uint8 uVar5;
  uint8 uVar6;
  uint8 uVar7;
  runtime_nameOff rVar8;
  runtime_typeOff rVar9;
  runtime__type *extraout_RAX;
  runtime__type *extraout_RAX_00;
  runtime__type *prVar10;
  runtime__type *extraout_RAX_01;
  void *pvVar11;
  runtime__type *dst;
  long lVar12;
  long in_FS_OFFSET;
  multireturn_net_Interface___error_ mVar13;
  multireturn_net_Interface___error_ mVar14;
  multireturn_net_Interface___error_ mVar15;
  multireturn_net_Interface___error_ mVar16;
  __net_Interface ift;
  multireturn___net_Interface_error_ mVar17;
  string name_spill;
  runtime__type *local_68;
  void *local_60;
  char local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  func_unsafe_Pointer__unsafe_Pointer__bool **local_48;
  
  prVar10 = local_68;
  mVar13.~r2.tab = name.len;
                    /* Unresolved local var: []net.Interface ift@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (name_spill.len != 0) {
    mVar17 = net_interfaceTable(name_spill.len);
    ift.cap = mVar17.~r2.tab;
    if (CONCAT71(uStack_4f,local_50) != 0) {
      runtime_newobject((runtime__type *)&DAT_0026a420);
      local_68->ptrdata = 5;
      local_68->size = (uintptr)&DAT_002890f1;
      local_68->equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)&DAT_00000006;
      *(undefined **)&local_68->hash = &DAT_00289ba6;
      local_68->gcdata = (uint8 *)0x0;
      prVar10->str = 0;
      prVar10->ptrToThis = 0;
      local_68[1].size = 0;
      local_68[1].ptrdata = 0;
      prVar10[1].hash = (int)CONCAT71(uStack_4f,local_50);
      prVar10[1].tflag = (char)((uint7)uStack_4f >> 0x18);
      prVar10[1].align = (char)((uint7)uStack_4f >> 0x20);
      prVar10[1].fieldAlign = (char)((uint7)uStack_4f >> 0x28);
      prVar10[1].kind = (char)((uint7)uStack_4f >> 0x30);
      if (runtime_writeBarrier._0_4_ == 0) {
        local_68[1].equal = local_48;
        prVar10 = local_68;
      }
      else {
        runtime_gcWriteBarrierCX();
        prVar10 = extraout_RAX_00;
      }
      mVar14.~r2.tab = (runtime_itab *)local_68;
      mVar14.~r1 = (net_Interface *)prVar10;
      mVar14.~r2.data = &go_itab__net_OpError_error;
      return mVar14;
    }
    if (local_60 != (void *)0x0) {
      ift.len = CONCAT71(uStack_4f,local_50);
      ift.array = (net_Interface *)local_68;
      net___ipv6ZoneCache__update(&net_zoneCache,ift,mVar17.~r2.data._0_1_);
    }
                    /* Unresolved local var: net.Interface * &ifi@[???] */
    runtime_newobject((runtime__type *)&DAT_0026a340);
    dst = local_68;
    if (0 < (long)local_60) {
      lVar12 = 0;
      while( true ) {
        if (runtime_writeBarrier._0_4_ == 0) {
          uVar2 = dst->ptrdata;
          prVar10->size = dst->size;
          prVar10->ptrdata = uVar2;
          rVar4 = dst->tflag;
          uVar5 = dst->align;
          uVar6 = dst->fieldAlign;
          uVar7 = dst->kind;
          ppfVar3 = dst->equal;
          prVar10->hash = dst->hash;
          prVar10->tflag = rVar4;
          prVar10->align = uVar5;
          prVar10->fieldAlign = uVar6;
          prVar10->kind = uVar7;
          prVar10->equal = ppfVar3;
          rVar8 = dst->str;
          rVar9 = dst->ptrToThis;
          prVar10->gcdata = dst->gcdata;
          prVar10->str = rVar8;
          prVar10->ptrToThis = rVar9;
          uVar2 = dst[1].ptrdata;
          prVar10[1].size = dst[1].size;
          prVar10[1].ptrdata = uVar2;
        }
        else {
          runtime_typedmemmove(prVar10,dst,&DAT_0026a340);
          local_68 = prVar10;
        }
        prVar1 = *(runtime__type **)&prVar10->hash;
        if ((prVar10->equal == (func_unsafe_Pointer__unsafe_Pointer__bool **)name_spill.len) &&
           (pvVar11 = local_60, runtime_memequal(), local_68 = prVar1, local_58 != '\0')) {
          mVar16.~r2.tab = (runtime_itab *)dst;
          mVar16.~r1 = (net_Interface *)prVar10;
          mVar16.~r2.data = pvVar11;
          return mVar16;
        }
        lVar12 = lVar12 + 1;
        if ((long)local_60 <= lVar12) break;
        dst = (runtime__type *)&dst[1].hash;
      }
    }
    runtime_newobject((runtime__type *)&DAT_0026a420);
    local_68->ptrdata = 5;
    local_68->size = (uintptr)&DAT_002890f1;
    local_68->equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)&DAT_00000006;
    *(undefined **)&local_68->hash = &DAT_00289ba6;
    local_68->gcdata = (uint8 *)0x0;
    local_68->str = 0;
    local_68->ptrToThis = 0;
    local_68[1].size = 0;
    local_68[1].ptrdata = 0;
    pvVar11 = net_errNoSuchInterface.data;
    *(runtime_itab **)&local_68[1].hash = net_errNoSuchInterface.tab;
    if (runtime_writeBarrier._0_4_ == 0) {
      local_68[1].equal = pvVar11;
    }
    else {
      runtime_gcWriteBarrierCX();
      local_68 = extraout_RAX_01;
    }
    mVar15.~r2.tab = (runtime_itab *)dst;
    mVar15.~r1 = (net_Interface *)local_68;
    mVar15.~r2.data = &go_itab__net_OpError_error;
    return mVar15;
  }
  runtime_newobject((runtime__type *)&DAT_0026a420);
  local_68->ptrdata = 5;
  local_68->size = (uintptr)&DAT_002890f1;
  local_68->equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)&DAT_00000006;
  *(undefined **)&local_68->hash = &DAT_00289ba6;
  local_68->gcdata = (uint8 *)0x0;
  prVar10->str = 0;
  prVar10->ptrToThis = 0;
  local_68[1].size = 0;
  local_68[1].ptrdata = 0;
  pvVar11 = net_errInvalidInterfaceName.data;
  *(runtime_itab **)&local_68[1].hash = net_errInvalidInterfaceName.tab;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_68[1].equal = pvVar11;
  }
  else {
    runtime_gcWriteBarrierCX();
    local_68 = extraout_RAX;
  }
  mVar13.~r1 = (net_Interface *)local_68;
  mVar13.~r2.data = &go_itab__net_OpError_error;
  return mVar13;
}


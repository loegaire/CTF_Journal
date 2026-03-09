
/* WARNING: Removing unreachable block (ram,0x004b9f2f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.getitab(runtime.interfacetype * inter, runtime._type *
   typ, bool canfail, runtime.itab * ~r3) */

runtime_itab * runtime_getitab(runtime_interfacetype *inter,runtime__type *typ,bool canfail)

{
  runtime_interfacetype *extraout_RAX;
  runtime_interfacetype *prVar1;
  runtime_interfacetype *extraout_RAX_00;
  runtime_interfacetype *extraout_RAX_01;
  runtime__type *extraout_RAX_02;
  runtime__type *extraout_RAX_03;
  runtime_itab *extraout_RDX;
  long in_FS_OFFSET;
  interface___ e;
  string sVar2;
  interface___ e_00;
  runtime_interfacetype *inter_spill;
  runtime__type *typ_spill;
  bool canfail_spill;
  runtime_interfacetype *local_40;
  runtime_name local_38;
  runtime_itab *local_30;
  
                    /* Unresolved local var: runtime.itab * m@[???]
                       Unresolved local var: runtime.itabTableType * t@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((inter_spill->mhdr).len == 0) {
    sVar2.len = (int)typ;
    sVar2.str = (uint8 *)0x2a1f67;
                    /* WARNING: Subroutine does not return */
    runtime_throw(sVar2);
  }
  prVar1 = (runtime_interfacetype *)(ulong)typ_spill->tflag;
  if ((typ_spill->tflag & 1) == 0) {
    if (!canfail_spill) {
      local_40 = (runtime_interfacetype *)CONCAT44(local_40._4_4_,((inter_spill->mhdr).array)->name)
      ;
      runtime_resolveNameOff(inter_spill,0);
      sVar2 = runtime_name_name(local_38);
      e_00.data = (void *)sVar2.len;
      runtime_newobject((runtime__type *)local_40);
      if (runtime_writeBarrier._0_4_ == 0) {
        *(runtime__type **)((long)local_40 + 8) = typ_spill;
        *(runtime_interfacetype **)((long)local_40 + 0x10) = inter_spill;
        prVar1 = local_40;
      }
      else {
        runtime_gcWriteBarrierCX();
        runtime_gcWriteBarrierCX();
        prVar1 = (runtime_interfacetype *)extraout_RAX_03;
      }
      (prVar1->typ).gcdata = local_38.bytes;
      if (runtime_writeBarrier._0_4_ != 0) goto LAB_004ba179;
      (prVar1->typ).equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)local_40;
      do {
        e_00._type = &prVar1->typ;
        runtime_gopanic(e_00);
LAB_004ba179:
        runtime_gcWriteBarrierCX();
        prVar1 = (runtime_interfacetype *)extraout_RAX_02;
      } while( true );
    }
    return (runtime_itab *)inter_spill;
  }
  local_40 = inter_spill;
  local_38.bytes = (uint8 *)typ_spill;
  runtime___itabTableType__find
            ((runtime_itabTableType *)inter_spill,prVar1,(runtime__type *)runtime_itabTable);
  if (local_30 == (runtime_itab *)0x0) {
    runtime_lock2(&runtime_itabLock);
    runtime___itabTableType__find((runtime_itabTableType *)inter_spill,prVar1,typ_spill);
    local_40 = (runtime_interfacetype *)0x0;
    local_38.bytes = (uint8 *)&runtime_memstats.other_sys;
    runtime_persistentalloc((uintptr)inter_spill,(uintptr)prVar1,&runtime_memstats.other_sys);
    if (runtime_writeBarrier._0_4_ == 0) {
      _DAT_00000000 = inter_spill;
      _DAT_00000008 = typ_spill;
      prVar1 = inter_spill;
    }
    else {
      runtime_gcWriteBarrier();
      runtime_gcWriteBarrierBX();
      prVar1 = extraout_RAX;
      local_30 = extraout_RDX;
    }
    local_30->hash = 0;
    runtime___itab__init((runtime_itab *)prVar1);
    runtime_itabAdd(local_30);
    runtime_unlock2(&runtime_itabLock);
  }
  if (local_30->fun[0] != 0) {
    return local_30;
  }
  if (!canfail_spill) {
    sVar2 = runtime___itab__init(local_30);
    e.data = (void *)sVar2.len;
    runtime_newobject(&local_40->typ);
    if (runtime_writeBarrier._0_4_ == 0) {
      (local_40->typ).ptrdata = (uintptr)typ_spill;
      *(runtime_interfacetype **)&(local_40->typ).hash = inter_spill;
      prVar1 = local_40;
    }
    else {
      runtime_gcWriteBarrierCX();
      runtime_gcWriteBarrierCX();
      prVar1 = extraout_RAX_01;
    }
    (prVar1->typ).gcdata = local_38.bytes;
    if (runtime_writeBarrier._0_4_ != 0) goto LAB_004ba0b5;
    (prVar1->typ).equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)local_40;
    do {
      e._type = &prVar1->typ;
      runtime_gopanic(e);
LAB_004ba0b5:
      runtime_gcWriteBarrierCX();
      prVar1 = extraout_RAX_00;
    } while( true );
  }
  return local_30;
}


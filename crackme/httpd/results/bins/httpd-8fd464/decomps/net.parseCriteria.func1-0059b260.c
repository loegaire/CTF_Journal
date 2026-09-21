
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.parseCriteria.func1([]uint8 f, error ~r1) */

error net_parseCriteria_func1(__uint8 f)

{
  void *extraout_RAX;
  undefined1 (*pauVar1) [16];
  runtime_itab *extraout_RAX_00;
  runtime_itab *prVar2;
  long lVar3;
  long in_RDX;
  long extraout_RDX;
  void *pvVar4;
  int in_RDI;
  long in_FS_OFFSET;
  string sVar5;
  error eVar6;
  error eVar7;
  error eVar8;
  runtime_slice old;
  __uint8 x;
  __uint8 f_spill;
  runtime_itab *local_a0;
  runtime_interfacetype *local_90;
  uint8 *local_88;
  void *local_80;
  long local_78;
  undefined8 local_70;
  void *local_30;
  runtime_interfacetype *local_28;
  uint8 *puStack_20;
  runtime_interfacetype *local_18;
  uint8 *puStack_10;
  
                    /* Unresolved local var: []net.nssCriterion * &c@[DW_OP_reg0(RAX)]
                       Unresolved local var: bool not@[???]
                       Unresolved local var: int eq@[???] */
  while (&local_28 <= *(runtime_interfacetype ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  pauVar1 = *(undefined1 (**) [16])(in_RDX + 8);
  if ((f_spill.len < 1) || (*f_spill.array != 0x21)) {
    pvVar4 = (void *)0x0;
  }
  else {
    f_spill.cap = f_spill.cap - 1;
    f_spill.array = f_spill.array + (-f_spill.cap >> 0x3f & 1);
    f_spill.len = f_spill.len + -1;
    pvVar4 = (void *)0x1;
  }
  if (f_spill.len < 3) {
    runtime_newobject((runtime__type *)&DAT_00241ea0);
    local_a0->_type = (runtime__type *)0x13;
    local_a0->inter = (runtime_interfacetype *)&DAT_0029b4b9;
    eVar8.data = pvVar4;
    eVar8.tab = local_a0;
    return eVar8;
  }
  local_90 = (runtime_interfacetype *)CONCAT71(local_90._1_7_,0x3d);
  internal_bytealg_IndexByte();
  if (local_88 == (uint8 *)0xffffffffffffffff) {
    runtime_newobject((runtime__type *)&DAT_00241ea0);
    ((runtime_itab *)f_spill.len)->_type = (runtime__type *)&DAT_0000001a;
    ((runtime_itab *)f_spill.len)->inter = (runtime_interfacetype *)&DAT_0029f409;
    eVar7.data = pvVar4;
    eVar7.tab = (runtime_itab *)f_spill.len;
    return eVar7;
  }
  x.len = (int)pvVar4;
  x.array = f_spill.array;
  x.cap = f_spill.len;
  net_lowerASCIIBytes(x);
  if (local_88 <= (ulong)f_spill.cap) {
    if ((ulong)f_spill.len < (runtime_itab *)(local_88 + 1)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    local_28 = (runtime_interfacetype *)0x0;
    puStack_20 = (uint8 *)0x0;
    local_18 = (runtime_interfacetype *)0x0;
    puStack_10 = (uint8 *)0x0;
    local_30 = pvVar4;
    sVar5 = runtime_slicebytetostring
                      ((runtime_tmpBuf *)f_spill.array,(uint8 *)f_spill.len,(int)local_88);
    local_28 = local_90;
    puStack_20 = local_88;
    runtime_slicebytetostring
              ((runtime_tmpBuf *)(f_spill.len + (-1 - (long)local_88)),(uint8 *)sVar5.len,
               (int)local_88);
    local_18 = local_90;
    puStack_10 = local_88;
    lVar3 = *(long *)(*pauVar1 + 8);
    pvVar4 = *(void **)*pauVar1;
    if (*(ulong *)pauVar1[1] < *(long *)(*pauVar1 + 8) + 1U) {
      old.cap = in_RDI;
      old._0_16_ = *pauVar1;
      runtime_growslice((runtime__type *)&DAT_002605e0,old,*(ulong *)pauVar1[1]);
      *(undefined8 *)pauVar1[1] = local_70;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(void **)*pauVar1 = local_80;
        lVar3 = local_78;
        pvVar4 = local_80;
      }
      else {
        runtime_gcWriteBarrier();
        lVar3 = local_78;
        pvVar4 = extraout_RAX;
      }
    }
    *(long *)(*pauVar1 + 8) = lVar3 + 1;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(void **)((long)pvVar4 + lVar3 * 0x28) = local_30;
      prVar2 = (runtime_itab *)((long)pvVar4 + lVar3 * 0x28 + 8);
      prVar2->inter = local_28;
      *(uint8 **)((long)pvVar4 + lVar3 * 0x28 + 0x10) = puStack_20;
      *(runtime_interfacetype **)((long)pvVar4 + lVar3 * 0x28 + 0x18) = local_18;
      *(uint8 **)((long)pvVar4 + lVar3 * 0x28 + 0x20) = puStack_10;
    }
    else {
      runtime_typedmemmove((runtime__type *)&local_30,pvVar4,(void *)((long)pvVar4 + lVar3 * 0x28));
      prVar2 = extraout_RAX_00;
    }
    eVar6.data = pvVar4;
    eVar6.tab = prVar2;
    return eVar6;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAcap();
}


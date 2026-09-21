
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.dnsDefaultSearch([]string ~r0) */

__string net_dnsDefaultSearch(void)

{
  byte bVar1;
  runtime__type *extraout_RAX;
  runtime__type *typ;
  runtime__type *prVar2;
  ulong uVar3;
  uint8 *puVar4;
  uint8 *puVar5;
  undefined8 unaff_RBX;
  uint8 *puVar6;
  error *in_RSI;
  string *in_RDI;
  long in_FS_OFFSET;
  string sVar7;
  __string _Var8;
  __string _Var9;
  __string _Var10;
  string a0;
  runtime__type *local_60;
  runtime__type *local_58;
  long local_50;
  long local_48;
  runtime__type *local_38;
  uint8 *local_30;
  
                    /* Unresolved local var: string hn@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  (**net_getHostname)(in_RDI,in_RSI);
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
  if (local_50 != 0) {
    _Var10.len = unaff_RBX;
    _Var10.array = (string *)local_58;
    _Var10.cap = (int)local_60;
    return _Var10;
  }
  prVar2 = local_60;
  internal_bytealg_IndexByteString();
  if ((-1 < local_48) && (prVar2 = local_58, local_48 < (long)((long)&local_58[-1].ptrToThis + 3)))
  {
    if (local_58 < (runtime__type *)(local_48 + 1U)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    uVar3 = (long)local_58 - local_48;
    puVar4 = (uint8 *)(uVar3 - 1);
    prVar2 = (runtime__type *)((long)&local_60->size + (local_48 + 1U & -(long)puVar4 >> 0x3f));
    if (((long)puVar4 < 1) ||
       (bVar1 = *(byte *)((uVar3 - 2) + (long)prVar2), uVar3 = (ulong)bVar1, typ = prVar2,
       puVar6 = puVar4, bVar1 != 0x2e)) {
      sVar7.len = (int)in_RSI;
      sVar7.str = (uint8 *)in_RDI;
      a0.len = uVar3;
      a0.str = puVar4;
      sVar7 = runtime_concatstring2((runtime_tmpBuf *)((long)&go_string__ + 4),a0,sVar7);
      typ = local_38;
      puVar4 = local_30;
      puVar6 = (uint8 *)sVar7.len;
      local_58 = prVar2;
    }
    puVar5 = puVar4;
    runtime_newobject(typ);
    local_58->ptrdata = (uintptr)puVar4;
    if (runtime_writeBarrier._0_4_ == 0) {
      local_58->size = (uintptr)typ;
    }
    else {
      runtime_gcWriteBarrier();
      typ = extraout_RAX;
    }
    _Var8.len = (int)puVar6;
    _Var8.array = (string *)typ;
    _Var8.cap = (int)puVar5;
    return _Var8;
  }
  _Var9.len = unaff_RBX;
  _Var9.array = (string *)local_48;
  _Var9.cap = (int)prVar2;
  return _Var9;
}


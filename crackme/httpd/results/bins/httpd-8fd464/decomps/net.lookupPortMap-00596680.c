
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.lookupPortMap(string network, string service, int port, error
   error) */

multireturn_int_error__conflict12 net_lookupPortMap(string network,string service)

{
  runtime_maptype *t;
  int in_RSI;
  uint8 *puVar2;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  string sVar3;
  string ky;
  string a1;
  string a0;
  string a2;
  multireturn_void___bool_ mVar4;
  __uint8 x;
  multireturn_int_error__conflict12 mVar5;
  multireturn_int_error__conflict12 mVar6;
  string network_spill;
  string service_spill;
  map_string_map_string_int local_90;
  undefined8 *local_78;
  char local_70;
  bucket<string,map[string]int> *local_60;
  bucket<string,map[string]int> *local_58;
  undefined1 local_39 [49];
  runtime_maptype *prVar1;
  
  puVar2 = (uint8 *)service.len;
  while (local_39 + 0x21 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (network_spill.len == 4) {
    runtime_cmpstring();
    if ((long)local_78 < 1) {
      if ((*(int *)network_spill.str == 0x34706374) || (*(int *)network_spill.str == 0x36706374)) {
        network_spill.len = 3;
        network_spill.str = &DAT_00287d0b;
      }
    }
    else if ((*(int *)network_spill.str == 0x34706475) || (*(int *)network_spill.str == 0x36706475))
    {
      network_spill.len = 3;
      network_spill.str = &DAT_00287d2c;
    }
  }
  local_90 = net_services;
  sVar3.len = (int)puVar2;
  sVar3.str = network_spill.str;
  local_39._41_8_ = network_spill.str;
  mVar4 = runtime_mapaccess2_faststr
                    ((runtime_maptype *)network_spill.len,(runtime_hmap *)&DAT_002363e0,sVar3);
  mVar5.error.tab = (uint8 *)CONCAT71(0x2363,mVar4.~r4);
  if (local_70 != '\0') {
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: uint8[25] lowerService@[???] */
    local_39._0_8_ = 0;
    local_39[8] = 0;
    local_39[9] = 0;
    local_39._10_2_ = 0;
    local_39._12_4_ = 0;
    local_39[0x10] = 0;
    local_39._17_8_ = 0;
    t = (runtime_maptype *)&DAT_00000019;
    if (service_spill.len < 0x19) {
      t = (runtime_maptype *)service_spill.len;
    }
    local_39._25_8_ = (map_string_map_string_int)*local_78;
    if (service_spill.str != local_39) {
      runtime_memmove();
                    /* Unresolved local var: int port@[???] */
    }
    x.len = (runtime_hmap *)local_39;
    if ((runtime_maptype *)&DAT_00000019 < t) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    x.array = (uint8 *)local_39._25_8_;
    x.cap = (int)t;
    prVar1 = t;
    in_RSI = service_spill.len;
    net_lowerASCIIBytes(x);
    local_90 = (map_string_map_string_int)local_39._25_8_;
    ky.len = (int)service_spill.str;
    ky.str = (uint8 *)prVar1;
    mVar4 = runtime_mapaccess2_faststr(t,x.len,ky);
    mVar5.error.tab = (uint8 *)CONCAT71((int7)((ulong)x.len >> 8),mVar4.~r4);
    puVar2 = service_spill.str;
    if ((local_70 != '\0') && ((runtime_maptype *)service_spill.len == t)) {
      mVar5.port = *local_78;
      mVar5.error.data = (void *)service_spill.len;
      return mVar5;
    }
  }
  runtime_newobject((runtime__type *)&DAT_0024c8c0);
  local_39._33_8_ = local_90;
  local_90->flags = 0xc;
  local_90->B = 0;
  local_90->noverflow = 0;
  local_90->hash0 = 0;
  local_90->count = (int)FUN_00294336;
  a1.len = in_RSI;
  a1.str = puVar2;
  a0.len = service_spill.len;
  a0.str = mVar5.error.tab;
  a2.len = in_R9;
  a2.str = in_R8;
  sVar3 = runtime_concatstring3((runtime_tmpBuf *)local_90,a0,a1,a2);
  mVar6.error.tab = sVar3.len;
  *(bucket<string,map[string]int> **)(local_39._33_8_ + 0x18) = local_58;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(bucket<string,map[string]int> **)(local_39._33_8_ + 0x10) = local_60;
  }
  else {
    runtime_gcWriteBarrier();
  }
  mVar6.port = (int)go_itab__net_AddrError_error;
  mVar6.error.data = local_58;
  return mVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*ipv6ZoneCache).name(net.ipv6ZoneCache * zc, int index,
   string ~r1) */

string net___ipv6ZoneCache__name(net_ipv6ZoneCache *zc,int index)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [24];
  uint8 *puVar4;
  uint8 *puVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 in_RCX;
  ulong n;
  int iVar8;
  uint8 *ptr;
  undefined8 in_RSI;
  int in_RDI;
  long in_FS_OFFSET;
  string sVar9;
  __net_Interface ift;
  net_ipv6ZoneCache *zc_spill;
  int index_spill;
  byte local_50;
  char acStack_2d [21];
  undefined8 local_18;
  undefined8 local_10;
  
                    /* Unresolved local var: bool ok@[???]
                       Unresolved local var: string name@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (index_spill == 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = index;
    return (string)(auVar2 << 0x40);
  }
  ift.len = in_RCX;
  ift.array = (net_Interface *)index;
  ift.cap = in_RDI;
  net___ipv6ZoneCache__update(&net_zoneCache,ift,SUB81(in_RSI,0));
  LOCK();
  iVar1 = net_zoneCache.RWMutex.readerCount + 1;
  UNLOCK();
  uVar7 = net_zoneCache.RWMutex.readerCount + 1;
  net_zoneCache.RWMutex.readerCount = iVar1;
  if ((int)uVar7 < 0) {
    sync_runtime_SemacquireMutex(&net_zoneCache.RWMutex.readerSem,SUB81(index,0),(ulong)uVar7);
  }
  runtime_mapaccess2_fast64((runtime_maptype *)index_spill,(runtime_hmap *)index,0x235a20);
  puVar4 = _DAT_00000008;
                    /* Unresolved local var: int32 r@[???] */
  LOCK();
  iVar1 = net_zoneCache.RWMutex.readerCount + -1;
  UNLOCK();
  iVar8 = net_zoneCache.RWMutex.readerCount + -1;
  net_zoneCache.RWMutex.readerCount = iVar1;
  if (iVar8 < 0) {
    local_18 = _DAT_00000000;
    sync___RWMutex__rUnlockSlow(&net_zoneCache.RWMutex,iVar8);
  }
  puVar5 = (uint8 *)0x0;
  ptr = (uint8 *)(ulong)local_50;
  if (local_50 == 0) {
    auVar3._8_8_ = in_RDI;
    auVar3._0_8_ = puVar4;
    auVar3._16_8_ = 0;
    net___ipv6ZoneCache__update(&net_zoneCache,(__net_Interface)(auVar3 << 0x40),true);
    LOCK();
    iVar1 = net_zoneCache.RWMutex.readerCount + 1;
    UNLOCK();
    iVar8 = net_zoneCache.RWMutex.readerCount + 1;
    net_zoneCache.RWMutex.readerCount = iVar1;
    if (iVar8 < 0) {
      sync_runtime_SemacquireMutex(&net_zoneCache.RWMutex.readerSem,false,0x7a0010);
    }
    runtime_mapaccess2_fast64((runtime_maptype *)index_spill,(runtime_hmap *)0x0,0x235a20);
    ptr = _DAT_00000008;
                    /* Unresolved local var: int32 r@[???] */
    LOCK();
    iVar1 = net_zoneCache.RWMutex.readerCount + -1;
    UNLOCK();
    iVar8 = net_zoneCache.RWMutex.readerCount + -1;
    net_zoneCache.RWMutex.readerCount = iVar1;
    if (iVar8 < 0) {
      local_10 = _DAT_00000000;
      sync___RWMutex__rUnlockSlow(&net_zoneCache.RWMutex,iVar8);
    }
    puVar5 = (uint8 *)0x1;
  }
  sVar9.len = (int)ptr;
  sVar9.str = puVar5;
  if ((char)puVar5 == '\0') {
    acStack_2d[1] = '\0';
    acStack_2d[2] = '\0';
    acStack_2d[3] = '\0';
    acStack_2d[4] = '\0';
                    /* Unresolved local var: uint8[20] buf@[???]
                       Unresolved local var: int i@[???] */
    acStack_2d[5] = '\0';
    acStack_2d[6] = '\0';
    acStack_2d[7] = '\0';
    acStack_2d[8] = '\0';
    acStack_2d[9] = '\0';
    acStack_2d[10] = '\0';
    acStack_2d[0xb] = '\0';
    acStack_2d[0xc] = '\0';
    acStack_2d[0xd] = '\0';
    acStack_2d[0xe] = '\0';
    acStack_2d[0xf] = '\0';
    acStack_2d[0x10] = '\0';
    acStack_2d[0x11] = '\0';
    acStack_2d[0x12] = '\0';
    acStack_2d[0x13] = '\0';
    acStack_2d[0x14] = '\0';
    uVar6 = 0x13;
    while (9 < (ulong)index_spill) {
      if (0x13 < uVar6) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      ptr = (uint8 *)((ulong)index_spill % 10 + 0x30);
      acStack_2d[uVar6 + 1] = (char)ptr;
      uVar6 = uVar6 - 1;
      index_spill = (ulong)index_spill / 10;
    }
    if (0x13 < uVar6) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    acStack_2d[uVar6 + 1] = (char)index_spill + '0';
    n = (long)(uVar6 - 0x14) >> 0x3f;
    sVar9 = runtime_slicebytetostring((runtime_tmpBuf *)(acStack_2d + (uVar6 & n) + 1),ptr,n);
  }
  return sVar9;
}


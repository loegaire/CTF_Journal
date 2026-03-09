
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*ipv6ZoneCache).index(net.ipv6ZoneCache * zc, string name,
   int ~r1) */

int net___ipv6ZoneCache__index(net_ipv6ZoneCache *zc,string name)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined1 force;
  undefined8 in_RSI;
  int in_RDI;
  long in_FS_OFFSET;
  string ky;
  string ky_00;
  __net_Interface ift;
  __net_Interface ift_00;
  net_ipv6ZoneCache *zc_spill;
  string name_spill;
  uint7 uStack_2f;
  byte local_28;
  
  iVar6 = name.len;
  ift.array = (runtime_hmap *)name.str;
                    /* Unresolved local var: int index@[???]
                       Unresolved local var: bool ok@[???] */
  while (force = (undefined1)in_RSI,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (name_spill.len != 0) {
    ift.len = iVar6;
    ift.cap = in_RDI;
    net___ipv6ZoneCache__update(&net_zoneCache,ift,(bool)force);
    LOCK();
    iVar3 = net_zoneCache.RWMutex.readerCount + 1;
    UNLOCK();
    uVar5 = net_zoneCache.RWMutex.readerCount + 1;
    net_zoneCache.RWMutex.readerCount = iVar3;
    if ((int)uVar5 < 0) {
      sync_runtime_SemacquireMutex(&net_zoneCache.RWMutex.readerSem,name.str._0_1_,(ulong)uVar5);
    }
    ky.len = in_RDI;
    ky.str = (uint8 *)&DAT_00236320;
    runtime_mapaccess2_faststr((runtime_maptype *)name_spill.str,ift.array,ky);
    uVar2 = *(undefined8 *)((ulong)uStack_2f << 8);
                    /* Unresolved local var: int32 r@[???] */
    LOCK();
    iVar3 = net_zoneCache.RWMutex.readerCount + -1;
    UNLOCK();
    iVar7 = net_zoneCache.RWMutex.readerCount + -1;
    net_zoneCache.RWMutex.readerCount = iVar3;
    if (iVar7 < 0) {
      sync___RWMutex__rUnlockSlow(&net_zoneCache.RWMutex,0x7a0010);
    }
    if (local_28 == 0) {
      ift_00.len = uVar2;
      ift_00.array = (net_Interface *)0x7a0010;
      ift_00.cap = in_RDI;
      net___ipv6ZoneCache__update(&net_zoneCache,ift_00,(bool)force);
      LOCK();
      iVar3 = net_zoneCache.RWMutex.readerCount + 1;
      UNLOCK();
      iVar7 = net_zoneCache.RWMutex.readerCount + 1;
      net_zoneCache.RWMutex.readerCount = iVar3;
      if (iVar7 < 0) {
        sync_runtime_SemacquireMutex(&net_zoneCache.RWMutex.readerSem,true,0x7a0010);
      }
      ky_00.len = in_RDI;
      ky_00.str = (uint8 *)name_spill.len;
      runtime_mapaccess2_faststr
                ((runtime_maptype *)name_spill.str,
                 (runtime_hmap *)&net_zoneCache.RWMutex.readerCount,ky_00);
                    /* Unresolved local var: int32 r@[???] */
      LOCK();
      iVar3 = net_zoneCache.RWMutex.readerCount + -1;
      UNLOCK();
      iVar7 = net_zoneCache.RWMutex.readerCount + -1;
      net_zoneCache.RWMutex.readerCount = iVar3;
      if (iVar7 < 0) {
        sync___RWMutex__rUnlockSlow(&net_zoneCache.RWMutex,0x7a0010);
      }
    }
    uVar4 = (ulong)local_28;
    if (local_28 == 0) {
      lVar8 = 0;
      lVar9 = 0;
      while ((((uVar4 = name_spill.len, lVar9 < name_spill.len &&
               (bVar1 = name_spill.str[lVar9], 0x2f < bVar1)) && (bVar1 < 0x3a)) &&
             (lVar8 = (ulong)(byte)(bVar1 - 0x30) + lVar8 * 10, lVar8 < 0xffffff))) {
        lVar9 = lVar9 + 1;
      }
    }
    return uVar4;
  }
  return 0;
}


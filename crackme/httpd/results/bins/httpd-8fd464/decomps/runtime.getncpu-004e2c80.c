
/* WARNING: Removing unreachable block (ram,0x004e2e13) */
/* WARNING: Removing unreachable block (ram,0x004e2dd1) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.getncpu(int32 ~r0) */

int32 runtime_getncpu(void)

{
  uint32 uVar1;
  int32 extraout_EAX;
  long lVar2;
  int iVar3;
  undefined8 unaff_RBX;
  byte bVar4;
  byte *pbVar5;
  uint32 (*mib) [24];
  long in_FS_OFFSET;
  __uint8 name;
  int local_20a8;
  int local_2098;
  ulong local_2088;
  uint32 local_2080 [14];
  undefined1 auStack_2048 [64];
  byte local_2008 [8192];
  
  bVar4 = 0;
  while( true ) {
                    /* Unresolved local var: uint32 miblen@[???]
                       Unresolved local var: int maskSize@[???]
                       Unresolved local var: int32 n@[???]
                       Unresolved local var: uint8[8192] mask@[???]
                       Unresolved local var: uint32[24] mib@[???]
                       Unresolved local var: uintptr dstsize@[???]
                       Unresolved local var: uint32 maxcpus@[???] */
    if (((undefined1 *)0x2047 < &stack0x00000000) &&
       (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18) < auStack_2048)) break;
    runtime_morestackc();
  }
  pbVar5 = local_2008;
  for (lVar2 = 0x400; lVar2 != 0; lVar2 = lVar2 + -1) {
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    pbVar5 = pbVar5 + ((ulong)bVar4 * -2 + 1) * 8;
  }
  mib = (uint32 (*) [24])&local_2088;
  name.array = FUN_0051a18b();
  local_2080[2] = 0x6e72656b;
  local_2080[3] = 0x706d732e;
  local_2080[4] = 0x78616d2e;
  local_2080[5] = 0x73757063;
  name.len = unaff_RBX;
  name.cap = lVar2;
  uVar1 = runtime_sysctlnametomib(name,mib);
  if (local_20a8 == 0) {
    return uVar1;
  }
  local_2080[0] = 4;
  local_2080[1] = 0;
  runtime_sysctl();
  if (local_2098 != 0) {
    return extraout_EAX;
  }
  local_2088 = 8;
  runtime_cpuset_getaffinity();
                    /* Unresolved local var: uint8 v@[???] */
  if (local_2088 < 0x2001) {
    iVar3 = 0;
    for (lVar2 = 0; lVar2 < (long)local_2088; lVar2 = lVar2 + 1) {
      for (bVar4 = local_2008[lVar2]; bVar4 != 0; bVar4 = bVar4 >> 1) {
        iVar3 = iVar3 + (bVar4 & 1);
      }
    }
    if (iVar3 != 0) {
      return (int32)lVar2;
    }
    return (int32)lVar2;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAlen();
}


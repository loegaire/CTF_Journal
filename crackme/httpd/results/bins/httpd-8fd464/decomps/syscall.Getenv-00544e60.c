
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.Getenv(string key, string value, bool found) */

multireturn_string_bool__conflict3 syscall_Getenv(string key)

{
  ulong uVar1;
  int iVar2;
  undefined1 auVar3 [17];
  uint8 *extraout_RAX;
  long lVar4;
  uint8 *extraout_RAX_00;
  uint8 *extraout_RAX_01;
  undefined1 uVar5;
  uint uVar6;
  undefined8 in_RCX;
  uint8 *puVar7;
  long lVar8;
  runtime_hmap *h;
  int in_RDI;
  long in_FS_OFFSET;
  multireturn_void___bool_ mVar9;
  multireturn_string_bool__conflict3 mVar10;
  multireturn_string_bool__conflict3 mVar11;
  multireturn_string_bool__conflict3 mVar12;
  string ky;
  string key_spill;
  uint8 *puStack0000000000000018;
  long lStack0000000000000020;
  undefined1 uStack0000000000000028;
  ulong *local_30;
  char local_28;
  
  h = (runtime_hmap *)key.len;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: string s@[???] */
  while (uVar5 = (undefined1)in_RCX,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  puStack0000000000000018 = (uint8 *)0x0;
  lStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  if (syscall_envOnce.done == 0) {
    sync___Once__doSlow((sync_Once *)&PTR_syscall_copyenv_002b3b18,(func__ **)h);
  }
  if (key_spill.len != 0) {
    LOCK();
    iVar2 = syscall_envLock.readerCount + 1;
    UNLOCK();
    uVar6 = syscall_envLock.readerCount + 1;
    syscall_envLock.readerCount = iVar2;
    if ((int)uVar6 < 0) {
      sync_runtime_SemacquireMutex(&syscall_envLock.readerSem,key.len._0_1_,(ulong)uVar6);
    }
    ky.len = in_RDI;
    ky.str = key_spill.str;
    mVar9 = runtime_mapaccess2_faststr((runtime_maptype *)key_spill.len,h,ky);
    uVar5 = SUB81(key_spill.str,0);
    mVar10.value.len = CONCAT71(key.len._1_7_,mVar9.~r4);
    uVar1 = *local_30;
    if (local_28 != '\0') {
      if ((ulong)syscall_envs.len <= uVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      puVar7 = syscall_envs.array[uVar1].str;
      lVar8 = 0;
                    /* Unresolved local var: int i@[???] */
      while( true ) {
        if (syscall_envs.array[uVar1].len <= lVar8) {
          puStack0000000000000018 = (uint8 *)0x0;
          lStack0000000000000020 = 0;
          uStack0000000000000028 = 0;
          sync___RWMutex__RUnlock(&syscall_envLock);
          mVar12.value.len = mVar10.value.len;
          mVar12.value.str = extraout_RAX_01;
          mVar12.found = SUB81(puVar7,0);
          return mVar12;
        }
        mVar10.value.len = (ulong)puVar7[lVar8];
        if (puVar7[lVar8] == 0x3d) break;
        lVar8 = lVar8 + 1;
      }
      lVar4 = (syscall_envs.array[uVar1].len - lVar8) + -1;
      puStack0000000000000018 = puVar7 + (lVar8 + 1U & -lVar4 >> 0x3f);
      uStack0000000000000028 = 1;
      lStack0000000000000020 = lVar4;
      sync___RWMutex__RUnlock(&syscall_envLock);
      mVar11.value.len = lVar4;
      mVar11.value.str = extraout_RAX_00;
      mVar11.found = SUB81(puVar7,0);
      return mVar11;
    }
    puStack0000000000000018 = (uint8 *)0x0;
    lStack0000000000000020 = 0;
    uStack0000000000000028 = 0;
    sync___RWMutex__RUnlock(&syscall_envLock);
    mVar10.value.str = extraout_RAX;
    mVar10.found = (bool)uVar5;
    return mVar10;
  }
  auVar3[8] = uVar5;
  auVar3._0_8_ = h;
  auVar3._9_8_ = 0;
  return (multireturn_string_bool__conflict3)(auVar3 << 0x40);
}


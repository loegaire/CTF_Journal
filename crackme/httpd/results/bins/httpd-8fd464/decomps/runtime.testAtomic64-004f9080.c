
/* WARNING: Removing unreachable block (ram,0x004f921e) */
/* WARNING: Removing unreachable block (ram,0x004f91cf) */
/* WARNING: Removing unreachable block (ram,0x004f90c5) */
/* WARNING: Removing unreachable block (ram,0x004f91e8) */
/* WARNING: Removing unreachable block (ram,0x004f9237) */
/* WARNING: Removing unreachable block (ram,0x004f929e) */
/* WARNING: Removing unreachable block (ram,0x004f92b7) */
/* WARNING: Removing unreachable block (ram,0x004f9205) */
/* WARNING: Removing unreachable block (ram,0x004f90f6) */
/* WARNING: Removing unreachable block (ram,0x004f9250) */
/* WARNING: Removing unreachable block (ram,0x004f9285) */
/* WARNING: Removing unreachable block (ram,0x004f9269) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_testAtomic64(void)

{
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  LOCK();
  UNLOCK();
  runtime_test_x64 = 0x2a;
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  LOCK();
  runtime_test_z64 = 0x30000000003;
  UNLOCK();
  return;
}


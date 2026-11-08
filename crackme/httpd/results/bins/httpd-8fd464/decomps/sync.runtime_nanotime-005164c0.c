
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sync.runtime_nanotime(int64 ~r0) */

int64 sync_runtime_nanotime(void)

{
  long in_FS_OFFSET;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_nanotime1();
  return local_10;
}


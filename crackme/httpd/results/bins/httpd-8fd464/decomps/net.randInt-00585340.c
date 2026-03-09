
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.randInt(int ~r0) */

int net_randInt(void)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  
                    /* Unresolved local var: uint u@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  net_fastrand();
  net_fastrand();
  return (long)local_18;
}


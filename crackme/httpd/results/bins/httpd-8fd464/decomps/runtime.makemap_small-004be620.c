
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.makemap_small(runtime.hmap * ~r0) */

runtime_hmap * runtime_makemap_small(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long in_FS_OFFSET;
  long local_10;
  
                    /* Unresolved local var: runtime.hmap * h@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_002753c0);
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 s1@[???]
                       Unresolved local var: uint32 s0@[???] */
  lVar2 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  uVar3 = *(uint *)(lVar2 + 0x128);
  uVar1 = *(uint *)(lVar2 + 300);
  *(uint *)(lVar2 + 0x128) = uVar1;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = uVar1 >> 0x10 ^ uVar3 >> 7 ^ uVar1 ^ uVar3;
  *(uint *)(lVar2 + 300) = uVar3;
  uVar1 = uVar1 + uVar3;
  *(uint *)(local_10 + 0xc) = uVar1;
  return (runtime_hmap *)(ulong)uVar1;
}


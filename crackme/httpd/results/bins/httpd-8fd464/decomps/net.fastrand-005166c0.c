
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.fastrand(uint32 ~r0) */

uint32 net_fastrand(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long in_FS_OFFSET;
  
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
  return uVar1 + uVar3;
}


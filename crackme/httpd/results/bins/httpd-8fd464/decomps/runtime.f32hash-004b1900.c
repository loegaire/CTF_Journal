
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.f32hash(void * p, uintptr h, uintptr ~r2) */

uintptr runtime_f32hash(void *p,uintptr h)

{
  float fVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long in_FS_OFFSET;
  void *p_spill;
  uintptr h_spill;
  undefined8 local_10;
  
                    /* Unresolved local var: float32 f@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  fVar1 = *(float *)p_spill;
  if ((fVar1 == 0.0) && (!NAN(fVar1))) {
    return (h_spill ^ 0x756ea16a56a621) * 0x52ef6bbb8f63bf;
  }
  if (NAN(fVar1)) {
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 s1@[???]
                       Unresolved local var: uint32 s0@[???] */
    lVar3 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
    uVar4 = *(uint *)(lVar3 + 0x128);
    uVar2 = *(uint *)(lVar3 + 300);
    *(uint *)(lVar3 + 0x128) = uVar2;
    uVar4 = uVar4 << 0x11 ^ uVar4;
    *(uint *)(lVar3 + 300) = uVar2 >> 0x10 ^ uVar4 >> 7 ^ uVar2 ^ uVar4;
    return 0x52ef6bbb8f63bf;
  }
  runtime_memhash();
  return local_10;
}


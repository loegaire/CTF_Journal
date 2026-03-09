
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.rawstring(int size, string s, []uint8 b) */

multireturn_string___uint8_ runtime_rawstring(int size)

{
  undefined8 in_RCX;
  runtime__type *unaff_RBX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  multireturn_string___uint8_ mVar1;
  int size_spill;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 local_10;
  
                    /* Unresolved local var: void * p@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  runtime_mallocgc(size_spill,unaff_RBX,SUB81(in_RCX,0));
  mVar1.s.len = (int)unaff_RBX;
  mVar1.s.str = (uint8 *)local_10;
  mVar1.b.array = (uint8 *)size_spill;
  mVar1.b.cap = in_RSI;
  mVar1.b.len = in_RDI;
  return mVar1;
}


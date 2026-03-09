
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.findnull(uint8 * s, int ~r1) */

int runtime_findnull(uint8 *s)

{
  long lVar1;
  long lVar2;
  void *ptr;
  undefined8 local_38;
  
                    /* Unresolved local var: int offset@[???]
                       Unresolved local var: int safeLen@[???] */
  if (ptr != (void *)0x0) {
    lVar1 = -(((ulong)ptr & 0xfff) - 0x1000);
    lVar2 = 0;
    while( true ) {
                    /* Unresolved local var: int i@[???] */
      internal_bytealg_IndexByteString();
      if (local_38 != -1) break;
                    /* Unresolved local var: string t@[???] */
      lVar2 = lVar2 + lVar1;
      lVar1 = 0x1000;
    }
    return local_38 + lVar2;
  }
  return 0;
}


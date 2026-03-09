
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void crypto.Hash.Size(crypto.Hash h, int ~r0) */

int crypto_Hash_Size(crypto_Hash h)

{
  byte bVar1;
  ulong uVar2;
  void *unaff_RBX;
  undefined1 *puVar3;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  crypto_Hash h_spill;
  
  do {
    puVar3 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar3 = (undefined1 *)((long)register0x00000020 + -0x18);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      uVar2 = *(ulong *)((long)register0x00000020 + 8);
      if (uVar2 - 1 < 0x13) {
        if (uVar2 < (ulong)crypto_digestSizes.len) {
          bVar1 = crypto_digestSizes.array[uVar2];
          *(ulong *)((long)register0x00000020 + 0x10) = (ulong)bVar1;
          return (ulong)bVar1;
        }
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x62ea77;
        runtime_panicIndexU();
      }
      *(undefined **)((long)register0x00000020 + -0x18) = &DAT_00225520;
      *(undefined ***)((long)register0x00000020 + -0x10) = &crypto_tls__stmp_65;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x62ea93;
      e.data = unaff_RBX;
      e._type = (runtime__type *)&crypto_tls__stmp_65;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar3 + -8) = 0x62ea99;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar3;
  } while( true );
}


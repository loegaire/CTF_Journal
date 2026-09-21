
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void crypto.(*Hash).Size(int ~r0) */

int crypto___Hash__Size(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  void *unaff_RBX;
  undefined1 *puVar5;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  
  do {
                    /* Unresolved local var: crypto.Hash h@[???] */
    lVar2 = *(long *)(in_FS_OFFSET + -8);
    puVar5 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(lVar2 + 0x10) < register0x00000020) {
      puVar5 = (undefined1 *)((long)register0x00000020 + -0x18);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      plVar3 = *(long **)(lVar2 + 0x20);
      if ((plVar3 != (long *)0x0) &&
         ((undefined1 *)*plVar3 == (undefined1 *)((long)register0x00000020 + 8))) {
        *plVar3 = (long)((long)register0x00000020 + -0x18);
      }
      if (*(ulong **)((long)register0x00000020 + 8) != (ulong *)0x0) {
        uVar4 = **(ulong **)((long)register0x00000020 + 8);
        if (uVar4 - 1 < 0x13) {
          if (uVar4 < (ulong)crypto_digestSizes.len) {
            bVar1 = crypto_digestSizes.array[uVar4];
            *(ulong *)((long)register0x00000020 + 0x10) = (ulong)bVar1;
            return (ulong)bVar1;
          }
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x62ecc8;
          runtime_panicIndexU();
        }
        *(undefined **)((long)register0x00000020 + -0x18) = &DAT_00225520;
        *(undefined ***)((long)register0x00000020 + -0x10) = &crypto_tls__stmp_65;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x62ece5;
        e.data = unaff_RBX;
        e._type = (runtime__type *)&crypto_tls__stmp_65;
        runtime_gopanic(e);
      }
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x62ecea;
      runtime_panicwrap();
    }
    *(undefined8 *)(puVar5 + -8) = 0x62ecf0;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar5;
  } while( true );
}


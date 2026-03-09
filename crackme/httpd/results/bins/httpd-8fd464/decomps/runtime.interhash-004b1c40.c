
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.interhash(void * p, uintptr h, uintptr ~r2) */

uintptr runtime_interhash(void *p,uintptr h)

{
  long lVar1;
  uintptr uVar2;
  runtime_tmpBuf *buf;
  int iVar3;
  runtime__type *prVar4;
  undefined1 *puVar5;
  undefined1 *unaff_RBP;
  int in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string sVar6;
  interface___ e;
  string a0;
  string a1;
  runtime_iface *a;
  uintptr h_spill;
  
  sVar6.len = (void *)h;
  do {
                    /* Unresolved local var: runtime.itab * tab@[???]
                       Unresolved local var: runtime._type * t@[???] */
    puVar5 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar5 = (undefined1 *)((long)register0x00000020 + -0x40);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      prVar4 = *(runtime__type **)((long)register0x00000020 + 8);
      if (prVar4->size == 0) {
        *(uintptr *)((long)register0x00000020 + 0x18) =
             *(uintptr *)((long)register0x00000020 + 0x10);
        return *(uintptr *)((long)register0x00000020 + 0x10);
      }
      lVar1 = *(long *)(prVar4->size + 8);
      if (*(long *)(lVar1 + 0x18) != 0) {
        if ((*(byte *)(lVar1 + 0x17) & 0x20) != 0) {
          *(long *)((long)register0x00000020 + -0x40) = lVar1;
          *(uintptr **)((long)register0x00000020 + -0x38) = &prVar4->ptrdata;
          prVar4 = (runtime__type *)
                   (*(uintptr *)((long)register0x00000020 + 0x10) ^ 0x756ea16a56a621);
          *(runtime__type **)((long)register0x00000020 + -0x30) = prVar4;
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4b1cb8;
          runtime_typehash(prVar4,sVar6.len,*(uintptr *)((long)register0x00000020 + 0x10));
          *(uintptr *)((long)register0x00000020 + 0x18) =
               *(uintptr *)((long)register0x00000020 + -0x28) * 0x52ef6bbb8f63bf;
          return *(uintptr *)((long)register0x00000020 + -0x28);
        }
        uVar2 = prVar4->ptrdata;
        *(long *)((long)register0x00000020 + -0x40) = lVar1;
        *(uintptr *)((long)register0x00000020 + -0x38) = uVar2;
        prVar4 = (runtime__type *)(*(uintptr *)((long)register0x00000020 + 0x10) ^ 0x756ea16a56a621)
        ;
        *(runtime__type **)((long)register0x00000020 + -0x30) = prVar4;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4b1d05;
        runtime_typehash(prVar4,sVar6.len,*(uintptr *)((long)register0x00000020 + 0x10));
        *(long *)((long)register0x00000020 + 0x18) =
             *(long *)((long)register0x00000020 + -0x28) * 0x52ef6bbb8f63bf;
        return *(long *)((long)register0x00000020 + -0x28) * 0x52ef6bbb8f63bf;
      }
      *(long *)((long)register0x00000020 + -0x40) = lVar1;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4b1d45;
      sVar6 = runtime____type__string(prVar4);
      a0.str = (uint8 *)sVar6.len;
      buf = *(runtime_tmpBuf **)((long)register0x00000020 + -0x38);
      iVar3 = *(int *)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
      *(undefined **)((long)register0x00000020 + -0x38) = &DAT_0029e67f;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x18;
      *(runtime_tmpBuf **)((long)register0x00000020 + -0x28) = buf;
      *(int *)((long)register0x00000020 + -0x20) = iVar3;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4b1d7b;
      a0.len = iVar3;
      a1.len = in_RSI;
      a1.str = in_RDI;
      sVar6 = runtime_concatstring2(buf,a0,a1);
      *(uint8 **)((long)register0x00000020 + -0x40) = *(uint8 **)((long)register0x00000020 + -0x18);
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x10);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4b1d93;
      sVar6.str = *(uint8 **)((long)register0x00000020 + -0x18);
      runtime_convTstring(sVar6);
      *(undefined **)((long)register0x00000020 + -0x40) = &DAT_00237b20;
      *(runtime__type **)((long)register0x00000020 + -0x38) =
           *(runtime__type **)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4b1dad;
      e.data = sVar6.len;
      e._type = *(runtime__type **)((long)register0x00000020 + -0x30);
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar5 + -8) = 0x4b1db3;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar5;
  } while( true );
}


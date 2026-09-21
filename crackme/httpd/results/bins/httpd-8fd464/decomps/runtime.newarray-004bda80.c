
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.newarray(runtime._type * typ, int n, void * ~r2) */

void * runtime_newarray(runtime__type *typ,int n)

{
  ulong *puVar1;
  undefined8 *size;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uintptr size_00;
  runtime__type *typ_00;
  undefined1 *puVar5;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  runtime__type *typ_spill;
  int n_spill;
  
  do {
                    /* Unresolved local var: uintptr mem@[???] */
    typ_00 = (runtime__type *)n;
    puVar5 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar5 = (undefined1 *)((long)register0x00000020 + -0x28);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      typ_00 = *(runtime__type **)((long)register0x00000020 + 0x10);
      if (typ_00 == (runtime__type *)0x1) {
        size = *(undefined8 **)((long)register0x00000020 + 8);
        uVar2 = *size;
        *(undefined8 *)((long)register0x00000020 + -0x28) = uVar2;
        *(undefined8 **)((long)register0x00000020 + -0x20) = size;
        *(undefined1 *)((long)register0x00000020 + -0x18) = 1;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4bdb14;
        runtime_mallocgc((uintptr)size,(runtime__type *)n,SUB81(uVar2,0));
        *(void **)((long)register0x00000020 + 0x18) = *(void **)((long)register0x00000020 + -0x10);
        return *(void **)((long)register0x00000020 + -0x10);
      }
      puVar1 = *(ulong **)((long)register0x00000020 + 8);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = typ_00;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *puVar1;
      size_00 = SUB168(auVar3 * auVar4,0);
      if (((SUB168(auVar3 * auVar4,8) == 0) && (size_00 < 0x1000000000001)) && (-1 < (long)typ_00))
      {
        *(uintptr *)((long)register0x00000020 + -0x28) = size_00;
        *(ulong **)((long)register0x00000020 + -0x20) = puVar1;
        *(undefined1 *)((long)register0x00000020 + -0x18) = 1;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4bdae5;
        runtime_mallocgc(size_00,typ_00,SUB81(puVar1,0));
        *(void **)((long)register0x00000020 + 0x18) = *(void **)((long)register0x00000020 + -0x10);
        return *(void **)((long)register0x00000020 + -0x10);
      }
      *(undefined **)((long)register0x00000020 + -0x28) = &DAT_00237ca0;
      *(undefined ***)((long)register0x00000020 + -0x20) = &runtime__stmp_75;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4bdb45;
      e.data = typ_00;
      e._type = (runtime__type *)&runtime__stmp_75;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar5 + -8) = 0x4bdb4b;
    runtime_morestack_noctxt();
    n = (int)typ_00;
    register0x00000020 = (BADSPACEBASE *)puVar5;
  } while( true );
}


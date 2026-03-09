
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void fmt.newPrinter(fmt.pp * ~r0) */

fmt_pp * fmt_newPrinter(void)

{
  runtime__type *iface;
  fmt_pp *extraout_RAX;
  fmt_pp *pfVar1;
  undefined1 *puVar2;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ iVar3;
  
  do {
                    /* Unresolved local var: fmt.pp * p@[???] */
    puVar2 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar2 = (undefined1 *)((long)register0x00000020 + -0x20);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      *(sync_Pool **)((long)register0x00000020 + -0x20) = &fmt_ppFree;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x569291;
      iVar3 = sync___Pool__Get(&fmt_ppFree);
      pfVar1 = *(fmt_pp **)((long)register0x00000020 + -0x10);
      iface = *(runtime__type **)((long)register0x00000020 + -0x18);
      if (iface == (runtime__type *)&DAT_0027d1e0) {
        pfVar1->panicking = false;
        pfVar1->erroring = false;
        pfVar1->wrapErrs = false;
        if (runtime_writeBarrier._0_4_ == 0) {
          (pfVar1->fmt).buf = &pfVar1->buf;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x28) = 0x5692d1;
          runtime_gcWriteBarrier();
          pfVar1 = extraout_RAX;
        }
        (pfVar1->fmt).fmtFlags.widPresent = false;
        (pfVar1->fmt).fmtFlags.precPresent = false;
        (pfVar1->fmt).fmtFlags.minus = false;
        (pfVar1->fmt).fmtFlags.plus = false;
        (pfVar1->fmt).fmtFlags.sharp = false;
        (pfVar1->fmt).fmtFlags.space = false;
        (pfVar1->fmt).fmtFlags.zero = false;
        (pfVar1->fmt).fmtFlags.plusV = false;
        (pfVar1->fmt).fmtFlags.precPresent = false;
        (pfVar1->fmt).fmtFlags.minus = false;
        (pfVar1->fmt).fmtFlags.plus = false;
        (pfVar1->fmt).fmtFlags.sharp = false;
        (pfVar1->fmt).fmtFlags.space = false;
        (pfVar1->fmt).fmtFlags.zero = false;
        (pfVar1->fmt).fmtFlags.plusV = false;
        (pfVar1->fmt).fmtFlags.sharpV = false;
        *(fmt_pp **)((long)register0x00000020 + 8) = pfVar1;
        return pfVar1;
      }
      *(runtime__type **)((long)register0x00000020 + -0x20) = iface;
      *(undefined **)((long)register0x00000020 + -0x18) = &DAT_0027d1e0;
      *(undefined8 **)((long)register0x00000020 + -0x10) = &DAT_0022dfe0;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x56930b;
      runtime_panicdottypeE((runtime__type *)&DAT_0022dfe0,iVar3.data,iface);
    }
    *(undefined8 *)(puVar2 + -8) = 0x569311;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar2;
  } while( true );
}


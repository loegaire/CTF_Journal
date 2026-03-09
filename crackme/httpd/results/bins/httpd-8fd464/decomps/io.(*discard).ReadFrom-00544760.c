
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void io.(*discard).ReadFrom(io.Reader r, int64 n, error err) */

multireturn_int64_error__conflict io___discard__ReadFrom(io_Reader r)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  io_Reader r_00;
  multireturn_int64_error__conflict mVar4;
  io_Reader r_spill;
  
  r_00.data = r.data;
  do {
    lVar1 = *(long *)(in_FS_OFFSET + -8);
    puVar3 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(lVar1 + 0x10) < register0x00000020) {
      puVar3 = (undefined1 *)((long)register0x00000020 + -0x30);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      plVar2 = *(long **)(lVar1 + 0x20);
      if ((plVar2 != (long *)0x0) &&
         ((undefined1 *)*plVar2 == (undefined1 *)((long)register0x00000020 + 8))) {
        *plVar2 = (long)((long)register0x00000020 + -0x30);
      }
      if (*(long *)((long)register0x00000020 + 8) != 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) =
             *(undefined8 *)((long)register0x00000020 + 0x10);
        *(runtime_itab **)((long)register0x00000020 + -0x28) =
             *(runtime_itab **)((long)register0x00000020 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x5447a6;
        r_00.tab = *(runtime_itab **)((long)register0x00000020 + 0x18);
        mVar4 = io_discard_ReadFrom(r_00);
        *(undefined8 *)((long)register0x00000020 + 0x20) =
             *(undefined8 *)((long)register0x00000020 + -0x20);
        *(void **)((long)register0x00000020 + 0x28) = *(void **)((long)register0x00000020 + -0x18);
        *(undefined8 *)((long)register0x00000020 + 0x30) =
             *(undefined8 *)((long)register0x00000020 + -0x10);
        mVar4.n = *(undefined8 *)((long)register0x00000020 + -0x20);
        mVar4.err.data = *(void **)((long)register0x00000020 + -0x18);
        return mVar4;
      }
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x5447d3;
      runtime_panicwrap();
    }
    *(undefined8 *)(puVar3 + -8) = 0x5447d9;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar3;
  } while( true );
}


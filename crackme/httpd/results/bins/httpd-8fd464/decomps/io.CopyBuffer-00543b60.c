
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void io.CopyBuffer(io.Writer dst, io.Reader src, []uint8 buf, int64
   written, error err) */

multireturn_int64_error__conflict3 io_CopyBuffer(io_Writer dst,io_Reader src,__uint8 buf)

{
  runtime_itab *prVar1;
  undefined1 *puVar2;
  undefined1 *unaff_RBP;
  uint8 *puVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  long in_FS_OFFSET;
  io_Writer dst_00;
  interface___ e;
  io_Reader src_00;
  multireturn_int64_error__conflict3 mVar7;
  __uint8 buf_00;
  io_Writer dst_spill;
  io_Reader src_spill;
  __uint8 buf_spill;
  
  iVar6 = buf.cap;
  iVar5 = buf.len;
  puVar3 = buf.array;
  pvVar4 = src.data;
  dst_00.data = dst.data;
  do {
    puVar2 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar2 = (undefined1 *)((long)register0x00000020 + -0x58);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      if (*(long *)((long)register0x00000020 + 0x28) == 0) {
        prVar1 = *(runtime_itab **)((long)register0x00000020 + 0x30);
LAB_00543ba5:
        *(undefined8 *)((long)register0x00000020 + -0x58) =
             *(undefined8 *)((long)register0x00000020 + 8);
        *(undefined8 *)((long)register0x00000020 + -0x50) =
             *(undefined8 *)((long)register0x00000020 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x48) =
             *(undefined8 *)((long)register0x00000020 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x40) =
             *(undefined8 *)((long)register0x00000020 + 0x20);
        *(long *)((long)register0x00000020 + -0x38) = *(long *)((long)register0x00000020 + 0x28);
        *(runtime_itab **)((long)register0x00000020 + -0x30) = prVar1;
        *(runtime_itab **)((long)register0x00000020 + -0x28) =
             *(runtime_itab **)((long)register0x00000020 + 0x38);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x543be8;
        dst_00.tab = *(runtime_itab **)((long)register0x00000020 + 0x38);
        src_00.data = pvVar4;
        src_00.tab = prVar1;
        buf_00.len = iVar5;
        buf_00.array = puVar3;
        buf_00.cap = iVar6;
        mVar7 = io_copyBuffer(dst_00,src_00,buf_00);
        *(undefined8 *)((long)register0x00000020 + 0x40) =
             *(undefined8 *)((long)register0x00000020 + -0x20);
        *(void **)((long)register0x00000020 + 0x48) = *(void **)((long)register0x00000020 + -0x18);
        *(undefined8 *)((long)register0x00000020 + 0x50) =
             *(undefined8 *)((long)register0x00000020 + -0x10);
        mVar7.written = *(undefined8 *)((long)register0x00000020 + -0x20);
        mVar7.err.data = *(void **)((long)register0x00000020 + -0x18);
        return mVar7;
      }
      prVar1 = *(runtime_itab **)((long)register0x00000020 + 0x30);
      if (prVar1 != (runtime_itab *)0x0) goto LAB_00543ba5;
      *(undefined **)((long)register0x00000020 + -0x58) = &DAT_00225520;
      *(undefined8 **)((long)register0x00000020 + -0x50) = &io__stmp_1;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x543c35;
      e.data = dst_00.data;
      e._type = (runtime__type *)&io__stmp_1;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar2 + -8) = 0x543c3b;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar2;
  } while( true );
}


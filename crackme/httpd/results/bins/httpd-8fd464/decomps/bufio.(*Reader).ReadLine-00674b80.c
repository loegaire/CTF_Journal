
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bufio.(*Reader).ReadLine(bufio.Reader * b, []uint8 line, bool
   isPrefix, error err) */

multireturn___uint8_bool_error_ bufio___Reader__ReadLine(bufio_Reader *b)

{
  char cVar1;
  long lVar2;
  undefined1 auVar3 [41];
  undefined1 auVar4 [17];
  bool bVar5;
  undefined7 extraout_var;
  runtime_itab *tab;
  void *pvVar6;
  long lVar7;
  uint8 unaff_BL;
  void *x;
  undefined1 *puVar8;
  undefined1 *unaff_RBP;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  multireturn___uint8_bool_error_ mVar14;
  multireturn___uint8_bool_error_ mVar15;
  bufio_Reader *b_spill;
  
  while (puVar8 = (undefined1 *)register0x00000020,
        register0x00000020 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
LAB_00674dca:
    *(undefined8 *)(puVar8 + -8) = 0x674dcf;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar8;
  }
  puVar8 = (undefined1 *)((long)register0x00000020 + -0x70);
  *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
  unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
  *(bufio_Reader **)((long)register0x00000020 + -0x70) =
       *(bufio_Reader **)((long)register0x00000020 + 8);
  *(undefined1 *)((long)register0x00000020 + -0x68) = 10;
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0x674bb4;
  bufio___Reader__ReadSlice(*(bufio_Reader **)((long)register0x00000020 + 8),unaff_BL);
  tab = *(runtime_itab **)((long)register0x00000020 + -0x48);
  x = *(void **)((long)register0x00000020 + -0x48);
  uVar9 = *(undefined8 *)((long)register0x00000020 + -0x40);
  uVar11 = *(ulong *)((long)register0x00000020 + -0x58);
  lVar12 = *(long *)((long)register0x00000020 + -0x60);
  uVar13 = *(ulong *)((long)register0x00000020 + -0x50);
  lVar10 = *(long *)((long)register0x00000020 + -0x48);
  pvVar6 = bufio_ErrBufferFull.data;
  if (bufio_ErrBufferFull.tab == tab) {
    *(long *)((long)register0x00000020 + -0x10) = lVar12;
    *(long *)((long)register0x00000020 + -0x28) = lVar10;
    *(ulong *)((long)register0x00000020 + -0x30) = uVar11;
    *(ulong *)((long)register0x00000020 + -0x38) = uVar13;
    *(undefined8 *)((long)register0x00000020 + -0x18) = uVar9;
    *(void **)((long)register0x00000020 + -0x20) = x;
    *(runtime_itab **)((long)register0x00000020 + -0x70) = tab;
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x40);
    *(void **)((long)register0x00000020 + -0x60) = bufio_ErrBufferFull.data;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x674c25;
    bVar5 = runtime_ifaceeq(tab,x,bufio_ErrBufferFull.data);
    tab = (runtime_itab *)CONCAT71(extraout_var,bVar5);
    if (*(char *)((long)register0x00000020 + -0x58) != '\0') {
      lVar10 = *(long *)((long)register0x00000020 + -0x30);
      if (lVar10 < 1) {
        lVar7 = *(long *)((long)register0x00000020 + -0x10);
      }
      else {
        lVar7 = *(long *)((long)register0x00000020 + -0x10);
        if (*(char *)(lVar10 + -1 + lVar7) == '\r') {
          lVar2 = *(long *)(*(long *)((long)register0x00000020 + 8) + 0x28);
          if (lVar2 == 0) {
            *(undefined **)((long)register0x00000020 + -0x70) = &DAT_00225520;
            *(undefined1 **)((long)register0x00000020 + -0x68) = bufio__stmp_1;
            *(undefined8 *)((long)register0x00000020 + -0x78) = 0x674dc9;
            runtime_gopanic((interface___)ZEXT816(0x2f5e60));
            unaff_BL = 0;
            goto LAB_00674dca;
          }
          x = (void *)(lVar2 + -1);
          *(void **)(*(long *)((long)register0x00000020 + 8) + 0x28) = x;
          lVar10 = lVar10 + -1;
        }
      }
      *(long *)((long)register0x00000020 + 0x10) = lVar7;
      *(long *)((long)register0x00000020 + 0x18) = lVar10;
      *(undefined8 *)((long)register0x00000020 + 0x20) =
           *(undefined8 *)((long)register0x00000020 + -0x38);
      *(undefined1 *)((long)register0x00000020 + 0x28) = 1;
      *(undefined8 *)((long)register0x00000020 + 0x30) = 0;
      *(undefined8 *)((long)register0x00000020 + 0x38) = 0;
      mVar14.line.len = (int)x;
      mVar14.line.array = (uint8 *)*(undefined8 *)((long)register0x00000020 + -0x38);
      mVar14.isPrefix = (undefined1)lVar10;
      mVar14.err.tab = (runtime_itab *)uVar9;
      mVar14.line.cap = lVar7;
      mVar14.err.data = (void *)lVar12;
      return mVar14;
    }
    x = *(void **)((long)register0x00000020 + -0x20);
    uVar9 = *(undefined8 *)((long)register0x00000020 + -0x18);
    uVar11 = *(ulong *)((long)register0x00000020 + -0x30);
    lVar12 = *(long *)((long)register0x00000020 + -0x10);
    uVar13 = *(ulong *)((long)register0x00000020 + -0x38);
    lVar10 = *(long *)((long)register0x00000020 + -0x28);
  }
  if (uVar11 == 0) {
    if (lVar10 != 0) {
      lVar12 = 0;
    }
    *(long *)((long)register0x00000020 + 0x10) = lVar12;
    *(undefined8 *)((long)register0x00000020 + 0x18) = 0;
    if (lVar10 != 0) {
      uVar13 = 0;
    }
    *(ulong *)((long)register0x00000020 + 0x20) = uVar13;
    *(undefined1 *)((long)register0x00000020 + 0x28) = 0;
    *(void **)((long)register0x00000020 + 0x30) = x;
    *(undefined8 *)((long)register0x00000020 + 0x38) = uVar9;
    auVar3._8_8_ = pvVar6;
    auVar3._0_8_ = x;
    auVar4._8_8_ = lVar12;
    auVar4._0_8_ = uVar9;
    auVar4[0x10] = 0;
    auVar3._16_17_ = auVar4 << 8;
    auVar3._33_8_ = 0;
    return (multireturn___uint8_bool_error_)(auVar3 << 0x40);
  }
  cVar1 = *(char *)((uVar11 - 1) + lVar12);
  if (cVar1 != '\n') goto LAB_00674d0b;
                    /* Unresolved local var: int drop@[???] */
  if ((long)uVar11 < 2) {
LAB_00674cfa:
    tab = (runtime_itab *)0x1;
  }
  else {
    if (uVar11 <= uVar11 - 2) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x674dad;
      runtime_panicIndex();
    }
    if (*(char *)((uVar11 - 2) + lVar12) != '\r') goto LAB_00674cfa;
    tab = (runtime_itab *)0x2;
  }
  uVar11 = uVar11 - (long)tab;
  if (uVar13 < uVar11) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x674da5;
    runtime_panicSliceAcap();
  }
LAB_00674d0b:
  *(long *)((long)register0x00000020 + 0x10) = lVar12;
  *(ulong *)((long)register0x00000020 + 0x18) = uVar11;
  *(ulong *)((long)register0x00000020 + 0x20) = uVar13;
  *(undefined1 *)((long)register0x00000020 + 0x28) = 0;
  *(undefined8 *)((long)register0x00000020 + 0x30) = 0;
  *(undefined8 *)((long)register0x00000020 + 0x38) = 0;
  mVar15.line.len._0_1_ = cVar1;
  mVar15.line.array = (uint8 *)tab;
  mVar15.line.len._1_7_ = 0;
  mVar15.isPrefix = (undefined1)uVar11;
  mVar15.err.tab = (runtime_itab *)uVar9;
  mVar15.line.cap = (int)pvVar6;
  mVar15.err.data = (void *)lVar12;
  return mVar15;
}


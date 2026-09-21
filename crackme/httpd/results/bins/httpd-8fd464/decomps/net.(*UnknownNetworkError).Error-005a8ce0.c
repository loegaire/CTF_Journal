
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*UnknownNetworkError).Error(string ~r0) */

string net___UnknownNetworkError__Error(void)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  runtime_tmpBuf *buf;
  uint8 *unaff_RBX;
  undefined1 *puVar5;
  undefined1 *unaff_RBP;
  int in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string sVar6;
  string a1;
  string a0;
  
  do {
                    /* Unresolved local var: net.UnknownNetworkError e@[???] */
    lVar1 = *(long *)(in_FS_OFFSET + -8);
    puVar5 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(lVar1 + 0x10) < register0x00000020) {
      puVar5 = (undefined1 *)((long)register0x00000020 + -0x40);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      plVar2 = *(long **)(lVar1 + 0x20);
      if ((plVar2 != (long *)0x0) &&
         ((undefined1 *)*plVar2 == (undefined1 *)((long)register0x00000020 + 8))) {
        *plVar2 = (long)((long)register0x00000020 + -0x40);
      }
      piVar3 = *(int **)((long)register0x00000020 + 8);
      if (piVar3 != (int *)0x0) {
        iVar4 = *piVar3;
        buf = (runtime_tmpBuf *)piVar3[1];
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
        *(undefined **)((long)register0x00000020 + -0x38) = &DAT_00299b45;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x10;
        *(int *)((long)register0x00000020 + -0x28) = iVar4;
        *(runtime_tmpBuf **)((long)register0x00000020 + -0x20) = buf;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x5a8d45;
        a1.len = in_RSI;
        a1.str = in_RDI;
        a0.len = iVar4;
        a0.str = unaff_RBX;
        sVar6 = runtime_concatstring2(buf,a0,a1);
        *(uint8 **)((long)register0x00000020 + 0x10) = *(uint8 **)((long)register0x00000020 + -0x18)
        ;
        *(undefined8 *)((long)register0x00000020 + 0x18) =
             *(undefined8 *)((long)register0x00000020 + -0x10);
        sVar6.str = *(uint8 **)((long)register0x00000020 + -0x18);
        return sVar6;
      }
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x5a8d68;
      runtime_panicwrap();
    }
    *(undefined8 *)(puVar5 + -8) = 0x5a8d6e;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar5;
  } while( true );
}


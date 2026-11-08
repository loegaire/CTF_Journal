
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.(*fileSizeError).Error(string ~r0) */

string time___fileSizeError__Error(void)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint8 *unaff_RBX;
  undefined1 *puVar6;
  undefined1 *unaff_RBP;
  int in_RSI;
  uint8 *in_RDI;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  string sVar7;
  string sVar8;
  string a0;
  string a2;
  
  do {
                    /* Unresolved local var: time.fileSizeError f@[???] */
    lVar1 = *(long *)(in_FS_OFFSET + -8);
    puVar6 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(lVar1 + 0x10) < register0x00000020) {
      puVar6 = (undefined1 *)((long)register0x00000020 + -0x50);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      plVar2 = *(long **)(lVar1 + 0x20);
      if ((plVar2 != (long *)0x0) &&
         ((undefined1 *)*plVar2 == (undefined1 *)((long)register0x00000020 + 8))) {
        *plVar2 = (long)((long)register0x00000020 + -0x50);
      }
      piVar3 = *(int **)((long)register0x00000020 + 8);
      if (piVar3 != (int *)0x0) {
        iVar4 = *piVar3;
        iVar5 = piVar3[1];
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
        *(undefined **)((long)register0x00000020 + -0x48) = &DAT_00292444;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0xb;
        *(int *)((long)register0x00000020 + -0x38) = iVar4;
        *(int *)((long)register0x00000020 + -0x30) = iVar5;
        *(undefined **)((long)register0x00000020 + -0x28) = &DAT_0029452a;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0xd;
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x55c545;
        sVar7.len = in_RSI;
        sVar7.str = in_RDI;
        a0.len = iVar4;
        a0.str = unaff_RBX;
        a2.len = in_R9;
        a2.str = in_R8;
        sVar7 = runtime_concatstring3((runtime_tmpBuf *)&DAT_0029452a,a0,sVar7,a2);
        sVar8.len = sVar7.len;
        *(uint8 **)((long)register0x00000020 + 0x10) = *(uint8 **)((long)register0x00000020 + -0x18)
        ;
        *(undefined8 *)((long)register0x00000020 + 0x18) =
             *(undefined8 *)((long)register0x00000020 + -0x10);
        sVar8.str = *(uint8 **)((long)register0x00000020 + -0x18);
        return sVar8;
      }
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x55c568;
      runtime_panicwrap();
    }
    *(undefined8 *)(puVar6 + -8) = 0x55c56e;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar6;
  } while( true );
}


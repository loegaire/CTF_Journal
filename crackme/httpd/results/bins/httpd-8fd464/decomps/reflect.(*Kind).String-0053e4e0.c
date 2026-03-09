
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*Kind).String(string ~r0) */

string reflect___Kind__String(void)

{
  long lVar1;
  long *plVar2;
  ulong i;
  runtime_tmpBuf *buf;
  int iVar3;
  uint8 *puVar4;
  uint8 *puVar5;
  int unaff_RBX;
  undefined1 *puVar6;
  undefined1 *unaff_RBP;
  int in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string sVar7;
  string sVar8;
  string a0;
  
  do {
                    /* Unresolved local var: reflect.Kind k@[???]
                       Unresolved local var: int i@[???] */
    lVar1 = *(long *)(in_FS_OFFSET + -8);
    puVar6 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(lVar1 + 0x10) < register0x00000020) {
      puVar6 = (undefined1 *)((long)register0x00000020 + -0x40);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      plVar2 = *(long **)(lVar1 + 0x20);
      if ((plVar2 != (long *)0x0) &&
         ((undefined1 *)*plVar2 == (undefined1 *)((long)register0x00000020 + 8))) {
        *plVar2 = (long)((long)register0x00000020 + -0x40);
      }
      if (*(ulong **)((long)register0x00000020 + 8) != (ulong *)0x0) {
        i = **(ulong **)((long)register0x00000020 + 8);
        if ((long)i < reflect_kindNames.len) {
          if ((ulong)reflect_kindNames.len <= i) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)register0x00000020 + -0x48) = 0x53e5ae;
            runtime_panicIndexU();
          }
          puVar5 = reflect_kindNames.array[i].str;
          puVar4 = (uint8 *)reflect_kindNames.array[i].len;
        }
        else {
          *(ulong *)((long)register0x00000020 + -0x40) = i;
          *(undefined8 *)((long)register0x00000020 + -0x38) = 10;
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x53e555;
          sVar7 = strconv_FormatInt(i,unaff_RBX);
          a0.str = (uint8 *)sVar7.len;
          buf = *(runtime_tmpBuf **)((long)register0x00000020 + -0x30);
          iVar3 = *(int *)((long)register0x00000020 + -0x28);
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
          *(undefined **)((long)register0x00000020 + -0x38) = &DAT_002883f1;
          *(undefined8 *)((long)register0x00000020 + -0x30) = 4;
          *(runtime_tmpBuf **)((long)register0x00000020 + -0x28) = buf;
          *(int *)((long)register0x00000020 + -0x20) = iVar3;
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x53e58b;
          sVar7.len = in_RSI;
          sVar7.str = in_RDI;
          a0.len = iVar3;
          sVar7 = runtime_concatstring2(buf,a0,sVar7);
          unaff_RBX = sVar7.len;
          puVar5 = *(uint8 **)((long)register0x00000020 + -0x18);
          puVar4 = *(uint8 **)((long)register0x00000020 + -0x10);
        }
        *(uint8 **)((long)register0x00000020 + 0x10) = puVar5;
        *(uint8 **)((long)register0x00000020 + 0x18) = puVar4;
        sVar8.len = unaff_RBX;
        sVar8.str = puVar4;
        return sVar8;
      }
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x53e5b3;
      runtime_panicwrap();
    }
    *(undefined8 *)(puVar6 + -8) = 0x53e5b9;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar6;
  } while( true );
}


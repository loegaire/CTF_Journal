
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.(*stringWriter).WriteString(string s, int ~r1, error ~r2)
    */

multireturn_int_error__conflict strings___stringWriter__WriteString(string s)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  runtime_tmpBuf *buf;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  multireturn_int_error__conflict mVar8;
  string s_00;
  string s_spill;
  
  s_00.str = (uint8 *)s.len;
  do {
                    /* Unresolved local var: string s@[???] */
    lVar1 = *(long *)(in_FS_OFFSET + -8);
    puVar7 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(lVar1 + 0x10) < register0x00000020) {
      puVar7 = (undefined1 *)((long)register0x00000020 + -0x50);
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
        *(int *)((long)register0x00000020 + -0x18) = iVar4;
        buf = (runtime_tmpBuf *)piVar3[1];
        *(runtime_tmpBuf **)((long)register0x00000020 + -0x10) = buf;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x48) =
             *(undefined8 *)((long)register0x00000020 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x40) =
             *(undefined8 *)((long)register0x00000020 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x5b2a4e;
        s_00.len = iVar4;
        runtime_stringtoslicebyte(buf,s_00);
        pcVar5 = *(code **)(*(long *)((long)register0x00000020 + -0x18) + 0x18);
        uVar6 = *(undefined8 *)((long)register0x00000020 + -0x28);
        *(undefined8 *)((long)register0x00000020 + -0x50) =
             *(undefined8 *)((long)register0x00000020 + -0x10);
        *(undefined8 *)((long)register0x00000020 + -0x48) =
             *(undefined8 *)((long)register0x00000020 + -0x38);
        *(undefined8 *)((long)register0x00000020 + -0x40) =
             *(undefined8 *)((long)register0x00000020 + -0x30);
        *(undefined8 *)((long)register0x00000020 + -0x38) = uVar6;
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x5b2a82;
        (*pcVar5)();
        *(undefined8 *)((long)register0x00000020 + 0x20) =
             *(undefined8 *)((long)register0x00000020 + -0x30);
        *(undefined8 *)((long)register0x00000020 + 0x28) =
             *(undefined8 *)((long)register0x00000020 + -0x28);
        *(void **)((long)register0x00000020 + 0x30) = *(void **)((long)register0x00000020 + -0x20);
        mVar8.~r2.tab = (runtime_itab *)uVar6;
        mVar8.~r1 = *(undefined8 *)((long)register0x00000020 + -0x28);
        mVar8.~r2.data = *(void **)((long)register0x00000020 + -0x20);
        return mVar8;
      }
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x5b2ab2;
      runtime_panicwrap();
    }
    *(undefined8 *)(puVar7 + -8) = 0x5b2ab8;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar7;
  } while( true );
}


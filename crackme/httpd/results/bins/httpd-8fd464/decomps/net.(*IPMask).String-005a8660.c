
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*IPMask).String(string ~r0) */

string net___IPMask__String(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint8 *puVar4;
  undefined8 uVar5;
  int unaff_RBX;
  undefined1 *puVar6;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  string sVar7;
  __uint8 b;
  
  do {
                    /* Unresolved local var: net.IPMask m@[???] */
    lVar1 = *(long *)(in_FS_OFFSET + -8);
    puVar6 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(lVar1 + 0x10) < register0x00000020) {
      puVar6 = (undefined1 *)((long)register0x00000020 + -0x30);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      plVar2 = *(long **)(lVar1 + 0x20);
      if ((plVar2 != (long *)0x0) &&
         ((undefined1 *)*plVar2 == (undefined1 *)((long)register0x00000020 + 8))) {
        *plVar2 = (long)((long)register0x00000020 + -0x30);
      }
      puVar3 = *(undefined8 **)((long)register0x00000020 + 8);
      if (puVar3 != (undefined8 *)0x0) {
        lVar1 = puVar3[1];
        uVar5 = puVar3[2];
        if (lVar1 == 0) {
          uVar5 = 5;
          puVar4 = &DAT_002889bc;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x30) = *puVar3;
          *(long *)((long)register0x00000020 + -0x28) = lVar1;
          *(undefined8 *)((long)register0x00000020 + -0x20) = uVar5;
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0x5a86c6;
          b.len = unaff_RBX;
          b.array = (uint8 *)uVar5;
          b.cap = lVar1;
          sVar7 = net_hexString(b);
          unaff_RBX = sVar7.len;
          puVar4 = *(uint8 **)((long)register0x00000020 + -0x18);
          uVar5 = *(undefined8 *)((long)register0x00000020 + -0x10);
        }
        *(uint8 **)((long)register0x00000020 + 0x10) = puVar4;
        *(undefined8 *)((long)register0x00000020 + 0x18) = uVar5;
        sVar7.len = unaff_RBX;
        sVar7.str = puVar4;
        return sVar7;
      }
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x5a86e9;
      runtime_panicwrap();
    }
    *(undefined8 *)(puVar6 + -8) = 0x5a86ef;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar6;
  } while( true );
}


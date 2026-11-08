
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*IP).String(string ~r0) */

string net___IP__String(void)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RBX;
  undefined1 *puVar7;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  string sVar8;
  net_IP ip;
  
  do {
    lVar1 = *(long *)(in_FS_OFFSET + -8);
    puVar7 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(lVar1 + 0x10) < register0x00000020) {
      puVar7 = (undefined1 *)((long)register0x00000020 + -0x30);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      plVar2 = *(long **)(lVar1 + 0x20);
      if ((plVar2 != (long *)0x0) &&
         ((undefined1 *)*plVar2 == (undefined1 *)((long)register0x00000020 + 8))) {
        *plVar2 = (long)((long)register0x00000020 + -0x30);
      }
      piVar3 = *(int **)((long)register0x00000020 + 8);
      if (piVar3 != (int *)0x0) {
        iVar4 = *piVar3;
        iVar5 = piVar3[1];
        iVar6 = piVar3[2];
        *(int *)((long)register0x00000020 + -0x30) = iVar4;
        *(int *)((long)register0x00000020 + -0x28) = iVar5;
        *(int *)((long)register0x00000020 + -0x20) = iVar6;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x5a860e;
        ip.len = unaff_RBX;
        ip.array = (uint8 *)iVar6;
        ip.cap = iVar4;
        sVar8 = net_IP_String(ip);
        *(uint8 **)((long)register0x00000020 + 0x10) = *(uint8 **)((long)register0x00000020 + -0x18)
        ;
        *(undefined8 *)((long)register0x00000020 + 0x18) =
             *(undefined8 *)((long)register0x00000020 + -0x10);
        sVar8.str = *(uint8 **)((long)register0x00000020 + -0x18);
        return sVar8;
      }
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x5a8631;
      runtime_panicwrap();
    }
    *(undefined8 *)(puVar7 + -8) = 0x5a8637;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar7;
  } while( true );
}


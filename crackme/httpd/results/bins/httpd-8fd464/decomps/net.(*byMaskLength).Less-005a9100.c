
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*byMaskLength).Less(int i, int j, bool ~r2) */

bool net___byMaskLength__Less(int i,int j)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *unaff_RBP;
  int in_RSI;
  int in_RDI;
  long in_FS_OFFSET;
  net_byMaskLength s;
  int i_spill;
  int j_spill;
  
  do {
    lVar1 = *(long *)(in_FS_OFFSET + -8);
    puVar7 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(lVar1 + 0x10) < register0x00000020) {
      puVar7 = (undefined1 *)((long)register0x00000020 + -0x38);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      plVar2 = *(long **)(lVar1 + 0x20);
      if ((plVar2 != (long *)0x0) &&
         ((undefined1 *)*plVar2 == (undefined1 *)((long)register0x00000020 + 8))) {
        *plVar2 = (long)((long)register0x00000020 + -0x38);
      }
      piVar3 = *(int **)((long)register0x00000020 + 8);
      if (piVar3 != (int *)0x0) {
        iVar4 = *piVar3;
        iVar5 = piVar3[1];
        iVar6 = piVar3[2];
        *(int *)((long)register0x00000020 + -0x38) = iVar4;
        *(int *)((long)register0x00000020 + -0x30) = iVar5;
        *(int *)((long)register0x00000020 + -0x28) = iVar6;
        *(undefined8 *)((long)register0x00000020 + -0x20) =
             *(undefined8 *)((long)register0x00000020 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x18) =
             *(undefined8 *)((long)register0x00000020 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x5a9165;
        s.len = j;
        s.array = (net_policyTableEntry *)*(undefined8 *)((long)register0x00000020 + 0x18);
        s.cap = iVar4;
        net_byMaskLength_Less(s,in_RDI,in_RSI);
        *(undefined1 *)((long)register0x00000020 + 0x20) =
             *(undefined1 *)((long)register0x00000020 + -0x10);
        return (bool)*(undefined1 *)((long)register0x00000020 + -0x10);
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x5a917d;
      runtime_panicwrap();
    }
    *(undefined8 *)(puVar7 + -8) = 0x5a9185;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar7;
  } while( true );
}


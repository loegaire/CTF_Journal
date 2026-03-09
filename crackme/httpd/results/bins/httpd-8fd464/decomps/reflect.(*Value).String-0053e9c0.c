
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*Value).String(string ~r0) */

string reflect___Value__String(void)

{
  long lVar1;
  long *plVar2;
  reflect_flag *prVar3;
  reflect_flag rVar4;
  reflect_flag rVar5;
  reflect_flag rVar6;
  undefined8 unaff_RBX;
  undefined1 *puVar7;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  string sVar8;
  reflect_Value v;
  
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
      prVar3 = *(reflect_flag **)((long)register0x00000020 + 8);
      if (prVar3 != (reflect_flag *)0x0) {
        rVar4 = *prVar3;
        rVar5 = prVar3[1];
        rVar6 = prVar3[2];
        *(reflect_flag *)((long)register0x00000020 + -0x30) = rVar4;
        *(reflect_flag *)((long)register0x00000020 + -0x28) = rVar5;
        *(reflect_flag *)((long)register0x00000020 + -0x20) = rVar6;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x53ea0e;
        v.ptr = (void *)unaff_RBX;
        v.typ = (reflect_rtype *)rVar6;
        v.flag = rVar4;
        sVar8 = reflect_Value_String(v);
        *(uint8 **)((long)register0x00000020 + 0x10) = *(uint8 **)((long)register0x00000020 + -0x18)
        ;
        *(undefined8 *)((long)register0x00000020 + 0x18) =
             *(undefined8 *)((long)register0x00000020 + -0x10);
        sVar8.str = *(uint8 **)((long)register0x00000020 + -0x18);
        return sVar8;
      }
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x53ea31;
      runtime_panicwrap();
    }
    *(undefined8 *)(puVar7 + -8) = 0x53ea37;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar7;
  } while( true );
}


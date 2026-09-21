
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.WithValue(context.Context parent, interface_{} key,
   interface_{} val, context.Context ~r3) */

context_Context context_WithValue(context_Context parent,interface___ key,interface___ val)

{
  code *pcVar1;
  undefined8 uVar2;
  runtime_itab *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  runtime_itab *extraout_RAX_01;
  runtime_itab *prVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  context_Context cVar7;
  interface___ e;
  interface___ e_00;
  interface___ e_01;
  context_Context parent_spill;
  interface___ key_spill;
  interface___ val_spill;
  
  cVar7.data = parent.data;
  do {
    puVar6 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar6 = (undefined1 *)((long)register0x00000020 + -0x28);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      if (*(long *)((long)register0x00000020 + 8) != 0) {
        if (*(long *)((long)register0x00000020 + 0x18) != 0) {
          *(long *)((long)register0x00000020 + -0x18) = *(long *)((long)register0x00000020 + 0x18);
          *(undefined8 *)((long)register0x00000020 + -0x10) =
               *(undefined8 *)((long)register0x00000020 + 0x20);
          lVar4 = *(long *)((long)register0x00000020 + -0x18);
          if (lVar4 == 0) {
            puVar5 = (undefined1 *)0x0;
            lVar4 = 0;
          }
          else {
            puVar5 = go_itab__internal_reflectlite_rtype_internal_reflectlite_Type;
          }
          pcVar1 = *(code **)(puVar5 + 0x20);
          *(long *)((long)register0x00000020 + -0x28) = lVar4;
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x57344d;
          (*pcVar1)();
          if (*(char *)((long)register0x00000020 + -0x20) != '\0') {
            *(undefined **)((long)register0x00000020 + -0x28) = &DAT_00267da0;
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x573468;
            runtime_newobject((runtime__type *)&DAT_00267da0);
            prVar3 = *(runtime_itab **)((long)register0x00000020 + -0x20);
            prVar3->inter = *(runtime_interfacetype **)((long)register0x00000020 + 8);
            if (runtime_writeBarrier._0_4_ == 0) {
              prVar3->_type = *(runtime__type **)((long)register0x00000020 + 0x10);
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -0x30) = 0x573497;
              runtime_gcWriteBarrierCX();
              prVar3 = extraout_RAX;
            }
            uVar2 = *(undefined8 *)((long)register0x00000020 + 0x18);
            prVar3->hash = (int)uVar2;
            prVar3->_[0] = (char)((ulong)uVar2 >> 0x20);
            prVar3->_[1] = (char)((ulong)uVar2 >> 0x28);
            prVar3->_[2] = (char)((ulong)uVar2 >> 0x30);
            prVar3->_[3] = (char)((ulong)uVar2 >> 0x38);
            if (runtime_writeBarrier._0_4_ == 0) {
              prVar3->fun[0] = *(uintptr *)((long)register0x00000020 + 0x20);
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -0x30) = 0x5734c5;
              runtime_gcWriteBarrierCX();
              prVar3 = extraout_RAX_00;
            }
            prVar3[1].inter = *(runtime_interfacetype **)((long)register0x00000020 + 0x28);
            if (runtime_writeBarrier._0_4_ == 0) {
              prVar3[1]._type = *(runtime__type **)((long)register0x00000020 + 0x30);
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -0x30) = 0x5734f0;
              runtime_gcWriteBarrierCX();
              prVar3 = extraout_RAX_01;
            }
            *(undefined1 **)((long)register0x00000020 + 0x38) =
                 go_itab__context_valueCtx_context_Context;
            *(runtime_itab **)((long)register0x00000020 + 0x40) = prVar3;
            cVar7.tab = prVar3;
            return cVar7;
          }
          *(undefined **)((long)register0x00000020 + -0x28) = &DAT_00225520;
          *(undefined1 **)((long)register0x00000020 + -0x20) = context__stmp_7;
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x573527;
          e.data = cVar7.data;
          e._type = (runtime__type *)context__stmp_7;
          runtime_gopanic(e);
        }
        *(undefined **)((long)register0x00000020 + -0x28) = &DAT_00225520;
        *(undefined ***)((long)register0x00000020 + -0x20) = &context__stmp_6;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x573545;
        e_00.data = cVar7.data;
        e_00._type = (runtime__type *)&context__stmp_6;
        runtime_gopanic(e_00);
      }
      *(undefined **)((long)register0x00000020 + -0x28) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x20) = context__stmp_1;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x573565;
      e_01.data = cVar7.data;
      e_01._type = (runtime__type *)context__stmp_1;
      runtime_gopanic(e_01);
    }
    *(undefined8 *)(puVar6 + -8) = 0x57356b;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar6;
  } while( true );
}


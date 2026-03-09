
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.WithCancel(context.Context parent, context.Context ctx,
   context.CancelFunc * * cancel) */

multireturn_context_Context_context_CancelFunc_____ context_WithCancel(context_Context parent)

{
  runtime__type *extraout_RAX;
  runtime__type *prVar1;
  runtime_itab *extraout_RAX_00;
  runtime_itab *prVar2;
  uintptr uVar3;
  uintptr extraout_RDX;
  uintptr uVar4;
  undefined1 *puVar5;
  undefined1 *unaff_RBP;
  uintptr *in_RDI;
  long in_FS_OFFSET;
  context_Context parent_00;
  interface___ e;
  context_canceler child;
  multireturn_context_Context_context_CancelFunc_____ mVar6;
  context_Context parent_spill;
  
  parent_00.data = parent.data;
  do {
                    /* Unresolved local var: context.cancelCtx * &c@[???] */
    puVar5 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar5 = (undefined1 *)((long)register0x00000020 + -0x30);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      if (*(long *)((long)register0x00000020 + 8) != 0) {
        *(undefined **)((long)register0x00000020 + -0x30) = &DAT_0026c7a0;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x571a3f;
        runtime_newobject((runtime__type *)&DAT_0026c7a0);
        prVar1 = *(runtime__type **)((long)register0x00000020 + -0x28);
        *(runtime__type **)((long)register0x00000020 + -0x10) = prVar1;
        if (runtime_writeBarrier._0_4_ == 0) {
          prVar1->size = 0;
          prVar1->ptrdata = 0;
          prVar1->hash = 0;
          prVar1->tflag = 0;
          prVar1->align = 0;
          prVar1->fieldAlign = 0;
          prVar1->kind = 0;
          prVar1->equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)0x0;
          prVar1->gcdata = (uint8 *)0x0;
          prVar1->str = 0;
          prVar1->ptrToThis = 0;
          prVar1[1].size = 0;
          prVar1[1].ptrdata = 0;
        }
        else {
          *(undefined **)((long)register0x00000020 + -0x30) = &DAT_0026c7a0;
          *(runtime__type **)((long)register0x00000020 + -0x28) = prVar1;
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0x571a97;
          runtime_typedmemclr(prVar1,parent_00.data);
          prVar1 = *(runtime__type **)((long)register0x00000020 + -0x10);
        }
        uVar3 = *(uintptr *)((long)register0x00000020 + 8);
        prVar1->size = uVar3;
        if (runtime_writeBarrier._0_4_ == 0) {
          uVar4 = *(uintptr *)((long)register0x00000020 + 0x10);
          prVar1->ptrdata = uVar4;
        }
        else {
          in_RDI = &prVar1->ptrdata;
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0x571ac6;
          runtime_gcWriteBarrierDX();
          prVar1 = extraout_RAX;
          uVar4 = extraout_RDX;
        }
        *(uintptr *)((long)register0x00000020 + -0x30) = uVar3;
        *(uintptr *)((long)register0x00000020 + -0x28) = uVar4;
        *(undefined1 **)((long)register0x00000020 + -0x20) =
             go_itab__context_cancelCtx_context_canceler;
        *(runtime__type **)((long)register0x00000020 + -0x18) = prVar1;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x571ae5;
        parent_00.tab = (runtime_itab *)prVar1;
        child.data = in_RDI;
        child.tab = (runtime_itab *)go_itab__context_cancelCtx_context_canceler;
        context_propagateCancel(parent_00,child);
        *(undefined **)((long)register0x00000020 + -0x30) = &DAT_00245920;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x571af5;
        runtime_newobject((runtime__type *)&DAT_00245920);
        prVar2 = *(runtime_itab **)((long)register0x00000020 + -0x28);
        prVar2->inter = (runtime_interfacetype *)context_WithCancel_func1;
        if (runtime_writeBarrier._0_4_ == 0) {
          prVar1 = *(runtime__type **)((long)register0x00000020 + -0x10);
          prVar2->_type = prVar1;
        }
        else {
          prVar1 = *(runtime__type **)((long)register0x00000020 + -0x10);
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0x571b26;
          runtime_gcWriteBarrierCX();
          prVar2 = extraout_RAX_00;
        }
        *(undefined1 **)((long)register0x00000020 + 0x18) =
             go_itab__context_cancelCtx_context_Context;
        *(runtime__type **)((long)register0x00000020 + 0x20) = prVar1;
        *(runtime_itab **)((long)register0x00000020 + 0x28) = prVar2;
        mVar6.ctx.data = parent_00.data;
        mVar6.ctx.tab = prVar2;
        mVar6.cancel = (context_CancelFunc **)prVar1;
        return mVar6;
      }
      *(undefined **)((long)register0x00000020 + -0x30) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x28) = context__stmp_1;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x571b65;
      e.data = parent_00.data;
      e._type = (runtime__type *)context__stmp_1;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar5 + -8) = 0x571b6b;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar5;
  } while( true );
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Value.NumMethod(reflect.Value v, int ~r0) */

int reflect_Value_NumMethod(reflect_Value v)

{
  reflect_rtype *t;
  runtime__type *prVar1;
  undefined1 *puVar2;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  reflect_Value v_spill;
  
  e.data = v.ptr;
  do {
    puVar2 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar2 = (undefined1 *)((long)register0x00000020 + -0x18);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      t = *(reflect_rtype **)((long)register0x00000020 + 8);
      if (t != (reflect_rtype *)0x0) {
        if (((uint)*(undefined8 *)((long)register0x00000020 + 0x18) >> 9 & 1) != 0) {
          *(undefined8 *)((long)register0x00000020 + 0x20) = 0;
          return (int)t;
        }
        *(reflect_rtype **)((long)register0x00000020 + -0x18) = t;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x53c3f2;
        reflect___rtype__NumMethod(t);
        *(int *)((long)register0x00000020 + 0x20) = *(int *)((long)register0x00000020 + -0x10);
        return *(int *)((long)register0x00000020 + -0x10);
      }
      *(undefined **)((long)register0x00000020 + -0x18) = &DAT_0024d5e0;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x53c416;
      runtime_newobject((runtime__type *)&DAT_0024d5e0);
      prVar1 = *(runtime__type **)((long)register0x00000020 + -0x10);
      prVar1->ptrdata = 0x17;
      prVar1->size = (uintptr)&DAT_0029df08;
      prVar1->hash = 0;
      prVar1->tflag = 0;
      prVar1->align = 0;
      prVar1->fieldAlign = 0;
      prVar1->kind = 0;
      *(undefined **)((long)register0x00000020 + -0x18) = &DAT_00233920;
      *(runtime__type **)((long)register0x00000020 + -0x10) = prVar1;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x53c44a;
      e._type = prVar1;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar2 + -8) = 0x53c450;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar2;
  } while( true );
}


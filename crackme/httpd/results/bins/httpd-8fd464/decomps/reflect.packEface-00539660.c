
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.packEface(reflect.Value v, interface_{} ~r1) */

interface___ reflect_packEface(reflect_Value v)

{
  runtime__type *typ;
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ iVar3;
  interface___ e;
  reflect_rtype *t;
  void *ptr;
  interface___ i;
  
  iVar3.data = v.ptr;
  do {
    puVar2 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar2 = (undefined1 *)((long)register0x00000020 + -0x38);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0;
      typ = *(runtime__type **)((long)register0x00000020 + 8);
      if ((typ->kind & 0x20) != 0) {
        if (((uint)*(undefined8 *)((long)register0x00000020 + 0x18) >> 7 & 1) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x10) =
               *(undefined8 *)((long)register0x00000020 + 0x10);
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x10) =
               **(undefined8 **)((long)register0x00000020 + 0x10);
        }
        goto LAB_0053971b;
      }
      if (((uint)*(undefined8 *)((long)register0x00000020 + 0x18) >> 7 & 1) != 0) {
        if (((uint)*(undefined8 *)((long)register0x00000020 + 0x18) >> 8 & 1) == 0) {
          uVar1 = *(undefined8 *)((long)register0x00000020 + 0x10);
        }
        else {
                    /* Unresolved local var: void * c@[???] */
          *(runtime__type **)((long)register0x00000020 + -0x38) = typ;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x5396be;
          reflect_unsafe_New(typ);
          *(runtime__type **)((long)register0x00000020 + -0x20) =
               *(runtime__type **)((long)register0x00000020 + -0x30);
          *(void **)((long)register0x00000020 + -0x38) = *(void **)((long)register0x00000020 + 8);
          *(undefined8 *)((long)register0x00000020 + -0x28) =
               *(undefined8 *)((long)register0x00000020 + 0x10);
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x5396e5;
          reflect_typedmemmove
                    (*(runtime__type **)((long)register0x00000020 + -0x30),iVar3.data,
                     *(void **)((long)register0x00000020 + 8));
          typ = *(runtime__type **)((long)register0x00000020 + 8);
          uVar1 = *(undefined8 *)((long)register0x00000020 + -0x20);
        }
        *(undefined8 *)((long)register0x00000020 + -0x10) = uVar1;
LAB_0053971b:
        *(runtime__type **)((long)register0x00000020 + -0x18) = typ;
        *(runtime__type **)((long)register0x00000020 + 0x20) = typ;
        *(undefined8 *)((long)register0x00000020 + 0x28) =
             *(undefined8 *)((long)register0x00000020 + -0x10);
        iVar3._type = typ;
        return iVar3;
      }
      *(undefined **)((long)register0x00000020 + -0x38) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x30) = reflect__stmp_44;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x539755;
      e.data = iVar3.data;
      e._type = (runtime__type *)reflect__stmp_44;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar2 + -8) = 0x53975b;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar2;
  } while( true );
}


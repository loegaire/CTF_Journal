
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.makeslice(runtime._type * et, int len, int cap, void *
   ~r3) */

void * runtime_makeslice(runtime__type *et,int len,int cap)

{
  runtime__type *typ;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uintptr size;
  ulong uVar5;
  ulong extraout_RAX;
  int iVar6;
  long in_FS_OFFSET;
  interface___ e;
  interface___ e_00;
  runtime__type *et_spill;
  int len_spill;
  int cap_spill;
  void *local_10;
  
                    /* Unresolved local var: uintptr mem@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  typ = (runtime__type *)et_spill->size;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = typ;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = cap_spill;
  size = SUB168(auVar1 * auVar3,0);
  if ((((SUB168(auVar1 * auVar3,8) == 0) && (size < 0x1000000000001)) && (-1 < len_spill)) &&
     (len_spill <= cap_spill)) {
    runtime_mallocgc(size,typ,SUB81(et_spill,0));
    return local_10;
  }
  do {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = typ;
                    /* Unresolved local var: uintptr mem@[???] */
    auVar4._8_8_ = 0;
    auVar4._0_8_ = len_spill;
    uVar5 = SUB168(auVar2 * auVar4,0);
    iVar6 = len_spill;
    if (SUB168(auVar2 * auVar4,8) == 0) goto LAB_004ff531;
    do {
      e.data = typ;
      e._type = (runtime__type *)&runtime__stmp_110;
      runtime_gopanic(e);
      uVar5 = extraout_RAX;
LAB_004ff531:
    } while ((0x1000000000000 < uVar5) || (iVar6 < 0));
    e_00.data = typ;
    e_00._type = (runtime__type *)runtime__stmp_111;
    runtime_gopanic(e_00);
  } while( true );
}


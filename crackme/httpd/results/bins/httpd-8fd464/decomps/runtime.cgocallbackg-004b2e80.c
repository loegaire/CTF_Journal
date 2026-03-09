
/* WARNING: Unknown calling convention */

void runtime_cgocallbackg(void *fn,void *frame,uintptr ctxt)

{
  int *piVar1;
  void *fn_00;
  long lVar2;
  uintptr pc;
  void *frame_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  string s;
  string s_00;
  void *fn_spill;
  void *frame_spill;
  uintptr ctxt_spill;
  
                    /* Unresolved local var: runtime.g * gp@[DW_OP_reg0(RAX)]
                       Unresolved local var: void * savedsp@[???]
                       Unresolved local var: uintptr savedpc@[???]
                       Unresolved local var: runtime.libcall syscall@[???] */
  fn_00 = *(void **)(in_FS_OFFSET + -8);
  if (*(void **)(*(long *)((long)fn_00 + 0x30) + 200) != fn_00) {
    runtime_printlock();
    s.len = (int)frame;
    s.str = (uint8 *)0x2a19e2;
    runtime_printstring(s);
    runtime_printunlock();
    runtime_exit();
  }
  piVar1 = (int *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0x27c);
  *piVar1 = *piVar1 + 1;
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar2 = *(long *)(in_FS_OFFSET + -8);
  *(long *)(*(long *)(lVar2 + 0x30) + 0x170) = lVar2;
  *(undefined8 *)(lVar2 + 0xe8) = *(undefined8 *)(lVar2 + 0x30);
  lVar2 = *(long *)((long)fn_00 + 0x30);
  uVar3 = *(undefined8 *)(lVar2 + 0x318);
  uVar4 = *(undefined8 *)(lVar2 + 800);
  uVar5 = *(undefined8 *)(lVar2 + 0x328);
  uVar6 = *(undefined8 *)(lVar2 + 0x330);
  uVar7 = *(undefined8 *)(lVar2 + 0x338);
  uVar8 = *(undefined8 *)(lVar2 + 0x340);
  pc = *(uintptr *)((long)fn_00 + 0x70);
  frame_00 = *(void **)((long)fn_00 + 0x78);
  runtime_exitsyscall();
  *(undefined1 *)(*(long *)((long)fn_00 + 0x30) + 0x120) = 0;
  runtime_cgocallbackg1(fn_00,frame_00,ctxt_spill);
  *(undefined1 *)(*(long *)((long)fn_00 + 0x30) + 0x120) = 1;
  if (*(long *)((long)fn_00 + 0x30) == lVar2) {
    runtime_reentersyscall(pc,(uintptr)frame_00);
    lVar2 = *(long *)((long)fn_00 + 0x30);
    *(undefined8 *)(lVar2 + 0x318) = uVar3;
    *(undefined8 *)(lVar2 + 800) = uVar4;
    *(undefined8 *)(lVar2 + 0x328) = uVar5;
    *(undefined8 *)(lVar2 + 0x330) = uVar6;
    *(undefined8 *)(lVar2 + 0x338) = uVar7;
    *(undefined8 *)(lVar2 + 0x340) = uVar8;
    return;
  }
  s_00.len = (int)frame_00;
  s_00.str = &DAT_002a5a17;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_00);
}


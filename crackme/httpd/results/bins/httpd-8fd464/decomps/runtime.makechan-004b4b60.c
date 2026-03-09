
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.makechan(runtime.chantype * t, int size, runtime.hchan *
   ~r2) */

runtime_hchan * runtime_makechan(runtime_chantype *t,int size)

{
  runtime__type *prVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  runtime_hchan *extraout_RAX;
  runtime_hchan *extraout_RAX_00;
  runtime_hchan *extraout_RAX_01;
  bool needzero;
  long in_FS_OFFSET;
  interface___ e;
  string s;
  string s_00;
  runtime_chantype *t_spill;
  int size_spill;
  runtime_hchan *local_38;
  runtime_hchan *local_28;
  
                    /* Unresolved local var: runtime._type * elem@[???]
                       Unresolved local var: uintptr mem@[???]
                       Unresolved local var: runtime.hchan * c@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar1 = t_spill->elem;
  if (0xffff < prVar1->size) {
    s_00.len = size;
    s_00.str = &DAT_002a5a3d;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  if (prVar1->align < 9) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = prVar1->size;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = size_spill;
    uVar4 = SUB168(auVar2 * auVar3,0);
    if (((SUB168(auVar2 * auVar3,8) == 0) && (uVar4 < 0xffffffffffa1)) && (-1 < size_spill)) {
      needzero = SUB81(prVar1,0);
      if (uVar4 == 0) {
        runtime_mallocgc(0,(runtime__type *)size,needzero);
        if (runtime_writeBarrier._0_4_ == 0) {
          local_28->buf = &local_28->buf;
        }
        else {
          runtime_gcWriteBarrierCX();
          local_28 = extraout_RAX_00;
        }
      }
      else if (prVar1->ptrdata == 0) {
        runtime_mallocgc(uVar4 + 0x60,(runtime__type *)size,needzero);
        if (runtime_writeBarrier._0_4_ == 0) {
          local_28->buf = local_28 + 1;
        }
        else {
          runtime_gcWriteBarrierCX();
          local_28 = extraout_RAX;
        }
      }
      else {
        runtime_newobject((runtime__type *)&DAT_00278b60);
        runtime_mallocgc((uintptr)local_38,(runtime__type *)size,needzero);
        if (runtime_writeBarrier._0_4_ == 0) {
          local_38->buf = local_28;
          local_28 = local_38;
        }
        else {
          local_28 = local_38;
          runtime_gcWriteBarrier();
        }
      }
      local_28->elemsize = (uint16)prVar1->size;
      if (runtime_writeBarrier._0_4_ == 0) {
        local_28->elemtype = prVar1;
      }
      else {
        runtime_gcWriteBarrierCX();
        local_28 = extraout_RAX_01;
      }
      local_28->dataqsiz = size_spill;
      return local_28;
    }
    e.data = (void *)size;
    e._type = (runtime__type *)runtime__stmp_68;
    runtime_gopanic(e);
  }
  s.len = size;
  s.str = &DAT_0029dd98;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}


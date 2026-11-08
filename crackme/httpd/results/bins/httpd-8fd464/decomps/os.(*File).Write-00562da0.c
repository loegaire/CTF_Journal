
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*File).Write(os.File * f, []uint8 b, int n, error err) */

multireturn_int_error_ os___File__Write(os_File *f,__uint8 b)

{
  uint8 *puVar1;
  runtime__type *prVar2;
  runtime__type *extraout_RAX;
  runtime_itab *prVar3;
  runtime__type *prVar4;
  int iVar5;
  char cVar6;
  long in_FS_OFFSET;
  multireturn_int_error_ mVar7;
  multireturn_int_error_ mVar8;
  __uint8 p;
  os_File *f_spill;
  __uint8 b_spill;
  runtime__type *local_80;
  char local_70;
  runtime_itab *local_68;
  runtime__type *local_60;
  runtime__type *local_58;
  
  iVar5 = b.cap;
  p.array = b.array;
                    /* Unresolved local var: error e@[???] */
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: error err@[???] */
  prVar3 = os_ErrInvalid.tab;
  if (f_spill != (os_File *)0x0) {
    prVar3 = (runtime_itab *)0x0;
  }
  if (prVar3 == (runtime_itab *)0x0) {
    local_80 = (runtime__type *)b_spill.array;
    p.len = b_spill.len;
    p.cap = iVar5;
    internal_poll___FD__Write((internal_poll_FD *)f_spill,p);
    if ((long)local_68 < 0) {
      local_68 = (runtime_itab *)0x0;
    }
    if ((((local_60 != (runtime__type *)0x0) &&
         ((runtime__type *)local_60->ptrdata == (runtime__type *)&DAT_002463a0)) &&
        ((runtime_interfacetype *)local_58->size == (runtime_interfacetype *)0x20)) &&
       (f_spill->file->stdoutOrErr != false)) {
      os_sigpipe();
    }
    if (local_60 != (runtime__type *)0x0) {
      local_70 = (char)b_spill.cap;
      if ((runtime__type *)io_EOF.tab == local_60) {
        local_80 = local_58;
        runtime_ifaceeq(local_68,local_58,local_60);
        cVar6 = local_70;
      }
      else {
        cVar6 = '\0';
      }
      if (cVar6 == '\0') {
        prVar4 = local_60;
        prVar2 = local_58;
        if ((runtime__type *)internal_poll_ErrFileClosing.tab == local_60) {
          local_80 = local_58;
          runtime_ifaceeq(local_68,local_58,local_60);
          prVar2 = local_58;
          if (local_70 != '\0') {
            prVar4 = (runtime__type *)os_ErrClosed.tab;
            prVar2 = os_ErrClosed.data;
          }
        }
        local_60 = prVar2;
        runtime_newobject((runtime__type *)&DAT_00257220);
        local_80->ptrdata = (uintptr)&DAT_00000005;
        local_80->size = (uintptr)&DAT_00289353;
        puVar1 = (f_spill->file->name).str;
        local_80->equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)(f_spill->file->name).len;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(uint8 **)&local_80->hash = puVar1;
        }
        else {
          runtime_gcWriteBarrierDX();
          local_80 = extraout_RAX;
        }
        ((runtime_itab *)&local_80->gcdata)->inter = (runtime_interfacetype *)prVar4;
        if (runtime_writeBarrier._0_4_ == 0) {
          ((runtime_itab *)&local_80->str)->inter = (runtime_interfacetype *)local_60;
        }
        else {
          runtime_gcWriteBarrierCX();
        }
      }
    }
    mVar7.err.tab = (runtime_itab *)local_58;
    mVar7.n = (int)local_68;
    mVar7.err.data = local_60;
    return mVar7;
  }
  mVar8.err.tab = (runtime_itab *)p.array;
  mVar8.n = (int)f_spill;
  mVar8.err.data = prVar3;
  return mVar8;
}


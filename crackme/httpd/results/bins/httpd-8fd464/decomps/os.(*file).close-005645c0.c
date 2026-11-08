
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*file).close(os.file * file, error ~r0) */

error os___file__close(os_file *file)

{
  uint8 *puVar1;
  os_file *extraout_RAX;
  os_file *fd;
  runtime__type *extraout_RAX_00;
  runtime__type *extraout_RAX_01;
  runtime__type *prVar2;
  runtime__type *unaff_RBX;
  os_dirInfo *in_RDI;
  os_dirInfo *poVar3;
  long in_FS_OFFSET;
  interface___ obj;
  error eVar4;
  error eVar5;
  interface___ finalizer;
  interface___ x;
  os_file *file_spill;
  runtime__type *local_48;
  runtime__type *local_40;
  char cStack_38;
  
                    /* Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (file_spill == (os_file *)0x0) {
    eVar5.data = unaff_RBX;
    eVar5.tab = (runtime_itab *)&DAT_002b2e10;
    return eVar5;
  }
  poVar3 = file_spill->dirinfo;
  fd = file_spill;
  if (poVar3 != (os_dirInfo *)0x0) {
    prVar2 = (runtime__type *)poVar3->buf;
    if (prVar2 != (runtime__type *)0x0) {
      local_48 = (runtime__type *)&DAT_00219520;
      x.data = poVar3;
      x._type = unaff_RBX;
      sync___Pool__Put((sync_Pool *)&DAT_00219520,x);
      local_40 = prVar2;
      if (runtime_writeBarrier._0_4_ == 0) {
        poVar3->buf = (__uint8 *)0x0;
      }
      else {
        runtime_gcWriteBarrier();
        in_RDI = poVar3;
      }
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      file_spill->dirinfo = (os_dirInfo *)0x0;
    }
    else {
      in_RDI = (os_dirInfo *)&file_spill->dirinfo;
      runtime_gcWriteBarrierCX();
      fd = extraout_RAX;
    }
  }
                    /* Unresolved local var: error e@[???] */
  prVar2 = local_48;
  internal_poll___FD__Close(&fd->pfd);
  if (local_48 == (runtime__type *)0x0) {
    local_48 = (runtime__type *)0x0;
  }
  else {
    if ((runtime__type *)internal_poll_ErrFileClosing.tab == local_48) {
      local_48 = local_40;
      runtime_ifaceeq((runtime_itab *)prVar2,local_40,local_40);
      if (cStack_38 != '\0') {
        prVar2 = (runtime__type *)os_ErrClosed.tab;
        local_40 = os_ErrClosed.data;
      }
    }
    runtime_newobject((runtime__type *)&DAT_00257220);
    local_48->ptrdata = 5;
    local_48->size = (uintptr)&DAT_00288c82;
    puVar1 = (file_spill->name).str;
    local_48->equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)(file_spill->name).len;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(uint8 **)&local_48->hash = puVar1;
    }
    else {
      in_RDI = (os_dirInfo *)&local_48->hash;
      runtime_gcWriteBarrierDX();
      local_48 = extraout_RAX_00;
    }
    local_48->gcdata = (uint8 *)prVar2;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(runtime__type **)&local_48->str = local_40;
    }
    else {
      in_RDI = (os_dirInfo *)&local_48->str;
      runtime_gcWriteBarrierDX();
      local_48 = extraout_RAX_01;
    }
  }
  obj.data = &DAT_002336e0;
  obj._type = local_48;
  finalizer.data = in_RDI;
  finalizer._type = (runtime__type *)file_spill;
  runtime_SetFinalizer(obj,finalizer);
  eVar4.data = &DAT_002336e0;
  eVar4.tab = (runtime_itab *)local_48;
  return eVar4;
}


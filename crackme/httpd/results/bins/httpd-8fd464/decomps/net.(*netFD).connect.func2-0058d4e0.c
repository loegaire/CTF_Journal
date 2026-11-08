
/* WARNING: Unknown calling convention */

void net___netFD__connect_func2
               (context_Context ctx,net_netFD *fd,chan_error interruptRes,chan_struct___ done)

{
  code *pcVar1;
  func__ *pfVar2;
  undefined1 *puVar3;
  uint16 *order0;
  undefined1 *unaff_RBP;
  undefined1 in_R8B;
  long in_FS_OFFSET;
  error eVar4;
  time_Time t;
  multireturn_int_bool_ mVar5;
  context_Context ctx_spill;
  net_netFD *fd_spill;
  chan_error interruptRes_spill;
  chan_struct___ done_spill;
  
  order0 = ctx.data;
  do {
    puVar3 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      pcVar1 = *(code **)(*(long *)((long)register0x00000020 + 8) + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x80) =
           *(undefined8 *)((long)register0x00000020 + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x58d51b;
      (*pcVar1)();
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
      *(uintptr *)((long)register0x00000020 + -0x18) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x18) =
           *(undefined8 *)((long)register0x00000020 + -0x78);
      *(undefined8 *)((long)register0x00000020 + -0x28) =
           *(undefined8 *)((long)register0x00000020 + 0x28);
      *(undefined1 **)((long)register0x00000020 + -0x80) =
           (undefined1 *)((long)register0x00000020 + -0x28);
      *(runtime_scase **)((long)register0x00000020 + -0x78) =
           (runtime_scase *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 2;
      *(undefined1 *)((long)register0x00000020 + -0x58) = 1;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x58d57c;
      mVar5 = runtime_selectgo((runtime_scase *)((long)register0x00000020 + -0x40),order0,
                               (uintptr *)((long)register0x00000020 + -0x18),(int)interruptRes,
                               (int)done,(bool)in_R8B);
      order0 = (uint16 *)CONCAT71((int7)((ulong)order0 >> 8),mVar5.~r7);
      if (*(long *)((long)register0x00000020 + -0x50) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x80) =
             *(undefined8 *)((long)register0x00000020 + 0x20);
        *(undefined8 **)((long)register0x00000020 + -0x78) = &net_http__stmp_147;
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x58d65c;
        runtime_chansend1((runtime_hchan *)&net_http__stmp_147,order0);
        return;
      }
      puVar3 = (undefined1 *)((long)register0x00000020 + -0x80);
      if (*(long *)((long)register0x00000020 + -0x50) == 1) {
        *(internal_poll_FD **)((long)register0x00000020 + -0x80) =
             *(internal_poll_FD **)((long)register0x00000020 + 0x18);
        *(uint64 *)((long)register0x00000020 + -0x78) = net_aLongTimeAgo.wall;
        *(int64 *)((long)register0x00000020 + -0x70) = net_aLongTimeAgo.ext;
        *(time_Location **)((long)register0x00000020 + -0x68) = net_aLongTimeAgo.loc;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x77;
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x58d5d4;
        t.ext = net_aLongTimeAgo.wall;
        t.wall = (uint64)net_aLongTimeAgo.loc;
        t.loc = (time_Location *)interruptRes;
        eVar4 = internal_poll_setDeadlineImpl
                          (*(internal_poll_FD **)((long)register0x00000020 + 0x18),t,(int)done);
        *(undefined8 *)((long)register0x00000020 + -0x38) =
             *(undefined8 *)((long)register0x00000020 + -0x58);
        *(undefined8 *)((long)register0x00000020 + -0x30) =
             *(undefined8 *)((long)register0x00000020 + -0x50);
        pfVar2 = *net_testHookCanceledDial;
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x58d5f4;
        (*pfVar2)();
        pcVar1 = *(code **)(*(long *)((long)register0x00000020 + 8) + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x80) =
             *(undefined8 *)((long)register0x00000020 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x58d60e;
        (*pcVar1)();
        *(undefined8 *)((long)register0x00000020 + -0x38) =
             *(undefined8 *)((long)register0x00000020 + -0x78);
        *(undefined8 *)((long)register0x00000020 + -0x30) =
             *(undefined8 *)((long)register0x00000020 + -0x70);
        *(undefined8 *)((long)register0x00000020 + -0x80) =
             *(undefined8 *)((long)register0x00000020 + 0x20);
        *(runtime_hchan **)((long)register0x00000020 + -0x78) =
             (runtime_hchan *)((long)register0x00000020 + -0x38);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x58d63d;
        runtime_chansend1((runtime_hchan *)((long)register0x00000020 + -0x38),eVar4.data);
        return;
      }
    }
    register0x00000020 = (BADSPACEBASE *)puVar3;
    *(undefined8 *)((long)register0x00000020 + -8) = 0x58d66c;
    runtime_morestack_noctxt();
  } while( true );
}


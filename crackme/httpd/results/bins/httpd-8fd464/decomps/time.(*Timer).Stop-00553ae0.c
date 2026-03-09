
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.(*Timer).Stop(time.Timer * t, bool ~r0) */

bool time___Timer__Stop(time_Timer *t)

{
  runtime_timer *t_00;
  void *unaff_RBX;
  undefined1 *puVar1;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  time_Timer *t_spill;
  
  do {
    puVar1 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar1 = (undefined1 *)((long)register0x00000020 + -0x18);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      if (*(long *)(*(long *)((long)register0x00000020 + 8) + 0x20) != 0) {
        t_00 = (runtime_timer *)(*(long *)((long)register0x00000020 + 8) + 8);
        *(runtime_timer **)((long)register0x00000020 + -0x18) = t_00;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x553b16;
        time_stopTimer(t_00);
        *(undefined1 *)((long)register0x00000020 + 0x10) =
             *(undefined1 *)((long)register0x00000020 + -0x10);
        return (bool)*(undefined1 *)((long)register0x00000020 + -0x10);
      }
      *(undefined **)((long)register0x00000020 + -0x18) = &DAT_00225520;
      *(undefined ***)((long)register0x00000020 + -0x10) = &net_http__stmp_76;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x553b45;
      e.data = unaff_RBX;
      e._type = (runtime__type *)&net_http__stmp_76;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar1 + -8) = 0x553b4b;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar1;
  } while( true );
}


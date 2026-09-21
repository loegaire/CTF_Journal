
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.(*Timer).Reset(time.Timer * t, time.Duration d, bool ~r1) */

bool time___Timer__Reset(time_Timer *t,time_Duration d)

{
  undefined1 *puVar1;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  time_Timer *t_spill;
  time_Duration d_spill;
  
  do {
    puVar1 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar1 = (undefined1 *)((long)register0x00000020 + -0x20);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      if (*(long *)(*(long *)((long)register0x00000020 + 8) + 0x20) != 0) {
        *(time_Duration *)((long)register0x00000020 + -0x20) =
             *(time_Duration *)((long)register0x00000020 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x553cb7;
        time_when(*(time_Duration *)((long)register0x00000020 + 0x10));
        *(runtime_timer **)((long)register0x00000020 + -0x20) =
             (runtime_timer *)(*(long *)((long)register0x00000020 + 8) + 8);
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x553cc9;
        time_resetTimer((runtime_timer *)(*(long *)((long)register0x00000020 + 8) + 8),d);
        *(undefined1 *)((long)register0x00000020 + 0x18) =
             *(undefined1 *)((long)register0x00000020 + -0x10);
        return (bool)*(undefined1 *)((long)register0x00000020 + -0x10);
      }
      *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x18) = time__stmp_6;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x553cf8;
      e.data = (void *)d;
      e._type = (runtime__type *)time__stmp_6;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar1 + -8) = 0x553cfe;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar1;
  } while( true );
}


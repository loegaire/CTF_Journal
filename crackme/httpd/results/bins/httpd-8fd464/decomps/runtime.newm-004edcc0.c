
/* WARNING: Unknown calling convention */

void runtime_newm(func__ **fn,runtime_p *_p_,int64 id)

{
  long lVar1;
  long in_FS_OFFSET;
  string s;
  func__ **fn_spill;
  runtime_p *_p__spill;
  int64 id_spill;
  runtime_m *local_18;
  
                    /* Unresolved local var: runtime.m * mp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_allocm(_p__spill,(func__ **)_p_,id_spill);
  local_18->doesPark = _p__spill != (runtime_p *)0x0;
  local_18->nextp = (runtime_puintptr)_p__spill;
  *&(local_18->sigmask).__bits = runtime_initSigmask.__bits;
                    /* Unresolved local var: runtime.g * gp@[???] */
  if (((*(long *)(in_FS_OFFSET + -8) != 0) &&
      (lVar1 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30), lVar1 != 0)) &&
     ((*(int *)(lVar1 + 0x278) != 0 || (*(char *)(lVar1 + 0x120) != '\0')))) {
    runtime_lock2(&runtime_newmHandoff.lock);
    if (runtime_newmHandoff.haveTemplateThread != 0) {
      local_18->schedlink = runtime_newmHandoff.newm;
      runtime_newmHandoff.newm = (runtime_muintptr)local_18;
      if (runtime_newmHandoff.waiting != false) {
        runtime_newmHandoff.waiting = false;
        runtime_notewakeup(&runtime_newmHandoff.wake);
      }
      runtime_unlock2(&runtime_newmHandoff.lock);
      return;
    }
    s.len = (int)_p_;
    s.str = &DAT_002a7353;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  runtime_newm1(local_18);
  return;
}


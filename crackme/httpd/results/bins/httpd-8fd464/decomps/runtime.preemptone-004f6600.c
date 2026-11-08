
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.preemptone(runtime.p * _p_, bool ~r1) */

bool runtime_preemptone(runtime_p *_p_)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 extraout_AL;
  int iVar4;
  runtime_p *extraout_RAX;
  long in_FS_OFFSET;
  bool bVar5;
  runtime_p *_p__spill;
  
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.g * gp@[???] */
  while (uVar3 = SUB81(_p_,0),
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    _p_ = extraout_RAX;
  }
  plVar1 = (long *)_p__spill->m;
  if ((plVar1 != (long *)0x0) && (*(long **)(*(long *)(in_FS_OFFSET + -8) + 0x30) != plVar1)) {
    lVar2 = plVar1[0x19];
    if ((lVar2 != 0) && (*plVar1 != lVar2)) {
      *(undefined1 *)(lVar2 + 0xb1) = 1;
      *(undefined8 *)(lVar2 + 0x10) = 0xfffffffffffffade;
      if (runtime_debug.asyncpreemptoff == 0) {
        _p__spill->preempt = true;
        LOCK();
        iVar4 = *(int *)((long)plVar1 + 0x35c);
        bVar5 = iVar4 == 0;
        if (bVar5) {
          *(int *)((long)plVar1 + 0x35c) = 1;
          iVar4 = 0;
        }
        uVar3 = (undefined1)iVar4;
        UNLOCK();
        if (bVar5) {
          runtime_thr_kill();
          uVar3 = extraout_AL;
        }
      }
      return (bool)uVar3;
    }
    return (bool)uVar3;
  }
  return (bool)uVar3;
}


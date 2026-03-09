
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.preemptall(bool ~r0) */

bool runtime_preemptall(void)

{
  runtime_p **_p_;
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: bool res@[???] */
  while (iVar1 = runtime_allp.len, _p_ = runtime_allp.array,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.p * _p_@[???] */
  for (lVar2 = 0; lVar2 < iVar1; lVar2 = lVar2 + 1) {
    if (_p_[lVar2]->status == 1) {
      runtime_preemptone((runtime_p *)_p_);
    }
  }
  return SUB81(_p_,0);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcMarkDone_func2(void)

{
  undefined1 *puVar1;
  runtime_p *_p_;
  runtime_workbuf *prVar2;
  runtime_p **pprVar3;
  int iVar4;
  long in_RDX;
  long extraout_RDX;
  long lVar5;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: bool * &restart@[???] */
  while (iVar4 = runtime_allp.len, pprVar3 = runtime_allp.array,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  puVar1 = *(undefined1 **)(in_RDX + 8);
                    /* Unresolved local var: runtime.p * p@[???] */
  lVar5 = 0;
  while( true ) {
    if (iVar4 <= lVar5) {
      return;
    }
    _p_ = pprVar3[lVar5];
    runtime_wbBufFlush1(_p_);
    prVar2 = (_p_->gcw).wbuf1;
    if ((prVar2 != (runtime_workbuf *)0x0) &&
       (((prVar2->workbufhdr).nobj != 0 || ((((_p_->gcw).wbuf2)->workbufhdr).nobj != 0)))) break;
    lVar5 = lVar5 + 1;
  }
  *puVar1 = 1;
  return;
}


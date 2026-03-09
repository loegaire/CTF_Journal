
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*profBuf).canWriteTwoRecords(runtime.profBuf * b, int
   nstk1, int nstk2, bool ~r2) */

bool runtime___profBuf__canWriteTwoRecords(runtime_profBuf *b,int nstk1,int nstk2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  runtime_profBuf *b_spill;
  int nstk1_spill;
  int nstk2_spill;
  
                    /* Unresolved local var: runtime.profIndex br@[???]
                       Unresolved local var: runtime.profIndex bw@[???]
                       Unresolved local var: int nd@[???]
                       Unresolved local var: int want@[???]
                       Unresolved local var: int i@[???] */
  uVar2 = b_spill->w;
  if ((long)((int)(((uint)(b_spill->r >> 0x22) - (uint)(uVar2 >> 0x22)) * 4) >> 2) +
      (b_spill->tags).len < 2) {
    return SUB81(uVar2,0);
  }
  uVar1 = (b_spill->data).len;
  lVar3 = nstk1_spill + b_spill->hdrsize;
  if ((int)uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicdivide();
  }
  uVar2 = (uVar2 & 0xffffffff) % (uVar1 & 0xffffffff);
  if ((long)uVar1 < (long)(lVar3 + uVar2 + 2)) {
    uVar2 = 0;
  }
  lVar3 = uVar2 + lVar3;
  if ((long)uVar1 < (long)(b_spill->hdrsize + nstk2_spill + lVar3 + 4)) {
    uVar1 = uVar1 - lVar3;
  }
  return SUB81(uVar1,0);
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*profBuf).canWriteRecord(runtime.profBuf * b, int nstk,
   bool ~r1) */

bool runtime___profBuf__canWriteRecord(runtime_profBuf *b,int nstk)

{
  runtime_profBuf *b_spill;
  int nstk_spill;
  
                    /* Unresolved local var: runtime.profIndex br@[???]
                       Unresolved local var: runtime.profIndex bw@[???]
                       Unresolved local var: int nd@[???]
                       Unresolved local var: int want@[???]
                       Unresolved local var: int i@[???] */
  if ((long)((int)(((uint)(b_spill->r >> 0x22) - (uint)(b_spill->w >> 0x22)) * 4) >> 2) +
      (b_spill->tags).len < 1) {
    return SUB81(b_spill->w,0);
  }
  if ((int)(b_spill->data).len != 0) {
    return (bool)((char)nstk_spill + (char)b_spill->hdrsize + '\x02');
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicdivide();
}


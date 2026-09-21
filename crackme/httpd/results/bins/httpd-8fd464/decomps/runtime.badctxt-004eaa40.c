
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_badctxt(void)

{
  int unaff_RBX;
  string s;
  
  s.len = unaff_RBX;
  s.str = &DAT_0028d9ca;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void io.discard.Write([]uint8 p, int ~r1, error ~r2) */

multireturn_int_error__conflict io_discard_Write(__uint8 p)

{
  multireturn_int_error__conflict mVar1;
  __uint8 p_spill;
  
  mVar1.~r2.data = (void *)p.cap;
  mVar1.~r2.tab = p.len;
  mVar1.~r1 = p_spill.len;
  return mVar1;
}


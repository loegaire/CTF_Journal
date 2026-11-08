
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.chanlen(runtime.hchan * c, int ~r1) */

int reflect_chanlen(runtime_hchan *c)

{
  runtime_hchan *c_spill;
  
  if (c_spill != (runtime_hchan *)0x0) {
    return c_spill->qcount;
  }
  return 0;
}


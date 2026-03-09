
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void fmt.(*pp).Flag(fmt.pp * p, int b, bool ~r1) */

bool fmt___pp__Flag(fmt_pp *p,int b)

{
  undefined1 uVar1;
  fmt_pp *p_spill;
  int b_spill;
  
  if (b_spill < 0x24) {
    if (b_spill == 0x20) {
      return (p_spill->fmt).fmtFlags.space;
    }
    if (b_spill == 0x23) {
      if ((p_spill->fmt).fmtFlags.sharp == false) {
        uVar1 = (p_spill->fmt).fmtFlags.sharpV;
      }
      else {
        uVar1 = 1;
      }
      return (bool)uVar1;
    }
  }
  else {
    if (b_spill == 0x2b) {
      if ((p_spill->fmt).fmtFlags.plus == false) {
        uVar1 = (p_spill->fmt).fmtFlags.plusV;
      }
      else {
        uVar1 = 1;
      }
      return (bool)uVar1;
    }
    if (b_spill == 0x2d) {
      return (p_spill->fmt).fmtFlags.minus;
    }
    if (b_spill == 0x30) {
      return (p_spill->fmt).fmtFlags.zero;
    }
  }
  return SUB81(b_spill,0);
}


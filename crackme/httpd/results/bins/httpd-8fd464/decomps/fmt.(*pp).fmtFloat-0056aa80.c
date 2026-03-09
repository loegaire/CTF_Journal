
/* WARNING: Unknown calling convention */

void fmt___pp__fmtFloat(fmt_pp *p,float64 v,int size,int32 verb)

{
  fmt_pp *p_00;
  ulong uVar1;
  int in_RDI;
  long in_FS_OFFSET;
  fmt_pp *p_spill;
  float64 v_spill;
  int size_spill;
  int32 verb_spill;
  
  uVar1 = (ulong)(uint)verb;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  p_00 = (fmt_pp *)(ulong)(uint)verb_spill;
  if (verb_spill < 0x59) {
    if (verb_spill < 0x47) {
      if (verb_spill == 0x45) {
LAB_0056ab29:
        fmt___fmt__fmtFloat((fmt_fmt *)p_00,v_spill,size,(int32)size_spill,in_RDI);
        return;
      }
      if (verb_spill == 0x46) {
        fmt___fmt__fmtFloat((fmt_fmt *)size_spill,v_spill,size,(int32)uVar1,in_RDI);
        return;
      }
    }
    else if ((verb_spill == 0x47) || (verb_spill == 0x58)) goto LAB_0056ab79;
LAB_0056abb2:
    fmt___pp__badVerb(p_00,(int32)size);
  }
  else {
    if (verb_spill < 0x67) {
      if (verb_spill != 0x62) {
        if (100 < verb_spill) goto LAB_0056ab29;
        goto LAB_0056abb2;
      }
    }
    else if (verb_spill != 0x67) {
      if (verb_spill == 0x76) {
        fmt___fmt__fmtFloat((fmt_fmt *)size_spill,v_spill,size,(int32)uVar1,in_RDI);
        return;
      }
      if (verb_spill != 0x78) goto LAB_0056abb2;
    }
LAB_0056ab79:
    fmt___fmt__fmtFloat((fmt_fmt *)p_00,v_spill,size,(int32)size_spill,in_RDI);
  }
  return;
}



/* WARNING: Unknown calling convention */

void fmt___pp__fmtBool(fmt_pp *p,bool v,int32 verb)

{
  undefined3 unaff_00000019;
  long in_FS_OFFSET;
  fmt_pp *p_spill;
  bool v_spill;
  int32 verb_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((verb_spill == 0x74) || (verb_spill == 0x76)) {
    fmt___fmt__fmtBoolean((fmt_fmt *)(ulong)v_spill,v);
  }
  else {
    fmt___pp__badVerb((fmt_pp *)(ulong)(uint)verb_spill,CONCAT31(unaff_00000019,v));
  }
  return;
}


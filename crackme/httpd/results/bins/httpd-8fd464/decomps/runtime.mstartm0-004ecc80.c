
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_mstartm0(void)

{
  undefined1 in_AL;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    in_AL = extraout_AL_00;
  }
  if ((runtime_iscgo != false) && (runtime_cgoHasExtraM == false)) {
    runtime_cgoHasExtraM = true;
    runtime_newextram();
    in_AL = extraout_AL;
  }
  runtime_initsig((bool)in_AL);
  return;
}


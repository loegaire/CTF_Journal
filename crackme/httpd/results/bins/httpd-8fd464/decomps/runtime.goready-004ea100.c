
/* WARNING: Unknown calling convention */

void runtime_goready(runtime_g *gp,int traceskip)

{
  long in_FS_OFFSET;
  runtime_g *gp_spill;
  int traceskip_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_systemstack();
  return;
}


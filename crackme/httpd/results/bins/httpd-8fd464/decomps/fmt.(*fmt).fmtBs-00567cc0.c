
/* WARNING: Unknown calling convention */

void fmt___fmt__fmtBs(fmt_fmt *f,__uint8 b)

{
  int iVar1;
  long in_FS_OFFSET;
  __uint8 b_00;
  __uint8 b_01;
  fmt_fmt *f_spill;
  __uint8 b_spill;
  undefined8 local_20;
  undefined8 local_18;
  
  iVar1 = b.cap;
  b_00.array = b.array;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  b_00.len = b_spill.cap;
  b_00.cap = iVar1;
  fmt___fmt__truncate(f_spill,b_00);
  b_01.len = local_18;
  b_01.array = (uint8 *)f_spill;
  b_01.cap = iVar1;
  fmt___fmt__pad(local_20,b_01);
  return;
}


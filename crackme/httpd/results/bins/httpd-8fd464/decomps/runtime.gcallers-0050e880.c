
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.gcallers(runtime.g * gp, int skip, []uintptr pcbuf, int
   ~r3) */

int runtime_gcallers(runtime_g *gp,int skip,__uintptr pcbuf)

{
  int skip_00;
  runtime_g *gp_00;
  uintptr *in_R8;
  int in_R9;
  func__runtime_stkframe__unsafe_Pointer__bool **in_R10;
  void *in_R11;
  long in_FS_OFFSET;
  runtime_g *gp_spill;
  int skip_spill;
  __uintptr pcbuf_spill;
  undefined8 local_10;
  
  skip_00 = pcbuf.cap;
  gp_00 = (runtime_g *)pcbuf.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (pcbuf_spill.len != 0) {
    runtime_gentraceback
              ((uintptr)pcbuf_spill.array,skip,pcbuf_spill.len,gp_00,skip_00,in_R8,in_R9,in_R10,
               in_R11,0xffffffffffffffff);
    return local_10;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}


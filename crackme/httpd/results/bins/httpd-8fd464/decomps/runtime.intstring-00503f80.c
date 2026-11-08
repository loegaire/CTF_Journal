
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.intstring(uint8[4] * buf, int64 v, string s) */

string runtime_intstring(uint8 (*buf) [4],int64 v)

{
  int32 r;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  string sVar1;
  __uint8 p;
  multireturn_string___uint8_ mVar2;
  uint8 (*buf_spill) [4];
  int64 v_spill;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_28;
  
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: []uint8 b@[???] */
  while (r = (int32)in_RDI,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (buf_spill == (uint8 (*) [4])0x0) {
    mVar2 = runtime_rawstring(0);
    r = (int32)mVar2.b.len;
    buf_spill = local_40;
  }
  else {
    local_38 = 4;
  }
  if (v_spill != (int)v_spill) {
    v_spill = 0xfffd;
  }
  p.len = (int)buf_spill;
  p.array = (uint8 *)v_spill;
  p.cap = 0xfffd;
  runtime_encoderune(p,r);
  if (local_28 <= local_38) {
    sVar1.len = (int)buf_spill;
    sVar1.str = *buf_spill;
    return sVar1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAlen();
}


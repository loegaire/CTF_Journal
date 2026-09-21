
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.stringtoslicebyte(runtime.tmpBuf * buf, string s, []uint8
   ~r2) */

__uint8 runtime_stringtoslicebyte(runtime_tmpBuf *buf,string s)

{
  long in_FS_OFFSET;
  __uint8 _Var1;
  runtime_tmpBuf *buf_spill;
  string s_spill;
  runtime_tmpBuf *local_38;
  long local_30;
  undefined8 local_28;
  
                    /* Unresolved local var: []uint8 b@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((buf_spill == (runtime_tmpBuf *)0x0) || (0x20 < s_spill.len)) {
    runtime_rawbyteslice((int)buf_spill);
    buf_spill = local_38;
  }
  else {
    *(uint8 *)((long)buf_spill + 0) = 0;
    *(uint8 *)((long)buf_spill + 1) = 0;
    *(uint8 *)((long)buf_spill + 2) = 0;
    *(uint8 *)((long)buf_spill + 3) = 0;
    *(uint8 *)((long)buf_spill + 4) = 0;
    *(uint8 *)((long)buf_spill + 5) = 0;
    *(uint8 *)((long)buf_spill + 6) = 0;
    *(uint8 *)((long)buf_spill + 7) = 0;
    *(uint8 *)((long)buf_spill + 8) = 0;
    *(uint8 *)((long)buf_spill + 9) = 0;
    *(uint8 *)((long)buf_spill + 10) = 0;
    *(uint8 *)((long)buf_spill + 0xb) = 0;
    *(uint8 *)((long)buf_spill + 0xc) = 0;
    *(uint8 *)((long)buf_spill + 0xd) = 0;
    *(uint8 *)((long)buf_spill + 0xe) = 0;
    *(uint8 *)((long)buf_spill + 0xf) = 0;
    *(uint8 *)((long)buf_spill + 0x10) = 0;
    *(uint8 *)((long)buf_spill + 0x11) = 0;
    *(uint8 *)((long)buf_spill + 0x12) = 0;
    *(uint8 *)((long)buf_spill + 0x13) = 0;
    *(uint8 *)((long)buf_spill + 0x14) = 0;
    *(uint8 *)((long)buf_spill + 0x15) = 0;
    *(uint8 *)((long)buf_spill + 0x16) = 0;
    *(uint8 *)((long)buf_spill + 0x17) = 0;
    *(uint8 *)((long)buf_spill + 0x18) = 0;
    *(uint8 *)((long)buf_spill + 0x19) = 0;
    *(uint8 *)((long)buf_spill + 0x1a) = 0;
    *(uint8 *)((long)buf_spill + 0x1b) = 0;
    *(uint8 *)((long)buf_spill + 0x1c) = 0;
    *(uint8 *)((long)buf_spill + 0x1d) = 0;
    *(uint8 *)((long)buf_spill + 0x1e) = 0;
    *(uint8 *)((long)buf_spill + 0x1f) = 0;
    local_28 = 0x20;
    local_30 = s_spill.len;
  }
  if (s_spill.len < local_30) {
    local_30 = s_spill.len;
  }
  if ((runtime_tmpBuf *)s_spill.str != buf_spill) {
    runtime_memmove();
  }
  _Var1.len = local_28;
  _Var1.array = *buf_spill;
  _Var1.cap = local_30;
  return _Var1;
}


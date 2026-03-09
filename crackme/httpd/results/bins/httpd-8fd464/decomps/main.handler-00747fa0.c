
/* WARNING: Unknown calling convention */

void main_handler(net_http_ResponseWriter w,net_http_Request *r)

{
  uint8 *puVar1;
  int in_RSI;
  int in_RDI;
  long in_FS_OFFSET;
  runtime_iface rVar2;
  io_Writer w_00;
  net_http_ResponseWriter w_01;
  string s;
  string error;
  net_http_ResponseWriter w_spill;
  net_http_Request *r_spill;
  uint8 *local_20;
  
  rVar2.tab = w.data;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  puVar1 = (r_spill->Method).str;
  if ((((r_spill->Method).len == 3) && (*(short *)puVar1 == 0x4547)) && (puVar1[2] == 0x54)) {
    rVar2.data = puVar1;
    rVar2 = runtime_convI2I(w_spill.data,rVar2);
    w_00.data = rVar2.data;
    w_00.tab = (runtime_itab *)&DAT_0029cf2d;
    s.len = in_RDI;
    s.str = local_20;
    io_WriteString(w_00,s);
  }
  else {
    w_01.data = rVar2.tab;
    w_01.tab = (runtime_itab *)&DAT_0029a800;
    error.len = in_RDI;
    error.str = puVar1;
    net_http_Error(w_01,error,in_RSI);
  }
  return;
}


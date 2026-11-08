
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void main_main(void)

{
  os_File *srv;
  void *pvVar1;
  void *unaff_RBX;
  void *in_RSI;
  runtime_itab *in_RDI;
  long in_FS_OFFSET;
  io_Writer w;
  io_Writer w_00;
  error eVar2;
  net_http_Handler handler;
  __interface___ a;
  __interface___ a_00;
  multireturn_int_error_ mVar3;
  __interface___ v;
  string pattern;
  undefined1 local_38 [16];
  undefined *local_28;
  undefined1 *puStack_20;
  os_file *local_18;
  runtime_itab *prStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_28 = &DAT_00225520;
  puStack_20 = main__stmp_0;
  w.data = unaff_RBX;
  w.tab = (runtime_itab *)&DAT_00225520;
  a.len = (int)in_RDI;
  a.array = (interface___ *)&local_28;
  a.cap = (int)in_RSI;
  mVar3 = fmt_Fprintln(w,a);
  pvVar1 = mVar3.err.data;
  pattern.str = mVar3.err.tab;
  runtime_newproc(0x2b33e8,(runtime_funcval *)pattern.str);
  handler.data = in_RSI;
  handler.tab = in_RDI;
  pattern.len = (int)pvVar1;
  net_http___ServeMux__Handle((net_http_ServeMux *)&PTR_main_handler_002b33e0,pattern,handler);
  srv = os_Stdout;
  local_38._0_8_ = &DAT_00225520;
  local_38._8_8_ = &main__stmp_2;
  w_00.data = pattern.str;
  w_00.tab = (runtime_itab *)local_38;
  a_00.len = (int)in_RDI;
  a_00.array = (interface___ *)go_itab__os_File_io_Writer;
  a_00.cap = (int)in_RSI;
  fmt_Fprintln(w_00,a_00);
                    /* Unresolved local var: net/http.Server * server@[???] */
  runtime_newobject((runtime__type *)&DAT_00280820);
  srv[1].file = (os_file *)&DAT_00000005;
  srv->file = (os_file *)&DAT_002889a8;
  srv[2].file = (os_file *)0x0;
  srv[3].file = (os_file *)0x0;
  eVar2 = net_http___Server__ListenAndServe((net_http_Server *)srv);
  v.len = eVar2.data;
  local_18 = (os_file *)0x0;
  if (srv != (os_File *)0x0) {
    local_18 = srv[1].file;
  }
  v.array = (interface___ *)&local_18;
  v.cap = (int)local_18;
  prStack_10 = (runtime_itab *)local_38;
  log_Fatal(v);
  return;
}


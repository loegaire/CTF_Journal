
/* WARNING: Removing unreachable block (ram,0x006f25b9) */
/* WARNING: Removing unreachable block (ram,0x006f2660) */
/* WARNING: Removing unreachable block (ram,0x006f2669) */
/* WARNING: Removing unreachable block (ram,0x006f26ae) */
/* WARNING: Removing unreachable block (ram,0x006f3350) */
/* WARNING: Removing unreachable block (ram,0x006f26bc) */
/* WARNING: Removing unreachable block (ram,0x006f26a8) */
/* WARNING: Removing unreachable block (ram,0x006f26e0) */
/* WARNING: Removing unreachable block (ram,0x006f2ac6) */
/* WARNING: Removing unreachable block (ram,0x006f26e9) */
/* WARNING: Removing unreachable block (ram,0x006f29ec) */
/* WARNING: Removing unreachable block (ram,0x006f2a07) */
/* WARNING: Removing unreachable block (ram,0x006f2a0c) */
/* WARNING: Removing unreachable block (ram,0x006f2a6c) */
/* WARNING: Removing unreachable block (ram,0x006f271e) */
/* WARNING: Removing unreachable block (ram,0x006f28bb) */
/* WARNING: Removing unreachable block (ram,0x006f277a) */
/* WARNING: Removing unreachable block (ram,0x006f278b) */
/* WARNING: Removing unreachable block (ram,0x006f27a5) */
/* WARNING: Removing unreachable block (ram,0x006f27b9) */
/* WARNING: Removing unreachable block (ram,0x006f27fb) */
/* WARNING: Removing unreachable block (ram,0x006f2865) */
/* WARNING: Removing unreachable block (ram,0x006f2858) */
/* WARNING: Removing unreachable block (ram,0x006f2872) */
/* WARNING: Removing unreachable block (ram,0x006f28b1) */
/* WARNING: Removing unreachable block (ram,0x006f28cb) */
/* WARNING: Removing unreachable block (ram,0x006f2985) */
/* WARNING: Removing unreachable block (ram,0x006f2911) */
/* WARNING: Removing unreachable block (ram,0x006f296f) */
/* WARNING: Removing unreachable block (ram,0x006f295f) */
/* WARNING: Removing unreachable block (ram,0x006f2642) */
/* WARNING: Removing unreachable block (ram,0x006f2ace) */
/* WARNING: Removing unreachable block (ram,0x006f2b48) */
/* WARNING: Removing unreachable block (ram,0x006f2cc5) */
/* WARNING: Removing unreachable block (ram,0x006f2b59) */
/* WARNING: Removing unreachable block (ram,0x006f2bf8) */
/* WARNING: Removing unreachable block (ram,0x006f2d33) */
/* WARNING: Removing unreachable block (ram,0x006f2f5f) */
/* WARNING: Removing unreachable block (ram,0x006f325a) */
/* WARNING: Removing unreachable block (ram,0x006f3268) */
/* WARNING: Removing unreachable block (ram,0x006f32e5) */
/* WARNING: Removing unreachable block (ram,0x006f32d3) */
/* WARNING: Removing unreachable block (ram,0x006f2fe6) */
/* WARNING: Removing unreachable block (ram,0x006f312c) */
/* WARNING: Removing unreachable block (ram,0x006f3165) */
/* WARNING: Removing unreachable block (ram,0x006f3152) */
/* WARNING: Removing unreachable block (ram,0x006f3160) */
/* WARNING: Removing unreachable block (ram,0x006f3175) */
/* WARNING: Removing unreachable block (ram,0x006f319e) */
/* WARNING: Removing unreachable block (ram,0x006f31fc) */
/* WARNING: Removing unreachable block (ram,0x006f2ff4) */
/* WARNING: Removing unreachable block (ram,0x006f301b) */
/* WARNING: Removing unreachable block (ram,0x006f303a) */
/* WARNING: Removing unreachable block (ram,0x006f3028) */
/* WARNING: Removing unreachable block (ram,0x006f3035) */
/* WARNING: Removing unreachable block (ram,0x006f3313) */
/* WARNING: Removing unreachable block (ram,0x006f304a) */
/* WARNING: Removing unreachable block (ram,0x006f3073) */
/* WARNING: Removing unreachable block (ram,0x006f30d1) */
/* WARNING: Removing unreachable block (ram,0x006f2e50) */
/* WARNING: Removing unreachable block (ram,0x006f2e6f) */
/* WARNING: Removing unreachable block (ram,0x006f2e5d) */
/* WARNING: Removing unreachable block (ram,0x006f2e6a) */
/* WARNING: Removing unreachable block (ram,0x006f332f) */
/* WARNING: Removing unreachable block (ram,0x006f334b) */
/* WARNING: Removing unreachable block (ram,0x006f2e7f) */
/* WARNING: Removing unreachable block (ram,0x006f2ea8) */
/* WARNING: Removing unreachable block (ram,0x006f2f04) */
/* WARNING: Removing unreachable block (ram,0x006f2d25) */
/* WARNING: Removing unreachable block (ram,0x006f2c1b) */
/* WARNING: Removing unreachable block (ram,0x006f2c3e) */
/* WARNING: Removing unreachable block (ram,0x006f2caf) */
/* WARNING: Removing unreachable block (ram,0x006f2c9f) */
/* WARNING: Removing unreachable block (ram,0x006f2b37) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void mime.ParseMediaType(string v, string mediatype, map[string]string
   params, error err) */

multireturn_string_map_string_string_error_ mime_ParseMediaType(string v)

{
  void *in_RSI;
  runtime_itab *in_RDI;
  long in_FS_OFFSET;
  string sVar1;
  string s_00;
  string s_01;
  string substr;
  multireturn_string_map_string_string_error_ mVar3;
  uint8 *in_stack_00000008;
  int i;
  ulong local_248;
  undefined1 local_1e8 [72];
  undefined8 local_1a0;
  undefined *local_b0;
  string s;
  error eVar2;
  
  sVar1.len = v.len;
                    /* Unresolved local var: map[string]map[string]string continuation@[???]
                       Unresolved local var: strings.Builder buf@[???] */
  while (local_1e8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sVar1.str = in_stack_00000008;
  substr.len = (int)in_RDI;
  substr.str = (uint8 *)i;
  strings_Index(sVar1,substr);
  if (local_248 == 0xffffffffffffffff) {
    local_248 = i;
  }
  if (local_248 <= (ulong)i) {
    s.len = sVar1.len;
    s.str = in_stack_00000008;
    sVar1 = strings_ToLower(s);
    s_00.len = sVar1.len;
    s_00.str = &DAT_00287749;
    sVar1 = strings_TrimSpace(s_00);
    s_01.len = sVar1.len;
                    /* Unresolved local var: map[string]string pmap@[???]
                       Unresolved local var: string key@[???]
                       Unresolved local var: string value@[???]
                       Unresolved local var: string rest@[???] */
    local_b0 = &DAT_00287749;
    local_1a0 = 1;
    s_01.str = &DAT_00287749;
    eVar2 = mime_checkMediaTypeDisposition(s_01);
    mVar3.mediatype.len = eVar2.data;
    mVar3.mediatype.str = &DAT_00287749;
    mVar3.params = (map_string_string)0x1;
    mVar3.err.data = in_RSI;
    mVar3.err.tab = in_RDI;
    return mVar3;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAlen();
}


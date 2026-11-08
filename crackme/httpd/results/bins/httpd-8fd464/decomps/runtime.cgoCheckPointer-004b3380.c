
/* WARNING: Unknown calling convention */

void runtime_cgoCheckPointer(interface___ ptr,interface___ arg)

{
  byte bVar1;
  bool bVar2;
  uint8 *in_RSI;
  undefined1 top;
  int in_R8;
  long in_FS_OFFSET;
  string s;
  string msg;
  string msg_00;
  interface___ ptr_spill;
  interface___ arg_spill;
  char local_38;
  void *pvVar3;
  
  s.len = ptr.data;
  pvVar3 = arg.data;
                    /* Unresolved local var: runtime.eface * ep@[???]
                       Unresolved local var: runtime._type * t@[???]
                       Unresolved local var: bool top@[???] */
  while (top = SUB81(pvVar3,0),
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_debug.cgocheck == 0) {
    return;
  }
  if (arg_spill._type != (runtime__type *)0x0) {
    bVar1 = (ptr_spill._type)->kind & 0x1f;
    if ((bVar1 == 0x16) || (bVar1 == 0x1a)) {
                    /* Unresolved local var: void * p@[???]
                       Unresolved local var: runtime.eface * aep@[???] */
      if (((ptr_spill._type)->kind & 0x20) == 0) {
        ptr_spill.data = *(void **)ptr_spill.data;
      }
      if (ptr_spill.data == (void *)0x0) {
        return;
      }
      runtime_cgoIsGoPointer(ptr_spill._type);
      if (local_38 == '\0') {
        return;
      }
      bVar1 = (arg_spill._type)->kind & 0x1f;
                    /* Unresolved local var: runtime.ptrtype * pt@[???] */
      if (bVar1 == 1) {
        bVar2 = (bool)((ptr_spill._type)->kind & 0x1f);
        if (bVar2 != true) {
          msg.len = in_R8;
          msg.str = in_RSI;
          runtime_cgoCheckArg((runtime__type *)&DAT_002a6b8b,s.len,bVar2,(bool)top,msg);
          return;
        }
        bVar2 = true;
      }
      else {
        ptr_spill._type = arg_spill._type;
        if (bVar1 == 0x11) {
          bVar2 = false;
        }
        else {
          if (bVar1 != 0x17) {
            s.str = &DAT_002930a6;
                    /* WARNING: Subroutine does not return */
            runtime_throw(s);
          }
          bVar2 = true;
        }
      }
      goto LAB_004b34b3;
    }
  }
  bVar2 = true;
LAB_004b34b3:
  msg_00.len = in_R8;
  msg_00.str = in_RSI;
  runtime_cgoCheckArg((runtime__type *)&DAT_002a6b8b,(void *)(ulong)(ptr_spill._type)->kind,bVar2,
                      (bool)top,msg_00);
  return;
}



/* WARNING: Unknown calling convention */
/* DWARF original name: type..eq.[2]interface {}
   DWARF original prototype: void type..eq.[2]interface_{}(interface_{}[2] * p, interface_{}[2] * q,
   bool r) */

bool type__eq__2_interface___(interface___ (*p) [2],interface___ (*q) [2])

{
  interface___ (*paiVar1) [2];
  interface___ (*x) [2];
  long in_FS_OFFSET;
  interface___ (*p_spill) [2];
  interface___ (*q_spill) [2];
  char local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  x = (interface___ (*) [2])0x0;
  while (((paiVar1 = q_spill, (long)x < 2 &&
          ((*q_spill)[(long)x]._type == (*p_spill)[(long)x]._type)) &&
         (runtime_efaceeq((runtime__type *)q_spill,x,p_spill), paiVar1 = x, local_18 != '\0'))) {
    x = (interface___ (*) [2])((long)&(*x)[0]._type + 1);
  }
  return SUB81(paiVar1,0);
}


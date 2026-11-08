
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.reflect.Method(reflect.Method * p, reflect.Method * q,
   bool r) */

bool type__eq_reflect_Method(reflect_Method *p,reflect_Method *q)

{
  runtime_itab *y;
  long in_FS_OFFSET;
  reflect_Method *p_spill;
  reflect_Method *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((((q_spill->Name).len == (p_spill->Name).len) &&
       ((p_spill->PkgPath).len == (q_spill->PkgPath).len)) && (runtime_memequal(), local_10 != '\0')
      ) && (runtime_memequal(), local_10 != '\0')) {
    y = (p_spill->Type).tab;
    if ((((q_spill->Type).tab == y) &&
        (runtime_ifaceeq((runtime_itab *)p_spill,(q_spill->Type).data,y), local_10 != '\0')) &&
       (((q_spill->Func).typ == (p_spill->Func).typ &&
        (((q_spill->Func).ptr == (p_spill->Func).ptr &&
         ((q_spill->Func).flag == (p_spill->Func).flag)))))) {
      return q_spill->Index == p_spill->Index;
    }
  }
  return false;
}


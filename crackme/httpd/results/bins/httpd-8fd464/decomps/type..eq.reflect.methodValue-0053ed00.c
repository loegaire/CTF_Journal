
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.reflect.methodValue(reflect.methodValue * p,
   reflect.methodValue * q, bool r) */

bool type__eq_reflect_methodValue(reflect_methodValue *p,reflect_methodValue *q)

{
  bool bVar1;
  reflect_methodValue *p_spill;
  reflect_methodValue *q_spill;
  
  if (((((q_spill->makeFuncCtxt).fn == (p_spill->makeFuncCtxt).fn) &&
       ((q_spill->makeFuncCtxt).stack == (p_spill->makeFuncCtxt).stack)) &&
      ((q_spill->makeFuncCtxt).argLen == (p_spill->makeFuncCtxt).argLen)) &&
     (q_spill->method == p_spill->method)) {
    if (((q_spill->rcvr).typ == (p_spill->rcvr).typ) && ((q_spill->rcvr).ptr == (p_spill->rcvr).ptr)
       ) {
      bVar1 = (q_spill->rcvr).flag == (p_spill->rcvr).flag;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
  return SUB81(p_spill,0);
}


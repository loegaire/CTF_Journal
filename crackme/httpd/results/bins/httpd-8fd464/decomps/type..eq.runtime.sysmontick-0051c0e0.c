
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.runtime.sysmontick(runtime.sysmontick * p,
   runtime.sysmontick * q, bool r) */

bool type__eq_runtime_sysmontick(runtime_sysmontick *p,runtime_sysmontick *q)

{
  runtime_sysmontick *p_spill;
  runtime_sysmontick *q_spill;
  
  if (((q_spill->schedtick == p_spill->schedtick) && (q_spill->schedwhen == p_spill->schedwhen)) &&
     (q_spill->syscalltick == p_spill->syscalltick)) {
    return SUB81(p_spill->syscallwhen,0);
  }
  return SUB81(p_spill,0);
}


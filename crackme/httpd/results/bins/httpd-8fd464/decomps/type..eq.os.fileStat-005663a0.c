
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.os.fileStat(os.fileStat * p, os.fileStat * q, bool r) */

bool type__eq_os_fileStat(os_fileStat *p,os_fileStat *q)

{
  long in_FS_OFFSET;
  os_fileStat *p_spill;
  os_fileStat *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((((p_spill->name).len == (q_spill->name).len) && (q_spill->size == p_spill->size)) &&
      (q_spill->mode == p_spill->mode)) &&
     ((((q_spill->modTime).wall == (p_spill->modTime).wall &&
       ((q_spill->modTime).ext == (p_spill->modTime).ext)) &&
      (((q_spill->modTime).loc == (p_spill->modTime).loc && (runtime_memequal(), local_10 != '\0')))
      ))) {
    runtime_memequal();
    return (bool)local_10;
  }
  return false;
}



/* WARNING: Variable defined which should be unmapped: zones_spill */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.findZone([]time.zone zones, string name, int offset, bool
   isDST, int ~r4) */

int time_findZone(__time_zone zones,string name,int offset,bool isDST)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long in_FS_OFFSET;
  __time_zone zones_spill;
  string name_spill;
  int offset_spill;
  bool isDST_spill;
  char local_30;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int i@[???] */
  if (0 < zones_spill.len) {
    lVar3 = 0;
    while( true ) {
      bVar1 = (zones_spill.array)->isDST;
      lVar2 = (zones_spill.array)->offset;
      if (name_spill.len == ((zones_spill.array)->name).len) {
        runtime_memequal();
        cVar4 = local_30;
      }
      else {
        cVar4 = '\0';
      }
      if (((cVar4 != '\0') && (offset_spill == lVar2)) && (isDST_spill == bVar1)) {
        return zones_spill.len;
      }
      lVar3 = lVar3 + 1;
      if (zones_spill.len <= lVar3) break;
      zones_spill.array = zones_spill.array + 1;
    }
  }
  return zones_spill.len;
}


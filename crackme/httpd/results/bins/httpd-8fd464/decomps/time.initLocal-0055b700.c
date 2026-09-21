
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void time_initLocal(void)

{
  uint8 *puVar1;
  int unaff_RBX;
  int in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  string key;
  string name;
  string name_00;
  string name_01;
  multireturn_time_Location___error__conflict mVar2;
  __string sources;
  __string sources_00;
  __string sources_01;
  multireturn_string_bool__conflict3 mVar3;
  uint8 *local_58;
  long local_50;
  char local_48;
  runtime__type *local_40;
  long local_38;
  undefined *local_18;
  undefined8 uStack_10;
  
                    /* Unresolved local var: string tz@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  key.len = unaff_RBX;
  key.str = &DAT_0028780d;
  mVar3 = syscall_Getenv(key);
  name_00.len = mVar3.value.len;
  if (local_48 == '\0') {
                    /* Unresolved local var: time.Location * z@[???] */
    local_18 = &DAT_00287e0d;
    uStack_10 = 4;
    name_01.len = name_00.len;
    name_01.str = (uint8 *)&local_18;
    sources_01.len = in_RDI;
    sources_01.array = (string *)local_58;
    sources_01.cap = in_RSI;
    mVar2 = time_loadLocation(name_01,sources_01);
    if (local_38 == 0) {
      if (runtime_writeBarrier._0_4_ == 0) {
        time_localLoc.name.str = (uint8 *)local_40->size;
        FUN_0051a4ec(0x7a01c8,&local_40->ptrdata);
      }
      else {
        runtime_typedmemmove(local_40,mVar2.firstErr.tab,&time_localLoc);
      }
      time_localLoc.name.len = 5;
      if (runtime_writeBarrier._0_4_ == 0) {
        time_localLoc.name.str = &DAT_00288a75;
      }
      else {
        runtime_gcWriteBarrier();
      }
      return;
    }
  }
  else if (local_50 != 0) {
    if (*local_58 == 0x3a) {
      local_50 = local_50 + -1;
      local_58 = local_58 + (-local_50 >> 0x3f & 1);
    }
    if (local_50 != 0) {
      if (*local_58 == 0x2f) {
                    /* Unresolved local var: time.Location * z@[???] */
        local_18 = (undefined *)0x0;
        uStack_10 = 0;
        name_00.str = (uint8 *)&local_18;
        sources_00.len = in_RDI;
        sources_00.array = (string *)local_58;
        sources_00.cap = in_RSI;
        mVar2 = time_loadLocation(name_00,sources_00);
        if (local_38 == 0) {
          if (runtime_writeBarrier._0_4_ == 0) {
            time_localLoc.name.str = (uint8 *)local_40->size;
            FUN_0051a4ec(0x7a01c8,&local_40->ptrdata);
          }
          else {
            runtime_typedmemmove(local_40,mVar2.firstErr.tab,&time_localLoc);
          }
          if (((local_50 == 0xe) && (*(long *)local_58 == 0x636f6c2f6374652f)) &&
             ((*(int *)(local_58 + 8) == 0x69746c61 && (*(short *)(local_58 + 0xc) == 0x656d)))) {
            time_localLoc.name.len = 5;
            if (runtime_writeBarrier._0_4_ == 0) {
              time_localLoc.name.str = &DAT_00288a75;
              puVar1 = time_localLoc.name.str;
            }
            else {
              runtime_gcWriteBarrier();
              puVar1 = time_localLoc.name.str;
            }
          }
          else {
            puVar1 = local_58;
            time_localLoc.name.len = local_50;
            if (runtime_writeBarrier._0_4_ != 0) {
              runtime_gcWriteBarrierDX();
              puVar1 = time_localLoc.name.str;
            }
          }
          time_localLoc.name.str = puVar1;
          return;
        }
      }
      else if ((local_50 != 0) &&
              (((local_50 != 3 || (*(short *)local_58 != 0x5455)) || (local_58[2] != 0x43)))) {
        name.len = time_zoneSources.len;
        name.str = (uint8 *)time_zoneSources.array;
        sources.len = in_RDI;
        sources.array = (string *)local_58;
        sources.cap = time_zoneSources.cap;
                    /* Unresolved local var: time.Location * z@[???] */
        mVar2 = time_loadLocation(name,sources);
        if (local_38 == 0) {
          if (runtime_writeBarrier._0_4_ == 0) {
            time_localLoc.name.str = (uint8 *)local_40->size;
            FUN_0051a4ec(0x7a01c8,&local_40->ptrdata);
          }
          else {
            runtime_typedmemmove(local_40,mVar2.firstErr.tab,&time_localLoc);
          }
          return;
        }
      }
    }
  }
  time_localLoc.name.len = 3;
  if (runtime_writeBarrier._0_4_ == 0) {
    time_localLoc.name.str = &DAT_002879cf;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}


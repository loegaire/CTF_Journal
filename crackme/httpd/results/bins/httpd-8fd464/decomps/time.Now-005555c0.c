
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.Now(time.Time ~r0) */

time_Time time_Now(void)

{
  long in_FS_OFFSET;
  time_Time tVar1;
  time_Time tVar2;
  undefined8 local_20;
  undefined4 local_18;
  
                    /* Unresolved local var: int64 sec@[???]
                       Unresolved local var: int32 nsec@[???]
                       Unresolved local var: int64 mono@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  time_now();
  tVar1.ext = local_20 + 0x9fe07780U >> 0x21;
  if (tVar1.ext != 0) {
    tVar1.wall = local_20 + 0xe7791f700;
    tVar1.loc = (time_Location *)0xe7791f700;
    return tVar1;
  }
  tVar2.loc = (time_Location *)(long)local_18;
  tVar2.ext = 0;
  tVar2.wall = (uint64)time_Local;
  return tVar2;
}



/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*fileStat).ModTime(os.fileStat * fs, time.Time ~r0) */

time_Time os___fileStat__ModTime(os_fileStat *fs)

{
  undefined8 unaff_RBX;
  time_Time tVar1;
  os_fileStat *fs_spill;
  
  tVar1.ext = unaff_RBX;
  tVar1.wall = (uint64)(fs_spill->modTime).loc;
  tVar1.loc = (time_Location *)(fs_spill->modTime).wall;
  return tVar1;
}


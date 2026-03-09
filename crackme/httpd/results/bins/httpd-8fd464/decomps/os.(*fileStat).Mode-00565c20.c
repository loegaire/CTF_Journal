
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*fileStat).Mode(os.fileStat * fs, io/fs.FileMode ~r0) */

io_fs_FileMode os___fileStat__Mode(os_fileStat *fs)

{
  os_fileStat *fs_spill;
  
  return fs_spill->mode;
}


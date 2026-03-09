
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setg_gcc(void)

{
  undefined8 in_RDI;
  long in_FS_OFFSET;
  
  *(undefined8 *)(in_FS_OFFSET + -8) = in_RDI;
  return;
}


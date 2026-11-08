
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fatalf(char *format,...)

{
  char in_AL;
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  va_list ap;
  
  if (in_AL != '\0') {
    local_b8 = in_XMM0_Qa;
    local_a8 = in_XMM1_Qa;
    local_98 = in_XMM2_Qa;
    local_88 = in_XMM3_Qa;
    local_78 = in_XMM4_Qa;
    local_68 = in_XMM5_Qa;
    local_58 = in_XMM6_Qa;
    local_48 = in_XMM7_Qa;
  }
  local_e0 = in_RSI;
  local_d8 = in_RDX;
  local_d0 = in_RCX;
  local_c8 = in_R8;
  local_c0 = in_R9;
  fwrite("runtime/cgo: ",0xd,1,___stderrp);
  ap[0].gp_offset = 8;
  ap[0].fp_offset = 0x30;
  ap[0].overflow_arg_area = &stack0x00000008;
  ap[0].reg_save_area = local_e8;
  vfprintf(___stderrp,format,ap);
  fputc(10,___stderrp);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Removing unreachable block (ram,0x00629adc) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _expand_key_192b(void)

{
  uint *unaff_RBX;
  uint in_XMM0_Da;
  uint in_XMM0_Db;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  uint in_XMM1_Db;
  uint in_XMM4_Da;
  
  *unaff_RBX = in_XMM0_Da ^ in_XMM1_Db;
  unaff_RBX[1] = in_XMM0_Db ^ in_XMM4_Da ^ in_XMM0_Da ^ in_XMM1_Db;
  unaff_RBX[2] = in_XMM0_Dc ^ in_XMM0_Db ^ in_XMM0_Da ^ in_XMM4_Da ^ in_XMM1_Db;
  unaff_RBX[3] = in_XMM0_Dd ^ in_XMM0_Da ^ in_XMM0_Dc ^ in_XMM0_Db ^ in_XMM1_Db;
  return;
}


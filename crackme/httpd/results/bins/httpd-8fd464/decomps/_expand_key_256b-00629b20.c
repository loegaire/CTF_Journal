
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _expand_key_256b(void)

{
  uint *unaff_RBX;
  uint in_XMM1_Dc;
  uint in_XMM2_Da;
  uint in_XMM2_Db;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  uint in_XMM4_Da;
  
  *unaff_RBX = in_XMM2_Da ^ in_XMM1_Dc;
  unaff_RBX[1] = in_XMM2_Db ^ in_XMM4_Da ^ in_XMM2_Da ^ in_XMM1_Dc;
  unaff_RBX[2] = in_XMM2_Dc ^ in_XMM2_Db ^ in_XMM2_Da ^ in_XMM4_Da ^ in_XMM1_Dc;
  unaff_RBX[3] = in_XMM2_Dd ^ in_XMM2_Da ^ in_XMM2_Dc ^ in_XMM2_Db ^ in_XMM1_Dc;
  return;
}


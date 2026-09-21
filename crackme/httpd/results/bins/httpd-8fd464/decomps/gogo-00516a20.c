
void gogo(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_RBX;
  long in_FS_OFFSET;
  
  *(undefined8 *)(in_FS_OFFSET + -8) = param_3;
  uVar1 = unaff_RBX[3];
  *unaff_RBX = 0;
  unaff_RBX[4] = 0;
  unaff_RBX[3] = 0;
  unaff_RBX[6] = 0;
                    /* WARNING: Could not recover jumptable at 0x00516a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)unaff_RBX[1])(param_1,param_2,uVar1);
  return;
}


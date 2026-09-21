
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_exitThread(void)

{
  undefined4 *in_stack_00000008;
  
  *in_stack_00000008 = 0;
  syscall();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


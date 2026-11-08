
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_abort(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


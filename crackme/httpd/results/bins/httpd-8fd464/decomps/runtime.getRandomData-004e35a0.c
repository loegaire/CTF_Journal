
/* WARNING: Unknown calling convention */

void runtime_getRandomData(__uint8 r)

{
  ulong uVar1;
  int in_RDI;
  __uint8 r_00;
  __uint8 r_spill;
  undefined8 local_28;
  undefined4 local_20;
  
                    /* Unresolved local var: int32 fd@[???] */
  r_00.len = r.len;
  if (runtime_urandom_dev.len == 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  runtime_open();
  if (r_spill.len != 0) {
    runtime_read();
    r_00.array = (long)local_20;
    uVar1 = local_28 & 0xffffffff;
    runtime_closefd();
    r_00.cap = uVar1;
    runtime_extendRandom(r_00,in_RDI);
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}


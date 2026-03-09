
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.nanotime1(int64 ~r0) */

int64 runtime_nanotime1(void)

{
  int32 in_EAX;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  runtime_vdsoClockGettime(in_EAX);
  if ((runtime_zeroBintime.sec == local_18) && (runtime_zeroBintime.frac == local_10)) {
    runtime_fallback_nanotime();
    return CONCAT44(uStack_1c,4);
  }
  return local_18 * 1000000000 + ((local_10 >> 0x20) * 1000000000 >> 0x20);
}


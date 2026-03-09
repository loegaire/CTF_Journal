
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_bad_optional_access() */

void std::__throw_bad_optional_access(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &PTR__bad_optional_access_0011db90;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&bad_optional_access::typeinfo,bad_optional_access::~bad_optional_access);
}


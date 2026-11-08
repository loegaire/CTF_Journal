
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_format_error(char const*) */

void std::__throw_format_error(char *param_1)

{
  runtime_error *this;
  
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00107ca6 to 00107caa has its CatchHandler @ 00107ccb */
  std::runtime_error::runtime_error(this,param_1);
  *(undefined ***)this = &PTR__format_error_0011dd78;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&format_error::typeinfo,format_error::~format_error);
}


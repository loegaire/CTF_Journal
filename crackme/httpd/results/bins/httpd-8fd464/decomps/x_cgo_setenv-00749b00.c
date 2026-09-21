
void x_cgo_setenv(char **arg)

{
  setenv(*arg,arg[1],1);
  return;
}


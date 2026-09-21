
void x_cgo_unsetenv(char **arg)

{
  unsetenv(*arg);
  return;
}


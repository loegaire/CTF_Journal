
void x_cgo_init(G *g,_func_void_void_ptr *setg)

{
  pthread_attr_t *__attr;
  int *piVar1;
  char *pcVar2;
  size_t local_28;
  pthread_attr_t *local_20;
  
  setg_gcc = setg;
                    /* Unresolved local var: pthread_attr_t * attr@[???]
                       Unresolved local var: size_t size@[???] */
  __attr = malloc(8);
  local_20 = __attr;
  if (__attr == (pthread_attr_t *)0x0) {
    piVar1 = (int *)__error();
    pcVar2 = strerror(*piVar1);
    fatalf("malloc failed: %s",pcVar2);
  }
  pthread_attr_init(__attr);
  pthread_attr_getstacksize(__attr,&local_28);
  g->stacklo = (uintptr)(&stack0x00000fe0 + -local_28);
  pthread_attr_destroy(__attr);
  free(local_20);
  return;
}



void _cgo_c877afab0d80_Cfunc__Cmalloc(void *v)

{
  size_t __size;
  void *pvVar1;
  
                    /* Unresolved local var: anon_struct_16_2_f9f072d8 * a@[???]
                       Unresolved local var: void * ret@[???] */
  __size = *(size_t *)v;
  pvVar1 = malloc(__size);
  if (pvVar1 == (void *)0x0) {
    if (__size == 0) {
      pvVar1 = malloc(1);
    }
    else {
      pvVar1 = (void *)0x0;
    }
  }
  *(void **)((long)v + 8) = pvVar1;
  return;
}


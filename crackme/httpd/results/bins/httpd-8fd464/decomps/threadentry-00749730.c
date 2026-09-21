
void * threadentry(void *v)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* Unresolved local var: ThreadStart ts@[???] */
  uVar1 = *(undefined8 *)v;
  uVar2 = *(undefined8 *)((long)v + 0x10);
  free(v);
  crosscall_amd64(uVar2,setg_gcc,uVar1);
  return (void *)0x0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mime_initMimeUnix(void)

{
  int iVar1;
  long lVar2;
  string *psVar3;
  long in_FS_OFFSET;
  long local_30;
  
  while (iVar1 = mime_mimeGlobs.len,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: string filename@[???] */
  if (0 < mime_mimeGlobs.len) {
    lVar2 = 0;
    psVar3 = mime_mimeGlobs.array;
    while( true ) {
      mime_loadMimeGlobsFile(*psVar3);
      if (local_30 == 0) {
        return;
      }
      lVar2 = lVar2 + 1;
      if (iVar1 <= lVar2) break;
      psVar3 = psVar3 + 1;
    }
  }
                    /* Unresolved local var: string filename@[???] */
  iVar1 = mime_typeFiles.len;
  if (0 < mime_typeFiles.len) {
    lVar2 = 0;
    psVar3 = mime_typeFiles.array;
    while( true ) {
      mime_loadMimeFile(*psVar3);
      lVar2 = lVar2 + 1;
      if (iVar1 <= lVar2) break;
      psVar3 = psVar3 + 1;
    }
  }
  return;
}


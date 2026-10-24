// ===== _init @ 00400744

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = 0;
  if (PTR___gmon_start___004110d4 != (undefined *)0x0) {
    iVar1 = (*(code *)PTR___gmon_start___004110d4)();
  }
  return iVar1;
}


// ===== main @ 00400780

undefined4 main(undefined4 param_1,int param_2)

{
  serial_init(*(undefined4 *)(param_2 + 4));
  serial_write("F37\r\n",5);
  close(fd);
  return 0;
}


// ===== __start @ 004007c0

void processEntry __start(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 auStack_20 [16];
  code *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = __libc_csu_fini;
  local_c = param_1;
  __libc_start_main(main,param_2,&param_3,__libc_csu_init);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// ===== deregister_tm_clones @ 00400820

/* WARNING: Removing unreachable block (ram,0x00400838) */
/* WARNING: Removing unreachable block (ram,0x00400844) */

void deregister_tm_clones(void)

{
  return;
}


// ===== register_tm_clones @ 00400854

/* WARNING: Removing unreachable block (ram,0x00400884) */
/* WARNING: Removing unreachable block (ram,0x00400874) */
/* WARNING: Removing unreachable block (ram,0x00400890) */

void register_tm_clones(void)

{
  return;
}


// ===== __do_global_dtors_aux @ 004008a0

void __do_global_dtors_aux(void)

{
  if (completed_6546 == '\0') {
    deregister_tm_clones();
    completed_6546 = '\x01';
  }
  return;
}


// ===== serial_init @ 004008e0

int serial_init(char *param_1)

{
  int __fd;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  __fd = open(param_1,0x882);
  fd = __fd;
  if (__fd == -1) {
    printf("Open %d device fail\n",0x400e28);
  }
  else {
    tcgetattr(__fd,(termios *)&local_40);
    cfsetispeed((termios *)&local_40,0x1002);
    cfsetospeed((termios *)&local_40,0x1002);
    local_40 = local_40 & 0xfffffa3f;
    local_34 = local_34 & 0xfffffff4;
    local_3c = local_3c & 0xfffffffe;
    local_38 = local_38 & 0xfffffe8f | 0x8b0;
    tcflush(__fd,0);
    tcsetattr(__fd,0x540e,(termios *)&local_40);
  }
  return __fd;
}


// ===== serial_write @ 004009bc

undefined4 serial_write(void *param_1,size_t param_2)

{
  int __fd;
  ssize_t sVar1;
  undefined4 uVar2;
  
  __fd = fd;
  tcflush(fd,2);
  sVar1 = write(__fd,param_1,param_2);
  uVar2 = 0;
  if (sVar1 < 0) {
    puts("Write Serial fail");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== serial_read @ 00400a34

undefined4 serial_read(void *param_1,size_t param_2)

{
  ssize_t sVar1;
  undefined4 uVar2;
  
  sVar1 = read(fd,param_1,param_2);
  uVar2 = 0;
  if (sVar1 < 0) {
    puts("Read serial fail");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== available_len @ 00400a80

undefined4 available_len(void)

{
  undefined4 local_10 [3];
  
  local_10[0] = 0;
  ioctl(fd,0x467f,local_10);
  return local_10[0];
}


// ===== serial_ops @ 00400ab0

/* WARNING: Removing unreachable block (ram,0x00400b44) */
/* WARNING: Removing unreachable block (ram,0x00400bbc) */

undefined4 serial_ops(void)

{
  byte bVar1;
  int iVar2;
  size_t __n;
  ssize_t sVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte local_2b8 [512];
  fd_set local_b8;
  timeval local_38;
  int local_30;
  
  local_38.tv_sec = 5;
  local_38.tv_usec = 0;
  printf("Input > ");
  fflush(stdout);
  local_30 = 0x410000;
  iVar7 = -1;
  while( true ) {
    iVar5 = fd;
    memset(&local_b8,0,0x80);
    local_b8.fds_bits[0] = 1;
    iVar4 = iVar5;
    if (iVar5 <= iVar7) {
      iVar4 = iVar7;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    local_b8.fds_bits[iVar5 / 0x20] = 1 << (iVar5 % 0x20 & 0x1fU) | local_b8.fds_bits[iVar5 / 0x20];
    iVar2 = select(iVar4 + 1,&local_b8,(fd_set *)0x0,(fd_set *)0x0,&local_38);
    iVar5 = fd;
    if (iVar2 < 0) break;
    iVar7 = iVar4;
    if (iVar2 != 0) {
      if ((1 << (fd % 0x20 & 0x1fU) & local_b8.fds_bits[fd / 0x20]) == 0) {
        if ((local_b8.fds_bits[0] & 1U) != 0) {
          memset(local_2b8,0,0x200);
          fgets((char *)local_2b8,0x200,*(FILE **)(local_30 + 0x10e0));
          __n = strlen((char *)local_2b8);
          printf("Send to %d-> (%s)",__n,(char *)local_2b8);
          printf("\nInput > ");
          fflush(stdout);
          iVar5 = fd;
          tcflush(fd,2);
          sVar3 = write(iVar5,local_2b8,__n);
          if (sVar3 < 0) {
            puts("Write Serial fail");
            return 0xffffffff;
          }
        }
      }
      else {
        memset(local_2b8,0,0x200);
        iVar4 = 0;
        while( true ) {
          sVar3 = read(iVar5,local_2b8 + iVar4,1);
          pbVar6 = local_2b8;
          if ((sVar3 < 1) || (iVar4 + 1 == 0x1ff)) break;
          iVar5 = fd;
          iVar4 = iVar4 + 1;
        }
        local_2b8[iVar4 + 1] = 0;
        do {
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          printf(" %2x ",(uint)bVar1);
        } while (local_2b8 + iVar4 + 1 != pbVar6);
        printf("\nInput > ");
        fflush(stdout);
      }
    }
  }
  perror("Select fail\n");
  return 0xffffffff;
}


// ===== serial_close @ 00400d44

void serial_close(void)

{
  close(fd);
  return;
}


// ===== __libc_csu_init @ 00400d50

void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  _init(param_1);
  iVar3 = (int)PTR___do_global_dtors_aux_fini_array_entry_004110d0 -
          (int)PTR___frame_dummy_init_array_entry_004110cc >> 2;
  iVar2 = 0;
  puVar1 = (undefined4 *)PTR___frame_dummy_init_array_entry_004110cc;
  if (iVar3 != 0) {
    do {
      iVar2 = iVar2 + 1;
      (*(code *)*puVar1)(param_1,param_2,param_3);
      puVar1 = puVar1 + 1;
    } while (iVar3 != iVar2);
  }
  return;
}


// ===== __libc_csu_fini @ 00400df4

void __libc_csu_fini(void)

{
  return;
}


// ===== _fini @ 00400e00

void _fini(void)

{
  return;
}


// ===== _PROCEDURE_LINKAGE_TABLE_ @ 00400ee0

void _PROCEDURE_LINKAGE_TABLE_(void)

{
  (*(code *)__DT_MIPS_PLTGOT)();
  (*(code *)PTR_read_00411040)();
  return;
}



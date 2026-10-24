// ===== _init @ 00400a08

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = 0;
  if (PTR___gmon_start___00412a64 != (undefined *)0x0) {
    iVar1 = (*(code *)PTR___gmon_start___00412a64)();
  }
  return iVar1;
}


// ===== main @ 00400a50

undefined4 main(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *__s1;
  int iVar3;
  int iVar4;
  char *local_48;
  int local_44;
  char *local_40;
  undefined4 local_3c;
  int local_38;
  undefined1 auStack_34 [4];
  int local_30;
  
  local_48 = "/dev/ttyS4";
  local_40 = (char *)0x0;
  local_3c = 0;
  local_38 = 0;
  local_44 = 0x1c200;
  if (1 < param_1) {
    iVar4 = 0;
    iVar3 = 1;
    local_30 = 0x400000;
    do {
      param_2 = param_2 + 1;
      __s1 = (char *)*param_2;
      if (*__s1 == '-') {
        iVar2 = strcmp(__s1,"-verbose");
        if (iVar2 != 0) {
          printf("Unknown option: %s\n",__s1);
          if (local_38 != 0) {
            puts("Options:");
            printf("\tfile name NA:%s\n",local_40);
            printf("\tserial port:%s\n",local_48);
            printf("\tbaud rate:%d\n",local_44);
            if (local_38 != 0) {
              puts("\tin verbose mode");
            }
          }
          puts(
              "Syntax:  stm32isp [Options] <file> <comport> <baudrate>\n\nExample: stm32isp test.hex /dev/ttyS0 115200\n\nOptions: -verbose          for more information"
              );
                    /* WARNING: Subroutine does not return */
          exit(-1);
        }
        local_38 = 1;
      }
      else if (iVar4 == 1) {
        printf("portName: %s\n",__s1);
        iVar4 = 2;
        local_48 = __s1;
      }
      else if (iVar4 == 2) {
        __isoc99_sscanf(__s1,&DAT_00402430,&local_44);
        printf((char *)(local_30 + 0x2434),local_44);
        iVar4 = 3;
      }
      else if (iVar4 == 0) {
        local_40 = __s1;
        printf("fileName NA: %s\n",__s1);
        iVar4 = 1;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (param_1 != iVar3);
  }
  if (local_38 != 0) {
    puts("Options:");
    printf("\tfile name NA:%s\n",local_40);
    printf("\tserial port:%s\n",local_48);
    printf("\tbaud rate:%d\n",local_44);
    if (local_38 != 0) {
      puts("\tin verbose mode");
    }
  }
  sleep(1);
  iVar3 = stm32Init(local_48,local_44);
  if (iVar3 == 6) {
    puts("Update :NA ");
    iVar3 = readHexFile(local_40,auStack_34);
    if (iVar3 == 0) {
      printf("Can not open file %s.\n",local_40);
      uVar1 = 0xffffffff;
    }
    else {
      fillPacket(auStack_34);
      stm32Write(auStack_34);
      stm32Close();
      mmapDelete(auStack_34);
      sync();
      puts("STM32iap finished NA.");
      uVar1 = 0;
    }
  }
  else if (iVar3 == 7) {
    puts("Update :HD ");
    uVar1 = 0;
  }
  else {
    puts("IAPCommand: Can not connect to board.");
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== __start @ 00400d60

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


// ===== deregister_tm_clones @ 00400dc0

/* WARNING: Removing unreachable block (ram,0x00400dd8) */
/* WARNING: Removing unreachable block (ram,0x00400de4) */

void deregister_tm_clones(void)

{
  return;
}


// ===== register_tm_clones @ 00400df4

/* WARNING: Removing unreachable block (ram,0x00400e24) */
/* WARNING: Removing unreachable block (ram,0x00400e14) */
/* WARNING: Removing unreachable block (ram,0x00400e30) */

void register_tm_clones(void)

{
  return;
}


// ===== __do_global_dtors_aux @ 00400e40

void __do_global_dtors_aux(void)

{
  if (completed_6546 == '\0') {
    deregister_tm_clones();
    completed_6546 = '\x01';
  }
  return;
}


// ===== fillPacket @ 00400e80

undefined4 fillPacket(int *param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar6;
  byte *pbVar5;
  undefined4 *puVar7;
  char cVar8;
  
  puVar7 = (undefined4 *)*param_1;
  cVar8 = '\0';
  do {
    if (puVar7 == (undefined4 *)0x0) {
      return 0;
    }
    *(char *)(puVar7 + 0x102) = cVar8;
    *(short *)(puVar7 + 0x103) = (short)puVar7[1] - (short)*puVar7;
    uVar3 = 0;
    pbVar6 = (byte *)(puVar7 + 2);
    do {
      while( true ) {
        pbVar5 = pbVar6 + 1;
        uVar1 = (ushort)*pbVar6 << 8 ^ (ushort)uVar3;
        pbVar6 = pbVar5;
        if (-1 < (short)uVar1) break;
        uVar3 = (uint)uVar1 << 1 ^ 0x1021;
        uVar4 = (uVar3 & 0xffff) << 1;
        if (-1 < (short)uVar3) goto LAB_00400ec4;
LAB_00400f60:
        uVar3 = ((uVar4 ^ 0x1021) & 0xffff) << 1;
        if (-1 < (short)(uVar4 ^ 0x1021)) goto LAB_00400ed4;
LAB_00400f74:
        uVar4 = ((uVar3 ^ 0x1021) & 0xffff) << 1;
        if (-1 < (short)(uVar3 ^ 0x1021)) goto LAB_00400ee4;
LAB_00400f88:
        uVar3 = ((uVar4 ^ 0x1021) & 0xffff) << 1;
        if (-1 < (short)(uVar4 ^ 0x1021)) goto LAB_00400ef4;
LAB_00400f9c:
        uVar4 = ((uVar3 ^ 0x1021) & 0xffff) << 1;
        if (-1 < (short)(uVar3 ^ 0x1021)) goto LAB_00400f04;
LAB_00400fb0:
        uVar3 = ((uVar4 ^ 0x1021) & 0xffff) << 1;
        if (-1 < (short)(uVar4 ^ 0x1021)) goto LAB_00400f14;
LAB_00400fc4:
        uVar4 = ((uVar3 ^ 0x1021) & 0xffff) << 1;
        if (-1 < (short)(uVar3 ^ 0x1021)) goto LAB_00400f24;
LAB_00400fd8:
        uVar3 = (uVar4 ^ 0x1021) & 0xffff;
        uVar2 = (undefined2)(uVar4 ^ 0x1021);
        if ((byte *)(puVar7 + 0x102) == pbVar5) goto LAB_00400fe4;
      }
      uVar3 = (int)(short)uVar1 & 0x7fff;
      uVar4 = uVar3 << 2;
      if ((short)(uVar3 << 1) < 0) goto LAB_00400f60;
LAB_00400ec4:
      uVar3 = (uVar4 & 0xffff) << 1;
      if ((short)uVar4 < 0) goto LAB_00400f74;
LAB_00400ed4:
      uVar4 = (uVar3 & 0xffff) << 1;
      if ((short)uVar3 < 0) goto LAB_00400f88;
LAB_00400ee4:
      uVar3 = (uVar4 & 0xffff) << 1;
      if ((short)uVar4 < 0) goto LAB_00400f9c;
LAB_00400ef4:
      uVar4 = (uVar3 & 0xffff) << 1;
      if ((short)uVar3 < 0) goto LAB_00400fb0;
LAB_00400f04:
      uVar3 = (uVar4 & 0xffff) << 1;
      if ((short)uVar4 < 0) goto LAB_00400fc4;
LAB_00400f14:
      uVar4 = (uVar3 & 0xffff) << 1;
      if ((short)uVar3 < 0) goto LAB_00400fd8;
LAB_00400f24:
      uVar3 = uVar4 & 0xffff;
      uVar2 = (undefined2)uVar4;
    } while ((byte *)(puVar7 + 0x102) != pbVar5);
LAB_00400fe4:
    *(undefined2 *)((int)puVar7 + 0x40a) = uVar2;
    puVar7 = (undefined4 *)puVar7[0x104];
    cVar8 = cVar8 + '\x01';
  } while( true );
}


// ===== readHexFile @ 00400ffc

undefined4 readHexFile(char *param_1,undefined4 param_2)

{
  uint uVar1;
  FILE *__stream;
  uint uVar2;
  undefined1 *__ptr;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint local_40 [2];
  int local_38;
  undefined *local_34;
  int local_30;
  
  mmapInit(param_2);
  __stream = fopen(param_1,"r");
  local_38 = 0;
  if (__stream == (FILE *)0x0) {
    return 0;
  }
  local_34 = &DAT_00402518;
  local_30 = 0x400000;
  while( true ) {
    uVar2 = fgetc(__stream);
    if ((uVar2 & 0xff) != 0x3a) break;
    __isoc99_fscanf(__stream,&DAT_00402510,local_40);
    uVar2 = local_40[0];
    __ptr = malloc(local_40[0]);
    __isoc99_fscanf(__stream,local_34,local_40);
    uVar1 = local_40[0];
    __isoc99_fscanf(__stream,&DAT_00402510,local_40);
    uVar5 = local_40[0] & 0xff;
    uVar6 = uVar2 & 0xff;
    uVar2 = uVar5 + uVar2 + uVar1 + ((int)uVar1 >> 8) & 0xff;
    if (uVar6 != 0) {
      puVar3 = __ptr;
      do {
        __isoc99_fscanf(__stream,&DAT_00402510,local_40);
        puVar4 = puVar3 + 1;
        *puVar3 = (undefined1)local_40[0];
        uVar2 = (local_40[0] & 0xff) + uVar2 & 0xff;
        puVar3 = puVar4;
      } while (__ptr + uVar6 != puVar4);
    }
    __isoc99_fscanf(__stream,local_30 + 0x2520,local_40);
    if ((uVar2 + local_40[0] & 0xff) != 0) break;
    if (uVar5 == 4) {
      local_38 = (uint)CONCAT11(*__ptr,__ptr[1]) << 0x10;
    }
    else if (uVar5 == 0) {
      mmapPut(param_2,(uVar1 & 0xffff) + local_38,uVar6,__ptr);
    }
    free(__ptr);
  }
  fclose(__stream);
  return 1;
}


// ===== crc16 @ 0040120c

void crc16(byte *param_1,int param_2)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  byte *pbVar5;
  
  uVar2 = 0;
  pbVar1 = param_1;
  while (pbVar1 != param_1 + param_2) {
    pbVar5 = pbVar1 + 1;
    uVar2 = (ushort)*pbVar1 << 8 ^ uVar2;
    if ((short)uVar2 < 0) {
      uVar2 = uVar2 << 1 ^ 0x1021;
    }
    else {
      uVar2 = uVar2 << 1;
    }
    uVar3 = uVar2 << 1;
    if ((short)uVar2 < 0) {
      uVar3 = uVar3 ^ 0x1021;
    }
    uVar2 = uVar3 << 1;
    if ((short)uVar3 < 0) {
      uVar2 = uVar2 ^ 0x1021;
    }
    uVar3 = uVar2 << 1;
    if ((short)uVar2 < 0) {
      uVar3 = uVar3 ^ 0x1021;
    }
    uVar2 = uVar3 << 1;
    if ((short)uVar3 < 0) {
      uVar2 = uVar2 ^ 0x1021;
    }
    uVar3 = uVar2 << 1;
    if ((short)uVar2 < 0) {
      uVar3 = uVar3 ^ 0x1021;
    }
    uVar4 = uVar3 << 1;
    if ((short)uVar3 < 0) {
      uVar4 = uVar4 ^ 0x1021;
    }
    uVar2 = uVar4 << 1;
    pbVar1 = pbVar5;
    if ((short)uVar4 < 0) {
      uVar2 = uVar2 ^ 0x1021;
    }
  }
  return;
}


// ===== mmapInit @ 004012f0

void mmapInit(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== mmapPut @ 004012f8

void mmapPut(int *param_1,uint param_2,uint param_3,void *param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  void *__dest;
  uint *puVar4;
  
  puVar4 = (uint *)*param_1;
  while( true ) {
    while( true ) {
      while (puVar4 == (uint *)0x0) {
        puVar2 = malloc(0x414);
        puVar2[0x104] = 0;
        *puVar2 = param_2;
        puVar2[1] = param_2;
        memset(puVar2 + 2,0xff,0x400);
        puVar4 = (uint *)*param_1;
        puVar3 = puVar4;
        if (puVar4 == (uint *)0x0) {
          *param_1 = (int)puVar2;
          puVar4 = puVar2;
        }
        else {
          while ((uint *)puVar3[0x104] != (uint *)0x0) {
            puVar3 = (uint *)puVar3[0x104];
          }
          puVar3[0x104] = (uint)puVar2;
        }
      }
      uVar1 = *puVar4;
      if ((uVar1 <= param_2) && (param_2 < uVar1 + 0x400)) break;
      puVar4 = (uint *)puVar4[0x104];
    }
    __dest = (void *)((int)puVar4 + (param_2 - uVar1) + 8);
    if (param_2 + param_3 <= uVar1 + 0x400) break;
    uVar1 = (0x400 - param_2) + uVar1;
    memcpy(__dest,param_4,uVar1);
    param_2 = param_2 + uVar1;
    puVar4[1] = param_2;
    if (param_3 <= uVar1) {
      return;
    }
    printf("recusive, len=%d, nlen=%d\n",param_3,uVar1);
    param_3 = param_3 - uVar1;
    param_4 = (void *)((int)param_4 + uVar1);
    puVar4 = (uint *)*param_1;
  }
  memcpy(__dest,param_4,param_3);
  puVar4[1] = param_2 + param_3;
  return;
}


// ===== mmapDelete @ 00401464

void mmapDelete(int *param_1)

{
  void *__ptr;
  void *pvVar1;
  
  __ptr = (void *)*param_1;
  if (__ptr == (void *)0x0) {
    return;
  }
  do {
    pvVar1 = *(void **)((int)__ptr + 0x410);
    free(__ptr);
    __ptr = pvVar1;
  } while (pvVar1 != (void *)0x0);
  return;
}


// ===== mmapDump @ 004014a4

void mmapDump(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = (uint *)*param_1;
  do {
    if (puVar3 == (uint *)0x0) {
      return;
    }
    puVar4 = puVar3 + 2;
    uVar2 = 0;
    printf("Address:%08X(%08X)\n  ",*puVar3,puVar3[1]);
    while (uVar2 < puVar3[1] - *puVar3) {
      while( true ) {
        uVar2 = uVar2 + 1;
        uVar1 = *puVar4;
        puVar4 = (uint *)((int)puVar4 + 1);
        printf("%02X",(uint)(byte)uVar1);
        if ((uVar2 & 0xf) != 0) break;
        printf("\n  ");
        if (puVar3[1] - *puVar3 <= uVar2) goto LAB_00401554;
      }
    }
LAB_00401554:
    putchar(10);
    puVar3 = (uint *)puVar3[0x104];
  } while( true );
}


// ===== serialOpen @ 00401590

int serialOpen(char *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int __fd;
  uint uVar1;
  speed_t __speed;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  cc_t local_3b;
  cc_t local_3a;
  
  __fd = open(param_1,0x802);
  if (__fd < 1) {
    return __fd;
  }
  fcntl(__fd,4,0);
  tcgetattr(__fd,(termios *)&local_50);
  cfmakeraw((termios *)&local_50);
  local_3b = '\0';
  local_3a = '2';
  if (param_2 == 0x2580) {
    __speed = 0xd;
  }
  else if (param_2 < 0x2581) {
    if (param_2 == 0x708) {
      __speed = 10;
    }
    else {
      __speed = 0xc;
      if ((param_2 != 0x12c0) && (__speed = 9, param_2 != 0x4b0)) {
        __speed = 0xe;
      }
    }
  }
  else if (param_2 == 0xe100) {
    __speed = 0x1001;
  }
  else {
    __speed = 0x1002;
    if ((param_2 != 0x1c200) && (__speed = 0xf, param_2 != 0x9600)) {
      __speed = 0xe;
    }
  }
  cfsetispeed((termios *)&local_50,__speed);
  cfsetospeed((termios *)&local_50,__speed);
  local_48 = local_48 & 0x7fffffcf;
  local_50 = local_50 & 0xfffffaff;
  uVar1 = local_48 | 0x880;
  local_4c = local_4c & 0xfffffffe;
  if (param_3 == 6) {
    uVar1 = local_48 | 0x890;
  }
  else if (param_3 == 7) {
    uVar1 = local_48 | 0x8a0;
  }
  else if (param_3 != 5) {
    uVar1 = local_48 | 0x8b0;
  }
  if (param_4 == 0x4f) {
LAB_00401764:
    uVar1 = uVar1 & 0x200;
    goto joined_r0x00401768;
  }
  if (param_4 < 0x50) {
    if (param_4 == 0x45) goto LAB_00401794;
  }
  else {
    if (param_4 == 0x65) {
LAB_00401794:
      uVar1 = uVar1 & 0xfffffdff | 0x100;
      goto joined_r0x00401768;
    }
    if (param_4 == 0x6f) goto LAB_00401764;
  }
  uVar1 = uVar1 & 0xfffffeff;
joined_r0x00401768:
  if (param_5 == 2) {
    local_48 = uVar1 & 0x40;
  }
  else {
    local_48 = uVar1 & 0xffffffbf;
  }
  local_44 = local_44 & 0xffffffe4;
  tcsetattr(__fd,0x540e,(termios *)&local_50);
  return __fd;
}


// ===== serialFlush @ 004017ac

void serialFlush(undefined4 param_1)

{
  (*(code *)PTR_tcflush_004129bc)(param_1,2);
  return;
}


// ===== serialClose @ 004017b4

undefined4 serialClose(int param_1)

{
  tcflush(param_1,2);
  close(param_1);
  return 0;
}


// ===== serialWrite @ 004017e8

size_t serialWrite(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  size_t __n;
  
  __n = param_3;
  while( true ) {
    sVar1 = write(param_1,param_2,__n);
    if (sVar1 == 0xffffffff) {
      return 0xffffffff;
    }
    if (__n == sVar1) break;
    if (0 < (int)sVar1) {
      param_2 = (void *)((int)param_2 + sVar1);
      printf("many times.");
      __n = __n - sVar1;
    }
  }
  return param_3;
}


// ===== serialRead @ 004018a8

/* WARNING: Removing unreachable block (ram,0x004018b0) */
/* WARNING: Type propagation algorithm not settling */

undefined4 serialRead(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  ssize_t sVar3;
  uint uVar4;
  int iVar5;
  __fd_mask *p_Var6;
  fd_set fStack_b0;
  timeval local_30;
  
  local_30.tv_sec = 3;
  local_30.tv_usec = 0;
  iVar5 = 0;
  bVar1 = 0 < param_3;
  uVar4 = 1 << (param_1 % 0x20 & 0x1fU);
  p_Var6 = fStack_b0.fds_bits + param_1 / 0x20;
  do {
    if (!bVar1) {
      return 0;
    }
    do {
      memset(&fStack_b0,0,0x80);
      *p_Var6 = *p_Var6 | uVar4;
      local_30.tv_sec = 5;
      local_30.tv_usec = 0;
      iVar2 = select(param_1 + 1,&fStack_b0,(fd_set *)0x0,(fd_set *)0x0,&local_30);
      if (iVar2 == -1) {
        return 0xffffffff;
      }
      if (iVar2 == 0) {
        return 0xfffffffe;
      }
    } while ((uVar4 & *p_Var6) == 0);
    sVar3 = read(param_1,(void *)(param_2 + iVar5),param_3 - iVar5);
    if (-1 < sVar3) {
      iVar5 = iVar5 + sVar3;
      bVar1 = iVar5 < param_3;
    }
  } while( true );
}


// ===== stm32Close @ 00401a20

void stm32Close(void)

{
  serialClose(board);
  return;
}


// ===== stm32UpdateFLag @ 00401a2c

void stm32UpdateFLag(undefined4 param_1)

{
  gpio_out(0x23,param_1);
  return;
}


// ===== stm32Unexport @ 00401a38

undefined4 stm32Unexport(void)

{
  int iVar1;
  char acStack_110 [128];
  char acStack_90 [132];
  
  snprintf(acStack_90,0x80,"%s/gpio%u","/sys/class/gpio",0x23);
  iVar1 = access(acStack_90,0);
  if (iVar1 == 0) {
    sprintf(acStack_110,"echo %u > %s/unexport",0x23,"/sys/class/gpio");
    system(acStack_110);
    usleep(2000);
  }
  return 0;
}


// ===== stm32Reboot @ 00401a40

void stm32Reboot(void)

{
  puts("stm32 reset");
  gpio_out(0x22,0);
  usleep(200000);
  gpio_set_value(0x22,1);
  usleep(200000);
  return;
}


// ===== stm32Write @ 00401a90

undefined4 stm32Write(int *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  char *__format;
  int iVar12;
  undefined1 local_448;
  byte local_447;
  undefined2 local_446;
  undefined4 local_444 [256];
  undefined2 local_44;
  byte local_42 [2];
  char *local_40;
  uint local_3c;
  int local_38;
  char *local_34;
  int local_30;
  
  puts("STM-32 Wirting");
  iVar12 = *param_1;
  if (iVar12 == 0) {
    uVar7 = 0xffffffff;
    local_30 = 0x400000;
LAB_00401c4c:
    local_42[0] = 4;
    iVar12 = 0;
    __format = (char *)(local_30 + 0x2598);
    serialWrite(board,local_42,1);
    while( true ) {
      while( true ) {
        iVar5 = serialRead(board,local_42,1);
        printf(__format,iVar5,(uint)local_42[0]);
        if (iVar5 == 0) break;
        iVar12 = iVar12 + 1;
        if (2 < iVar12) {
          puts("recv try time_out.");
          return uVar7;
        }
      }
      if (local_42[0] == 6) break;
      if (local_42[0] == 0x15) {
        return uVar7;
      }
    }
    puts("STM32Write: success.");
    return uVar7;
  }
  local_30 = 0x400000;
  local_34 = "recv try time_out.";
  local_38 = 0x400000;
  local_40 = "send error. again";
LAB_00401b0c:
  bVar1 = *(byte *)(iVar12 + 0x408);
  local_3c = (uint)bVar1;
  uVar2 = *(undefined2 *)(iVar12 + 0x40c);
  uVar3 = *(undefined2 *)(iVar12 + 0x40a);
  memset(&local_448,0,0x406);
  local_448 = 1;
  puVar4 = (undefined4 *)(iVar12 + 8);
  puVar6 = local_444;
  do {
    uVar10 = *puVar4;
    uVar9 = puVar4[1];
    uVar8 = puVar4[2];
    uVar7 = puVar4[3];
    puVar4 = puVar4 + 4;
    *puVar6 = uVar10;
    puVar6[1] = uVar9;
    puVar6[2] = uVar8;
    puVar6[3] = uVar7;
    puVar6 = puVar6 + 4;
  } while (puVar4 != (undefined4 *)(iVar12 + 0x408));
  local_447 = bVar1;
  local_446 = uVar2;
  local_44 = uVar3;
LAB_00401b94:
  do {
    iVar11 = 0;
    iVar5 = serialWrite(board,&local_448,0x406);
    printf("send size %d\n",iVar5);
    do {
      while( true ) {
        iVar5 = serialRead(board,local_42,1);
        printf("rr=%d, r=%d\n",iVar5,(uint)local_42[0]);
        if (iVar5 != 0) break;
        if (local_42[0] == 6) {
          printf((char *)(local_38 + 0x25bc),local_3c);
          iVar12 = *(int *)(iVar12 + 0x410);
          uVar7 = 0;
          if (iVar12 == 0) goto LAB_00401c4c;
          goto LAB_00401b0c;
        }
        if (local_42[0] == 0x15) {
          puts(local_40);
          goto LAB_00401b94;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
    puts(local_34);
    puts(local_40);
  } while( true );
}


// ===== stm32Sync @ 00401d88

undefined4 stm32Sync(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char local_28 [12];
  
  iVar4 = 2;
  local_28[1] = 0x43;
  fflush(stdout);
  do {
    putchar(0x2e);
    fflush(stdout);
    iVar2 = serialWrite(board,local_28 + 1,1);
    if (iVar2 == 1) {
      serialFlush(board);
      iVar2 = serialRead(board,local_28,1);
      if (iVar2 == 0) {
        if (local_28[0] == '\x06') {
          uVar3 = 6;
LAB_00401e98:
          putchar(10);
          puts("Connected to board.");
          return uVar3;
        }
        if (local_28[0] == '\a') {
          uVar3 = 7;
          goto LAB_00401e98;
        }
      }
    }
    bVar1 = iVar4 == 1;
    iVar4 = 1;
    if (bVar1) {
      putchar(10);
      printf("Can not connect to board, ");
      if (iVar2 == -1) {
        puts(" failed.");
        return 0xffffffff;
      }
      puts(" timed-out.");
      return 0xffffffff;
    }
  } while( true );
}


// ===== stm32Connected @ 00401f10

void stm32Connected(void)

{
  int iVar1;
  
  iVar1 = stm32Sync();
  if (iVar1 == -1) {
    stm32Sync();
    return;
  }
  return;
}


// ===== stm32Init @ 00401f3c

void stm32Init(char *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = serialOpen(param_1,param_2,8,0x45,1);
  if (iVar1 < 1) {
    printf("Serial port %s open failed.\n",param_1);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  board = iVar1;
  printf("Serial port %s open.\n",param_1);
  iVar1 = stm32Sync();
  if (iVar1 == -1) {
    stm32Sync();
    return;
  }
  return;
}


// ===== gpio_export @ 00401fc0

undefined4 gpio_export(uint param_1)

{
  int iVar1;
  char acStack_190 [256];
  char acStack_90 [132];
  
  sprintf(acStack_190,"%s/gpio%u","/sys/class/gpio",param_1);
  iVar1 = access(acStack_190,0);
  if (iVar1 != 0) {
    sprintf(acStack_90,"echo %d > %s/export",param_1,"/sys/class/gpio");
    system(acStack_90);
  }
  return 0;
}


// ===== gpio_unexport @ 0040203c

undefined4 gpio_unexport(uint param_1)

{
  int iVar1;
  char acStack_110 [128];
  char acStack_90 [132];
  
  snprintf(acStack_90,0x80,"%s/gpio%u","/sys/class/gpio",param_1);
  iVar1 = access(acStack_90,0);
  if (iVar1 == 0) {
    sprintf(acStack_110,"echo %u > %s/unexport",param_1,"/sys/class/gpio");
    system(acStack_110);
    usleep(2000);
  }
  return 0;
}


// ===== gpio_set_direction @ 004020c4

undefined4 gpio_set_direction(uint param_1,char *param_2)

{
  int iVar1;
  char acStack_90 [132];
  
  iVar1 = strcmp(param_2,"in");
  if ((iVar1 == 0) && (iVar1 = strcmp(param_2,"out"), iVar1 == 0)) {
    return 0xffffffea;
  }
  sprintf(acStack_90,"echo %s > %s/gpio%u/direction",param_2,"/sys/class/gpio",param_1);
  system(acStack_90);
  return 0;
}


// ===== gpio_set_value @ 00402148

undefined4 gpio_set_value(uint param_1,uint param_2)

{
  uchar param2;
  char acStack_88 [132];
  
  param2 = '0';
  if ((param_2 == 0) || (param2 = '1', param_2 < 2)) {
    sprintf(acStack_88,"echo %c > %s/gpio%u/value",param2,"/sys/class/gpio",param_1);
    system(acStack_88);
    return 0;
  }
  return 0xffffffea;
}


// ===== gpio_out @ 004021a4

undefined4 gpio_out(uint param_1,uint param_2)

{
  uchar param2;
  undefined4 uVar1;
  char acStack_90 [128];
  
  gpio_export();
  usleep(2000);
  sprintf(acStack_90,"echo %s > %s/gpio%u/direction","out","/sys/class/gpio",param_1);
  system(acStack_90);
  usleep(2000);
  param2 = '0';
  if ((param_2 == 0) || (param2 = '1', param_2 < 2)) {
    sprintf(acStack_90,"echo %c > %s/gpio%u/value",param2,"/sys/class/gpio",param_1);
    uVar1 = 0;
    system(acStack_90);
  }
  else {
    uVar1 = 0xffffffea;
  }
  usleep(2000);
  return uVar1;
}


// ===== __libc_csu_init @ 00402270

void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  _init(param_1);
  iVar3 = (int)PTR___do_global_dtors_aux_fini_array_entry_00412a60 -
          (int)PTR___frame_dummy_init_array_entry_00412a5c >> 2;
  iVar2 = 0;
  puVar1 = (undefined4 *)PTR___frame_dummy_init_array_entry_00412a5c;
  if (iVar3 != 0) {
    do {
      iVar2 = iVar2 + 1;
      (*(code *)*puVar1)(param_1,param_2,param_3);
      puVar1 = puVar1 + 1;
    } while (iVar3 != iVar2);
  }
  return;
}


// ===== __libc_csu_fini @ 00402314

void __libc_csu_fini(void)

{
  return;
}


// ===== _fini @ 00402320

void _fini(void)

{
  return;
}


// ===== _PROCEDURE_LINKAGE_TABLE_ @ 00402740

void _PROCEDURE_LINKAGE_TABLE_(void)

{
  (*(code *)__DT_MIPS_PLTGOT)();
  (*(code *)PTR_cfmakeraw_004129a0)();
  return;
}



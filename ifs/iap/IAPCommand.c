// ===== _init @ 00400a78

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = 0;
  if (PTR___gmon_start___00413304 != (undefined *)0x0) {
    iVar1 = (*(code *)PTR___gmon_start___00413304)();
  }
  return iVar1;
}


// ===== main @ 00400ac0

undefined4 main(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  char *param1;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *local_48;
  int local_44;
  char *local_40;
  undefined4 local_3c;
  int local_38;
  undefined1 auStack_34 [4];
  int local_30;
  int local_2c;
  
  local_2c = 0x400000;
  printf("main.c %s:\n","main");
  local_48 = "/dev/ttyS5";
  local_40 = (char *)0x0;
  local_3c = 0;
  local_38 = 0;
  local_44 = 0x1c200;
  printf("main.c %s:\n","parseOptions");
  if (1 < param_1) {
    iVar5 = 0;
    iVar6 = 1;
    local_30 = 0x400000;
    do {
      param_2 = param_2 + 1;
      pcVar4 = (char *)*param_2;
      if (*pcVar4 == '-') {
        iVar2 = strcmp(pcVar4,"-verbose");
        if (iVar2 != 0) {
          printf("Unknown option: %s\n",pcVar4);
          if (local_38 != 0) {
            printf((char *)(local_2c + 0x28e4),"dumpOptions");
            puts("Options:");
            printf("\tfile name NA:%s\n",local_40);
            printf("\tserial port:%s\n",local_48);
            printf("\tbaud rate:%d\n",local_44);
            if (local_38 != 0) {
              puts("\tin verbose mode");
            }
          }
          printf((char *)(local_2c + 0x28e4),"prompt");
          puts(
              "Syntax:  stm32isp [Options] <file> <comport> <baudrate>\n\nExample: stm32isp test.hex /dev/ttyS0 115200\n\nOptions: -verbose          for more information"
              );
                    /* WARNING: Subroutine does not return */
          exit(-1);
        }
        local_38 = 1;
      }
      else if (iVar5 == 1) {
        printf("portName: %s\n",pcVar4);
        iVar5 = 2;
        local_48 = pcVar4;
      }
      else if (iVar5 == 2) {
        __isoc99_sscanf(pcVar4,&DAT_004029d8,&local_44);
        printf((char *)(local_30 + 0x29dc),local_44);
        iVar5 = 3;
      }
      else if (iVar5 == 0) {
        local_40 = pcVar4;
        printf("fileName NA: %s\n",pcVar4);
        iVar5 = 1;
      }
      else {
        iVar5 = iVar5 + 1;
      }
      iVar6 = iVar6 + 1;
    } while (param_1 != iVar6);
  }
  if (local_38 != 0) {
    printf((char *)(local_2c + 0x28e4),"dumpOptions");
    puts("Options:");
    printf("\tfile name NA:%s\n",local_40);
    printf("\tserial port:%s\n",local_48);
    printf("\tbaud rate:%d\n",local_44);
    if (local_38 != 0) {
      puts("\tin verbose mode");
    }
  }
  sleep(1);
  iVar5 = stm32Init(local_48,local_44);
  if (iVar5 == 6) {
    puts("Update :NA ");
    iVar5 = readHexFile(local_40,auStack_34);
    if (iVar5 == 0) {
      printf("Can not open file %s.\n",local_40);
      uVar1 = 0xffffffff;
    }
    else {
      fillPacket(auStack_34);
      stm32Write(auStack_34);
      stm32Close();
      mmapDelete(auStack_34);
      system("touch /root/N32");
      pcVar4 = getcwd((char *)0x0,0);
      sVar3 = strlen(pcVar4);
      param1 = malloc(sVar3 + 10);
      builtin_strncpy(param1,"rm ",4);
      pcVar4 = stpcpy(param1 + 3,pcVar4);
      uVar1 = s__Update_00402a08._4_4_;
      *(undefined4 *)pcVar4 = s__Update_00402a08._0_4_;
      *(undefined4 *)(pcVar4 + 4) = uVar1;
      printf("rmmove Update file %s.\n",param1);
      system(param1);
      sync();
      puts("STM32iap finished NA.");
      uVar1 = 0;
    }
  }
  else if (iVar5 == 7) {
    puts("Update :HD ");
    uVar1 = 0;
  }
  else {
    puts("IAPCommand: Can not connect to board.");
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== __start @ 00400eb0

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


// ===== deregister_tm_clones @ 00400f10

/* WARNING: Removing unreachable block (ram,0x00400f28) */
/* WARNING: Removing unreachable block (ram,0x00400f34) */

void deregister_tm_clones(void)

{
  return;
}


// ===== register_tm_clones @ 00400f44

/* WARNING: Removing unreachable block (ram,0x00400f74) */
/* WARNING: Removing unreachable block (ram,0x00400f64) */
/* WARNING: Removing unreachable block (ram,0x00400f80) */

void register_tm_clones(void)

{
  return;
}


// ===== __do_global_dtors_aux @ 00400f90

void __do_global_dtors_aux(void)

{
  if (completed_6546 == '\0') {
    deregister_tm_clones();
    completed_6546 = '\x01';
  }
  return;
}


// ===== fillPacket @ 00400fd0

undefined4 fillPacket(undefined4 *param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar6;
  byte *pbVar5;
  int *piVar7;
  int param1;
  
  printf("hexfile.c %s:\n","fillPacket");
  piVar7 = (int *)*param_1;
  if (piVar7 != (int *)0x0) {
    param1 = 0;
    do {
      *(char *)(piVar7 + 0x102) = (char)param1;
      *(short *)(piVar7 + 0x103) = (short)piVar7[1] - (short)*piVar7;
      uVar3 = 0;
      pbVar6 = (byte *)(piVar7 + 2);
      do {
        while( true ) {
          pbVar5 = pbVar6 + 1;
          uVar1 = (ushort)*pbVar6 << 8 ^ (ushort)uVar3;
          pbVar6 = pbVar5;
          if ((short)uVar1 < 0) break;
          uVar3 = (int)(short)uVar1 & 0x7fff;
          uVar4 = uVar3 << 2;
          if (-1 < (short)(uVar3 << 1)) goto LAB_00401074;
LAB_00401110:
          uVar3 = ((uVar4 ^ 0x1021) & 0xffff) << 1;
          if ((short)(uVar4 ^ 0x1021) < 0) goto LAB_00401124;
LAB_00401084:
          uVar4 = (uVar3 & 0xffff) << 1;
          if (-1 < (short)uVar3) goto LAB_00401094;
LAB_00401138:
          uVar3 = ((uVar4 ^ 0x1021) & 0xffff) << 1;
          if ((short)(uVar4 ^ 0x1021) < 0) goto LAB_0040114c;
LAB_004010a4:
          uVar4 = (uVar3 & 0xffff) << 1;
          if (-1 < (short)uVar3) goto LAB_004010b4;
LAB_00401160:
          uVar3 = ((uVar4 ^ 0x1021) & 0xffff) << 1;
          if ((short)(uVar4 ^ 0x1021) < 0) goto LAB_00401174;
LAB_004010c4:
          uVar4 = (uVar3 & 0xffff) << 1;
          if (-1 < (short)uVar3) goto LAB_004010d4;
LAB_00401188:
          uVar3 = (uVar4 ^ 0x1021) & 0xffff;
          uVar2 = (undefined2)(uVar4 ^ 0x1021);
          if ((byte *)(piVar7 + 0x102) == pbVar5) goto LAB_00401194;
        }
        uVar3 = (uint)uVar1 << 1 ^ 0x1021;
        uVar4 = (uVar3 & 0xffff) << 1;
        if ((short)uVar3 < 0) goto LAB_00401110;
LAB_00401074:
        uVar3 = (uVar4 & 0xffff) << 1;
        if (-1 < (short)uVar4) goto LAB_00401084;
LAB_00401124:
        uVar4 = ((uVar3 ^ 0x1021) & 0xffff) << 1;
        if ((short)(uVar3 ^ 0x1021) < 0) goto LAB_00401138;
LAB_00401094:
        uVar3 = (uVar4 & 0xffff) << 1;
        if (-1 < (short)uVar4) goto LAB_004010a4;
LAB_0040114c:
        uVar4 = ((uVar3 ^ 0x1021) & 0xffff) << 1;
        if ((short)(uVar3 ^ 0x1021) < 0) goto LAB_00401160;
LAB_004010b4:
        uVar3 = (uVar4 & 0xffff) << 1;
        if (-1 < (short)uVar4) goto LAB_004010c4;
LAB_00401174:
        uVar4 = ((uVar3 ^ 0x1021) & 0xffff) << 1;
        if ((short)(uVar3 ^ 0x1021) < 0) goto LAB_00401188;
LAB_004010d4:
        uVar3 = uVar4 & 0xffff;
        uVar2 = (undefined2)uVar4;
      } while ((byte *)(piVar7 + 0x102) != pbVar5);
LAB_00401194:
      *(undefined2 *)((int)piVar7 + 0x40a) = uVar2;
      printf("pBlock->packetNum %d\n",param1);
      param1 = param1 + 1;
      printf("pBlock->packetSize %d\n",(uint)*(ushort *)(piVar7 + 0x103));
      printf("pBlock->crc16 %d\n",(uint)*(ushort *)((int)piVar7 + 0x40a));
      printf("pBlock->address %d\n",*piVar7);
      printf("pBlock->lastValid %d\n",piVar7[1]);
      piVar7 = (int *)piVar7[0x104];
    } while (piVar7 != (int *)0x0);
  }
  return 0;
}


// ===== readHexFile @ 00401210

undefined4 readHexFile(char *param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  FILE *__stream;
  uint uVar3;
  byte *__ptr;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint local_58 [2];
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined *local_3c;
  int local_38;
  int local_34;
  char *local_30;
  
  printf("hexfile.c %s:\n","readHexFile");
  mmapInit(param_2);
  __stream = fopen(param_1,"r");
  if (__stream == (FILE *)0x0) {
    return 0;
  }
  local_50 = 0x400000;
  local_3c = &DAT_00402bac;
  local_34 = 0x400000;
  local_30 = "len=%02X, offset=%04X, type=%02X:";
  local_4c = 0;
  local_38 = 0x400000;
  while( true ) {
    printf("hexfile.c %s:\n",(char *)(local_50 + 0x2bf0));
    uVar3 = fgetc(__stream);
    if ((uVar3 & 0xff) != 0x3a) break;
    __isoc99_fscanf(__stream,&DAT_00402ba4,local_58);
    uVar3 = local_58[0];
    __ptr = malloc(local_58[0]);
    __isoc99_fscanf(__stream,local_3c,local_58);
    uVar2 = local_58[0];
    local_44 = local_58[0];
    __isoc99_fscanf(__stream,&DAT_00402ba4,local_58);
    uVar5 = local_58[0] & 0xff;
    local_48 = uVar3 & 0xff;
    local_40 = local_58[0];
    uVar3 = uVar5 + uVar3 + uVar2 + ((int)uVar2 >> 8) & 0xff;
    if (local_48 == 0) {
      __isoc99_fscanf(__stream,local_34 + 0x2bbc,local_58);
      local_44 = local_44 & 0xffff;
      uVar3 = uVar3 + local_58[0];
      printf(local_30,0,local_44,local_40 & 0xff);
    }
    else {
      pbVar6 = __ptr + local_48;
      pbVar4 = __ptr;
      do {
        __isoc99_fscanf(__stream,&DAT_00402ba4,local_58);
        pbVar7 = pbVar4 + 1;
        *pbVar4 = (byte)local_58[0];
        uVar3 = (local_58[0] & 0xff) + uVar3 & 0xff;
        pbVar4 = pbVar7;
      } while (pbVar7 != pbVar6);
      __isoc99_fscanf(__stream,local_34 + 0x2bbc,local_58);
      local_44 = local_44 & 0xffff;
      uVar3 = uVar3 + local_58[0];
      printf(local_30,local_48,local_44,local_40 & 0xff);
      pbVar4 = __ptr;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        printf("%02X",(uint)bVar1);
      } while (pbVar7 != pbVar4);
    }
    printf((char *)(local_38 + 0x2bb4),uVar3 & 0xff);
    if ((uVar3 & 0xff) != 0) break;
    if (uVar5 == 4) {
      local_4c = (uint)CONCAT11(*__ptr,__ptr[1]) << 0x10;
    }
    else if (uVar5 == 0) {
      mmapPut(param_2,local_44 + local_4c,local_48,__ptr);
    }
    free(__ptr);
  }
  fclose(__stream);
  return 1;
}


// ===== crc16 @ 004014f8

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


// ===== mmapInit @ 004015e0

void mmapInit(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== mmapPut @ 004015e8

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


// ===== mmapDelete @ 00401754

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


// ===== mmapDump @ 00401794

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
        if (puVar3[1] - *puVar3 <= uVar2) goto LAB_00401844;
      }
    }
LAB_00401844:
    putchar(10);
    puVar3 = (uint *)puVar3[0x104];
  } while( true );
}


// ===== serialOpen @ 00401880

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
  
  printf("serial.c %s:\n","serialOpen");
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
LAB_00401a70:
    uVar1 = uVar1 & 0x200;
    goto joined_r0x00401a74;
  }
  if (param_4 < 0x50) {
    if (param_4 == 0x45) goto LAB_00401aa0;
  }
  else {
    if (param_4 == 0x65) {
LAB_00401aa0:
      uVar1 = uVar1 & 0xfffffdff | 0x100;
      goto joined_r0x00401a74;
    }
    if (param_4 == 0x6f) goto LAB_00401a70;
  }
  uVar1 = uVar1 & 0xfffffeff;
joined_r0x00401a74:
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


// ===== serialFlush @ 00401ab8

void serialFlush(int param_1)

{
  printf("serial.c %s:\n","serialFlush");
  tcflush(param_1,2);
  return;
}


// ===== serialClose @ 00401af4

undefined4 serialClose(int param_1)

{
  printf("serial.c %s:\n","serialClose");
  printf("serial.c %s:\n","serialFlush");
  tcflush(param_1,2);
  close(param_1);
  return 0;
}


// ===== serialWrite @ 00401b58

size_t serialWrite(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  size_t __n;
  
  printf("serial.c %s:\n","serialWrite");
  __n = param_3;
  do {
    sVar1 = write(param_1,param_2,__n);
    if (sVar1 == 0xffffffff) {
      return 0xffffffff;
    }
    while( true ) {
      if (__n == sVar1) {
        return param_3;
      }
      if ((int)sVar1 < 1) break;
      param_2 = (void *)((int)param_2 + sVar1);
      __n = __n - sVar1;
      sVar1 = write(param_1,param_2,__n);
      if (sVar1 == 0xffffffff) {
        return 0xffffffff;
      }
    }
  } while( true );
}


// ===== serialRead @ 00401c20

/* WARNING: Removing unreachable block (ram,0x00401c74) */
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
  
  printf("serial.c %s:\n","serialRead");
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


// ===== stm32Close @ 00401db0

void stm32Close(void)

{
  printf("stm32.c %s:\n","stm32Close");
  serialClose(board);
  return;
}


// ===== stm32UpdateFLag @ 00401de0

void stm32UpdateFLag(undefined4 param_1)

{
  printf("stm32.c %s:\n","stm32UpdateFLag");
  gpio_out(0x23,param_1);
  return;
}


// ===== stm32Unexport @ 00401e1c

void stm32Unexport(void)

{
  printf("stm32.c %s:\n","stm32Unexport");
  gpio_unexport(0x23);
  return;
}


// ===== stm32Reboot @ 00401e48

void stm32Reboot(void)

{
  printf("stm32.c %s:\n","stm32Reboot");
  puts("stm32 reset");
  gpio_out(0x22,0);
  usleep(200000);
  gpio_set_value(0x22,1);
  usleep(200000);
  return;
}


// ===== stm32Write @ 00401eac

undefined4 stm32Write(int *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int param1;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 local_450;
  byte local_44f;
  undefined2 local_44e;
  undefined4 local_44c [256];
  undefined2 local_4c;
  byte local_4a [2];
  char *local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  local_38 = 0x400000;
  printf("stm32.c %s:\n","stm32Write");
  puts("STM-32 Wirting");
  iVar9 = *param_1;
  if (iVar9 == 0) {
    local_30 = 0x400000;
    uVar5 = 0xffffffff;
    local_34 = 0x400000;
  }
  else {
    local_30 = 0x400000;
    local_40 = 0x400000;
    local_34 = 0x400000;
    local_3c = 0x400000;
    local_48 = "send error. again";
    do {
      local_44 = (uint)*(ushort *)(iVar9 + 0x40a);
      bVar1 = *(byte *)(iVar9 + 0x408);
      uVar2 = *(undefined2 *)(iVar9 + 0x40c);
      memset(&local_450,0,0x406);
      local_450 = 1;
      puVar3 = (undefined4 *)(iVar9 + 8);
      puVar4 = local_44c;
      do {
        uVar8 = *puVar3;
        uVar7 = puVar3[1];
        uVar6 = puVar3[2];
        uVar5 = puVar3[3];
        puVar3 = puVar3 + 4;
        *puVar4 = uVar8;
        puVar4[1] = uVar7;
        puVar4[2] = uVar6;
        puVar4[3] = uVar5;
        puVar4 = puVar4 + 4;
      } while (puVar3 != (undefined4 *)(iVar9 + 0x408));
      local_4c = (undefined2)local_44;
      local_44f = bVar1;
      local_44e = uVar2;
      printf((char *)(local_40 + 0x2cdc),(uint)bVar1);
      uVar5 = serialWrite(board,&local_450,0x406);
      printf((char *)(local_3c + 0x2ce8),uVar5);
      while( true ) {
        printf("stm32.c %s:\n","waitAck");
        param1 = serialRead(board,local_4a,1);
        printf("rr=%d, r=%d\n",param1,(uint)local_4a[0]);
        if ((param1 == 0) && (local_4a[0] == 6)) break;
        puts(local_48);
        serialWrite(board,&local_450,0x406);
      }
      printf("The %dth frame data transmission is completed.\n",(uint)bVar1);
      iVar9 = *(int *)(iVar9 + 0x410);
      uVar5 = 0;
    } while (iVar9 != 0);
  }
  iVar9 = local_38;
  printf((char *)(local_38 + 0x2cb0),"sendFileSuccessful");
  local_4a[0] = 4;
  serialWrite(board,local_4a,1);
  printf((char *)(iVar9 + 0x2cb0),local_30 + 0x2dfc);
  iVar9 = serialRead(board,local_4a,1);
  printf((char *)(local_34 + 0x2cf8),iVar9,(uint)local_4a[0]);
  if ((iVar9 == 0) && (local_4a[0] == 6)) {
    puts("STM32Write: success.");
  }
  return uVar5;
}


// ===== stm32Sync @ 00402150

undefined4 stm32Sync(void)

{
  bool bVar1;
  int param1;
  undefined4 uVar2;
  int iVar3;
  byte local_28 [8];
  
  printf("stm32.c %s:\n","stm32Sync");
  local_28[1] = 0x43;
  fflush(stdout);
  iVar3 = 2;
  do {
    putchar(0x2e);
    fflush(stdout);
    param1 = serialWrite(board,local_28 + 1,1);
    if (param1 == 1) {
      serialFlush(board);
      param1 = serialRead(board,local_28,1);
      printf("rr=%d, r=%d\n",param1,(uint)local_28[0]);
      if (param1 == 0) {
        if (local_28[0] == 6) {
          uVar2 = 6;
LAB_00402294:
          putchar(10);
          puts("Connected to board.");
          return uVar2;
        }
        if (local_28[0] == 7) {
          uVar2 = 7;
          goto LAB_00402294;
        }
      }
    }
    bVar1 = iVar3 == 1;
    iVar3 = 1;
    if (bVar1) {
      putchar(10);
      printf("Can not connect to board, ");
      if (param1 == -1) {
        puts(" failed.");
        return 0xffffffff;
      }
      puts(" timed-out.");
      return 0xffffffff;
    }
  } while( true );
}


// ===== stm32Connected @ 00402314

void stm32Connected(void)

{
  int iVar1;
  
  printf("stm32.c %s:\n","stm32Connected");
  iVar1 = stm32Sync();
  if (iVar1 == -1) {
    stm32Sync();
    return;
  }
  return;
}


// ===== stm32Init @ 00402354

void stm32Init(char *param_1,undefined4 param_2)

{
  int iVar1;
  
  printf("stm32.c %s:\n","stm32Init");
  iVar1 = serialOpen(param_1,param_2,8,0x45,1);
  if (iVar1 < 1) {
    printf("Serial port %s open failed.\n",param_1);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  board = iVar1;
  printf("Serial port %s open.\n",param_1);
  printf("stm32.c %s:\n","stm32Connected");
  iVar1 = stm32Sync();
  if (iVar1 == -1) {
    stm32Sync();
    return;
  }
  return;
}


// ===== gpio_export @ 00402420

undefined4 gpio_export(uint param_1)

{
  int iVar1;
  char acStack_190 [256];
  char acStack_90 [128];
  
  printf("gpio.c %s:\n","gpio_export");
  sprintf(acStack_190,"%s/gpio%u","/sys/class/gpio",param_1);
  printf("cmd = %s\n",acStack_190);
  iVar1 = access(acStack_190,0);
  if (iVar1 != 0) {
    sprintf(acStack_90,"echo %d > %s/export",param_1,"/sys/class/gpio");
    printf("cmd = %s\n",acStack_90);
    system(acStack_90);
  }
  return 0;
}


// ===== gpio_unexport @ 004024d4

undefined4 gpio_unexport(uint param_1)

{
  int iVar1;
  char acStack_110 [128];
  char acStack_90 [128];
  
  printf("gpio.c %s:\n","gpio_unexport");
  snprintf(acStack_90,0x80,"%s/gpio%u","/sys/class/gpio",param_1);
  printf("cmd = %s\n",acStack_90);
  iVar1 = access(acStack_90,0);
  if (iVar1 == 0) {
    sprintf(acStack_110,"echo %u > %s/unexport",param_1,"/sys/class/gpio");
    printf("cmd = %s\n",acStack_110);
    system(acStack_110);
    usleep(2000);
  }
  return 0;
}


// ===== gpio_set_direction @ 00402594

undefined4 gpio_set_direction(uint param_1,char *param_2)

{
  int iVar1;
  char acStack_90 [132];
  
  printf("gpio.c %s:\n","gpio_set_direction");
  iVar1 = strcmp(param_2,"in");
  if ((iVar1 == 0) && (iVar1 = strcmp(param_2,"out"), iVar1 == 0)) {
    return 0xffffffea;
  }
  sprintf(acStack_90,"echo %s > %s/gpio%u/direction",param_2,"/sys/class/gpio",param_1);
  printf("cmd = %s\n",acStack_90);
  system(acStack_90);
  return 0;
}


// ===== gpio_set_value @ 0040263c

undefined4 gpio_set_value(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uchar param2;
  char acStack_90 [132];
  
  printf("gpio.c %s:\n","gpio_set_value");
  param2 = '0';
  if ((param_2 == 0) || (param2 = '1', param_2 < 2)) {
    sprintf(acStack_90,"echo %c > %s/gpio%u/value",param2,"/sys/class/gpio",param_1);
    printf("cmd = %s\n",acStack_90);
    system(acStack_90);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}


// ===== gpio_out @ 004026d0

undefined4 gpio_out(uint param_1,uint param_2)

{
  uchar param2;
  undefined4 uVar1;
  char acStack_98 [128];
  
  printf("gpio.c %s:\n","gpio_out");
  gpio_export(param_1);
  usleep(2000);
  printf("gpio.c %s:\n","gpio_set_direction");
  sprintf(acStack_98,"echo %s > %s/gpio%u/direction","out","/sys/class/gpio",param_1);
  printf("cmd = %s\n",acStack_98);
  system(acStack_98);
  usleep(2000);
  printf("gpio.c %s:\n","gpio_set_value");
  param2 = '0';
  if ((param_2 == 0) || (param2 = '1', param_2 < 2)) {
    sprintf(acStack_98,"echo %c > %s/gpio%u/value",param2,"/sys/class/gpio",param_1);
    uVar1 = 0;
    printf("cmd = %s\n",acStack_98);
    system(acStack_98);
  }
  else {
    uVar1 = 0xffffffea;
  }
  usleep(2000);
  return uVar1;
}


// ===== __libc_csu_init @ 00402800

void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  _init(param_1);
  iVar3 = (int)PTR___do_global_dtors_aux_fini_array_entry_00413300 -
          (int)PTR___frame_dummy_init_array_entry_004132fc >> 2;
  iVar2 = 0;
  puVar1 = (undefined4 *)PTR___frame_dummy_init_array_entry_004132fc;
  if (iVar3 != 0) {
    do {
      iVar2 = iVar2 + 1;
      (*(code *)*puVar1)(param_1,param_2,param_3);
      puVar1 = puVar1 + 1;
    } while (iVar3 != iVar2);
  }
  return;
}


// ===== __libc_csu_fini @ 004028a4

void __libc_csu_fini(void)

{
  return;
}


// ===== _fini @ 004028b0

void _fini(void)

{
  return;
}


// ===== _PROCEDURE_LINKAGE_TABLE_ @ 00402fa0

void _PROCEDURE_LINKAGE_TABLE_(void)

{
  (*(code *)__DT_MIPS_PLTGOT)();
  (*(code *)PTR_cfmakeraw_00413230)();
  return;
}



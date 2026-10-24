
// ===== Serial::Serial @ 005d862c
// caller: ? @ 00cd5e3c
// caller: ? @ 00cf5e50
// caller: ? @ 00d82d92
// caller: ? @ 00d82dae
// caller: ? @ Entry Point
// caller: SerialObject::serialOpen @ 005df144

/* Serial::Serial(std::__cxx11::string const&, std::__cxx11::string const&, std::__cxx11::string
   const&) */

void __thiscall Serial::Serial(Serial *this,string *param_1,string *param_2,string *param_3)

{
  void *pvVar1;
  
  QObject::QObject((QObject *)this,(QObject *)0x0);
  *(undefined ***)this = &PTR_metaObject_00b38f7c;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(Serial **)(this + 0x14) = this + 0x1c;
                    /* try { // try from 005d8694 to 005d869b has its CatchHandler @ 005d8748 */
  std::__cxx11::string::_M_construct<char*>
            (this + 0x14,*(int *)param_1,*(int *)param_1 + *(int *)(param_1 + 4));
  *(Serial **)(this + 0x2c) = this + 0x34;
                    /* try { // try from 005d86b4 to 005d86bb has its CatchHandler @ 005d87a8 */
  std::__cxx11::string::_M_construct<char*>
            (this + 0x2c,*(int *)param_2,*(int *)param_2 + *(int *)(param_2 + 4));
  *(Serial **)(this + 0x44) = this + 0x4c;
                    /* try { // try from 005d86d4 to 005d86db has its CatchHandler @ 005d87a0 */
  std::__cxx11::string::_M_construct<char*>
            (this + 0x44,*(int *)param_3,*(int *)param_3 + *(int *)(param_3 + 4));
  *(undefined4 *)(this + 200) = 0x1000;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  memset(this + 0x5c,0,0x34);
  memset(this + 0x90,0,0x34);
                    /* try { // try from 005d8710 to 005d8717 has its CatchHandler @ 005d875c */
  pvVar1 = operator_new__(0x1000);
  *(void **)(this + 0xc4) = pvVar1;
  *(undefined4 *)(this + 0xd4) = 5;
  *(undefined4 *)(this + 0xd8) = 0;
  return;
}



// ===== Serial::sendToUart3 @ 005db9e4
// caller: ? @ 00cd5efc
// caller: ? @ 00cf6298
// caller: ? @ Entry Point

/* Serial::sendToUart3(unsigned char*, int) */

undefined4 __thiscall Serial::sendToUart3(Serial *this,uchar *param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_2) {
    do {
      iVar1 = write(*(int *)(this + 0xc),param_1,param_2);
      param_2 = param_2 - iVar1;
      if (iVar1 < 1) {
        return 0xffffffff;
      }
      param_1 = param_1 + iVar1;
    } while (0 < param_2);
  }
  return 0;
}



// ===== Serial::send @ 005dba70
// caller: ? @ 00cd5f04
// caller: ? @ 00cf62c8
// caller: ? @ 00d830ed
// caller: ? @ 00d83128
// caller: ? @ 00d83133
// caller: ? @ 00d83168
// caller: ? @ Entry Point
// caller: SerialObject::sendCmdToUart7 @ 005e98cc

/* Serial::send(std::__cxx11::string const&) */

int __thiscall Serial::send(Serial *this,string *param_1)

{
  Data *pDVar1;
  size_t sVar2;
  int iVar3;
  QTextStream *pQVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  Data *local_1128 [1024];
  sigset_t local_128;
  sigset_t local_a8;
  Data *local_28;
  Data *local_24;
  Data *local_20;
  Data *local_1c;
  QTextStream *local_18 [2];
  
  if (0x1000U - (*(int *)(this + 0x30) + *(int *)(this + 0x48)) < *(uint *)(param_1 + 4)) {
    pQVar4 = operator_new(0x18);
                    /* try { // try from 005dbdec to 005dbdf3 has its CatchHandler @ 005dbfd0 */
    local_1128[0] = (Data *)0x2;
    QTextStream::QTextStream(pQVar4,pQVar4 + 8,local_1128);
    *(int **)(pQVar4 + 8) = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar4 + 0xc) = 1;
    *(undefined4 *)(pQVar4 + 0x10) = 0;
    pQVar4[0x14] = (QTextStream)0x1;
    pQVar4[0x15] = (QTextStream)0x1;
    local_28 = (Data *)pQVar4;
                    /* try { // try from 005dbe3c to 005dbe43 has its CatchHandler @ 005dbfc8 */
    QString::fromAscii((char *)&local_a8,0xae6d28);
                    /* try { // try from 005dbe48 to 005dbe4f has its CatchHandler @ 005dbfac */
    QTextStream::operator<<(pQVar4,(QString *)&local_a8);
    iVar7 = *(int *)local_a8.__val[0];
    *(int *)local_a8.__val[0] = iVar7 + -1;
    if (iVar7 == 1) {
      QString::free((Data *)local_a8.__val[0]);
    }
    if (*(QTextStream *)(local_28 + 0x14) != (QTextStream)0x0) {
                    /* try { // try from 005dbf4c to 005dbf73 has its CatchHandler @ 005dbfc8 */
      QTextStream::operator<<((QTextStream *)local_28,' ');
    }
    pDVar1 = local_28;
                    /* try { // try from 005dbe98 to 005dbe9f has its CatchHandler @ 005dbfc8 */
    QString::fromAscii((char *)&local_128,0xae6fe8);
                    /* try { // try from 005dbea4 to 005dbeab has its CatchHandler @ 005dbff8 */
    QTextStream::operator<<((QTextStream *)pDVar1,(QString *)&local_128);
    iVar7 = *(int *)local_128.__val[0];
    *(int *)local_128.__val[0] = iVar7 + -1;
    if (iVar7 == 1) {
      QString::free((Data *)local_128.__val[0]);
    }
    if (*(QTextStream *)(local_28 + 0x14) != (QTextStream)0x0) {
      QTextStream::operator<<((QTextStream *)local_28,' ');
    }
    pDVar1 = local_28;
                    /* try { // try from 005dbef0 to 005dbef7 has its CatchHandler @ 005dbfc8 */
    QString::fromAscii((char *)local_1128,0xae6e4c);
                    /* try { // try from 005dbefc to 005dbf03 has its CatchHandler @ 005dbfe4 */
    QTextStream::operator<<((QTextStream *)pDVar1,(QString *)local_1128);
    iVar7 = *(int *)local_1128[0];
    *(int *)local_1128[0] = iVar7 + -1;
    if (iVar7 == 1) {
      QString::free(local_1128[0]);
    }
    if (*(QTextStream *)(local_28 + 0x14) != (QTextStream)0x0) {
      QTextStream::operator<<((QTextStream *)local_28,' ');
    }
    QDebug::~QDebug((QDebug *)&local_28);
    iVar7 = -0x16;
  }
  else {
    memset(local_1128,0,0x1000);
    snprintf((char *)local_1128,0x1000,"%s%s",*(undefined4 *)param_1,*(undefined4 *)(this + 0x44));
    sigemptyset(&local_a8);
    sigaddset(&local_a8,0xe);
    sigprocmask(1,&local_a8,&local_128);
    sVar2 = strlen((char *)local_1128);
    iVar3 = write(*(int *)(this + 8),local_1128,sVar2);
    iVar7 = 0;
    if (iVar3 < 0) {
      pQVar4 = operator_new(0x18);
                    /* try { // try from 005dbb6c to 005dbb73 has its CatchHandler @ 005dc00c */
      local_28 = (Data *)0x2;
      QTextStream::QTextStream(pQVar4,pQVar4 + 8,&local_28);
      *(int **)(pQVar4 + 8) = &QString::shared_null;
      QString::shared_null = QString::shared_null + 1;
      *(undefined4 *)(pQVar4 + 0xc) = 1;
      *(undefined4 *)(pQVar4 + 0x10) = 0;
      pQVar4[0x14] = (QTextStream)0x1;
      pQVar4[0x15] = (QTextStream)0x1;
      local_18[0] = pQVar4;
                    /* try { // try from 005dbbbc to 005dbbc3 has its CatchHandler @ 005dc014 */
      QString::fromAscii((char *)&local_1c,0xae6d28);
                    /* try { // try from 005dbbc8 to 005dbbcf has its CatchHandler @ 005dc050 */
      QTextStream::operator<<(pQVar4,(QString *)&local_1c);
      iVar7 = *(int *)local_1c;
      *(int *)local_1c = iVar7 + -1;
      if (iVar7 == 1) {
        QString::free(local_1c);
      }
      if (local_18[0][0x14] != (QTextStream)0x0) {
                    /* try { // try from 005dbd50 to 005dbd87 has its CatchHandler @ 005dc014 */
        QTextStream::operator<<(local_18[0],' ');
      }
      pQVar4 = local_18[0];
                    /* try { // try from 005dbc14 to 005dbc1b has its CatchHandler @ 005dc014 */
      QString::fromAscii((char *)&local_20,0xae6fe8);
                    /* try { // try from 005dbc20 to 005dbc27 has its CatchHandler @ 005dc028 */
      QTextStream::operator<<(pQVar4,(QString *)&local_20);
      iVar7 = *(int *)local_20;
      *(int *)local_20 = iVar7 + -1;
      if (iVar7 == 1) {
        QString::free(local_20);
      }
      if (local_18[0][0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_18[0],' ');
      }
      pQVar4 = local_18[0];
                    /* try { // try from 005dbc6c to 005dbc73 has its CatchHandler @ 005dc014 */
      QString::fromAscii((char *)&local_24,0xae6e78);
                    /* try { // try from 005dbc78 to 005dbc7f has its CatchHandler @ 005dc03c */
      QTextStream::operator<<(pQVar4,(QString *)&local_24);
      iVar7 = *(int *)local_24;
      *(int *)local_24 = iVar7 + -1;
      if (iVar7 == 1) {
        QString::free(local_24);
      }
      if (local_18[0][0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_18[0],' ');
      }
      piVar5 = __errno_location();
      pcVar6 = strerror(*piVar5);
      pQVar4 = local_18[0];
                    /* try { // try from 005dbcd8 to 005dbcdf has its CatchHandler @ 005dc014 */
      QString::fromAscii((char *)&local_28,(int)pcVar6);
                    /* try { // try from 005dbce4 to 005dbceb has its CatchHandler @ 005dc064 */
      QTextStream::operator<<(pQVar4,(QString *)&local_28);
      iVar7 = *(int *)local_28;
      *(int *)local_28 = iVar7 + -1;
      if (iVar7 == 1) {
        QString::free(local_28);
      }
      if (local_18[0][0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_18[0],' ');
      }
      QDebug::~QDebug((QDebug *)local_18);
      pcVar6 = strerror(*piVar5);
      printf("Serial: write buf error : %s\n",pcVar6);
      iVar7 = -*piVar5;
    }
    sigprocmask(3,&local_128,(sigset_t *)0x0);
  }
  return iVar7;
}



// ===== Serial::sendToUart4WaitRecv @ 005dc760
// caller: ? @ 00cd5f1c
// caller: ? @ 00cf6388
// caller: ? @ 00d831cc
// caller: ? @ 00d831d8
// caller: ? @ 00d83213
// caller: ? @ 00d83254
// caller: ? @ 00d832a7
// caller: ? @ 00d832b2
// caller: ? @ 00d832d0
// caller: ? @ Entry Point
// caller: SerialObject::sendCmdToUart4 @ 005e32dc

/* WARNING: Removing unreachable block (ram,0x005dc87c) */
/* WARNING: Removing unreachable block (ram,0x005dc8d4) */
/* Serial::sendToUart4WaitRecv(std::__cxx11::string) */

undefined4 * Serial::sendToUart4WaitRecv(undefined4 *param_1,int param_2,int *param_3)

{
  __time_t _Var1;
  int iVar2;
  size_t sVar3;
  __fd_mask *p_Var4;
  QTextStream *pQVar5;
  int *piVar6;
  char *pcVar7;
  int iVar9;
  int iVar8;
  undefined4 local_20e8;
  Data *local_10e8 [1024];
  Data *local_e8 [32];
  Data *local_68;
  char *local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  timeval local_50;
  QTextStream *local_48;
  Data *local_44;
  Data *local_40;
  Data *local_3c;
  QTextStream *local_38 [2];
  int local_30;
  
  ::tcflush(*(int *)(param_2 + 0x10),2);
  iVar2 = std::__cxx11::string::compare((char *)param_3);
  if ((((iVar2 != 0) && (iVar2 = std::__cxx11::string::compare((char *)param_3), iVar2 != 0)) &&
      (iVar2 = std::__cxx11::string::compare((char *)param_3), iVar2 != 0)) &&
     (iVar2 = std::__cxx11::string::compare((char *)param_3), iVar2 != 0)) {
    pQVar5 = operator_new(0x18);
                    /* try { // try from 005dcea8 to 005dceaf has its CatchHandler @ 005dd334 */
    local_20e8 = (Data *)0x2;
    QTextStream::QTextStream(pQVar5,pQVar5 + 8,(QString *)&local_20e8);
    *(int **)(pQVar5 + 8) = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar5 + 0xc) = 1;
    *(undefined4 *)(pQVar5 + 0x10) = 0;
    pQVar5[0x14] = (QTextStream)0x1;
    pQVar5[0x15] = (QTextStream)0x1;
    local_50.tv_sec = (__time_t)pQVar5;
                    /* try { // try from 005dcefc to 005dcf03 has its CatchHandler @ 005dd32c */
    QString::fromAscii((char *)&local_68,0xae6d28);
                    /* try { // try from 005dcf08 to 005dcf0f has its CatchHandler @ 005dd324 */
    QTextStream::operator<<(pQVar5,(QString *)&local_68);
    iVar2 = *(int *)local_68;
    *(int *)local_68 = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_68);
    }
    if (*(QTextStream *)(local_50.tv_sec + 0x14) != (QTextStream)0x0) {
                    /* try { // try from 005dd304 to 005dd30b has its CatchHandler @ 005dd32c */
      QTextStream::operator<<((QTextStream *)local_50.tv_sec,' ');
    }
    _Var1 = local_50.tv_sec;
                    /* try { // try from 005dcf58 to 005dcf5f has its CatchHandler @ 005dd32c */
    QString::fromAscii((char *)local_e8,0xae6f9c);
                    /* try { // try from 005dcf64 to 005dcf6b has its CatchHandler @ 005dd2f0 */
    QTextStream::operator<<((QTextStream *)_Var1,(QString *)local_e8);
    iVar2 = *(int *)local_e8[0];
    *(int *)local_e8[0] = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_e8[0]);
    }
    if (*(QTextStream *)(local_50.tv_sec + 0x14) != (QTextStream)0x0) {
                    /* try { // try from 005dd2d0 to 005dd2d7 has its CatchHandler @ 005dd32c */
      QTextStream::operator<<((QTextStream *)local_50.tv_sec,' ');
    }
    _Var1 = local_50.tv_sec;
                    /* try { // try from 005dcfb4 to 005dcfbb has its CatchHandler @ 005dd32c */
    QString::fromAscii((char *)local_10e8,0xae6ed8);
                    /* try { // try from 005dcfc0 to 005dcfc7 has its CatchHandler @ 005dd2c8 */
    QTextStream::operator<<((QTextStream *)_Var1,(QString *)local_10e8);
    iVar2 = *(int *)local_10e8[0];
    *(int *)local_10e8[0] = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_10e8[0]);
    }
    if (*(QTextStream *)(local_50.tv_sec + 0x14) != (QTextStream)0x0) {
                    /* try { // try from 005dd2a8 to 005dd2af has its CatchHandler @ 005dd32c */
      QTextStream::operator<<((QTextStream *)local_50.tv_sec,' ');
    }
                    /* try { // try from 005dd008 to 005dd00f has its CatchHandler @ 005dd32c */
    QString::fromAscii((char *)local_10e8,*param_3);
                    /* try { // try from 005dd014 to 005dd057 has its CatchHandler @ 005dd2a0 */
    pQVar5 = (QTextStream *)QTextStream::operator<<((QTextStream *)local_50.tv_sec,'\"');
    pQVar5 = (QTextStream *)QTextStream::operator<<(pQVar5,(QString *)local_10e8);
    QTextStream::operator<<(pQVar5,'\"');
    if (*(QTextStream *)(local_50.tv_sec + 0x14) != (QTextStream)0x0) {
                    /* try { // try from 005dd290 to 005dd297 has its CatchHandler @ 005dd2a0 */
      QTextStream::operator<<((QTextStream *)local_50.tv_sec,' ');
    }
    _Var1 = local_50.tv_sec;
    QString::fromAscii((char *)&local_20e8,0xae6ef0);
                    /* try { // try from 005dd05c to 005dd063 has its CatchHandler @ 005dd26c */
    QTextStream::operator<<((QTextStream *)_Var1,(QString *)&local_20e8);
    iVar2 = *(int *)local_20e8;
    *(int *)local_20e8 = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_20e8);
    }
    if (*(QTextStream *)(local_50.tv_sec + 0x14) != (QTextStream)0x0) {
      QTextStream::operator<<((QTextStream *)local_50.tv_sec,' ');
    }
                    /* try { // try from 005dd09c to 005dd0a3 has its CatchHandler @ 005dd2a0 */
    QTextStream::operator<<((QTextStream *)local_50.tv_sec,param_3[1]);
    if (*(QTextStream *)(local_50.tv_sec + 0x14) != (QTextStream)0x0) {
                    /* try { // try from 005dd23c to 005dd253 has its CatchHandler @ 005dd2a0 */
      QTextStream::operator<<((QTextStream *)local_50.tv_sec,' ');
    }
    iVar2 = *(int *)local_10e8[0];
    *(int *)local_10e8[0] = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_10e8[0]);
    }
    QDebug::~QDebug((QDebug *)&local_50);
  }
  memset(local_10e8,0,0x1000);
  snprintf((char *)local_10e8,0x1000,"%s \r\n",(char *)*param_3);
  sVar3 = strlen((char *)local_10e8);
  iVar2 = write(*(int *)(param_2 + 0x10),local_10e8,sVar3);
  if (iVar2 < 0) {
    pQVar5 = operator_new(0x18);
                    /* try { // try from 005dc9f8 to 005dc9ff has its CatchHandler @ 005dd3b4 */
    local_20e8 = (Data *)0x2;
    QTextStream::QTextStream(pQVar5,pQVar5 + 8,(QString *)&local_20e8);
    *(int **)(pQVar5 + 8) = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar5 + 0xc) = 1;
    *(undefined4 *)(pQVar5 + 0x10) = 0;
    pQVar5[0x14] = (QTextStream)0x1;
    pQVar5[0x15] = (QTextStream)0x1;
    local_48 = pQVar5;
                    /* try { // try from 005dca4c to 005dca53 has its CatchHandler @ 005dd3c8 */
    QString::fromAscii((char *)&local_50,0xae6d28);
                    /* try { // try from 005dca58 to 005dca5f has its CatchHandler @ 005dd3a0 */
    QTextStream::operator<<(pQVar5,(QString *)&local_50);
    iVar2 = *(int *)local_50.tv_sec;
    *(int *)local_50.tv_sec = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free((Data *)local_50.tv_sec);
    }
    if (local_48[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_48,' ');
    }
    pQVar5 = local_48;
                    /* try { // try from 005dcaa8 to 005dcaaf has its CatchHandler @ 005dd3c8 */
    QString::fromAscii((char *)&local_68,0xae6f9c);
                    /* try { // try from 005dcab4 to 005dcabb has its CatchHandler @ 005dd3f8 */
    QTextStream::operator<<(pQVar5,(QString *)&local_68);
    iVar2 = *(int *)local_68;
    *(int *)local_68 = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_68);
    }
    if (local_48[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_48,' ');
    }
    pQVar5 = local_48;
                    /* try { // try from 005dcb04 to 005dcb0b has its CatchHandler @ 005dd3c8 */
    QString::fromAscii((char *)local_e8,0xae6e78);
                    /* try { // try from 005dcb10 to 005dcb17 has its CatchHandler @ 005dd414 */
    QTextStream::operator<<(pQVar5,(QString *)local_e8);
    iVar2 = *(int *)local_e8[0];
    *(int *)local_e8[0] = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_e8[0]);
    }
    if (local_48[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_48,' ');
    }
    piVar6 = __errno_location();
    pcVar7 = strerror(*piVar6);
    pQVar5 = local_48;
                    /* try { // try from 005dcb6c to 005dcb73 has its CatchHandler @ 005dd3c8 */
    QString::fromAscii((char *)&local_20e8,(int)pcVar7);
                    /* try { // try from 005dcb78 to 005dcb7f has its CatchHandler @ 005dd384 */
    QTextStream::operator<<(pQVar5,(QString *)&local_20e8);
    iVar2 = *(int *)local_20e8;
    *(int *)local_20e8 = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_20e8);
    }
    if (local_48[0x14] != (QTextStream)0x0) {
                    /* try { // try from 005dd180 to 005dd1b7 has its CatchHandler @ 005dd3c8 */
      QTextStream::operator<<(local_48,' ');
    }
    QDebug::~QDebug((QDebug *)&local_48);
    *param_1 = param_1 + 2;
    std::__cxx11::string::_M_construct<char*>(param_1,&DAT_00ae8eec);
    return param_1;
  }
  memset((QString *)&local_20e8,0,0x1000);
  local_68 = (Data *)&local_60;
  local_64 = (char *)0x0;
  local_60 = local_60 & 0xffffff00;
                    /* try { // try from 005dc840 to 005dc97b has its CatchHandler @ 005dd40c */
  usleep(100000);
  local_30 = *(int *)(param_2 + 0x10);
  p_Var4 = (__fd_mask *)local_e8;
  do {
    do {
      *p_Var4 = 0;
      p_Var4 = p_Var4 + 1;
    } while (&local_68 != (Data **)p_Var4);
    local_50.tv_sec = 2;
    local_50.tv_usec = 0;
    local_e8[local_30 / 0x20] =
         (Data *)(1 << (local_30 % 0x20 & 0x1fU) | (uint)local_e8[local_30 / 0x20]);
    iVar2 = select(local_30 + 1,(fd_set *)local_e8,(fd_set *)0x0,(fd_set *)0x0,&local_50);
    if (iVar2 < 0) {
                    /* try { // try from 005dcc10 to 005dcc1f has its CatchHandler @ 005dd40c */
      perror("select failed");
      pQVar5 = operator_new(0x18);
                    /* try { // try from 005dcc34 to 005dcc3b has its CatchHandler @ 005dd200 */
      local_38[0] = (QTextStream *)0x2;
      QTextStream::QTextStream(pQVar5,pQVar5 + 8,local_38);
      *(int **)(pQVar5 + 8) = &QString::shared_null;
      QString::shared_null = QString::shared_null + 1;
      *(undefined4 *)(pQVar5 + 0xc) = 1;
      *(undefined4 *)(pQVar5 + 0x10) = 2;
      pQVar5[0x14] = (QTextStream)0x1;
      pQVar5[0x15] = (QTextStream)0x1;
      local_38[0] = pQVar5;
                    /* try { // try from 005dcc88 to 005dcc8f has its CatchHandler @ 005dd348 */
      QString::fromAscii((char *)&local_3c,0xae6d28);
                    /* try { // try from 005dcc94 to 005dcc9b has its CatchHandler @ 005dd3e4 */
      QTextStream::operator<<(pQVar5,(QString *)&local_3c);
      iVar2 = *(int *)local_3c;
      *(int *)local_3c = iVar2 + -1;
      if (iVar2 == 1) {
        QString::free(local_3c);
      }
      if (local_38[0][0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_38[0],' ');
      }
      pQVar5 = local_38[0];
                    /* try { // try from 005dcce0 to 005dcce7 has its CatchHandler @ 005dd348 */
      QString::fromAscii((char *)&local_40,0xae6f9c);
                    /* try { // try from 005dccec to 005dccf3 has its CatchHandler @ 005dd35c */
      QTextStream::operator<<(pQVar5,(QString *)&local_40);
      iVar2 = *(int *)local_40;
      *(int *)local_40 = iVar2 + -1;
      if (iVar2 == 1) {
        QString::free(local_40);
      }
      if (local_38[0][0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_38[0],' ');
      }
                    /* try { // try from 005dcd2c to 005dcd57 has its CatchHandler @ 005dd348 */
      QTextStream::operator<<(local_38[0],0x203);
      if (local_38[0][0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_38[0],' ');
      }
      pQVar5 = local_38[0];
      QString::fromAscii((char *)&local_44,0xae6d44);
                    /* try { // try from 005dcd5c to 005dcd63 has its CatchHandler @ 005dd370 */
      QTextStream::operator<<(pQVar5,(QString *)&local_44);
      iVar2 = *(int *)local_44;
      *(int *)local_44 = iVar2 + -1;
      if (iVar2 == 1) {
        QString::free(local_44);
      }
      if (local_38[0][0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_38[0],' ');
      }
      piVar6 = __errno_location();
      pcVar7 = strerror(*piVar6);
      pQVar5 = local_38[0];
                    /* try { // try from 005dcdb8 to 005dcdbf has its CatchHandler @ 005dd348 */
      QString::fromAscii((char *)&local_48,(int)pcVar7);
                    /* try { // try from 005dcdc4 to 005dcdcb has its CatchHandler @ 005dd3d0 */
      QTextStream::operator<<(pQVar5,(QString *)&local_48);
      iVar2 = *(int *)local_48;
      *(int *)local_48 = iVar2 + -1;
      if (iVar2 == 1) {
        QString::free((Data *)local_48);
      }
      if (local_38[0][0x14] == (QTextStream)0x0) {
        QDebug::~QDebug((QDebug *)local_38);
      }
      else {
                    /* try { // try from 005dd0e8 to 005dd137 has its CatchHandler @ 005dd348 */
        QTextStream::operator<<(local_38[0],' ');
        QDebug::~QDebug((QDebug *)local_38);
      }
      *param_1 = param_1 + 2;
      if (local_68 == (Data *)&local_60) goto LAB_005dce24;
      goto LAB_005dc994;
    }
    if (iVar2 == 0) goto LAB_005dc980;
    local_30 = *(int *)(param_2 + 0x10);
    p_Var4 = (__fd_mask *)local_e8;
  } while ((1 << (local_30 % 0x20 & 0x1fU) & (uint)local_e8[local_30 / 0x20]) == 0);
  memset((QString *)&local_20e8,0,0x1000);
  iVar2 = local_30;
  iVar9 = 0;
  while( true ) {
    iVar8 = iVar9 + 1;
    iVar2 = read(iVar2,(void *)((int)&local_20e8 + iVar9),1);
    if ((iVar2 < 1) || (iVar8 == 0xfff)) break;
    iVar2 = *(int *)(param_2 + 0x10);
    iVar9 = iVar8;
  }
  ((QString *)&local_20e8)[iVar8] = (QString)0x0;
  local_64 = (char *)0x0;
  *local_68 = (Data)0x0;
  strlen((char *)&local_20e8);
  std::__cxx11::string::_M_replace((uint)&local_68,0,local_64,(uint)&local_20e8);
LAB_005dc980:
  *param_1 = param_1 + 2;
  if (local_68 == (Data *)&local_60) {
LAB_005dce24:
    param_1[2] = local_60;
    param_1[3] = local_5c;
    param_1[4] = local_58;
    param_1[5] = local_54;
  }
  else {
LAB_005dc994:
    *param_1 = local_68;
    param_1[2] = local_60;
  }
  param_1[1] = local_64;
  return param_1;
}



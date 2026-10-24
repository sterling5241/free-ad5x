
// ===== Serial::open @ 005d8904
// caller: ? @ 00cd5e74
// caller: ? @ 00cf5f44
// caller: ? @ 00d82dd3
// caller: ? @ 00d82df0
// caller: ? @ Entry Point
// caller: Serial::open @ 005d8b90
// caller: Serial::openUart3 @ 005dd60c
// caller: Serial::openUart4 @ 005d8d58

/* Serial::open(char const*, int) */

int Serial::open(char *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  QTextStream *pQVar3;
  Data *local_30;
  Data *local_2c;
  QTextStream *local_28 [2];
  
  while ((iVar1 = ::open(param_1,param_2 | 0x80000,0x777), iVar1 < 0 &&
         (piVar2 = __errno_location(), *piVar2 == 4))) {
    pQVar3 = operator_new(0x18);
                    /* try { // try from 005d89f4 to 005d89fb has its CatchHandler @ 005d8af0 */
    local_30 = (Data *)0x2;
    QTextStream::QTextStream(pQVar3,pQVar3 + 8,&local_30);
    *(int **)(pQVar3 + 8) = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar3 + 0xc) = 1;
    *(undefined4 *)(pQVar3 + 0x10) = 1;
    pQVar3[0x14] = (QTextStream)0x1;
    pQVar3[0x15] = (QTextStream)0x1;
    local_28[0] = pQVar3;
                    /* try { // try from 005d8a38 to 005d8a3f has its CatchHandler @ 005d8b34 */
    QString::fromAscii((char *)&local_2c,0xae6fc8);
                    /* try { // try from 005d8a44 to 005d8a4b has its CatchHandler @ 005d8b20 */
    QTextStream::operator<<(pQVar3,(QString *)&local_2c);
    iVar1 = *(int *)local_2c;
    *(int *)local_2c = iVar1 + -1;
    if (iVar1 == 1) {
      QString::free(local_2c);
    }
    if (local_28[0][0x14] != (QTextStream)0x0) {
                    /* try { // try from 005d8a84 to 005d8a9b has its CatchHandler @ 005d8b34 */
      QTextStream::operator<<(local_28[0],' ');
    }
    pQVar3 = local_28[0];
                    /* try { // try from 005d8954 to 005d895b has its CatchHandler @ 005d8b34 */
    QString::fromAscii((char *)&local_30,0xae6c54);
                    /* try { // try from 005d8960 to 005d8967 has its CatchHandler @ 005d8b04 */
    QTextStream::operator<<(pQVar3,(QString *)&local_30);
    iVar1 = *(int *)local_30;
    *(int *)local_30 = iVar1 + -1;
    if (iVar1 == 1) {
      QString::free(local_30);
    }
    if (local_28[0][0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_28[0],' ');
    }
    QDebug::~QDebug((QDebug *)local_28);
  }
  return iVar1;
}



// ===== Serial::open @ 005d8b3c
// caller: ? @ 00cd5e7c
// caller: ? @ 00cf5f80
// caller: ? @ Entry Point
// caller: Serial::reopen @ 005d91bc
// caller: SerialObject::serialOpen @ 005df188

/* Serial::open() */

int __thiscall Serial::open(Serial *this)

{
  cc_t cVar1;
  cc_t cVar2;
  cc_t cVar3;
  termios *ptVar4;
  termios *ptVar5;
  int __fd;
  int iVar6;
  termios *ptVar7;
  int *piVar8;
  char *pcVar9;
  tcflag_t tVar10;
  char *pcVar11;
  termios *ptVar12;
  tcflag_t tVar13;
  tcflag_t tVar14;
  termios *__termios_p;
  
  if (-1 < *(int *)(this + 8)) {
    puts("Serial: device already opened");
    return 0;
  }
  __fd = open(*(char **)(this + 0x14),2);
  if (__fd < 0) {
    pcVar11 = *(char **)(this + 0x14);
    piVar8 = __errno_location();
    pcVar9 = strerror(*piVar8);
    printf(s_Serial__serial___s__open_fail____00ac8ce4,pcVar11,pcVar9);
    return -*piVar8;
  }
  iVar6 = tcgetattr(__fd,(termios *)(this + 0x5c));
  __termios_p = (termios *)(this + 0x90);
  if (iVar6 < 0) {
    piVar8 = __errno_location();
    pcVar9 = strerror(*piVar8);
    pcVar11 = s_Serial__tcgetattr_error___s_00ac8d20;
  }
  else {
    ptVar4 = __termios_p;
    ptVar5 = (termios *)(this + 0x5c);
    do {
      ptVar12 = ptVar5;
      ptVar7 = ptVar4;
      tVar14 = ptVar12->c_oflag;
      tVar13 = ptVar12->c_cflag;
      tVar10 = ptVar12->c_lflag;
      ptVar7->c_iflag = ptVar12->c_iflag;
      ptVar7->c_oflag = tVar14;
      ptVar7->c_cflag = tVar13;
      ptVar7->c_lflag = tVar10;
      ptVar4 = (termios *)&ptVar7->c_line;
      ptVar5 = (termios *)&ptVar12->c_line;
    } while ((Serial *)&ptVar12->c_line != this + 0x8c);
    cVar1 = ptVar12->c_cc[0];
    cVar2 = ptVar12->c_cc[1];
    cVar3 = ptVar12->c_cc[2];
    ptVar7->c_line = ptVar12->c_line;
    ptVar7->c_cc[0] = cVar1;
    ptVar7->c_cc[1] = cVar2;
    ptVar7->c_cc[2] = cVar3;
    *(uint *)(this + 0x90) = *(uint *)(this + 0x90) & 0xfffffeff;
    *(uint *)(this + 0x94) = *(uint *)(this + 0x94) & 0xfffffffb;
    *(uint *)(this + 0x9c) = *(uint *)(this + 0x9c) & 0xfffffff5;
    this[0xa5] = (Serial)0x0;
    this[0xa6] = (Serial)0x0;
    cfsetispeed(__termios_p,0xd);
    cfsetospeed(__termios_p,0xd);
    iVar6 = tcsetattr(__fd,0x540e,__termios_p);
    if (-1 < iVar6) {
      *(int *)(this + 8) = __fd;
      return 0;
    }
    piVar8 = __errno_location();
    pcVar9 = strerror(*piVar8);
    pcVar11 = "Serial: tcsetattr error, %s\n";
  }
  printf(pcVar11,pcVar9);
  return -*piVar8;
}



// ===== Serial::openUart4 @ 005d8d3c
// caller: ? @ 00cd5e84
// caller: ? @ 00cf5fcc
// caller: Serial::openUart4 @ 005d8e34
// caller: Serial::reOpenUart4 @ 005d925c

/* Serial::openUart4() [clone .part.33] */

int __thiscall Serial::openUart4(Serial *this)

{
  int __fd;
  int *piVar1;
  termios local_48;
  
  __fd = open("/dev/ttyS4",0x882);
  if (__fd < 0) {
    piVar1 = __errno_location();
    return -*piVar1;
  }
  cfsetispeed(&local_48,0x1002);
  cfsetospeed(&local_48,0x1002);
  local_48.c_iflag = local_48.c_iflag & 0xfffffa3f;
  local_48.c_lflag = local_48.c_lflag & 0xfffffff4;
  local_48.c_oflag = local_48.c_oflag & 0xfffffffe;
  local_48.c_cflag = local_48.c_cflag & 0xfffffe8f | 0x8b0;
  ::tcflush(*(int *)(this + 0x10),2);
  tcsetattr(__fd,0x540e,&local_48);
  *(int *)(this + 0x10) = __fd;
  return 0;
}



// ===== Serial::openUart4 @ 005d8e20
// caller: ? @ 00cd5e8c
// caller: ? @ 00cf5ff8
// caller: ? @ Entry Point
// caller: SerialObject::serialNo4Open @ 005df068
// caller: SerialObject::serialOpen @ 005df190

/* Serial::openUart4() */

undefined4 __thiscall Serial::openUart4(Serial *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) < 0) {
    uVar1 = openUart4(this);
    return uVar1;
  }
  return 0;
}



// ===== Serial::recvFromUart7 @ 005d94ec
// caller: ? @ 00cd5edc
// caller: ? @ 00cf6174
// caller: ? @ 00d82e5f
// caller: ? @ 00d82e76
// caller: ? @ 00d82eb1
// caller: ? @ 00d82ef2
// caller: ? @ 00d82f34
// caller: ? @ Entry Point
// caller: SerialObject::sendCmdToUart7 @ 005e98ec

/* WARNING: Removing unreachable block (ram,0x005d9598) */
/* Serial::recvFromUart7(std::__cxx11::string&) */

int __thiscall Serial::recvFromUart7(Serial *this,string *param_1)

{
  Data *pDVar1;
  QTextStream *pQVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  __fd_mask *p_Var7;
  __fd_mask local_148 [32];
  char acStack_c8 [128];
  timeval local_48;
  Data *local_40;
  Data *local_3c;
  Data *local_38;
  Data *local_34;
  QTextStream *local_30 [2];
  
  memset(acStack_c8,0,0x80);
  *(undefined4 *)(param_1 + 4) = 0;
  **(undefined1 **)param_1 = 0;
  iVar6 = 0;
  std::__cxx11::string::_M_replace((uint)param_1,0,*(char **)(param_1 + 4),0xae6cf8);
LAB_005d9578:
  p_Var7 = local_148;
LAB_005d957c:
  do {
    *p_Var7 = 0;
    p_Var7 = p_Var7 + 1;
  } while ((__fd_mask *)acStack_c8 != p_Var7);
  iVar5 = *(int *)(this + 8);
  local_48.tv_sec = 1;
  local_48.tv_usec = 0;
  p_Var7 = local_148 + iVar5 / 0x20;
  *p_Var7 = 1 << (iVar5 % 0x20 & 0x1fU) | *p_Var7;
  iVar5 = select(iVar5 + 1,(fd_set *)local_148,(fd_set *)0x0,(fd_set *)0x0,&local_48);
  if (iVar5 < 0) {
    perror("select failed");
    pQVar2 = operator_new(0x18);
                    /* try { // try from 005d9814 to 005d981b has its CatchHandler @ 005da0f4 */
    local_40 = (Data *)0x2;
    QTextStream::QTextStream(pQVar2,pQVar2 + 8,(QString *)&local_40);
    *(int **)(pQVar2 + 8) = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar2 + 0xc) = 1;
    *(undefined4 *)(pQVar2 + 0x10) = 2;
    pQVar2[0x14] = (QTextStream)0x1;
    pQVar2[0x15] = (QTextStream)0x1;
    local_30[0] = pQVar2;
                    /* try { // try from 005d986c to 005d9873 has its CatchHandler @ 005da0fc */
    QString::fromAscii((char *)&local_34,0xae6d28);
                    /* try { // try from 005d9878 to 005d987f has its CatchHandler @ 005da0ec */
    QTextStream::operator<<(pQVar2,(QString *)&local_34);
    iVar6 = *(int *)local_34;
    *(int *)local_34 = iVar6 + -1;
    if (iVar6 == 1) {
      QString::free(local_34);
    }
    if (local_30[0][0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_30[0],' ');
    }
    pQVar2 = local_30[0];
                    /* try { // try from 005d98c8 to 005d98cf has its CatchHandler @ 005da0fc */
    QString::fromAscii((char *)&local_38,0xae6fd8);
                    /* try { // try from 005d98d4 to 005d98db has its CatchHandler @ 005da020 */
    QTextStream::operator<<(pQVar2,(QString *)&local_38);
    iVar6 = *(int *)local_38;
    *(int *)local_38 = iVar6 + -1;
    if (iVar6 == 1) {
      QString::free(local_38);
    }
    if (local_30[0][0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_30[0],' ');
    }
                    /* try { // try from 005d9914 to 005d9943 has its CatchHandler @ 005da0fc */
    QTextStream::operator<<(local_30[0],0xb3);
    if (local_30[0][0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_30[0],' ');
    }
    pQVar2 = local_30[0];
    QString::fromAscii((char *)&local_3c,0xae6d44);
                    /* try { // try from 005d9948 to 005d994f has its CatchHandler @ 005da104 */
    QTextStream::operator<<(pQVar2,(QString *)&local_3c);
    iVar6 = *(int *)local_3c;
    *(int *)local_3c = iVar6 + -1;
    if (iVar6 == 1) {
      QString::free(local_3c);
    }
    if (local_30[0][0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_30[0],' ');
    }
    piVar3 = __errno_location();
    pcVar4 = strerror(*piVar3);
    pQVar2 = local_30[0];
                    /* try { // try from 005d99a4 to 005d99ab has its CatchHandler @ 005da0fc */
    QString::fromAscii((char *)&local_40,(int)pcVar4);
                    /* try { // try from 005d99b0 to 005d99b7 has its CatchHandler @ 005da0e4 */
    QTextStream::operator<<(pQVar2,(QString *)&local_40);
    iVar6 = *(int *)local_40;
    *(int *)local_40 = iVar6 + -1;
    if (iVar6 == 1) {
      QString::free(local_40);
    }
    if (local_30[0][0x14] != (QTextStream)0x0) {
                    /* try { // try from 005d9e98 to 005d9edf has its CatchHandler @ 005da0fc */
      QTextStream::operator<<(local_30[0],' ');
    }
LAB_005d99f4:
    QDebug::~QDebug((QDebug *)local_30);
    return -1;
  }
  if (iVar5 == 0) {
    pQVar2 = operator_new(0x18);
                    /* try { // try from 005d9c5c to 005d9c63 has its CatchHandler @ 005da034 */
    local_40 = (Data *)0x2;
    QTextStream::QTextStream(pQVar2,pQVar2 + 8,(QString *)&local_40);
    *(int **)(pQVar2 + 8) = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar2 + 0xc) = 1;
    *(undefined4 *)(pQVar2 + 0x10) = 2;
    pQVar2[0x14] = (QTextStream)0x1;
    pQVar2[0x15] = (QTextStream)0x1;
    local_34 = (Data *)pQVar2;
                    /* try { // try from 005d9cb4 to 005d9cbb has its CatchHandler @ 005da03c */
    QString::fromAscii((char *)&local_38,0xae6d28);
                    /* try { // try from 005d9cc0 to 005d9cc7 has its CatchHandler @ 005da094 */
    QTextStream::operator<<(pQVar2,(QString *)&local_38);
    iVar6 = *(int *)local_38;
    *(int *)local_38 = iVar6 + -1;
    if (iVar6 == 1) {
      QString::free(local_38);
    }
    if (*(QTextStream *)(local_34 + 0x14) != (QTextStream)0x0) {
      QTextStream::operator<<((QTextStream *)local_34,' ');
    }
    pDVar1 = local_34;
                    /* try { // try from 005d9d10 to 005d9d17 has its CatchHandler @ 005da03c */
    QString::fromAscii((char *)&local_3c,0xae6fd8);
                    /* try { // try from 005d9d1c to 005d9d23 has its CatchHandler @ 005da050 */
    QTextStream::operator<<((QTextStream *)pDVar1,(QString *)&local_3c);
    iVar6 = *(int *)local_3c;
    *(int *)local_3c = iVar6 + -1;
    if (iVar6 == 1) {
      QString::free(local_3c);
    }
    if (*(QTextStream *)(local_34 + 0x14) != (QTextStream)0x0) {
      QTextStream::operator<<((QTextStream *)local_34,' ');
    }
                    /* try { // try from 005d9d5c to 005d9d87 has its CatchHandler @ 005da03c */
    QTextStream::operator<<((QTextStream *)local_34,0xb6);
    if (*(QTextStream *)(local_34 + 0x14) != (QTextStream)0x0) {
      QTextStream::operator<<((QTextStream *)local_34,' ');
    }
    pDVar1 = local_34;
    QString::fromAscii((char *)&local_40,0xae6d58);
                    /* try { // try from 005d9d8c to 005d9d93 has its CatchHandler @ 005da0a8 */
    QTextStream::operator<<((QTextStream *)pDVar1,(QString *)&local_40);
    iVar6 = *(int *)local_40;
    *(int *)local_40 = iVar6 + -1;
    if (iVar6 == 1) {
      QString::free(local_40);
    }
    if (*(QTextStream *)(local_34 + 0x14) == (QTextStream)0x0) {
      QDebug::~QDebug((QDebug *)&local_34);
    }
    else {
                    /* try { // try from 005d9e0c to 005d9e4f has its CatchHandler @ 005da03c */
      QTextStream::operator<<((QTextStream *)local_34,' ');
      QDebug::~QDebug((QDebug *)&local_34);
    }
    return -1;
  }
  iVar5 = read(*(int *)(this + 8),acStack_c8 + iVar6,0x80 - iVar6);
  iVar6 = iVar6 + iVar5;
  if (iVar5 < 0) {
    pQVar2 = operator_new(0x18);
                    /* try { // try from 005d9a50 to 005d9a57 has its CatchHandler @ 005d9fd0 */
    local_40 = (Data *)0x2;
    QTextStream::QTextStream(pQVar2,pQVar2 + 8,(QString *)&local_40);
    *(int **)(pQVar2 + 8) = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar2 + 0xc) = 1;
    *(undefined4 *)(pQVar2 + 0x10) = 2;
    pQVar2[0x14] = (QTextStream)0x1;
    pQVar2[0x15] = (QTextStream)0x1;
    local_30[0] = pQVar2;
                    /* try { // try from 005d9aa8 to 005d9aaf has its CatchHandler @ 005d9fe4 */
    QString::fromAscii((char *)&local_34,0xae6d28);
                    /* try { // try from 005d9ab4 to 005d9abb has its CatchHandler @ 005d9ff8 */
    QTextStream::operator<<(pQVar2,(QString *)&local_34);
    iVar6 = *(int *)local_34;
    *(int *)local_34 = iVar6 + -1;
    if (iVar6 == 1) {
      QString::free(local_34);
    }
    if (local_30[0][0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_30[0],' ');
    }
    pQVar2 = local_30[0];
                    /* try { // try from 005d9b04 to 005d9b0b has its CatchHandler @ 005d9fe4 */
    QString::fromAscii((char *)&local_38,0xae6fd8);
                    /* try { // try from 005d9b10 to 005d9b17 has its CatchHandler @ 005da08c */
    QTextStream::operator<<(pQVar2,(QString *)&local_38);
    iVar6 = *(int *)local_38;
    *(int *)local_38 = iVar6 + -1;
    if (iVar6 == 1) {
      QString::free(local_38);
    }
    if (local_30[0][0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_30[0],' ');
    }
                    /* try { // try from 005d9b50 to 005d9b7f has its CatchHandler @ 005d9fe4 */
    QTextStream::operator<<(local_30[0],0xbd);
    if (local_30[0][0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_30[0],' ');
    }
    pQVar2 = local_30[0];
    QString::fromAscii((char *)&local_3c,0xae6d70);
                    /* try { // try from 005d9b84 to 005d9b8b has its CatchHandler @ 005da064 */
    QTextStream::operator<<(pQVar2,(QString *)&local_3c);
    iVar6 = *(int *)local_3c;
    *(int *)local_3c = iVar6 + -1;
    if (iVar6 == 1) {
      QString::free(local_3c);
    }
    if (local_30[0][0x14] != (QTextStream)0x0) {
                    /* try { // try from 005d9e58 to 005d9e8f has its CatchHandler @ 005d9fe4 */
      QTextStream::operator<<(local_30[0],' ');
    }
    piVar3 = __errno_location();
    pcVar4 = strerror(*piVar3);
    pQVar2 = local_30[0];
                    /* try { // try from 005d9be0 to 005d9be7 has its CatchHandler @ 005d9fe4 */
    QString::fromAscii((char *)&local_40,(int)pcVar4);
                    /* try { // try from 005d9bec to 005d9bf3 has its CatchHandler @ 005da00c */
    QTextStream::operator<<(pQVar2,(QString *)&local_40);
    iVar6 = *(int *)local_40;
    *(int *)local_40 = iVar6 + -1;
    if (iVar6 == 1) {
      QString::free(local_40);
    }
    if (local_30[0][0x14] != (QTextStream)0x0) {
                    /* try { // try from 005d9c2c to 005d9c33 has its CatchHandler @ 005d9fe4 */
      QTextStream::operator<<(local_30[0],' ');
    }
    goto LAB_005d99f4;
  }
  if (iVar6 < 0xd) {
    p_Var7 = local_148;
    if (iVar5 == 0) {
      return -1;
    }
    goto LAB_005d957c;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  **(undefined1 **)param_1 = 0;
  strlen(acStack_c8);
  std::__cxx11::string::_M_replace((uint)param_1,0,*(char **)(param_1 + 4),(uint)acStack_c8);
  local_3c = (Data *)&QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005d96a0 to 005d96a7 has its CatchHandler @ 005da078 */
  QString::fromAscii((char *)&local_40,*(int *)param_1);
  local_38 = local_40;
  *(int *)local_40 = *(int *)local_40 + 1;
  iVar5 = *(int *)local_40;
  *(int *)local_40 = iVar5 + -1;
  if (iVar5 == 1) {
    QString::free(local_40);
  }
  iVar5 = *(int *)local_3c;
  *(int *)local_3c = iVar5 + -1;
  if (iVar5 == 1) {
    QString::free(local_3c);
  }
                    /* try { // try from 005d971c to 005d9723 has its CatchHandler @ 005da0d8 */
  local_40 = (Data *)QString::fromAscii_helper("ok",-1);
                    /* try { // try from 005d9738 to 005d973f has its CatchHandler @ 005da0bc */
  iVar5 = QString::indexOf(&local_38,&local_40,0,1);
  p_Var7 = local_148;
  if (iVar5 == -1) {
    p_Var7 = (__fd_mask *)0x0;
  }
  iVar5 = *(int *)local_40;
  *(int *)local_40 = iVar5 + -1;
  if (iVar5 == 1) {
    QString::free(local_40);
  }
  if (p_Var7 == (__fd_mask *)0x0) {
    if (iVar6 < 0x80) {
      iVar5 = *(int *)local_38;
      *(int *)local_38 = iVar5 + -1;
      if (iVar5 == 1) {
        QString::free(local_38);
        p_Var7 = local_148;
        goto LAB_005d957c;
      }
      goto LAB_005d9578;
    }
    iVar6 = -1;
  }
  iVar5 = *(int *)local_38;
  *(int *)local_38 = iVar5 + -1;
  if (iVar5 == 1) {
    QString::free(local_38);
    return iVar6;
  }
  return iVar6;
}



// ===== Serial::openUart3 @ 005dd428
// caller: ? @ 00cd5f24
// caller: ? @ 00cf63d8
// caller: ? @ 00d832d9
// caller: ? @ 00d8330d
// caller: ? @ 00d83312
// caller: ? @ 00d83341
// caller: ? @ 00d83383
// caller: ? @ Entry Point
// caller: Serial::reOpenUart3 @ 005ddc1c

/* Serial::openUart3() */

int __thiscall Serial::openUart3(Serial *this)

{
  QTextStream QVar1;
  QTextStream *pQVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  QDebug *this_00;
  undefined1 local_58 [52];
  Data *local_24;
  Data *local_20;
  QTextStream *local_1c;
  QTextStream *local_18 [2];
  
  if (-1 < *(int *)(this + 0xc)) {
    pQVar2 = operator_new(0x18);
                    /* try { // try from 005dd468 to 005dd46f has its CatchHandler @ 005ddbbc */
    local_58._0_4_ = (Data *)0x2;
    QTextStream::QTextStream(pQVar2,pQVar2 + 8,(QString *)local_58);
    *(int **)(pQVar2 + 8) = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar2 + 0xc) = 1;
    *(undefined4 *)(pQVar2 + 0x10) = 0;
    pQVar2[0x14] = (QTextStream)0x1;
    pQVar2[0x15] = (QTextStream)0x1;
    local_1c = pQVar2;
                    /* try { // try from 005dd4bc to 005dd4c3 has its CatchHandler @ 005ddbdc */
    QString::fromAscii((char *)&local_20,0xae6d28);
                    /* try { // try from 005dd4c8 to 005dd4cf has its CatchHandler @ 005ddbd4 */
    QTextStream::operator<<(pQVar2,(QString *)&local_20);
    iVar5 = *(int *)local_20;
    *(int *)local_20 = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free(local_20);
      QVar1 = local_1c[0x14];
    }
    else {
      QVar1 = local_1c[0x14];
    }
    if (QVar1 != (QTextStream)0x0) {
      QTextStream::operator<<(local_1c,' ');
    }
    pQVar2 = local_1c;
                    /* try { // try from 005dd514 to 005dd51b has its CatchHandler @ 005ddbdc */
    QString::fromAscii((char *)&local_24,0xae6f90);
                    /* try { // try from 005dd520 to 005dd527 has its CatchHandler @ 005ddbcc */
    QTextStream::operator<<(pQVar2,(QString *)&local_24);
    iVar5 = *(int *)local_24;
    *(int *)local_24 = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free(local_24);
      QVar1 = local_1c[0x14];
    }
    else {
      QVar1 = local_1c[0x14];
    }
    if (QVar1 != (QTextStream)0x0) {
      QTextStream::operator<<(local_1c,' ');
    }
    pQVar2 = local_1c;
                    /* try { // try from 005dd568 to 005dd56f has its CatchHandler @ 005ddbdc */
    QString::fromAscii((char *)local_58,0xae6f00);
                    /* try { // try from 005dd574 to 005dd57b has its CatchHandler @ 005ddbc4 */
    QTextStream::operator<<(pQVar2,(QString *)local_58);
    iVar5 = *(int *)local_58._0_4_;
    *(int *)local_58._0_4_ = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free((Data *)local_58._0_4_);
      QVar1 = local_1c[0x14];
    }
    else {
      QVar1 = local_1c[0x14];
    }
    if (QVar1 != (QTextStream)0x0) {
                    /* try { // try from 005dd5d4 to 005dd5fb has its CatchHandler @ 005ddbdc */
      QTextStream::operator<<(local_1c,' ');
    }
    QDebug::~QDebug((QDebug *)&local_1c);
    return 0;
  }
  iVar5 = open("/dev/ttyS3",0x882);
  if (iVar5 < 0) {
    pQVar2 = operator_new(0x18);
                    /* try { // try from 005dd8e0 to 005dd8e7 has its CatchHandler @ 005ddb20 */
    local_58._0_4_ = (Data *)0x2;
    QTextStream::QTextStream(pQVar2,pQVar2 + 8,(QString *)local_58);
    *(int **)(pQVar2 + 8) = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar2 + 0xc) = 1;
    *(undefined4 *)(pQVar2 + 0x10) = 0;
    pQVar2[0x14] = (QTextStream)0x1;
    pQVar2[0x15] = (QTextStream)0x1;
    local_1c = pQVar2;
                    /* try { // try from 005dd934 to 005dd93b has its CatchHandler @ 005ddb18 */
    QString::fromAscii((char *)&local_20,0xae6d28);
                    /* try { // try from 005dd940 to 005dd947 has its CatchHandler @ 005ddafc */
    QTextStream::operator<<(pQVar2,(QString *)&local_20);
    iVar5 = *(int *)local_20;
    *(int *)local_20 = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free(local_20);
    }
    if (local_1c[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_1c,' ');
    }
    pQVar2 = local_1c;
                    /* try { // try from 005dd990 to 005dd997 has its CatchHandler @ 005ddb18 */
    QString::fromAscii((char *)&local_24,0xae6f90);
                    /* try { // try from 005dd99c to 005dd9a3 has its CatchHandler @ 005ddb34 */
    QTextStream::operator<<(pQVar2,(QString *)&local_24);
    iVar5 = *(int *)local_24;
    *(int *)local_24 = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free(local_24);
    }
    if (local_1c[0x14] != (QTextStream)0x0) {
                    /* try { // try from 005ddaac to 005ddac3 has its CatchHandler @ 005ddb18 */
      QTextStream::operator<<(local_1c,' ');
    }
    pQVar2 = local_1c;
                    /* try { // try from 005dd9e8 to 005dd9ef has its CatchHandler @ 005ddb18 */
    QString::fromAscii((char *)local_58,0xae6f34);
                    /* try { // try from 005dd9f4 to 005dd9fb has its CatchHandler @ 005ddb48 */
    QTextStream::operator<<(pQVar2,(QString *)local_58);
    iVar5 = *(int *)local_58._0_4_;
    *(int *)local_58._0_4_ = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free((Data *)local_58._0_4_);
    }
    if (local_1c[0x14] == (QTextStream)0x0) {
      this_00 = (QDebug *)&local_1c;
    }
    else {
                    /* try { // try from 005dda3c to 005dda43 has its CatchHandler @ 005ddb18 */
      QTextStream::operator<<(local_1c,' ');
      this_00 = (QDebug *)&local_1c;
    }
  }
  else {
    cfsetispeed((termios *)local_58,0xd);
    cfsetospeed((termios *)local_58,0xd);
    local_58._12_4_ = local_58._12_4_ & 0xffffffe4;
    local_58._4_4_ = local_58._4_4_ & 0xfffffffe;
    local_58._0_4_ = local_58._0_4_ & 0xfffffaff;
    local_58._8_4_ = local_58._8_4_ & 0x7ffffe8f | 0x8b0;
    ::tcflush(*(int *)(this + 0xc),2);
    iVar3 = tcsetattr(iVar5,0x540e,(termios *)local_58);
    if (-1 < iVar3) {
      *(int *)(this + 0xc) = iVar5;
      return 0;
    }
    pQVar2 = operator_new(0x18);
                    /* try { // try from 005dd73c to 005dd743 has its CatchHandler @ 005ddba8 */
    local_24 = (Data *)0x2;
    QTextStream::QTextStream(pQVar2,pQVar2 + 8,(QString *)&local_24);
    *(int **)(pQVar2 + 8) = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar2 + 0xc) = 1;
    *(undefined4 *)(pQVar2 + 0x10) = 0;
    pQVar2[0x14] = (QTextStream)0x1;
    pQVar2[0x15] = (QTextStream)0x1;
    local_18[0] = pQVar2;
                    /* try { // try from 005dd78c to 005dd793 has its CatchHandler @ 005ddba0 */
    QString::fromAscii((char *)&local_1c,0xae6d28);
                    /* try { // try from 005dd798 to 005dd79f has its CatchHandler @ 005ddb8c */
    QTextStream::operator<<(pQVar2,(QString *)&local_1c);
    iVar5 = *(int *)local_1c;
    *(int *)local_1c = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free((Data *)local_1c);
    }
    if (local_18[0][0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_18[0],' ');
    }
    pQVar2 = local_18[0];
                    /* try { // try from 005dd7e8 to 005dd7ef has its CatchHandler @ 005ddba0 */
    QString::fromAscii((char *)&local_20,0xae6f90);
                    /* try { // try from 005dd7f4 to 005dd7fb has its CatchHandler @ 005ddb5c */
    QTextStream::operator<<(pQVar2,(QString *)&local_20);
    iVar5 = *(int *)local_20;
    *(int *)local_20 = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free(local_20);
    }
    if (local_18[0][0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_18[0],' ');
    }
    pQVar2 = local_18[0];
                    /* try { // try from 005dd840 to 005dd847 has its CatchHandler @ 005ddba0 */
    QString::fromAscii((char *)&local_24,0xae6f5c);
                    /* try { // try from 005dd84c to 005dd853 has its CatchHandler @ 005ddb78 */
    QTextStream::operator<<(pQVar2,(QString *)&local_24);
    iVar5 = *(int *)local_24;
    *(int *)local_24 = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free(local_24);
    }
    if (local_18[0][0x14] == (QTextStream)0x0) {
      this_00 = (QDebug *)local_18;
    }
    else {
                    /* try { // try from 005dda4c to 005dda73 has its CatchHandler @ 005ddba0 */
      QTextStream::operator<<(local_18[0],' ');
      this_00 = (QDebug *)local_18;
    }
  }
  QDebug::~QDebug(this_00);
  piVar4 = __errno_location();
  return -*piVar4;
}



// ===== SerialObject::checkLevelPinStatus @ 005eff70
// caller: ? @ 00cd643c
// caller: ? @ 00cf81fc
// caller: ? @ 00d863c3
// caller: ? @ 00d863ce
// caller: ? @ 00d86410
// caller: ? @ Entry Point
// caller: GuiderLevelPrint::doLevel @ 006db398
// caller: GuiderLevelPrint::doLevel @ 006dba80
// caller: Print::checkZ @ 00688724
// caller: Print::checkZ @ 00688e70
// caller: Print::doPreparation @ 0068adfc
// caller: Print::doPreparation @ 0068b8d8
// caller: Settings::doLevel @ 00576310
// caller: Settings::doLevel @ 00576abc
// caller: WeightAdjust::on_H1_clicked @ 006c8598

/* SerialObject::checkLevelPinStatus() */

undefined4 __thiscall SerialObject::checkLevelPinStatus(SerialObject *this)

{
  uint uVar1;
  QTextStream *pQVar2;
  int iVar3;
  int iVar4;
  Data *local_50;
  Data *local_4c;
  Data *local_48;
  Data *local_44;
  QTextStream *local_40;
  Data *local_3c;
  Data *local_38 [2];
  undefined **local_30;
  char *local_2c;
  
  local_30 = &PTR_s_Internal_Server_Error_00af0000;
  iVar4 = 10;
  local_2c = "H7";
  while( true ) {
    local_4c = (Data *)QString::fromAscii_helper((char *)(local_30 + -0x1a2a),-1);
                    /* try { // try from 005f0188 to 005f018f has its CatchHandler @ 005f0600 */
    sendCmdToUart7(&local_50,this,&local_4c);
    iVar3 = *(int *)local_50;
    *(int *)local_50 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_50);
    }
    iVar3 = *(int *)local_4c;
    *(int *)local_4c = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_4c);
    }
    local_50 = (Data *)QString::fromAscii_helper(local_2c,-1);
                    /* try { // try from 005f01f8 to 005f01ff has its CatchHandler @ 005f05ec */
    sendCmdToUart7(local_38,this,&local_50);
    iVar3 = *(int *)local_50;
    *(int *)local_50 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_50);
    }
                    /* try { // try from 005f022c to 005f023f has its CatchHandler @ 005f05e4 */
    QChar::QChar((QChar *)&local_48,' ');
    QString::QString((QString *)&local_3c,(uint)local_48 & 0xffff);
                    /* try { // try from 005f0260 to 005f0267 has its CatchHandler @ 005f05d0 */
    local_50 = (Data *)0x0;
    QString::section(&local_4c,local_38,&local_3c,4,4,&local_50);
    iVar3 = *(int *)local_3c;
    *(int *)local_3c = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_3c);
    }
                    /* try { // try from 005f0294 to 005f029b has its CatchHandler @ 005f05c8 */
    QString::trimmed();
                    /* try { // try from 005f02a4 to 005f02ab has its CatchHandler @ 005f05ac */
    uVar1 = QString::toInt((bool *)&local_50,0);
    iVar3 = *(int *)local_50;
    *(int *)local_50 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_50);
    }
    iVar3 = *(int *)local_4c;
    *(int *)local_4c = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_4c);
    }
                    /* try { // try from 005f0300 to 005f0307 has its CatchHandler @ 005f05e4 */
    pQVar2 = operator_new(0x18);
                    /* try { // try from 005f031c to 005f0323 has its CatchHandler @ 005f0598 */
    local_40 = (QTextStream *)0x2;
    QTextStream::QTextStream(pQVar2,pQVar2 + 8,&local_40);
    *(int **)(pQVar2 + 8) = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar2 + 0xc) = 1;
    *(undefined4 *)(pQVar2 + 0x10) = 2;
    pQVar2[0x14] = (QTextStream)0x1;
    pQVar2[0x15] = (QTextStream)0x1;
    local_40 = pQVar2;
                    /* try { // try from 005f0364 to 005f036b has its CatchHandler @ 005f0590 */
    QString::fromAscii((char *)&local_44,0xae8970);
                    /* try { // try from 005f0370 to 005f0377 has its CatchHandler @ 005f057c */
    QTextStream::operator<<(pQVar2,(QString *)&local_44);
    iVar3 = *(int *)local_44;
    *(int *)local_44 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_44);
    }
    if (local_40[0x14] != (QTextStream)0x0) {
                    /* try { // try from 005f03b0 to 005f0407 has its CatchHandler @ 005f0590 */
      QTextStream::operator<<(local_40,' ');
    }
    pQVar2 = local_40;
                    /* try { // try from 005effdc to 005effe3 has its CatchHandler @ 005f0590 */
    QString::fromAscii((char *)&local_48,0xaead08);
                    /* try { // try from 005effe8 to 005effef has its CatchHandler @ 005f0568 */
    QTextStream::operator<<(pQVar2,(QString *)&local_48);
    iVar3 = *(int *)local_48;
    *(int *)local_48 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_48);
    }
    if (local_40[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_40,' ');
    }
    pQVar2 = local_40;
                    /* try { // try from 005f0030 to 005f0037 has its CatchHandler @ 005f0590 */
    QString::fromAscii((char *)&local_4c,0xae9760);
                    /* try { // try from 005f003c to 005f0043 has its CatchHandler @ 005f0554 */
    QTextStream::operator<<(pQVar2,(QString *)&local_4c);
    iVar3 = *(int *)local_4c;
    *(int *)local_4c = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_4c);
    }
    if (local_40[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_40,' ');
    }
                    /* try { // try from 005f007c to 005f00bf has its CatchHandler @ 005f0590 */
    pQVar2 = (QTextStream *)QTextStream::operator<<(local_40,'\"');
    pQVar2 = (QTextStream *)QTextStream::operator<<(pQVar2,(QString *)local_38);
    QTextStream::operator<<(pQVar2,'\"');
    if (local_40[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_40,' ');
    }
    pQVar2 = local_40;
    QString::fromAscii((char *)&local_50,0xae9764);
                    /* try { // try from 005f00c4 to 005f00cb has its CatchHandler @ 005f0530 */
    QTextStream::operator<<(pQVar2,(QString *)&local_50);
    iVar3 = *(int *)local_50;
    *(int *)local_50 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_50);
    }
    if (local_40[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_40,' ');
    }
                    /* try { // try from 005f0104 to 005f010b has its CatchHandler @ 005f0590 */
    QTextStream::operator<<(local_40,uVar1);
    if (local_40[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_40,' ');
    }
    QDebug::~QDebug((QDebug *)&local_40);
    if ((int)(((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f)) < 0x1f) break;
    iVar3 = *(int *)local_38[0];
    *(int *)local_38[0] = iVar3 + -1;
    if (iVar3 == 1) {
      iVar4 = iVar4 + -1;
      QString::free(local_38[0]);
      if (iVar4 == 0) {
        return 0;
      }
    }
    else {
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) {
        return 0;
      }
    }
  }
  QString::~QString((QString *)local_38);
  return 1;
}



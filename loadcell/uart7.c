
// ===== SerialObject::serialOpen @ 005df078
// caller: ? @ 00cd5fec
// caller: ? @ 00cf6878
// caller: ? @ 00d835cb
// caller: ? @ 00d835ed
// caller: ? @ 00d835f2
// caller: ? @ Entry Point
// caller: SerialObject::getInstance @ 005e68b4

/* SerialObject::serialOpen(QString const&) */

Serial * SerialObject::serialOpen(QString *param_1)

{
  Serial *this;
  int iVar1;
  int *local_60 [2];
  int aiStack_58 [4];
  undefined1 *local_48 [2];
  undefined1 auStack_40 [16];
  undefined1 *local_30 [2];
  undefined1 auStack_28 [16];
  
  QString::toAscii();
                    /* try { // try from 005df0bc to 005df0c3 has its CatchHandler @ 005df1cc */
  local_30[0] = auStack_28;
  std::__cxx11::string::_M_construct<char*>(local_30,local_60[0][3],local_60[0][3] + local_60[0][2])
  ;
  iVar1 = *local_60[0];
  *local_60[0] = iVar1 + -1;
  if (iVar1 == 1) {
    qFree(local_60[0]);
  }
  local_48[0] = auStack_40;
                    /* try { // try from 005df104 to 005df10b has its CatchHandler @ 005df244 */
  std::__cxx11::string::_M_construct<char*>(local_48,&DAT_00ae6ff4,&DAT_00ae6ff5);
  local_60[0] = aiStack_58;
                    /* try { // try from 005df124 to 005df12b has its CatchHandler @ 005df23c */
  std::__cxx11::string::_M_construct<char*>(local_60,"\n","");
                    /* try { // try from 005df12c to 005df133 has its CatchHandler @ 005df234 */
  this = operator_new(0xe0);
                    /* try { // try from 005df144 to 005df14b has its CatchHandler @ 005df1e0 */
  Serial::Serial(this,(string *)local_30,(string *)local_48,(string *)local_60);
  if (local_60[0] != aiStack_58) {
    operator_delete(local_60[0]);
  }
  if (local_48[0] != auStack_40) {
    operator_delete(local_48[0]);
  }
  if (local_30[0] != auStack_28) {
    operator_delete(local_30[0]);
  }
  Serial::open(this);
  Serial::openUart4(this);
  return this;
}



// ===== SerialObject::sendCmdToUart7 @ 005e97d4
// caller: ? @ 00cd6344
// caller: ? @ 00cf7b30
// caller: ? @ 00d85959
// caller: ? @ 00d85a12
// caller: ? @ Entry Point
// caller: SerialObject::checkLevelPinStatus @ 005f0188
// caller: SerialObject::checkLevelPinStatus @ 005f01f8
// caller: WeightAdjust::getWeightValue @ 006c9ec0
// caller: WeightAdjust::on_H2S500_clicked @ 006c8784
// caller: WeightAdjust::on_H3S100_clicked @ 006c8954
// caller: WeightAdjust::on_H3S200_clicked @ 006c886c

/* SerialObject::sendCmdToUart7(QString) */

char * SerialObject::sendCmdToUart7(char *param_1,int param_2,QString *param_3)

{
  QTextStream *pQVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Serial *this;
  Data *local_90 [2];
  Data local_88 [16];
  undefined1 *local_78 [2];
  undefined1 auStack_70 [16];
  QTextStream *local_60;
  Data *local_5c;
  QTextStream *local_58;
  Data *local_54;
  Data *local_50;
  Data *local_4c;
  Data *local_48;
  undefined4 local_44;
  int *local_40;
  char *local_38;
  undefined **local_34;
  int local_30;
  
  local_30 = param_2 + 0x20;
  QMutex::lock();
  Serial::tcflush(*(Serial **)(param_2 + 0x84));
  local_78[0] = auStack_70;
  std::__cxx11::string::_M_construct<char*>(local_78,&DAT_00ae8eec);
  local_38 = "send:";
  iVar4 = 5;
  local_34 = &PTR_s_Internal_Server_Error_00af0000;
  do {
                    /* try { // try from 005e9874 to 005e987b has its CatchHandler @ 005e9eec */
    this = *(Serial **)(param_2 + 0x84);
    QString::toAscii();
                    /* try { // try from 005e9898 to 005e989f has its CatchHandler @ 005ea008 */
    local_90[0] = local_88;
    std::__cxx11::string::_M_construct<char*>(local_90,local_40[3],local_40[3] + local_40[2]);
    iVar2 = *local_40;
    *local_40 = iVar2 + -1;
    if (iVar2 == 1) {
      qFree(local_40);
    }
                    /* try { // try from 005e98cc to 005e98d3 has its CatchHandler @ 005e9fec */
    Serial::send(this,(string *)local_90);
    if (local_90[0] != local_88) {
      operator_delete(local_90[0]);
    }
                    /* try { // try from 005e98ec to 005e98ff has its CatchHandler @ 005e9eec */
    iVar2 = Serial::recvFromUart7(*(Serial **)(param_2 + 0x84),(string *)local_78);
    pQVar1 = operator_new(0x18);
                    /* try { // try from 005e9914 to 005e991b has its CatchHandler @ 005e9fe4 */
    local_44 = 2;
    QTextStream::QTextStream(pQVar1,pQVar1 + 8,&local_44);
    *(int **)(pQVar1 + 8) = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar1 + 0xc) = 1;
    *(undefined4 *)(pQVar1 + 0x10) = 1;
    pQVar1[0x14] = (QTextStream)0x1;
    pQVar1[0x15] = (QTextStream)0x1;
    local_60 = pQVar1;
                    /* try { // try from 005e9958 to 005e995f has its CatchHandler @ 005e9fdc */
    QString::fromAscii((char *)&local_48,0xae8970);
                    /* try { // try from 005e9964 to 005e996b has its CatchHandler @ 005e9fc8 */
    QTextStream::operator<<(pQVar1,(QString *)&local_48);
    iVar3 = *(int *)local_48;
    *(int *)local_48 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_48);
    }
    if (local_60[0x14] != (QTextStream)0x0) {
                    /* try { // try from 005e9d10 to 005e9d17 has its CatchHandler @ 005e9fdc */
      QTextStream::operator<<(local_60,' ');
    }
    pQVar1 = local_60;
                    /* try { // try from 005e99ac to 005e99b3 has its CatchHandler @ 005e9fdc */
    QString::fromAscii((char *)&local_4c,0xaead2c);
                    /* try { // try from 005e99b8 to 005e99bf has its CatchHandler @ 005e9fb4 */
    QTextStream::operator<<(pQVar1,(QString *)&local_4c);
    iVar3 = *(int *)local_4c;
    *(int *)local_4c = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_4c);
    }
    if (local_60[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_60,' ');
    }
                    /* try { // try from 005e99f8 to 005e9a1f has its CatchHandler @ 005e9fdc */
    QTextStream::operator<<(local_60,0x5e9);
    if (local_60[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_60,' ');
    }
    pQVar1 = local_60;
    QString::fromAscii((char *)&local_50,(int)local_38);
                    /* try { // try from 005e9a24 to 005e9a2b has its CatchHandler @ 005e9fa0 */
    QTextStream::operator<<(pQVar1,(QString *)&local_50);
    iVar3 = *(int *)local_50;
    *(int *)local_50 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_50);
    }
    if (local_60[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_60,' ');
    }
                    /* try { // try from 005e9a64 to 005e9aa7 has its CatchHandler @ 005e9fdc */
    pQVar1 = (QTextStream *)QTextStream::operator<<(local_60,'\"');
    pQVar1 = (QTextStream *)QTextStream::operator<<(pQVar1,param_3);
    QTextStream::operator<<(pQVar1,'\"');
    if (local_60[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_60,' ');
    }
    pQVar1 = local_60;
    QString::fromAscii((char *)&local_54,(int)(local_34 + -0x1c7c));
                    /* try { // try from 005e9aac to 005e9ab3 has its CatchHandler @ 005e9f8c */
    QTextStream::operator<<(pQVar1,(QString *)&local_54);
    iVar3 = *(int *)local_54;
    *(int *)local_54 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_54);
    }
    if (local_60[0x14] != (QTextStream)0x0) {
                    /* try { // try from 005e9dcc to 005e9e13 has its CatchHandler @ 005e9fdc */
      QTextStream::operator<<(local_60,' ');
    }
                    /* try { // try from 005e9af0 to 005e9af7 has its CatchHandler @ 005e9fdc */
    QString::fromAscii((char *)local_90,(int)local_78[0]);
                    /* try { // try from 005e9afc to 005e9b1b has its CatchHandler @ 005e9f70 */
    pQVar1 = (QTextStream *)QTextStream::operator<<(local_60,'\"');
    pQVar1 = (QTextStream *)QTextStream::operator<<(pQVar1,(QString *)local_90);
    QTextStream::operator<<(pQVar1,'\"');
    if (local_60[0x14] == (QTextStream)0x0) {
      iVar3 = *(int *)local_90[0];
      *(int *)local_90[0] = iVar3 + -1;
      if (iVar3 == 1) goto LAB_005e9d50;
LAB_005e9b50:
      QDebug::~QDebug((QDebug *)&local_60);
    }
    else {
                    /* try { // try from 005e9d20 to 005e9d27 has its CatchHandler @ 005e9f70 */
      QTextStream::operator<<(local_60,' ');
      iVar3 = *(int *)local_90[0];
      *(int *)local_90[0] = iVar3 + -1;
      if (iVar3 != 1) goto LAB_005e9b50;
LAB_005e9d50:
      QString::free(local_90[0]);
      QDebug::~QDebug((QDebug *)&local_60);
    }
    if (-1 < iVar2) {
LAB_005e9d68:
                    /* try { // try from 005e9d68 to 005e9d7f has its CatchHandler @ 005e9eec */
      QMutex::unlock();
      QString::fromAscii(param_1,(int)local_78[0]);
      if (local_78[0] != auStack_70) {
        operator_delete(local_78[0]);
      }
      return param_1;
    }
                    /* try { // try from 005e9b60 to 005e9b67 has its CatchHandler @ 005e9eec */
    pQVar1 = operator_new(0x18);
                    /* try { // try from 005e9b7c to 005e9b83 has its CatchHandler @ 005e9f5c */
    local_58 = (QTextStream *)0x2;
    QTextStream::QTextStream(pQVar1,pQVar1 + 8,&local_58);
    *(int **)(pQVar1 + 8) = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar1 + 0xc) = 1;
    *(undefined4 *)(pQVar1 + 0x10) = 1;
    pQVar1[0x14] = (QTextStream)0x1;
    pQVar1[0x15] = (QTextStream)0x1;
    local_58 = pQVar1;
                    /* try { // try from 005e9bc0 to 005e9bc7 has its CatchHandler @ 005e9f54 */
    QString::fromAscii((char *)&local_5c,0xae8970);
                    /* try { // try from 005e9bcc to 005e9bd3 has its CatchHandler @ 005e9f40 */
    QTextStream::operator<<(pQVar1,(QString *)&local_5c);
    iVar2 = *(int *)local_5c;
    *(int *)local_5c = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_5c);
    }
    if (local_58[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_58,' ');
    }
    pQVar1 = local_58;
                    /* try { // try from 005e9c14 to 005e9c1b has its CatchHandler @ 005e9f54 */
    QString::fromAscii((char *)&local_60,0xaead2c);
                    /* try { // try from 005e9c20 to 005e9c27 has its CatchHandler @ 005e9f2c */
    QTextStream::operator<<(pQVar1,(QString *)&local_60);
    iVar2 = *(int *)local_60;
    *(int *)local_60 = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free((Data *)local_60);
    }
    if (local_58[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_58,' ');
    }
                    /* try { // try from 005e9c60 to 005e9c8b has its CatchHandler @ 005e9f54 */
    QTextStream::operator<<(local_58,0x5ee);
    if (local_58[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_58,' ');
    }
    pQVar1 = local_58;
    QString::fromAscii((char *)local_90,0xae8e18);
                    /* try { // try from 005e9c90 to 005e9c97 has its CatchHandler @ 005e9f10 */
    QTextStream::operator<<(pQVar1,(QString *)local_90);
    iVar2 = *(int *)local_90[0];
    *(int *)local_90[0] = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_90[0]);
    }
    if (local_58[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_58,' ');
    }
                    /* try { // try from 005e9cd0 to 005e9cd7 has its CatchHandler @ 005e9f54 */
    QTextStream::operator<<(local_58,iVar4);
    if (local_58[0x14] != (QTextStream)0x0) {
                    /* try { // try from 005e9e1c to 005e9e63 has its CatchHandler @ 005e9f54 */
      QTextStream::operator<<(local_58,' ');
    }
    iVar4 = iVar4 + -1;
    QDebug::~QDebug((QDebug *)&local_58);
    if (iVar4 == 0) goto LAB_005e9d68;
                    /* try { // try from 005e9d00 to 005e9d07 has its CatchHandler @ 005e9eec */
    usleep(200000);
  } while( true );
}



// ===== WeightAdjust::on_close_clicked @ 006c8490
// caller: ? @ 00cd8dac
// caller: ? @ 00d08030
// caller: ? @ Entry Point
// caller: WeightAdjust::qt_static_metacall @ 007f5e78

/* WeightAdjust::on_close_clicked() */

void WeightAdjust::on_close_clicked(void)

{
  (*(code *)PTR_close_00e1156c)();
  return;
}



// ===== WeightAdjust::on_temp_clicked @ 006c8498
// caller: ? @ 00cd8db4
// caller: ? @ 00d08044
// caller: ? @ 00db30a5
// caller: ? @ 00db30af
// caller: ? @ 00db30ba
// caller: ? @ Entry Point
// caller: WeightAdjust::qt_static_metacall @ 007f5e80

/* WeightAdjust::on_temp_clicked() */

void __thiscall WeightAdjust::on_temp_clicked(WeightAdjust *this)

{
  undefined4 uVar1;
  QString aQStack_18 [4];
  undefined4 local_14;
  
  uVar1 = *(undefined4 *)(this + 0x18);
  if (this[0x1c] == (WeightAdjust)0x0) {
    local_14 = QString::fromAscii_helper("M140 S60",-1);
                    /* try { // try from 006c854c to 006c8553 has its CatchHandler @ 006c8570 */
    SerialObject::sendGcodeCmd(aQStack_18,uVar1,&local_14,1,0,0,0);
  }
  else {
    local_14 = QString::fromAscii_helper("M140 S0",-1);
                    /* try { // try from 006c84ec to 006c84f3 has its CatchHandler @ 006c855c */
    SerialObject::sendGcodeCmd(aQStack_18,uVar1,&local_14,1,0,0,0);
  }
  QString::~QString(aQStack_18);
  QString::~QString((QString *)&local_14);
  return;
}



// ===== WeightAdjust::on_H1_clicked @ 006c8578
// caller: ? @ 00cd8dbc
// caller: ? @ 00d08070
// caller: ? @ 00db30c2
// caller: ? @ 00db30e5
// caller: ? @ Entry Point
// caller: WeightAdjust::qt_static_metacall @ 007f5e90

/* WeightAdjust::on_H1_clicked() */

void __thiscall WeightAdjust::on_H1_clicked(WeightAdjust *this)

{
  int iVar1;
  ConfirmDialog *pCVar2;
  int *local_28;
  int *local_24;
  int *local_20 [2];
  
  iVar1 = SerialObject::checkLevelPinStatus(*(SerialObject **)(this + 0x18));
  if (iVar1 != 0) {
    return;
  }
  QMetaObject::tr((char *)local_20,(char *)&staticMetaObject);
  pCVar2 = ConfirmDialog::instConfirmDialog;
  if (ConfirmDialog::instConfirmDialog == (ConfirmDialog *)0x0) {
    local_24 = local_20[0];
    *local_20[0] = *local_20[0] + 1;
                    /* try { // try from 006c86a8 to 006c86af has its CatchHandler @ 006c86f4 */
    QMetaObject::tr((char *)&local_28,(char *)&ConfirmDialog::staticMetaObject);
                    /* try { // try from 006c86b0 to 006c86b7 has its CatchHandler @ 006c874c */
    pCVar2 = operator_new(0x18);
                    /* try { // try from 006c86d0 to 006c86d7 has its CatchHandler @ 006c8730 */
    ConfirmDialog::ConfirmDialog(pCVar2,1,(QString *)&local_24,(QString *)&local_28,0);
    ConfirmDialog::instConfirmDialog = pCVar2;
    QString::~QString((QString *)&local_28);
    QString::~QString((QString *)&local_24);
  }
  else {
    local_28 = local_20[0];
    *local_20[0] = *local_20[0] + 1;
                    /* try { // try from 006c8614 to 006c861b has its CatchHandler @ 006c8714 */
    ConfirmDialog::setLabelText(pCVar2,1,(QString *)&local_28);
    QString::~QString((QString *)&local_28);
  }
                    /* try { // try from 006c8630 to 006c864b has its CatchHandler @ 006c8728 */
  (**(code **)(*(int *)ConfirmDialog::instConfirmDialog + 0x34))(ConfirmDialog::instConfirmDialog,1)
  ;
  QWidget::repaint();
  local_28 = (int *)0x0;
  QCoreApplication::processEvents(&local_28);
  QString::~QString((QString *)local_20);
  return;
}



// ===== WeightAdjust::on_H2S500_clicked @ 006c8758
// caller: ? @ 00cd8dc4
// caller: ? @ 00d080b0
// caller: ? @ 00db30ed
// caller: ? @ 00db30f7
// caller: ? @ Entry Point
// caller: WeightAdjust::qt_static_metacall @ 007f5ea0

/* WeightAdjust::on_H2S500_clicked() */

void __thiscall WeightAdjust::on_H2S500_clicked(WeightAdjust *this)

{
  int iVar1;
  undefined4 uVar2;
  Data *local_10;
  Data *local_c;
  
  uVar2 = *(undefined4 *)(this + 0x18);
  local_c = (Data *)QString::fromAscii_helper("H2 S500",-1);
                    /* try { // try from 006c8784 to 006c878b has its CatchHandler @ 006c882c */
  SerialObject::sendCmdToUart7(&local_10,uVar2,&local_c);
  iVar1 = *(int *)local_10;
  *(int *)local_10 = iVar1 + -1;
  if (iVar1 == 1) {
    QString::free(local_10);
    iVar1 = *(int *)local_c;
    *(int *)local_c = iVar1 + -1;
  }
  else {
    iVar1 = *(int *)local_c;
    *(int *)local_c = iVar1 + -1;
  }
  if (iVar1 == 1) {
    QString::free(local_c);
    return;
  }
  return;
}



// ===== WeightAdjust::on_H3S200_clicked @ 006c8840
// caller: ? @ 00cd8dcc
// caller: ? @ 00d080e0
// caller: ? @ 00db30ff
// caller: ? @ 00db3109
// caller: ? @ Entry Point
// caller: WeightAdjust::qt_static_metacall @ 007f5ea8

/* WeightAdjust::on_H3S200_clicked() */

void __thiscall WeightAdjust::on_H3S200_clicked(WeightAdjust *this)

{
  int iVar1;
  undefined4 uVar2;
  Data *local_10;
  Data *local_c;
  
  uVar2 = *(undefined4 *)(this + 0x18);
  local_c = (Data *)QString::fromAscii_helper("H3 S200",-1);
                    /* try { // try from 006c886c to 006c8873 has its CatchHandler @ 006c8914 */
  SerialObject::sendCmdToUart7(&local_10,uVar2,&local_c);
  iVar1 = *(int *)local_10;
  *(int *)local_10 = iVar1 + -1;
  if (iVar1 == 1) {
    QString::free(local_10);
    iVar1 = *(int *)local_c;
    *(int *)local_c = iVar1 + -1;
  }
  else {
    iVar1 = *(int *)local_c;
    *(int *)local_c = iVar1 + -1;
  }
  if (iVar1 == 1) {
    QString::free(local_c);
    return;
  }
  return;
}



// ===== WeightAdjust::on_H3S100_clicked @ 006c8928
// caller: ? @ 00cd8dd4
// caller: ? @ 00d08110
// caller: ? @ 00db3111
// caller: ? @ 00db311b
// caller: ? @ Entry Point
// caller: WeightAdjust::qt_static_metacall @ 007f5eb0

/* WeightAdjust::on_H3S100_clicked() */

void __thiscall WeightAdjust::on_H3S100_clicked(WeightAdjust *this)

{
  int iVar1;
  undefined4 uVar2;
  Data *local_10;
  Data *local_c;
  
  uVar2 = *(undefined4 *)(this + 0x18);
  local_c = (Data *)QString::fromAscii_helper("H3 S100",-1);
                    /* try { // try from 006c8954 to 006c895b has its CatchHandler @ 006c89fc */
  SerialObject::sendCmdToUart7(&local_10,uVar2,&local_c);
  iVar1 = *(int *)local_10;
  *(int *)local_10 = iVar1 + -1;
  if (iVar1 == 1) {
    QString::free(local_10);
    iVar1 = *(int *)local_c;
    *(int *)local_c = iVar1 + -1;
  }
  else {
    iVar1 = *(int *)local_c;
    *(int *)local_c = iVar1 + -1;
  }
  if (iVar1 == 1) {
    QString::free(local_c);
    return;
  }
  return;
}



// ===== WeightAdjust::on_H3S50_clicked @ 006c8a10
// caller: ? @ 00cd8ddc
// caller: ? @ 00d08140
// caller: ? @ 00db3123
// caller: ? @ 00db313f
// caller: ? @ Entry Point
// caller: WeightAdjust::qt_static_metacall @ 007f5eb8

/* WeightAdjust::on_H3S50_clicked() */

void __thiscall WeightAdjust::on_H3S50_clicked(WeightAdjust *this)

{
  WaitMovieDialog *pWVar1;
  int *local_20;
  int *local_1c [2];
  
  QMetaObject::tr((char *)local_1c,(char *)&staticMetaObject);
  pWVar1 = WaitMovieDialog::instWaitMovieDialog;
  local_20 = local_1c[0];
  if (WaitMovieDialog::instWaitMovieDialog == (WaitMovieDialog *)0x0) {
    *local_1c[0] = *local_1c[0] + 1;
                    /* try { // try from 006c8aec to 006c8af3 has its CatchHandler @ 006c8b20 */
    pWVar1 = operator_new(0x28);
                    /* try { // try from 006c8b04 to 006c8b0b has its CatchHandler @ 006c8b40 */
    WaitMovieDialog::WaitMovieDialog(pWVar1,(QString *)&local_20,0);
    WaitMovieDialog::instWaitMovieDialog = pWVar1;
    QString::~QString((QString *)&local_20);
  }
  else {
    *local_1c[0] = *local_1c[0] + 1;
                    /* try { // try from 006c8a78 to 006c8a7f has its CatchHandler @ 006c8b5c */
    WaitMovieDialog::setLabelText(pWVar1,(QString *)&local_20);
    QString::~QString((QString *)&local_20);
  }
                    /* try { // try from 006c8a94 to 006c8aaf has its CatchHandler @ 006c8b54 */
  (**(code **)(*(int *)WaitMovieDialog::instWaitMovieDialog + 0x34))
            (WaitMovieDialog::instWaitMovieDialog,1);
  QTimer::singleShot(1000,(QObject *)this,"1delayTime()");
  QString::~QString((QString *)local_1c);
  return;
}



// ===== WeightAdjust::on_moveUp_clicked @ 006c8ba4
// caller: ? @ 00cd8dec
// caller: ? @ 00d08190
// caller: ? @ 00db316c
// caller: ? @ 00db3177
// caller: ? @ 00db319a
// caller: ? @ Entry Point
// caller: WeightAdjust::qt_static_metacall @ 007f5ec0

/* WeightAdjust::on_moveUp_clicked() */

void WeightAdjust::on_moveUp_clicked(void)

{
  int in_a0;
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar5;
  double dVar4;
  double in_f12_13;
  undefined4 local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined4 *local_20 [2];
  undefined4 local_18;
  
  local_18 = 0;
  fVar5 = *(float *)(in_a0 + 0x20) - DAT_00b06970;
  uVar1 = *(undefined4 *)(in_a0 + 0x18);
  local_20[0] = &QString::shared_null;
  fVar2 = 0.0;
  if (0.0 < fVar5) {
    fVar2 = fVar5;
  }
  *(float *)(in_a0 + 0x20) = fVar2;
  QString::shared_null = QString::shared_null + 1;
  dVar4 = (double)*(float *)(in_a0 + 0x20);
                    /* try { // try from 006c8c50 to 006c8c57 has its CatchHandler @ 006c8e58 */
  QString::number(in_f12_13,SUB81(dVar4,0),(int)((ulonglong)dVar4 >> 0x20));
  uVar3 = SUB84(dVar4,0);
                    /* try { // try from 006c8c64 to 006c8c6b has its CatchHandler @ 006c8f30 */
  QString::fromAscii((char *)&local_28,0xad8d98);
                    /* try { // try from 006c8c70 to 006c8c77 has its CatchHandler @ 006c8f1c */
  QString::append((QString *)&local_28);
  local_2c = local_28;
  *local_28 = *local_28 + 1;
                    /* try { // try from 006c8ca4 to 006c8cab has its CatchHandler @ 006c8f10 */
  QString::fromAscii((char *)&local_30,0xad8d88);
                    /* try { // try from 006c8cb4 to 006c8cbb has its CatchHandler @ 006c8efc */
  QString::append((QString *)&local_2c);
  QString::~QString((QString *)&local_30);
                    /* try { // try from 006c8cdc to 006c8ce3 has its CatchHandler @ 006c8ed8 */
  SerialObject::sendGcodeCmd(&local_30,uVar1,(QString *)&local_2c,1,0,0,0);
  QString::~QString((QString *)&local_30);
  QString::~QString((QString *)&local_2c);
  QString::~QString((QString *)&local_28);
  QString::~QString((QString *)&local_24);
  QString::~QString((QString *)local_20);
  uVar1 = *(undefined4 *)(in_a0 + 0x18);
  local_2c = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 006c8d3c to 006c8d43 has its CatchHandler @ 006c8ec4 */
  SerialObject::sendGcodeCmd(&local_30,uVar1,(QString *)&local_2c,1,0,0,0);
  QString::~QString((QString *)&local_30);
  QString::~QString((QString *)&local_2c);
  uVar1 = *(undefined4 *)(in_a0 + 0x18);
  local_30 = QString::fromAscii_helper("M114",-1);
                    /* try { // try from 006c8d84 to 006c8d8b has its CatchHandler @ 006c8eb0 */
  SerialObject::sendGcodeCmd(&local_24,uVar1,&local_30,1,0,0,0);
  QString::~QString((QString *)&local_30);
                    /* try { // try from 006c8d9c to 006c8da3 has its CatchHandler @ 006c8ea8 */
  QLabel::setText(*(QString **)(*(int *)(in_a0 + 0x14) + 0x24));
  local_28 = local_24;
  *local_24 = *local_24 + 1;
                    /* try { // try from 006c8dcc to 006c8dd3 has its CatchHandler @ 006c8ea0 */
  local_2c = (int *)QString::fromAscii_helper("Z:",-1);
                    /* try { // try from 006c8de0 to 006c8de7 has its CatchHandler @ 006c8e98 */
  ParseXYZEFField(&local_30,&local_28,(QString *)&local_2c);
  local_18 = 0;
                    /* try { // try from 006c8dfc to 006c8e03 has its CatchHandler @ 006c8e6c */
  QString::toFloat((bool *)&local_30);
  local_18 = 0;
  *(undefined4 *)(in_a0 + 0x20) = uVar3;
  QString::~QString((QString *)&local_30);
  QString::~QString((QString *)&local_2c);
  QString::~QString((QString *)&local_28);
  QString::~QString((QString *)&local_24);
  return;
}



// ===== WeightAdjust::on_Point_clicked @ 006c8f38
// caller: ? @ 00cd8df4
// caller: ? @ 00d081cc
// caller: ? @ 00db31a2
// caller: ? @ 00db31ac
// caller: ? @ 00db31b7
// caller: ? @ 00db31da
// caller: ? @ Entry Point
// caller: WeightAdjust::qt_static_metacall @ 007f5ec8

/* WeightAdjust::on_Point_clicked() */

void __thiscall WeightAdjust::on_Point_clicked(WeightAdjust *this)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  int *local_1c [2];
  undefined4 local_14;
  
  local_14 = 0;
  uVar1 = *(undefined4 *)(this + 0x18);
  local_24 = QString::fromAscii_helper("G1 Z5 F3000",-1);
                    /* try { // try from 006c8f98 to 006c8f9f has its CatchHandler @ 006c90fc */
  SerialObject::sendGcodeCmd(&local_28,uVar1,&local_24,1,0,0,0);
  QString::~QString((QString *)&local_28);
  QString::~QString((QString *)&local_24);
  uVar1 = *(undefined4 *)(this + 0x18);
  local_24 = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 006c8fe0 to 006c8fe7 has its CatchHandler @ 006c916c */
  SerialObject::sendGcodeCmd(&local_28,uVar1,&local_24,1,0,0,0);
  QString::~QString((QString *)&local_28);
  QString::~QString((QString *)&local_24);
  uVar1 = *(undefined4 *)(this + 0x18);
  local_28 = QString::fromAscii_helper("M114",-1);
                    /* try { // try from 006c9028 to 006c902f has its CatchHandler @ 006c9158 */
  SerialObject::sendGcodeCmd(local_1c,uVar1,&local_28,1,0,0,0);
  QString::~QString((QString *)&local_28);
                    /* try { // try from 006c9040 to 006c9047 has its CatchHandler @ 006c9150 */
  QLabel::setText(*(QString **)(*(int *)(this + 0x14) + 0x24));
  local_20 = local_1c[0];
  *local_1c[0] = *local_1c[0] + 1;
                    /* try { // try from 006c9070 to 006c9077 has its CatchHandler @ 006c9144 */
  local_24 = QString::fromAscii_helper("Z:",-1);
                    /* try { // try from 006c9088 to 006c908f has its CatchHandler @ 006c913c */
  ParseXYZEFField(&local_28,(QString *)&local_20,&local_24);
  local_14 = 0;
                    /* try { // try from 006c90a4 to 006c90ab has its CatchHandler @ 006c9110 */
  uVar1 = QString::toFloat((bool *)&local_28);
  local_14 = 0;
  *(undefined4 *)(this + 0x20) = uVar1;
  QString::~QString((QString *)&local_28);
  QString::~QString((QString *)&local_24);
  QString::~QString((QString *)&local_20);
  QString::~QString((QString *)local_1c);
  return;
}



// ===== WeightAdjust::on_moveDown_clicked @ 006c9174
// caller: ? @ 00cd8dfc
// caller: ? @ 00d08204
// caller: ? @ 00db3207
// caller: ? @ 00db3212
// caller: ? @ 00db3235
// caller: ? @ Entry Point
// caller: WeightAdjust::qt_static_metacall @ 007f5e68

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WeightAdjust::on_moveDown_clicked() */

void WeightAdjust::on_moveDown_clicked(void)

{
  int in_a0;
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar5;
  double dVar4;
  double in_f12_13;
  undefined4 local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined4 *local_20 [2];
  undefined4 local_18;
  
  local_18 = 0;
  fVar5 = *(float *)(in_a0 + 0x20) + DAT_00b06970;
  uVar1 = *(undefined4 *)(in_a0 + 0x18);
  local_20[0] = &QString::shared_null;
  fVar2 = _DAT_00b06974;
  if (fVar5 < _DAT_00b06974) {
    fVar2 = fVar5;
  }
  *(float *)(in_a0 + 0x20) = fVar2;
  QString::shared_null = QString::shared_null + 1;
  dVar4 = (double)*(float *)(in_a0 + 0x20);
                    /* try { // try from 006c9224 to 006c922b has its CatchHandler @ 006c942c */
  QString::number(in_f12_13,SUB81(dVar4,0),(int)((ulonglong)dVar4 >> 0x20));
  uVar3 = SUB84(dVar4,0);
                    /* try { // try from 006c9238 to 006c923f has its CatchHandler @ 006c9504 */
  QString::fromAscii((char *)&local_28,0xad8d98);
                    /* try { // try from 006c9244 to 006c924b has its CatchHandler @ 006c94f0 */
  QString::append((QString *)&local_28);
  local_2c = local_28;
  *local_28 = *local_28 + 1;
                    /* try { // try from 006c9278 to 006c927f has its CatchHandler @ 006c94e4 */
  QString::fromAscii((char *)&local_30,0xad8d88);
                    /* try { // try from 006c9288 to 006c928f has its CatchHandler @ 006c94d0 */
  QString::append((QString *)&local_2c);
  QString::~QString((QString *)&local_30);
                    /* try { // try from 006c92b0 to 006c92b7 has its CatchHandler @ 006c94ac */
  SerialObject::sendGcodeCmd(&local_30,uVar1,(QString *)&local_2c,1,0,0,0);
  QString::~QString((QString *)&local_30);
  QString::~QString((QString *)&local_2c);
  QString::~QString((QString *)&local_28);
  QString::~QString((QString *)&local_24);
  QString::~QString((QString *)local_20);
  uVar1 = *(undefined4 *)(in_a0 + 0x18);
  local_2c = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 006c9310 to 006c9317 has its CatchHandler @ 006c9498 */
  SerialObject::sendGcodeCmd(&local_30,uVar1,(QString *)&local_2c,1,0,0,0);
  QString::~QString((QString *)&local_30);
  QString::~QString((QString *)&local_2c);
  uVar1 = *(undefined4 *)(in_a0 + 0x18);
  local_30 = QString::fromAscii_helper("M114",-1);
                    /* try { // try from 006c9358 to 006c935f has its CatchHandler @ 006c9484 */
  SerialObject::sendGcodeCmd(&local_24,uVar1,&local_30,1,0,0,0);
  QString::~QString((QString *)&local_30);
                    /* try { // try from 006c9370 to 006c9377 has its CatchHandler @ 006c947c */
  QLabel::setText(*(QString **)(*(int *)(in_a0 + 0x14) + 0x24));
  local_28 = local_24;
  *local_24 = *local_24 + 1;
                    /* try { // try from 006c93a0 to 006c93a7 has its CatchHandler @ 006c9474 */
  local_2c = (int *)QString::fromAscii_helper("Z:",-1);
                    /* try { // try from 006c93b4 to 006c93bb has its CatchHandler @ 006c946c */
  ParseXYZEFField(&local_30,&local_28,(QString *)&local_2c);
  local_18 = 0;
                    /* try { // try from 006c93d0 to 006c93d7 has its CatchHandler @ 006c9440 */
  QString::toFloat((bool *)&local_30);
  local_18 = 0;
  *(undefined4 *)(in_a0 + 0x20) = uVar3;
  QString::~QString((QString *)&local_30);
  QString::~QString((QString *)&local_2c);
  QString::~QString((QString *)&local_28);
  QString::~QString((QString *)&local_24);
  return;
}



// ===== WeightAdjust::getWeightValue @ 006c9e54
// caller: ? @ 00cd8e44
// caller: ? @ 00d083a4
// caller: ? @ 00db4862
// caller: ? @ 00db491b
// caller: ? @ Entry Point
// caller: WeightAdjust::qt_static_metacall @ 007f5e88

/* WeightAdjust::getWeightValue() */

void __thiscall WeightAdjust::getWeightValue(WeightAdjust *this)

{
  QTextStream *pQVar1;
  undefined4 uVar2;
  QString *pQVar3;
  float fVar4;
  float fVar5;
  QTextStream *local_58;
  undefined4 local_54;
  undefined4 *local_50;
  QTextStream *local_4c;
  QTextStream *local_48;
  QString aQStack_44 [4];
  undefined4 *local_40;
  QTextStream *local_3c;
  QString aQStack_38 [12];
  undefined4 local_2c;
  
  local_2c = 0;
  uVar2 = *(undefined4 *)(this + 0x18);
  local_58 = (QTextStream *)QString::fromAscii_helper("H7",-1);
                    /* try { // try from 006c9ec0 to 006c9ec7 has its CatchHandler @ 006ca534 */
  SerialObject::sendCmdToUart7(aQStack_38,uVar2,(QString *)&local_58);
  QString::~QString((QString *)&local_58);
                    /* try { // try from 006c9eec to 006c9ef3 has its CatchHandler @ 006ca52c */
  pQVar3 = *(QString **)(*(int *)(this + 0x14) + 8);
  QMetaObject::tr((char *)&local_4c,(char *)&staticMetaObject);
                    /* try { // try from 006c9ef8 to 006c9f0b has its CatchHandler @ 006ca524 */
  QChar::QChar((QChar *)&local_48,' ');
  QString::QString(aQStack_44,(uint)local_48 & 0xffff);
                    /* try { // try from 006c9f28 to 006c9f2f has its CatchHandler @ 006ca510 */
  local_58 = (QTextStream *)0x0;
  QString::section(&local_50,aQStack_38,aQStack_44,4,4,(QString *)&local_58);
  QString::~QString(aQStack_44);
                    /* try { // try from 006c9f40 to 006c9f47 has its CatchHandler @ 006ca508 */
  QString::trimmed();
  local_58 = local_4c;
  *(int *)local_4c = *(int *)local_4c + 1;
                    /* try { // try from 006c9f6c to 006c9f73 has its CatchHandler @ 006ca500 */
  QString::append((QString *)&local_58);
                    /* try { // try from 006c9f78 to 006c9f7f has its CatchHandler @ 006ca4d0 */
  QLabel::setText(pQVar3);
  QString::~QString((QString *)&local_58);
  QString::~QString((QString *)&local_54);
  QString::~QString((QString *)&local_50);
  QString::~QString((QString *)&local_4c);
                    /* try { // try from 006c9fa0 to 006c9fa7 has its CatchHandler @ 006ca52c */
  pQVar1 = operator_new(0x18);
                    /* try { // try from 006c9fbc to 006c9fc3 has its CatchHandler @ 006ca4bc */
  local_48 = (QTextStream *)0x2;
  QTextStream::QTextStream(pQVar1,pQVar1 + 8,&local_48);
  *(int **)(pQVar1 + 8) = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
  *(undefined4 *)(pQVar1 + 0xc) = 1;
  *(undefined4 *)(pQVar1 + 0x10) = 2;
  pQVar1[0x14] = (QTextStream)0x1;
  pQVar1[0x15] = (QTextStream)0x1;
  local_48 = pQVar1;
                    /* try { // try from 006ca010 to 006ca017 has its CatchHandler @ 006ca3e8 */
  QString::fromAscii((char *)&local_4c,0xb05a24);
                    /* try { // try from 006ca01c to 006ca023 has its CatchHandler @ 006ca3d4 */
  QTextStream::operator<<(pQVar1,(QString *)&local_4c);
  QString::~QString((QString *)&local_4c);
  if (local_48[0x14] != (QTextStream)0x0) {
                    /* try { // try from 006ca348 to 006ca34f has its CatchHandler @ 006ca3e8 */
    QTextStream::operator<<(local_48,' ');
  }
  pQVar1 = local_48;
                    /* try { // try from 006ca048 to 006ca04f has its CatchHandler @ 006ca3e8 */
  QString::fromAscii((char *)&local_50,0xb0693c);
                    /* try { // try from 006ca054 to 006ca05b has its CatchHandler @ 006ca40c */
  QTextStream::operator<<(pQVar1,(QString *)&local_50);
  QString::~QString((QString *)&local_50);
  if (local_48[0x14] != (QTextStream)0x0) {
    QTextStream::operator<<(local_48,' ');
  }
  pQVar1 = local_48;
                    /* try { // try from 006ca080 to 006ca087 has its CatchHandler @ 006ca3e8 */
  QString::fromAscii((char *)&local_54,0xb134c8);
                    /* try { // try from 006ca08c to 006ca093 has its CatchHandler @ 006ca3c0 */
  QTextStream::operator<<(pQVar1,(QString *)&local_54);
  QString::~QString((QString *)&local_54);
  if (local_48[0x14] != (QTextStream)0x0) {
                    /* try { // try from 006ca368 to 006ca37f has its CatchHandler @ 006ca3e8 */
    QTextStream::operator<<(local_48,' ');
  }
                    /* try { // try from 006ca0b0 to 006ca0c3 has its CatchHandler @ 006ca3e8 */
  QChar::QChar((QChar *)&local_4c,' ');
  QString::QString((QString *)&local_58,(uint)local_4c & 0xffff);
                    /* try { // try from 006ca0e0 to 006ca0e7 has its CatchHandler @ 006ca3f8 */
  local_54 = 0;
  QString::section(&local_50,aQStack_38,(QString *)&local_58,4,4,(QString *)&local_54);
  QString::~QString((QString *)&local_58);
                    /* try { // try from 006ca0f4 to 006ca0fb has its CatchHandler @ 006ca3f0 */
  QString::trimmed();
                    /* try { // try from 006ca100 to 006ca11f has its CatchHandler @ 006ca390 */
  pQVar1 = (QTextStream *)QTextStream::operator<<(local_48,'\"');
  pQVar1 = (QTextStream *)QTextStream::operator<<(pQVar1,(QString *)&local_58);
  QTextStream::operator<<(pQVar1,'\"');
  if (local_48[0x14] != (QTextStream)0x0) {
                    /* try { // try from 006ca358 to 006ca35f has its CatchHandler @ 006ca390 */
    QTextStream::operator<<(local_48,' ');
  }
  QString::~QString((QString *)&local_58);
  QString::~QString((QString *)&local_50);
  QDebug::~QDebug((QDebug *)&local_48);
  local_2c = 0;
                    /* try { // try from 006ca15c to 006ca1c7 has its CatchHandler @ 006ca52c */
  fVar4 = (float)MainWindow::getBedRealTemp(MainWindow::instMainWindow);
  local_2c = 0;
  fVar5 = (float)MainWindow::getBedTargetTemp(MainWindow::instMainWindow);
  local_2c = 0;
  if ((int)fVar5 < 1) {
    this[0x1c] = (WeightAdjust)0x0;
  }
  else {
    this[0x1c] = (WeightAdjust)0x1;
  }
  pQVar3 = *(QString **)(*(int *)(this + 0x14) + 0x28);
  QMetaObject::tr((char *)&local_3c,(char *)&staticMetaObject);
  local_40 = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 006ca1ec to 006ca1f3 has its CatchHandler @ 006ca414 */
  QString::number((int)aQStack_44,(int)fVar4);
  local_48 = local_3c;
  *(int *)local_3c = *(int *)local_3c + 1;
                    /* try { // try from 006ca218 to 006ca21f has its CatchHandler @ 006ca454 */
  QString::append((QString *)&local_48);
  local_4c = local_48;
  *(int *)local_48 = *(int *)local_48 + 1;
                    /* try { // try from 006ca24c to 006ca253 has its CatchHandler @ 006ca430 */
  QString::fromAscii((char *)&local_58,0xcce9f4);
                    /* try { // try from 006ca258 to 006ca25f has its CatchHandler @ 006ca4a8 */
  QString::append((QString *)&local_4c);
  QString::~QString((QString *)&local_58);
  local_50 = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 006ca28c to 006ca293 has its CatchHandler @ 006ca4a0 */
  QString::number((int)&local_54,(int)fVar5);
  local_58 = local_4c;
  *(int *)local_4c = *(int *)local_4c + 1;
                    /* try { // try from 006ca2b8 to 006ca2bf has its CatchHandler @ 006ca498 */
  QString::append((QString *)&local_58);
                    /* try { // try from 006ca2c4 to 006ca2cb has its CatchHandler @ 006ca468 */
  QAbstractButton::setText(pQVar3);
  QString::~QString((QString *)&local_58);
  QString::~QString((QString *)&local_54);
  QString::~QString((QString *)&local_50);
  QString::~QString((QString *)&local_4c);
  QString::~QString((QString *)&local_48);
  QString::~QString(aQStack_44);
  QString::~QString((QString *)&local_40);
  QString::~QString((QString *)&local_3c);
  QString::~QString(aQStack_38);
  return;
}



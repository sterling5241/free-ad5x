// ===== SerialObject::setRightFilamentDetect @ 005df33c

/* SerialObject::setRightFilamentDetect(bool) */

void __thiscall SerialObject::setRightFilamentDetect(SerialObject *this,bool param_1)

{
  this[0x97] = (SerialObject)param_1;
  return;
}


// ===== SerialObject::getChnFilamentType @ 005e3a7c

/* SerialObject::getChnFilamentType(int) */

int SerialObject::getChnFilamentType(int param_1)

{
  undefined4 uVar1;
  GetConfigFile *pGVar2;
  QString *this;
  int in_a2;
  undefined1 *local_38;
  undefined1 auStack_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  uVar1 = QString::fromAscii_helper("",-1);
  *(undefined4 *)param_1 = uVar1;
  if (in_a2 == 2) {
                    /* try { // try from 005e3bd8 to 005e3bf3 has its CatchHandler @ 005e3c1c */
    pGVar2 = (GetConfigFile *)getConfigFile();
    GetConfigFile::configFile(pGVar2);
    Config::getFilamentType2_abi_cxx11_();
                    /* try { // try from 005e3bfc to 005e3c03 has its CatchHandler @ 005e3c60 */
    QString::fromAscii((char *)&local_18,(int)local_38);
    uVar1 = *(undefined4 *)param_1;
    this = (QString *)&local_18;
    *(undefined4 *)param_1 = local_18;
    local_18 = uVar1;
  }
  else if (in_a2 < 3) {
    if (in_a2 != 1) {
      return param_1;
    }
                    /* try { // try from 005e3b94 to 005e3baf has its CatchHandler @ 005e3c1c */
    pGVar2 = (GetConfigFile *)getConfigFile();
    GetConfigFile::configFile(pGVar2);
    Config::getFilamentType1_abi_cxx11_();
                    /* try { // try from 005e3bb8 to 005e3bbf has its CatchHandler @ 005e3c58 */
    QString::fromAscii((char *)local_14,(int)local_38);
    uVar1 = *(undefined4 *)param_1;
    this = (QString *)local_14;
    *(undefined4 *)param_1 = local_14[0];
    local_14[0] = uVar1;
  }
  else if (in_a2 == 3) {
                    /* try { // try from 005e3b44 to 005e3b5f has its CatchHandler @ 005e3c1c */
    pGVar2 = (GetConfigFile *)getConfigFile();
    GetConfigFile::configFile(pGVar2);
    Config::getFilamentType3_abi_cxx11_();
                    /* try { // try from 005e3b68 to 005e3b6f has its CatchHandler @ 005e3c50 */
    QString::fromAscii((char *)&local_1c,(int)local_38);
    uVar1 = *(undefined4 *)param_1;
    this = (QString *)&local_1c;
    *(undefined4 *)param_1 = local_1c;
    local_1c = uVar1;
  }
  else {
    if (in_a2 != 4) {
      return param_1;
    }
                    /* try { // try from 005e3acc to 005e3ae7 has its CatchHandler @ 005e3c1c */
    pGVar2 = (GetConfigFile *)getConfigFile();
    GetConfigFile::configFile(pGVar2);
    Config::getFilamentType4_abi_cxx11_();
                    /* try { // try from 005e3af0 to 005e3af7 has its CatchHandler @ 005e3c30 */
    QString::fromAscii((char *)&local_20,(int)local_38);
    uVar1 = *(undefined4 *)param_1;
    this = (QString *)&local_20;
    *(undefined4 *)param_1 = local_20;
    local_20 = uVar1;
  }
  QString::~QString(this);
  if (local_38 != auStack_30) {
    operator_delete(local_38);
  }
  return param_1;
}


// ===== SerialObject::checkFilamentSenser @ 005f1af4

/* SerialObject::checkFilamentSenser() */

bool __thiscall SerialObject::checkFilamentSenser(SerialObject *this)

{
  QDebug *this_00;
  undefined4 *puVar1;
  bool bVar2;
  float fVar3;
  int *local_30;
  undefined4 local_2c;
  QString aQStack_28 [4];
  undefined4 local_24 [2];
  undefined4 local_1c;
  
  local_1c = 0;
  local_24[0] = QString::fromAscii_helper("GET_FILAMENT_VALUE",-1);
                    /* try { // try from 005f1b64 to 005f1b6b has its CatchHandler @ 005f1d7c */
  sendGcodeCmd(aQStack_28,this,local_24,1,0,0,0);
                    /* try { // try from 005f1b74 to 005f1b7b has its CatchHandler @ 005f1d74 */
  local_2c = QString::fromAscii_helper("value:",-1);
                    /* try { // try from 005f1b94 to 005f1b9b has its CatchHandler @ 005f1d6c */
  QString::split(&local_30,aQStack_28,&local_2c,0,1);
  if (*local_30 != 1) {
                    /* try { // try from 005f1bb4 to 005f1be7 has its CatchHandler @ 005f1d40 */
    QList<QString>::detach_helper((int)&local_30);
  }
  local_1c = 0;
  fVar3 = (float)QString::toFloat((bool *)(local_30 + local_30[3] + 4));
  local_1c = 0;
  QList<QString>::~QList((QList<QString> *)&local_30);
  QString::~QString((QString *)&local_2c);
  QString::~QString(aQStack_28);
  QString::~QString((QString *)local_24);
  QDebug::QDebug((QDebug *)&local_30,0);
                    /* try { // try from 005f1c30 to 005f1c63 has its CatchHandler @ 005f1d2c */
  this_00 = (QDebug *)QDebug::operator<<((QDebug *)&local_30,"../ad5x/serial/SerialObject.cpp");
  puVar1 = (undefined4 *)QDebug::operator<<(this_00,"value:");
  local_1c = 0;
  QTextStream::operator<<((QTextStream *)*puVar1,fVar3);
  if (((QTextStream *)*puVar1)[0x14] != (QTextStream)0x0) {
                    /* try { // try from 005f1d1c to 005f1d23 has its CatchHandler @ 005f1d2c */
    QTextStream::operator<<((QTextStream *)*puVar1,' ');
  }
  QDebug::~QDebug((QDebug *)&local_30);
  bVar2 = (double)fVar3 <= DAT_00ae6c00 || DAT_00aeae50 <= (double)fVar3;
  local_1c = 0;
  sigFilamentSenser(this,bVar2);
  return bVar2;
}


// ===== SerialObject::getFlushVol @ 005f2cd4

/* SerialObject::getFlushVol(int, int) */

undefined4 SerialObject::getFlushVol(int param_1,int param_2)

{
  QDebug *pQVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  QDebug aQStack_60 [16];
  QString aQStack_50 [16];
  QDebug aQStack_40 [4];
  QString aQStack_3c [4];
  QString aQStack_38 [8];
  undefined4 local_30;
  
  getChnFilamentColor((int)aQStack_38);
                    /* try { // try from 005f2d1c to 005f2d23 has its CatchHandler @ 005f3018 */
  getChnFilamentColor((int)aQStack_3c);
                    /* try { // try from 005f2d28 to 005f2d2f has its CatchHandler @ 005f3084 */
  QDebug::QDebug(aQStack_60,0);
                    /* try { // try from 005f2d38 to 005f2d87 has its CatchHandler @ 005f307c */
  pQVar1 = (QDebug *)QDebug::operator<<(aQStack_60,"../ad5x/serial/SerialObject.cpp");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"getFlushVol");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"loadChnColor: ");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,aQStack_38);
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"unLoadChnColor:");
  QDebug::operator<<(pQVar1,aQStack_3c);
  QDebug::~QDebug(aQStack_60);
                    /* try { // try from 005f2d94 to 005f2dcb has its CatchHandler @ 005f3084 */
  QColor::setNamedColor(aQStack_50);
  iVar2 = QColor::red();
  iVar3 = QColor::green();
  iVar4 = QColor::blue();
  QDebug::QDebug(aQStack_60,0);
                    /* try { // try from 005f2dd0 to 005f2dff has its CatchHandler @ 005f3074 */
  pQVar1 = (QDebug *)QDebug::operator<<(aQStack_60,"../ad5x/serial/SerialObject.cpp");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"getFlushVol");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"loadRed: ");
  QDebug::operator<<(pQVar1,iVar2);
  QDebug::~QDebug(aQStack_60);
                    /* try { // try from 005f2e0c to 005f2e13 has its CatchHandler @ 005f3084 */
  QDebug::QDebug(aQStack_60,0);
                    /* try { // try from 005f2e18 to 005f2e47 has its CatchHandler @ 005f306c */
  pQVar1 = (QDebug *)QDebug::operator<<(aQStack_60,"../ad5x/serial/SerialObject.cpp");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"getFlushVol");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"loadGreen: ");
  QDebug::operator<<(pQVar1,iVar3);
  QDebug::~QDebug(aQStack_60);
                    /* try { // try from 005f2e54 to 005f2e5b has its CatchHandler @ 005f3084 */
  QDebug::QDebug(aQStack_60,0);
                    /* try { // try from 005f2e60 to 005f2e8f has its CatchHandler @ 005f3058 */
  pQVar1 = (QDebug *)QDebug::operator<<(aQStack_60,"../ad5x/serial/SerialObject.cpp");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"getFlushVol");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"loadBlue: ");
  QDebug::operator<<(pQVar1,iVar4);
  QDebug::~QDebug(aQStack_60);
                    /* try { // try from 005f2e9c to 005f2ed3 has its CatchHandler @ 005f3084 */
  QColor::setNamedColor((QString *)aQStack_60);
  iVar5 = QColor::red();
  iVar6 = QColor::green();
  iVar7 = QColor::blue();
  QDebug::QDebug(aQStack_40,0);
                    /* try { // try from 005f2ed8 to 005f2f07 has its CatchHandler @ 005f3050 */
  pQVar1 = (QDebug *)QDebug::operator<<(aQStack_40,"../ad5x/serial/SerialObject.cpp");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"getFlushVol");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"red: ");
  QDebug::operator<<(pQVar1,iVar5);
  QDebug::~QDebug(aQStack_40);
                    /* try { // try from 005f2f14 to 005f2f1b has its CatchHandler @ 005f3084 */
  QDebug::QDebug(aQStack_40,0);
                    /* try { // try from 005f2f20 to 005f2f4f has its CatchHandler @ 005f3048 */
  pQVar1 = (QDebug *)QDebug::operator<<(aQStack_40,"../ad5x/serial/SerialObject.cpp");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"getFlushVol");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"green: ");
  QDebug::operator<<(pQVar1,iVar6);
  QDebug::~QDebug(aQStack_40);
                    /* try { // try from 005f2f5c to 005f2f63 has its CatchHandler @ 005f3084 */
  QDebug::QDebug(aQStack_40,0);
                    /* try { // try from 005f2f68 to 005f2f97 has its CatchHandler @ 005f302c */
  pQVar1 = (QDebug *)QDebug::operator<<(aQStack_40,"../ad5x/serial/SerialObject.cpp");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"getFlushVol");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"blue: ");
  QDebug::operator<<(pQVar1,iVar7);
  QDebug::~QDebug(aQStack_40);
                    /* try { // try from 005f2fcc to 005f2fd3 has its CatchHandler @ 005f3084 */
  local_30 = calc_flush_vol((uchar)iVar2,(uchar)iVar3,(uchar)iVar4,0xff,(uchar)iVar5,(uchar)iVar6,
                            (uchar)iVar7,0xff);
  QString::~QString(aQStack_3c);
  QString::~QString(aQStack_38);
  return local_30;
}


// ===== SerialObject::cleanFilamentBox @ 005fce9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SerialObject::cleanFilamentBox(int, int, float, float, bool) */

void __thiscall
SerialObject::cleanFilamentBox
          (SerialObject *this,int param_1,int param_2,float param_3,float param_4,bool param_5)

{
  double in_f12_13;
  QString aQStack_40 [4];
  undefined4 local_3c;
  QString aQStack_38 [4];
  undefined4 local_34;
  undefined4 *local_30 [2];
  undefined4 local_28;
  
  local_28 = 0;
  local_30[0] = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005fcf50 to 005fcf57 has its CatchHandler @ 005fd1d8 */
  QString::number(in_f12_13,SUB81((double)param_3 + DAT_00ae04f0,0),
                  (int)((ulonglong)((double)param_3 + DAT_00ae04f0) >> 0x20));
                    /* try { // try from 005fcf64 to 005fcf6b has its CatchHandler @ 005fd280 */
  ::operator+((char *)aQStack_38,(QString *)&DAT_00ad8d90);
                    /* try { // try from 005fcf78 to 005fcf7f has its CatchHandler @ 005fd278 */
  ::operator+((QString *)&local_3c,(char *)aQStack_38);
                    /* try { // try from 005fcf98 to 005fcf9f has its CatchHandler @ 005fd270 */
  sendGcodeCmd(aQStack_40,this,&local_3c,1,0,0,0);
  QString::~QString(aQStack_40);
  QString::~QString((QString *)&local_3c);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  QString::~QString((QString *)local_30);
  local_30[0] = (undefined4 *)QString::fromAscii_helper("%1",-1);
  local_28 = 0;
                    /* try { // try from 005fd014 to 005fd01b has its CatchHandler @ 005fd268 */
  QString::number(in_f12_13,SUB81((double)(param_4 + _DAT_00ae04f8),0),
                  (int)((ulonglong)(double)(param_4 + _DAT_00ae04f8) >> 0x20));
                    /* try { // try from 005fd028 to 005fd02f has its CatchHandler @ 005fd260 */
  ::operator+((char *)aQStack_38,(QString *)&DAT_00ad8d80);
                    /* try { // try from 005fd03c to 005fd043 has its CatchHandler @ 005fd258 */
  ::operator+((QString *)&local_3c,(char *)aQStack_38);
                    /* try { // try from 005fd05c to 005fd063 has its CatchHandler @ 005fd234 */
  sendGcodeCmd(aQStack_40,this,&local_3c,1,0,0,0);
  QString::~QString(aQStack_40);
  QString::~QString((QString *)&local_3c);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  QString::~QString((QString *)local_30);
  local_3c = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005fd0b8 to 005fd0bf has its CatchHandler @ 005fd220 */
  sendGcodeCmd(aQStack_40,this,&local_3c,1,0,0,0);
  QString::~QString(aQStack_40);
  QString::~QString((QString *)&local_3c);
  flushFilamentFrist((int)this,SUB41(param_1,0));
  local_28 = 0;
  flushFilamentBrush(SUB41(this,0),0.0,param_3);
  flushFilamentSecond((int)this,param_1);
  local_28 = 0;
  flushFilamentBrush(SUB41(this,0),1.4013e-45,param_3);
  local_34 = QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005fd150 to 005fd157 has its CatchHandler @ 005fd218 */
  QString::number((int)aQStack_38,param_1);
                    /* try { // try from 005fd164 to 005fd16b has its CatchHandler @ 005fd210 */
  ::operator+((char *)&local_3c,(QString *)"F23 C");
                    /* try { // try from 005fd174 to 005fd17b has its CatchHandler @ 005fd1ec */
  sendCmdToUart4(aQStack_40,this,&local_3c);
  QString::~QString(aQStack_40);
  QString::~QString((QString *)&local_3c);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  return;
}


// ===== SerialObject::doLoadAndUnload @ 005fda70

/* SerialObject::doLoadAndUnload(int, int, float, float, bool) */

int __thiscall
SerialObject::doLoadAndUnload
          (SerialObject *this,int param_1,int param_2,float param_3,float param_4,bool param_5)

{
  SerialObject SVar1;
  QDebug *pQVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  GetConfigFile *this_00;
  Config *this_01;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *local_a8;
  int *local_a4;
  int *local_a0;
  int *local_9c;
  int *local_98;
  int *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  QString aQStack_88 [4];
  int *local_84;
  QString aQStack_80 [4];
  undefined4 local_7c;
  QString *local_78;
  int local_74;
  int local_70;
  uint local_6c;
  QString *local_68;
  char *local_64;
  int local_60;
  int local_5c;
  char *local_58;
  undefined **local_54;
  undefined **local_50;
  char *local_4c;
  char *local_48;
  int local_44;
  int *local_40;
  undefined4 local_34;
  
  local_34 = 0;
  uVar8 = (ulonglong)(uint)param_3;
  uVar6 = (uint)param_5;
  QDebug::QDebug((QDebug *)&local_a8,2);
                    /* try { // try from 005fdb04 to 005fdb73 has its CatchHandler @ 005fe84c */
  local_50 = &PTR_s_Internal_Server_Error_00af0000;
  pQVar2 = (QDebug *)QDebug::operator<<((QDebug *)&local_a8,"../ad5x/serial/SerialObject.cpp");
  local_54 = &PTR_s_Internal_Server_Error_00af0000;
  pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,"doLoadAndUnload");
  pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,"loadChn:");
  pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,param_1);
  pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,"unLoadChn:");
  pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,param_2);
  pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,"m_lastChn:");
  QDebug::operator<<(pQVar2,*(int *)(this + 0x24c));
  QDebug::~QDebug((QDebug *)&local_a8);
  if ((uVar6 == 0) ||
     ((iVar3 = checkFilamentSenser(this), iVar3 != 0 && (*(int *)(this + 0x24c) != param_1)))) {
    local_34 = 0;
    uVar6 = 0;
    cutFilament(this,param_2,(float)uVar8,param_4);
  }
  else {
    checkCrotchCutting(this,param_1);
  }
  local_44 = 0xe20000;
  local_64 = "g()";
  local_58 = 
  "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
  ;
  local_4c = "https://wiki.flashforge.com/en/ad5x/error_code_list_ad5x#e0114-ifs-homing-error";
  local_48 = &DAT_00add394;
  local_5c = 0;
  uVar7 = 0;
  local_6c = 0;
  local_70 = 0;
  local_60 = 0;
  iVar3 = 0;
  local_40 = &QString::shared_null;
  local_74 = param_1;
LAB_005fdc34:
  do {
    SVar1 = this[0x2e3];
joined_r0x005fdc38:
    while( true ) {
      if (SVar1 != (SerialObject)0x0) goto LAB_005fddfc;
      if (uVar6 == 0) break;
      if ((iVar3 == 0) || (local_6c != 0)) {
        QMutex::lock();
        iVar5 = *(int *)(this + 0x298);
        QMutex::unlock();
        pcVar4 = local_64;
        if ((iVar5 >> (local_74 - 1U & 0x1f) & 1U) == 0) {
          local_70 = local_70 + 1;
          if (10 < local_70) {
            local_5c = autoDetectLoad(this,local_74,*(int *)(this + 0x248),(bool)this[0x2e0],false);
            if (local_5c == 0) {
              return 6;
            }
            local_74 = *(int *)(this + (*(int *)(this + 0x248) + 0x94) * 4);
            checkCrotchCutting(this,local_74);
            local_70 = 0;
          }
        }
        else {
          local_8c = QString::fromAscii_helper(local_64 + -0x1104,-1);
                    /* try { // try from 005fe260 to 005fe267 has its CatchHandler @ 005fe6f4 */
          QString::number((int)&local_90,local_74);
                    /* try { // try from 005fe278 to 005fe27f has its CatchHandler @ 005fe6ec */
          ::operator+((char *)&local_94,(QString *)(local_58 + -0x2438));
          local_68 = (QString *)&local_98;
                    /* try { // try from 005fe294 to 005fe29b has its CatchHandler @ 005fe6c8 */
          ::operator+((QString *)&local_98,(char *)&local_94);
                    /* try { // try from 005fe2a0 to 005fe2a7 has its CatchHandler @ 005fe7a8 */
          local_9c = (int *)QString::fromAscii_helper(pcVar4 + -0x1104,-1);
          local_78 = (QString *)&local_a0;
                    /* try { // try from 005fe2bc to 005fe2c3 has its CatchHandler @ 005fe7a0 */
          QString::number((int)local_78,0x4b0);
                    /* try { // try from 005fe2d0 to 005fe2d7 has its CatchHandler @ 005fe798 */
          ::operator+((QString *)&local_a4,(QString *)&local_98);
                    /* try { // try from 005fe2e4 to 005fe2eb has its CatchHandler @ 005fe76c */
          sendCmdToUart4(&local_a8,this,(QString *)&local_a4);
          QString::~QString((QString *)&local_a8);
          QString::~QString((QString *)&local_a4);
          QString::~QString(local_78);
          QString::~QString((QString *)&local_9c);
          QString::~QString((QString *)&local_98);
          QString::~QString((QString *)&local_94);
          QString::~QString((QString *)&local_90);
          QString::~QString((QString *)&local_8c);
          iVar3 = checkFeeding(this,local_74);
          if ((iVar3 == 0) || (iVar3 == 7)) {
            if (local_5c != 0) {
              iVar3 = 9;
            }
            goto LAB_005fde04;
          }
          local_6c = 0;
          local_70 = 0;
          if (iVar3 == 8) {
            local_a4 = (int *)QString::fromAscii_helper("F15",-1);
                    /* try { // try from 005fe378 to 005fe37f has its CatchHandler @ 005fe6c0 */
            sendCmdToUart4(&local_a8,this,(QString *)&local_a4);
            QString::~QString((QString *)&local_a8);
            QString::~QString((QString *)&local_a4);
            checkCrotchCutting(this,param_1);
            sleep(1);
            local_70 = 0;
            local_6c = uVar6;
            goto LAB_005fdc34;
          }
        }
      }
      else if (iVar3 == 4) {
        iVar5 = timeOutPause(this);
        if (iVar5 == 0) {
LAB_005fddfc:
          iVar3 = 1;
LAB_005fde04:
          local_a4 = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005fde30 to 005fde37 has its CatchHandler @ 005fe6ac */
          sendGcodeCmd(&local_a8,this,(QString *)&local_a4,1,0,0,0);
          QString::~QString((QString *)&local_a8);
          QString::~QString((QString *)&local_a4);
          return iVar3;
        }
        this_00 = (GetConfigFile *)getConfigFile();
        this_01 = (Config *)GetConfigFile::configFile(this_00);
        iVar5 = Config::getChannel(this_01);
        uVar6 = (uint)(byte)this[0x2f1];
        if ((uVar6 == 0) || (local_74 != iVar5)) {
          local_34 = 0;
          cutFilament(this,param_2,(float)uVar8,param_4);
          uVar6 = 0;
          local_60 = 0;
        }
        else {
          this[0x2f1] = (SerialObject)0x0;
          local_6c = uVar6;
        }
      }
      else if (iVar3 == 3) {
        uVar6 = timeOutPause(this);
        if (uVar6 == 0) goto LAB_005fddfc;
        checkCrotchCutting(this,local_74);
        local_6c = uVar6;
      }
      else if (iVar3 == 10) {
        uVar6 = timeOutPause(this);
        if (uVar6 == 0) goto LAB_005fddfc;
        checkCrotchCutting(this,local_74);
        local_6c = uVar6;
      }
      sleep(1);
      SVar1 = this[0x2e3];
    }
    if (uVar7 == 0) {
      iVar3 = checkRefullingFrist(this,param_2);
      pcVar4 = local_64;
    }
    else {
      iVar3 = checkRefulling(this,param_2);
      pcVar4 = local_64;
    }
    local_64 = pcVar4;
    if (iVar3 == 8) {
      local_a4 = (int *)QString::fromAscii_helper("F15",-1);
                    /* try { // try from 005fdf74 to 005fdf7b has its CatchHandler @ 005fe920 */
      sendCmdToUart4(&local_a8,this,(QString *)&local_a4);
      QString::~QString((QString *)&local_a8);
      QString::~QString((QString *)&local_a4);
      checkCrotchCutting(this,param_2);
      local_8c = QString::fromAscii_helper(local_64 + -0x1104,-1);
                    /* try { // try from 005fdfb8 to 005fdfbf has its CatchHandler @ 005fe8ac */
      QString::number((int)&local_90,param_2);
                    /* try { // try from 005fdfd0 to 005fdfd7 has its CatchHandler @ 005fe8b4 */
      ::operator+((char *)&local_94,(QString *)"F11 C");
      local_68 = (QString *)&local_98;
                    /* try { // try from 005fdfec to 005fdff3 has its CatchHandler @ 005fe928 */
      ::operator+(local_68,(char *)&local_94);
                    /* try { // try from 005fdffc to 005fe003 has its CatchHandler @ 005fe930 */
      local_9c = (int *)QString::fromAscii_helper(local_64 + -0x1104,-1);
      local_78 = (QString *)&local_a0;
                    /* try { // try from 005fe018 to 005fe01f has its CatchHandler @ 005fe938 */
      QString::number((int)local_78,0x4b0);
                    /* try { // try from 005fe028 to 005fe02f has its CatchHandler @ 005fe940 */
      ::operator+((QString *)&local_a4,local_68);
                    /* try { // try from 005fe03c to 005fe043 has its CatchHandler @ 005fe948 */
      sendCmdToUart4(&local_a8,this,(QString *)&local_a4);
      QString::~QString((QString *)&local_a8);
      QString::~QString((QString *)&local_a4);
      QString::~QString(local_78);
      QString::~QString((QString *)&local_9c);
      QString::~QString(local_68);
      QString::~QString((QString *)&local_94);
      QString::~QString((QString *)&local_90);
      QString::~QString((QString *)&local_8c);
      sleep(1);
      SVar1 = this[0x2e3];
      goto joined_r0x005fdc38;
    }
    if (iVar3 != 4) {
      if (iVar3 == 1) {
        return 1;
      }
      if (iVar3 == 10) {
        QDebug::QDebug((QDebug *)&local_a8,2);
                    /* try { // try from 005fe3ec to 005fe41f has its CatchHandler @ 005fe950 */
        pQVar2 = (QDebug *)QDebug::operator<<((QDebug *)&local_a8,(char *)(local_50 + -0x1da4));
        pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,(char *)(local_54 + -0x14dd));
        pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,"IFS home error! chn:");
        QDebug::operator<<(pQVar2,param_2);
        QDebug::~QDebug((QDebug *)&local_a8);
        pcVar4 = local_48;
        if (this[0x1f5] != (SerialObject)0x0) {
          pcVar4 = local_4c;
        }
        local_84 = (int *)QString::fromAscii_helper(pcVar4,-1);
                    /* try { // try from 005fe460 to 005fe467 has its CatchHandler @ 005fe958 */
        QMetaObject::tr((char *)aQStack_88,(char *)&staticMetaObject);
                    /* try { // try from 005fe474 to 005fe47b has its CatchHandler @ 005fe960 */
        ::operator+((char *)&local_8c,(QString *)"E0114: IFS");
                    /* try { // try from 005fe484 to 005fe48b has its CatchHandler @ 005fe7b0 */
        local_90 = QString::fromAscii_helper(local_64 + -0x1104,-1);
                    /* try { // try from 005fe49c to 005fe4a3 has its CatchHandler @ 005fe7d4 */
        QString::number((int)&local_94,param_2);
        local_68 = (QString *)&local_98;
                    /* try { // try from 005fe4b4 to 005fe4bb has its CatchHandler @ 005fe7e8 */
        ::operator+(local_68,(QString *)&local_8c);
                    /* try { // try from 005fe4d0 to 005fe4d7 has its CatchHandler @ 005fe7fc */
        QMetaObject::tr((char *)&local_9c,(char *)&staticMetaObject);
        local_78 = (QString *)&local_a0;
                    /* try { // try from 005fe4e8 to 005fe4ef has its CatchHandler @ 005fe8bc */
        ::operator+(local_78,local_68);
        local_a4 = local_84;
        *local_84 = *local_84 + 1;
                    /* try { // try from 005fe518 to 005fe51f has its CatchHandler @ 005fe8d0 */
        local_a8 = (int *)QString::fromAscii_helper("E0114",-1);
                    /* try { // try from 005fe534 to 005fe53b has its CatchHandler @ 005fe90c */
        sigIFSError(this,local_78,(QString *)&local_a4,&local_a8);
        QString::~QString((QString *)&local_a8);
        QString::~QString((QString *)&local_a4);
        QString::~QString(local_78);
        QString::~QString((QString *)&local_9c);
        QString::~QString(local_68);
        QString::~QString((QString *)&local_94);
        QString::~QString((QString *)&local_90);
        QString::~QString((QString *)&local_8c);
        QString::~QString(aQStack_88);
                    /* try { // try from 005fe588 to 005fe58f has its CatchHandler @ 005fe958 */
        sleep(1);
        uVar6 = 1;
        QString::~QString((QString *)&local_84);
        SVar1 = this[0x2e3];
      }
      else {
        if (uVar7 == 0) {
          local_7c = QString::fromAscii_helper(pcVar4 + -0x1104,-1);
                    /* try { // try from 005fdca8 to 005fdcaf has its CatchHandler @ 005fe738 */
          QString::number((int)aQStack_80,param_2);
                    /* try { // try from 005fdcbc to 005fdcc3 has its CatchHandler @ 005fe730 */
          ::operator+((char *)&local_84,(QString *)"F11 C");
                    /* try { // try from 005fdcd4 to 005fdcdb has its CatchHandler @ 005fe728 */
          ::operator+(aQStack_88,(char *)&local_84);
                    /* try { // try from 005fdce0 to 005fdce7 has its CatchHandler @ 005fe6fc */
          local_8c = QString::fromAscii_helper(pcVar4 + -0x1104,-1);
                    /* try { // try from 005fdcf8 to 005fdcff has its CatchHandler @ 005fe820 */
          QString::number((int)&local_90,0x46);
                    /* try { // try from 005fdd0c to 005fdd13 has its CatchHandler @ 005fe818 */
          ::operator+((QString *)&local_94,aQStack_88);
          local_68 = (QString *)&local_98;
                    /* try { // try from 005fdd28 to 005fdd2f has its CatchHandler @ 005fe810 */
          ::operator+((QString *)&local_98,(char *)&local_94);
                    /* try { // try from 005fdd34 to 005fdd3b has its CatchHandler @ 005fe740 */
          local_9c = (int *)QString::fromAscii_helper(pcVar4 + -0x1104,-1);
          local_78 = (QString *)&local_a0;
                    /* try { // try from 005fdd50 to 005fdd57 has its CatchHandler @ 005fe868 */
          QString::number((int)local_78,0x4b0);
                    /* try { // try from 005fdd64 to 005fdd6b has its CatchHandler @ 005fe860 */
          ::operator+((QString *)&local_a4,(QString *)&local_98);
                    /* try { // try from 005fdd78 to 005fdd7f has its CatchHandler @ 005fe828 */
          sendCmdToUart4(&local_a8,this,(QString *)&local_a4);
          QString::~QString((QString *)&local_a8);
          QString::~QString((QString *)&local_a4);
          QString::~QString(local_78);
          QString::~QString((QString *)&local_9c);
          QString::~QString((QString *)&local_98);
          QString::~QString((QString *)&local_94);
          QString::~QString((QString *)&local_90);
          QString::~QString((QString *)&local_8c);
          QString::~QString(aQStack_88);
          QString::~QString((QString *)&local_84);
          uVar7 = 0;
          QString::~QString(aQStack_80);
          QString::~QString((QString *)&local_7c);
        }
        else {
          checkCrotchCutting(this,local_74);
        }
        sleep(1);
        SVar1 = this[0x2e3];
        uVar6 = uVar7;
        uVar7 = 1;
      }
      goto joined_r0x005fdc38;
    }
    if (local_60 != 0) {
      *(int *)(local_44 + -0x3c94) = *(int *)(local_44 + -0x3c94) + 1;
      *(int *)(local_44 + -0x3c94) = *(int *)(local_44 + -0x3c94) + 1;
      local_98 = local_40;
      local_94 = local_40;
      local_68 = (QString *)&local_98;
                    /* try { // try from 005fe114 to 005fe11b has its CatchHandler @ 005fe968 */
      getIFSUnLoadErrorCode((int)&local_9c,(QString *)this,(QString *)param_2);
                    /* try { // try from 005fe120 to 005fe127 has its CatchHandler @ 005fe904 */
      QDebug::QDebug((QDebug *)&local_a8,2);
                    /* try { // try from 005fe130 to 005fe163 has its CatchHandler @ 005fe8f0 */
      pQVar2 = (QDebug *)QDebug::operator<<((QDebug *)&local_a8,(char *)(local_50 + -0x1da4));
      pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,(char *)(local_54 + -0x14dd));
      pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,"Unload timeOut! chn:");
      QDebug::operator<<(pQVar2,param_2);
      QDebug::~QDebug((QDebug *)&local_a8);
      local_a0 = local_9c;
      *local_9c = *local_9c + 1;
      local_a4 = local_94;
      *local_94 = *local_94 + 1;
      local_a8 = local_98;
      *local_98 = *local_98 + 1;
      local_78 = (QString *)&local_a0;
                    /* try { // try from 005fe1e4 to 005fe1eb has its CatchHandler @ 005fe870 */
      sigIFSError(this,local_78,(QString *)&local_a4,&local_a8);
      QString::~QString((QString *)&local_a8);
      QString::~QString((QString *)&local_a4);
      QString::~QString(local_78);
                    /* try { // try from 005fe20c to 005fe21b has its CatchHandler @ 005fe904 */
      checkCrotchF39(this,param_2);
      sleep(1);
      QString::~QString((QString *)&local_9c);
      QString::~QString((QString *)&local_98);
      uVar6 = 1;
      QString::~QString((QString *)&local_94);
      SVar1 = this[0x2e3];
      goto joined_r0x005fdc38;
    }
    local_34 = 0;
    cutFilament(this,param_2,(float)uVar8,param_4);
    sleep(1);
    local_60 = 1;
  } while( true );
}


// ===== Config::getFilamentSenserMax @ 006414b8

/* Config::getFilamentSenserMax() */

undefined4 __thiscall Config::getFilamentSenserMax(Config *this)

{
  int iVar1;
  Value *this_00;
  Mutex *this_01;
  undefined4 uVar2;
  
  this_01 = (Mutex *)(this + 0x6f0);
  ffsdk::Mutex::lock(this_01);
  iVar1 = Json::Value::isMember((Value *)(this + 0x170),"FilamentSenserMax");
  if (iVar1 == 0) {
    ffsdk::Mutex::unlock(this_01);
    setFilamentSenserMax(this,DAT_00af1ee8);
  }
  else {
    this_00 = (Value *)Json::Value::operator[]((Value *)(this + 0x170),"FilamentSenserMax");
    uVar2 = Json::Value::asFloat(this_00);
    *(undefined4 *)(this + 0x164) = uVar2;
  }
  ffsdk::Mutex::unlock(this_01);
  return *(undefined4 *)(this + 0x164);
}


// ===== Config::getFilamentSenserMin @ 00641724

/* Config::getFilamentSenserMin() */

undefined4 __thiscall Config::getFilamentSenserMin(Config *this)

{
  int iVar1;
  Value *this_00;
  Mutex *this_01;
  undefined4 uVar2;
  
  this_01 = (Mutex *)(this + 0x6f0);
  ffsdk::Mutex::lock(this_01);
  iVar1 = Json::Value::isMember((Value *)(this + 0x170),"FilamentSenserMin");
  if (iVar1 == 0) {
    ffsdk::Mutex::unlock(this_01);
    setFilamentSenserMin(this,DAT_00af1eec);
  }
  else {
    this_00 = (Value *)Json::Value::operator[]((Value *)(this + 0x170),"FilamentSenserMin");
    uVar2 = Json::Value::asFloat(this_00);
    *(undefined4 *)(this + 0x168) = uVar2;
  }
  ffsdk::Mutex::unlock(this_01);
  return *(undefined4 *)(this + 0x168);
}


// ===== Print::checkFilament @ 00686d4c

/* Print::checkFilament(QString) */

undefined4 __thiscall Print::checkFilament(Print *this,QString *param_2)

{
  QTextStream *pQVar1;
  QDebug *pQVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  QTextStream *local_18 [2];
  
  pQVar1 = operator_new(0x18);
                    /* try { // try from 00686d84 to 00686d8b has its CatchHandler @ 00686ee4 */
  local_18[0] = (QTextStream *)0x2;
  QTextStream::QTextStream(pQVar1,pQVar1 + 8,local_18);
  *(int **)(pQVar1 + 8) = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
  *(undefined4 *)(pQVar1 + 0xc) = 1;
  *(undefined4 *)(pQVar1 + 0x10) = 2;
  pQVar1[0x14] = (QTextStream)0x1;
  pQVar1[0x15] = (QTextStream)0x1;
  local_18[0] = pQVar1;
                    /* try { // try from 00686dd4 to 00686e23 has its CatchHandler @ 00686ef8 */
  pQVar2 = (QDebug *)QDebug::operator<<((QDebug *)local_18,"../ad5x/UI/print.cpp");
  pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,"checkFilament");
  puVar3 = (undefined4 *)QDebug::operator<<(pQVar2,"filament");
  pQVar1 = (QTextStream *)QTextStream::operator<<((QTextStream *)*puVar3,'\"');
  pQVar1 = (QTextStream *)QTextStream::operator<<(pQVar1,param_2);
  QTextStream::operator<<(pQVar1,'\"');
  if (((QTextStream *)*puVar3)[0x14] != (QTextStream)0x0) {
                    /* try { // try from 00686eb8 to 00686ebf has its CatchHandler @ 00686ef8 */
    QTextStream::operator<<((QTextStream *)*puVar3,' ');
  }
  QDebug::~QDebug((QDebug *)local_18);
  iVar4 = qStringComparisonHelper(param_2,"None");
  if (iVar4 != 0) {
    return 1;
  }
  iVar4 = qStringComparisonHelper(param_2,"SILK");
  if (iVar4 == 0) {
    iVar5 = qStringComparisonHelper(param_2,(char *)&PTR_LAB_00adcdf0);
    iVar4 = 0xf0;
    if (iVar5 != 0) {
      iVar5 = *(int *)(this + 0xf0);
      goto LAB_00686e94;
    }
  }
  iVar4 = 0xfa;
  iVar5 = *(int *)(this + 0xf0);
LAB_00686e94:
  uVar6 = 0;
  if (iVar5 < iVar4) {
    if (0x45 < *(int *)(this + 0xf8)) {
      return 0;
    }
    uVar6 = 1;
  }
  return uVar6;
}


// ===== SerialObject::printChnFilament @ 007ec48c

/* SerialObject::printChnFilament(QString) */

void __thiscall SerialObject::printChnFilament(SerialObject *this,undefined4 param_2)

{
  void *local_10;
  undefined4 local_c;
  
  local_10 = (void *)0x0;
  local_c = param_2;
  QMetaObject::activate((QObject *)this,(QMetaObject *)&staticMetaObject,0x2f,&local_10);
  return;
}



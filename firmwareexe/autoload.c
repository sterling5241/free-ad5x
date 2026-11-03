// ===== Filament::fourInOneLoadFristStep @ 00592534

/* Filament::fourInOneLoadFristStep(int) */

undefined4 __thiscall Filament::fourInOneLoadFristStep(Filament *this,int param_1)

{
  Filament FVar1;
  QTextStream *pQVar2;
  QDebug *pQVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  SerialObject *this_00;
  Data *local_68;
  Data *local_64;
  Data *local_60;
  Data *local_5c;
  QTextStream *local_58;
  QString aQStack_54 [4];
  QString aQStack_50 [4];
  undefined4 local_4c;
  Data *local_48 [2];
  char *local_40;
  undefined4 *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  
  SerialObject::checkCrotchCutting(*(SerialObject **)(this + 0x14),param_1);
  local_38 = "g()";
  uVar6 = *(undefined4 *)(this + 0x14);
  local_4c = QString::fromAscii_helper("%1",-1);
                    /* try { // try from 00592594 to 0059259b has its CatchHandler @ 00593008 */
  QString::number((int)aQStack_50,param_1);
                    /* try { // try from 005925ac to 005925b3 has its CatchHandler @ 00593000 */
  local_34 = 
  "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
  ;
  ::operator+((char *)aQStack_54,(QString *)&DAT_00addbc8);
                    /* try { // try from 005925c0 to 005925c7 has its CatchHandler @ 00592ff8 */
  ::operator+((QString *)&local_58,(char *)aQStack_54);
                    /* try { // try from 005925cc to 005925d3 has its CatchHandler @ 00592ff0 */
  local_5c = (Data *)QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005925e0 to 005925e7 has its CatchHandler @ 00592fe8 */
  QString::number((int)&local_60,0x4b0);
                    /* try { // try from 005925f0 to 005925f7 has its CatchHandler @ 00592fe0 */
  ::operator+((QString *)&local_64,(QString *)&local_58);
                    /* try { // try from 00592600 to 00592607 has its CatchHandler @ 00592f9c */
  SerialObject::sendCmdToUart4(&local_68,uVar6,&local_64);
  QString::~QString((QString *)&local_68);
  QString::~QString((QString *)&local_64);
  QString::~QString((QString *)&local_60);
  QString::~QString((QString *)&local_5c);
  QString::~QString((QString *)&local_58);
  QString::~QString(aQStack_54);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  if (this[0x1c] != (Filament)0x0) {
    local_40 = 
    "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
    ;
    local_30 = 
    "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
    ;
    iVar7 = 0;
    local_3c = &QString::shared_null;
    do {
      uVar6 = *(undefined4 *)(this + 0x14);
      local_68 = (Data *)QString::fromAscii_helper(local_40 + -0x2424,-1);
                    /* try { // try from 00592a48 to 00592a4f has its CatchHandler @ 00592f88 */
      SerialObject::sendCmdToUart4(local_48,uVar6,&local_68);
      iVar5 = *(int *)local_68;
      *(int *)local_68 = iVar5 + -1;
      if (iVar5 == 1) {
        QString::free(local_68);
      }
                    /* try { // try from 00592a78 to 00592a7f has its CatchHandler @ 00592f80 */
      pQVar2 = operator_new(0x18);
                    /* try { // try from 00592a94 to 00592a9b has its CatchHandler @ 00592f6c */
      local_58 = (QTextStream *)0x2;
      QTextStream::QTextStream(pQVar2,pQVar2 + 8,&local_58);
      *(undefined4 **)(pQVar2 + 8) = local_3c;
      QString::shared_null = QString::shared_null + 1;
      *(undefined4 *)(pQVar2 + 0xc) = 1;
      *(undefined4 *)(pQVar2 + 0x10) = 0;
      pQVar2[0x14] = (QTextStream)0x1;
      pQVar2[0x15] = (QTextStream)0x1;
      local_58 = pQVar2;
                    /* try { // try from 00592adc to 00592ae3 has its CatchHandler @ 00592f64 */
      QString::fromAscii((char *)&local_5c,0xadd630);
                    /* try { // try from 00592ae8 to 00592aef has its CatchHandler @ 00592f50 */
      QTextStream::operator<<(pQVar2,(QString *)&local_5c);
      iVar5 = *(int *)local_5c;
      *(int *)local_5c = iVar5 + -1;
      if (iVar5 == 1) {
        QString::free(local_5c);
      }
      if (local_58[0x14] != (QTextStream)0x0) {
                    /* try { // try from 00592b28 to 00592b7f has its CatchHandler @ 00592f64 */
        QTextStream::operator<<(local_58,' ');
      }
      pQVar2 = local_58;
                    /* try { // try from 00592690 to 00592697 has its CatchHandler @ 00592f64 */
      QString::fromAscii((char *)&local_60,0xadf1d0);
                    /* try { // try from 0059269c to 005926a3 has its CatchHandler @ 00592f3c */
      QTextStream::operator<<(pQVar2,(QString *)&local_60);
      iVar5 = *(int *)local_60;
      *(int *)local_60 = iVar5 + -1;
      if (iVar5 == 1) {
        QString::free(local_60);
      }
      if (local_58[0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_58,' ');
      }
      pQVar2 = local_58;
                    /* try { // try from 005926e4 to 005926eb has its CatchHandler @ 00592f64 */
      QString::fromAscii((char *)&local_64,0xaddbe0);
                    /* try { // try from 005926f0 to 005926f7 has its CatchHandler @ 00592f28 */
      QTextStream::operator<<(pQVar2,(QString *)&local_64);
      iVar5 = *(int *)local_64;
      *(int *)local_64 = iVar5 + -1;
      if (iVar5 == 1) {
        QString::free(local_64);
      }
      if (local_58[0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_58,' ');
      }
                    /* try { // try from 00592730 to 0059276f has its CatchHandler @ 00592f64 */
      pQVar2 = (QTextStream *)QTextStream::operator<<(local_58,'\"');
      pQVar2 = (QTextStream *)QTextStream::operator<<(pQVar2,(QString *)local_48);
      QTextStream::operator<<(pQVar2,'\"');
      if (local_58[0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_58,' ');
      }
      pQVar2 = local_58;
      QString::fromAscii((char *)&local_68,0xae4460);
                    /* try { // try from 00592774 to 0059277b has its CatchHandler @ 00592f0c */
      QTextStream::operator<<(pQVar2,(QString *)&local_68);
      iVar5 = *(int *)local_68;
      *(int *)local_68 = iVar5 + -1;
      if (iVar5 == 1) {
        QString::free(local_68);
      }
      if (local_58[0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_58,' ');
      }
                    /* try { // try from 005927b4 to 005927bb has its CatchHandler @ 00592f64 */
      QTextStream::operator<<(local_58,iVar7);
      if (local_58[0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_58,' ');
      }
      QDebug::~QDebug((QDebug *)&local_58);
                    /* try { // try from 005927dc to 005927e3 has its CatchHandler @ 00592f80 */
      local_58 = (QTextStream *)QString::fromAscii_helper("[: ]",-1);
                    /* try { // try from 005927f4 to 005927fb has its CatchHandler @ 00592f04 */
      QRegExp::QRegExp((QRegExp *)&local_5c,&local_58,1,0);
                    /* try { // try from 00592820 to 00592827 has its CatchHandler @ 00592efc */
      local_60 = (Data *)0x1;
      QString::section(&local_64,local_48,&local_5c,0xb,0xb,&local_60);
                    /* try { // try from 0059282c to 00592833 has its CatchHandler @ 00592ef4 */
      QString::trimmed();
                    /* try { // try from 0059283c to 00592843 has its CatchHandler @ 00592ea8 */
      iVar5 = QString::toInt((bool *)&local_68,0);
      iVar4 = *(int *)local_68;
      *(int *)local_68 = iVar4 + -1;
      if (iVar4 == 1) {
        QString::free(local_68);
      }
      iVar4 = *(int *)local_64;
      *(int *)local_64 = iVar4 + -1;
      if (iVar4 == 1) {
        QString::free(local_64);
      }
      QRegExp::~QRegExp((QRegExp *)&local_5c);
      iVar4 = *(int *)local_58;
      *(int *)local_58 = iVar4 + -1;
      if (iVar4 == 1) {
        QString::free((Data *)local_58);
      }
      if ((iVar5 == 0) && (iVar7 = iVar7 + 1, 0x2d < iVar7)) {
        QString::~QString((QString *)local_48);
        return 2;
      }
                    /* try { // try from 005928e0 to 005928e7 has its CatchHandler @ 00592f80 */
      local_58 = (QTextStream *)QString::fromAscii_helper("[: ]",-1);
                    /* try { // try from 005928f8 to 005928ff has its CatchHandler @ 00592eec */
      QRegExp::QRegExp((QRegExp *)&local_5c,&local_58,1,0);
                    /* try { // try from 00592924 to 0059292b has its CatchHandler @ 00592ee4 */
      local_60 = (Data *)0x1;
      QString::section(&local_64,local_48,&local_5c,3,3,&local_60);
                    /* try { // try from 00592930 to 00592937 has its CatchHandler @ 00592edc */
      QString::trimmed();
                    /* try { // try from 00592940 to 00592947 has its CatchHandler @ 00592ed4 */
      iVar5 = QString::toInt((bool *)&local_68,0);
      iVar4 = *(int *)local_68;
      *(int *)local_68 = iVar4 + -1;
      if (iVar4 == 1) {
        QString::free(local_68);
      }
      iVar4 = *(int *)local_64;
      *(int *)local_64 = iVar4 + -1;
      if (iVar4 == 1) {
        QString::free(local_64);
      }
      QRegExp::~QRegExp((QRegExp *)&local_5c);
      iVar4 = *(int *)local_58;
      *(int *)local_58 = iVar4 + -1;
      if (iVar4 == 1) {
        QString::free((Data *)local_58);
      }
      if (iVar5 == 5) {
        QString::~QString((QString *)local_48);
        break;
      }
      this_00 = *(SerialObject **)(this + 0x14);
      if (iVar5 == 0x7f) {
                    /* try { // try from 00592b90 to 00592b97 has its CatchHandler @ 00592f80 */
        local_68 = (Data *)QString::fromAscii_helper("F15",-1);
                    /* try { // try from 00592ba4 to 00592bab has its CatchHandler @ 005930a0 */
        SerialObject::sendCmdToUart4(aQStack_50,this_00,&local_68);
        QString::~QString(aQStack_50);
        QString::~QString((QString *)&local_68);
                    /* try { // try from 00592bc0 to 00592bdb has its CatchHandler @ 00592f80 */
        SerialObject::checkCrotchCutting(*(SerialObject **)(this + 0x14),param_1);
        uVar6 = *(undefined4 *)(this + 0x14);
        local_4c = QString::fromAscii_helper(local_38 + -0x1104,-1);
                    /* try { // try from 00592be8 to 00592bef has its CatchHandler @ 00593098 */
        QString::number((int)aQStack_50,param_1);
                    /* try { // try from 00592bfc to 00592c03 has its CatchHandler @ 00593090 */
        QString::fromAscii((char *)&local_58,(int)(local_34 + -0x2438));
                    /* try { // try from 00592c08 to 00592c0f has its CatchHandler @ 00593088 */
        QString::append((QString *)&local_58);
                    /* try { // try from 00592c1c to 00592c23 has its CatchHandler @ 00593080 */
        ::operator+((QString *)&local_5c,(char *)&local_58);
                    /* try { // try from 00592c2c to 00592c33 has its CatchHandler @ 00593078 */
        local_60 = (Data *)QString::fromAscii_helper(local_38 + -0x1104,-1);
                    /* try { // try from 00592c40 to 00592c47 has its CatchHandler @ 00593070 */
        QString::number((int)&local_64,0x4b0);
        local_68 = local_5c;
        *(int *)local_5c = *(int *)local_5c + 1;
                    /* try { // try from 00592c6c to 00592c73 has its CatchHandler @ 00593068 */
        QString::append((QString *)&local_68);
                    /* try { // try from 00592c7c to 00592c83 has its CatchHandler @ 00593024 */
        SerialObject::sendCmdToUart4(aQStack_54,uVar6,&local_68);
        QString::~QString(aQStack_54);
        QString::~QString((QString *)&local_68);
        QString::~QString((QString *)&local_64);
        QString::~QString((QString *)&local_60);
        QString::~QString((QString *)&local_5c);
        QString::~QString((QString *)&local_58);
        QString::~QString(aQStack_50);
        QString::~QString((QString *)&local_4c);
        this_00 = *(SerialObject **)(this + 0x14);
      }
                    /* try { // try from 005929dc to 005929f3 has its CatchHandler @ 00592f80 */
      iVar5 = SerialObject::checkFilamentSenser(this_00);
      if (iVar5 != 0) {
                    /* try { // try from 00592e04 to 00592e0b has its CatchHandler @ 00592f80 */
        QDebug::QDebug((QDebug *)&local_68,0);
                    /* try { // try from 00592e14 to 00592e37 has its CatchHandler @ 00592e8c */
        pQVar3 = (QDebug *)QDebug::operator<<((QDebug *)&local_68,local_30 + -0x29d0);
        pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,"fourInOneLoadFristStep");
        QDebug::operator<<(pQVar3,"checkFilamentSenser");
        QDebug::~QDebug((QDebug *)&local_68);
        QString::~QString((QString *)local_48);
        uVar6 = *(undefined4 *)(this + 0x14);
        goto LAB_00592d8c;
      }
      sleep(1);
      iVar5 = *(int *)local_48[0];
      *(int *)local_48[0] = iVar5 + -1;
      if (iVar5 == 1) {
        QString::free(local_48[0]);
        FVar1 = this[0x1c];
      }
      else {
        FVar1 = this[0x1c];
      }
    } while (FVar1 != (Filament)0x0);
  }
  uVar6 = *(undefined4 *)(this + 0x14);
LAB_00592d8c:
  local_64 = (Data *)QString::fromAscii_helper("F112",-1);
                    /* try { // try from 00592da8 to 00592daf has its CatchHandler @ 00593010 */
  SerialObject::sendCmdToUart4(&local_68,uVar6,&local_64);
  QString::~QString((QString *)&local_68);
  QString::~QString((QString *)&local_64);
  return 0;
}


// ===== SerialObject::fourInOneLoadSecondStep @ 005f7b4c

/* SerialObject::fourInOneLoadSecondStep(int) */

undefined4 __thiscall SerialObject::fourInOneLoadSecondStep(SerialObject *this,int param_1)

{
  char *pcVar1;
  QTextStream *pQVar2;
  int iVar3;
  int iVar4;
  Data *local_60;
  Data *local_5c;
  Data *local_58;
  QTextStream *local_54;
  Data *local_50;
  QString aQStack_4c [4];
  QString aQStack_48 [4];
  undefined4 local_44;
  Data *local_40 [2];
  char *local_38;
  char *local_34;
  char *local_30;
  
  local_34 = "g()";
  local_44 = QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f7ba0 to 005f7ba7 has its CatchHandler @ 005f830c */
  QString::number((int)aQStack_48,param_1);
                    /* try { // try from 005f7bb8 to 005f7bbf has its CatchHandler @ 005f8304 */
  local_30 = 
  "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
  ;
  ::operator+((char *)aQStack_4c,(QString *)"F11 C");
                    /* try { // try from 005f7bd0 to 005f7bd7 has its CatchHandler @ 005f82fc */
  local_38 = 
  "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
  ;
  ::operator+((QString *)&local_50,(char *)aQStack_4c);
                    /* try { // try from 005f7bdc to 005f7be3 has its CatchHandler @ 005f82f4 */
  local_54 = (QTextStream *)QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f7bf0 to 005f7bf7 has its CatchHandler @ 005f82ec */
  QString::number((int)&local_58,0x4b0);
                    /* try { // try from 005f7c00 to 005f7c07 has its CatchHandler @ 005f82e4 */
  ::operator+((QString *)&local_5c,(QString *)&local_50);
                    /* try { // try from 005f7c10 to 005f7c17 has its CatchHandler @ 005f82a0 */
  sendCmdToUart4(&local_60,this,&local_5c);
  QString::~QString((QString *)&local_60);
  QString::~QString((QString *)&local_5c);
  QString::~QString((QString *)&local_58);
  QString::~QString((QString *)&local_54);
  QString::~QString((QString *)&local_50);
  QString::~QString(aQStack_4c);
  QString::~QString(aQStack_48);
  QString::~QString((QString *)&local_44);
  while( true ) {
    local_60 = (Data *)QString::fromAscii_helper("F13",-1);
                    /* try { // try from 005f7c94 to 005f7c9b has its CatchHandler @ 005f828c */
    sendCmdToUart4(local_40,this,&local_60);
    iVar3 = *(int *)local_60;
    *(int *)local_60 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_60);
    }
                    /* try { // try from 005f7cc4 to 005f7ccb has its CatchHandler @ 005f8284 */
    pQVar2 = operator_new(0x18);
                    /* try { // try from 005f7ce0 to 005f7ce7 has its CatchHandler @ 005f8270 */
    local_54 = (QTextStream *)0x2;
    QTextStream::QTextStream(pQVar2,pQVar2 + 8,&local_54);
    *(int **)(pQVar2 + 8) = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar2 + 0xc) = 1;
    *(undefined4 *)(pQVar2 + 0x10) = 0;
    pQVar2[0x14] = (QTextStream)0x1;
    pQVar2[0x15] = (QTextStream)0x1;
    local_54 = pQVar2;
                    /* try { // try from 005f7d24 to 005f7d2b has its CatchHandler @ 005f8268 */
    QString::fromAscii((char *)&local_58,0xae8970);
                    /* try { // try from 005f7d30 to 005f7d37 has its CatchHandler @ 005f8254 */
    QTextStream::operator<<(pQVar2,(QString *)&local_58);
    iVar3 = *(int *)local_58;
    *(int *)local_58 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_58);
    }
    if (local_54[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_54,' ');
    }
    pQVar2 = local_54;
                    /* try { // try from 005f7d78 to 005f7d7f has its CatchHandler @ 005f8268 */
    QString::fromAscii((char *)&local_5c,0xaeabac);
                    /* try { // try from 005f7d84 to 005f7d8b has its CatchHandler @ 005f8240 */
    QTextStream::operator<<(pQVar2,(QString *)&local_5c);
    iVar3 = *(int *)local_5c;
    *(int *)local_5c = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_5c);
    }
    if (local_54[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_54,' ');
    }
    pQVar2 = local_54;
                    /* try { // try from 005f7dcc to 005f7dd3 has its CatchHandler @ 005f8268 */
    QString::fromAscii((char *)&local_60,0xae672c);
                    /* try { // try from 005f7dd8 to 005f7ddf has its CatchHandler @ 005f8224 */
    QTextStream::operator<<(pQVar2,(QString *)&local_60);
    iVar3 = *(int *)local_60;
    *(int *)local_60 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_60);
    }
    if (local_54[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_54,' ');
    }
                    /* try { // try from 005f7e18 to 005f7e37 has its CatchHandler @ 005f8268 */
    pQVar2 = (QTextStream *)QTextStream::operator<<(local_54,'\"');
    pQVar2 = (QTextStream *)QTextStream::operator<<(pQVar2,(QString *)local_40);
    QTextStream::operator<<(pQVar2,'\"');
    if (local_54[0x14] != (QTextStream)0x0) {
                    /* try { // try from 005f7f98 to 005f7fcf has its CatchHandler @ 005f8268 */
      QTextStream::operator<<(local_54,' ');
    }
    QDebug::~QDebug((QDebug *)&local_54);
                    /* try { // try from 005f7e54 to 005f7e5b has its CatchHandler @ 005f8284 */
    local_50 = (Data *)QString::fromAscii_helper("[: ]",-1);
                    /* try { // try from 005f7e6c to 005f7e73 has its CatchHandler @ 005f821c */
    QRegExp::QRegExp((QRegExp *)&local_54,&local_50,1,0);
                    /* try { // try from 005f7e98 to 005f7e9f has its CatchHandler @ 005f8214 */
    local_58 = (Data *)0x1;
    QString::section(&local_5c,local_40,&local_54,3,3,&local_58);
                    /* try { // try from 005f7ea4 to 005f7eab has its CatchHandler @ 005f820c */
    QString::trimmed();
                    /* try { // try from 005f7eb4 to 005f7ebb has its CatchHandler @ 005f81d8 */
    iVar3 = QString::toInt((bool *)&local_60,0);
    iVar4 = *(int *)local_60;
    *(int *)local_60 = iVar4 + -1;
    if (iVar4 == 1) {
      QString::free(local_60);
    }
    iVar4 = *(int *)local_5c;
    *(int *)local_5c = iVar4 + -1;
    if (iVar4 == 1) {
      QString::free(local_5c);
    }
    QRegExp::~QRegExp((QRegExp *)&local_54);
    iVar4 = *(int *)local_50;
    *(int *)local_50 = iVar4 + -1;
    if (iVar4 == 1) {
      QString::free(local_50);
    }
    if (iVar3 == 5) break;
    if (iVar3 == 0x7f) {
                    /* try { // try from 005f8090 to 005f8097 has its CatchHandler @ 005f8284 */
      local_60 = (Data *)QString::fromAscii_helper("F15",-1);
                    /* try { // try from 005f80a4 to 005f80ab has its CatchHandler @ 005f8388 */
      sendCmdToUart4(aQStack_4c,this,&local_60);
      QString::~QString(aQStack_4c);
      QString::~QString((QString *)&local_60);
                    /* try { // try from 005f80c0 to 005f80d7 has its CatchHandler @ 005f8284 */
      checkCrotchCutting(this,param_1);
      pcVar1 = local_34;
      local_44 = QString::fromAscii_helper(local_34 + -0x1104,-1);
                    /* try { // try from 005f80e4 to 005f80eb has its CatchHandler @ 005f8380 */
      QString::number((int)aQStack_48,param_1);
                    /* try { // try from 005f80f8 to 005f80ff has its CatchHandler @ 005f8378 */
      ::operator+((char *)aQStack_4c,(QString *)(local_30 + -0x23dc));
                    /* try { // try from 005f810c to 005f8113 has its CatchHandler @ 005f8370 */
      ::operator+((QString *)&local_54,(char *)aQStack_4c);
                    /* try { // try from 005f8118 to 005f811f has its CatchHandler @ 005f8368 */
      local_58 = (Data *)QString::fromAscii_helper(pcVar1 + -0x1104,-1);
                    /* try { // try from 005f812c to 005f8133 has its CatchHandler @ 005f8360 */
      QString::number((int)&local_5c,0x4b0);
                    /* try { // try from 005f813c to 005f8143 has its CatchHandler @ 005f8358 */
      ::operator+((QString *)&local_60,(QString *)&local_54);
                    /* try { // try from 005f814c to 005f8153 has its CatchHandler @ 005f8314 */
      sendCmdToUart4(&local_50,this,&local_60);
      QString::~QString((QString *)&local_50);
      QString::~QString((QString *)&local_60);
      QString::~QString((QString *)&local_5c);
      QString::~QString((QString *)&local_58);
      QString::~QString((QString *)&local_54);
      QString::~QString(aQStack_4c);
      QString::~QString(aQStack_48);
      QString::~QString((QString *)&local_44);
    }
    else if (iVar3 == 0x7e) {
      QString::~QString((QString *)local_40);
      return 10;
    }
                    /* try { // try from 005f7f58 to 005f7f5f has its CatchHandler @ 005f8284 */
    usleep(200000);
    iVar3 = *(int *)local_40[0];
    *(int *)local_40[0] = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_40[0]);
    }
  }
  QString::~QString((QString *)local_40);
  return 0;
}


// ===== SerialObject::fourInOneLoadFristStep @ 005f839c

/* SerialObject::fourInOneLoadFristStep(int) */

undefined4 __thiscall SerialObject::fourInOneLoadFristStep(SerialObject *this,int param_1)

{
  SerialObject SVar1;
  char *pcVar2;
  int iVar3;
  QDebug *pQVar4;
  QTextStream *pQVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  QString aQStack_74 [4];
  QString aQStack_70 [4];
  undefined4 local_6c;
  QString aQStack_68 [4];
  QString aQStack_64 [4];
  QString aQStack_60 [4];
  undefined4 local_5c;
  QString aQStack_58 [8];
  char *local_50;
  char *local_4c;
  char *local_48;
  int local_44;
  char *local_40;
  char *local_3c;
  undefined **local_38;
  undefined **local_34;
  undefined **local_30;
  undefined **local_2c;
  
  local_44 = checkFilamentSenser(this);
  checkCrotchCutting(this,param_1);
  local_40 = "g()";
  local_5c = QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f8404 to 005f840b has its CatchHandler @ 005f8d70 */
  QString::number((int)aQStack_60,param_1);
                    /* try { // try from 005f841c to 005f8423 has its CatchHandler @ 005f8d98 */
  local_3c = 
  "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
  ;
  ::operator+((char *)aQStack_64,(QString *)&DAT_00addbc8);
                    /* try { // try from 005f8434 to 005f843b has its CatchHandler @ 005f8d90 */
  local_38 = &PTR_s_Internal_Server_Error_00af0000;
  ::operator+(aQStack_68,(char *)aQStack_64);
                    /* try { // try from 005f8440 to 005f8447 has its CatchHandler @ 005f8d88 */
  local_6c = QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f8454 to 005f845b has its CatchHandler @ 005f8d80 */
  QString::number((int)aQStack_70,0x28a);
                    /* try { // try from 005f8464 to 005f846b has its CatchHandler @ 005f8cb4 */
  ::operator+(aQStack_74,aQStack_68);
                    /* try { // try from 005f847c to 005f8483 has its CatchHandler @ 005f8cac */
  local_34 = &PTR_s_Internal_Server_Error_00af0000;
  ::operator+((QString *)&local_78,(char *)aQStack_74);
                    /* try { // try from 005f8488 to 005f848f has its CatchHandler @ 005f8ca4 */
  local_7c = QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f849c to 005f84a3 has its CatchHandler @ 005f8c9c */
  QString::number((int)&local_80,0x4b0);
                    /* try { // try from 005f84ac to 005f84b3 has its CatchHandler @ 005f8c94 */
  ::operator+((QString *)&local_84,(QString *)&local_78);
                    /* try { // try from 005f84bc to 005f84c3 has its CatchHandler @ 005f8c30 */
  sendCmdToUart4(&local_88,this,&local_84);
  QString::~QString((QString *)&local_88);
  QString::~QString((QString *)&local_84);
  QString::~QString((QString *)&local_80);
  QString::~QString((QString *)&local_7c);
  QString::~QString((QString *)&local_78);
  QString::~QString(aQStack_74);
  QString::~QString(aQStack_70);
  QString::~QString((QString *)&local_6c);
  QString::~QString(aQStack_68);
  QString::~QString(aQStack_64);
  QString::~QString(aQStack_60);
  QString::~QString((QString *)&local_5c);
  local_50 = "../ad5x/serial/SerialObject.cpp";
  local_4c = "fourInOneLoadFristStep";
  local_30 = &PTR_s_Internal_Server_Error_00af0000;
  local_2c = &PTR_s_Internal_Server_Error_00af0000;
  iVar9 = 0;
  iVar8 = 0;
  local_48 = 
  "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
  ;
  while( true ) {
    local_88 = QString::fromAscii_helper("F13",-1);
                    /* try { // try from 005f8690 to 005f8697 has its CatchHandler @ 005f8c1c */
    sendCmdToUart4(aQStack_58,this,&local_88);
    QString::~QString((QString *)&local_88);
                    /* try { // try from 005f86a4 to 005f86ab has its CatchHandler @ 005f8c14 */
    QDebug::QDebug((QDebug *)&local_88,0);
                    /* try { // try from 005f86b0 to 005f8753 has its CatchHandler @ 005f8c0c */
    pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)&local_88,local_50);
    pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,local_4c);
    pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,local_48 + -0x2420);
    pQVar5 = (QTextStream *)QTextStream::operator<<(*(QTextStream **)pQVar4,'\"');
    pQVar5 = (QTextStream *)QTextStream::operator<<(pQVar5,aQStack_58);
    QTextStream::operator<<(pQVar5,'\"');
    if ((*(QTextStream **)pQVar4)[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(*(QTextStream **)pQVar4,' ');
    }
    pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"time");
    QTextStream::operator<<(*(QTextStream **)pQVar4,iVar8);
    if ((*(QTextStream **)pQVar4)[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(*(QTextStream **)pQVar4,' ');
    }
    puVar6 = (undefined4 *)QDebug::operator<<(pQVar4,"runCount:");
    QTextStream::operator<<((QTextStream *)*puVar6,iVar9);
    if (((QTextStream *)*puVar6)[0x14] != (QTextStream)0x0) {
                    /* try { // try from 005f88b8 to 005f88df has its CatchHandler @ 005f8c0c */
      QTextStream::operator<<((QTextStream *)*puVar6,' ');
    }
    QDebug::~QDebug((QDebug *)&local_88);
                    /* try { // try from 005f8774 to 005f877b has its CatchHandler @ 005f8c14 */
    local_78 = QString::fromAscii_helper("[: ]",-1);
                    /* try { // try from 005f878c to 005f8793 has its CatchHandler @ 005f8c04 */
    QRegExp::QRegExp((QRegExp *)&local_7c,&local_78,1,0);
                    /* try { // try from 005f87b8 to 005f87bf has its CatchHandler @ 005f8be8 */
    local_80 = 1;
    QString::section(&local_84,aQStack_58,&local_7c,0xb,0xb,&local_80);
                    /* try { // try from 005f87c4 to 005f87cb has its CatchHandler @ 005f8cbc */
    QString::trimmed();
                    /* try { // try from 005f87d4 to 005f87db has its CatchHandler @ 005f8d4c */
    uVar7 = QString::toInt((bool *)&local_88,0);
    QString::~QString((QString *)&local_88);
    QString::~QString((QString *)&local_84);
    QRegExp::~QRegExp((QRegExp *)&local_7c);
    QString::~QString((QString *)&local_78);
    if ((1 << (param_1 - 1U & 0x1f) & uVar7) == 0) break;
    iVar9 = iVar9 + 1;
    iVar8 = 0;
LAB_005f8588:
                    /* try { // try from 005f858c to 005f8593 has its CatchHandler @ 005f8c14 */
    local_78 = QString::fromAscii_helper("[: ]",-1);
                    /* try { // try from 005f85a4 to 005f85ab has its CatchHandler @ 005f8d44 */
    QRegExp::QRegExp((QRegExp *)&local_7c,&local_78,1,0);
                    /* try { // try from 005f85d0 to 005f85d7 has its CatchHandler @ 005f8d28 */
    local_80 = 1;
    QString::section(&local_84,aQStack_58,&local_7c,3,3,&local_80);
                    /* try { // try from 005f85dc to 005f85e3 has its CatchHandler @ 005f8d68 */
    QString::trimmed();
                    /* try { // try from 005f85ec to 005f85f3 has its CatchHandler @ 005f8d30 */
    iVar3 = QString::toInt((bool *)&local_88,0);
    QString::~QString((QString *)&local_88);
    QString::~QString((QString *)&local_84);
    QRegExp::~QRegExp((QRegExp *)&local_7c);
    QString::~QString((QString *)&local_78);
    if (iVar3 == 5) goto LAB_005f8af0;
    if (iVar3 == 0x7f) {
                    /* try { // try from 005f88f0 to 005f88f7 has its CatchHandler @ 005f8c14 */
      local_88 = QString::fromAscii_helper("F15",-1);
                    /* try { // try from 005f8904 to 005f890b has its CatchHandler @ 005f8d54 */
      sendCmdToUart4(&local_84,this,&local_88);
      QString::~QString((QString *)&local_84);
      QString::~QString((QString *)&local_88);
                    /* try { // try from 005f8920 to 005f8937 has its CatchHandler @ 005f8c14 */
      checkCrotchCutting(this,param_1);
      pcVar2 = local_40;
      local_5c = QString::fromAscii_helper(local_40 + -0x1104,-1);
                    /* try { // try from 005f8944 to 005f894b has its CatchHandler @ 005f8ce8 */
      QString::number((int)aQStack_60,param_1);
                    /* try { // try from 005f8958 to 005f895f has its CatchHandler @ 005f8ce0 */
      ::operator+((char *)aQStack_64,(QString *)(local_3c + -0x2438));
                    /* try { // try from 005f896c to 005f8973 has its CatchHandler @ 005f8cd8 */
      ::operator+(aQStack_68,(char *)aQStack_64);
                    /* try { // try from 005f8978 to 005f897f has its CatchHandler @ 005f8cd0 */
      local_6c = QString::fromAscii_helper(pcVar2 + -0x1104,-1);
                    /* try { // try from 005f898c to 005f8993 has its CatchHandler @ 005f8be0 */
      QString::number((int)aQStack_70,0x28a);
                    /* try { // try from 005f899c to 005f89a3 has its CatchHandler @ 005f8bd8 */
      ::operator+(aQStack_74,aQStack_68);
                    /* try { // try from 005f89b0 to 005f89b7 has its CatchHandler @ 005f8bd0 */
      ::operator+((QString *)&local_78,(char *)aQStack_74);
                    /* try { // try from 005f89bc to 005f89c3 has its CatchHandler @ 005f8bc8 */
      local_7c = QString::fromAscii_helper(pcVar2 + -0x1104,-1);
                    /* try { // try from 005f89d0 to 005f89d7 has its CatchHandler @ 005f8b74 */
      QString::number((int)&local_80,0x4b0);
                    /* try { // try from 005f89e0 to 005f89e7 has its CatchHandler @ 005f8d20 */
      ::operator+((QString *)&local_84,(QString *)&local_78);
                    /* try { // try from 005f89f0 to 005f89f7 has its CatchHandler @ 005f8d04 */
      sendCmdToUart4(&local_88,this,&local_84);
      QString::~QString((QString *)&local_88);
      QString::~QString((QString *)&local_84);
      QString::~QString((QString *)&local_80);
      QString::~QString((QString *)&local_7c);
      QString::~QString((QString *)&local_78);
      QString::~QString(aQStack_74);
      QString::~QString(aQStack_70);
      QString::~QString((QString *)&local_6c);
      QString::~QString(aQStack_68);
      QString::~QString(aQStack_64);
      QString::~QString(aQStack_60);
      QString::~QString((QString *)&local_5c);
      SVar1 = this[0x2e3];
    }
    else {
      if (iVar3 == 0x7e) {
        local_50 = (char *)0xa;
        goto LAB_005f8aa8;
      }
      SVar1 = this[0x2e3];
    }
    if (SVar1 != (SerialObject)0x0) {
                    /* try { // try from 005f8a64 to 005f8a6b has its CatchHandler @ 005f8c14 */
      QDebug::QDebug((QDebug *)&local_88,0);
                    /* try { // try from 005f8a74 to 005f8a9b has its CatchHandler @ 005f8d78 */
      pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)&local_88,(char *)(local_30 + -0x1da4));
      pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,(char *)(local_2c + -0x150f));
      QDebug::operator<<(pQVar4,"stopFilament");
      QDebug::~QDebug((QDebug *)&local_88);
      local_50 = (char *)0x1;
LAB_005f8aa8:
      QString::~QString(aQStack_58);
      return local_50;
    }
                    /* try { // try from 005f8640 to 005f866f has its CatchHandler @ 005f8c14 */
    iVar3 = checkFilamentSenser(this);
    if (iVar3 == 0) {
      if (local_44 != 0) goto joined_r0x005f8824;
    }
    else {
      if (local_44 == 0) {
        QDebug::QDebug((QDebug *)&local_88,0);
                    /* try { // try from 005f8b1c to 005f8b43 has its CatchHandler @ 005f8b58 */
        pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)&local_88,(char *)(local_30 + -0x1da4));
        pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,(char *)(local_2c + -0x150f));
        QDebug::operator<<(pQVar4,"checkFilamentSenser");
        QDebug::~QDebug((QDebug *)&local_88);
        goto LAB_005f882c;
      }
joined_r0x005f8824:
      iVar3 = 0;
      if (0x78 < iVar9) goto LAB_005f882c;
    }
    usleep(100000);
    QString::~QString(aQStack_58);
  }
  iVar8 = iVar8 + 1;
  if (iVar8 < 0xb) goto LAB_005f8588;
  iVar3 = 1;
  if (iVar9 < 0x15) {
LAB_005f8af0:
                    /* try { // try from 005f8af0 to 005f8b13 has its CatchHandler @ 005f8c14 */
    iVar3 = checkFilamentSenser(this);
  }
LAB_005f882c:
  QString::~QString(aQStack_58);
  local_84 = QString::fromAscii_helper("F112",-1);
                    /* try { // try from 005f8850 to 005f8857 has its CatchHandler @ 005f8cf0 */
  sendCmdToUart4(&local_88,this,&local_84);
  QString::~QString((QString *)&local_88);
  QString::~QString((QString *)&local_84);
  if ((iVar3 != 0) || (0x77 < iVar9)) {
    fourInOneLoadSecondStep(this,param_1);
  }
  return 0;
}


// ===== SerialObject::checkFourInOneLoad @ 005fa288

/* SerialObject::checkFourInOneLoad(int, int) */

int __thiscall SerialObject::checkFourInOneLoad(SerialObject *this,int param_1,int param_2)

{
  QDebug *pQVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_60;
  int *local_5c;
  QString aQStack_58 [4];
  undefined4 local_54;
  int *local_50 [2];
  char *local_48;
  QString *local_44;
  QString *local_40;
  int local_3c;
  undefined **local_38;
  char *local_34;
  char *local_30;
  
  QDebug::QDebug((QDebug *)&local_60,2);
                    /* try { // try from 005fa2d4 to 005fa307 has its CatchHandler @ 005fa5f0 */
  pQVar1 = (QDebug *)QDebug::operator<<((QDebug *)&local_60,"../ad5x/serial/SerialObject.cpp");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"checkFourInOneLoad");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"st:");
  QDebug::operator<<(pQVar1,param_2);
  QDebug::~QDebug((QDebug *)&local_60);
  local_48 = "g()";
  local_44 = (QString *)0xae9934;
  local_38 = &PTR_s_Internal_Server_Error_00af0000;
  local_34 = &DAT_00add394;
  iVar5 = 0;
  local_30 = "https://wiki.flashforge.com/en/ad5x/error_code_list_ad5x#e0114-ifs-homing-error";
  uVar2 = 0;
  do {
    uVar4 = uVar2 + 1;
    if (((param_2 >> (uVar2 & 0x1f) & 1U) != 0) && ((param_1 >> (uVar2 & 0x1f) & 1U) != 0)) {
      sigAutoLoad(this,uVar4);
      iVar5 = fourInOneLoadFristStep(this,uVar4);
      if (iVar5 == 2) {
        QDebug::QDebug((QDebug *)&local_60,2);
                    /* try { // try from 005fa560 to 005fa58f has its CatchHandler @ 005fa618 */
        pQVar1 = (QDebug *)QDebug::operator<<((QDebug *)&local_60,"../ad5x/serial/SerialObject.cpp")
        ;
        pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"checkFourInOneLoad");
        pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"fourInOneLoadFristStep error:");
        QDebug::operator<<(pQVar1,uVar4);
        QDebug::~QDebug((QDebug *)&local_60);
        local_40 = (QString *)&local_54;
        sig_extruderSensorAbort(this);
        local_3c = 0;
      }
      else if (iVar5 == 10) {
        pcVar3 = local_30;
        if (this[0x1f5] == (SerialObject)0x0) {
          pcVar3 = local_34;
        }
        local_40 = (QString *)&local_54;
        local_50[0] = (int *)QString::fromAscii_helper(pcVar3,-1);
                    /* try { // try from 005fa4ac to 005fa4b3 has its CatchHandler @ 005fa5b4 */
        QMetaObject::tr((char *)&local_54,(char *)&staticMetaObject);
        local_40 = (QString *)&local_54;
                    /* try { // try from 005fa4c8 to 005fa4cf has its CatchHandler @ 005fa658 */
        ::operator+((char *)aQStack_58,(QString *)"E0114: IFS");
        local_5c = local_50[0];
        *local_50[0] = *local_50[0] + 1;
                    /* try { // try from 005fa4f8 to 005fa4ff has its CatchHandler @ 005fa64c */
        local_60 = QString::fromAscii_helper("E0114",-1);
                    /* try { // try from 005fa514 to 005fa51b has its CatchHandler @ 005fa620 */
        sigIFSError(this,aQStack_58,(QString *)&local_5c,&local_60);
        QString::~QString((QString *)&local_60);
        QString::~QString((QString *)&local_5c);
        QString::~QString(aQStack_58);
        QString::~QString(local_40);
        QString::~QString((QString *)local_50);
        local_3c = 0;
      }
      else {
        local_3c = 1;
        local_40 = (QString *)&local_54;
      }
      local_54 = QString::fromAscii_helper(local_48 + -0x1104,-1);
                    /* try { // try from 005fa404 to 005fa40b has its CatchHandler @ 005fa5c8 */
      QString::number((int)aQStack_58,uVar4);
                    /* try { // try from 005fa418 to 005fa41f has its CatchHandler @ 005fa5dc */
      ::operator+((char *)&local_5c,local_44);
                    /* try { // try from 005fa428 to 005fa42f has its CatchHandler @ 005fa604 */
      sendCmdToUart4(&local_60,this,(QString *)&local_5c);
      QString::~QString((QString *)&local_60);
      QString::~QString((QString *)&local_5c);
      QString::~QString(aQStack_58);
      QString::~QString(local_40);
      checkCrotchF39(this,uVar4);
      if (local_3c == 0) {
        return iVar5;
      }
    }
    uVar2 = uVar4;
    if (uVar4 == 4) {
      return iVar5;
    }
  } while( true );
}


// ===== SerialObject::recvQueryFourInOneSt @ 005fa660

/* SerialObject::recvQueryFourInOneSt() */

void __thiscall SerialObject::recvQueryFourInOneSt(SerialObject *this)

{
  SerialObject SVar1;
  bool bVar2;
  Data *pDVar3;
  Data *pDVar4;
  int iVar5;
  Data **ppDVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Data *local_50;
  Data *local_4c;
  undefined4 local_48;
  QRegExp aQStack_44 [4];
  Data *local_40;
  Data *local_3c;
  int local_38;
  Data **local_34;
  int local_30;
  uint local_2c;
  
  local_3c = (Data *)QString::fromAscii_helper("",-1);
  *(undefined4 *)(this + 0x298) = 0;
  this[0x2f2] = (SerialObject)0x0;
  local_2c = 0;
  local_30 = 0;
  iVar8 = 0;
  local_38 = 0;
  iVar9 = 0;
  bVar2 = false;
  SVar1 = this[0x2f0];
  do {
    while (SVar1 != (SerialObject)0x0) {
LAB_005faa64:
      sleep(1);
      SVar1 = this[0x2f0];
    }
                    /* try { // try from 005fa6f0 to 005fa6f7 has its CatchHandler @ 005face0 */
    local_4c = (Data *)QString::fromAscii_helper("F13",-1);
                    /* try { // try from 005fa704 to 005fa70b has its CatchHandler @ 005fad08 */
    sendCmdToUart4(&local_50,this,&local_4c);
    pDVar4 = local_3c;
    pDVar3 = local_50;
    local_50 = local_3c;
    local_3c = pDVar3;
    iVar5 = *(int *)pDVar4;
    *(int *)pDVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free(pDVar4);
    }
    iVar5 = *(int *)local_4c;
    *(int *)local_4c = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free(local_4c);
    }
                    /* try { // try from 005fa76c to 005fa773 has its CatchHandler @ 005face0 */
    local_50 = (Data *)QString::fromAscii_helper("ok",-1);
                    /* try { // try from 005fa784 to 005fa78b has its CatchHandler @ 005facf4 */
    iVar5 = QString::indexOf(&local_3c,&local_50,0,1);
    ppDVar6 = &local_50;
    if (iVar5 == -1) {
      ppDVar6 = (Data **)0x0;
    }
    iVar5 = *(int *)local_50;
    *(int *)local_50 = iVar5 + -1;
    if (iVar5 == 1) {
      local_34 = ppDVar6;
      QString::free(local_50);
      ppDVar6 = local_34;
    }
    if (ppDVar6 == (Data **)0x0) {
      iVar8 = iVar8 + 1;
      if ((!bVar2) || (iVar8 < 4)) goto LAB_005faa64;
      sigIfsStatus(this,false);
      bVar2 = false;
      iVar8 = 0;
      sleep(1);
      SVar1 = this[0x2f0];
    }
    else {
      if (!bVar2) {
                    /* try { // try from 005fa7d8 to 005fa7eb has its CatchHandler @ 005face0 */
        sigIfsStatus(this,true);
      }
      local_40 = (Data *)QString::fromAscii_helper("[: ]",-1);
                    /* try { // try from 005fa7fc to 005fa803 has its CatchHandler @ 005fad7c */
      QRegExp::QRegExp(aQStack_44,&local_40,1,0);
                    /* try { // try from 005fa828 to 005fa82f has its CatchHandler @ 005fad74 */
      local_48 = 1;
      QString::section(&local_4c,&local_3c,aQStack_44,5,5,&local_48);
                    /* try { // try from 005fa834 to 005fa83b has its CatchHandler @ 005fad6c */
      QString::trimmed();
                    /* try { // try from 005fa844 to 005fa84b has its CatchHandler @ 005fad64 */
      iVar5 = QString::toInt((bool *)&local_50,0);
      iVar8 = *(int *)local_50;
      *(int *)local_50 = iVar8 + -1;
      if (iVar8 == 1) {
        QString::free(local_50);
      }
      iVar8 = *(int *)local_4c;
      *(int *)local_4c = iVar8 + -1;
      if (iVar8 == 1) {
        QString::free(local_4c);
      }
      QRegExp::~QRegExp(aQStack_44);
      iVar8 = *(int *)local_40;
      *(int *)local_40 = iVar8 + -1;
      if (iVar8 == 1) {
        QString::free(local_40);
      }
                    /* try { // try from 005fa8d4 to 005fa8db has its CatchHandler @ 005face0 */
      local_40 = (Data *)QString::fromAscii_helper("[: ]",-1);
                    /* try { // try from 005fa8ec to 005fa8f3 has its CatchHandler @ 005fad8c */
      QRegExp::QRegExp(aQStack_44,&local_40,1,0);
                    /* try { // try from 005fa918 to 005fa91f has its CatchHandler @ 005fad9c */
      local_48 = 1;
      QString::section(&local_4c,&local_3c,aQStack_44,9,9,&local_48);
                    /* try { // try from 005fa924 to 005fa92b has its CatchHandler @ 005fad94 */
      QString::trimmed();
                    /* try { // try from 005fa934 to 005fa93b has its CatchHandler @ 005fad84 */
      iVar8 = QString::toInt((bool *)&local_50,0);
      iVar7 = *(int *)local_50;
      *(int *)local_50 = iVar7 + -1;
      if (iVar7 == 1) {
        QString::free(local_50);
        iVar7 = *(int *)local_4c;
        *(int *)local_4c = iVar7 + -1;
      }
      else {
        iVar7 = *(int *)local_4c;
        *(int *)local_4c = iVar7 + -1;
      }
      if (iVar7 == 1) {
        QString::free(local_4c);
      }
      QRegExp::~QRegExp(aQStack_44);
      iVar7 = *(int *)local_40;
      *(int *)local_40 = iVar7 + -1;
      if (iVar7 == 1) {
        QString::free(local_40);
      }
                    /* try { // try from 005fa9bc to 005faa9f has its CatchHandler @ 005face0 */
      iVar7 = MainWindow::getMainMachineStatus(MainWindow::instMainWindow);
      if (iVar7 == 5) {
                    /* try { // try from 005fab58 to 005fab5f has its CatchHandler @ 005face0 */
        local_40 = (Data *)QString::fromAscii_helper("[: ]",-1);
                    /* try { // try from 005fab70 to 005fab77 has its CatchHandler @ 005fad5c */
        QRegExp::QRegExp(aQStack_44,&local_40,1,0);
                    /* try { // try from 005fab9c to 005faba3 has its CatchHandler @ 005fad54 */
        local_48 = 1;
        QString::section(&local_4c,&local_3c,aQStack_44,0xb,0xb,&local_48);
                    /* try { // try from 005faba8 to 005fabaf has its CatchHandler @ 005fad4c */
        QString::trimmed();
                    /* try { // try from 005fabb8 to 005fabbf has its CatchHandler @ 005fad1c */
        local_34 = (Data **)QString::toInt((bool *)&local_50,0);
        iVar7 = *(int *)local_50;
        *(int *)local_50 = iVar7 + -1;
        if (iVar7 == 1) {
          QString::free(local_50);
        }
        iVar7 = *(int *)local_4c;
        *(int *)local_4c = iVar7 + -1;
        if (iVar7 == 1) {
          QString::free(local_4c);
        }
        QRegExp::~QRegExp(aQStack_44);
        iVar7 = *(int *)local_40;
        *(int *)local_40 = iVar7 + -1;
        if (iVar7 == 1) {
          QString::free(local_40);
        }
                    /* try { // try from 005fac50 to 005fac67 has its CatchHandler @ 005face0 */
        sigIFSMottorNoRunning(this,(int)local_34,0,iVar5);
      }
      if (iVar9 != iVar5) {
        QMutex::lock();
        *(int *)(this + 0x298) = iVar5;
        QMutex::unlock();
        sigFourInOneSilkStatus(this,iVar5);
      }
      iVar9 = MainWindow::getMainMachineStatus(MainWindow::instMainWindow);
      if (iVar9 == 0) {
        if ((local_38 != iVar8) && (this[0x70] == (SerialObject)0x0)) {
          if (iVar8 < 1) {
            if (local_30 != 0) {
              if ((local_2c < 2) || (local_2c == 10)) {
                    /* try { // try from 005faccc to 005facd3 has its CatchHandler @ 005face0 */
                sigAutoLoadCompelte(this);
                local_30 = 0;
                local_38 = iVar8;
                goto LAB_005faa44;
              }
              local_30 = 0;
            }
            local_38 = iVar8;
          }
          else {
            local_2c = checkFourInOneLoad(this,iVar5,iVar8);
            local_30 = 1;
            local_38 = iVar8;
          }
        }
LAB_005faa44:
        usleep(200000);
        SVar1 = this[0x2f0];
      }
      else {
        sleep(1);
        SVar1 = this[0x2f0];
      }
      iVar8 = 0;
      bVar2 = true;
      iVar9 = iVar5;
    }
  } while( true );
}



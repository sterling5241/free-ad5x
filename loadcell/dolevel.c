
// ===== Settings::doLevel @ 00575d84
// caller: ? @ 00cd526c
// caller: ? @ 00cf18bc
// caller: ? @ 00d74dc2
// caller: ? @ 00d74dce
// caller: ? @ 00d74dd9
// caller: ? @ 00d74de4
// caller: ? @ 00d74df6
// caller: ? @ 00d74e01
// caller: ? @ 00d74e0c
// caller: ? @ 00d74e17
// caller: ? @ 00d74e22
// caller: ? @ 00d74e51
// caller: ? @ 00d75013
// caller: ? @ Entry Point
// caller: Settings::doAutoCalibration @ 00577ab8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Settings::doLevel() */

int Settings::doLevel(void)

{
  int iVar1;
  QDebug *pQVar2;
  GetConfigFile *pGVar3;
  Config *pCVar4;
  undefined4 *puVar5;
  QTextStream *pQVar6;
  int iVar7;
  Settings *in_a0;
  SerialObject *this;
  QString *this_00;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  float fVar11;
  ulonglong in_f0_1;
  ulonglong uVar12;
  float in_f12;
  undefined4 in_f13;
  float in_f14;
  float fVar13;
  double dVar14;
  QTextStream *local_d8 [2];
  QTextStream aQStack_d0 [16];
  int *local_c0;
  int *local_bc;
  int *local_b8;
  int *local_b4;
  QString aQStack_b0 [4];
  QString aQStack_ac [4];
  QString aQStack_a8 [4];
  QString aQStack_a4 [4];
  QString aQStack_a0 [4];
  QString aQStack_9c [4];
  QString aQStack_98 [4];
  QString aQStack_94 [4];
  QString aQStack_90 [4];
  QString aQStack_8c [4];
  QString aQStack_88 [4];
  QString aQStack_84 [4];
  QString aQStack_80 [4];
  QString aQStack_7c [4];
  QString aQStack_78 [4];
  QString aQStack_74 [4];
  QString aQStack_70 [4];
  QString aQStack_6c [4];
  QString aQStack_68 [4];
  QString aQStack_64 [4];
  QString aQStack_60 [4];
  int *local_5c;
  char *local_58;
  int *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  uint local_44;
  undefined4 local_3c;
  
  local_3c = 0;
  in_a0[0x354] = (Settings)0x0;
  in_a0[0x355] = (Settings)0x1;
  *(undefined4 *)(in_a0 + 0x358) = 0;
  iVar1 = homeFirst(in_a0);
  if (iVar1 == 0) {
    QDebug::QDebug((QDebug *)local_d8,2);
                    /* try { // try from 00575e2c to 00575e53 has its CatchHandler @ 00577570 */
    pQVar2 = (QDebug *)QDebug::operator<<((QDebug *)local_d8,"../ad5x/UI/settings.cpp");
    pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,"doLevel");
    QDebug::operator<<(pQVar2,"checkLevelPinStatus error");
    QDebug::~QDebug((QDebug *)local_d8);
    sigComplete(in_a0);
    iVar1 = 0;
  }
  else {
    sigRemainTime(in_a0,true);
    pGVar3 = (GetConfigFile *)getConfigFile();
    pCVar4 = (Config *)GetConfigFile::configFile(pGVar3);
    local_3c = 0;
    Config::getLeftExtruderXOffset(pCVar4);
    fVar13 = (float)in_f0_1;
    local_3c = 0;
    in_f0_1 = in_f0_1 & 0xffffffff;
    pGVar3 = (GetConfigFile *)getConfigFile();
    pCVar4 = (Config *)GetConfigFile::configFile(pGVar3);
    local_3c = 0;
    Config::getLeftExtruderYOffset(pCVar4);
    local_3c = 0;
    SerialObject::printClearGoPos(in_f12,in_f14);
    local_3c = 0;
    MainWindow::getBedTargetTemp(MainWindow::instMainWindow);
    local_3c = 0;
    uVar10 = (uint)fVar13;
    uVar12 = (ulonglong)uVar10;
    local_44 = 0x3c;
    if (0x3b < (int)uVar10) {
      local_44 = uVar10;
    }
    SerialObject::setPlatformHeat(*(SerialObject **)(in_a0 + 0x14),local_44);
    pGVar3 = (GetConfigFile *)getConfigFile();
    pCVar4 = (Config *)GetConfigFile::configFile(pGVar3);
    Config::getChannel(pCVar4);
    iVar1 = SerialObject::getFilamentTypeTemp(*(int *)(in_a0 + 0x14));
    SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x14),iVar1);
    uVar9 = *(undefined4 *)(in_a0 + 0x14);
    local_c0 = (int *)QString::fromAscii_helper("G1 Z5 F600",-1);
                    /* try { // try from 00575ffc to 00576003 has its CatchHandler @ 00577568 */
    SerialObject::sendGcodeCmd((QString *)local_d8,uVar9,&local_c0,1,0,0,0);
    QString::~QString((QString *)local_d8);
    QString::~QString((QString *)&local_c0);
    sleep(2);
    local_54 = &QString::shared_null;
    local_50 = "../ad5x/UI/settings.cpp";
    local_58 = 
    "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
    ;
    local_4c = "temp:";
    local_48 = 
    "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
    ;
    while( true ) {
      fVar13 = (float)uVar12;
      local_3c = 0;
      MainWindow::getNozzleRightRealTemp(MainWindow::instMainWindow);
      local_3c = 0;
      fVar11 = (float)(int)fVar13;
      fVar13 = fVar11;
      MainWindow::getBedRealTemp(MainWindow::instMainWindow);
      local_3c = 0;
      uVar10 = (uint)fVar13;
      uVar12 = (ulonglong)uVar10;
      pQVar6 = operator_new(0x18);
                    /* try { // try from 00576118 to 0057611f has its CatchHandler @ 00577554 */
      local_d8[0] = (QTextStream *)0x2;
      QTextStream::QTextStream(pQVar6,pQVar6 + 8,(QString *)local_d8);
      *(int **)(pQVar6 + 8) = local_54;
      QString::shared_null = QString::shared_null + 1;
      *(undefined4 *)(pQVar6 + 0xc) = 1;
      *(undefined4 *)(pQVar6 + 0x10) = 2;
      pQVar6[0x14] = (QTextStream)0x1;
      pQVar6[0x15] = (QTextStream)0x1;
      local_d8[0] = pQVar6;
                    /* try { // try from 00576160 to 005761bb has its CatchHandler @ 0057754c */
      pQVar2 = (QDebug *)QDebug::operator<<((QDebug *)local_d8,local_50);
      pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,local_58 + -0x34e8);
      pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,local_4c);
      QTextStream::operator<<(*(QTextStream **)pQVar2,(int)fVar11);
      if ((*(QTextStream **)pQVar2)[0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(*(QTextStream **)pQVar2,' ');
      }
                    /* try { // try from 0057605c to 00576073 has its CatchHandler @ 0057754c */
      puVar5 = (undefined4 *)QDebug::operator<<(pQVar2,local_48 + -0x6604);
      QTextStream::operator<<((QTextStream *)*puVar5,uVar10);
      if (((QTextStream *)*puVar5)[0x14] != (QTextStream)0x0) {
        QTextStream::operator<<((QTextStream *)*puVar5,' ');
      }
      QDebug::~QDebug((QDebug *)local_d8);
      fVar13 = (float)in_f0_1;
      if ((iVar1 <= (int)fVar11) && ((int)local_44 <= (int)uVar10)) break;
      sleep(1);
    }
    SerialObject::flushFilamentSecond(*(int *)(in_a0 + 0x14),1);
    local_3c = 0;
    SerialObject::flushFilamentBrush(SUB41(*(undefined4 *)(in_a0 + 0x14),0),1.4013e-45,fVar13);
    SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x14),0xb4);
    local_3c = 0;
    SerialObject::clear_brush(in_f12);
    local_3c = 0;
    SerialObject::clear_brush(in_f12);
    uVar9 = *(undefined4 *)(in_a0 + 0x14);
    local_c0 = (int *)QString::fromAscii_helper("G1 Z5 F800",-1);
                    /* try { // try from 00576268 to 0057626f has its CatchHandler @ 00577544 */
    SerialObject::sendGcodeCmd((QString *)local_d8,uVar9,&local_c0,1,0,0,0);
    QString::~QString((QString *)local_d8);
    QString::~QString((QString *)&local_c0);
    uVar9 = *(undefined4 *)(in_a0 + 0x14);
    local_c0 = (int *)QString::fromAscii_helper("G1 X60 Y-3 F30000",-1);
                    /* try { // try from 005762b0 to 005762b7 has its CatchHandler @ 0057753c */
    SerialObject::sendGcodeCmd((QString *)local_d8,uVar9,&local_c0,1,0,0,0);
    QString::~QString((QString *)local_d8);
    QString::~QString((QString *)&local_c0);
    uVar9 = *(undefined4 *)(in_a0 + 0x14);
    local_c0 = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005762f8 to 005762ff has its CatchHandler @ 00577528 */
    SerialObject::sendGcodeCmd((QString *)local_d8,uVar9,&local_c0,1,0,0,0);
    QString::~QString((QString *)local_d8);
    QString::~QString((QString *)&local_c0);
    iVar1 = SerialObject::checkLevelPinStatus(*(SerialObject **)(in_a0 + 0x14));
    QDebug::QDebug((QDebug *)local_d8,0);
                    /* try { // try from 00576330 to 00576363 has its CatchHandler @ 00577514 */
    pQVar2 = (QDebug *)QDebug::operator<<((QDebug *)local_d8,local_58 + -0x34e8);
    puVar5 = (undefined4 *)QDebug::operator<<(pQVar2,"checkLevelPinStatus:");
    if (iVar1 == 0) {
      pcVar8 = "false";
    }
    else {
      pcVar8 = "true";
    }
    QTextStream::operator<<((QTextStream *)*puVar5,pcVar8);
    if (((QTextStream *)*puVar5)[0x14] != (QTextStream)0x0) {
                    /* try { // try from 00576d78 to 00576d7f has its CatchHandler @ 00577514 */
      QTextStream::operator<<((QTextStream *)*puVar5,' ');
    }
    QDebug::~QDebug((QDebug *)local_d8);
    if (iVar1 == 0) {
      QMetaObject::tr((char *)local_d8,(char *)&staticMetaObject);
                    /* try { // try from 005763b0 to 005763b7 has its CatchHandler @ 00577588 */
      ::operator+((char *)&local_b4,(QString *)"E0041: ");
      QString::~QString((QString *)local_d8);
                    /* try { // try from 005763c0 to 005763db has its CatchHandler @ 00577580 */
      pGVar3 = (GetConfigFile *)getConfigFile();
      GetConfigFile::configFile(pGVar3);
      Config::getPrinterLanguage_abi_cxx11_();
      iVar1 = std::__cxx11::string::compare((char *)local_d8);
      if (iVar1 == 0) {
        pcVar8 = &DAT_00ad9968;
      }
      else {
        pcVar8 = 
        "https://wiki.flashforge.com/en/ad5x/error_code_list_ad5x#e0041-leveling-sensor-data-cannot-be-cleared-please-check"
        ;
      }
                    /* try { // try from 005763fc to 00576403 has its CatchHandler @ 005774cc */
      local_b8 = (int *)QString::fromAscii_helper(pcVar8,-1);
      if (local_d8[0] != aQStack_d0) {
        operator_delete(local_d8[0]);
      }
      local_bc = local_b4;
      *local_b4 = *local_b4 + 1;
      local_c0 = local_b8;
      *local_b8 = *local_b8 + 1;
                    /* try { // try from 00576464 to 0057646b has its CatchHandler @ 005774c0 */
      local_d8[0] = (QTextStream *)QString::fromAscii_helper("E0041",-1);
                    /* try { // try from 00576480 to 00576487 has its CatchHandler @ 0057749c */
      sigCalibrationErr(in_a0,(QString *)&local_bc,&local_c0,(QString *)local_d8);
      QString::~QString((QString *)local_d8);
      QString::~QString((QString *)&local_c0);
      QString::~QString((QString *)&local_bc);
                    /* try { // try from 005764a4 to 005764cb has its CatchHandler @ 00577494 */
      SerialObject::setPlatformHeat(*(SerialObject **)(in_a0 + 0x14),0);
      SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x14),0);
      uVar9 = *(undefined4 *)(in_a0 + 0x14);
      local_c0 = (int *)QString::fromAscii_helper("G1 Z100 F800",-1);
                    /* try { // try from 005764e8 to 005764ef has its CatchHandler @ 00577470 */
      SerialObject::sendGcodeCmd((QString *)local_d8,uVar9,&local_c0,1,0,0,0);
      QString::~QString((QString *)local_d8);
      QString::~QString((QString *)&local_c0);
      QString::~QString((QString *)&local_b8);
      QString::~QString((QString *)&local_b4);
      iVar1 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(in_a0 + 0x14);
      local_d8[0] = (QTextStream *)QString::fromAscii_helper("PROBE_CALIBRATE",-1);
                    /* try { // try from 00576550 to 00576557 has its CatchHandler @ 0057742c */
      SerialObject::sendGcodeCmd(&local_5c,uVar9,(QString *)local_d8,1,0,0,0);
      QString::~QString((QString *)local_d8);
      local_d8[0] = (QTextStream *)local_5c;
      *local_5c = *local_5c + 1;
                    /* try { // try from 00576588 to 0057658f has its CatchHandler @ 00577578 */
      iVar1 = checkProbeError(in_a0,(QString *)local_d8,1);
      QString::~QString((QString *)local_d8);
      if (iVar1 == 0) {
        do {
                    /* try { // try from 005765a4 to 005765c7 has its CatchHandler @ 00577440 */
          sleep(1);
        } while (in_a0[0x354] == (Settings)0x0);
        in_a0[0x354] = (Settings)0x0;
        in_a0[0x355] = (Settings)0x0;
        QDebug::QDebug((QDebug *)local_d8,0);
                    /* try { // try from 005765d0 to 00576607 has its CatchHandler @ 0057750c */
        pQVar2 = (QDebug *)QDebug::operator<<((QDebug *)local_d8,local_58 + -0x34e8);
        puVar5 = (undefined4 *)QDebug::operator<<(pQVar2,"probe calibrate z: ");
        local_3c = 0;
        QTextStream::operator<<((QTextStream *)*puVar5,*(float *)(in_a0 + 0x358));
        if (((QTextStream *)*puVar5)[0x14] != (QTextStream)0x0) {
                    /* try { // try from 00576f58 to 00576f5f has its CatchHandler @ 0057750c */
          QTextStream::operator<<((QTextStream *)*puVar5,' ');
        }
        QDebug::~QDebug((QDebug *)local_d8);
                    /* try { // try from 0057662c to 00576633 has its CatchHandler @ 00577440 */
        uVar9 = *(undefined4 *)(in_a0 + 0x14);
        local_d8[0] = (QTextStream *)QString::fromAscii_helper("ABORT",-1);
                    /* try { // try from 00576650 to 00576657 has its CatchHandler @ 00577504 */
        SerialObject::sendGcodeCmd(aQStack_68,uVar9,(QString *)local_d8,1,0,0,0);
        QString::~QString(aQStack_68);
        QString::~QString((QString *)local_d8);
                    /* try { // try from 00576674 to 0057667b has its CatchHandler @ 00577440 */
        uVar9 = *(undefined4 *)(in_a0 + 0x14);
        local_d8[0] = (QTextStream *)QString::fromAscii_helper("M106 P0 S255",-1);
                    /* try { // try from 00576698 to 0057669f has its CatchHandler @ 005774fc */
        SerialObject::sendGcodeCmd(aQStack_6c,uVar9,(QString *)local_d8,1,0,0,0);
        QString::~QString(aQStack_6c);
        QString::~QString((QString *)local_d8);
                    /* try { // try from 005766bc to 005766c3 has its CatchHandler @ 00577440 */
        uVar9 = *(undefined4 *)(in_a0 + 0x14);
        local_d8[0] = (QTextStream *)QString::fromAscii_helper("G92 E0",-1);
                    /* try { // try from 005766e0 to 005766e7 has its CatchHandler @ 005774f4 */
        SerialObject::sendGcodeCmd(aQStack_70,uVar9,(QString *)local_d8,1,0,0,0);
        QString::~QString(aQStack_70);
        QString::~QString((QString *)local_d8);
                    /* try { // try from 00576704 to 0057670b has its CatchHandler @ 00577440 */
        uVar9 = *(undefined4 *)(in_a0 + 0x14);
        local_d8[0] = (QTextStream *)QString::fromAscii_helper("G1 X60 Y-3 F12000",-1);
                    /* try { // try from 00576728 to 0057672f has its CatchHandler @ 005774ec */
        SerialObject::sendGcodeCmd(aQStack_74,uVar9,(QString *)local_d8,1,0,0,0);
        QString::~QString(aQStack_74);
        QString::~QString((QString *)local_d8);
        local_3c = 0;
        local_50 = *(char **)(in_a0 + 0x14);
        local_b8 = local_54;
        QString::shared_null = QString::shared_null + 1;
        dVar14 = (double)(float)((double)*(float *)(in_a0 + 0x358) + DAT_00adcbb8);
                    /* try { // try from 005767b0 to 005767b7 has its CatchHandler @ 005773e0 */
        QString::number((double)CONCAT44(in_f13,in_f12),SUB81(dVar14,0),
                        (int)((ulonglong)dVar14 >> 0x20));
                    /* try { // try from 005767c4 to 005767cb has its CatchHandler @ 005773d8 */
        ::operator+((char *)&local_c0,(QString *)&DAT_00ad8d98);
                    /* try { // try from 005767e0 to 005767e7 has its CatchHandler @ 005773d0 */
        local_4c = 
        "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
        ;
        ::operator+((QString *)local_d8,(char *)&local_c0);
                    /* try { // try from 00576800 to 00576807 has its CatchHandler @ 005773c8 */
        SerialObject::sendGcodeCmd(aQStack_78,local_50,(QString *)local_d8,1,0,0,0);
        QString::~QString(aQStack_78);
        QString::~QString((QString *)local_d8);
        QString::~QString((QString *)&local_c0);
        QString::~QString((QString *)&local_bc);
        QString::~QString((QString *)&local_b8);
        local_50 = *(char **)(in_a0 + 0x14);
                    /* try { // try from 00576840 to 00576847 has its CatchHandler @ 00577440 */
        local_d8[0] = (QTextStream *)QString::fromAscii_helper("G1 X130 F1200",-1);
                    /* try { // try from 00576864 to 0057686b has its CatchHandler @ 005773c0 */
        SerialObject::sendGcodeCmd(aQStack_7c,local_50,(QString *)local_d8,1,0,0,0);
        QString::~QString(aQStack_7c);
        QString::~QString((QString *)local_d8);
        local_50 = *(char **)(in_a0 + 0x14);
                    /* try { // try from 0057688c to 00576893 has its CatchHandler @ 00577440 */
        local_d8[0] = (QTextStream *)QString::fromAscii_helper("G1 X150 F1200",-1);
                    /* try { // try from 005768b0 to 005768b7 has its CatchHandler @ 005773b8 */
        SerialObject::sendGcodeCmd(aQStack_80,local_50,(QString *)local_d8,1,0,0,0);
        QString::~QString(aQStack_80);
        QString::~QString((QString *)local_d8);
        local_3c = 0;
        local_50 = *(char **)(in_a0 + 0x14);
        local_b8 = local_54;
        QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 0057692c to 00576933 has its CatchHandler @ 005773b0 */
        QString::number((double)CONCAT44(in_f13,in_f12),
                        SUB81((double)(float)(dVar14 - _DAT_00adcbc0),0),
                        (int)((ulonglong)(double)(float)(dVar14 - _DAT_00adcbc0) >> 0x20));
                    /* try { // try from 00576940 to 00576947 has its CatchHandler @ 005773a8 */
        ::operator+((char *)&local_c0,(QString *)&DAT_00ad8d98);
                    /* try { // try from 00576958 to 0057695f has its CatchHandler @ 005773a0 */
        ::operator+((QString *)local_d8,(char *)&local_c0);
                    /* try { // try from 00576978 to 0057697f has its CatchHandler @ 00577374 */
        SerialObject::sendGcodeCmd(aQStack_84,local_50,(QString *)local_d8,1,0,0,0);
        QString::~QString(aQStack_84);
        QString::~QString((QString *)local_d8);
        QString::~QString((QString *)&local_c0);
        QString::~QString((QString *)&local_bc);
        QString::~QString((QString *)&local_b8);
                    /* try { // try from 005769ac to 005769fb has its CatchHandler @ 00577440 */
        SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x14),0x8c);
        sleep(2);
        this = *(SerialObject **)(in_a0 + 0x14);
        while (iVar1 = SerialObject::waitArriveTemperature(this,false,true,false), iVar1 == 0) {
          sleep(1);
          this = *(SerialObject **)(in_a0 + 0x14);
        }
        in_a0[0x35c] = (Settings)0x0;
        uVar9 = *(undefined4 *)(in_a0 + 0x14);
        local_d8[0] = (QTextStream *)QString::fromAscii_helper("M106 S0",-1);
                    /* try { // try from 00576a18 to 00576a1f has its CatchHandler @ 0057736c */
        SerialObject::sendGcodeCmd(aQStack_88,uVar9,(QString *)local_d8,1,0,0,0);
        QString::~QString(aQStack_88);
        QString::~QString((QString *)local_d8);
                    /* try { // try from 00576a3c to 00576a43 has its CatchHandler @ 00577440 */
        uVar9 = *(undefined4 *)(in_a0 + 0x14);
        local_d8[0] = (QTextStream *)QString::fromAscii_helper("G1 Z5 F6000",-1);
                    /* try { // try from 00576a60 to 00576a67 has its CatchHandler @ 00577364 */
        SerialObject::sendGcodeCmd(aQStack_8c,uVar9,(QString *)local_d8,1,0,0,0);
        QString::~QString(aQStack_8c);
        QString::~QString((QString *)local_d8);
                    /* try { // try from 00576a80 to 00576a87 has its CatchHandler @ 00577440 */
        uVar9 = *(undefined4 *)(in_a0 + 0x14);
        local_d8[0] = (QTextStream *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 00576aa4 to 00576aab has its CatchHandler @ 0057735c */
        SerialObject::sendGcodeCmd(aQStack_90,uVar9,(QString *)local_d8,1,0,0,0);
        QString::~QString(aQStack_90);
        QString::~QString((QString *)local_d8);
                    /* try { // try from 00576abc to 00576ad3 has its CatchHandler @ 00577440 */
        iVar1 = SerialObject::checkLevelPinStatus(*(SerialObject **)(in_a0 + 0x14));
        QDebug::QDebug((QDebug *)local_d8,0);
                    /* try { // try from 00576adc to 00576b0b has its CatchHandler @ 00577348 */
        pQVar2 = (QDebug *)QDebug::operator<<((QDebug *)local_d8,local_58 + -0x34e8);
        puVar5 = (undefined4 *)QDebug::operator<<(pQVar2,"checkLevelPinStatus:");
        if (iVar1 == 0) {
          pcVar8 = "false";
        }
        else {
          pcVar8 = "true";
        }
        QTextStream::operator<<((QTextStream *)*puVar5,pcVar8);
        if (((QTextStream *)*puVar5)[0x14] != (QTextStream)0x0) {
                    /* try { // try from 00576f48 to 00576f4f has its CatchHandler @ 00577348 */
          QTextStream::operator<<((QTextStream *)*puVar5,' ');
        }
        QDebug::~QDebug((QDebug *)local_d8);
        if (iVar1 == 0) {
                    /* try { // try from 00576b3c to 00576b43 has its CatchHandler @ 00577440 */
          QMetaObject::tr((char *)local_d8,(char *)&staticMetaObject);
                    /* try { // try from 00576b54 to 00576b5b has its CatchHandler @ 00577340 */
          ::operator+((char *)&local_b4,(QString *)"E0041: ");
          QString::~QString((QString *)local_d8);
                    /* try { // try from 00576b64 to 00576b7f has its CatchHandler @ 00577338 */
          pGVar3 = (GetConfigFile *)getConfigFile();
          GetConfigFile::configFile(pGVar3);
          Config::getPrinterLanguage_abi_cxx11_();
          iVar1 = std::__cxx11::string::compare((char *)local_d8);
          if (iVar1 == 0) {
            pcVar8 = &DAT_00ad9968;
          }
          else {
            pcVar8 = 
            "https://wiki.flashforge.com/en/ad5x/error_code_list_ad5x#e0041-leveling-sensor-data-cannot-be-cleared-please-check"
            ;
          }
                    /* try { // try from 00576ba0 to 00576ba7 has its CatchHandler @ 005773e8 */
          local_b8 = (int *)QString::fromAscii_helper(pcVar8,-1);
          if (local_d8[0] != aQStack_d0) {
            operator_delete(local_d8[0]);
          }
          local_bc = local_b4;
          *local_b4 = *local_b4 + 1;
          local_c0 = local_b8;
          *local_b8 = *local_b8 + 1;
                    /* try { // try from 00576c08 to 00576c0f has its CatchHandler @ 005772d8 */
          local_d8[0] = (QTextStream *)QString::fromAscii_helper("E0041",-1);
                    /* try { // try from 00576c20 to 00576c27 has its CatchHandler @ 005772b4 */
          sigCalibrationErr(in_a0,(QString *)&local_bc,&local_c0,(QString *)local_d8);
          QString::~QString((QString *)local_d8);
          QString::~QString((QString *)&local_c0);
          QString::~QString((QString *)&local_bc);
                    /* try { // try from 00576c44 to 00576c6b has its CatchHandler @ 005772ac */
          SerialObject::setPlatformHeat(*(SerialObject **)(in_a0 + 0x14),0);
          SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x14),0);
          uVar9 = *(undefined4 *)(in_a0 + 0x14);
          local_d8[0] = (QTextStream *)QString::fromAscii_helper("G1 Z100 F800",-1);
                    /* try { // try from 00576c88 to 00576c8f has its CatchHandler @ 00577280 */
          SerialObject::sendGcodeCmd(aQStack_94,uVar9,(QString *)local_d8,1,0,0,0);
          QString::~QString(aQStack_94);
          QString::~QString((QString *)local_d8);
          QString::~QString((QString *)&local_b8);
          QString::~QString((QString *)&local_b4);
          iVar1 = 0;
        }
        else {
                    /* try { // try from 00576d94 to 00576db3 has its CatchHandler @ 00577440 */
          sleep(2);
          iVar1 = 0;
          while( true ) {
            SerialObject::cmdBedCalibration();
            local_d8[0] = (QTextStream *)local_c0;
            *local_c0 = *local_c0 + 1;
                    /* try { // try from 00576ddc to 00576de3 has its CatchHandler @ 00577458 */
            iVar7 = checkProbeError(in_a0,(QString *)local_d8,iVar1);
            QString::~QString((QString *)local_d8);
            if (iVar7 == 0) break;
                    /* try { // try from 00576dfc to 00576e03 has its CatchHandler @ 00577408 */
            uVar9 = *(undefined4 *)(in_a0 + 0x14);
            local_d8[0] = (QTextStream *)QString::fromAscii_helper("G1 Z5 F800",-1);
                    /* try { // try from 00576e20 to 00576e27 has its CatchHandler @ 00577424 */
            SerialObject::sendGcodeCmd(aQStack_98,uVar9,(QString *)local_d8,1,0,0,0);
            QString::~QString(aQStack_98);
            QString::~QString((QString *)local_d8);
                    /* try { // try from 00576e40 to 00576e47 has its CatchHandler @ 00577408 */
            uVar9 = *(undefined4 *)(in_a0 + 0x14);
            local_d8[0] = (QTextStream *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 00576e64 to 00576e6b has its CatchHandler @ 00577410 */
            SerialObject::sendGcodeCmd(aQStack_9c,uVar9,(QString *)local_d8,1,0,0,0);
            QString::~QString(aQStack_9c);
            QString::~QString((QString *)local_d8);
            uVar9 = 0x16b;
            if ((*(uint *)(in_a0 + 0x368) & 1) != 0) {
              uVar9 = 0xa0;
            }
            *(undefined4 *)(in_a0 + 0x350) = uVar9;
            QString::~QString((QString *)&local_c0);
            if (iVar1 != 0) {
                    /* try { // try from 00576ea8 to 00576ecf has its CatchHandler @ 00577440 */
              SerialObject::setPlatformHeat(*(SerialObject **)(in_a0 + 0x14),0);
              SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x14),0);
              uVar9 = *(undefined4 *)(in_a0 + 0x14);
              local_d8[0] = (QTextStream *)QString::fromAscii_helper("G1 Z100 F800",-1);
                    /* try { // try from 00576eec to 00576ef3 has its CatchHandler @ 00577450 */
              SerialObject::sendGcodeCmd(aQStack_a0,uVar9,(QString *)local_d8,1,0,0,0);
              QString::~QString(aQStack_a0);
              QString::~QString((QString *)local_d8);
                    /* try { // try from 00576f0c to 00576f13 has its CatchHandler @ 00577440 */
              uVar9 = *(undefined4 *)(in_a0 + 0x14);
              local_d8[0] = (QTextStream *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 00576f30 to 00576f37 has its CatchHandler @ 00577448 */
              SerialObject::sendGcodeCmd(aQStack_a4,uVar9,(QString *)local_d8,1,0,0,0);
              this_00 = aQStack_a4;
              goto LAB_00576d58;
            }
            iVar1 = 1;
          }
          QString::~QString((QString *)&local_c0);
                    /* try { // try from 00576f78 to 00576f9b has its CatchHandler @ 00577440 */
          iVar1 = checkLevelData(in_a0);
          if (iVar1 == 0) {
            uVar9 = *(undefined4 *)(in_a0 + 0x14);
            local_d8[0] = (QTextStream *)
                          QString::fromAscii_helper("BED_MESH_PROFILE REMOVE=default",-1);
                    /* try { // try from 00576fb8 to 00576fbf has its CatchHandler @ 00577304 */
            SerialObject::sendGcodeCmd(aQStack_a8,uVar9,(QString *)local_d8,1,0,0,0);
            QString::~QString(aQStack_a8);
            QString::~QString((QString *)local_d8);
                    /* try { // try from 00576fdc to 00576fe3 has its CatchHandler @ 00577440 */
            uVar9 = *(undefined4 *)(in_a0 + 0x14);
            local_d8[0] = (QTextStream *)QString::fromAscii_helper("BED_MESH_CLEAR",-1);
                    /* try { // try from 00577000 to 00577007 has its CatchHandler @ 005772fc */
            SerialObject::sendGcodeCmd(aQStack_ac,uVar9,(QString *)local_d8,1,0,0,0);
            QString::~QString(aQStack_ac);
            QString::~QString((QString *)local_d8);
                    /* try { // try from 0057701c to 00577043 has its CatchHandler @ 00577440 */
            SerialObject::setPlatformHeat(*(SerialObject **)(in_a0 + 0x14),0);
            SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x14),0);
            uVar9 = *(undefined4 *)(in_a0 + 0x14);
            local_d8[0] = (QTextStream *)QString::fromAscii_helper("G1 Z100 F800",-1);
                    /* try { // try from 00577060 to 00577067 has its CatchHandler @ 005772f4 */
            SerialObject::sendGcodeCmd(aQStack_b0,uVar9,(QString *)local_d8,1,0,0,0);
            QString::~QString(aQStack_b0);
            QString::~QString((QString *)local_d8);
                    /* try { // try from 00577080 to 00577087 has its CatchHandler @ 00577440 */
            uVar9 = *(undefined4 *)(in_a0 + 0x14);
            local_d8[0] = (QTextStream *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005770a8 to 005770af has its CatchHandler @ 005772e0 */
            SerialObject::sendGcodeCmd((QString *)&local_b4,uVar9,(QString *)local_d8,1,0,0,0);
            QString::~QString((QString *)&local_b4);
            QString::~QString((QString *)local_d8);
          }
          else {
            local_3c = 0;
                    /* try { // try from 005770f4 to 0057714f has its CatchHandler @ 00577440 */
            fVar13 = (*(float *)(in_a0 + 0xc4) + *(float *)(in_a0 + 200) + *(float *)(in_a0 + 0xcc))
                     / DAT_00adcba8;
            pGVar3 = (GetConfigFile *)getConfigFile();
            pCVar4 = (Config *)GetConfigFile::configFile(pGVar3);
            local_3c = 0;
            Config::setLevelPrintPointZ(pCVar4,fVar13);
            pGVar3 = (GetConfigFile *)getConfigFile();
            pCVar4 = (Config *)GetConfigFile::configFile(pGVar3);
            Config::setCheckZFrist(pCVar4,false);
            uVar9 = *(undefined4 *)(in_a0 + 0x14);
            local_d8[0] = (QTextStream *)
                          QString::fromAscii_helper("BED_MESH_PROFILE SAVE=MESH_DATA",-1);
                    /* try { // try from 0057716c to 00577173 has its CatchHandler @ 00577330 */
            SerialObject::sendGcodeCmd(&local_b8,uVar9,(QString *)local_d8,1,0,0,0);
            QString::~QString((QString *)&local_b8);
            QString::~QString((QString *)local_d8);
                    /* try { // try from 00577190 to 00577197 has its CatchHandler @ 00577440 */
            uVar9 = *(undefined4 *)(in_a0 + 0x14);
            local_d8[0] = (QTextStream *)
                          QString::fromAscii_helper("BED_MESH_PROFILE REMOVE=default",-1);
                    /* try { // try from 005771b4 to 005771bb has its CatchHandler @ 00577328 */
            SerialObject::sendGcodeCmd((QString *)&local_bc,uVar9,(QString *)local_d8,1,0,0,0);
            QString::~QString((QString *)&local_bc);
            QString::~QString((QString *)local_d8);
                    /* try { // try from 005771d0 to 005771f7 has its CatchHandler @ 00577440 */
            SerialObject::setPlatformHeat(*(SerialObject **)(in_a0 + 0x14),0);
            SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x14),0);
            uVar9 = *(undefined4 *)(in_a0 + 0x14);
            local_d8[0] = (QTextStream *)QString::fromAscii_helper("G1 Z100 F800",-1);
                    /* try { // try from 00577214 to 0057721b has its CatchHandler @ 00577320 */
            SerialObject::sendGcodeCmd(&local_c0,uVar9,(QString *)local_d8,1,0,0,0);
            QString::~QString((QString *)&local_c0);
            QString::~QString((QString *)local_d8);
                    /* try { // try from 00577234 to 0057723b has its CatchHandler @ 00577440 */
            uVar9 = *(undefined4 *)(in_a0 + 0x14);
            local_c0 = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 00577258 to 0057725f has its CatchHandler @ 0057730c */
            SerialObject::sendGcodeCmd((QString *)local_d8,uVar9,&local_c0,1,0,0,0);
            QString::~QString((QString *)local_d8);
            QString::~QString((QString *)&local_c0);
                    /* try { // try from 00577270 to 00577277 has its CatchHandler @ 00577440 */
            sigLevelComplete(in_a0);
          }
        }
      }
      else {
                    /* try { // try from 00576cc4 to 00576ceb has its CatchHandler @ 00577440 */
        SerialObject::setPlatformHeat(*(SerialObject **)(in_a0 + 0x14),0);
        SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x14),0);
        uVar9 = *(undefined4 *)(in_a0 + 0x14);
        local_d8[0] = (QTextStream *)QString::fromAscii_helper("G1 Z100 F800",-1);
                    /* try { // try from 00576d08 to 00576d0f has its CatchHandler @ 00577468 */
        SerialObject::sendGcodeCmd(aQStack_60,uVar9,(QString *)local_d8,1,0,0,0);
        QString::~QString(aQStack_60);
        QString::~QString((QString *)local_d8);
                    /* try { // try from 00576d28 to 00576d2f has its CatchHandler @ 00577440 */
        uVar9 = *(undefined4 *)(in_a0 + 0x14);
        local_d8[0] = (QTextStream *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 00576d4c to 00576d53 has its CatchHandler @ 00577460 */
        SerialObject::sendGcodeCmd(aQStack_64,uVar9,(QString *)local_d8,1,0,0,0);
        this_00 = aQStack_64;
LAB_00576d58:
        iVar1 = 0;
        QString::~QString(this_00);
        QString::~QString((QString *)local_d8);
      }
      QString::~QString((QString *)&local_5c);
    }
  }
  return iVar1;
}



// ===== Print::checkZ @ 00688418
// caller: ? @ 00cd82a4
// caller: ? @ 00d03eb8
// caller: ? @ 00da3e31
// caller: ? @ 00da3e3d
// caller: ? @ 00da3e48
// caller: ? @ 00da3e53
// caller: ? @ 00da3e5e
// caller: ? @ 00da3e69
// caller: ? @ 00da3fad
// caller: ? @ 00da3fca
// caller: ? @ Entry Point
// caller: Print::doPreparation @ 0068a934

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Print::checkZ(float, float) */

void __thiscall Print::checkZ(Print *this,float param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  QDebug *pQVar3;
  GetConfigFile *pGVar4;
  Config *pCVar5;
  SerialObject *pSVar6;
  allocator *paVar7;
  undefined4 uVar8;
  uint uVar9;
  float in_f12;
  undefined4 in_f13;
  float fVar10;
  double dVar11;
  float fVar12;
  ulonglong uVar13;
  undefined1 *local_a8 [2];
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined4 local_84;
  undefined4 local_80;
  QString aQStack_7c [4];
  QString aQStack_78 [4];
  QString aQStack_74 [4];
  QString aQStack_70 [4];
  QString aQStack_6c [4];
  QString aQStack_68 [4];
  QString aQStack_64 [4];
  QString aQStack_60 [8];
  undefined4 *local_58;
  undefined4 local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  undefined4 local_3c;
  
  this[0x18] = (Print)0x0;
  this[0x19] = (Print)0x1;
  if (this[0xa7] != (Print)0x0) {
    return;
  }
  local_3c = 0;
  uVar13 = (ulonglong)(uint)param_1;
  SerialObject::setPlatformHeat(*(SerialObject **)(this + 0x5c),*(int *)(this + 0xf8));
  uVar8 = *(undefined4 *)(this + 0x5c);
  local_90 = QString::fromAscii_helper("G1 Z5 F600",-1);
                    /* try { // try from 00688530 to 00688537 has its CatchHandler @ 00689560 */
  SerialObject::sendGcodeCmd(local_a8,uVar8,&local_90,1,0,0,0);
  QString::~QString((QString *)local_a8);
  QString::~QString((QString *)&local_90);
  sleep(1);
  pSVar6 = *(SerialObject **)(this + 0x5c);
  while (iVar1 = SerialObject::waitArriveTemperature(pSVar6,false,false,true), iVar1 == 0) {
    sleep(1);
    if (this[0xa7] != (Print)0x0) {
      return;
    }
    pSVar6 = *(SerialObject **)(this + 0x5c);
  }
  SerialObject::setRightNozzleTemp(*(SerialObject **)(this + 0x5c),*(int *)(this + 0xf0));
  sleep(2);
  pSVar6 = *(SerialObject **)(this + 0x5c);
  while( true ) {
    iVar1 = SerialObject::waitArriveTemperature(pSVar6,false,true,false);
    fVar10 = (float)uVar13;
    if (iVar1 != 0) break;
    sleep(1);
    if (this[0xa7] != (Print)0x0) {
      return;
    }
    pSVar6 = *(SerialObject **)(this + 0x5c);
  }
  SerialObject::flushFilamentSecond(*(int *)(this + 0x5c),1);
  local_3c = 0;
  SerialObject::flushFilamentBrush(SUB41(*(undefined4 *)(this + 0x5c),0),1.4013e-45,fVar10);
  SerialObject::setRightNozzleTemp(*(SerialObject **)(this + 0x5c),0xb4);
  local_3c = 0;
  SerialObject::clear_brush(in_f12);
  local_3c = 0;
  SerialObject::clear_brush(in_f12);
  uVar8 = *(undefined4 *)(this + 0x5c);
  local_90 = QString::fromAscii_helper("G1 Z5 F800",-1);
                    /* try { // try from 00688678 to 0068867f has its CatchHandler @ 00689558 */
  SerialObject::sendGcodeCmd(local_a8,uVar8,&local_90,1,0,0,0);
  QString::~QString((QString *)local_a8);
  QString::~QString((QString *)&local_90);
  uVar8 = *(undefined4 *)(this + 0x5c);
  local_90 = QString::fromAscii_helper("G1 X60 Y-3 F30000",-1);
                    /* try { // try from 006886c0 to 006886c7 has its CatchHandler @ 00689550 */
  SerialObject::sendGcodeCmd(local_a8,uVar8,&local_90,1,0,0,0);
  QString::~QString((QString *)local_a8);
  QString::~QString((QString *)&local_90);
  uVar8 = *(undefined4 *)(this + 0x5c);
  local_90 = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 00688708 to 0068870f has its CatchHandler @ 0068953c */
  SerialObject::sendGcodeCmd(local_a8,uVar8,&local_90,1,0,0,0);
  QString::~QString((QString *)local_a8);
  QString::~QString((QString *)&local_90);
  uVar2 = SerialObject::checkLevelPinStatus(*(SerialObject **)(this + 0x5c));
  QDebug::QDebug((QDebug *)local_a8,0);
                    /* try { // try from 00688740 to 00688763 has its CatchHandler @ 00689528 */
  pQVar3 = (QDebug *)QDebug::operator<<((QDebug *)local_a8,"checkZ");
  pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,"checkLevelPinStatus:");
  QDebug::operator<<(pQVar3,SUB41(uVar2,0));
  QDebug::~QDebug((QDebug *)local_a8);
  if (uVar2 == 0) {
    return;
  }
  SerialObject::cmdProbeCalibration();
                    /* try { // try from 00688788 to 0068878f has its CatchHandler @ 00689514 */
  local_80 = QString::fromAscii_helper("No trigger",-1);
                    /* try { // try from 006887a0 to 006887a7 has its CatchHandler @ 0068950c */
  iVar1 = QString::indexOf(aQStack_60,&local_80,0,1);
  if (iVar1 != -1) {
    QString::~QString((QString *)&local_80);
    goto LAB_006887bc;
  }
                    /* try { // try from 006887d0 to 006887d7 has its CatchHandler @ 006894fc */
  local_84 = QString::fromAscii_helper("Probe triggered prior to movement",-1);
                    /* try { // try from 006887e8 to 006887ef has its CatchHandler @ 00689590 */
  iVar1 = QString::indexOf(aQStack_60,&local_84,0,1);
  if (iVar1 == -1) {
                    /* try { // try from 00688820 to 00688827 has its CatchHandler @ 00689580 */
    local_48 = "mbda(bool, bool&)>; socket_t = int; size_t = unsigned int; time_t = long int]";
    local_88 = (undefined4 *)QString::fromAscii_helper("Endstop x still triggered",-1);
                    /* try { // try from 00688838 to 0068883f has its CatchHandler @ 00689578 */
    iVar1 = QString::indexOf(aQStack_60,&local_88,0,1);
    if (iVar1 == -1) {
                    /* try { // try from 00688864 to 0068886b has its CatchHandler @ 00689568 */
      local_44 = "mbda(bool, bool&)>; socket_t = int; size_t = unsigned int; time_t = long int]";
      local_8c = QString::fromAscii_helper("Endstop y still triggered",-1);
                    /* try { // try from 0068887c to 00688883 has its CatchHandler @ 00689598 */
      iVar1 = QString::indexOf(aQStack_60,&local_8c,0,1);
      if (iVar1 == -1) {
                    /* try { // try from 006890fc to 00689103 has its CatchHandler @ 00689228 */
        local_90 = QString::fromAscii_helper("Endstop z still triggered",-1);
                    /* try { // try from 00689114 to 0068911b has its CatchHandler @ 006891b8 */
        iVar1 = QString::indexOf(aQStack_60,&local_90,0,1);
        if (iVar1 == -1) {
                    /* try { // try from 00689180 to 00689187 has its CatchHandler @ 00689258 */
          local_a8[0] = (undefined1 *)QString::fromAscii_helper("!!",-1);
                    /* try { // try from 00689198 to 0068919f has its CatchHandler @ 0068923c */
          iVar1 = QString::indexOf(aQStack_60,local_a8,0,1);
          uVar2 = (uint)(iVar1 != -1);
          QString::~QString((QString *)local_a8);
        }
        QString::~QString((QString *)&local_90);
      }
      QString::~QString((QString *)&local_8c);
      QString::~QString((QString *)&local_88);
      QString::~QString((QString *)&local_84);
      QString::~QString((QString *)&local_80);
      if (uVar2 != 0) goto LAB_006887bc;
      do {
                    /* try { // try from 006888b8 to 006888db has its CatchHandler @ 00689298 */
        sleep(1);
      } while (this[0x18] == (Print)0x0);
      this[0x18] = (Print)0x0;
      this[0x19] = (Print)0x0;
      QDebug::QDebug((QDebug *)local_a8,0);
                    /* try { // try from 006888e0 to 00688913 has its CatchHandler @ 00689284 */
      pQVar3 = (QDebug *)QDebug::operator<<((QDebug *)local_a8,"checkZ");
      pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,"probe calibrate z: ");
      local_3c = 0;
      QDebug::operator<<(pQVar3,*(float *)(this + 0x1c));
      QDebug::~QDebug((QDebug *)local_a8);
                    /* try { // try from 00688928 to 0068892f has its CatchHandler @ 00689298 */
      uVar8 = *(undefined4 *)(this + 0x5c);
      local_a8[0] = (undefined1 *)QString::fromAscii_helper("ABORT",-1);
                    /* try { // try from 0068894c to 00688953 has its CatchHandler @ 006894f4 */
      SerialObject::sendGcodeCmd(aQStack_64,uVar8,local_a8,1,0,0,0);
      QString::~QString(aQStack_64);
      QString::~QString((QString *)local_a8);
      if (this[0xa7] != (Print)0x0) goto LAB_006887bc;
                    /* try { // try from 0068897c to 00688983 has its CatchHandler @ 00689298 */
      uVar8 = *(undefined4 *)(this + 0x5c);
      local_a8[0] = (undefined1 *)QString::fromAscii_helper("M106 P0 S255",-1);
                    /* try { // try from 006889a0 to 006889a7 has its CatchHandler @ 006894ec */
      SerialObject::sendGcodeCmd(aQStack_68,uVar8,local_a8,1,0,0,0);
      QString::~QString(aQStack_68);
      QString::~QString((QString *)local_a8);
                    /* try { // try from 006889c4 to 006889cb has its CatchHandler @ 00689298 */
      uVar8 = *(undefined4 *)(this + 0x5c);
      local_a8[0] = (undefined1 *)QString::fromAscii_helper("G92 E0",-1);
                    /* try { // try from 006889e8 to 006889ef has its CatchHandler @ 006894e4 */
      SerialObject::sendGcodeCmd(aQStack_6c,uVar8,local_a8,1,0,0,0);
      QString::~QString(aQStack_6c);
      QString::~QString((QString *)local_a8);
                    /* try { // try from 00688a0c to 00688a13 has its CatchHandler @ 00689298 */
      uVar8 = *(undefined4 *)(this + 0x5c);
      local_a8[0] = (undefined1 *)QString::fromAscii_helper("G1 X60 Y-3 F12000",-1);
                    /* try { // try from 00688a30 to 00688a37 has its CatchHandler @ 006894dc */
      SerialObject::sendGcodeCmd(aQStack_70,uVar8,local_a8,1,0,0,0);
      QString::~QString(aQStack_70);
      QString::~QString((QString *)local_a8);
      local_3c = 0;
      local_54 = *(undefined4 *)(this + 0x5c);
      local_58 = &QString::shared_null;
      local_88 = &QString::shared_null;
      QString::shared_null = QString::shared_null + 1;
      dVar11 = (double)(float)((double)*(float *)(this + 0x1c) + DAT_00ae6c00);
                    /* try { // try from 00688abc to 00688ac3 has its CatchHandler @ 006894d4 */
      QString::number((double)CONCAT44(in_f13,in_f12),SUB81(dVar11,0),
                      (int)((ulonglong)dVar11 >> 0x20));
                    /* try { // try from 00688ad4 to 00688adb has its CatchHandler @ 006894cc */
      local_50 = 
      "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
      ;
      ::operator+((char *)&local_90,(QString *)&DAT_00ad8d98);
      local_4c = 
      "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
      ;
                    /* try { // try from 00688af0 to 00688af7 has its CatchHandler @ 006894c4 */
      ::operator+((QString *)local_a8,(char *)&local_90);
                    /* try { // try from 00688b14 to 00688b1b has its CatchHandler @ 006894bc */
      SerialObject::sendGcodeCmd(aQStack_74,local_54,local_a8,1,0,0,0);
      QString::~QString(aQStack_74);
      QString::~QString((QString *)local_a8);
      QString::~QString((QString *)&local_90);
      QString::~QString((QString *)&local_8c);
      QString::~QString((QString *)&local_88);
      local_54 = *(undefined4 *)(this + 0x5c);
                    /* try { // try from 00688b68 to 00688b6f has its CatchHandler @ 00689298 */
      local_a8[0] = (undefined1 *)QString::fromAscii_helper("G1 X130 F1200",-1);
                    /* try { // try from 00688b90 to 00688b97 has its CatchHandler @ 006894b4 */
      SerialObject::sendGcodeCmd(aQStack_78,local_54,local_a8,1,0,0,0);
      QString::~QString(aQStack_78);
      QString::~QString((QString *)local_a8);
      local_54 = *(undefined4 *)(this + 0x5c);
                    /* try { // try from 00688bc0 to 00688bc7 has its CatchHandler @ 00689298 */
      local_a8[0] = (undefined1 *)QString::fromAscii_helper("G1 X150 F1200",-1);
                    /* try { // try from 00688be8 to 00688bef has its CatchHandler @ 006894ac */
      SerialObject::sendGcodeCmd(aQStack_7c,local_54,local_a8,1,0,0,0);
      QString::~QString(aQStack_7c);
      QString::~QString((QString *)local_a8);
      local_3c = 0;
      local_54 = *(undefined4 *)(this + 0x5c);
      local_88 = local_58;
      QString::shared_null = QString::shared_null + 1;
      dVar11 = (double)(float)(dVar11 - _DAT_00adcbc0);
                    /* try { // try from 00688c70 to 00688c77 has its CatchHandler @ 006894a4 */
      QString::number((double)CONCAT44(in_f13,in_f12),SUB81(dVar11,0),
                      (int)((ulonglong)dVar11 >> 0x20));
                    /* try { // try from 00688c88 to 00688c8f has its CatchHandler @ 0068949c */
      ::operator+((char *)&local_90,(QString *)(local_50 + -0x7268));
                    /* try { // try from 00688ca0 to 00688ca7 has its CatchHandler @ 00689494 */
      ::operator+((QString *)local_a8,(char *)&local_90);
                    /* try { // try from 00688cc0 to 00688cc7 has its CatchHandler @ 00689468 */
      SerialObject::sendGcodeCmd(&local_80,local_54,local_a8,1,0,0,0);
      QString::~QString((QString *)&local_80);
      QString::~QString((QString *)local_a8);
      QString::~QString((QString *)&local_90);
      QString::~QString((QString *)&local_8c);
      QString::~QString((QString *)&local_88);
                    /* try { // try from 00688cf4 to 00688d4f has its CatchHandler @ 00689298 */
      SerialObject::setRightNozzleTemp(*(SerialObject **)(this + 0x5c),0x8c);
      sleep(2);
      pSVar6 = *(SerialObject **)(this + 0x5c);
      while (iVar1 = SerialObject::waitArriveTemperature(pSVar6,false,true,false), iVar1 == 0) {
        sleep(1);
        if (this[0xa7] != (Print)0x0) goto LAB_006887bc;
        pSVar6 = *(SerialObject **)(this + 0x5c);
      }
      local_54 = *(undefined4 *)(this + 0x5c);
      local_a8[0] = (undefined1 *)QString::fromAscii_helper("M106 S0",-1);
                    /* try { // try from 00688d6c to 00688d73 has its CatchHandler @ 00689460 */
      SerialObject::sendGcodeCmd(&local_84,local_54,local_a8,1,0,0,0);
      QString::~QString((QString *)&local_84);
      QString::~QString((QString *)local_a8);
      local_54 = *(undefined4 *)(this + 0x5c);
                    /* try { // try from 00688d94 to 00688d9b has its CatchHandler @ 00689298 */
      local_a8[0] = (undefined1 *)QString::fromAscii_helper("G1 Z5 F6000",-1);
                    /* try { // try from 00688db8 to 00688dbf has its CatchHandler @ 00689458 */
      SerialObject::sendGcodeCmd(&local_88,local_54,local_a8,1,0,0,0);
      QString::~QString((QString *)&local_88);
      QString::~QString((QString *)local_a8);
      local_54 = *(undefined4 *)(this + 0x5c);
                    /* try { // try from 00688de0 to 00688de7 has its CatchHandler @ 00689298 */
      local_a8[0] = (undefined1 *)QString::fromAscii_helper("G1 X107.5 Y107.5 F30000",-1);
                    /* try { // try from 00688e04 to 00688e0b has its CatchHandler @ 0068930c */
      SerialObject::sendGcodeCmd(&local_8c,local_54,local_a8,1,0,0,0);
      QString::~QString((QString *)&local_8c);
      QString::~QString((QString *)local_a8);
                    /* try { // try from 00688e24 to 00688e2b has its CatchHandler @ 00689298 */
      uVar8 = *(undefined4 *)(this + 0x5c);
      local_a8[0] = (undefined1 *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 00688e48 to 00688e4f has its CatchHandler @ 006892f8 */
      SerialObject::sendGcodeCmd(&local_90,uVar8,local_a8,1,0,0,0);
      QString::~QString((QString *)&local_90);
      QString::~QString((QString *)local_a8);
      if (this[0xa7] != (Print)0x0) goto LAB_006887bc;
                    /* try { // try from 00688e70 to 00688e8b has its CatchHandler @ 00689298 */
      this[0x19] = (Print)0x1;
      uVar2 = SerialObject::checkLevelPinStatus(*(SerialObject **)(this + 0x5c));
      if (uVar2 == 0) goto LAB_006887bc;
      SerialObject::cmdProbeCalibration();
                    /* try { // try from 00688e90 to 00688e97 has its CatchHandler @ 006892e4 */
      local_80 = QString::fromAscii_helper("No trigger",-1);
                    /* try { // try from 00688ea8 to 00688eaf has its CatchHandler @ 006892a0 */
      iVar1 = QString::indexOf(aQStack_7c,&local_80,0,1);
      uVar9 = uVar2;
      if (iVar1 == -1) {
                    /* try { // try from 00689138 to 0068913f has its CatchHandler @ 006895f8 */
        local_84 = QString::fromAscii_helper("Probe triggered prior to movement",-1);
                    /* try { // try from 00689150 to 00689157 has its CatchHandler @ 006895e8 */
        iVar1 = QString::indexOf(aQStack_7c,&local_84,0,1);
        if (iVar1 == -1) {
                    /* try { // try from 006895a8 to 006895af has its CatchHandler @ 00689654 */
          local_88 = (undefined4 *)QString::fromAscii_helper(local_48 + -0x5400,-1);
                    /* try { // try from 006895c0 to 006895c7 has its CatchHandler @ 00689644 */
          iVar1 = QString::indexOf(aQStack_7c,&local_88,0,1);
          if (iVar1 == -1) {
                    /* try { // try from 00689608 to 0068960f has its CatchHandler @ 006896c4 */
            local_8c = QString::fromAscii_helper(local_44 + -0x53e4,-1);
                    /* try { // try from 00689620 to 00689627 has its CatchHandler @ 0068969c */
            iVar1 = QString::indexOf(aQStack_7c,&local_8c,0,1);
            if (iVar1 == -1) {
                    /* try { // try from 00689660 to 00689667 has its CatchHandler @ 00689730 */
              local_90 = QString::fromAscii_helper("Endstop z still triggered",-1);
                    /* try { // try from 00689678 to 0068967f has its CatchHandler @ 00689708 */
              iVar1 = QString::indexOf(aQStack_7c,&local_90,0,1);
              if (iVar1 == -1) {
                    /* try { // try from 006896d0 to 006896d7 has its CatchHandler @ 00689754 */
                local_a8[0] = (undefined1 *)QString::fromAscii_helper("!!",-1);
                    /* try { // try from 006896e8 to 006896ef has its CatchHandler @ 00689738 */
                iVar1 = QString::indexOf(aQStack_7c,local_a8,0,1);
                uVar9 = (uint)(iVar1 != -1);
                QString::~QString((QString *)local_a8);
              }
              QString::~QString((QString *)&local_90);
            }
            QString::~QString((QString *)&local_8c);
          }
          QString::~QString((QString *)&local_88);
        }
        if (uVar2 != 0) {
          QString::~QString((QString *)&local_84);
        }
      }
      QString::~QString((QString *)&local_80);
      if (uVar9 == 0) {
        do {
                    /* try { // try from 00688ecc to 00688ef3 has its CatchHandler @ 0068927c */
          sleep(1);
        } while (this[0x18] == (Print)0x0);
        this[0x18] = (Print)0x0;
        this[0x19] = (Print)0x0;
        uVar8 = *(undefined4 *)(this + 0x5c);
        local_90 = QString::fromAscii_helper("ABORT",-1);
        paVar7 = (allocator *)&local_90;
                    /* try { // try from 00688f10 to 00688f17 has its CatchHandler @ 00689260 */
        SerialObject::sendGcodeCmd(local_a8,uVar8,paVar7,1,0,0,0);
        QString::~QString((QString *)local_a8);
        QString::~QString((QString *)&local_90);
                    /* try { // try from 00688f28 to 00688f8b has its CatchHandler @ 0068927c */
        pGVar4 = (GetConfigFile *)getConfigFile();
        pCVar5 = (Config *)GetConfigFile::configFile(pGVar4);
        local_3c = 0;
        Config::getLevelPrintPointZ(pCVar5);
        local_3c = 0;
        fVar10 = SUB84(dVar11,0);
        pGVar4 = (GetConfigFile *)getConfigFile();
        pCVar5 = (Config *)GetConfigFile::configFile(pGVar4);
        iVar1 = Config::getCheckZFrist(pCVar5);
        if (iVar1 != 0) {
          std::__cxx11::string::string((string *)local_a8,"/usr/data/config/printer.cfg",paVar7);
          local_3c = 0;
                    /* try { // try from 00688fa0 to 00688fa7 has its CatchHandler @ 0068932c */
          get13thPointFromFile((string *)this);
          local_3c = 0;
          fVar10 = (float)(dVar11 - DAT_00afd698);
          if (NAN(fVar10)) {
            if (local_a8[0] != auStack_a0) {
              operator_delete(local_a8[0]);
            }
            goto LAB_006890e8;
          }
          if (local_a8[0] != auStack_a0) {
            operator_delete(local_a8[0]);
          }
        }
        local_3c = 0;
                    /* try { // try from 00689004 to 0068900b has its CatchHandler @ 0068927c */
        fVar12 = *(float *)(this + 0x1c) - fVar10;
        QDebug::QDebug((QDebug *)local_a8,0);
                    /* try { // try from 00689010 to 00689097 has its CatchHandler @ 00689400 */
        pQVar3 = (QDebug *)QDebug::operator<<((QDebug *)local_a8,"checkZ");
        pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,"probe calibrate z: ");
        local_3c = 0;
        pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,*(float *)(this + 0x1c));
        pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,"diffZ:");
        local_3c = 0;
        pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,fVar12);
        pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,"saveZ:");
        local_3c = 0;
        QDebug::operator<<(pQVar3,fVar10);
        QDebug::~QDebug((QDebug *)local_a8);
        local_3c = 0;
        if ((fVar12 <= DAT_00ae6c30) && (local_3c = 0, DAT_00adcba4 <= fVar12)) {
          local_3c = 0;
          pSVar6 = *(SerialObject **)(this + 0x5c);
          local_88 = local_58;
          QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 0068939c to 006893a3 has its CatchHandler @ 00689450 */
          QString::number((double)CONCAT44(in_f13,in_f12),SUB81((double)fVar12,0),
                          (int)((ulonglong)(double)fVar12 >> 0x20));
                    /* try { // try from 006893b0 to 006893b7 has its CatchHandler @ 00689448 */
          ::operator+((char *)&local_90,(QString *)"SET_GCODE_OFFSET Z=");
                    /* try { // try from 006893c4 to 006893cb has its CatchHandler @ 00689440 */
          ::operator+((QString *)local_a8,(char *)&local_90);
                    /* try { // try from 006893d0 to 006893d7 has its CatchHandler @ 00689414 */
          SerialObject::setAsynGcodeAdjustZ(pSVar6,local_a8);
          QString::~QString((QString *)local_a8);
          QString::~QString((QString *)&local_90);
          QString::~QString((QString *)&local_8c);
          QString::~QString((QString *)&local_88);
        }
      }
LAB_006890e8:
      QString::~QString(aQStack_7c);
      goto LAB_006887bc;
    }
    QString::~QString((QString *)&local_88);
  }
  QString::~QString((QString *)&local_84);
  QString::~QString((QString *)&local_80);
LAB_006887bc:
  QString::~QString(aQStack_60);
  return;
}



// ===== GuiderLevelPrint::doLevel @ 006dae14
// caller: ? @ 00cd9274
// caller: ? @ 00d09b20
// caller: ? @ 00dbab62
// caller: ? @ 00dbab6e
// caller: ? @ 00dbab79
// caller: ? @ 00dbab84
// caller: ? @ 00dbab96
// caller: ? @ 00dbaba1
// caller: ? @ 00dbabac
// caller: ? @ 00dbabb7
// caller: ? @ 00dbabc2
// caller: ? @ 00dbabd9
// caller: ? @ 00dbad8f
// caller: ? @ Entry Point
// caller: GuiderLevelPrint::doAutoCalibration @ 006dc680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuiderLevelPrint::doLevel() */

int GuiderLevelPrint::doLevel(void)

{
  int iVar1;
  QDebug *pQVar2;
  GetConfigFile *pGVar3;
  Config *pCVar4;
  undefined4 *puVar5;
  QTextStream *pQVar6;
  int iVar7;
  GuiderLevelPrint *in_a0;
  SerialObject *this;
  QString *this_00;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  float fVar11;
  ulonglong in_f0_1;
  ulonglong uVar12;
  float in_f12;
  undefined4 in_f13;
  float in_f14;
  float fVar13;
  double dVar14;
  QTextStream *local_c8;
  int *local_c4;
  int *local_c0;
  undefined4 *local_bc;
  QString aQStack_b8 [4];
  QString aQStack_b4 [4];
  QString aQStack_b0 [4];
  QString aQStack_ac [4];
  QString aQStack_a8 [4];
  QString aQStack_a4 [4];
  QString aQStack_a0 [4];
  QString aQStack_9c [4];
  QString aQStack_98 [4];
  QString aQStack_94 [4];
  QString aQStack_90 [4];
  QString aQStack_8c [4];
  QString aQStack_88 [4];
  QString aQStack_84 [4];
  QString aQStack_80 [4];
  QString aQStack_7c [4];
  QString aQStack_78 [4];
  QString aQStack_74 [4];
  QString aQStack_70 [4];
  QString aQStack_6c [4];
  QString aQStack_68 [4];
  QString aQStack_64 [4];
  int *local_60 [2];
  undefined **local_58;
  undefined4 *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  uint local_44;
  undefined4 local_3c;
  
  local_3c = 0;
  in_a0[0x15c] = (GuiderLevelPrint)0x0;
  in_a0[0x15d] = (GuiderLevelPrint)0x1;
  *(undefined4 *)(in_a0 + 0x160) = 0;
  iVar1 = homeFirst(in_a0);
  if (iVar1 == 0) {
    QDebug::QDebug((QDebug *)&local_c8,2);
                    /* try { // try from 006daebc to 006daee3 has its CatchHandler @ 006dc31c */
    pQVar2 = (QDebug *)QDebug::operator<<((QDebug *)&local_c8,"../ad5x/guider/guiderLevelPrint.cpp")
    ;
    pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,"doLevel");
    QDebug::operator<<(pQVar2,"checkLevelPinStatus error");
    QDebug::~QDebug((QDebug *)&local_c8);
    sigComplete(in_a0);
    iVar1 = 0;
  }
  else {
    pGVar3 = (GetConfigFile *)getConfigFile();
    pCVar4 = (Config *)GetConfigFile::configFile(pGVar3);
    local_3c = 0;
    Config::getLeftExtruderXOffset(pCVar4);
    fVar13 = (float)in_f0_1;
    local_3c = 0;
    in_f0_1 = in_f0_1 & 0xffffffff;
    pGVar3 = (GetConfigFile *)getConfigFile();
    pCVar4 = (Config *)GetConfigFile::configFile(pGVar3);
    local_3c = 0;
    Config::getLeftExtruderYOffset(pCVar4);
    local_3c = 0;
    SerialObject::printClearGoPos(in_f12,in_f14);
    local_3c = 0;
    MainWindow::getBedTargetTemp(MainWindow::instMainWindow);
    local_3c = 0;
    uVar10 = (uint)fVar13;
    uVar12 = (ulonglong)uVar10;
    local_44 = 0x3c;
    if (0x3b < (int)uVar10) {
      local_44 = uVar10;
    }
    SerialObject::setPlatformHeat(*(SerialObject **)(in_a0 + 0x18),local_44);
    pGVar3 = (GetConfigFile *)getConfigFile();
    pCVar4 = (Config *)GetConfigFile::configFile(pGVar3);
    Config::getChannel(pCVar4);
    iVar1 = SerialObject::getFilamentTypeTemp(*(int *)(in_a0 + 0x18));
    SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x18),iVar1);
    uVar9 = *(undefined4 *)(in_a0 + 0x18);
    local_c4 = (int *)QString::fromAscii_helper("G1 Z5 F600",-1);
                    /* try { // try from 006db084 to 006db08b has its CatchHandler @ 006dc314 */
    SerialObject::sendGcodeCmd((QString *)&local_c8,uVar9,&local_c4,1,0,0,0);
    QString::~QString((QString *)&local_c8);
    QString::~QString((QString *)&local_c4);
    sleep(2);
    local_54 = &QString::shared_null;
    local_50 = "../ad5x/guider/guiderLevelPrint.cpp";
    local_58 = &PTR_s_Internal_Server_Error_00b10000;
    local_4c = "temp:";
    local_48 = 
    "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
    ;
    while( true ) {
      fVar13 = (float)uVar12;
      local_3c = 0;
      MainWindow::getNozzleRightRealTemp(MainWindow::instMainWindow);
      local_3c = 0;
      fVar11 = (float)(int)fVar13;
      fVar13 = fVar11;
      MainWindow::getBedRealTemp(MainWindow::instMainWindow);
      local_3c = 0;
      uVar10 = (uint)fVar13;
      uVar12 = (ulonglong)uVar10;
      pQVar6 = operator_new(0x18);
                    /* try { // try from 006db1a0 to 006db1a7 has its CatchHandler @ 006dc300 */
      local_c8 = (QTextStream *)0x2;
      QTextStream::QTextStream(pQVar6,pQVar6 + 8,(QString *)&local_c8);
      *(undefined4 **)(pQVar6 + 8) = local_54;
      QString::shared_null = QString::shared_null + 1;
      *(undefined4 *)(pQVar6 + 0xc) = 1;
      *(undefined4 *)(pQVar6 + 0x10) = 2;
      pQVar6[0x14] = (QTextStream)0x1;
      pQVar6[0x15] = (QTextStream)0x1;
      local_c8 = pQVar6;
                    /* try { // try from 006db1e8 to 006db243 has its CatchHandler @ 006dc2f8 */
      pQVar2 = (QDebug *)QDebug::operator<<((QDebug *)&local_c8,local_50);
      pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,(char *)(local_58 + -0x18f9));
      pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,local_4c);
      QTextStream::operator<<(*(QTextStream **)pQVar2,(int)fVar11);
      if ((*(QTextStream **)pQVar2)[0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(*(QTextStream **)pQVar2,' ');
      }
                    /* try { // try from 006db0e4 to 006db0fb has its CatchHandler @ 006dc2f8 */
      puVar5 = (undefined4 *)QDebug::operator<<(pQVar2,local_48 + -0x6604);
      QTextStream::operator<<((QTextStream *)*puVar5,uVar10);
      if (((QTextStream *)*puVar5)[0x14] != (QTextStream)0x0) {
        QTextStream::operator<<((QTextStream *)*puVar5,' ');
      }
      QDebug::~QDebug((QDebug *)&local_c8);
      fVar13 = (float)in_f0_1;
      if ((iVar1 <= (int)fVar11) && ((int)local_44 <= (int)uVar10)) break;
      sleep(1);
    }
    SerialObject::flushFilamentSecond(*(int *)(in_a0 + 0x18),1);
    local_3c = 0;
    SerialObject::flushFilamentBrush(SUB41(*(undefined4 *)(in_a0 + 0x18),0),1.4013e-45,fVar13);
    SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x18),0xb4);
    local_3c = 0;
    SerialObject::clear_brush(in_f12);
    local_3c = 0;
    SerialObject::clear_brush(in_f12);
    uVar9 = *(undefined4 *)(in_a0 + 0x18);
    local_c4 = (int *)QString::fromAscii_helper("G1 Z5 F800",-1);
                    /* try { // try from 006db2f0 to 006db2f7 has its CatchHandler @ 006dc2f0 */
    SerialObject::sendGcodeCmd((QString *)&local_c8,uVar9,&local_c4,1,0,0,0);
    QString::~QString((QString *)&local_c8);
    QString::~QString((QString *)&local_c4);
    uVar9 = *(undefined4 *)(in_a0 + 0x18);
    local_c4 = (int *)QString::fromAscii_helper("G1 X60 Y-3 F30000",-1);
                    /* try { // try from 006db338 to 006db33f has its CatchHandler @ 006dc2e8 */
    SerialObject::sendGcodeCmd((QString *)&local_c8,uVar9,&local_c4,1,0,0,0);
    QString::~QString((QString *)&local_c8);
    QString::~QString((QString *)&local_c4);
    uVar9 = *(undefined4 *)(in_a0 + 0x18);
    local_c4 = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 006db380 to 006db387 has its CatchHandler @ 006dc2d4 */
    SerialObject::sendGcodeCmd((QString *)&local_c8,uVar9,&local_c4,1,0,0,0);
    QString::~QString((QString *)&local_c8);
    QString::~QString((QString *)&local_c4);
    iVar1 = SerialObject::checkLevelPinStatus(*(SerialObject **)(in_a0 + 0x18));
    QDebug::QDebug((QDebug *)&local_c8,0);
                    /* try { // try from 006db3b8 to 006db3eb has its CatchHandler @ 006dc2c0 */
    pQVar2 = (QDebug *)QDebug::operator<<((QDebug *)&local_c8,(char *)(local_58 + -0x18f9));
    puVar5 = (undefined4 *)QDebug::operator<<(pQVar2,"checkLevelPinStatus:");
    if (iVar1 == 0) {
      pcVar8 = "false";
    }
    else {
      pcVar8 = "true";
    }
    QTextStream::operator<<((QTextStream *)*puVar5,pcVar8);
    if (((QTextStream *)*puVar5)[0x14] != (QTextStream)0x0) {
                    /* try { // try from 006dbc64 to 006dbc6b has its CatchHandler @ 006dc2c0 */
      QTextStream::operator<<((QTextStream *)*puVar5,' ');
    }
    QDebug::~QDebug((QDebug *)&local_c8);
    if (iVar1 == 0) {
      QMetaObject::tr((char *)&local_c0,(char *)&staticMetaObject);
      local_c8 = (QTextStream *)local_c0;
      *local_c0 = *local_c0 + 1;
                    /* try { // try from 006db450 to 006db457 has its CatchHandler @ 006dc34c */
      sigCalibrationErr(in_a0,(QString *)&local_c8);
      QString::~QString((QString *)&local_c8);
                    /* try { // try from 006db464 to 006db48b has its CatchHandler @ 006dc324 */
      SerialObject::setPlatformHeat(*(SerialObject **)(in_a0 + 0x18),0);
      SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x18),0);
      uVar9 = *(undefined4 *)(in_a0 + 0x18);
      local_c4 = (int *)QString::fromAscii_helper("G1 Z100 F800",-1);
                    /* try { // try from 006db4a8 to 006db4af has its CatchHandler @ 006dc338 */
      SerialObject::sendGcodeCmd((QString *)&local_c8,uVar9,&local_c4,1,0,0,0);
      QString::~QString((QString *)&local_c8);
      QString::~QString((QString *)&local_c4);
      QString::~QString((QString *)&local_c0);
      iVar1 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(in_a0 + 0x18);
      local_c8 = (QTextStream *)QString::fromAscii_helper("PROBE_CALIBRATE",-1);
                    /* try { // try from 006db508 to 006db50f has its CatchHandler @ 006dc368 */
      SerialObject::sendGcodeCmd(local_60,uVar9,(QString *)&local_c8,1,0,0,0);
      QString::~QString((QString *)&local_c8);
      local_c8 = (QTextStream *)local_60[0];
      *local_60[0] = *local_60[0] + 1;
                    /* try { // try from 006db540 to 006db547 has its CatchHandler @ 006dc37c */
      iVar1 = checkProbeError(in_a0,(QString *)&local_c8,1);
      QString::~QString((QString *)&local_c8);
      if (iVar1 == 0) {
        do {
                    /* try { // try from 006db55c to 006db57f has its CatchHandler @ 006dc360 */
          sleep(1);
        } while (in_a0[0x15c] == (GuiderLevelPrint)0x0);
        in_a0[0x15c] = (GuiderLevelPrint)0x0;
        in_a0[0x15d] = (GuiderLevelPrint)0x0;
        QDebug::QDebug((QDebug *)&local_c8,0);
                    /* try { // try from 006db588 to 006db5bf has its CatchHandler @ 006dc2b8 */
        pQVar2 = (QDebug *)QDebug::operator<<((QDebug *)&local_c8,(char *)(local_58 + -0x18f9));
        puVar5 = (undefined4 *)QDebug::operator<<(pQVar2,"probe calibrate z: ");
        local_3c = 0;
        QTextStream::operator<<((QTextStream *)*puVar5,*(float *)(in_a0 + 0x160));
        if (((QTextStream *)*puVar5)[0x14] != (QTextStream)0x0) {
                    /* try { // try from 006dbe34 to 006dbe3b has its CatchHandler @ 006dc2b8 */
          QTextStream::operator<<((QTextStream *)*puVar5,' ');
        }
        QDebug::~QDebug((QDebug *)&local_c8);
                    /* try { // try from 006db5e4 to 006db5eb has its CatchHandler @ 006dc360 */
        uVar9 = *(undefined4 *)(in_a0 + 0x18);
        local_c8 = (QTextStream *)QString::fromAscii_helper("ABORT",-1);
                    /* try { // try from 006db608 to 006db60f has its CatchHandler @ 006dc2b0 */
        SerialObject::sendGcodeCmd(aQStack_6c,uVar9,(QString *)&local_c8,1,0,0,0);
        QString::~QString(aQStack_6c);
        QString::~QString((QString *)&local_c8);
                    /* try { // try from 006db62c to 006db633 has its CatchHandler @ 006dc360 */
        uVar9 = *(undefined4 *)(in_a0 + 0x18);
        local_c8 = (QTextStream *)QString::fromAscii_helper("M106 P0 S255",-1);
                    /* try { // try from 006db650 to 006db657 has its CatchHandler @ 006dc2a8 */
        SerialObject::sendGcodeCmd(aQStack_70,uVar9,(QString *)&local_c8,1,0,0,0);
        QString::~QString(aQStack_70);
        QString::~QString((QString *)&local_c8);
                    /* try { // try from 006db674 to 006db67b has its CatchHandler @ 006dc360 */
        uVar9 = *(undefined4 *)(in_a0 + 0x18);
        local_c8 = (QTextStream *)QString::fromAscii_helper("G92 E0",-1);
                    /* try { // try from 006db698 to 006db69f has its CatchHandler @ 006dc2a0 */
        SerialObject::sendGcodeCmd(aQStack_74,uVar9,(QString *)&local_c8,1,0,0,0);
        QString::~QString(aQStack_74);
        QString::~QString((QString *)&local_c8);
                    /* try { // try from 006db6bc to 006db6c3 has its CatchHandler @ 006dc360 */
        uVar9 = *(undefined4 *)(in_a0 + 0x18);
        local_c8 = (QTextStream *)QString::fromAscii_helper("G1 X60 Y-3 F12000",-1);
                    /* try { // try from 006db6e0 to 006db6e7 has its CatchHandler @ 006dc298 */
        SerialObject::sendGcodeCmd(aQStack_78,uVar9,(QString *)&local_c8,1,0,0,0);
        QString::~QString(aQStack_78);
        QString::~QString((QString *)&local_c8);
        local_3c = 0;
        local_50 = *(char **)(in_a0 + 0x18);
        local_bc = local_54;
        QString::shared_null = QString::shared_null + 1;
        dVar14 = (double)(float)((double)*(float *)(in_a0 + 0x160) + DAT_00adcbb8);
                    /* try { // try from 006db768 to 006db76f has its CatchHandler @ 006dc290 */
        QString::number((double)CONCAT44(in_f13,in_f12),SUB81(dVar14,0),
                        (int)((ulonglong)dVar14 >> 0x20));
                    /* try { // try from 006db77c to 006db783 has its CatchHandler @ 006dc288 */
        QString::fromAscii((char *)&local_c4,0xad8d98);
                    /* try { // try from 006db788 to 006db78f has its CatchHandler @ 006dc280 */
        QString::append((QString *)&local_c4);
                    /* try { // try from 006db7a0 to 006db7a7 has its CatchHandler @ 006dc278 */
        local_4c = 
        "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
        ;
        ::operator+((QString *)&local_c8,(char *)&local_c4);
                    /* try { // try from 006db7c0 to 006db7c7 has its CatchHandler @ 006dc270 */
        SerialObject::sendGcodeCmd(aQStack_7c,local_50,(QString *)&local_c8,1,0,0,0);
        QString::~QString(aQStack_7c);
        QString::~QString((QString *)&local_c8);
        QString::~QString((QString *)&local_c4);
        QString::~QString((QString *)&local_c0);
        QString::~QString((QString *)&local_bc);
        local_50 = *(char **)(in_a0 + 0x18);
                    /* try { // try from 006db800 to 006db807 has its CatchHandler @ 006dc360 */
        local_c8 = (QTextStream *)QString::fromAscii_helper("G1 X130 F1200",-1);
                    /* try { // try from 006db824 to 006db82b has its CatchHandler @ 006dc268 */
        SerialObject::sendGcodeCmd(aQStack_80,local_50,(QString *)&local_c8,1,0,0,0);
        QString::~QString(aQStack_80);
        QString::~QString((QString *)&local_c8);
        local_50 = *(char **)(in_a0 + 0x18);
                    /* try { // try from 006db84c to 006db853 has its CatchHandler @ 006dc360 */
        local_c8 = (QTextStream *)QString::fromAscii_helper("G1 X150 F1200",-1);
                    /* try { // try from 006db870 to 006db877 has its CatchHandler @ 006dc260 */
        SerialObject::sendGcodeCmd(aQStack_84,local_50,(QString *)&local_c8,1,0,0,0);
        QString::~QString(aQStack_84);
        QString::~QString((QString *)&local_c8);
        local_3c = 0;
        local_50 = *(char **)(in_a0 + 0x18);
        local_bc = local_54;
        QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 006db8ec to 006db8f3 has its CatchHandler @ 006dc258 */
        QString::number((double)CONCAT44(in_f13,in_f12),
                        SUB81((double)(float)(dVar14 - _DAT_00adcbc0),0),
                        (int)((ulonglong)(double)(float)(dVar14 - _DAT_00adcbc0) >> 0x20));
                    /* try { // try from 006db8fc to 006db903 has its CatchHandler @ 006dc210 */
        QString::fromAscii((char *)&local_c4,0xad8d98);
                    /* try { // try from 006db908 to 006db90f has its CatchHandler @ 006dc208 */
        QString::append((QString *)&local_c4);
                    /* try { // try from 006db91c to 006db923 has its CatchHandler @ 006dc200 */
        ::operator+((QString *)&local_c8,(char *)&local_c4);
                    /* try { // try from 006db93c to 006db943 has its CatchHandler @ 006dc1d4 */
        SerialObject::sendGcodeCmd(aQStack_88,local_50,(QString *)&local_c8,1,0,0,0);
        QString::~QString(aQStack_88);
        QString::~QString((QString *)&local_c8);
        QString::~QString((QString *)&local_c4);
        QString::~QString((QString *)&local_c0);
        QString::~QString((QString *)&local_bc);
                    /* try { // try from 006db970 to 006db9bf has its CatchHandler @ 006dc360 */
        SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x18),0x8c);
        sleep(2);
        this = *(SerialObject **)(in_a0 + 0x18);
        while (iVar1 = SerialObject::waitArriveTemperature(this,false,true,false), iVar1 == 0) {
          sleep(1);
          this = *(SerialObject **)(in_a0 + 0x18);
        }
        in_a0[0x164] = (GuiderLevelPrint)0x0;
        uVar9 = *(undefined4 *)(in_a0 + 0x18);
        local_c8 = (QTextStream *)QString::fromAscii_helper("M106 S0",-1);
                    /* try { // try from 006db9dc to 006db9e3 has its CatchHandler @ 006dc1cc */
        SerialObject::sendGcodeCmd(aQStack_8c,uVar9,(QString *)&local_c8,1,0,0,0);
        QString::~QString(aQStack_8c);
        QString::~QString((QString *)&local_c8);
                    /* try { // try from 006dba00 to 006dba07 has its CatchHandler @ 006dc360 */
        uVar9 = *(undefined4 *)(in_a0 + 0x18);
        local_c8 = (QTextStream *)QString::fromAscii_helper("G1 Z5 F6000",-1);
                    /* try { // try from 006dba24 to 006dba2b has its CatchHandler @ 006dc1c4 */
        SerialObject::sendGcodeCmd(aQStack_90,uVar9,(QString *)&local_c8,1,0,0,0);
        QString::~QString(aQStack_90);
        QString::~QString((QString *)&local_c8);
                    /* try { // try from 006dba44 to 006dba4b has its CatchHandler @ 006dc360 */
        uVar9 = *(undefined4 *)(in_a0 + 0x18);
        local_c8 = (QTextStream *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 006dba68 to 006dba6f has its CatchHandler @ 006dc1bc */
        SerialObject::sendGcodeCmd(aQStack_94,uVar9,(QString *)&local_c8,1,0,0,0);
        QString::~QString(aQStack_94);
        QString::~QString((QString *)&local_c8);
                    /* try { // try from 006dba80 to 006dba97 has its CatchHandler @ 006dc360 */
        iVar1 = SerialObject::checkLevelPinStatus(*(SerialObject **)(in_a0 + 0x18));
        QDebug::QDebug((QDebug *)&local_c8,0);
                    /* try { // try from 006dbaa0 to 006dbacf has its CatchHandler @ 006dc1a8 */
        pQVar2 = (QDebug *)QDebug::operator<<((QDebug *)&local_c8,(char *)(local_58 + -0x18f9));
        puVar5 = (undefined4 *)QDebug::operator<<(pQVar2,"checkLevelPinStatus:");
        if (iVar1 == 0) {
          pcVar8 = "false";
        }
        else {
          pcVar8 = "true";
        }
        QTextStream::operator<<((QTextStream *)*puVar5,pcVar8);
        if (((QTextStream *)*puVar5)[0x14] != (QTextStream)0x0) {
                    /* try { // try from 006dbe24 to 006dbe2b has its CatchHandler @ 006dc1a8 */
          QTextStream::operator<<((QTextStream *)*puVar5,' ');
        }
        QDebug::~QDebug((QDebug *)&local_c8);
        if (iVar1 == 0) {
                    /* try { // try from 006dbb00 to 006dbb07 has its CatchHandler @ 006dc360 */
          QMetaObject::tr((char *)&local_c4,(char *)&staticMetaObject);
          local_c8 = (QTextStream *)local_c4;
          *local_c4 = *local_c4 + 1;
                    /* try { // try from 006dbb2c to 006dbb33 has its CatchHandler @ 006dc230 */
          sigCalibrationErr(in_a0,(QString *)&local_c8);
          QString::~QString((QString *)&local_c8);
                    /* try { // try from 006dbb40 to 006dbb67 has its CatchHandler @ 006dc228 */
          SerialObject::setPlatformHeat(*(SerialObject **)(in_a0 + 0x18),0);
          SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x18),0);
          uVar9 = *(undefined4 *)(in_a0 + 0x18);
          local_c8 = (QTextStream *)QString::fromAscii_helper("G1 Z100 F800",-1);
                    /* try { // try from 006dbb84 to 006dbb8b has its CatchHandler @ 006dc220 */
          SerialObject::sendGcodeCmd(aQStack_98,uVar9,(QString *)&local_c8,1,0,0,0);
          QString::~QString(aQStack_98);
          QString::~QString((QString *)&local_c8);
          QString::~QString((QString *)&local_c4);
          iVar1 = 0;
        }
        else {
                    /* try { // try from 006dbc80 to 006dbc9f has its CatchHandler @ 006dc360 */
          sleep(2);
          iVar1 = 0;
          while( true ) {
            SerialObject::cmdBedCalibration();
            local_c8 = (QTextStream *)local_c4;
            *local_c4 = *local_c4 + 1;
                    /* try { // try from 006dbcc8 to 006dbccf has its CatchHandler @ 006dc150 */
            iVar7 = checkProbeError(in_a0,(QString *)&local_c8,iVar1);
            QString::~QString((QString *)&local_c8);
            if (iVar7 == 0) break;
                    /* try { // try from 006dbce8 to 006dbcef has its CatchHandler @ 006dc3a4 */
            uVar9 = *(undefined4 *)(in_a0 + 0x18);
            local_c8 = (QTextStream *)QString::fromAscii_helper("G1 Z5 F800",-1);
                    /* try { // try from 006dbd0c to 006dbd13 has its CatchHandler @ 006dc39c */
            SerialObject::sendGcodeCmd(aQStack_9c,uVar9,(QString *)&local_c8,1,0,0,0);
            QString::~QString(aQStack_9c);
            QString::~QString((QString *)&local_c8);
                    /* try { // try from 006dbd2c to 006dbd33 has its CatchHandler @ 006dc3a4 */
            uVar9 = *(undefined4 *)(in_a0 + 0x18);
            local_c8 = (QTextStream *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 006dbd50 to 006dbd57 has its CatchHandler @ 006dc394 */
            SerialObject::sendGcodeCmd(aQStack_a0,uVar9,(QString *)&local_c8,1,0,0,0);
            QString::~QString(aQStack_a0);
            QString::~QString((QString *)&local_c8);
            *(undefined4 *)(in_a0 + 0x154) = 0x184;
            QString::~QString((QString *)&local_c4);
            if (iVar1 != 0) {
                    /* try { // try from 006dbd84 to 006dbdab has its CatchHandler @ 006dc360 */
              SerialObject::setPlatformHeat(*(SerialObject **)(in_a0 + 0x18),0);
              SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x18),0);
              uVar9 = *(undefined4 *)(in_a0 + 0x18);
              local_c8 = (QTextStream *)QString::fromAscii_helper("G1 Z100 F800",-1);
                    /* try { // try from 006dbdc8 to 006dbdcf has its CatchHandler @ 006dc38c */
              SerialObject::sendGcodeCmd(aQStack_a4,uVar9,(QString *)&local_c8,1,0,0,0);
              QString::~QString(aQStack_a4);
              QString::~QString((QString *)&local_c8);
                    /* try { // try from 006dbde8 to 006dbdef has its CatchHandler @ 006dc360 */
              uVar9 = *(undefined4 *)(in_a0 + 0x18);
              local_c8 = (QTextStream *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 006dbe0c to 006dbe13 has its CatchHandler @ 006dc384 */
              SerialObject::sendGcodeCmd(aQStack_a8,uVar9,(QString *)&local_c8,1,0,0,0);
              this_00 = aQStack_a8;
              goto LAB_006dbc4c;
            }
            iVar1 = 1;
          }
          QString::~QString((QString *)&local_c4);
                    /* try { // try from 006dbe4c to 006dbe6f has its CatchHandler @ 006dc360 */
          iVar1 = checkLevelData(in_a0);
          if (iVar1 == 0) {
            uVar9 = *(undefined4 *)(in_a0 + 0x18);
            local_c8 = (QTextStream *)
                       QString::fromAscii_helper("BED_MESH_PROFILE REMOVE=default",-1);
                    /* try { // try from 006dbe8c to 006dbe93 has its CatchHandler @ 006dc250 */
            SerialObject::sendGcodeCmd(aQStack_ac,uVar9,(QString *)&local_c8,1,0,0,0);
            QString::~QString(aQStack_ac);
            QString::~QString((QString *)&local_c8);
                    /* try { // try from 006dbeb0 to 006dbeb7 has its CatchHandler @ 006dc360 */
            uVar9 = *(undefined4 *)(in_a0 + 0x18);
            local_c8 = (QTextStream *)QString::fromAscii_helper("BED_MESH_CLEAR",-1);
                    /* try { // try from 006dbed4 to 006dbedb has its CatchHandler @ 006dc248 */
            SerialObject::sendGcodeCmd(aQStack_b0,uVar9,(QString *)&local_c8,1,0,0,0);
            QString::~QString(aQStack_b0);
            QString::~QString((QString *)&local_c8);
                    /* try { // try from 006dbef0 to 006dbf17 has its CatchHandler @ 006dc360 */
            SerialObject::setPlatformHeat(*(SerialObject **)(in_a0 + 0x18),0);
            SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x18),0);
            uVar9 = *(undefined4 *)(in_a0 + 0x18);
            local_c8 = (QTextStream *)QString::fromAscii_helper("G1 Z100 F800",-1);
                    /* try { // try from 006dbf34 to 006dbf3b has its CatchHandler @ 006dc240 */
            SerialObject::sendGcodeCmd(aQStack_b4,uVar9,(QString *)&local_c8,1,0,0,0);
            QString::~QString(aQStack_b4);
            QString::~QString((QString *)&local_c8);
                    /* try { // try from 006dbf54 to 006dbf5b has its CatchHandler @ 006dc360 */
            uVar9 = *(undefined4 *)(in_a0 + 0x18);
            local_c8 = (QTextStream *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 006dbf78 to 006dbf7f has its CatchHandler @ 006dc238 */
            SerialObject::sendGcodeCmd(aQStack_b8,uVar9,(QString *)&local_c8,1,0,0,0);
            QString::~QString(aQStack_b8);
            QString::~QString((QString *)&local_c8);
          }
          else {
            local_3c = 0;
                    /* try { // try from 006dbfc4 to 006dc01f has its CatchHandler @ 006dc360 */
            fVar13 = (*(float *)(in_a0 + 0xac) + *(float *)(in_a0 + 0xb0) + *(float *)(in_a0 + 0xb4)
                     ) / DAT_00adcba8;
            pGVar3 = (GetConfigFile *)getConfigFile();
            pCVar4 = (Config *)GetConfigFile::configFile(pGVar3);
            local_3c = 0;
            Config::setLevelPrintPointZ(pCVar4,fVar13);
            pGVar3 = (GetConfigFile *)getConfigFile();
            pCVar4 = (Config *)GetConfigFile::configFile(pGVar3);
            Config::setCheckZFrist(pCVar4,false);
            uVar9 = *(undefined4 *)(in_a0 + 0x18);
            local_c8 = (QTextStream *)
                       QString::fromAscii_helper("BED_MESH_PROFILE SAVE=MESH_DATA",-1);
                    /* try { // try from 006dc03c to 006dc043 has its CatchHandler @ 006dc1a0 */
            SerialObject::sendGcodeCmd(&local_bc,uVar9,(QString *)&local_c8,1,0,0,0);
            QString::~QString((QString *)&local_bc);
            QString::~QString((QString *)&local_c8);
                    /* try { // try from 006dc060 to 006dc067 has its CatchHandler @ 006dc360 */
            uVar9 = *(undefined4 *)(in_a0 + 0x18);
            local_c8 = (QTextStream *)
                       QString::fromAscii_helper("BED_MESH_PROFILE REMOVE=default",-1);
                    /* try { // try from 006dc084 to 006dc08b has its CatchHandler @ 006dc198 */
            SerialObject::sendGcodeCmd((QString *)&local_c0,uVar9,(QString *)&local_c8,1,0,0,0);
            QString::~QString((QString *)&local_c0);
            QString::~QString((QString *)&local_c8);
                    /* try { // try from 006dc0a0 to 006dc0c7 has its CatchHandler @ 006dc360 */
            SerialObject::setPlatformHeat(*(SerialObject **)(in_a0 + 0x18),0);
            SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x18),0);
            uVar9 = *(undefined4 *)(in_a0 + 0x18);
            local_c8 = (QTextStream *)QString::fromAscii_helper("G1 Z100 F800",-1);
                    /* try { // try from 006dc0e4 to 006dc0eb has its CatchHandler @ 006dc190 */
            SerialObject::sendGcodeCmd(&local_c4,uVar9,(QString *)&local_c8,1,0,0,0);
            QString::~QString((QString *)&local_c4);
            QString::~QString((QString *)&local_c8);
                    /* try { // try from 006dc104 to 006dc10b has its CatchHandler @ 006dc360 */
            uVar9 = *(undefined4 *)(in_a0 + 0x18);
            local_c4 = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 006dc128 to 006dc12f has its CatchHandler @ 006dc188 */
            SerialObject::sendGcodeCmd((QString *)&local_c8,uVar9,&local_c4,1,0,0,0);
            QString::~QString((QString *)&local_c8);
            QString::~QString((QString *)&local_c4);
                    /* try { // try from 006dc140 to 006dc147 has its CatchHandler @ 006dc360 */
            sigLevelComplete(in_a0);
          }
        }
      }
      else {
                    /* try { // try from 006dbbb8 to 006dbbdf has its CatchHandler @ 006dc360 */
        SerialObject::setPlatformHeat(*(SerialObject **)(in_a0 + 0x18),0);
        SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x18),0);
        uVar9 = *(undefined4 *)(in_a0 + 0x18);
        local_c8 = (QTextStream *)QString::fromAscii_helper("G1 Z100 F800",-1);
                    /* try { // try from 006dbbfc to 006dbc03 has its CatchHandler @ 006dc218 */
        SerialObject::sendGcodeCmd(aQStack_64,uVar9,(QString *)&local_c8,1,0,0,0);
        QString::~QString(aQStack_64);
        QString::~QString((QString *)&local_c8);
                    /* try { // try from 006dbc1c to 006dbc23 has its CatchHandler @ 006dc360 */
        uVar9 = *(undefined4 *)(in_a0 + 0x18);
        local_c8 = (QTextStream *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 006dbc40 to 006dbc47 has its CatchHandler @ 006dc174 */
        SerialObject::sendGcodeCmd(aQStack_68,uVar9,(QString *)&local_c8,1,0,0,0);
        this_00 = aQStack_68;
LAB_006dbc4c:
        iVar1 = 0;
        QString::~QString(this_00);
        QString::~QString((QString *)&local_c8);
      }
      QString::~QString((QString *)local_60);
    }
  }
  return iVar1;
}



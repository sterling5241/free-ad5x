// string 00acf710 "SET_FAN_SPEED FAN=pcb_fan SPEED=0"
//   ref 0053a770 in MainWindow::initFilamentDetect
//   ref 006d95b0 in GuiderLevelPrint::doSaveCfg
//   ref 0058d64c in Filament::dryingStart
//   ref 005a2b8c in MoreInfo::on_pcbFan_clicked
//   ref 007a2744 in FourToOne::changeStart
//   ref 005715f8 in Settings::doSaveCfg
//   ref 00606280 in SerialObject::serialPrint
// string 00ad9c70 "SET_FAN_SPEED FAN=pcb_fan SPEED=1"
//   ref 0058d474 in Filament::dryingStart
//   ref 006dc648 in GuiderLevelPrint::doAutoCalibration
//   ref 005a2c2c in MoreInfo::on_pcbFan_clicked
//   ref 007a21ac in FourToOne::changeStart
//   ref 005779cc in Settings::doAutoCalibration
//   ref 0060480c in SerialObject::serialPrint
// ===== MainWindow::initFilamentDetect @ 0053a6f4

/* MainWindow::initFilamentDetect() */

void __thiscall MainWindow::initFilamentDetect(MainWindow *this)

{
  QDebug *this_00;
  GetConfigFile *this_01;
  Config *this_02;
  int iVar1;
  undefined4 uVar2;
  Data *local_10;
  Data *local_c;
  
  QDebug::QDebug((QDebug *)&local_10,0);
                    /* try { // try from 0053a718 to 0053a72f has its CatchHandler @ 0053a85c */
  this_00 = (QDebug *)QDebug::operator<<((QDebug *)&local_10,"../ad5x/mainWindow.cpp");
  QDebug::operator<<(this_00,"initFilamentDetect");
  QDebug::~QDebug((QDebug *)&local_10);
  this_01 = (GetConfigFile *)getConfigFile();
  this_02 = (Config *)GetConfigFile::configFile(this_01);
  iVar1 = Config::getRightFilamentDetect(this_02);
  if (iVar1 == 0) {
    SerialObject::setRightFilamentDetect(*(SerialObject **)(this + 0x14),false);
    uVar2 = *(undefined4 *)(this + 0x14);
  }
  else {
    SerialObject::setRightFilamentDetect(*(SerialObject **)(this + 0x14),true);
    uVar2 = *(undefined4 *)(this + 0x14);
  }
  local_c = (Data *)QString::fromAscii_helper("SET_FAN_SPEED FAN=pcb_fan SPEED=0",-1);
                    /* try { // try from 0053a790 to 0053a797 has its CatchHandler @ 0053a848 */
  SerialObject::sendGcodeCmd(&local_10,uVar2,&local_c,1,0,0,0);
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


// ===== GuiderLevelPrint::doSaveCfg @ 006d9414

/* GuiderLevelPrint::doSaveCfg() */

void __thiscall GuiderLevelPrint::doSaveCfg(GuiderLevelPrint *this)

{
  int iVar1;
  undefined4 uVar2;
  QString aQStack_18 [4];
  undefined4 local_14 [2];
  
  uVar2 = *(undefined4 *)(this + 0x18);
  local_14[0] = QString::fromAscii_helper("M107",-1);
                    /* try { // try from 006d9458 to 006d945f has its CatchHandler @ 006d960c */
  SerialObject::sendGcodeCmd(aQStack_18,uVar2,local_14,1,0,0,0);
  QString::~QString(aQStack_18);
  QString::~QString((QString *)local_14);
  uVar2 = *(undefined4 *)(this + 0x18);
  local_14[0] = QString::fromAscii_helper("M18",-1);
                    /* try { // try from 006d94a0 to 006d94a7 has its CatchHandler @ 006d9638 */
  SerialObject::sendGcodeCmd(aQStack_18,uVar2,local_14,1,0,0,0);
  QString::~QString(aQStack_18);
  QString::~QString((QString *)local_14);
  SerialObject::setRightNozzleTemp(*(SerialObject **)(this + 0x18),0);
  SerialObject::setSaveConfig(*(SerialObject **)(this + 0x18),true);
  sleep(2);
  uVar2 = *(undefined4 *)(this + 0x18);
  local_14[0] = QString::fromAscii_helper("SAVE_CONFIG",-1);
                    /* try { // try from 006d950c to 006d9513 has its CatchHandler @ 006d9630 */
  SerialObject::sendGcodeCmd(aQStack_18,uVar2,local_14,1,5,0,0);
  QString::~QString(aQStack_18);
  QString::~QString((QString *)local_14);
  sleep(0xd);
  while (iVar1 = SerialObject::apiClientOpen(*(SerialObject **)(this + 0x18)), iVar1 < 0) {
    sleep(1);
  }
  uVar2 = *(undefined4 *)(this + 0x18);
  local_14[0] = QString::fromAscii_helper("",-1);
                    /* try { // try from 006d957c to 006d9583 has its CatchHandler @ 006d9628 */
  SerialObject::sendGcodeCmd(aQStack_18,uVar2,local_14,1,1,0,0);
  QString::~QString(aQStack_18);
  QString::~QString((QString *)local_14);
  SerialObject::setSaveConfig(*(SerialObject **)(this + 0x18),false);
  uVar2 = *(undefined4 *)(this + 0x18);
  local_14[0] = QString::fromAscii_helper("SET_FAN_SPEED FAN=pcb_fan SPEED=0",-1);
                    /* try { // try from 006d95d0 to 006d95d7 has its CatchHandler @ 006d9620 */
  SerialObject::sendGcodeCmd(aQStack_18,uVar2,local_14,1,0,0,0);
  QString::~QString(aQStack_18);
  QString::~QString((QString *)local_14);
  sync();
  sigComplete(this);
  return;
}


// ===== Filament::dryingStart @ 0058d428

/* Filament::dryingStart() */

void __thiscall Filament::dryingStart(Filament *this)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  Filament FVar4;
  float fVar5;
  float fVar6;
  QString aQStack_30 [4];
  undefined4 local_2c [2];
  undefined4 local_24;
  
  local_24 = 0;
  uVar2 = *(undefined4 *)(this + 0x14);
  this[0x21] = (Filament)0x0;
  local_2c[0] = QString::fromAscii_helper("SET_FAN_SPEED FAN=pcb_fan SPEED=1",-1);
                    /* try { // try from 0058d49c to 0058d4a3 has its CatchHandler @ 0058d718 */
  SerialObject::sendGcodeCmd(aQStack_30,uVar2,local_2c,1,0,0,0);
  QString::~QString(aQStack_30);
  QString::~QString((QString *)local_2c);
  uVar2 = *(undefined4 *)(this + 0x14);
  local_2c[0] = QString::fromAscii_helper("SET_IDLE_TIMEOUT TIMEOUT=8640000",-1);
                    /* try { // try from 0058d4e4 to 0058d4eb has its CatchHandler @ 0058d704 */
  SerialObject::sendGcodeCmd(aQStack_30,uVar2,local_2c,1,0,0,0);
  QString::~QString(aQStack_30);
  QString::~QString((QString *)local_2c);
  SerialObject::setPlatformHeat(*(SerialObject **)(this + 0x14),*(int *)(this + 0x34));
  SerialObject::setChamberHeat(*(int *)(this + 0x14));
  local_24 = 0;
  MainWindow::getChamberRealTemp(MainWindow::instMainWindow);
  local_24 = 0;
  MainWindow::getBedRealTemp(MainWindow::instMainWindow);
  FVar4 = this[0x20];
  iVar3 = *(int *)(this + 0x2c);
  if (FVar4 == (Filament)0x0) {
    do {
      local_24 = 0;
      fVar5 = (float)MainWindow::getChamberRealTemp(MainWindow::instMainWindow);
      local_24 = 0;
      fVar6 = (float)MainWindow::getBedRealTemp(MainWindow::instMainWindow);
      local_24 = 0;
      sig_dryShowStatus(this,(int)fVar5,(int)fVar6);
      if (((int)fVar5 < *(int *)(this + 0x30)) || ((int)fVar6 < *(int *)(this + 0x34))) {
        if (FVar4 != (Filament)0x0) {
          if (0 < iVar3) goto LAB_0058d578;
          bVar1 = true;
          goto LAB_0058d63c;
        }
      }
      else {
        bVar1 = true;
        if (iVar3 < 1) goto LAB_0058d63c;
LAB_0058d578:
        FVar4 = (Filament)0x1;
        sig_dryTime(this,iVar3);
        iVar3 = iVar3 + -1;
      }
      if (this[0x21] != (Filament)0x0) {
        iVar3 = *(int *)(this + 0x2c);
        this[0x21] = (Filament)0x0;
      }
      sleep(1);
    } while (this[0x20] == (Filament)0x0);
    bVar1 = false;
  }
  else {
    bVar1 = false;
  }
LAB_0058d63c:
  uVar2 = *(undefined4 *)(this + 0x14);
  local_2c[0] = QString::fromAscii_helper("SET_FAN_SPEED FAN=pcb_fan SPEED=0",-1);
                    /* try { // try from 0058d66c to 0058d673 has its CatchHandler @ 0058d728 */
  SerialObject::sendGcodeCmd(aQStack_30,uVar2,local_2c,0,0,0,0);
  QString::~QString(aQStack_30);
  QString::~QString((QString *)local_2c);
  uVar2 = *(undefined4 *)(this + 0x14);
  local_2c[0] = QString::fromAscii_helper("SET_IDLE_TIMEOUT TIMEOUT=1800",-1);
                    /* try { // try from 0058d6b4 to 0058d6bb has its CatchHandler @ 0058d720 */
  SerialObject::sendGcodeCmd(aQStack_30,uVar2,local_2c,0,0,0,0);
  QString::~QString(aQStack_30);
  QString::~QString((QString *)local_2c);
  sig_dryComplete(this,bVar1);
  return;
}


// ===== MoreInfo::on_pcbFan_clicked @ 005a2b5c

/* MoreInfo::on_pcbFan_clicked() */

void __thiscall MoreInfo::on_pcbFan_clicked(MoreInfo *this)

{
  undefined4 uVar1;
  QString *pQVar2;
  undefined4 local_20;
  QString aQStack_1c [8];
  
  uVar1 = *(undefined4 *)(this + 0x18);
  if (this[0x22] == (MoreInfo)0x0) {
    local_20 = QString::fromAscii_helper("SET_FAN_SPEED FAN=pcb_fan SPEED=1",-1);
                    /* try { // try from 005a2c58 to 005a2c5f has its CatchHandler @ 005a2cd0 */
    SerialObject::sendGcodeCmd(aQStack_1c,uVar1,(QString *)&local_20,1,0,0,0);
    QString::~QString((QString *)&local_20);
                    /* try { // try from 005a2c7c to 005a2c83 has its CatchHandler @ 005a2cc8 */
    pQVar2 = *(QString **)(*(int *)(this + 0x14) + 8);
    ::operator+((char *)&local_20,(QString *)"PCB Fan ->");
                    /* try { // try from 005a2c88 to 005a2c8f has its CatchHandler @ 005a2cac */
    QTextEdit::append(pQVar2);
  }
  else {
    local_20 = QString::fromAscii_helper("SET_FAN_SPEED FAN=pcb_fan SPEED=0",-1);
                    /* try { // try from 005a2bb8 to 005a2bbf has its CatchHandler @ 005a2c98 */
    SerialObject::sendGcodeCmd(aQStack_1c,uVar1,(QString *)&local_20,1,0,0,0);
    QString::~QString((QString *)&local_20);
                    /* try { // try from 005a2bdc to 005a2be3 has its CatchHandler @ 005a2ce0 */
    pQVar2 = *(QString **)(*(int *)(this + 0x14) + 8);
    ::operator+((char *)&local_20,(QString *)"PCB Fan ->");
                    /* try { // try from 005a2be8 to 005a2bef has its CatchHandler @ 005a2cd8 */
    QTextEdit::append(pQVar2);
  }
  QString::~QString((QString *)&local_20);
  QString::~QString(aQStack_1c);
  this[0x22] = (MoreInfo)((byte)this[0x22] ^ 1);
  return;
}


// ===== FourToOne::changeStart @ 007a2138

/* FourToOne::changeStart() */

void FourToOne::changeStart(void)

{
  FourToOne FVar1;
  GetConfigFile *pGVar2;
  Config *pCVar3;
  undefined4 *puVar4;
  int iVar5;
  QTextStream *pQVar6;
  QDebug *pQVar7;
  FourToOne *in_a0;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float in_f12;
  float in_f14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 local_70;
  QTextStream *local_6c;
  QString aQStack_68 [4];
  undefined4 *local_64;
  char *local_60;
  char *local_5c;
  char *local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  undefined4 local_44;
  
  local_44 = 0;
  uVar9 = *(undefined4 *)(in_a0 + 0x18);
  local_6c = (QTextStream *)QString::fromAscii_helper("SET_FAN_SPEED FAN=pcb_fan SPEED=1",-1);
                    /* try { // try from 007a21cc to 007a21d3 has its CatchHandler @ 007a2880 */
  SerialObject::sendGcodeCmd(&local_70,uVar9,&local_6c,1,0,0,0);
  QString::~QString((QString *)&local_70);
  QString::~QString((QString *)&local_6c);
  uVar9 = *(undefined4 *)(in_a0 + 0x18);
  local_6c = (QTextStream *)QString::fromAscii_helper("SET_IDLE_TIMEOUT TIMEOUT=8640000",-1);
                    /* try { // try from 007a2214 to 007a221b has its CatchHandler @ 007a2878 */
  SerialObject::sendGcodeCmd(&local_70,uVar9,&local_6c,1,0,0,0);
  QString::~QString((QString *)&local_70);
  QString::~QString((QString *)&local_6c);
  SerialObject::homeManager(SUB41(*(undefined4 *)(in_a0 + 0x18),0),true,true);
  pGVar2 = (GetConfigFile *)getConfigFile();
  pCVar3 = (Config *)GetConfigFile::configFile(pGVar2);
  local_44 = 0;
  uVar12 = Config::getLeftExtruderXOffset(pCVar3);
  local_44 = 0;
  uVar15 = (ulonglong)uVar12;
  pGVar2 = (GetConfigFile *)getConfigFile();
  pCVar3 = (Config *)GetConfigFile::configFile(pGVar2);
  local_44 = 0;
  uVar12 = Config::getLeftExtruderYOffset(pCVar3);
  local_44 = 0;
  uVar16 = (ulonglong)uVar12;
  SerialObject::printClearGoPos(in_f12,in_f14);
  uVar9 = *(undefined4 *)(in_a0 + 0x18);
  local_60 = 
  "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
  ;
  local_6c = (QTextStream *)QString::fromAscii_helper("G1 Z100 F800",-1);
                    /* try { // try from 007a22f8 to 007a22ff has its CatchHandler @ 007a2870 */
  SerialObject::sendGcodeCmd(&local_70,uVar9,&local_6c,1,0,0,0);
  QString::~QString((QString *)&local_70);
  QString::~QString((QString *)&local_6c);
  local_44 = 0;
  fVar13 = (float)MainWindow::getNozzleRightTargetTemp(MainWindow::instMainWindow);
  local_44 = 0;
  uVar9 = *(undefined4 *)(in_a0 + 0x18);
  local_64 = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
  iVar11 = 0xbe;
  if (0xbd < (int)fVar13) {
    iVar11 = (int)fVar13;
  }
                    /* try { // try from 007a2380 to 007a2387 has its CatchHandler @ 007a2868 */
  QString::number((int)aQStack_68,iVar11);
                    /* try { // try from 007a2394 to 007a239b has its CatchHandler @ 007a2860 */
  ::operator+((char *)&local_6c,(QString *)"M104 S");
                    /* try { // try from 007a23b4 to 007a23bb has its CatchHandler @ 007a283c */
  SerialObject::sendGcodeCmd(&local_70,uVar9,&local_6c,1,0,0,0);
  QString::~QString((QString *)&local_70);
  QString::~QString((QString *)&local_6c);
  QString::~QString(aQStack_68);
  QString::~QString((QString *)&local_64);
  local_44 = 0;
  MainWindow::getNozzleRightRealTemp(MainWindow::instMainWindow);
  FVar1 = in_a0[0x34];
  while( true ) {
    if (FVar1 != (FourToOne)0x0) {
      sigComplete(in_a0);
      return;
    }
    local_44 = 0;
    fVar13 = (float)MainWindow::getNozzleRightRealTemp(MainWindow::instMainWindow);
    local_44 = 0;
    fVar14 = (float)MainWindow::getNozzleRightTargetTemp(MainWindow::instMainWindow);
    local_44 = 0;
    if (((int)fVar14 <= (int)fVar13) && (0 < (int)fVar14)) break;
    sleep(1);
    FVar1 = in_a0[0x34];
  }
  if (in_a0[0x34] == (FourToOne)0x0) {
    local_5c = "../ad5x/dialog/fourToOne.cpp";
    local_58 = "changeStart";
    local_54 = 
    "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
    ;
    local_50 = "chn:";
    iVar11 = 1;
    iVar10 = 1;
    local_4c = 
    "::process_server_socket_core(const std::atomic<int>&, socket_t, size_t, time_t, T) [with T = httplib::detail::process_server_socket(const std::atomic<int>&, socket_t, size_t, time_t, time_t, time_t, time_t, time_t, T) [with T = httplib::Server::process_and_close_socket(socket_t)::<lambda(httplib::Stream&, bool, bool&)>; socket_t = int; size_t = unsigned int; time_t = long int]::<lambda(bool, bool&)>; socket_t = int; size_t = unsigned int; time_t = long int]"
    ;
    do {
      pQVar6 = operator_new(0x18);
                    /* try { // try from 007a266c to 007a2673 has its CatchHandler @ 007a27d4 */
      local_70 = 2;
      QTextStream::QTextStream(pQVar6,pQVar6 + 8,&local_70);
      *(int **)(pQVar6 + 8) = &QString::shared_null;
      QString::shared_null = QString::shared_null + 1;
      *(undefined4 *)(pQVar6 + 0xc) = 1;
      *(undefined4 *)(pQVar6 + 0x10) = 0;
      pQVar6[0x14] = (QTextStream)0x1;
      pQVar6[0x15] = (QTextStream)0x1;
      local_6c = pQVar6;
                    /* try { // try from 007a26ac to 007a26ef has its CatchHandler @ 007a27e8 */
      pQVar7 = (QDebug *)QDebug::operator<<((QDebug *)&local_6c,local_5c);
      pQVar7 = (QDebug *)QDebug::operator<<(pQVar7,local_58);
      pcVar8 = local_54 + 0x1a40;
      pQVar7 = (QDebug *)QDebug::operator<<(pQVar7,pcVar8);
      pQVar6 = *(QTextStream **)pQVar7;
      QString::number(CONCAT44(pcVar8,&local_70),iVar11);
                    /* try { // try from 007a26f4 to 007a26fb has its CatchHandler @ 007a27fc */
      QTextStream::operator<<(pQVar6,(QString *)&local_70);
      QString::~QString((QString *)&local_70);
      if ((*(QTextStream **)pQVar7)[0x14] != (QTextStream)0x0) {
                    /* try { // try from 007a2714 to 007a272b has its CatchHandler @ 007a27e8 */
        QTextStream::operator<<(*(QTextStream **)pQVar7,' ');
      }
                    /* try { // try from 007a2528 to 007a253f has its CatchHandler @ 007a27e8 */
      puVar4 = (undefined4 *)QDebug::operator<<(pQVar7,local_50);
      QTextStream::operator<<((QTextStream *)*puVar4,iVar10);
      if (((QTextStream *)*puVar4)[0x14] != (QTextStream)0x0) {
        QTextStream::operator<<((QTextStream *)*puVar4,' ');
      }
      QDebug::~QDebug((QDebug *)&local_6c);
      sigShowCount(in_a0,iVar11);
      local_44 = 0;
      iVar5 = changeChannel(in_a0,iVar10,(float)uVar15,(float)uVar16);
      iVar11 = iVar11 + 1;
      if (iVar5 == 1) break;
      uVar9 = *(undefined4 *)(in_a0 + 0x18);
      iVar10 = iVar10 + 1;
      if (4 < iVar10) {
        iVar10 = 1;
      }
      local_6c = (QTextStream *)QString::fromAscii_helper(local_4c + -0x70b0,-1);
                    /* try { // try from 007a25dc to 007a25e3 has its CatchHandler @ 007a2810 */
      SerialObject::sendGcodeCmd(&local_70,uVar9,&local_6c,1,0,0,0);
      QString::~QString((QString *)&local_70);
      QString::~QString((QString *)&local_6c);
      uVar9 = *(undefined4 *)(in_a0 + 0x18);
      local_6c = (QTextStream *)QString::fromAscii_helper(local_60 + -0x6584,-1);
                    /* try { // try from 007a2624 to 007a262b has its CatchHandler @ 007a2824 */
      SerialObject::sendGcodeCmd(&local_70,uVar9,&local_6c,1,0,0,0);
      QString::~QString((QString *)&local_70);
      QString::~QString((QString *)&local_6c);
      sleep(2);
    } while (in_a0[0x34] == (FourToOne)0x0);
  }
  uVar9 = *(undefined4 *)(in_a0 + 0x18);
  local_6c = (QTextStream *)QString::fromAscii_helper("SET_FAN_SPEED FAN=pcb_fan SPEED=0",-1);
                    /* try { // try from 007a2764 to 007a276b has its CatchHandler @ 007a282c */
  SerialObject::sendGcodeCmd(&local_70,uVar9,&local_6c,0,0,0,0);
  QString::~QString((QString *)&local_70);
  QString::~QString((QString *)&local_6c);
  uVar9 = *(undefined4 *)(in_a0 + 0x18);
  local_6c = (QTextStream *)QString::fromAscii_helper("SET_IDLE_TIMEOUT TIMEOUT=600",-1);
                    /* try { // try from 007a27ac to 007a27b3 has its CatchHandler @ 007a2834 */
  SerialObject::sendGcodeCmd(&local_70,uVar9,&local_6c,0,0,0,0);
  QString::~QString((QString *)&local_70);
  QString::~QString((QString *)&local_6c);
  sigComplete(in_a0);
  return;
}


// ===== Settings::doSaveCfg @ 0057147c

/* Settings::doSaveCfg() */

void __thiscall Settings::doSaveCfg(Settings *this)

{
  int iVar1;
  SerialObject *this_00;
  undefined4 uVar2;
  Data *local_18;
  Data *local_14 [2];
  
  SerialObject::setSaveConfig(*(SerialObject **)(this + 0x14),true);
  sleep(2);
  uVar2 = *(undefined4 *)(this + 0x14);
  local_14[0] = (Data *)QString::fromAscii_helper("SAVE_CONFIG",-1);
                    /* try { // try from 005714d8 to 005714df has its CatchHandler @ 00571728 */
  SerialObject::sendGcodeCmd(&local_18,uVar2,local_14,1,5,0,0);
  iVar1 = *(int *)local_18;
  *(int *)local_18 = iVar1 + -1;
  if (iVar1 == 1) {
    QString::free(local_18);
    iVar1 = *(int *)local_14[0];
    *(int *)local_14[0] = iVar1 + -1;
  }
  else {
    iVar1 = *(int *)local_14[0];
    *(int *)local_14[0] = iVar1 + -1;
  }
  if (iVar1 == 1) {
    QString::free(local_14[0]);
  }
  sleep(0xd);
  while (iVar1 = SerialObject::apiClientOpen(*(SerialObject **)(this + 0x14)), iVar1 < 0) {
    sleep(1);
  }
  uVar2 = *(undefined4 *)(this + 0x14);
  local_14[0] = (Data *)QString::fromAscii_helper("",-1);
                    /* try { // try from 00571584 to 0057158b has its CatchHandler @ 00571714 */
  SerialObject::sendGcodeCmd(&local_18,uVar2,local_14,1,1,0,0);
  iVar1 = *(int *)local_18;
  *(int *)local_18 = iVar1 + -1;
  if (iVar1 == 1) {
    QString::free(local_18);
  }
  iVar1 = *(int *)local_14[0];
  *(int *)local_14[0] = iVar1 + -1;
  if (iVar1 == 1) {
    QString::free(local_14[0]);
    this_00 = *(SerialObject **)(this + 0x14);
  }
  else {
    this_00 = *(SerialObject **)(this + 0x14);
  }
  SerialObject::setSaveConfig(this_00,false);
  uVar2 = *(undefined4 *)(this + 0x14);
  local_14[0] = (Data *)QString::fromAscii_helper("SET_FAN_SPEED FAN=pcb_fan SPEED=0",-1);
                    /* try { // try from 00571618 to 0057161f has its CatchHandler @ 00571730 */
  SerialObject::sendGcodeCmd(&local_18,uVar2,local_14,1,0,0,0);
  iVar1 = *(int *)local_18;
  *(int *)local_18 = iVar1 + -1;
  if (iVar1 == 1) {
    QString::free(local_18);
  }
  iVar1 = *(int *)local_14[0];
  *(int *)local_14[0] = iVar1 + -1;
  if (iVar1 == 1) {
    QString::free(local_14[0]);
  }
  sync();
  sigComplete(this);
  return;
}


// ===== SerialObject::serialPrint @ 006042e4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SerialObject::serialPrint(QString, bool, bool, bool) */

void SerialObject::serialPrint
               (undefined8 param_1,float param_2,SerialObject *param_3,QString *param_4,int param_5,
               char *param_6)

{
  QList<QString> *pQVar1;
  PrintContinueConfig *pPVar2;
  SerialObject SVar3;
  QDebug *pQVar4;
  undefined4 uVar5;
  int iVar6;
  SerialObject *pSVar7;
  GetConfigFile *pGVar8;
  Config *pCVar9;
  int iVar10;
  FanRunInfo *pFVar11;
  bool bVar12;
  uint uVar13;
  int *piVar14;
  SerialObject *pSVar15;
  undefined **ppuVar16;
  char *pcVar17;
  QString *pQVar18;
  float fVar19;
  double in_f0_1;
  double dVar20;
  double dVar21;
  float fVar22;
  undefined4 uVar23;
  double dVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  double dVar28;
  int local_2e8;
  int *local_2b8 [2];
  int aiStack_2b0 [31];
  undefined4 local_234;
  undefined1 *local_230;
  undefined4 local_22c;
  undefined1 local_228 [28];
  int *local_20c;
  int *local_208;
  int *local_204;
  int *local_200;
  int *local_1fc;
  int *local_1f8;
  int *local_1f4;
  QString aQStack_1f0 [4];
  QString aQStack_1ec [4];
  QString aQStack_1e8 [4];
  QString aQStack_1e4 [4];
  QString aQStack_1e0 [4];
  QString aQStack_1dc [4];
  QString aQStack_1d8 [4];
  QString aQStack_1d4 [4];
  QString aQStack_1d0 [4];
  QString aQStack_1cc [4];
  QString aQStack_1c8 [4];
  int *local_1c4;
  QString aQStack_1c0 [4];
  QString aQStack_1bc [4];
  QString aQStack_1b8 [4];
  QString aQStack_1b4 [4];
  QString aQStack_1b0 [4];
  int *local_1ac;
  QString aQStack_1a8 [4];
  QString aQStack_1a4 [4];
  QString aQStack_1a0 [4];
  QString aQStack_19c [4];
  QString aQStack_198 [4];
  QString aQStack_194 [4];
  QString aQStack_190 [4];
  QString aQStack_18c [4];
  QString aQStack_188 [4];
  QString aQStack_184 [4];
  QString aQStack_180 [4];
  QString aQStack_17c [4];
  QString aQStack_178 [4];
  QString aQStack_174 [4];
  QString aQStack_170 [4];
  QString aQStack_16c [4];
  QString aQStack_168 [4];
  QString aQStack_164 [4];
  QString aQStack_160 [4];
  int *local_15c;
  QString aQStack_158 [4];
  QString aQStack_154 [4];
  QString aQStack_150 [4];
  QString aQStack_14c [4];
  undefined4 local_148;
  QString aQStack_144 [4];
  QString aQStack_140 [4];
  QString aQStack_13c [4];
  QString aQStack_138 [4];
  QString aQStack_134 [4];
  QString aQStack_130 [4];
  QString aQStack_12c [4];
  QString aQStack_128 [4];
  QString aQStack_124 [4];
  QString aQStack_120 [4];
  QString aQStack_11c [4];
  QString aQStack_118 [4];
  QString aQStack_114 [4];
  QString aQStack_110 [4];
  QString aQStack_10c [4];
  QString aQStack_108 [4];
  QString aQStack_104 [4];
  QString aQStack_100 [4];
  QString aQStack_fc [4];
  QString aQStack_f8 [4];
  QString aQStack_f4 [4];
  QString aQStack_f0 [4];
  QString aQStack_ec [4];
  QString aQStack_e8 [4];
  QString aQStack_e4 [4];
  QString aQStack_e0 [4];
  QString aQStack_dc [4];
  QString aQStack_d8 [4];
  QString aQStack_d4 [4];
  QString aQStack_d0 [4];
  QString aQStack_cc [4];
  QString aQStack_c8 [4];
  QString aQStack_c4 [4];
  QFileInfo aQStack_c0 [4];
  QString aQStack_bc [4];
  undefined **local_b8;
  int *local_b4;
  double local_b0;
  int local_a8;
  QList<QString> *local_a4;
  int local_a0;
  char *local_9c;
  char *local_98;
  char *local_94;
  undefined **local_90;
  SerialObject *local_8c;
  SerialObject *local_88;
  char *local_84;
  PrintContinueConfig *local_80;
  SerialObject *local_7c;
  undefined **local_78;
  undefined **local_74;
  char *local_70;
  char *local_6c;
  double local_68;
  undefined4 local_5c;
  
  uVar23 = (undefined4)((ulonglong)param_1 >> 0x20);
  fVar22 = (float)param_1;
  local_5c = 0;
  QDebug::QDebug((QDebug *)local_2b8,0);
  local_b0 = (double)CONCAT44(local_b0._4_4_,&PTR_s_Internal_Server_Error_00af0000);
                    /* try { // try from 00604378 to 00604393 has its CatchHandler @ 00608930 */
  pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)local_2b8,"../ad5x/serial/SerialObject.cpp");
  local_b8 = &PTR_s_Internal_Server_Error_00af0000;
  QDebug::operator<<(pQVar4,"serialPrint");
  QDebug::~QDebug((QDebug *)local_2b8);
  local_a8 = 0xe20000;
  local_b4 = &QString::shared_null;
  local_20c = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
  local_9c = AlibabaCloud::OSS::crc64_table + 0xb70;
                    /* try { // try from 006043dc to 006043e3 has its CatchHandler @ 006089c4 */
  AppClient::getJobId_abi_cxx11_();
                    /* try { // try from 006043ec to 006043f3 has its CatchHandler @ 006089e0 */
  QString::fromAscii((char *)&local_234,(int)local_2b8[0]);
  uVar5 = *(undefined4 *)(param_3 + 0x120);
  *(undefined4 *)(param_3 + 0x120) = local_234;
  local_234 = uVar5;
  QString::~QString((QString *)&local_234);
  if (local_2b8[0] != aiStack_2b0) {
    operator_delete(local_2b8[0]);
  }
  QString::~QString((QString *)&local_20c);
  local_20c = local_b4;
  *(int *)(local_a8 + -0x3c94) = *(int *)(local_a8 + -0x3c94) + 1;
                    /* try { // try from 0060445c to 00604463 has its CatchHandler @ 00608928 */
  AppClient::getPrintThumUrl_abi_cxx11_();
                    /* try { // try from 0060446c to 00604473 has its CatchHandler @ 00608904 */
  QString::fromAscii((char *)&local_234,(int)local_2b8[0]);
  uVar5 = *(undefined4 *)(param_3 + 0x124);
  *(undefined4 *)(param_3 + 0x124) = local_234;
  local_234 = uVar5;
  QString::~QString((QString *)&local_234);
  if (local_2b8[0] != aiStack_2b0) {
    operator_delete(local_2b8[0]);
  }
  QString::~QString((QString *)&local_20c);
  iVar6 = *(int *)(param_3 + 0x294);
  *(undefined4 *)(param_3 + 0x130) = *(undefined4 *)(param_3 + 0x60);
  *(int *)(param_3 + 0x148) = iVar6;
  if (*(int **)(param_3 + 0x150) != local_b4) {
    QString::clear((QString *)(param_3 + 0x150));
    iVar6 = *(int *)(param_3 + 0x294);
  }
  uVar13 = 0;
  while( true ) {
    if ((iVar6 >> (uVar13 & 0x1f) & 1U) != 0) {
      local_20c = (int *)QString::fromAscii_helper("%1",-1);
                    /* try { // try from 00604530 to 00604537 has its CatchHandler @ 006088f0 */
      QString::number((int)&local_234,*(int *)(param_3 + uVar13 * 4 + 0x250) + -1);
                    /* try { // try from 00604540 to 00604547 has its CatchHandler @ 006089cc */
      ::operator+((QString *)local_2b8,(char *)&local_234);
                    /* try { // try from 0060454c to 00604553 has its CatchHandler @ 00608a00 */
      QString::append((QString *)(param_3 + 0x150));
      QString::~QString((QString *)local_2b8);
      QString::~QString((QString *)&local_234);
      QString::~QString((QString *)&local_20c);
    }
    if (uVar13 == 0xf) break;
    uVar13 = uVar13 + 1;
    iVar6 = *(int *)(param_3 + 0x294);
  }
  *(char **)(param_3 + 0x13c) = param_6;
  uVar5 = PowerSavingModeFile();
  local_80 = (PrintContinueConfig *)(param_3 + 0xd4);
  PrintContinueConfig::PrintContinueConfig((PrintContinueConfig *)local_2b8,local_80);
                    /* try { // try from 0060459c to 006045a3 has its CatchHandler @ 00608764 */
  CPowerSavingModeFile::setPowerSavingMode(uVar5,local_2b8);
  PrintContinueConfig::~PrintContinueConfig((PrintContinueConfig *)local_2b8);
  QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 006045c0 to 00604653 has its CatchHandler @ 00608750 */
  pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)local_2b8,(char *)(local_b8 + -0x14d4));
  pQVar4 = (QDebug *)QDebug::operator<<(pQVar4," path: ");
  pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,param_4);
  pQVar4 = (QDebug *)QDebug::operator<<(pQVar4," isRecovery: ");
  pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,SUB41(param_5,0));
  pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"usrMs:");
  pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,SUB41(param_6,0));
  pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"m_channel:");
  pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,*(int *)(param_3 + 0x248));
  pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"m_fourInOneOk:");
  QDebug::operator<<(pQVar4,(bool)param_3[0x2e2]);
  QDebug::~QDebug((QDebug *)local_2b8);
  local_94 = "g()";
  param_3[0x18] = (SerialObject)0x0;
  local_230 = local_228;
  param_3[0x2f3] = (SerialObject)0x0;
  local_22c = 0;
                    /* try { // try from 00604680 to 00604687 has its CatchHandler @ 006089bc */
  local_228[0] = 0;
  local_2b8[0] = (int *)QString::fromAscii_helper("G92 E0",-1);
                    /* try { // try from 006046a4 to 006046ab has its CatchHandler @ 006089a8 */
  sendGcodeCmd(aQStack_bc,param_3,local_2b8,1,0,0,0);
  local_8c = param_3 + 0x4c;
  QString::~QString(aQStack_bc);
  QString::~QString((QString *)local_2b8);
                    /* try { // try from 006046c8 to 006047b7 has its CatchHandler @ 006089bc */
  QMutex::lock();
  param_3[0x8f] = (SerialObject)0x1;
  QMutex::unlock();
  local_88 = param_3 + 0x7c;
  param_3[0x2f1] = (SerialObject)0x0;
  *(undefined4 *)(param_3 + 0x1c) = 1;
  QMutex::lock();
  *(undefined4 *)(param_3 + 0x78) = 1;
  QMutex::unlock();
  sleep(2);
  *(undefined4 *)(param_3 + 0x240) = 0;
  pSVar7 = param_3 + 0x2a0;
  do {
    *(undefined4 *)pSVar7 = 0;
    pSVar7 = pSVar7 + 4;
  } while (param_3 + 0x2e0 != pSVar7);
  pGVar8 = (GetConfigFile *)getConfigFile();
  pCVar9 = (Config *)GetConfigFile::configFile(pGVar8);
  local_5c = 0;
  Config::getLeftExtruderXOffset(pCVar9);
  local_5c = 0;
  uVar26 = (ulonglong)in_f0_1 & 0xffffffff;
  pGVar8 = (GetConfigFile *)getConfigFile();
  pCVar9 = (Config *)GetConfigFile::configFile(pGVar8);
  local_5c = 0;
  Config::getLeftExtruderYOffset(pCVar9);
  local_5c = 0;
  pQVar18 = (QString *)(param_3 + 0x58);
  uVar25 = (ulonglong)in_f0_1 & 0xffffffff;
  QFileInfo::QFileInfo(aQStack_c0,pQVar18);
                    /* try { // try from 006047c4 to 006047cb has its CatchHandler @ 006089a0 */
  local_90 = &PTR_s_Internal_Server_Error_00af0000;
  local_2b8[0] = (int *)QString::fromAscii_helper("CLEAR_PAUSE",-1);
                    /* try { // try from 006047e8 to 006047ef has its CatchHandler @ 00608998 */
  sendGcodeCmd(aQStack_c4,param_3,local_2b8,1,0,0,0);
  QString::~QString(aQStack_c4);
  QString::~QString((QString *)local_2b8);
                    /* try { // try from 00604808 to 0060480f has its CatchHandler @ 006089a0 */
  local_2b8[0] = (int *)QString::fromAscii_helper("SET_FAN_SPEED FAN=pcb_fan SPEED=1",-1);
                    /* try { // try from 0060482c to 00604833 has its CatchHandler @ 00608990 */
  sendGcodeCmd(aQStack_c8,param_3,local_2b8,1,0,0,0);
  QString::~QString(aQStack_c8);
  QString::~QString((QString *)local_2b8);
  bVar12 = SUB41(param_3,0);
  if (param_5 == 0) {
    local_84 = *(char **)(param_3 + 0x248);
    pcVar17 = (char *)0x0;
    if ((param_3[0x2e2] == (SerialObject)0x0) || (param_6 == (char *)0x0)) {
                    /* try { // try from 00604870 to 00604877 has its CatchHandler @ 006089a0 */
      local_2b8[0] = (int *)QString::fromAscii_helper("G1 Z10 F500",-1);
                    /* try { // try from 00604894 to 0060489b has its CatchHandler @ 00608988 */
      sendGcodeCmd(aQStack_cc,param_3,local_2b8,1,0,0,0);
      QString::~QString(aQStack_cc);
      QString::~QString((QString *)local_2b8);
                    /* try { // try from 006048b4 to 006048bb has its CatchHandler @ 006089a0 */
      local_2b8[0] = (int *)QString::fromAscii_helper(local_94 + 0x1de8,-1);
                    /* try { // try from 006048d8 to 006048df has its CatchHandler @ 00608980 */
      sendGcodeCmd(aQStack_d0,param_3,local_2b8,1,0,0,0);
      QString::~QString(aQStack_d0);
      QString::~QString((QString *)local_2b8);
                    /* try { // try from 006048fc to 00604937 has its CatchHandler @ 006089a0 */
      flushFilamentSecond((int)param_3,*(int *)(param_3 + 0x24c) + -1);
      local_5c = 0;
      flushFilamentBrush(bVar12,1.4013e-45,(float)uVar26);
      local_2b8[0] = (int *)QString::fromAscii_helper("M106 S0",-1);
                    /* try { // try from 00604954 to 0060495b has its CatchHandler @ 00608978 */
      sendGcodeCmd(aQStack_d4,param_3,local_2b8,1,0,0,0);
      QString::~QString(aQStack_d4);
      QString::~QString((QString *)local_2b8);
    }
    else {
      QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 00607cb0 to 00607cfb has its CatchHandler @ 00608600 */
      pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)local_2b8,(char *)(local_b8 + -0x14d4));
      pQVar4 = (QDebug *)QDebug::operator<<(pQVar4," m_printChn[m_channel]: ");
      pQVar4 = (QDebug *)
               QDebug::operator<<(pQVar4,*(int *)(param_3 + (*(int *)(param_3 + 0x248) + 0x94) * 4))
      ;
      pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"m_channel:");
      QDebug::operator<<(pQVar4,*(int *)(param_3 + 0x248));
      QDebug::~QDebug((QDebug *)local_2b8);
                    /* try { // try from 00607d08 to 00607de3 has its CatchHandler @ 006089a0 */
      QMutex::lock();
      iVar6 = *(int *)(param_3 + 0x298);
      QMutex::unlock();
      local_5c = 0;
      param_3[0x2f2] = (SerialObject)0x0;
      checkPurgeOldFilament((int)param_3,(float)(*(int *)(param_3 + 0x24c) + -1),(float)uVar26);
      local_5c = 0;
      iVar6 = checkPrintUnLoad(param_3,iVar6,*(int *)(param_3 + 0x24c),(float)uVar26,(float)uVar25);
      fVar19 = *(float *)(param_3 + (*(int *)(param_3 + 0x248) + 0x94) * 4);
      if (iVar6 == 0) {
        pcVar17 = param_6;
      }
      else {
        local_5c = 0;
        changeChannel(bVar12,1,fVar19,(float)uVar26,SUB81(uVar25,0));
        fVar19 = *(float *)(param_3 + (*(int *)(param_3 + 0x248) + 0x94) * 4);
      }
      *(undefined4 *)(param_3 + 0x24c) = 0;
      operationFilament(param_3,(int)fVar19,4,0,(int)fVar19);
    }
                    /* try { // try from 00604974 to 0060497b has its CatchHandler @ 006089a0 */
    local_200 = (int *)QString::fromAscii_helper("/",-1);
    local_a4 = (QList<QString> *)&local_204;
                    /* try { // try from 006049a0 to 006049a7 has its CatchHandler @ 00608970 */
    QString::split((QList<QString> *)&local_204,pQVar18,(QString *)&local_200,0,1);
                    /* try { // try from 006049b0 to 006049e7 has its CatchHandler @ 00608968 */
    QList<QString>::end();
    piVar14 = local_208 + -1;
    QChar::QChar((QChar *)&local_208,'.');
    QString::split(local_2b8,piVar14,(QChar *)&local_208,0,1);
                    /* try { // try from 006049ec to 00604a07 has its CatchHandler @ 0060894c */
    QList<QString>::end();
    QString::trimmed();
    QList<QString>::~QList((QList<QString> *)local_2b8);
    QList<QString>::~QList((QList<QString> *)&local_204);
    QString::~QString((QString *)&local_200);
                    /* try { // try from 00604a28 to 00604a2f has its CatchHandler @ 00608938 */
    iVar6 = qStringComparisonHelper((QString *)&local_1fc,"gx");
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
                    /* try { // try from 00604a3c to 00604a43 has its CatchHandler @ 00608a14 */
      QFile::QFile((QFile *)local_2b8,pQVar18);
                    /* try { // try from 00604a50 to 00604a87 has its CatchHandler @ 00608a20 */
      local_20c = (int *)0x1;
      QFile::open(local_2b8,&local_20c);
      iVar10 = QIODevice::read((char *)local_2b8,0x3c);
      iVar6 = 0;
      if (0x3b < iVar10) {
        iVar6 = local_2e8;
      }
      QFile::close();
      QFile::~QFile((QFile *)local_2b8);
    }
    QString::~QString((QString *)&local_1fc);
    local_a0 = 0;
    SVar3 = param_3[0x89];
  }
  else {
    local_84 = *(char **)(param_3 + 0x140);
    *(char **)(param_3 + 0x248) = local_84;
                    /* try { // try from 006067c0 to 006067c7 has its CatchHandler @ 006089a0 */
    QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 006067d0 to 0060680f has its CatchHandler @ 00608a4c */
    pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)local_2b8,(char *)(local_b8 + -0x14d4));
    pQVar4 = (QDebug *)QDebug::operator<<(pQVar4," m_powerCfg.refuelling: ");
    pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,*(int *)(param_3 + 0x134));
    pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"m_powerCfg.clear:");
    QDebug::operator<<(pQVar4,*(int *)(param_3 + 0x144));
    QDebug::~QDebug((QDebug *)local_2b8);
    local_a0 = 0;
    if (*(int *)(param_3 + 0x144) == 1) {
      local_5c = 0;
      local_a0 = clearAllFilament(fVar22,param_2);
    }
    if (((*(int *)(param_3 + 0x134) == 0) || (param_3[0x2e2] == (SerialObject)0x0)) ||
       (param_6 == (char *)0x0)) {
      iVar6 = *(int *)(param_3 + 0xe0);
    }
    else {
      local_5c = 0;
                    /* try { // try from 00607c14 to 00607ca7 has its CatchHandler @ 006089a0 */
      printClearGoPos(fVar22,param_2);
      if (*(int *)(param_3 + 0x144) == 1) {
        local_5c = 0;
        local_a0 = clearAllFilament(fVar22,param_2);
      }
      powerOffUnLoad(param_3,*(int *)(param_3 + 0x24c));
      local_5c = 0;
      changeChannel(bVar12,1,*(float *)(param_3 + 0x138),(float)uVar26,SUB81(uVar25,0));
      *(undefined4 *)(param_3 + 0x24c) = 0;
      operationFilament(param_3,*(int *)(param_3 + 0x138),4,0,
                        *(int *)(param_3 + (*(int *)(param_3 + 0x248) + 0x94) * 4));
      iVar6 = *(int *)(param_3 + 0xe0);
    }
    local_2b8[0] = *(int **)(param_3 + 0x58);
    *(undefined4 *)(param_3 + 0x24c) = 0;
    if (iVar6 < 1) {
      *local_2b8[0] = *local_2b8[0] + 1;
                    /* try { // try from 00607f70 to 00607f77 has its CatchHandler @ 006082f8 */
      iVar6 = getRecoveryPrintSeek(param_3,local_2b8,*(undefined4 *)(param_3 + 0xe0));
    }
    else {
      *local_2b8[0] = *local_2b8[0] + 1;
                    /* try { // try from 00606868 to 0060686f has its CatchHandler @ 00608728 */
      iVar6 = seekNumOfRowsOfFile(param_3,local_2b8,*(undefined4 *)(param_3 + 0xe0));
    }
    QString::~QString((QString *)local_2b8);
                    /* try { // try from 00606880 to 00606887 has its CatchHandler @ 006089a0 */
    QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 00606890 to 006068df has its CatchHandler @ 00608418 */
    pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)local_2b8,(char *)(local_b0._0_4_ + -0x7690));
    pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,(char *)(local_b8 + -0x14d4));
    pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"recovery seekNumber:");
    pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,iVar6);
    pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"m_powerCfg.lineNumber:");
    QDebug::operator<<(pQVar4,*(int *)(param_3 + 0xe0));
    QDebug::~QDebug((QDebug *)local_2b8);
    fVar19 = (float)uVar25;
    local_98 = (char *)0x0;
    if (iVar6 < 0) goto LAB_00604abc;
                    /* try { // try from 006068f8 to 006068ff has its CatchHandler @ 006089a0 */
    local_2b8[0] = (int *)QString::fromAscii_helper("SET_IDLE_TIMEOUT TIMEOUT=864000",-1);
    fVar19 = SUB84(in_f0_1,0);
                    /* try { // try from 0060691c to 00606923 has its CatchHandler @ 0060847c */
    sendGcodeCmd(aQStack_d8,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_d8);
    QString::~QString((QString *)local_2b8);
                    /* try { // try from 00606934 to 00606953 has its CatchHandler @ 006089a0 */
    printStartSendGcode(param_3);
    setPlatformHeat(param_3,*(int *)(param_3 + 0xf8));
    setRightNozzleTemp(param_3,*(int *)(param_3 + 0xf4));
    local_5c = 0;
    local_204 = local_b4;
    *(int *)(local_a8 + -0x3c94) = *(int *)(local_a8 + -0x3c94) + 1;
    pSVar7 = param_3 + 0x10c;
                    /* try { // try from 00606990 to 006069df has its CatchHandler @ 00608474 */
    QString::toFloat((bool *)pSVar7);
    local_5c = 0;
    local_98 = 
    "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
    ;
    dVar21 = (double)(fVar19 * DAT_00ae6c38);
    QString::number((double)CONCAT44(uVar23,fVar22),SUB81(dVar21,0),(int)((ulonglong)dVar21 >> 0x20)
                   );
    fVar19 = SUB84(dVar21,0);
                    /* try { // try from 006069f0 to 006069f7 has its CatchHandler @ 00608458 */
    local_7c = (SerialObject *)&PTR_s_Internal_Server_Error_00af0000;
    ::operator+((char *)&local_20c,(QString *)"M106 S");
                    /* try { // try from 00606a08 to 00606a0f has its CatchHandler @ 00608510 */
    local_78 = (undefined **)0xae0000;
    ::operator+((QString *)local_2b8,(char *)&local_20c);
                    /* try { // try from 00606a28 to 00606a2f has its CatchHandler @ 006084f4 */
    sendGcodeCmd(aQStack_dc,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_dc);
    QString::~QString((QString *)local_2b8);
    local_a4 = (QList<QString> *)&local_204;
    QString::~QString((QString *)&local_20c);
    QString::~QString((QString *)&local_208);
    QString::~QString((QString *)&local_204);
    local_5c = 0;
                    /* try { // try from 00606a78 to 00606b43 has its CatchHandler @ 006089a0 */
    QString::toFloat((bool *)pSVar7);
    local_5c = 0;
    coolFanValue(param_3,fVar19);
    local_5c = 0;
    QString::toFloat((bool *)pSVar7);
    local_5c = 0;
    dVar21 = (double)(ulonglong)(uint)fVar19;
    if (0.0 < fVar19) {
      pFVar11 = (FanRunInfo *)ffsdk::Singleton<FanRunInfo>::instance();
      iVar10 = FanRunInfo::getFanInfo(pFVar11);
      *(undefined1 *)(iVar10 + 1) = 1;
    }
    else {
                    /* try { // try from 0060815c to 00608183 has its CatchHandler @ 006089a0 */
      pFVar11 = (FanRunInfo *)ffsdk::Singleton<FanRunInfo>::instance();
      iVar10 = FanRunInfo::getFanInfo(pFVar11);
      *(undefined1 *)(iVar10 + 1) = 0;
    }
    do {
      sleep(1);
      iVar10 = waitArriveTemperature(param_3,false,true,true);
    } while (iVar10 == 0);
    local_5c = 0;
    printClearGoPos(fVar22,param_2);
    local_204 = (int *)QString::fromAscii_helper("%1",-1);
    local_5c = 0;
                    /* try { // try from 00606b60 to 00606ba3 has its CatchHandler @ 006084ec */
    QString::toDouble((bool *)(param_3 + 0x194));
    local_5c = 0;
    dVar21 = dVar21 + DAT_00aeae98;
    QString::number((double)CONCAT44(uVar23,fVar22),SUB81(dVar21,0),(int)((ulonglong)dVar21 >> 0x20)
                   );
                    /* try { // try from 00606bb4 to 00606bbb has its CatchHandler @ 006084e4 */
    local_6c = 
    "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
    ;
    ::operator+((char *)&local_20c,(QString *)&DAT_00ad8d98);
                    /* try { // try from 00606bc8 to 00606bcf has its CatchHandler @ 006084dc */
    ::operator+((QString *)local_2b8,(char *)&local_20c);
                    /* try { // try from 00606be8 to 00606bef has its CatchHandler @ 006084b0 */
    sendGcodeCmd(aQStack_e0,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_e0);
    QString::~QString((QString *)local_2b8);
    QString::~QString((QString *)&local_20c);
    QString::~QString((QString *)&local_208);
    QString::~QString((QString *)local_a4);
                    /* try { // try from 00606c20 to 00606c27 has its CatchHandler @ 006089a0 */
    local_2b8[0] = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 00606c48 to 00606c4f has its CatchHandler @ 006084a8 */
    sendGcodeCmd(aQStack_e4,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_e4);
    QString::~QString((QString *)local_2b8);
                    /* try { // try from 00606c70 to 00606caf has its CatchHandler @ 006089a0 */
    flushFilamentSecond((int)param_3,*(int *)(param_3 + 0x138));
    local_5c = 0;
    flushFilamentBrush(bVar12,1.4013e-45,(float)uVar26);
    local_70 = 
    "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
    ;
    local_2b8[0] = (int *)QString::fromAscii_helper("G90",-1);
                    /* try { // try from 00606cd0 to 00606cd7 has its CatchHandler @ 006084a0 */
    sendGcodeCmd(aQStack_e8,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_e8);
    QString::~QString((QString *)local_2b8);
                    /* try { // try from 00606cf8 to 00606cff has its CatchHandler @ 006089a0 */
    local_2b8[0] = (int *)QString::fromAscii_helper("G1 Y220 F12000",-1);
                    /* try { // try from 00606d20 to 00606d27 has its CatchHandler @ 006085ac */
    sendGcodeCmd(aQStack_ec,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_ec);
    QString::~QString((QString *)local_2b8);
                    /* try { // try from 00606d44 to 00606d4b has its CatchHandler @ 006089a0 */
    local_208 = (int *)QString::fromAscii_helper("%1",-1);
    local_5c = 0;
    pSVar15 = param_3 + 0x198;
                    /* try { // try from 00606d68 to 00606da3 has its CatchHandler @ 006085a4 */
    QString::toDouble((bool *)pSVar15);
    local_5c = 0;
    QString::number((double)CONCAT44(uVar23,fVar22),SUB81(dVar21,0),(int)((ulonglong)dVar21 >> 0x20)
                   );
                    /* try { // try from 00606db4 to 00606dbb has its CatchHandler @ 0060859c */
    local_74 = &PTR_s_Internal_Server_Error_00af0000;
    ::operator+((char *)local_2b8,(QString *)&DAT_00ae961c);
                    /* try { // try from 00606dd4 to 00606ddb has its CatchHandler @ 00608594 */
    sendGcodeCmd(aQStack_f0,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_f0);
    QString::~QString((QString *)local_2b8);
    QString::~QString((QString *)&local_20c);
    QString::~QString((QString *)&local_208);
                    /* try { // try from 00606e00 to 00606e07 has its CatchHandler @ 006089a0 */
    local_204 = (int *)QString::fromAscii_helper("%1",-1);
    local_5c = 0;
                    /* try { // try from 00606e20 to 00606e63 has its CatchHandler @ 0060858c */
    QString::toDouble((bool *)pSVar15);
    local_5c = 0;
    dVar21 = dVar21 - _DAT_00ae3800;
    QString::number((double)CONCAT44(uVar23,fVar22),SUB81(dVar21,0),(int)((ulonglong)dVar21 >> 0x20)
                   );
    fVar19 = SUB84(dVar21,0);
                    /* try { // try from 00606e70 to 00606e77 has its CatchHandler @ 00608584 */
    ::operator+((char *)&local_20c,(QString *)&DAT_00ad97cc);
                    /* try { // try from 00606e84 to 00606e8b has its CatchHandler @ 0060857c */
    ::operator+((QString *)local_2b8,(char *)&local_20c);
                    /* try { // try from 00606ea4 to 00606eab has its CatchHandler @ 00608574 */
    sendGcodeCmd(aQStack_f4,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_f4);
    QString::~QString((QString *)local_2b8);
    QString::~QString((QString *)&local_20c);
    QString::~QString((QString *)&local_208);
    QString::~QString((QString *)local_a4);
    local_5c = 0;
    local_208 = local_b4;
    *(int *)(local_a8 + -0x3c94) = *(int *)(local_a8 + -0x3c94) + 1;
                    /* try { // try from 00606f0c to 00606f47 has its CatchHandler @ 0060856c */
    QString::toFloat((bool *)pSVar15);
    local_5c = 0;
    dVar21 = (double)fVar19;
    QString::number((double)CONCAT44(uVar23,fVar22),SUB81(dVar21,0),(int)((ulonglong)dVar21 >> 0x20)
                   );
    fVar19 = SUB84(dVar21,0);
                    /* try { // try from 00606f54 to 00606f5b has its CatchHandler @ 00608564 */
    ::operator+((char *)local_2b8,(QString *)(local_74 + -0x1a79));
                    /* try { // try from 00606f74 to 00606f7b has its CatchHandler @ 0060855c */
    sendGcodeCmd(aQStack_f8,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_f8);
    QString::~QString((QString *)local_2b8);
    QString::~QString((QString *)&local_20c);
    QString::~QString((QString *)&local_208);
                    /* try { // try from 00606fa0 to 00606fa7 has its CatchHandler @ 006089a0 */
    local_2b8[0] = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 00606fc4 to 00606fcb has its CatchHandler @ 00608554 */
    sendGcodeCmd(aQStack_fc,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_fc);
    QString::~QString((QString *)local_2b8);
    local_5c = 0;
                    /* try { // try from 00606ff0 to 00607023 has its CatchHandler @ 006089a0 */
    QString::toFloat((bool *)(param_3 + 0x194));
    local_5c = 0;
    *(float *)(param_3 + 0x2ec) = fVar19;
    *(float *)(param_3 + 0xb8) = fVar19;
    ::operator+((char *)&local_208,(QString *)&DAT_00ad8d90);
                    /* try { // try from 00607030 to 00607037 has its CatchHandler @ 0060854c */
    ::operator+((QString *)&local_20c,(char *)&local_208);
                    /* try { // try from 00607040 to 00607047 has its CatchHandler @ 00608544 */
    ::operator+((QString *)local_2b8,(QString *)&local_20c);
                    /* try { // try from 00607058 to 0060705f has its CatchHandler @ 00608520 */
    ::operator+((QString *)&local_1f4,(char *)local_2b8);
    QString::~QString((QString *)local_2b8);
    QString::~QString((QString *)&local_20c);
    QString::~QString((QString *)&local_208);
                    /* try { // try from 00607084 to 0060708b has its CatchHandler @ 00608518 */
    ::operator+((char *)local_2b8,(QString *)(local_6c + -0x7268));
                    /* try { // try from 0060709c to 006070a3 has its CatchHandler @ 00608404 */
    ::operator+((QString *)&local_1f8,(char *)local_2b8);
    QString::~QString((QString *)local_2b8);
                    /* try { // try from 006070b0 to 006070b7 has its CatchHandler @ 006083fc */
    QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 006070c0 to 006070d3 has its CatchHandler @ 006083f4 */
    pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)local_2b8,"recovery first move x/y: ");
    QDebug::operator<<(pQVar4,(QString *)&local_1f4);
    QDebug::~QDebug((QDebug *)local_2b8);
                    /* try { // try from 006070e0 to 006070e7 has its CatchHandler @ 006083fc */
    QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 006070f0 to 00607103 has its CatchHandler @ 006083e0 */
    pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)local_2b8,"recovery first move z: ");
    QDebug::operator<<(pQVar4,(QString *)&local_1f8);
    QDebug::~QDebug((QDebug *)local_2b8);
    local_2b8[0] = local_1f4;
    *local_1f4 = *local_1f4 + 1;
                    /* try { // try from 00607144 to 0060714b has its CatchHandler @ 006083d8 */
    sendGcodeCmd(aQStack_100,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_100);
    QString::~QString((QString *)local_2b8);
                    /* try { // try from 00607160 to 00607167 has its CatchHandler @ 006083fc */
    local_2b8[0] = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 00607184 to 0060718b has its CatchHandler @ 006083d0 */
    sendGcodeCmd(aQStack_104,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_104);
    QString::~QString((QString *)local_2b8);
    local_2b8[0] = local_1f8;
    *local_1f8 = *local_1f8 + 1;
                    /* try { // try from 006071d4 to 006071db has its CatchHandler @ 006083c8 */
    sendGcodeCmd(aQStack_108,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_108);
    QString::~QString((QString *)local_2b8);
                    /* try { // try from 006071f0 to 006071f7 has its CatchHandler @ 006083fc */
    local_2b8[0] = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 00607214 to 0060721b has its CatchHandler @ 006083b4 */
    sendGcodeCmd(aQStack_10c,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_10c);
    QString::~QString((QString *)local_2b8);
    local_5c = 0;
                    /* try { // try from 00607240 to 00607247 has its CatchHandler @ 006083fc */
    QString::toFloat((bool *)(param_3 + 0x118));
    iVar10 = *(int *)(param_3 + 0xec);
    local_20c = local_b4;
    *(int *)(local_a8 + -0x3c94) = *(int *)(local_a8 + -0x3c94) + 1;
                    /* try { // try from 00607274 to 0060727b has its CatchHandler @ 006083ac */
    QString::number((int)local_2b8,iVar10);
                    /* try { // try from 0060728c to 00607293 has its CatchHandler @ 00608390 */
    ::operator+((char *)&local_1fc,(QString *)&DAT_00ae9dc8);
    QString::~QString((QString *)local_2b8);
    QString::~QString((QString *)&local_20c);
    local_2b8[0] = local_1fc;
    *local_1fc = *local_1fc + 1;
                    /* try { // try from 006072dc to 006072e3 has its CatchHandler @ 0060837c */
    sendGcodeCmd(aQStack_110,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_110);
    QString::~QString((QString *)local_2b8);
                    /* try { // try from 006072f8 to 006072ff has its CatchHandler @ 00608374 */
    QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 00607308 to 0060731b has its CatchHandler @ 00608360 */
    pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)local_2b8,"recovery speedCmd: ");
    QDebug::operator<<(pQVar4,(QString *)&local_1fc);
    QDebug::~QDebug((QDebug *)local_2b8);
    local_2b8[0] = *(int **)(param_3 + 0x128);
    *local_2b8[0] = *local_2b8[0] + 1;
    *local_2b8[0] = *local_2b8[0] + 1;
    local_200 = local_2b8[0];
                    /* try { // try from 0060737c to 00607383 has its CatchHandler @ 0060834c */
    sendGcodeCmd(aQStack_114,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_114);
    QString::~QString((QString *)local_2b8);
    local_5c = 0;
    local_204 = local_b4;
    *(int *)(local_a8 + -0x3c94) = *(int *)(local_a8 + -0x3c94) + 1;
                    /* try { // try from 006073cc to 00607413 has its CatchHandler @ 00608344 */
    QString::toFloat((bool *)pSVar7);
    local_5c = 0;
    in_f0_1 = (double)(fVar19 * *(float *)(local_98 + 0x6c38));
    QString::number((double)CONCAT44(uVar23,fVar22),SUB81(in_f0_1,0),
                    (int)((ulonglong)in_f0_1 >> 0x20));
                    /* try { // try from 00607420 to 00607427 has its CatchHandler @ 00608300 */
    ::operator+((char *)&local_20c,(QString *)(local_7c + -0x6a14));
                    /* try { // try from 00607434 to 0060743b has its CatchHandler @ 00608664 */
    ::operator+((QString *)local_2b8,(char *)&local_20c);
                    /* try { // try from 00607454 to 0060745b has its CatchHandler @ 00608648 */
    sendGcodeCmd(aQStack_118,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_118);
    QString::~QString((QString *)local_2b8);
    QString::~QString((QString *)&local_20c);
    QString::~QString((QString *)&local_208);
    QString::~QString((QString *)local_a4);
                    /* try { // try from 0060748c to 00607493 has its CatchHandler @ 00608640 */
    QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 0060749c to 006074cf has its CatchHandler @ 0060862c */
    pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)local_2b8,(char *)(local_b0._0_4_ + -0x7690));
    pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,(char *)(local_b8 + -0x14d4));
    pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"absolute_extrude: ");
    QDebug::operator<<(pQVar4,(QString *)&local_200);
    QDebug::~QDebug((QDebug *)local_2b8);
    param_3[0xd0] = (SerialObject)0x1;
                    /* try { // try from 006074e8 to 006074ef has its CatchHandler @ 00608640 */
    local_2b8[0] = (int *)QString::fromAscii_helper(local_70 + -0x2bac,-1);
                    /* try { // try from 0060750c to 00607513 has its CatchHandler @ 00608624 */
    sendGcodeCmd(aQStack_11c,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_11c);
    QString::~QString((QString *)local_2b8);
    local_2b8[0] = local_1f4;
    *local_1f4 = *local_1f4 + 1;
                    /* try { // try from 0060755c to 00607563 has its CatchHandler @ 0060861c */
    sendGcodeCmd(aQStack_120,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_120);
    QString::~QString((QString *)local_2b8);
                    /* try { // try from 00607578 to 0060757f has its CatchHandler @ 00608640 */
    local_2b8[0] = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 0060759c to 006075a3 has its CatchHandler @ 00608608 */
    sendGcodeCmd(aQStack_124,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_124);
    QString::~QString((QString *)local_2b8);
    QString::~QString((QString *)&local_200);
    QString::~QString((QString *)&local_1fc);
    QString::~QString((QString *)&local_1f8);
    pcVar17 = (char *)0x0;
    QString::~QString((QString *)&local_1f4);
    SVar3 = param_3[0x89];
  }
  fVar19 = (float)uVar25;
  local_98 = (char *)(uint)(byte)SVar3;
  if (local_98 == (char *)0x0) {
                    /* try { // try from 00604c90 to 00604c97 has its CatchHandler @ 006089a0 */
    QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 00604ca0 to 00604cc3 has its CatchHandler @ 00608a34 */
    pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)local_2b8,(char *)(local_b8 + -0x14d4));
    pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"seekNumber: ");
    QDebug::operator<<(pQVar4,iVar6);
    QDebug::~QDebug((QDebug *)local_2b8);
    local_5c = 0;
    *(undefined4 *)(param_3 + 0xb0) = 0;
                    /* try { // try from 00604ce8 to 00604cef has its CatchHandler @ 006089a0 */
    local_2b8[0] = (int *)QString::fromAscii_helper("M21",-1);
                    /* try { // try from 00604d0c to 00604d13 has its CatchHandler @ 00608aa0 */
    sendGcodeCmd(aQStack_128,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_128);
    QString::~QString((QString *)local_2b8);
                    /* try { // try from 00604d2c to 00604d33 has its CatchHandler @ 006089a0 */
    local_204 = (int *)QString::fromAscii_helper("/usr/data/gcodes",-1);
    pQVar1 = local_a4;
                    /* try { // try from 00604d50 to 00604d57 has its CatchHandler @ 00608aa8 */
    QString::split((QList<QString> *)&local_208,param_4,local_a4,0,1);
                    /* try { // try from 00604d5c to 00604d73 has its CatchHandler @ 00608ab0 */
    QList<QString>::end();
    QString::trimmed();
                    /* try { // try from 00604d80 to 00604d87 has its CatchHandler @ 00608ac4 */
    ::operator+((char *)local_2b8,(QString *)&DAT_00ae9e0c);
                    /* try { // try from 00604da0 to 00604da7 has its CatchHandler @ 00608ad8 */
    sendGcodeCmd(aQStack_12c,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_12c);
    QString::~QString((QString *)local_2b8);
    QString::~QString((QString *)&local_20c);
    QList<QString>::~QList((QList<QString> *)&local_208);
    QString::~QString((QString *)pQVar1);
    local_208 = local_b4;
    *(int *)(local_a8 + -0x3c94) = *(int *)(local_a8 + -0x3c94) + 1;
                    /* try { // try from 00604dfc to 00604e03 has its CatchHandler @ 00608aec */
    QString::number((int)&local_20c,iVar6);
                    /* try { // try from 00604e10 to 00604e17 has its CatchHandler @ 00608af4 */
    ::operator+((char *)local_2b8,(QString *)"M26 S");
                    /* try { // try from 00604e30 to 00604e37 has its CatchHandler @ 00608afc */
    sendGcodeCmd(aQStack_130,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_130);
    QString::~QString((QString *)local_2b8);
    QString::~QString((QString *)&local_20c);
    QString::~QString((QString *)&local_208);
                    /* try { // try from 00604e60 to 00604e67 has its CatchHandler @ 006089a0 */
    local_208 = (int *)QString::fromAscii_helper("%1",-1);
                    /* try { // try from 00604e74 to 00604e7b has its CatchHandler @ 00608b44 */
    QString::number((int)&local_20c,(int)local_84);
                    /* try { // try from 00604e88 to 00604e8f has its CatchHandler @ 00608b4c */
    ::operator+((char *)local_2b8,(QString *)"SDCARD_SET_CHANNEL CHANNEL=");
                    /* try { // try from 00604ea8 to 00604eaf has its CatchHandler @ 00608b54 */
    sendGcodeCmd(aQStack_134,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_134);
    QString::~QString((QString *)local_2b8);
    QString::~QString((QString *)&local_20c);
    QString::~QString((QString *)&local_208);
    if (((param_6 == (char *)0x0) || (param_3[0x2e2] == (SerialObject)0x0)) ||
       (*(int *)(param_3 + 0x290) < 2)) {
                    /* try { // try from 00604f00 to 00604f07 has its CatchHandler @ 006089a0 */
      local_2b8[0] = (int *)QString::fromAscii_helper("SDCARD_ENABLE_FFM ENABLE=0",-1);
                    /* try { // try from 00604f24 to 00604f2b has its CatchHandler @ 006086d0 */
      sendGcodeCmd(aQStack_13c,param_3,local_2b8,1,0,0,0);
      pQVar18 = aQStack_13c;
    }
    else {
      local_2b8[0] = (int *)QString::fromAscii_helper("SDCARD_ENABLE_FFM ENABLE=1",-1);
                    /* try { // try from 006081f4 to 006081fb has its CatchHandler @ 006085bc */
      sendGcodeCmd(aQStack_138,param_3,local_2b8,1,0,0,0);
      pQVar18 = aQStack_138;
    }
    QString::~QString(pQVar18);
    QString::~QString((QString *)local_2b8);
                    /* try { // try from 00604f4c to 00604f53 has its CatchHandler @ 006089a0 */
    local_74 = &PTR_s_Internal_Server_Error_00af0000;
    local_2b8[0] = (int *)QString::fromAscii_helper("M24",-1);
                    /* try { // try from 00604f70 to 00604f77 has its CatchHandler @ 006086d8 */
    sendGcodeCmd(aQStack_140,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_140);
    QString::~QString((QString *)local_2b8);
    if ((*(int *)(*(int *)(param_3 + 0x154) + 8) != 0) && (0 < *(int *)(param_3 + 0x14c))) {
      local_7c = param_3 + 0x154;
      iVar6 = 0;
      local_78 = (undefined **)0xad0000;
      do {
                    /* try { // try from 00604fd4 to 00604fdb has its CatchHandler @ 006089a0 */
        local_204 = (int *)QString::fromAscii_helper((char *)(local_78 + 0x1476),-1);
                    /* try { // try from 00604fec to 00604ff3 has its CatchHandler @ 0060889c */
        QRegExp::QRegExp((QRegExp *)&local_208,local_a4,1,0);
        local_20c = (int *)0x1;
                    /* try { // try from 00605018 to 0060501f has its CatchHandler @ 00608888 */
        QString::section(local_2b8,local_7c,(QList<QString> *)&local_208,iVar6,iVar6,&local_20c);
                    /* try { // try from 00605024 to 0060502b has its CatchHandler @ 006088dc */
        QString::trimmed();
        QString::~QString((QString *)local_2b8);
        QRegExp::~QRegExp((QRegExp *)&local_208);
        QString::~QString((QString *)local_a4);
                    /* try { // try from 0060504c to 00605053 has its CatchHandler @ 006088d4 */
        QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 0060505c to 00605097 has its CatchHandler @ 006088c0 */
        pQVar4 = (QDebug *)
                 QDebug::operator<<((QDebug *)local_2b8,(char *)(local_b0._0_4_ + -0x7690));
        pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,(char *)(local_b8 + -0x14d4));
        pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"dumpName: ");
        pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,(QString *)&local_200);
        QDebug::operator<<(pQVar4,"\r\n");
        QDebug::~QDebug((QDebug *)local_2b8);
                    /* try { // try from 006050a8 to 006050af has its CatchHandler @ 006088d4 */
        ::operator+((char *)&local_20c,(QString *)"EXCLUDE_OBJECT NAME=");
        local_2b8[0] = local_20c;
        *local_20c = *local_20c + 1;
                    /* try { // try from 006050e8 to 006050ef has its CatchHandler @ 006088a4 */
        sendGcodeCmd(aQStack_144,param_3,local_2b8,1,0,0,0);
        QString::~QString(aQStack_144);
        QString::~QString((QString *)local_2b8);
        QString::~QString((QString *)&local_20c);
        QString::~QString((QString *)&local_200);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_3 + 0x14c));
    }
                    /* try { // try from 00605124 to 006051a3 has its CatchHandler @ 006089a0 */
    pGVar8 = (GetConfigFile *)getConfigFile();
    pCVar9 = (Config *)GetConfigFile::configFile(pGVar8);
    iVar6 = Config::getGuideStatus(pCVar9);
    if (iVar6 == 0) {
      QString::operator=((QString *)local_80,"ON");
      MainWindow::getPrintFileName();
      uVar5 = *(undefined4 *)(param_3 + 0xd8);
      *(undefined4 *)(param_3 + 0xd8) = local_148;
      local_148 = uVar5;
      QString::~QString((QString *)&local_148);
      if (param_3[0x71] == (SerialObject)0x0) {
                    /* try { // try from 00608018 to 00608047 has its CatchHandler @ 006089a0 */
        QString::operator=((QString *)(param_3 + 300),"OFF");
      }
      else {
        QString::operator=((QString *)(param_3 + 300),"ON");
      }
      param_3[0xd0] = (SerialObject)0x1;
      *(char **)(param_3 + 0x140) = local_84;
      uVar5 = PowerSavingModeFile();
      PrintContinueConfig::PrintContinueConfig((PrintContinueConfig *)local_2b8,local_80);
                    /* try { // try from 006051b8 to 006051bf has its CatchHandler @ 006085c4 */
      CPowerSavingModeFile::setPowerSavingMode(uVar5,local_2b8);
      PrintContinueConfig::~PrintContinueConfig((PrintContinueConfig *)local_2b8);
      if (pcVar17 != (char *)0x0) {
        local_2b8[0] = (int *)QString::fromAscii_helper("M25",-1);
                    /* try { // try from 006081a0 to 006081a7 has its CatchHandler @ 006085b4 */
        sendGcodeCmd(aQStack_14c,param_3,local_2b8,1,0,0,0);
        QString::~QString(aQStack_14c);
        QString::~QString((QString *)local_2b8);
                    /* try { // try from 006081b8 to 006081d7 has its CatchHandler @ 006089a0 */
        readM25(param_3);
        param_3[0x2f1] = (SerialObject)0x1;
      }
    }
    param_3[0x70] = (SerialObject)0x0;
                    /* try { // try from 006051d4 to 0060526b has its CatchHandler @ 006089a0 */
    printStartSendGcode(param_3);
    sleep(2);
    local_5c = 0;
    local_6c = DAT_00aeae40;
    uVar27 = 0;
    local_78 = &PTR_s_Internal_Server_Error_00af0000;
    local_68 = DAT_00aeae68;
    local_70 = (char *)0x0;
    local_7c = (SerialObject *)0x0;
    local_80 = (PrintContinueConfig *)0x0;
    in_f0_1 = DAT_00aeae68;
    dVar21 = DAT_00aeae60;
    dVar28 = DAT_00aeaea0;
    while (param_3[0x89] == (SerialObject)0x0) {
      while (param_3[0x8a] != (SerialObject)0x0) {
        param_3[0xd0] = (SerialObject)0x0;
        if (local_a0 != 2) {
          printPause(param_3);
          local_2b8[0] = (int *)QString::fromAscii_helper("M25",-1);
                    /* try { // try from 00605288 to 0060528f has its CatchHandler @ 00608720 */
          sendGcodeCmd(aQStack_154,param_3,local_2b8,1,0,0,0);
          QString::~QString(aQStack_154);
          QString::~QString((QString *)local_2b8);
                    /* try { // try from 006052a8 to 006052af has its CatchHandler @ 006089a0 */
          local_2b8[0] = (int *)QString::fromAscii_helper("SAVE_GCODE_STATE NAME=PAUSE_state",-1);
                    /* try { // try from 006052cc to 006052d3 has its CatchHandler @ 00608710 */
          sendGcodeCmd(aQStack_158,param_3,local_2b8,0,0,0,0);
          QString::~QString(aQStack_158);
          QString::~QString((QString *)local_2b8);
        }
        local_5c = 0;
        local_2b8[0] = local_b4;
        *(int *)(local_a8 + -0x3c94) = *(int *)(local_a8 + -0x3c94) + 1;
        dVar20 = (double)*(float *)(param_3 + 0xb8);
                    /* try { // try from 00605338 to 0060533f has its CatchHandler @ 00608718 */
        QString::number((double)CONCAT44(uVar23,fVar22),SUB81(dVar20,0),
                        (int)((ulonglong)dVar20 >> 0x20));
        local_200 = local_15c;
        *local_15c = *local_15c + 1;
        QString::~QString((QString *)&local_15c);
        QString::~QString((QString *)local_2b8);
        local_5c = 0;
                    /* try { // try from 00605384 to 006053b3 has its CatchHandler @ 00608820 */
        QString::toDouble((bool *)&local_200);
        local_5c = 0;
        local_84 = 
        "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
        ;
        dVar24 = dVar20;
        local_2b8[0] = (int *)QString::fromAscii_helper("SET_IDLE_TIMEOUT TIMEOUT=864000",-1);
        fVar19 = SUB84(dVar20,0);
                    /* try { // try from 006053d0 to 006053d7 has its CatchHandler @ 00608828 */
        sendGcodeCmd(aQStack_160,param_3,local_2b8,1,0,0,0);
        QString::~QString(aQStack_160);
        QString::~QString((QString *)local_2b8);
        local_5c = 0;
        *(undefined4 *)(param_3 + 0x158) = 0;
                    /* try { // try from 006053fc to 006054ab has its CatchHandler @ 00608820 */
        getNozzleRightTargetTemp(param_3);
        local_5c = 0;
        fVar19 = (float)(int)fVar19;
        *(float *)(param_3 + 0x15c) = fVar19;
        getBedTargetTemp(param_3);
        local_5c = 0;
        in_f0_1 = (double)CONCAT44(*(undefined4 *)(param_3 + 0x224),(int)fVar19);
        *(int *)(param_3 + 0x160) = (int)fVar19;
        *(undefined4 *)(param_3 + 0x164) = 0;
        *(undefined4 *)(param_3 + 0x228) = *(undefined4 *)(param_3 + 0x224);
        if (local_a0 == 2) {
                    /* try { // try from 00606644 to 0060665b has its CatchHandler @ 00608820 */
          setRightNozzleTemp(param_3,0);
          local_2b8[0] = (int *)QString::fromAscii_helper("M106 S255",-1);
                    /* try { // try from 00606678 to 0060667f has its CatchHandler @ 00608780 */
          sendGcodeCmd(aQStack_170,param_3,local_2b8,1,0,0,0);
          QString::~QString(aQStack_170);
          QString::~QString((QString *)local_2b8);
        }
        else {
          getVSInfoFilament(param_3,(VirtualSdcardInfo *)&local_234);
          iVar6 = 0;
          local_9c = "M25";
          while( true ) {
            getVSInfoFilament(param_3,(VirtualSdcardInfo *)&local_234);
            QDebug::QDebug((QDebug *)&local_20c,0);
                    /* try { // try from 00605508 to 0060553f has its CatchHandler @ 00608830 */
            pQVar4 = (QDebug *)
                     QDebug::operator<<((QDebug *)&local_20c,(char *)(local_b0._0_4_ + -0x7690));
            pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,(char *)(local_b8 + -0x14d4));
            pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"print_state:");
            QString::fromAscii((char *)local_2b8,(int)local_230);
                    /* try { // try from 00605544 to 00605563 has its CatchHandler @ 00608844 */
            pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,(QString *)local_2b8);
            pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"pauseCnt:");
            QDebug::operator<<(pQVar4,iVar6);
            QString::~QString((QString *)local_2b8);
            QDebug::~QDebug((QDebug *)&local_20c);
            iVar10 = std::__cxx11::string::compare((char *)&local_230);
            if ((iVar10 == 0) || (iVar6 == 0x1f)) break;
            iVar6 = iVar6 + 1;
            if (5 < iVar6) {
              local_2b8[0] = (int *)QString::fromAscii_helper(local_9c,-1);
                    /* try { // try from 006054c8 to 006054cf has its CatchHandler @ 00608858 */
              sendGcodeCmd(aQStack_164,param_3,local_2b8,1,0,0,0);
              QString::~QString(aQStack_164);
              QString::~QString((QString *)local_2b8);
            }
                    /* try { // try from 006054e0 to 006054ff has its CatchHandler @ 00608820 */
            sleep(1);
          }
                    /* try { // try from 0060558c to 006055a3 has its CatchHandler @ 00608820 */
          setRightNozzleTemp(param_3,0);
          local_2b8[0] = (int *)QString::fromAscii_helper("M106 S255",-1);
                    /* try { // try from 006055c0 to 006055c7 has its CatchHandler @ 00608860 */
          sendGcodeCmd(aQStack_168,param_3,local_2b8,1,0,0,0);
          QString::~QString(aQStack_168);
          QString::~QString((QString *)local_2b8);
          if (dVar24 <= dVar21) {
            in_f0_1 = *(double *)(local_78 + -0x1466);
            dVar24 = dVar24 + in_f0_1;
          }
          local_5c = 0;
          local_204 = local_b4;
          *(int *)(local_a8 + -0x3c94) = *(int *)(local_a8 + -0x3c94) + 1;
                    /* try { // try from 0060565c to 00605663 has its CatchHandler @ 00608868 */
          QString::number((double)CONCAT44(uVar23,fVar22),SUB81(dVar24,0),
                          (int)((ulonglong)dVar24 >> 0x20));
                    /* try { // try from 00605670 to 00605677 has its CatchHandler @ 00608870 */
          ::operator+((char *)&local_20c,(QString *)&DAT_00ad8d98);
                    /* try { // try from 00605684 to 0060568b has its CatchHandler @ 00608b04 */
          ::operator+((QString *)local_2b8,(char *)&local_20c);
                    /* try { // try from 006056a4 to 006056ab has its CatchHandler @ 00608b0c */
          sendGcodeCmd(aQStack_16c,param_3,local_2b8,1,0,0,0);
          QString::~QString(aQStack_16c);
          QString::~QString((QString *)local_2b8);
          QString::~QString((QString *)&local_20c);
          QString::~QString((QString *)&local_208);
          QString::~QString((QString *)local_a4);
        }
        local_5c = 0;
                    /* try { // try from 006056ec to 00605733 has its CatchHandler @ 00608820 */
        printClearGoPos(fVar22,param_2);
        operationFilament(param_3,*(int *)(param_3 + (*(int *)(param_3 + 0x248) + 0x94) * 4),6,0,
                          *(int *)(param_3 + (*(int *)(param_3 + 0x248) + 0x94) * 4));
        printPauseFinish(param_3);
        local_2b8[0] = (int *)QString::fromAscii_helper
                                        ("SET_STEPPER_ENABLE STEPPER=extruder ENABLE=0",-1);
                    /* try { // try from 00605750 to 00605757 has its CatchHandler @ 00608b14 */
        sendGcodeCmd(aQStack_174,param_3,local_2b8,1,0,0,0);
        QString::~QString(aQStack_174);
        QString::~QString((QString *)local_2b8);
                    /* try { // try from 00605770 to 00605777 has its CatchHandler @ 00608820 */
        local_2b8[0] = (int *)QString::fromAscii_helper("M106 S0",-1);
                    /* try { // try from 00605794 to 0060579b has its CatchHandler @ 00608b1c */
        sendGcodeCmd(aQStack_178,param_3,local_2b8,1,0,0,0);
        QString::~QString(aQStack_178);
        QString::~QString((QString *)local_2b8);
        if ((param_3[0x2e2] == (SerialObject)0x0) || (param_6 == (char *)0x0)) {
          while (SVar3 = param_3[0x89], param_3[0x8a] != (SerialObject)0x0) {
            if (SVar3 != (SerialObject)0x0) goto LAB_006064d0;
                    /* try { // try from 006064b4 to 006064bb has its CatchHandler @ 00608820 */
            usleep(200000);
          }
        }
        else {
                    /* try { // try from 006057c4 to 00605833 has its CatchHandler @ 00608820 */
          ifsPaused(param_3);
          SVar3 = param_3[0x89];
        }
        if (SVar3 != (SerialObject)0x0) {
LAB_006064d0:
          QString::~QString((QString *)&local_200);
          goto LAB_006064d8;
        }
        printResume(param_3);
        resumePrintPreHeating(param_3);
        sleep(3);
        SVar3 = param_3[0x89];
        while ((SVar3 == (SerialObject)0x0 &&
               (iVar6 = waitArriveTemperature(param_3,false,true,true), iVar6 == 0))) {
          sleep(1);
          SVar3 = param_3[0x89];
        }
        local_2b8[0] = (int *)QString::fromAscii_helper
                                        ("SET_STEPPER_ENABLE STEPPER=extruder ENABLE=1",-1);
                    /* try { // try from 00605850 to 00605857 has its CatchHandler @ 00608b24 */
        sendGcodeCmd(aQStack_17c,param_3,local_2b8,1,0,0,0);
        QString::~QString(aQStack_17c);
        QString::~QString((QString *)local_2b8);
                    /* try { // try from 00605870 to 00605877 has its CatchHandler @ 00608820 */
        local_2b8[0] = (int *)QString::fromAscii_helper(local_84 + 0x950,-1);
                    /* try { // try from 00605894 to 0060589b has its CatchHandler @ 00608b2c */
        sendGcodeCmd(aQStack_180,param_3,local_2b8,1,0,0,0);
        QString::~QString(aQStack_180);
        QString::~QString((QString *)local_2b8);
        local_5c = 0;
                    /* try { // try from 006058c4 to 0060590f has its CatchHandler @ 00608820 */
        printClearGoPos(fVar22,param_2);
        flushFilamentSecond((int)param_3,*(int *)(param_3 + (*(int *)(param_3 + 0x248) + 0x94) * 4))
        ;
        local_5c = 0;
        flushFilamentBrush(bVar12,1.4013e-45,(float)uVar26);
        local_5c = 0;
        local_208 = local_b4;
        *(int *)(local_a8 + -0x3c94) = *(int *)(local_a8 + -0x3c94) + 1;
        in_f0_1 = (double)*(float *)(param_3 + 0x228);
                    /* try { // try from 00605964 to 0060596b has its CatchHandler @ 00608b34 */
        QString::number((double)CONCAT44(uVar23,fVar22),SUB81(in_f0_1,0),
                        (int)((ulonglong)in_f0_1 >> 0x20));
                    /* try { // try from 00605978 to 0060597f has its CatchHandler @ 00608b3c */
        ::operator+((char *)local_2b8,(QString *)"SET_FAN_SPEED FAN=fanM106 SPEED=");
                    /* try { // try from 00605998 to 0060599f has its CatchHandler @ 00608a54 */
        sendGcodeCmd(aQStack_184,param_3,local_2b8,1,0,0,0);
        QString::~QString(aQStack_184);
        QString::~QString((QString *)local_2b8);
        QString::~QString((QString *)&local_20c);
        QString::~QString((QString *)&local_208);
                    /* try { // try from 006059c8 to 006059cf has its CatchHandler @ 00608820 */
        local_2b8[0] = (int *)QString::fromAscii_helper("G90",-1);
                    /* try { // try from 006059ec to 006059f3 has its CatchHandler @ 00608a78 */
        sendGcodeCmd(aQStack_188,param_3,local_2b8,1,0,0,0);
        QString::~QString(aQStack_188);
        QString::~QString((QString *)local_2b8);
        local_5c = 0;
                    /* try { // try from 00605a18 to 00605a5f has its CatchHandler @ 00608820 */
        clear_brush(fVar22);
        printResumeFinish(param_3,(bool)param_3[0x90]);
        if (param_3[0x2e0] == (SerialObject)0x0) {
          if ((param_3[0x2f1] != (SerialObject)0x0) && (param_6 != (char *)0x0)) goto LAB_00607b4c;
LAB_00605a48:
          param_3[0x2f1] = (SerialObject)0x0;
          if (local_7c != (SerialObject *)0x6) {
            local_2b8[0] = (int *)QString::fromAscii_helper
                                            ("RESTORE_GCODE_STATE NAME=PAUSE_state MOVE=1 MOVE_SPEED=100"
                                             ,-1);
                    /* try { // try from 00605a7c to 00605a83 has its CatchHandler @ 00608818 */
            sendGcodeCmd(aQStack_18c,param_3,local_2b8,1,0,0,0);
            QString::~QString(aQStack_18c);
            QString::~QString((QString *)local_2b8);
          }
                    /* try { // try from 00605a9c to 00605aa3 has its CatchHandler @ 00608820 */
          local_2b8[0] = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 00605ac0 to 00605ac7 has its CatchHandler @ 00608a80 */
          sendGcodeCmd(aQStack_190,param_3,local_2b8,1,0,0,0);
          QString::~QString(aQStack_190);
          QString::~QString((QString *)local_2b8);
                    /* try { // try from 00605ae0 to 00605ae7 has its CatchHandler @ 00608820 */
          local_2b8[0] = (int *)QString::fromAscii_helper((char *)(local_90 + -0x1a53),-1);
                    /* try { // try from 00605b04 to 00605b0b has its CatchHandler @ 00608a88 */
          sendGcodeCmd(aQStack_194,param_3,local_2b8,1,0,0,0);
          QString::~QString(aQStack_194);
          QString::~QString((QString *)local_2b8);
                    /* try { // try from 00605b24 to 00605b2b has its CatchHandler @ 00608820 */
          local_2b8[0] = (int *)QString::fromAscii_helper((char *)(local_74 + -0x1864),-1);
                    /* try { // try from 00605b48 to 00605b4f has its CatchHandler @ 00608a90 */
          sendGcodeCmd(aQStack_198,param_3,local_2b8,1,0,0,0);
          QString::~QString(aQStack_198);
          QString::~QString((QString *)local_2b8);
          iVar6 = 0;
          SVar3 = param_3[0x89];
          while (SVar3 == (SerialObject)0x0) {
                    /* try { // try from 00605b80 to 00605b93 has its CatchHandler @ 00608820 */
            getVSInfoFilament(param_3,(VirtualSdcardInfo *)&local_234);
            QDebug::QDebug((QDebug *)&local_20c,0);
                    /* try { // try from 00605b9c to 00605bd3 has its CatchHandler @ 00608a98 */
            pQVar4 = (QDebug *)
                     QDebug::operator<<((QDebug *)&local_20c,(char *)(local_b0._0_4_ + -0x7690));
            pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,(char *)(local_b8 + -0x14d4));
            pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"print_state:");
            QString::fromAscii((char *)local_2b8,(int)local_230);
                    /* try { // try from 00605bd8 to 00605bdf has its CatchHandler @ 00608ba4 */
            QDebug::operator<<(pQVar4,(QString *)local_2b8);
            QString::~QString((QString *)local_2b8);
            QDebug::~QDebug((QDebug *)&local_20c);
            iVar10 = std::__cxx11::string::compare((char *)&local_230);
            if ((iVar10 != 0) || (iVar6 == 0x1f)) break;
            iVar6 = iVar6 + 1;
            if (5 < iVar6) {
                    /* try { // try from 00605c20 to 00605c27 has its CatchHandler @ 00608820 */
              local_2b8[0] = (int *)QString::fromAscii_helper((char *)(local_74 + -0x1864),-1);
                    /* try { // try from 00605c44 to 00605c4b has its CatchHandler @ 0060843c */
              sendGcodeCmd(aQStack_19c,param_3,local_2b8,1,0,0,0);
              QString::~QString(aQStack_19c);
              QString::~QString((QString *)local_2b8);
            }
                    /* try { // try from 00605c5c to 00605cab has its CatchHandler @ 00608820 */
            sleep(1);
            SVar3 = param_3[0x89];
          }
          param_3[0xd0] = (SerialObject)0x1;
          operationFilament(param_3,*(int *)(param_3 + (*(int *)(param_3 + 0x248) + 0x94) * 4),4,0,
                            *(int *)(param_3 + (*(int *)(param_3 + 0x248) + 0x94) * 4));
          printResumeFinish(param_3,(bool)param_3[0x90]);
          local_a0 = 0;
          local_80 = (PrintContinueConfig *)0x0;
        }
        else {
          if (param_6 == (char *)0x0) goto LAB_00605a48;
          if (local_a0 == 1) {
            local_5c = 0;
                    /* try { // try from 00607e10 to 00607e2f has its CatchHandler @ 00608820 */
            iVar6 = clearAllFilament(fVar22,param_2);
            if (iVar6 != 1) goto LAB_00607b4c;
          }
          else {
LAB_00607b4c:
            local_5c = 0;
                    /* try { // try from 00607b84 to 00607b8b has its CatchHandler @ 00608820 */
            iVar6 = changeChannel(bVar12,0,*(float *)(param_3 +
                                                     (*(int *)(param_3 + 0x248) + 0x94) * 4),
                                  (float)uVar26,SUB81(uVar25,0));
            if (iVar6 != 6) goto LAB_00605a48;
          }
          param_3[0x8a] = (SerialObject)0x1;
          usleep(50000);
          local_a0 = 2;
        }
        QString::~QString((QString *)&local_200);
        if (param_3[0x89] != (SerialObject)0x0) goto LAB_00605cc8;
      }
                    /* try { // try from 0060669c to 006066cf has its CatchHandler @ 006089a0 */
      getVSInfoFilament(param_3,(VirtualSdcardInfo *)&local_234);
      iVar6 = std::__cxx11::string::compare((char *)&local_230);
      if ((iVar6 == 0) && (param_3[0x89] == (SerialObject)0x0)) {
        QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 006066d8 to 006066ff has its CatchHandler @ 006085d8 */
        pQVar4 = (QDebug *)
                 QDebug::operator<<((QDebug *)local_2b8,(char *)(local_b0._0_4_ + -0x7690));
        pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,(char *)(local_b8 + -0x14d4));
        QDebug::operator<<(pQVar4,"M25 will paused");
        QDebug::~QDebug((QDebug *)local_2b8);
                    /* try { // try from 00606708 to 0060671f has its CatchHandler @ 006089a0 */
        readM25(param_3);
        SVar3 = param_3[0x8a];
        while (SVar3 == (SerialObject)0x0) {
          sleep(1);
          SVar3 = param_3[0x8a];
        }
        SVar3 = param_3[0x88];
      }
      else {
LAB_006064d8:
        SVar3 = param_3[0x88];
      }
      fVar19 = (float)uVar25;
      if (SVar3 != (SerialObject)0x0) {
                    /* try { // try from 00607f84 to 00607f8b has its CatchHandler @ 006089a0 */
        local_2b8[0] = (int *)QString::fromAscii_helper("CANCEL_PRINT",-1);
                    /* try { // try from 00607fa8 to 00607faf has its CatchHandler @ 00608880 */
        sendGcodeCmd(aQStack_1a0,param_3,local_2b8,1,0,0,0);
        QString::~QString(aQStack_1a0);
        QString::~QString((QString *)local_2b8);
        local_98 = (char *)0x0;
        goto LAB_00604abc;
      }
      SVar3 = param_3[0x18];
      if ((byte)SVar3 != 0) {
                    /* try { // try from 00607fc8 to 00607fcf has its CatchHandler @ 006089a0 */
        QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 00607fd8 to 00607ffb has its CatchHandler @ 00608878 */
        pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)local_2b8,(char *)(local_b8 + -0x14d4));
        pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"m_isCompletePrint: ");
        QDebug::operator<<(pQVar4,(bool)param_3[0x18]);
        QDebug::~QDebug((QDebug *)local_2b8);
        local_98 = (char *)(uint)(byte)SVar3;
        goto LAB_00604abc;
      }
      if ((param_3[0x2e2] == (SerialObject)0x0) || (param_6 == (char *)0x0)) {
LAB_00606630:
        usleep(50000);
      }
      else if (param_3[0x2e0] == (SerialObject)0x0) {
                    /* try { // try from 006075e4 to 00607627 has its CatchHandler @ 006089a0 */
        QMutex::lock();
        iVar6 = *(int *)(param_3 + 0x298);
        QMutex::unlock();
        if ((iVar6 >> (*(int *)(param_3 + (*(int *)(param_3 + 0x248) + 0x94) * 4) - 1U & 0x1f) & 1U)
            == 0) {
          QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 00607630 to 00607667 has its CatchHandler @ 00608434 */
          pQVar4 = (QDebug *)
                   QDebug::operator<<((QDebug *)local_2b8,(char *)(local_b0._0_4_ + -0x7690));
          pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,(char *)(local_b8 + -0x14d4));
          pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"noFilamentCount:");
          pPVar2 = local_80;
          QDebug::operator<<(pQVar4,(int)local_80);
          local_80 = pPVar2 + 1;
          QDebug::~QDebug((QDebug *)local_2b8);
          if (0x13 < (int)(pPVar2 + 1)) {
                    /* try { // try from 00607688 to 0060768f has its CatchHandler @ 006089a0 */
            QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 00607698 to 00607707 has its CatchHandler @ 0060842c */
            pQVar4 = (QDebug *)
                     QDebug::operator<<((QDebug *)local_2b8,(char *)(local_b0._0_4_ + -0x7690));
            pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,(char *)(local_b8 + -0x14d4));
            pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"m_oldEvalue:");
            local_5c = 0;
            pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,*(float *)(param_3 + 0xc0));
            pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"m_eRealValue:");
            local_5c = 0;
            QDebug::operator<<(pQVar4,*(float *)(param_3 + 0xbc));
            QDebug::~QDebug((QDebug *)local_2b8);
            if (local_70 == (char *)0x0) {
              local_5c = 0;
              uVar27 = (ulonglong)*(uint *)(param_3 + 0xc0);
            }
                    /* try { // try from 00607730 to 00607773 has its CatchHandler @ 006089a0 */
            iVar6 = checkFilamentSenser(param_3);
            if (iVar6 != 0) {
              local_5c = 0;
              fVar19 = *(float *)(param_3 + 0xc0) - (float)uVar27;
              in_f0_1 = (double)CONCAT44(local_6c,fVar19);
              if (fVar19 <= (float)local_6c) {
                local_a0 = 1;
                local_70 = param_6;
                goto LAB_00606630;
              }
            }
            QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 0060777c to 006077e3 has its CatchHandler @ 006085f8 */
            pQVar4 = (QDebug *)
                     QDebug::operator<<((QDebug *)local_2b8,(char *)(local_b0._0_4_ + -0x7690));
            pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,(char *)(local_b8 + -0x14d4));
            pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"m_oldEvalue:");
            local_5c = 0;
            pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,*(float *)(param_3 + 0xc0));
            pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"m_eRealValue:");
            local_5c = 0;
            QDebug::operator<<(pQVar4,*(float *)(param_3 + 0xbc));
            QDebug::~QDebug((QDebug *)local_2b8);
                    /* try { // try from 006077f4 to 006077fb has its CatchHandler @ 006089a0 */
            local_2b8[0] = (int *)QString::fromAscii_helper("SAVE_GCODE_STATE NAME=PAUSE_state",-1);
                    /* try { // try from 00607818 to 0060781f has its CatchHandler @ 006085f0 */
            sendGcodeCmd(aQStack_1a4,param_3,local_2b8,0,0,0,0);
            QString::~QString(aQStack_1a4);
            QString::~QString((QString *)local_2b8);
                    /* try { // try from 00607838 to 0060783f has its CatchHandler @ 006089a0 */
            local_2b8[0] = (int *)QString::fromAscii_helper("M25",-1);
                    /* try { // try from 0060785c to 00607863 has its CatchHandler @ 006085e8 */
            sendGcodeCmd(aQStack_1a8,param_3,local_2b8,1,0,0,0);
            QString::~QString(aQStack_1a8);
            QString::~QString((QString *)local_2b8);
            local_5c = 0;
            local_2b8[0] = local_b4;
            *(int *)(local_a8 + -0x3c94) = *(int *)(local_a8 + -0x3c94) + 1;
            in_f0_1 = (double)*(float *)(param_3 + 0xb8);
                    /* try { // try from 006078cc to 006078d3 has its CatchHandler @ 006085e0 */
            QString::number((double)CONCAT44(uVar23,fVar22),SUB81(in_f0_1,0),
                            (int)((ulonglong)in_f0_1 >> 0x20));
            local_200 = local_1ac;
            *local_1ac = *local_1ac + 1;
            QString::~QString((QString *)&local_1ac);
            QString::~QString((QString *)local_2b8);
            local_5c = 0;
                    /* try { // try from 00607918 to 0060791f has its CatchHandler @ 006086b0 */
            QString::toDouble((bool *)&local_200);
            if (in_f0_1 <= dVar28) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            local_5c = 0;
            local_204 = local_b4;
            *(int *)(local_a8 + -0x3c94) = *(int *)(local_a8 + -0x3c94) + 1;
                    /* try { // try from 00607988 to 0060798f has its CatchHandler @ 006086a8 */
            QString::number((double)CONCAT44(uVar23,fVar22),SUB81(in_f0_1,0),
                            (int)((ulonglong)in_f0_1 >> 0x20));
                    /* try { // try from 0060799c to 006079a3 has its CatchHandler @ 006086a0 */
            ::operator+((char *)&local_20c,(QString *)&DAT_00ad8d98);
                    /* try { // try from 006079b0 to 006079b7 has its CatchHandler @ 00608698 */
            ::operator+((QString *)local_2b8,(char *)&local_20c);
                    /* try { // try from 006079d0 to 006079d7 has its CatchHandler @ 0060866c */
            sendGcodeCmd(aQStack_1b0,param_3,local_2b8,1,0,0,0);
            QString::~QString(aQStack_1b0);
            QString::~QString((QString *)local_2b8);
            QString::~QString((QString *)&local_20c);
            QString::~QString((QString *)&local_208);
            QString::~QString((QString *)local_a4);
            local_5c = 0;
                    /* try { // try from 00607a2c to 00607a6b has its CatchHandler @ 006086b0 */
            clearCurrentChnFilament
                      ((int)param_3,*(float *)(param_3 + (*(int *)(param_3 + 0x248) + 0x94) * 4),
                       (float)uVar26);
            iVar6 = autoDetectLoad(param_3,*(int *)(param_3 + (*(int *)(param_3 + 0x248) + 0x94) * 4
                                                   ),*(int *)(param_3 + 0x248),(bool)param_3[0x2e0],
                                   false);
            if (iVar6 == 0) {
              local_a0 = 2;
            }
            else {
              local_2b8[0] = (int *)QString::fromAscii_helper
                                              ("RESTORE_GCODE_STATE NAME=PAUSE_state MOVE=1 MOVE_SPEED=100"
                                               ,-1);
                    /* try { // try from 00607a88 to 00607a8f has its CatchHandler @ 006086c8 */
              sendGcodeCmd(aQStack_1b4,param_3,local_2b8,1,0,0,0);
              QString::~QString(aQStack_1b4);
              QString::~QString((QString *)local_2b8);
                    /* try { // try from 00607aa8 to 00607aaf has its CatchHandler @ 006086b0 */
              local_2b8[0] = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 00607acc to 00607ad3 has its CatchHandler @ 006086c0 */
              sendGcodeCmd(aQStack_1b8,param_3,local_2b8,1,0,0,0);
              QString::~QString(aQStack_1b8);
              QString::~QString((QString *)local_2b8);
                    /* try { // try from 00607aec to 00607af3 has its CatchHandler @ 006086b0 */
              local_2b8[0] = (int *)QString::fromAscii_helper((char *)(local_74 + -0x1864),-1);
                    /* try { // try from 00607b10 to 00607b17 has its CatchHandler @ 006086b8 */
              sendGcodeCmd(aQStack_1bc,param_3,local_2b8,1,0,0,0);
              QString::~QString(aQStack_1bc);
              QString::~QString((QString *)local_2b8);
              local_80 = (PrintContinueConfig *)0x0;
              local_a0 = 0;
            }
                    /* try { // try from 0060820c to 00608213 has its CatchHandler @ 006086b0 */
            sleep(1);
            local_5c = 0;
            uVar27 = 0;
            QString::~QString((QString *)&local_200);
            local_70 = (char *)0x0;
          }
          goto LAB_00606630;
        }
        usleep(50000);
        local_a0 = 0;
      }
      else {
                    /* try { // try from 00606510 to 00606517 has its CatchHandler @ 006089a0 */
        QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 00606520 to 0060656f has its CatchHandler @ 00608a3c */
        pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)local_2b8,(char *)(local_b8 + -0x14d4));
        pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"m_channel: ");
        pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,*(int *)(param_3 + 0x248));
        pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"ffmchn:");
        QDebug::operator<<(pQVar4,*(int *)(param_3 + (*(int *)(param_3 + 0x248) + 0x94) * 4));
        QDebug::~QDebug((QDebug *)local_2b8);
        if (local_a0 == 1) {
          local_5c = 0;
                    /* try { // try from 00607f18 to 00607f47 has its CatchHandler @ 006089a0 */
          local_a0 = clearAllFilament(fVar22,param_2);
        }
                    /* try { // try from 0060658c to 00606593 has its CatchHandler @ 006089a0 */
        QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 0060659c to 006065c3 has its CatchHandler @ 00608778 */
        pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)local_2b8,(char *)(local_b8 + -0x14d4));
        pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"filamentSt: ");
        iVar6 = local_a0;
        QDebug::operator<<(pQVar4,local_a0);
        QDebug::~QDebug((QDebug *)local_2b8);
        if (iVar6 == 1) {
          param_3[0x8a] = SUB41(local_a0,0);
          usleep(50000);
        }
        else {
          local_5c = 0;
                    /* try { // try from 0060660c to 00606637 has its CatchHandler @ 006089a0 */
          local_7c = (SerialObject *)
                     changeChannel(bVar12,0,*(float *)(param_3 +
                                                      (*(int *)(param_3 + 0x248) + 0x94) * 4),
                                   (float)uVar26,SUB81(uVar25,0));
          if (local_7c != (SerialObject *)0x6) {
            local_a0 = 0;
            local_80 = (PrintContinueConfig *)0x0;
            goto LAB_00606630;
          }
                    /* try { // try from 00608264 to 00608297 has its CatchHandler @ 006089a0 */
          usleep(50000);
          local_a0 = 2;
        }
      }
    }
LAB_00605cc8:
    param_3[0x8b] = (SerialObject)0x0;
                    /* try { // try from 00605cd4 to 00605cdb has its CatchHandler @ 006089a0 */
    local_2b8[0] = (int *)QString::fromAscii_helper("CANCEL_PRINT",-1);
                    /* try { // try from 00605cf8 to 00605cff has its CatchHandler @ 006082e4 */
    sendGcodeCmd(aQStack_150,param_3,local_2b8,1,0,0,0);
    QString::~QString(aQStack_150);
    iVar6 = 0x98;
    QString::~QString((QString *)local_2b8);
    while( true ) {
      getVSInfoFilament(param_3,(VirtualSdcardInfo *)&local_234);
      QDebug::QDebug((QDebug *)&local_20c,0);
                    /* try { // try from 00605d60 to 00605d97 has its CatchHandler @ 006082dc */
      pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)&local_20c,(char *)(local_b0._0_4_ + -0x7690))
      ;
      pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,(char *)(local_b8 + -0x14d4));
      pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"print_state:");
      QString::fromAscii((char *)local_2b8,(int)local_230);
                    /* try { // try from 00605d9c to 00605da3 has its CatchHandler @ 006082a0 */
      QDebug::operator<<(pQVar4,(QString *)local_2b8);
      QString::~QString((QString *)local_2b8);
      QDebug::~QDebug((QDebug *)&local_20c);
      iVar10 = std::__cxx11::string::compare((char *)&local_230);
      fVar19 = (float)uVar25;
      if ((iVar10 == 0) || (param_3[0x8b] != (SerialObject)0x0)) goto LAB_00604abc;
      iVar10 = std::__cxx11::string::compare((char *)&local_230);
      fVar19 = (float)uVar25;
      iVar6 = iVar6 + -1;
      if (iVar10 == 0) break;
      if (iVar6 == 0) goto LAB_00604ab4;
                    /* try { // try from 00605d38 to 00605d57 has its CatchHandler @ 006089a0 */
      usleep(200000);
    }
    local_98 = (char *)0x0;
  }
  else {
LAB_00604ab4:
    local_98 = (char *)0x0;
  }
LAB_00604abc:
                    /* try { // try from 00604ac0 to 00604ac7 has its CatchHandler @ 006089a0 */
  local_2b8[0] = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 00604ae4 to 00604aeb has its CatchHandler @ 00608730 */
  sendGcodeCmd(aQStack_1c0,param_3,local_2b8,1,0,0,0);
  QString::~QString(aQStack_1c0);
  QString::~QString((QString *)local_2b8);
  param_3[0xd0] = (SerialObject)0x0;
                    /* try { // try from 00604b08 to 00604b0f has its CatchHandler @ 006089a0 */
  local_2b8[0] = (int *)QString::fromAscii_helper("M114",-1);
                    /* try { // try from 00604b2c to 00604b33 has its CatchHandler @ 00608738 */
  sendGcodeCmd(&local_1c4,param_3,local_2b8,1,0,0,0);
  QString::~QString((QString *)local_2b8);
                    /* try { // try from 00604b40 to 00604b47 has its CatchHandler @ 00608740 */
  QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 00604b50 to 00604b73 has its CatchHandler @ 00608748 */
  pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)local_2b8,(char *)(local_b8 + -0x14d4));
  pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"M114: ");
  QDebug::operator<<(pQVar4,(QString *)&local_1c4);
  QDebug::~QDebug((QDebug *)local_2b8);
  local_208 = local_1c4;
  *local_1c4 = *local_1c4 + 1;
                    /* try { // try from 00604ba4 to 00604bab has its CatchHandler @ 00608b64 */
  local_20c = (int *)QString::fromAscii_helper("Z:",-1);
                    /* try { // try from 00604bbc to 00604bc3 has its CatchHandler @ 00608b7c */
  ParseXYZEFField(local_2b8,(QString *)&local_208,&local_20c);
  local_5c = 0;
                    /* try { // try from 00604bd8 to 00604bdf has its CatchHandler @ 00608b90 */
  QString::toDouble((bool *)local_2b8);
  local_5c = 0;
  local_b0 = in_f0_1;
  QString::~QString((QString *)local_2b8);
  QString::~QString((QString *)&local_20c);
  QString::~QString((QString *)&local_208);
  if (_DAT_00aeaea8 < local_b0) {
    if ((local_b0 <= _DAT_00aeaea8) || (DAT_00aeae80 < local_b0)) {
      if ((local_b0 <= DAT_00aeae80) || (DAT_00aeae88 < local_b0)) {
        dVar21 = DAT_00aeae60;
      }
      else {
        dVar21 = DAT_00aeae90;
      }
    }
    else {
      dVar21 = DAT_00aeae88;
    }
  }
  else {
    dVar21 = DAT_00aeae80;
  }
  if (local_98 != (char *)0x0) {
    local_5c = 0;
                    /* try { // try from 00605e50 to 00605e57 has its CatchHandler @ 00608740 */
    sendPrintPersent(param_3,DAT_00acd1b0,(bool)param_3[0x70]);
  }
  local_5c = 0;
  param_3[0x2e3] = (SerialObject)0x0;
  local_204 = local_b4;
  *(int *)(local_a8 + -0x3c94) = *(int *)(local_a8 + -0x3c94) + 1;
                    /* try { // try from 00605ea8 to 00605eaf has its CatchHandler @ 00608b5c */
  QString::number((double)CONCAT44(uVar23,fVar22),SUB81(dVar21,0),(int)((ulonglong)dVar21 >> 0x20));
                    /* try { // try from 00605ebc to 00605ec3 has its CatchHandler @ 006086e0 */
  ::operator+((char *)&local_20c,(QString *)&DAT_00ad8d98);
                    /* try { // try from 00605ed0 to 00605ed7 has its CatchHandler @ 006086fc */
  ::operator+((QString *)local_2b8,(char *)&local_20c);
                    /* try { // try from 00605ef0 to 00605ef7 has its CatchHandler @ 006087f4 */
  sendGcodeCmd(aQStack_1c8,param_3,local_2b8,1,0,0,0);
  QString::~QString(aQStack_1c8);
  QString::~QString((QString *)local_2b8);
  local_a4 = (QList<QString> *)&local_204;
  QString::~QString((QString *)&local_20c);
  QString::~QString((QString *)&local_208);
  QString::~QString((QString *)&local_204);
                    /* try { // try from 00605f30 to 00605f37 has its CatchHandler @ 00608740 */
  local_2b8[0] = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 00605f54 to 00605f5b has its CatchHandler @ 00608808 */
  sendGcodeCmd(aQStack_1cc,param_3,local_2b8,1,0,0,0);
  QString::~QString(aQStack_1cc);
  QString::~QString((QString *)local_2b8);
                    /* try { // try from 00605f6c to 00605fef has its CatchHandler @ 00608740 */
  powerSavingParamClear(param_3);
  local_5c = 0;
  printClearGoPos(fVar22,param_2);
  if (((param_3[0x2e2] != (SerialObject)0x0) && (param_3[0x88] == (SerialObject)0x0)) &&
     (local_a0 != 1)) {
    if (param_6 != (char *)0x0) {
                    /* try { // try from 00607e40 to 00607ef7 has its CatchHandler @ 00608740 */
      QMutex::lock();
      iVar6 = *(int *)(param_3 + 0x298);
      QMutex::unlock();
      fVar22 = (float)uVar26;
      if ((iVar6 >> (*(int *)(param_3 + (*(int *)(param_3 + 0x248) + 0x94) * 4) - 1U & 0x1f) & 1U)
          == 0) {
                    /* try { // try from 00608050 to 006080db has its CatchHandler @ 00608740 */
        iVar6 = checkFilamentSenser(param_3);
        if ((iVar6 != 0) && (param_3[0x89] == (SerialObject)0x0)) {
          printCleanAllFilament(param_3);
          iVar6 = getFilamentTypeTemp((int)param_3);
          setRightNozzleTemp(param_3,iVar6);
          ppuVar16 = local_b8 + -0x14d4;
          iVar6 = 0;
          do {
            do {
              sleep(1);
              iVar10 = waitArriveTemperature(param_3,false,true,false);
            } while (iVar10 == 0);
            QDebug::QDebug((QDebug *)local_2b8,0);
                    /* try { // try from 006080e0 to 006080ff has its CatchHandler @ 00608484 */
            pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)local_2b8,(char *)ppuVar16);
            pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"clearCurrentChnFilament->timeCount:");
            QDebug::operator<<(pQVar4,iVar6);
            QDebug::~QDebug((QDebug *)local_2b8);
            local_5c = 0;
                    /* try { // try from 00608134 to 00608143 has its CatchHandler @ 00608740 */
            clearCurrentChnFilament
                      ((int)param_3,*(float *)(param_3 + (*(int *)(param_3 + 0x248) + 0x94) * 4),
                       (float)uVar26);
            iVar10 = checkFilamentSenser(param_3);
            iVar6 = iVar6 + 1;
          } while ((iVar10 != 0) && (iVar6 != 7));
        }
      }
      else {
        iVar6 = checkFilamentSenser(param_3);
        iVar10 = *(int *)(param_3 + (*(int *)(param_3 + 0x248) + 0x94) * 4);
        if (iVar6 != 0) {
          local_5c = 0;
          cutFilament(param_3,iVar10,fVar22,fVar19);
          fourInOneUnLoad(param_3,*(int *)(param_3 + (*(int *)(param_3 + 0x248) + 0x94) * 4),false);
          iVar10 = *(int *)(param_3 + (*(int *)(param_3 + 0x248) + 0x94) * 4);
        }
        checkCrotchF39(param_3,iVar10);
      }
    }
    clearChnStatus(param_3);
    operationFilament(param_3,0,0,0,0);
  }
  local_2b8[0] = (int *)QString::fromAscii_helper("SET_IDLE_TIMEOUT TIMEOUT=1800",-1);
                    /* try { // try from 0060600c to 00606013 has its CatchHandler @ 00608810 */
  sendGcodeCmd(aQStack_1d0,param_3,local_2b8,1,0,0,0);
  QString::~QString(aQStack_1d0);
  QString::~QString((QString *)local_2b8);
                    /* try { // try from 00606028 to 006060ab has its CatchHandler @ 00608740 */
  QMutex::lock();
  param_3[0x8f] = (SerialObject)0x0;
  QMutex::unlock();
  sleep(2);
  local_5c = 0;
  param_3[0x17] = (SerialObject)0x0;
  param_3[0x8b] = (SerialObject)0x0;
  param_3[0x70] = (SerialObject)0x0;
  param_3[0x18] = (SerialObject)0x0;
  param_3[0x71] = (SerialObject)0x0;
  *(undefined4 *)(param_3 + 0xb8) = 0;
  *(undefined4 *)(param_3 + 0x2ec) = 0;
  *(undefined4 *)(param_3 + 0xbc) = 0;
  deletePrinterData(param_3);
  setRightNozzleTemp(param_3,0);
  setPlatformHeat(param_3,0);
  initPrinterFan(param_3);
  local_2b8[0] = (int *)QString::fromAscii_helper("M220 S100",-1);
                    /* try { // try from 006060c8 to 006060cf has its CatchHandler @ 006087d4 */
  sendGcodeCmd(aQStack_1d4,param_3,local_2b8,1,0,0,0);
  QString::~QString(aQStack_1d4);
  QString::~QString((QString *)local_2b8);
                    /* try { // try from 006060e4 to 006060eb has its CatchHandler @ 00608740 */
  local_2b8[0] = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 00606108 to 0060610f has its CatchHandler @ 006087dc */
  sendGcodeCmd(aQStack_1d8,param_3,local_2b8,1,0,0,0);
  QString::~QString(aQStack_1d8);
  QString::~QString((QString *)local_2b8);
                    /* try { // try from 00606128 to 0060612f has its CatchHandler @ 00608740 */
  local_2b8[0] = (int *)QString::fromAscii_helper(local_94 + 0x1de8,-1);
                    /* try { // try from 0060614c to 00606153 has its CatchHandler @ 006087e4 */
  sendGcodeCmd(aQStack_1dc,param_3,local_2b8,1,0,0,0);
  QString::~QString(aQStack_1dc);
  QString::~QString((QString *)local_2b8);
                    /* try { // try from 0060616c to 00606173 has its CatchHandler @ 00608740 */
  local_2b8[0] = (int *)QString::fromAscii_helper("BED_MESH_CLEAR",-1);
                    /* try { // try from 00606190 to 00606197 has its CatchHandler @ 006087ec */
  sendGcodeCmd(aQStack_1e0,param_3,local_2b8,1,0,0,0);
  QString::~QString(aQStack_1e0);
  QString::~QString((QString *)local_2b8);
                    /* try { // try from 006061b0 to 006061b7 has its CatchHandler @ 00608740 */
  local_2b8[0] = (int *)QString::fromAscii_helper("BED_MESH_PROFILE REMOVE=default",-1);
                    /* try { // try from 006061d4 to 006061db has its CatchHandler @ 00608788 */
  sendGcodeCmd(aQStack_1e4,param_3,local_2b8,1,0,0,0);
  QString::~QString(aQStack_1e4);
  QString::~QString((QString *)local_2b8);
                    /* try { // try from 006061f4 to 006061fb has its CatchHandler @ 00608740 */
  local_2b8[0] = (int *)QString::fromAscii_helper((char *)(local_90 + -0x1a53),-1);
                    /* try { // try from 00606218 to 0060621f has its CatchHandler @ 0060879c */
  sendGcodeCmd(aQStack_1e8,param_3,local_2b8,1,0,0,0);
  QString::~QString(aQStack_1e8);
  QString::~QString((QString *)local_2b8);
                    /* try { // try from 00606238 to 0060623f has its CatchHandler @ 00608740 */
  local_2b8[0] = (int *)QString::fromAscii_helper("SDCARD_RESET_FILE",-1);
                    /* try { // try from 0060625c to 00606263 has its CatchHandler @ 006087a4 */
  sendGcodeCmd(aQStack_1ec,param_3,local_2b8,1,0,0,0);
  QString::~QString(aQStack_1ec);
  QString::~QString((QString *)local_2b8);
                    /* try { // try from 0060627c to 00606283 has its CatchHandler @ 00608740 */
  local_2b8[0] = (int *)QString::fromAscii_helper("SET_FAN_SPEED FAN=pcb_fan SPEED=0",-1);
                    /* try { // try from 006062a0 to 006062a7 has its CatchHandler @ 006087ac */
  sendGcodeCmd(aQStack_1f0,param_3,local_2b8,1,0,0,0);
  QString::~QString(aQStack_1f0);
  QString::~QString((QString *)local_2b8);
                    /* try { // try from 006062c0 to 006062c7 has its CatchHandler @ 00608740 */
  local_2b8[0] = (int *)QString::fromAscii_helper("SET_GCODE_OFFSET Z=0 MOVE=1",-1);
                    /* try { // try from 006062e8 to 006062ef has its CatchHandler @ 006087b4 */
  sendGcodeCmd((QString *)&local_1f4,param_3,local_2b8,1,0,0,0);
  QString::~QString((QString *)&local_1f4);
  QString::~QString((QString *)local_2b8);
                    /* try { // try from 00606308 to 0060630f has its CatchHandler @ 00608740 */
  local_2b8[0] = (int *)QString::fromAscii_helper("G90",-1);
                    /* try { // try from 00606330 to 00606337 has its CatchHandler @ 006087bc */
  sendGcodeCmd((QString *)&local_1f8,param_3,local_2b8,1,0,0,0);
  QString::~QString((QString *)&local_1f8);
  QString::~QString((QString *)local_2b8);
                    /* try { // try from 00606350 to 00606357 has its CatchHandler @ 00608740 */
  local_2b8[0] = (int *)QString::fromAscii_helper("M82",-1);
                    /* try { // try from 00606378 to 0060637f has its CatchHandler @ 006087c4 */
  sendGcodeCmd((QString *)&local_1fc,param_3,local_2b8,1,0,0,0);
  QString::~QString((QString *)&local_1fc);
  QString::~QString((QString *)local_2b8);
                    /* try { // try from 00606398 to 0060639f has its CatchHandler @ 00608740 */
  local_2b8[0] = (int *)QString::fromAscii_helper("M18",-1);
                    /* try { // try from 006063c0 to 006063c7 has its CatchHandler @ 006087cc */
  sendGcodeCmd((QString *)&local_200,param_3,local_2b8,1,0,0,0);
  QString::~QString((QString *)&local_200);
  QString::~QString((QString *)local_2b8);
  *(undefined4 *)(param_3 + 0x1c) = 1;
  param_3[0x89] = (SerialObject)0x0;
                    /* try { // try from 006063e8 to 0060641b has its CatchHandler @ 00608740 */
  QMutex::lock();
  *(undefined4 *)(param_3 + 0x78) = 1;
  QMutex::unlock();
  if (param_3[0x88] == (SerialObject)0x0) {
    if (local_98 == (char *)0x0) {
                    /* try { // try from 0060674c to 0060676b has its CatchHandler @ 00608740 */
      printCancel(param_3);
    }
    else {
      printCompleted(param_3);
    }
  }
  else {
    local_2b8[0] = (int *)QString::fromAscii_helper("CANCEL_PRINT",-1);
    pQVar1 = local_a4;
                    /* try { // try from 0060678c to 00606793 has its CatchHandler @ 00608a44 */
    sendGcodeCmd(local_a4,param_3,local_2b8,1,0,0,0);
    QString::~QString((QString *)pQVar1);
    QString::~QString((QString *)local_2b8);
                    /* try { // try from 006067a4 to 006067ab has its CatchHandler @ 00608740 */
    printHappendError(param_3);
  }
  QString::~QString((QString *)&local_1c4);
  QFileInfo::~QFileInfo(aQStack_c0);
  if (local_230 != local_228) {
    operator_delete(local_230);
  }
  return;
}


// ===== GuiderLevelPrint::doAutoCalibration @ 006dc598

/* GuiderLevelPrint::doAutoCalibration() */

void __thiscall GuiderLevelPrint::doAutoCalibration(GuiderLevelPrint *this)

{
  QTextStream *pQVar1;
  QDebug *this_00;
  int iVar2;
  undefined4 uVar3;
  QTextStream *local_18;
  undefined4 local_14 [2];
  
  pQVar1 = operator_new(0x18);
                    /* try { // try from 006dc5c8 to 006dc5cf has its CatchHandler @ 006dc6cc */
  local_18 = (QTextStream *)0x2;
  QTextStream::QTextStream(pQVar1,pQVar1 + 8,&local_18);
  *(int **)(pQVar1 + 8) = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
  *(undefined4 *)(pQVar1 + 0xc) = 1;
  *(undefined4 *)(pQVar1 + 0x10) = 2;
  pQVar1[0x14] = (QTextStream)0x1;
  pQVar1[0x15] = (QTextStream)0x1;
  local_18 = pQVar1;
                    /* try { // try from 006dc618 to 006dc62f has its CatchHandler @ 006dc6f4 */
  this_00 = (QDebug *)QDebug::operator<<((QDebug *)&local_18,"../ad5x/guider/guiderLevelPrint.cpp");
  QDebug::operator<<(this_00,"doAutoCalibration");
  QDebug::~QDebug((QDebug *)&local_18);
  uVar3 = *(undefined4 *)(this + 0x18);
  local_14[0] = QString::fromAscii_helper("SET_FAN_SPEED FAN=pcb_fan SPEED=1",-1);
                    /* try { // try from 006dc668 to 006dc66f has its CatchHandler @ 006dc6e0 */
  SerialObject::sendGcodeCmd(&local_18,uVar3,local_14,1,0,0,0);
  QString::~QString((QString *)&local_18);
  QString::~QString((QString *)local_14);
  iVar2 = doLevel();
  if ((iVar2 == 0) || (iVar2 = doInputShaper(this), iVar2 == 0)) {
    return;
  }
  doSaveCfg(this);
  return;
}


// ===== Settings::doAutoCalibration @ 005778ec

/* Settings::doAutoCalibration() */

void __thiscall Settings::doAutoCalibration(Settings *this)

{
  QTextStream *pQVar1;
  QDebug *pQVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  SerialObject *this_00;
  undefined4 uVar6;
  QTextStream *local_18;
  Data *local_14 [2];
  
  pQVar1 = operator_new(0x18);
                    /* try { // try from 0057791c to 00577923 has its CatchHandler @ 00577b58 */
  local_18 = (QTextStream *)0x2;
  QTextStream::QTextStream(pQVar1,pQVar1 + 8,&local_18);
  *(int **)(pQVar1 + 8) = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
  *(undefined4 *)(pQVar1 + 0xc) = 1;
  *(undefined4 *)(pQVar1 + 0x10) = 2;
  pQVar1[0x14] = (QTextStream)0x1;
  pQVar1[0x15] = (QTextStream)0x1;
  local_18 = pQVar1;
                    /* try { // try from 0057796c to 005779a3 has its CatchHandler @ 00577b44 */
  pQVar2 = (QDebug *)QDebug::operator<<((QDebug *)&local_18,"../ad5x/UI/settings.cpp");
  pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,"doAutoCalibration");
  puVar3 = (undefined4 *)QDebug::operator<<(pQVar2,"m_calibration:");
  QTextStream::operator<<((QTextStream *)*puVar3,*(int *)(this + 0x368));
  if (((QTextStream *)*puVar3)[0x14] != (QTextStream)0x0) {
                    /* try { // try from 00577aa8 to 00577aaf has its CatchHandler @ 00577b44 */
    QTextStream::operator<<((QTextStream *)*puVar3,' ');
  }
  QDebug::~QDebug((QDebug *)&local_18);
  uVar6 = *(undefined4 *)(this + 0x14);
  local_14[0] = (Data *)QString::fromAscii_helper("SET_FAN_SPEED FAN=pcb_fan SPEED=1",-1);
                    /* try { // try from 005779ec to 005779f3 has its CatchHandler @ 00577b30 */
  SerialObject::sendGcodeCmd(&local_18,uVar6,local_14,1,0,0,0);
  iVar5 = *(int *)local_18;
  *(int *)local_18 = iVar5 + -1;
  if (iVar5 == 1) {
    QString::free((Data *)local_18);
  }
  iVar5 = *(int *)local_14[0];
  *(int *)local_14[0] = iVar5 + -1;
  if (iVar5 == 1) {
    QString::free(local_14[0]);
    this_00 = *(SerialObject **)(this + 0x14);
  }
  else {
    this_00 = *(SerialObject **)(this + 0x14);
  }
  SerialObject::operationFilament(this_00,1,5,0,1);
  uVar4 = *(uint *)(this + 0x368);
  if ((uVar4 & 1) == 0) {
    if ((uVar4 & 2) != 0) {
LAB_00577a90:
      iVar5 = doInputShaper(this);
      if (iVar5 == 0) {
        return;
      }
      uVar4 = *(uint *)(this + 0x368);
      goto LAB_00577ad8;
    }
    if ((uVar4 & 4) == 0) {
      return;
    }
  }
  else {
    iVar5 = doLevel();
    if (iVar5 == 0) {
      return;
    }
    uVar4 = *(uint *)(this + 0x368);
    if ((uVar4 & 2) != 0) goto LAB_00577a90;
LAB_00577ad8:
    if ((uVar4 & 4) == 0) goto LAB_00577af4;
  }
  iVar5 = doPidTemp(this);
  if (iVar5 == 0) {
    return;
  }
LAB_00577af4:
  doSaveCfg(this);
  return;
}



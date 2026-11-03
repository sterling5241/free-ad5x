// ===== SerialObject::setzAdjustPrinting @ 005e0984

/* SerialObject::setzAdjustPrinting(QString) */

void __thiscall SerialObject::setzAdjustPrinting(SerialObject *this,QString *param_2)

{
  undefined4 uVar1;
  PrintContinueConfig aPStack_98 [140];
  
  QString::operator=((QString *)(this + 0x118),param_2);
  uVar1 = PowerSavingModeFile();
  PrintContinueConfig::PrintContinueConfig(aPStack_98,(PrintContinueConfig *)(this + 0xd4));
                    /* try { // try from 005e09bc to 005e09c3 has its CatchHandler @ 005e09e0 */
  CPowerSavingModeFile::setPowerSavingMode(uVar1,aPStack_98);
  PrintContinueConfig::~PrintContinueConfig(aPStack_98);
  return;
}


// ===== Config::setzProbeOffset @ 00638d78

/* Config::setzProbeOffset(float) */

void __thiscall Config::setzProbeOffset(Config *this,float param_1)

{
  Value *pVVar1;
  Value aVStack_40 [28];
  undefined4 local_24;
  
  local_24 = 0;
  ffsdk::Mutex::lock((Mutex *)(this + 0x6f0));
  local_24 = 0;
  *(float *)(this + 0x354) = param_1;
  pVVar1 = (Value *)Json::Value::operator[]((Value *)(this + 0x360),"zProbeOffset");
  local_24 = 0;
  Json::Value::Value(aVStack_40,(double)param_1);
                    /* try { // try from 00638e38 to 00638e3f has its CatchHandler @ 00638ec8 */
  Json::Value::operator=(pVVar1,aVStack_40);
  Json::Value::~Value(aVStack_40);
  pVVar1 = (Value *)Json::Value::operator[]((Value *)this,"leftExtruderOffset");
  Json::Value::Value(aVStack_40,(Value *)(this + 0x360));
                    /* try { // try from 00638e6c to 00638e73 has its CatchHandler @ 00638edc */
  Json::Value::operator=(pVVar1,aVStack_40);
  Json::Value::~Value(aVStack_40);
  writeToConfig();
  ffsdk::Mutex::unlock((Mutex *)(this + 0x6f0));
  return;
}


// ===== Config::getzProbeOffset @ 00638ee4

/* Config::getzProbeOffset() */

undefined4 __thiscall Config::getzProbeOffset(Config *this)

{
  int iVar1;
  Value *this_00;
  Mutex *this_01;
  undefined4 uVar2;
  
  this_01 = (Mutex *)(this + 0x6f0);
  ffsdk::Mutex::lock(this_01);
  iVar1 = Json::Value::isMember((Value *)(this + 0x360),"zProbeOffset");
  if (iVar1 == 0) {
    ffsdk::Mutex::unlock(this_01);
    setzProbeOffset(this,0.0);
  }
  else {
    this_00 = (Value *)Json::Value::operator[]((Value *)(this + 0x360),"zProbeOffset");
    uVar2 = Json::Value::asFloat(this_00);
    *(undefined4 *)(this + 0x354) = uVar2;
  }
  ffsdk::Mutex::unlock(this_01);
  return *(undefined4 *)(this + 0x354);
}


// ===== Print::getPrintSetInfo @ 00678a28

/* Print::getPrintSetInfo(PrintSetInfo&) */

void __thiscall Print::getPrintSetInfo(Print *this,PrintSetInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  QMutex::lock();
  std::__cxx11::string::_M_assign((string *)param_1);
  uVar10 = *(undefined4 *)(this + 0x3a8);
  uVar7 = *(undefined4 *)(this + 0x3b0);
  uVar6 = *(undefined4 *)(this + 0x3b4);
  uVar5 = *(undefined4 *)(this + 0x3b8);
  uVar4 = *(undefined4 *)(this + 0x3bc);
  uVar3 = *(undefined4 *)(this + 0x3c0);
  uVar9 = *(undefined4 *)(this + 0x3c4);
  uVar2 = *(undefined4 *)(this + 0x3c8);
  uVar1 = *(undefined4 *)(this + 0x3cc);
  uVar8 = *(undefined4 *)(this + 0x3d0);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(this + 0x3ac);
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar10;
  *(undefined4 *)(param_1 + 0x34) = uVar9;
  *(undefined4 *)(param_1 + 0x40) = uVar8;
  std::__cxx11::string::_M_assign((string *)(param_1 + 0x44));
  std::__cxx11::string::_M_assign((string *)(param_1 + 0x5c));
  QMutex::unlock();
  return;
}


// ===== Print::setPrintSetInfo @ 00678b1c

/* Print::setPrintSetInfo(PrintSetInfo&) */

void __thiscall Print::setPrintSetInfo(Print *this,PrintSetInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  QMutex::lock();
  std::__cxx11::string::_M_assign((string *)(this + 0x390));
  uVar10 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  uVar6 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar9 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  uVar8 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x3ac) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x3b0) = uVar7;
  *(undefined4 *)(this + 0x3b4) = uVar6;
  *(undefined4 *)(this + 0x3b8) = uVar5;
  *(undefined4 *)(this + 0x3bc) = uVar4;
  *(undefined4 *)(this + 0x3c0) = uVar3;
  *(undefined4 *)(this + 0x3c8) = uVar2;
  *(undefined4 *)(this + 0x3cc) = uVar1;
  *(undefined4 *)(this + 0x3a8) = uVar10;
  *(undefined4 *)(this + 0x3c4) = uVar9;
  *(undefined4 *)(this + 0x3d0) = uVar8;
  std::__cxx11::string::_M_assign((string *)(this + 0x3d4));
  std::__cxx11::string::_M_assign((string *)(this + 0x3ec));
  QMutex::unlock();
  return;
}


// ===== Print::startPrint @ 0067c450

/* Print::startPrint() */

void __thiscall Print::startPrint(Print *this)

{
  QTextStream *pQVar1;
  int iVar2;
  Data *local_20;
  Data *local_1c;
  Data *local_18;
  QTextStream *local_14 [2];
  
  pQVar1 = operator_new(0x18);
                    /* try { // try from 0067c480 to 0067c487 has its CatchHandler @ 0067c6b4 */
  local_20 = (Data *)0x2;
  QTextStream::QTextStream(pQVar1,pQVar1 + 8,&local_20);
  *(int **)(pQVar1 + 8) = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
  *(undefined4 *)(pQVar1 + 0xc) = 1;
  *(undefined4 *)(pQVar1 + 0x10) = 0;
  pQVar1[0x14] = (QTextStream)0x1;
  pQVar1[0x15] = (QTextStream)0x1;
  local_14[0] = pQVar1;
                    /* try { // try from 0067c4d0 to 0067c4d7 has its CatchHandler @ 0067c6ac */
  QString::fromAscii((char *)&local_18,0xaf9c30);
                    /* try { // try from 0067c4dc to 0067c4e3 has its CatchHandler @ 0067c668 */
  QTextStream::operator<<(pQVar1,(QString *)&local_18);
  iVar2 = *(int *)local_18;
  *(int *)local_18 = iVar2 + -1;
  if (iVar2 == 1) {
    QString::free(local_18);
  }
  if (local_14[0][0x14] != (QTextStream)0x0) {
                    /* try { // try from 0067c608 to 0067c62f has its CatchHandler @ 0067c6ac */
    QTextStream::operator<<(local_14[0],' ');
  }
  pQVar1 = local_14[0];
                    /* try { // try from 0067c528 to 0067c52f has its CatchHandler @ 0067c6ac */
  QString::fromAscii((char *)&local_1c,0xafd5bc);
                    /* try { // try from 0067c534 to 0067c53b has its CatchHandler @ 0067c698 */
  QTextStream::operator<<(pQVar1,(QString *)&local_1c);
  iVar2 = *(int *)local_1c;
  *(int *)local_1c = iVar2 + -1;
  if (iVar2 == 1) {
    QString::free(local_1c);
  }
  if (local_14[0][0x14] != (QTextStream)0x0) {
    QTextStream::operator<<(local_14[0],' ');
  }
  pQVar1 = local_14[0];
                    /* try { // try from 0067c580 to 0067c587 has its CatchHandler @ 0067c6ac */
  QString::fromAscii((char *)&local_20,0xaf9c8c);
                    /* try { // try from 0067c58c to 0067c593 has its CatchHandler @ 0067c684 */
  QTextStream::operator<<(pQVar1,(QString *)&local_20);
  iVar2 = *(int *)local_20;
  *(int *)local_20 = iVar2 + -1;
  if (iVar2 == 1) {
    QString::free(local_20);
  }
  if (local_14[0][0x14] != (QTextStream)0x0) {
    QTextStream::operator<<(local_14[0],' ');
  }
  QDebug::~QDebug((QDebug *)local_14);
  SerialObject::initPrint(*(SerialObject **)(this + 0x5c),(bool)this[0x96]);
  QTimer::singleShot(3000,(QObject *)this,"1delayStartPrint()");
  return;
}



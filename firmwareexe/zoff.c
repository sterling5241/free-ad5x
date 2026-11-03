// ===== Config::setLeftExtruderZOffset @ 006384b8

/* Config::setLeftExtruderZOffset(float) */

void __thiscall Config::setLeftExtruderZOffset(Config *this,float param_1)

{
  Value *pVVar1;
  Value aVStack_40 [28];
  undefined4 local_24;
  
  local_24 = 0;
  ffsdk::Mutex::lock((Mutex *)(this + 0x6f0));
  local_24 = 0;
  *(float *)(this + 0x350) = param_1;
  pVVar1 = (Value *)Json::Value::operator[]((Value *)(this + 0x360),"zOffset");
  local_24 = 0;
  Json::Value::Value(aVStack_40,(double)param_1);
                    /* try { // try from 00638578 to 0063857f has its CatchHandler @ 00638608 */
  Json::Value::operator=(pVVar1,aVStack_40);
  Json::Value::~Value(aVStack_40);
  pVVar1 = (Value *)Json::Value::operator[]((Value *)this,"leftExtruderOffset");
  Json::Value::Value(aVStack_40,(Value *)(this + 0x360));
                    /* try { // try from 006385ac to 006385b3 has its CatchHandler @ 0063861c */
  Json::Value::operator=(pVVar1,aVStack_40);
  Json::Value::~Value(aVStack_40);
  writeToConfig();
  ffsdk::Mutex::unlock((Mutex *)(this + 0x6f0));
  return;
}


// ===== Config::getLeftExtruderZOffset @ 00638624

/* Config::getLeftExtruderZOffset() */

undefined4 __thiscall Config::getLeftExtruderZOffset(Config *this)

{
  int iVar1;
  Value *this_00;
  Mutex *this_01;
  undefined4 uVar2;
  
  this_01 = (Mutex *)(this + 0x6f0);
  ffsdk::Mutex::lock(this_01);
  iVar1 = Json::Value::isMember((Value *)(this + 0x360),"zOffset");
  if (iVar1 == 0) {
    ffsdk::Mutex::unlock(this_01);
    setLeftExtruderZOffset(this,0.0);
  }
  else {
    this_00 = (Value *)Json::Value::operator[]((Value *)(this + 0x360),"zOffset");
    uVar2 = Json::Value::asFloat(this_00);
    *(undefined4 *)(this + 0x350) = uVar2;
  }
  ffsdk::Mutex::unlock(this_01);
  return *(undefined4 *)(this + 0x350);
}


// ===== Config::getLevelPrintPointZ @ 00640f48

/* Config::getLevelPrintPointZ() */

undefined4 __thiscall Config::getLevelPrintPointZ(Config *this)

{
  int iVar1;
  Value *this_00;
  Mutex *this_01;
  undefined4 uVar2;
  
  this_01 = (Mutex *)(this + 0x6f0);
  ffsdk::Mutex::lock(this_01);
  iVar1 = Json::Value::isMember((Value *)(this + 0x170),"zLevelOffset");
  if (iVar1 == 0) {
    ffsdk::Mutex::unlock(this_01);
    setLevelPrintPointZ(this,0.0);
  }
  else {
    this_00 = (Value *)Json::Value::operator[]((Value *)(this + 0x170),"zLevelOffset");
    uVar2 = Json::Value::asFloat(this_00);
    *(undefined4 *)(this + 0x160) = uVar2;
  }
  ffsdk::Mutex::unlock(this_01);
  return *(undefined4 *)(this + 0x160);
}


// ===== Config::getCheckZFrist @ 00641130

/* Config::getCheckZFrist() */

Config __thiscall Config::getCheckZFrist(Config *this)

{
  Config CVar1;
  int iVar2;
  Value *this_00;
  Mutex *this_01;
  
  this_01 = (Mutex *)(this + 0x6f0);
  ffsdk::Mutex::lock(this_01);
  iVar2 = Json::Value::isMember((Value *)(this + 0x170),"CheckZFrist");
  if (iVar2 == 0) {
    ffsdk::Mutex::unlock(this_01);
    setCheckZFrist(this,true);
  }
  else {
    this_00 = (Value *)Json::Value::operator[]((Value *)(this + 0x170),"CheckZFrist");
    CVar1 = (Config)Json::Value::asBool(this_00);
    this[0x15c] = CVar1;
  }
  ffsdk::Mutex::unlock(this_01);
  return this[0x15c];
}


// ===== Print::checkLevelEachPrint @ 0067bb64

/* Print::checkLevelEachPrint() */

void __thiscall Print::checkLevelEachPrint(Print *this)

{
  QTextStream *pQVar1;
  int iVar2;
  Data *local_20;
  Data *local_1c;
  QTextStream *local_18 [3];
  
  pQVar1 = operator_new(0x18);
                    /* try { // try from 0067bb94 to 0067bb9b has its CatchHandler @ 0067bd0c */
  local_20 = (Data *)0x2;
  QTextStream::QTextStream(pQVar1,pQVar1 + 8,&local_20);
  *(int **)(pQVar1 + 8) = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
  *(undefined4 *)(pQVar1 + 0xc) = 1;
  *(undefined4 *)(pQVar1 + 0x10) = 0;
  pQVar1[0x14] = (QTextStream)0x1;
  pQVar1[0x15] = (QTextStream)0x1;
  local_18[0] = pQVar1;
                    /* try { // try from 0067bbe4 to 0067bbeb has its CatchHandler @ 0067bd50 */
  QString::fromAscii((char *)&local_1c,0xaf9c30);
                    /* try { // try from 0067bbf0 to 0067bbf7 has its CatchHandler @ 0067bd3c */
  QTextStream::operator<<(pQVar1,(QString *)&local_1c);
  iVar2 = *(int *)local_1c;
  *(int *)local_1c = iVar2 + -1;
  if (iVar2 == 1) {
    QString::free(local_1c);
  }
  if (local_18[0][0x14] != (QTextStream)0x0) {
                    /* try { // try from 0067bccc to 0067bce3 has its CatchHandler @ 0067bd50 */
    QTextStream::operator<<(local_18[0],' ');
  }
  pQVar1 = local_18[0];
                    /* try { // try from 0067bc3c to 0067bc43 has its CatchHandler @ 0067bd50 */
  QString::fromAscii((char *)&local_20,0xafd620);
                    /* try { // try from 0067bc48 to 0067bc4f has its CatchHandler @ 0067bd20 */
  QTextStream::operator<<(pQVar1,(QString *)&local_20);
  iVar2 = *(int *)local_20;
  *(int *)local_20 = iVar2 + -1;
  if (iVar2 == 1) {
    QString::free(local_20);
  }
  if (local_18[0][0x14] != (QTextStream)0x0) {
    QTextStream::operator<<(local_18[0],' ');
  }
  QDebug::~QDebug((QDebug *)local_18);
  QTimer::singleShot(10,(QObject *)this,"1getTemperature()");
  QTimer::singleShot(0x32,(QObject *)this,"1initWidget()");
  return;
}


// ===== Print::resetZOffset @ 00683da0

/* Print::resetZOffset() */

void Print::resetZOffset(void)

{
  QDebug *pQVar1;
  undefined4 *puVar2;
  GetConfigFile *this;
  Config *this_00;
  Print *in_a0;
  QString *pQVar3;
  SerialObject *pSVar4;
  float fVar5;
  double dVar6;
  double in_f12_13;
  undefined1 *local_a0;
  undefined4 local_9c;
  undefined1 local_98 [44];
  float local_6c;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined1 local_54 [16];
  undefined1 *local_44;
  undefined4 local_40;
  undefined1 local_3c [16];
  int *local_2c;
  int *local_28;
  undefined4 *local_24;
  undefined4 local_20;
  
  local_20 = 0;
  QDebug::QDebug((QDebug *)&local_a0,0);
                    /* try { // try from 00683df0 to 00683e37 has its CatchHandler @ 00684360 */
  pQVar1 = (QDebug *)QDebug::operator<<((QDebug *)&local_a0,"../ad5x/UI/print.cpp");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"resetZOffset");
  puVar2 = (undefined4 *)QDebug::operator<<(pQVar1,"==================");
  local_20 = 0;
  QTextStream::operator<<((QTextStream *)*puVar2,*(float *)(in_a0 + 0xc0));
  if (((QTextStream *)*puVar2)[0x14] != (QTextStream)0x0) {
                    /* try { // try from 006842d0 to 006842d7 has its CatchHandler @ 00684360 */
    QTextStream::operator<<((QTextStream *)*puVar2,' ');
  }
  QDebug::~QDebug((QDebug *)&local_a0);
  fVar5 = DAT_00afd668;
  if ((*(float *)(in_a0 + 0xc0) <= DAT_00afd668) ||
     (fVar5 = DAT_00afd66c, DAT_00afd66c <= *(float *)(in_a0 + 0xc0))) {
    *(float *)(in_a0 + 0xc0) = fVar5;
  }
  local_20 = 0;
  pSVar4 = *(SerialObject **)(in_a0 + 0x5c);
  local_24 = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 00683f08 to 00683f0f has its CatchHandler @ 006843a8 */
  QString::number(in_f12_13,SUB81((double)*(float *)(in_a0 + 0xc0),0),
                  (int)((ulonglong)(double)*(float *)(in_a0 + 0xc0) >> 0x20));
                    /* try { // try from 00683f1c to 00683f23 has its CatchHandler @ 006843a0 */
  QString::fromAscii((char *)&local_2c,0xafa960);
                    /* try { // try from 00683f28 to 00683f2f has its CatchHandler @ 00684398 */
  QString::append((QString *)&local_2c);
                    /* try { // try from 00683f3c to 00683f43 has its CatchHandler @ 00684374 */
  ::operator+((QString *)&local_a0,(char *)&local_2c);
                    /* try { // try from 00683f48 to 00683f4f has its CatchHandler @ 006843b8 */
  SerialObject::setAsynGcodeAdjustZ(pSVar4,&local_a0);
  QString::~QString((QString *)&local_a0);
  QString::~QString((QString *)&local_2c);
  QString::~QString((QString *)&local_28);
  QString::~QString((QString *)&local_24);
  QDebug::QDebug((QDebug *)&local_a0,0);
                    /* try { // try from 00683f80 to 00683ff7 has its CatchHandler @ 006843b0 */
  pQVar1 = (QDebug *)QDebug::operator<<((QDebug *)&local_a0,"resetZOffset");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"send offset : ");
  local_20 = 0;
  QTextStream::operator<<(*(QTextStream **)pQVar1,*(float *)(in_a0 + 0xc0));
  if ((*(QTextStream **)pQVar1)[0x14] != (QTextStream)0x0) {
    QTextStream::operator<<(*(QTextStream **)pQVar1,' ');
  }
  puVar2 = (undefined4 *)QDebug::operator<<(pQVar1," adjust: ");
  local_20 = 0;
  QTextStream::operator<<((QTextStream *)*puVar2,*(float *)(in_a0 + 0xc4));
  if (((QTextStream *)*puVar2)[0x14] == (QTextStream)0x0) {
    QDebug::~QDebug((QDebug *)&local_a0);
    fVar5 = *(float *)(in_a0 + 0xc0);
    if (fVar5 <= 0.0) goto LAB_00684314;
LAB_00684034:
    dVar6 = (double)fVar5;
    if (DAT_00afd678 <= dVar6) goto LAB_0068405c;
  }
  else {
                    /* try { // try from 006842e0 to 00684333 has its CatchHandler @ 006843b0 */
    QTextStream::operator<<((QTextStream *)*puVar2,' ');
    QDebug::~QDebug((QDebug *)&local_a0);
    fVar5 = *(float *)(in_a0 + 0xc0);
    if (0.0 < fVar5) goto LAB_00684034;
LAB_00684314:
    dVar6 = (double)fVar5;
LAB_0068405c:
    if ((dVar6 <= DAT_00afd680) || (0.0 <= fVar5)) goto LAB_00684084;
  }
  *(undefined4 *)(in_a0 + 0xc0) = 0;
LAB_00684084:
  local_20 = 0;
  local_a0 = local_98;
  local_5c = local_54;
  local_44 = local_3c;
  local_9c = 0;
  local_98[0] = 0;
  local_58 = 0;
  local_54[0] = 0;
  local_40 = 0;
                    /* try { // try from 006840b4 to 006840e7 has its CatchHandler @ 006843d4 */
  local_3c[0] = 0;
  getPrintSetInfo(in_a0,(PrintSetInfo *)&local_a0);
  local_20 = 0;
  local_6c = (float)*(undefined8 *)(in_a0 + 0xc0) -
             (float)((ulonglong)*(undefined8 *)(in_a0 + 0xc0) >> 0x20);
  setPrintSetInfo(in_a0,(PrintSetInfo *)&local_a0);
  local_20 = 0;
  pQVar3 = *(QString **)(*(int *)(in_a0 + 0x28) + 0xb0);
  local_24 = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
  dVar6 = (double)((float)*(undefined8 *)(in_a0 + 0xc0) -
                  (float)((ulonglong)*(undefined8 *)(in_a0 + 0xc0) >> 0x20));
                    /* try { // try from 00684144 to 0068414b has its CatchHandler @ 006843cc */
  QString::number(in_f12_13,SUB81(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
                    /* try { // try from 00684158 to 0068415f has its CatchHandler @ 0068433c */
  ::operator+((QString *)&local_2c,(char *)&local_28);
                    /* try { // try from 00684164 to 0068416b has its CatchHandler @ 00684400 */
  QLabel::setText(pQVar3);
  QString::~QString((QString *)&local_2c);
  QString::~QString((QString *)&local_28);
  QString::~QString((QString *)&local_24);
  local_20 = 0;
  pSVar4 = *(SerialObject **)(in_a0 + 0x5c);
  local_24 = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
  dVar6 = (double)((float)*(undefined8 *)(in_a0 + 0xc0) -
                  (float)((ulonglong)*(undefined8 *)(in_a0 + 0xc0) >> 0x20));
                    /* try { // try from 006841dc to 006841e3 has its CatchHandler @ 006843f8 */
  QString::number(in_f12_13,SUB81(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
  local_2c = local_28;
  *local_28 = *local_28 + 1;
                    /* try { // try from 00684208 to 0068420f has its CatchHandler @ 006843dc */
  SerialObject::setzAdjustPrinting(pSVar4,&local_2c);
  QString::~QString((QString *)&local_2c);
  QString::~QString((QString *)&local_28);
  QString::~QString((QString *)&local_24);
                    /* try { // try from 00684228 to 00684267 has its CatchHandler @ 006843d4 */
  this = (GetConfigFile *)getConfigFile();
  this_00 = (Config *)GetConfigFile::configFile(this);
  local_20 = 0;
  Config::setzProbeOffset(this_00,*(float *)(in_a0 + 0xc0) - *(float *)(in_a0 + 0xc4));
  QWidget::update();
  PrintSetInfo::~PrintSetInfo((PrintSetInfo *)&local_a0);
  return;
}



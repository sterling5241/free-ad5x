// ===== SerialObject::setAsynGcodeAdjustZ @ 005e0590

/* SerialObject::setAsynGcodeAdjustZ(QString) */

void __thiscall SerialObject::setAsynGcodeAdjustZ(SerialObject *this,undefined4 *param_2)

{
  int iVar1;
  Data *local_10 [2];
  
  local_10[0] = (Data *)*param_2;
  this[0x1a5] = (SerialObject)0x0;
  *(int *)local_10[0] = *(int *)local_10[0] + 1;
                    /* try { // try from 005e05c0 to 005e05c7 has its CatchHandler @ 005e0614 */
  sigDelayCmd(this,local_10);
  iVar1 = *(int *)local_10[0];
  *(int *)local_10[0] = iVar1 + -1;
  if (iVar1 == 1) {
    QString::free(local_10[0]);
    return;
  }
  return;
}


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


// ===== Print::get13thPointFromFile @ 006870e4

/* Print::get13thPointFromFile(std::__cxx11::string const&) */

undefined8 Print::get13thPointFromFile(string *param_1)

{
  char cVar1;
  int iVar2;
  istream *piVar3;
  ostream *poVar4;
  QDebug *pQVar5;
  undefined4 *puVar6;
  QTextStream *pQVar7;
  Data *pDVar8;
  int iVar9;
  ostream *poVar10;
  int *in_a1;
  uint uVar11;
  int *piVar12;
  ostream *poVar13;
  undefined *puVar14;
  undefined4 uVar15;
  char *pcVar16;
  undefined8 in_f0_1;
  double in_f12_13;
  undefined *local_300 [2];
  undefined4 local_2f8 [3];
  uint auStack_2ec [4];
  locale alStack_2dc [28];
  ostream aoStack_2c0 [60];
  undefined4 auStack_284 [5];
  undefined *local_270 [28];
  undefined4 local_200;
  undefined1 local_1fc;
  undefined1 local_1fb;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  Data *local_1e8 [2];
  undefined4 local_1e0 [7];
  locale alStack_1c4 [8];
  undefined1 *local_1bc;
  undefined1 auStack_1b4 [16];
  undefined *local_1a4 [34];
  Data *local_11c;
  int local_118;
  Data aDStack_114 [20];
  Data *local_100;
  undefined4 uStack_fc;
  Data aDStack_f8 [16];
  QTextStream *local_e8;
  int local_e4;
  QTextStream aQStack_e0 [16];
  char *local_d0;
  uint local_cc;
  char acStack_c8 [16];
  undefined1 *local_b8;
  int local_b4;
  undefined1 auStack_b0 [16];
  undefined1 *local_a0;
  int local_9c;
  undefined1 local_98 [16];
  void *local_88;
  undefined8 *local_84;
  undefined8 *local_80;
  ostream *local_7c;
  ostream *local_78;
  ostream *local_74;
  undefined8 local_70;
  undefined8 local_68;
  ostream *local_60;
  undefined4 *local_5c;
  int local_58;
  code *local_54;
  int local_50;
  undefined *local_4c;
  vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *local_48;
  char *local_44;
  int local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined1 *local_34;
  undefined4 local_2c;
  
  local_2c = 0;
  local_7c = (ostream *)0x0;
  local_78 = (ostream *)0x0;
  local_74 = (ostream *)0x0;
  std::ios_base::ios_base((ios_base *)local_270);
  uVar15 = std::ifstream::VTT._8_4_;
  puVar14 = (undefined *)std::ifstream::VTT._4_4_;
  local_1fc = 0;
  local_34 = std::ifstream::VTT;
  local_270[0] = (undefined *)0xe1c430;
  local_200 = 0;
  local_1fb = 0;
  local_1f8 = 0;
  local_1f4 = 0;
  local_1f0 = 0;
  local_1ec = 0;
  local_300[0] = (undefined *)std::ifstream::VTT._4_4_;
  *(undefined4 *)((int)local_300 + *(int *)(std::ifstream::VTT._4_4_ + -0xc)) =
       std::ifstream::VTT._8_4_;
  local_300[1] = (undefined *)0x0;
                    /* try { // try from 006871a8 to 006871af has its CatchHandler @ 0068826c */
  local_4c = std::ios::vtable + 8;
  std::ios::init((streambuf *)((int)local_300 + *(int *)(std::ifstream::VTT._4_4_ + -0xc)));
  local_3c = &DAT_00e1c20c;
  local_38 = &DAT_00e1c220;
  local_300[0] = &DAT_00e1c20c;
                    /* try { // try from 006871d0 to 006871d7 has its CatchHandler @ 0068831c */
  local_270[0] = &DAT_00e1c220;
  std::filebuf::filebuf((filebuf *)local_2f8);
                    /* try { // try from 006871dc to 0068720f has its CatchHandler @ 006882ec */
  std::ios::init((streambuf *)local_270);
  iVar2 = std::filebuf::open(local_2f8,*in_a1,8);
  iVar9 = (int)local_300 + *(int *)(local_300[0] + -0xc);
  if (iVar2 == 0) {
                    /* try { // try from 00688074 to 0068807b has its CatchHandler @ 006882ec */
    std::ios::clear(iVar9,*(uint *)((int)auStack_2ec + *(int *)(local_300[0] + -0xc)) | 4);
  }
  else {
    std::ios::clear(iVar9,0);
  }
  poVar10 = aoStack_2c0;
  local_40 = std::__basic_file<char>::is_open();
  if (local_40 != 0) {
    local_a0 = local_98;
    local_9c = 0;
    local_98[0] = 0;
    local_48 = (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)&local_7c;
    while (piVar12 = *(int **)((int)auStack_284 + *(int *)(local_300[0] + -0xc)),
          piVar12 != (int *)0x0) {
      if ((char)piVar12[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        cVar1 = '\n';
        if (*(code **)(*piVar12 + 0x18) != std::ctype<char>::do_widen) {
          cVar1 = (**(code **)(*piVar12 + 0x18))(piVar12,10);
        }
      }
      else {
        cVar1 = *(char *)((int)piVar12 + 0x27);
      }
                    /* try { // try from 00687270 to 00687303 has its CatchHandler @ 006881dc */
      piVar3 = std::getline<char,std::char_traits<char>,std::allocator<char>>
                         ((istream *)local_300,(string *)&local_a0,cVar1);
      if ((*(uint *)(piVar3 + *(int *)(*(int *)piVar3 + -0xc) + 0x14) & 5) != 0) {
        iVar2 = std::filebuf::close();
        if (iVar2 == 0) {
                    /* try { // try from 006880a8 to 006880af has its CatchHandler @ 006881dc */
          std::ios::clear((int)local_300 + *(int *)(local_300[0] + -0xc),
                          *(uint *)((int)auStack_2ec + *(int *)(local_300[0] + -0xc)) | 4);
        }
        local_88 = (void *)0x0;
        local_84 = (undefined8 *)0x0;
        local_80 = (undefined8 *)0x0;
        local_60 = local_78;
        if (local_7c == local_78) goto LAB_00687b38;
        local_5c = &QString::shared_null;
        local_68 = CONCAT44(local_68._4_4_,
                            "mbda(bool, bool&)>; socket_t = int; size_t = unsigned int; time_t = long int]"
                           );
        local_44 = &DAT_00afabb0;
        local_50 = 0;
        local_58 = 0;
        local_54 = std::ctype<char>::do_widen;
        poVar13 = local_7c;
        goto LAB_00687628;
      }
      if (local_78 == local_74) {
        poVar10 = (ostream *)local_48;
                    /* try { // try from 00687ce0 to 00687ce7 has its CatchHandler @ 006881dc */
        std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
        _M_realloc_insert<std::__cxx11::string_const&>(local_48,local_78,&local_a0);
      }
      else {
        if (local_78 != (ostream *)0x0) {
          *(ostream **)local_78 = local_78 + 8;
          std::__cxx11::string::_M_construct<char*>(local_78,local_a0,local_a0 + local_9c);
        }
        poVar10 = local_78 + 0x18;
        local_78 = poVar10;
      }
    }
                    /* try { // try from 006881d4 to 006881db has its CatchHandler @ 006881dc */
    std::__throw_bad_cast();
                    /* catch() { ... } // from try @ 00687270 with catch @ 006881dc
                       catch() { ... } // from try @ 00687ce0 with catch @ 006881dc
                       catch() { ... } // from try @ 006880a8 with catch @ 006881dc
                       catch() { ... } // from try @ 006881d4 with catch @ 006881dc */
LAB_0068816c:
    if (local_a0 != local_98) {
      operator_delete(local_a0);
    }
    std::ifstream::~ifstream((ifstream *)local_300);
LAB_0068818c:
    std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::~vector(local_48);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(poVar10);
  }
                    /* try { // try from 00687fb4 to 00687fbb has its CatchHandler @ 0068823c */
  QDebug::QDebug((QDebug *)&local_11c,0);
                    /* try { // try from 00687fc4 to 00687ff3 has its CatchHandler @ 0068824c */
  pQVar5 = (QDebug *)QDebug::operator<<((QDebug *)&local_11c,"get13thPointFromFile");
  pQVar5 = (QDebug *)QDebug::operator<<(pQVar5,"not open file: ");
  QString::fromAscii((char *)local_1e8,*in_a1);
                    /* try { // try from 00687ff8 to 00687fff has its CatchHandler @ 0068832c */
  QDebug::operator<<(pQVar5,(QString *)local_1e8);
  QString::~QString((QString *)local_1e8);
  QDebug::~QDebug((QDebug *)&local_11c);
  local_48 = (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)&local_7c;
  local_68 = DAT_00afd690;
  goto LAB_00687c10;
LAB_00687628:
  do {
                    /* try { // try from 00687630 to 00687637 has its CatchHandler @ 006883f4 */
    trim((string *)&local_b8);
                    /* try { // try from 00687638 to 0068763f has its CatchHandler @ 006883ec */
    pQVar7 = operator_new(0x18);
                    /* try { // try from 00687654 to 0068765b has its CatchHandler @ 006883d8 */
    local_e8 = (QTextStream *)0x2;
    QTextStream::QTextStream(pQVar7,pQVar7 + 8,&local_e8);
    *(undefined4 **)(pQVar7 + 8) = local_5c;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar7 + 0xc) = 1;
    *(undefined4 *)(pQVar7 + 0x10) = 0;
    pQVar7[0x14] = (QTextStream)0x1;
    pQVar7[0x15] = (QTextStream)0x1;
    local_e8 = pQVar7;
                    /* try { // try from 006876a0 to 006876a7 has its CatchHandler @ 006883d0 */
    QString::fromAscii((char *)&local_100,(int)local_68 + -0x2d04);
                    /* try { // try from 006876ac to 006876b3 has its CatchHandler @ 006883bc */
    QTextStream::operator<<(pQVar7,(QString *)&local_100);
    iVar2 = *(int *)local_100;
    *(int *)local_100 = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_100);
    }
    if (local_e8[0x14] != (QTextStream)0x0) {
                    /* try { // try from 006876ec to 006876f3 has its CatchHandler @ 006883d0 */
      QTextStream::operator<<(local_e8,' ');
    }
    pQVar7 = local_e8;
                    /* try { // try from 00687370 to 00687377 has its CatchHandler @ 006883d0 */
    QString::fromAscii((char *)&local_11c,0xafab0c);
                    /* try { // try from 0068737c to 00687383 has its CatchHandler @ 006883a8 */
    QTextStream::operator<<(pQVar7,(QString *)&local_11c);
    iVar2 = *(int *)local_11c;
    *(int *)local_11c = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_11c);
    }
    if (local_e8[0x14] != (QTextStream)0x0) {
                    /* try { // try from 0068773c to 00687743 has its CatchHandler @ 006883d0 */
      QTextStream::operator<<(local_e8,' ');
    }
                    /* try { // try from 006873c4 to 006873cb has its CatchHandler @ 006883d0 */
    QString::fromAscii((char *)local_1e8,(int)local_b8);
                    /* try { // try from 006873d0 to 006873ef has its CatchHandler @ 00688298 */
    pQVar7 = (QTextStream *)QTextStream::operator<<(local_e8,'\"');
    pQVar7 = (QTextStream *)QTextStream::operator<<(pQVar7,(QString *)local_1e8);
    QTextStream::operator<<(pQVar7,'\"');
    if (local_e8[0x14] == (QTextStream)0x0) {
      iVar2 = *(int *)local_1e8[0];
      *(int *)local_1e8[0] = iVar2 + -1;
    }
    else {
                    /* try { // try from 006876fc to 00687703 has its CatchHandler @ 00688298 */
      QTextStream::operator<<(local_e8,' ');
      iVar2 = *(int *)local_1e8[0];
      *(int *)local_1e8[0] = iVar2 + -1;
    }
    if (iVar2 == 1) {
      QString::free(local_1e8[0]);
    }
    QDebug::~QDebug((QDebug *)&local_e8);
    if (local_b4 != 0) {
                    /* try { // try from 0068743c to 00687443 has its CatchHandler @ 006883ec */
      removeCommentPrefix((string *)&local_d0);
                    /* try { // try from 00687454 to 006874c7 has its CatchHandler @ 00688124 */
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"getLevel13thPoint cleanLine: \"",0x1e);
      poVar4 = std::__ostream_insert<char,std::char_traits<char>>
                         ((ostream *)&std::cout,local_d0,local_cc);
      poVar10 = poVar4;
      std::__ostream_insert<char,std::char_traits<char>>(poVar4,"\"",1);
      piVar12 = *(int **)(poVar4 + *(int *)(*(int *)poVar4 + -0xc) + 0x7c);
      if (piVar12 == (int *)0x0) {
                    /* try { // try from 0068811c to 00688123 has its CatchHandler @ 00688124 */
        std::__throw_bad_cast();
                    /* catch() { ... } // from try @ 00687454 with catch @ 00688124
                       catch() { ... } // from try @ 006875ac with catch @ 00688124
                       catch() { ... } // from try @ 00687750 with catch @ 00688124
                       catch() { ... } // from try @ 00687800 with catch @ 00688124
                       catch() { ... } // from try @ 006878e0 with catch @ 00688124
                       catch() { ... } // from try @ 00687ad4 with catch @ 00688124
                       catch() { ... } // from try @ 00687d58 with catch @ 00688124
                       catch() { ... } // from try @ 00688044 with catch @ 00688124
                       catch() { ... } // from try @ 0068811c with catch @ 00688124
                       catch() { ... } // from try @ 00688264 with catch @ 00688124 */
LAB_0068812c:
        if (local_d0 != acStack_c8) {
          operator_delete(local_d0);
        }
        if (local_b8 != auStack_b0) {
          operator_delete(local_b8);
        }
        if (local_88 != (void *)0x0) {
          operator_delete(local_88);
        }
        goto LAB_0068816c;
      }
      if ((char)piVar12[7] == '\0') {
                    /* try { // try from 00687800 to 00687887 has its CatchHandler @ 00688124 */
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar12 + 0x18) != local_54) {
          (**(code **)(*piVar12 + 0x18))(piVar12,10);
        }
      }
      std::ostream::put((char)poVar4);
      std::ostream::flush();
      QDebug::QDebug((QDebug *)&local_11c,0);
                    /* try { // try from 006874d0 to 006874f7 has its CatchHandler @ 006883a0 */
      pQVar5 = (QDebug *)QDebug::operator<<((QDebug *)&local_11c,(char *)((int)local_68 + -0x2d04));
      puVar6 = (undefined4 *)QDebug::operator<<(pQVar5,"trimmedLine:");
      QString::fromAscii((char *)local_1e8,(int)local_d0);
                    /* try { // try from 006874fc to 0068751b has its CatchHandler @ 00688380 */
      pQVar7 = (QTextStream *)QTextStream::operator<<((QTextStream *)*puVar6,'\"');
      pQVar7 = (QTextStream *)QTextStream::operator<<(pQVar7,(QString *)local_1e8);
      QTextStream::operator<<(pQVar7,'\"');
      if (((QTextStream *)*puVar6)[0x14] == (QTextStream)0x0) {
        iVar2 = *(int *)local_1e8[0];
        *(int *)local_1e8[0] = iVar2 + -1;
      }
      else {
                    /* try { // try from 006877c0 to 006877c7 has its CatchHandler @ 00688380 */
        QTextStream::operator<<((QTextStream *)*puVar6,' ');
        iVar2 = *(int *)local_1e8[0];
        *(int *)local_1e8[0] = iVar2 + -1;
      }
      if (iVar2 == 1) {
        QString::free(local_1e8[0]);
      }
      QDebug::~QDebug((QDebug *)&local_11c);
      iVar2 = std::__cxx11::string::compare((char *)&local_d0);
      if (iVar2 == 0) {
                    /* try { // try from 00687750 to 00687757 has its CatchHandler @ 00688124 */
        QDebug::QDebug((QDebug *)local_1e8,0);
                    /* try { // try from 00687760 to 00687777 has its CatchHandler @ 00688228 */
        pQVar5 = (QDebug *)QDebug::operator<<((QDebug *)local_1e8,(char *)((int)local_68 + -0x2d04))
        ;
        QDebug::operator<<(pQVar5,"find bed_mesh ok:");
        QDebug::~QDebug((QDebug *)local_1e8);
        local_58 = local_40;
LAB_0068778c:
        if (local_d0 == acStack_c8) goto LAB_00687600;
      }
      else {
        if (local_58 == 0) goto LAB_0068778c;
        if (((local_cc != 0) && (*local_d0 == '[')) && (local_d0[local_cc - 1] == ']')) {
                    /* try { // try from 00687ad4 to 00687adb has its CatchHandler @ 00688124 */
          QDebug::QDebug((QDebug *)local_1e8,0);
                    /* try { // try from 00687ae4 to 00687afb has its CatchHandler @ 006882b8 */
          pQVar5 = (QDebug *)
                   QDebug::operator<<((QDebug *)local_1e8,(char *)((int)local_68 + -0x2d04));
          QDebug::operator<<(pQVar5,"exit bed_mesh:");
          QDebug::~QDebug((QDebug *)local_1e8);
          if (local_d0 != acStack_c8) {
            operator_delete(local_d0);
          }
          if (local_b8 != auStack_b0) {
            operator_delete(local_b8);
          }
          break;
        }
        uVar11 = local_cc;
        if (6 < local_cc) {
          uVar11 = 6;
        }
        local_1e8[0] = (Data *)local_1e0;
                    /* try { // try from 006875ac to 006875b3 has its CatchHandler @ 00688124 */
        std::__cxx11::string::_M_construct<char*>((QString *)local_1e8,local_d0,local_d0 + uVar11);
        iVar2 = std::__cxx11::string::compare((char *)local_1e8);
        if (local_1e8[0] != (Data *)local_1e0) {
          operator_delete(local_1e8[0]);
        }
        if (iVar2 == 0) {
          poVar10 = (ostream *)&std::cout;
          std::__ostream_insert<char,std::char_traits<char>>
                    ((ostream *)&std::cout,&DAT_00afab80,0x14);
          piVar12 = *(int **)(&DAT_00e1c19c + *(int *)(std::cout + -0xc));
          if (piVar12 != (int *)0x0) {
            if ((char)piVar12[7] == '\0') {
                    /* try { // try from 00688044 to 00688067 has its CatchHandler @ 00688124 */
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*piVar12 + 0x18) != local_54) {
                (**(code **)(*piVar12 + 0x18))(piVar12,10);
              }
            }
            std::ostream::put(' ');
            std::ostream::flush();
            QDebug::QDebug((QDebug *)local_1e8,0);
                    /* try { // try from 00687890 to 006878a7 has its CatchHandler @ 00688324 */
            pQVar5 = (QDebug *)
                     QDebug::operator<<((QDebug *)local_1e8,(char *)((int)local_68 + -0x2d04));
            QDebug::operator<<(pQVar5,"find points:");
            QDebug::~QDebug((QDebug *)local_1e8);
            iVar2 = std::__cxx11::string::find((char)&local_d0,0x3a);
            if (iVar2 != -1) {
              if (local_cc < iVar2 + 1U) {
                std::__throw_out_of_range_fmt
                          ("%s: __pos (which is %zu) > this->size() (which is %zu)",
                           "basic_string::substr");
                return in_f0_1;
              }
                    /* try { // try from 006878e0 to 006878e7 has its CatchHandler @ 00688124 */
              std::__cxx11::string::string
                        ((string *)local_1e8,(string *)&local_d0,iVar2 + 1U,0xffffffff);
                    /* try { // try from 006878f0 to 006878f7 has its CatchHandler @ 00688350 */
              trim((string *)&local_11c);
              if (local_1e8[0] != (Data *)local_1e0) {
                operator_delete(local_1e8[0]);
              }
              for (pDVar8 = local_11c; local_11c + local_118 != pDVar8; pDVar8 = pDVar8 + 1) {
                if (*pDVar8 == (Data)0x2c) {
                  *pDVar8 = (Data)0x20;
                }
              }
                    /* try { // try from 00687948 to 0068794f has its CatchHandler @ 00688348 */
              std::__cxx11::istringstream::istringstream
                        ((istringstream *)local_1e8,(QString *)&local_11c,8);
              pcVar16 = (char *)((int)local_68 + -0x2d04);
                    /* try { // try from 00687964 to 006879c7 has its CatchHandler @ 00688340 */
              while (piVar3 = std::istream::_M_extract<double>((double *)local_1e8),
                    (*(uint *)(piVar3 + *(int *)(*(int *)piVar3 + -0xc) + 0x14) & 5) == 0) {
                if (local_84 == local_80) {
                    /* try { // try from 00688084 to 0068808b has its CatchHandler @ 00688340 */
                  std::vector<double,std::allocator<double>>::_M_realloc_insert<double_const&>
                            ((vector<double,std::allocator<double>> *)&local_88,local_84,&local_100)
                  ;
                }
                else {
                  if (local_84 != (undefined8 *)0x0) {
                    local_2c = 0;
                    in_f0_1 = CONCAT44(uStack_fc,local_100);
                    *local_84 = in_f0_1;
                  }
                  local_84 = local_84 + 1;
                }
                QDebug::QDebug((QDebug *)&local_e8,0);
                    /* try { // try from 006879cc to 006879f3 has its CatchHandler @ 006881f8 */
                pQVar5 = (QDebug *)QDebug::operator<<((QDebug *)&local_e8,pcVar16);
                puVar6 = (undefined4 *)QDebug::operator<<(pQVar5,"val:");
                QTextStream::operator<<
                          ((QTextStream *)*puVar6,(double)CONCAT44(uStack_fc,local_100));
                if (((QTextStream *)*puVar6)[0x14] != (QTextStream)0x0) {
                    /* try { // try from 00687d44 to 00687d4b has its CatchHandler @ 006881f8 */
                  QTextStream::operator<<((QTextStream *)*puVar6,' ');
                }
                QDebug::~QDebug((QDebug *)&local_e8);
              }
              local_1e8[0] = (Data *)&DAT_00e1c254;
              local_1a4[0] = &DAT_00e1c268;
              local_1e0[0] = 0xe1c03c;
              if (local_1bc != auStack_1b4) {
                operator_delete(local_1bc);
              }
              local_1e0[0] = 0xe1c328;
              std::locale::~locale(alStack_1c4);
              local_1e8[0] = (Data *)std::__cxx11::istringstream::VTT._4_4_;
              *(undefined4 *)
               ((int)local_1e8 + *(int *)(std::__cxx11::istringstream::VTT._4_4_ + -0xc)) =
                   std::__cxx11::istringstream::VTT._8_4_;
              local_1e8[1] = (Data *)0x0;
              local_1a4[0] = local_4c;
              std::ios_base::~ios_base((ios_base *)local_1a4);
              if (local_11c != aDStack_114) {
                operator_delete(local_11c);
              }
            }
            local_50 = local_58;
            goto LAB_0068778c;
          }
                    /* try { // try from 00688264 to 0068837f has its CatchHandler @ 00688124 */
          std::__throw_bad_cast();
                    /* catch() { ... } // from try @ 006871a8 with catch @ 0068826c */
          local_270[0] = local_4c;
          local_48 = (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)&local_7c;
          std::ios_base::~ios_base((ios_base *)local_270);
          goto LAB_0068818c;
        }
        if (local_50 != 0) {
                    /* try { // try from 00687d58 to 00687d5f has its CatchHandler @ 00688124 */
          removeCommentPrefix((string *)&local_e8);
          for (pQVar7 = local_e8; local_e8 + local_e4 != pQVar7; pQVar7 = pQVar7 + 1) {
            if (*pQVar7 == (QTextStream)0x2c) {
              *pQVar7 = (QTextStream)0x20;
            }
          }
                    /* try { // try from 00687d9c to 00687da3 has its CatchHandler @ 00688410 */
          std::__cxx11::istringstream::istringstream((istringstream *)local_1e8,&local_e8,8);
                    /* try { // try from 00687da8 to 00687e87 has its CatchHandler @ 006881a4 */
          while (piVar3 = std::istream::_M_extract<double>((double *)local_1e8),
                (*(uint *)(piVar3 + *(int *)(*(int *)piVar3 + -0xc) + 0x14) & 5) == 0) {
            if (local_84 == local_80) {
                    /* try { // try from 00688034 to 0068803b has its CatchHandler @ 006881a4 */
              std::vector<double,std::allocator<double>>::_M_realloc_insert<double_const&>
                        ((vector<double,std::allocator<double>> *)&local_88,local_84,&local_70);
            }
            else {
              if (local_84 != (undefined8 *)0x0) {
                local_2c = 0;
                *local_84 = local_70;
                in_f0_1 = local_70;
              }
              local_84 = local_84 + 1;
            }
            std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,local_44,0x11);
            poVar10 = (ostream *)&std::cout;
            poVar4 = std::ostream::_M_insert<double>(in_f12_13);
            piVar12 = *(int **)(poVar4 + *(int *)(*(int *)poVar4 + -0xc) + 0x7c);
            if (piVar12 == (int *)0x0) {
                    /* try { // try from 0068819c to 006881a3 has its CatchHandler @ 006881a4 */
              std::__throw_bad_cast();
                    /* catch() { ... } // from try @ 00687da8 with catch @ 006881a4
                       catch() { ... } // from try @ 00687ed4 with catch @ 006881a4
                       catch() { ... } // from try @ 00688034 with catch @ 006881a4
                       catch() { ... } // from try @ 0068819c with catch @ 006881a4 */
              std::__cxx11::istringstream::~istringstream((istringstream *)local_1e8);
              if (local_e8 != aQStack_e0) {
                operator_delete(local_e8);
              }
              goto LAB_0068812c;
            }
            if ((char)piVar12[7] == '\0') {
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*piVar12 + 0x18) != local_54) {
                (**(code **)(*piVar12 + 0x18))(piVar12,10);
              }
            }
            std::ostream::put((char)poVar4);
            std::ostream::flush();
          }
                    /* try { // try from 00687e9c to 00687ea3 has its CatchHandler @ 00688290 */
          std::__cxx11::string::string((string *)&local_100,(string *)&local_d0,0,7);
          iVar2 = std::__cxx11::string::compare((char *)&local_100);
          if (iVar2 == 0) {
            if (local_100 != aDStack_f8) {
              operator_delete(local_100);
            }
LAB_00687ed4:
                    /* try { // try from 00687ed4 to 00687edb has its CatchHandler @ 006881a4 */
            QDebug::QDebug((QDebug *)&local_11c,0);
                    /* try { // try from 00687ee4 to 00687efb has its CatchHandler @ 006881e4 */
            pQVar5 = (QDebug *)
                     QDebug::operator<<((QDebug *)&local_11c,(char *)((int)local_68 + -0x2d04));
            QDebug::operator<<(pQVar5,"points end");
            QDebug::~QDebug((QDebug *)&local_11c);
            local_50 = 0;
          }
          else {
                    /* try { // try from 006880c4 to 006880cb has its CatchHandler @ 006882c0 */
            std::__cxx11::string::string((string *)&local_11c,(string *)&local_d0,0,7);
            iVar2 = std::__cxx11::string::compare((char *)&local_11c);
            if (local_11c != aDStack_114) {
              operator_delete(local_11c);
            }
            if (local_100 != aDStack_f8) {
              operator_delete(local_100);
            }
            if (iVar2 == 0) goto LAB_00687ed4;
          }
          local_1e8[0] = (Data *)&DAT_00e1c254;
          local_1a4[0] = &DAT_00e1c268;
          local_1e0[0] = 0xe1c03c;
          if (local_1bc != auStack_1b4) {
            operator_delete(local_1bc);
          }
          local_1e0[0] = 0xe1c328;
          std::locale::~locale(alStack_1c4);
          local_1e8[0] = (Data *)std::__cxx11::istringstream::VTT._4_4_;
          *(undefined4 *)((int)local_1e8 + *(int *)(std::__cxx11::istringstream::VTT._4_4_ + -0xc))
               = std::__cxx11::istringstream::VTT._8_4_;
          local_1e8[1] = (Data *)0x0;
          local_1a4[0] = local_4c;
          std::ios_base::~ios_base((ios_base *)local_1a4);
          if (local_e8 != aQStack_e0) {
            operator_delete(local_e8);
          }
        }
        if (local_d0 == acStack_c8) goto LAB_00687600;
      }
      operator_delete(local_d0);
    }
LAB_00687600:
    if (local_b8 != auStack_b0) {
      operator_delete(local_b8);
    }
    poVar13 = poVar13 + 0x18;
  } while (local_60 != poVar13);
LAB_00687b38:
                    /* try { // try from 00687b38 to 00687b3f has its CatchHandler @ 006883f4 */
  QDebug::QDebug((QDebug *)local_1e8,0);
                    /* try { // try from 00687b48 to 00687b7b has its CatchHandler @ 006883fc */
  pQVar5 = (QDebug *)QDebug::operator<<((QDebug *)local_1e8,"get13thPointFromFile");
  puVar6 = (undefined4 *)QDebug::operator<<(pQVar5,"getLevel13thPoint points nums:");
  QTextStream::operator<<((QTextStream *)*puVar6,(int)local_84 - (int)local_88 >> 3);
  if (((QTextStream *)*puVar6)[0x14] != (QTextStream)0x0) {
                    /* try { // try from 00687d34 to 00687d3b has its CatchHandler @ 006883fc */
    QTextStream::operator<<((QTextStream *)*puVar6,' ');
  }
  QDebug::~QDebug((QDebug *)local_1e8);
  if ((uint)((int)local_84 - (int)local_88) < 0x68) {
    local_68 = DAT_00afd690;
    if (local_88 != (void *)0x0) goto LAB_00687d04;
  }
  else {
    local_68 = *(undefined8 *)((int)local_88 + 0x60);
LAB_00687d04:
    local_2c = 0;
    operator_delete(local_88);
  }
  if (local_a0 != local_98) {
    local_2c = 0;
    operator_delete(local_a0);
  }
  puVar14 = *(undefined **)(local_34 + 4);
  uVar15 = *(undefined4 *)(local_34 + 8);
LAB_00687c10:
  local_2c = 0;
  local_300[0] = local_3c;
  local_270[0] = local_38;
  local_2f8[0] = 0xe1c51c;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file((__basic_file<char> *)aoStack_2c0);
  local_2f8[0] = 0xe1c328;
  std::locale::~locale(alStack_2dc);
  local_300[0] = puVar14;
  *(undefined4 *)((int)local_300 + *(int *)(puVar14 + -0xc)) = uVar15;
  local_300[1] = (undefined *)0x0;
  local_270[0] = local_4c;
  std::ios_base::~ios_base((ios_base *)local_270);
  std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::~vector(local_48);
  return local_68;
}


// ===== Print::doPreparation @ 0068a590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Print::doPreparation() */

void Print::doPreparation(void)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  GetConfigFile *pGVar4;
  Config *pCVar5;
  QDebug *pQVar6;
  float *pfVar7;
  char *pcVar8;
  Print *in_a0;
  QString *pQVar9;
  int iVar10;
  undefined4 uVar11;
  Print *pPVar12;
  SerialObject *pSVar13;
  Print *pPVar14;
  ulonglong in_f0_1;
  float fVar15;
  float in_f12;
  undefined4 in_f13;
  float in_f14;
  double dVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float local_1f0 [24];
  float local_190;
  undefined4 local_18c;
  QString aQStack_188 [4];
  undefined4 *local_184;
  undefined4 local_180;
  QString aQStack_17c [4];
  QString aQStack_178 [4];
  QString aQStack_174 [4];
  QString aQStack_170 [4];
  QString aQStack_16c [4];
  QString aQStack_168 [4];
  QString aQStack_164 [4];
  QString aQStack_160 [4];
  QString aQStack_15c [4];
  QString aQStack_158 [4];
  QString aQStack_154 [4];
  QString aQStack_150 [4];
  QString aQStack_14c [4];
  QString aQStack_148 [4];
  QString aQStack_144 [4];
  QString aQStack_140 [4];
  undefined4 local_13c;
  QString aQStack_138 [4];
  QString aQStack_134 [4];
  undefined4 local_130;
  QString aQStack_12c [4];
  QString aQStack_128 [4];
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
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
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  QString aQStack_d0 [4];
  QString aQStack_cc [4];
  QString aQStack_c8 [4];
  QString aQStack_c4 [4];
  QString aQStack_c0 [4];
  QString aQStack_bc [4];
  QString aQStack_b8 [4];
  QString aQStack_b4 [4];
  QString aQStack_b0 [4];
  QString aQStack_ac [4];
  QString aQStack_a8 [4];
  QString aQStack_a4 [4];
  undefined4 *local_a0 [2];
  QString *local_98;
  char *local_94;
  char *local_90;
  float *local_8c;
  undefined **local_88;
  char *local_84;
  char *local_80;
  char *local_7c;
  Print *local_78;
  char *local_74;
  Print *local_70;
  char *local_6c;
  char *local_68;
  char *local_64;
  char *local_60;
  undefined4 local_54;
  
  local_54 = 0;
  local_a0[0] = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 0068a62c to 0068a663 has its CatchHandler @ 0068c3e4 */
  QString::fromAscii((char *)local_1f0,0xae8eec);
  fVar2 = *(float *)(in_a0 + 0x24);
  *(float *)(in_a0 + 0x24) = local_1f0[0];
  local_1f0[0] = fVar2;
  QString::~QString((QString *)local_1f0);
  in_a0[0x20] = (Print)0x0;
  uVar11 = *(undefined4 *)(in_a0 + 0x5c);
  local_1f0[0] = (float)QString::fromAscii_helper("BED_MESH_CLEAR",-1);
                    /* try { // try from 0068a680 to 0068a687 has its CatchHandler @ 0068c3f4 */
  SerialObject::sendGcodeCmd(aQStack_a4,uVar11,local_1f0,1,0,0,0);
  QString::~QString(aQStack_a4);
  QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068a6a4 to 0068a6ab has its CatchHandler @ 0068c3e4 */
  uVar11 = *(undefined4 *)(in_a0 + 0x5c);
  local_1f0[0] = (float)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 0068a6c8 to 0068a6cf has its CatchHandler @ 0068c3ec */
  SerialObject::sendGcodeCmd(aQStack_a8,uVar11,local_1f0,1,0,0,0);
  QString::~QString(aQStack_a8);
  QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068a6ec to 0068a78f has its CatchHandler @ 0068c3e4 */
  iVar3 = SerialObject::homeManager(SUB41(*(undefined4 *)(in_a0 + 0x5c),0),true,true);
  in_a0[0xab] = SUB41(iVar3,0);
  if (iVar3 == 0) goto LAB_0068a8b8;
  pGVar4 = (GetConfigFile *)getConfigFile();
  pCVar5 = (Config *)GetConfigFile::configFile(pGVar4);
  local_54 = 0;
  Config::getLeftExtruderXOffset(pCVar5);
  fVar2 = (float)in_f0_1;
  local_54 = 0;
  in_f0_1 = in_f0_1 & 0xffffffff;
  pGVar4 = (GetConfigFile *)getConfigFile();
  pCVar5 = (Config *)GetConfigFile::configFile(pGVar4);
  local_54 = 0;
  Config::getLeftExtruderYOffset(pCVar5);
  local_54 = 0;
  SerialObject::printClearGoPos(in_f12,in_f14);
  uVar11 = *(undefined4 *)(in_a0 + 0x5c);
  local_1f0[0] = (float)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 0068a7ac to 0068a7b3 has its CatchHandler @ 0068c3dc */
  SerialObject::sendGcodeCmd(aQStack_ac,uVar11,local_1f0,1,0,0,0);
  QString::~QString(aQStack_ac);
  QString::~QString((QString *)local_1f0);
  if (in_a0[0xa7] == (Print)0x0) {
                    /* try { // try from 0068a7d8 to 0068a7df has its CatchHandler @ 0068c3e4 */
    uVar11 = *(undefined4 *)(in_a0 + 0x5c);
    local_1f0[0] = (float)QString::fromAscii_helper("SET_IDLE_TIMEOUT TIMEOUT=864000",-1);
                    /* try { // try from 0068a7fc to 0068a803 has its CatchHandler @ 0068c414 */
    SerialObject::sendGcodeCmd(aQStack_b0,uVar11,local_1f0,1,0,0,0);
    QString::~QString(aQStack_b0);
    QString::~QString((QString *)local_1f0);
    if (in_a0[0x96] != (Print)0x0) {
      uVar11 = *(undefined4 *)(in_a0 + 0x5c);
      if (in_a0[0x97] == (Print)0x0) {
        local_1f0[0] = (float)QString::fromAscii_helper("BED_MESH_PROFILE LOAD=MESH_DATA",-1);
                    /* try { // try from 0068aeb8 to 0068aebf has its CatchHandler @ 0068c424 */
        SerialObject::sendGcodeCmd(aQStack_bc,uVar11,local_1f0,1,0,0,0);
        QString::~QString(aQStack_bc);
        QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068aed8 to 0068aedf has its CatchHandler @ 0068c3e4 */
        uVar11 = *(undefined4 *)(in_a0 + 0x5c);
        local_1f0[0] = (float)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 0068aefc to 0068af03 has its CatchHandler @ 0068c41c */
        SerialObject::sendGcodeCmd(aQStack_c0,uVar11,local_1f0,1,0,0,0);
        pQVar9 = aQStack_c0;
      }
      else {
                    /* try { // try from 0068a834 to 0068a83b has its CatchHandler @ 0068c3e4 */
        local_1f0[0] = (float)QString::fromAscii_helper("BED_MESH_PROFILE LOAD=default",-1);
                    /* try { // try from 0068a858 to 0068a85f has its CatchHandler @ 0068c3d4 */
        SerialObject::sendGcodeCmd(aQStack_b4,uVar11,local_1f0,1,0,0,0);
        QString::~QString(aQStack_b4);
        QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068a878 to 0068a87f has its CatchHandler @ 0068c3e4 */
        uVar11 = *(undefined4 *)(in_a0 + 0x5c);
        local_1f0[0] = (float)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 0068a89c to 0068a8a3 has its CatchHandler @ 0068c3cc */
        SerialObject::sendGcodeCmd(aQStack_b8,uVar11,local_1f0,1,0,0,0);
        pQVar9 = aQStack_b8;
      }
      QString::~QString(pQVar9);
      QString::~QString((QString *)local_1f0);
      goto LAB_0068a8b8;
    }
    if (in_a0[0x99] != (Print)0x0) {
                    /* try { // try from 0068aba4 to 0068abef has its CatchHandler @ 0068c3e4 */
      sleep(2);
      iVar3 = SerialObject::getHomedStatus(*(SerialObject **)(in_a0 + 0x5c));
      pSVar13 = *(SerialObject **)(in_a0 + 0x5c);
      if (iVar3 == 0) {
                    /* try { // try from 0068af18 to 0068af3b has its CatchHandler @ 0068c3e4 */
        SerialObject::homeManager(SUB41(pSVar13,0),true,true);
        pSVar13 = *(SerialObject **)(in_a0 + 0x5c);
      }
      in_a0[0x18] = (Print)0x0;
      in_a0[0x19] = (Print)0x1;
      if (in_a0[0xa7] == (Print)0x0) {
        SerialObject::setPlatformHeat(pSVar13,*(int *)(in_a0 + 0xf8));
        uVar11 = *(undefined4 *)(in_a0 + 0x5c);
        local_1f0[0] = (float)QString::fromAscii_helper("G1 Z5 F600",-1);
                    /* try { // try from 0068ac0c to 0068ac13 has its CatchHandler @ 0068b204 */
        SerialObject::sendGcodeCmd(aQStack_c4,uVar11,local_1f0,1,0,0,0);
        QString::~QString(aQStack_c4);
        QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068ac24 to 0068ad3b has its CatchHandler @ 0068c3e4 */
        sleep(1);
        pSVar13 = *(SerialObject **)(in_a0 + 0x5c);
        while (iVar3 = SerialObject::waitArriveTemperature(pSVar13,false,false,true), iVar3 == 0) {
          sleep(1);
          if (in_a0[0xa7] != (Print)0x0) goto LAB_0068aa88;
          pSVar13 = *(SerialObject **)(in_a0 + 0x5c);
        }
        SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x5c),*(int *)(in_a0 + 0xf0));
        sleep(2);
        pSVar13 = *(SerialObject **)(in_a0 + 0x5c);
        while( true ) {
          iVar3 = SerialObject::waitArriveTemperature(pSVar13,false,true,false);
          fVar2 = (float)in_f0_1;
          if (iVar3 != 0) break;
          sleep(1);
          if (in_a0[0xa7] != (Print)0x0) goto LAB_0068aa88;
          pSVar13 = *(SerialObject **)(in_a0 + 0x5c);
        }
        SerialObject::flushFilamentSecond(*(int *)(in_a0 + 0x5c),1);
        local_54 = 0;
        SerialObject::flushFilamentBrush(SUB41(*(undefined4 *)(in_a0 + 0x5c),0),1.4013e-45,fVar2);
        SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x5c),0xb4);
        local_54 = 0;
        SerialObject::clear_brush(in_f12);
        local_54 = 0;
        SerialObject::clear_brush(in_f12);
        local_90 = 
        "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
        ;
        uVar11 = *(undefined4 *)(in_a0 + 0x5c);
        local_1f0[0] = (float)QString::fromAscii_helper("G1 Z5 F800",-1);
                    /* try { // try from 0068ad58 to 0068ad5f has its CatchHandler @ 0068b1fc */
        SerialObject::sendGcodeCmd(aQStack_c8,uVar11,local_1f0,1,0,0,0);
        QString::~QString(aQStack_c8);
        QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068ad7c to 0068ad83 has its CatchHandler @ 0068c3e4 */
        uVar11 = *(undefined4 *)(in_a0 + 0x5c);
        local_1f0[0] = (float)QString::fromAscii_helper("G1 X60 Y-3 F30000",-1);
                    /* try { // try from 0068ada0 to 0068ada7 has its CatchHandler @ 0068b1f4 */
        SerialObject::sendGcodeCmd(aQStack_cc,uVar11,local_1f0,1,0,0,0);
        QString::~QString(aQStack_cc);
        QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068adc0 to 0068adc7 has its CatchHandler @ 0068c3e4 */
        uVar11 = *(undefined4 *)(in_a0 + 0x5c);
        local_1f0[0] = (float)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 0068ade4 to 0068adeb has its CatchHandler @ 0068b1d8 */
        SerialObject::sendGcodeCmd(aQStack_d0,uVar11,local_1f0,1,0,0,0);
        QString::~QString(aQStack_d0);
        QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068adfc to 0068ae13 has its CatchHandler @ 0068c3e4 */
        iVar3 = SerialObject::checkLevelPinStatus(*(SerialObject **)(in_a0 + 0x5c));
        QDebug::QDebug((QDebug *)local_1f0,0);
                    /* try { // try from 0068ae20 to 0068ae43 has its CatchHandler @ 0068b3a8 */
        local_94 = "mbda(bool, bool&)>; socket_t = int; size_t = unsigned int; time_t = long int]";
        pQVar6 = (QDebug *)QDebug::operator<<((QDebug *)local_1f0,"doPreparation");
        pQVar6 = (QDebug *)QDebug::operator<<(pQVar6,"checkLevelPinStatus:");
        QDebug::operator<<(pQVar6,SUB41(iVar3,0));
        QDebug::~QDebug((QDebug *)local_1f0);
        if (iVar3 == 0) {
                    /* try { // try from 0068ae64 to 0068ae9b has its CatchHandler @ 0068c3e4 */
          QMetaObject::tr((char *)&local_d4,(char *)&staticMetaObject);
          uVar11 = *(undefined4 *)(in_a0 + 0x24);
          *(undefined4 *)(in_a0 + 0x24) = local_d4;
          local_d4 = uVar11;
          QString::~QString((QString *)&local_d4);
          pSVar13 = *(SerialObject **)(in_a0 + 0x5c);
        }
        else {
          local_98 = (QString *)&local_180;
          SerialObject::cmdProbeCalibration();
                    /* try { // try from 0068af48 to 0068af4f has its CatchHandler @ 0068b390 */
          local_80 = 
          "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
          ;
          local_1f0[0] = (float)QString::fromAscii_helper("No trigger",-1);
                    /* try { // try from 0068af60 to 0068af67 has its CatchHandler @ 0068b398 */
          iVar3 = QString::indexOf((QString *)&local_180,local_1f0,0,1);
          if (iVar3 == -1) {
            QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068af88 to 0068af8f has its CatchHandler @ 0068b390 */
            local_74 = 
            "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
            ;
            local_1f0[0] = (float)QString::fromAscii_helper("Probe triggered prior to movement",-1);
                    /* try { // try from 0068afa0 to 0068afa7 has its CatchHandler @ 0068b3a0 */
            iVar3 = QString::indexOf((QString *)&local_180,local_1f0,0,1);
            if (iVar3 == -1) {
              QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068afc4 to 0068afcb has its CatchHandler @ 0068b390 */
              local_1f0[0] = (float)QString::fromAscii_helper("Endstop x still triggered",-1);
                    /* try { // try from 0068afdc to 0068afe3 has its CatchHandler @ 0068b20c */
              iVar3 = QString::indexOf(local_98,local_1f0,0,1);
              if (iVar3 == -1) {
                QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068b000 to 0068b007 has its CatchHandler @ 0068b390 */
                local_1f0[0] = (float)QString::fromAscii_helper("Endstop y still triggered",-1);
                    /* try { // try from 0068b018 to 0068b01f has its CatchHandler @ 0068b228 */
                iVar3 = QString::indexOf(local_98,local_1f0,0,1);
                if (iVar3 == -1) {
                  QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068b03c to 0068b043 has its CatchHandler @ 0068b390 */
                  local_1f0[0] = (float)QString::fromAscii_helper("Endstop z still triggered",-1);
                    /* try { // try from 0068b054 to 0068b05b has its CatchHandler @ 0068b2b4 */
                  iVar3 = QString::indexOf(local_98,local_1f0,0,1);
                  if (iVar3 == -1) {
                    QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068b240 to 0068b247 has its CatchHandler @ 0068b390 */
                    local_1f0[0] = (float)QString::fromAscii_helper("!!",-1);
                    /* try { // try from 0068b258 to 0068b25f has its CatchHandler @ 0068b388 */
                    iVar3 = QString::indexOf(local_98,local_1f0,0,1);
                    if (iVar3 == -1) {
                      QString::~QString((QString *)local_1f0);
                      do {
                        sleep(1);
                      } while (in_a0[0x18] == (Print)0x0);
                      in_a0[0x18] = (Print)0x0;
                      in_a0[0x19] = (Print)0x0;
                      QDebug::QDebug((QDebug *)local_1f0,0);
                    /* try { // try from 0068b2f0 to 0068b323 has its CatchHandler @ 0068b750 */
                      pQVar6 = (QDebug *)QDebug::operator<<((QDebug *)local_1f0,local_94 + -0x29f0);
                      pQVar6 = (QDebug *)QDebug::operator<<(pQVar6,"probe calibrate z: ");
                      local_54 = 0;
                      QDebug::operator<<(pQVar6,*(float *)(in_a0 + 0x1c));
                      QDebug::~QDebug((QDebug *)local_1f0);
                    /* try { // try from 0068b338 to 0068b33f has its CatchHandler @ 0068b390 */
                      uVar11 = *(undefined4 *)(in_a0 + 0x5c);
                      local_1f0[0] = (float)QString::fromAscii_helper("ABORT",-1);
                    /* try { // try from 0068b35c to 0068b363 has its CatchHandler @ 0068b748 */
                      SerialObject::sendGcodeCmd(aQStack_f0,uVar11,local_1f0,1,0,0,0);
                      QString::~QString(aQStack_f0);
                      QString::~QString((QString *)local_1f0);
                      if (in_a0[0xa7] == (Print)0x0) {
                    /* try { // try from 0068b3c4 to 0068b3cb has its CatchHandler @ 0068b390 */
                        uVar11 = *(undefined4 *)(in_a0 + 0x5c);
                        local_1f0[0] = (float)QString::fromAscii_helper("M106 P0 S255",-1);
                    /* try { // try from 0068b3e8 to 0068b3ef has its CatchHandler @ 0068c3c4 */
                        SerialObject::sendGcodeCmd(aQStack_f4,uVar11,local_1f0,1,0,0,0);
                        QString::~QString(aQStack_f4);
                        QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068b40c to 0068b413 has its CatchHandler @ 0068b390 */
                        uVar11 = *(undefined4 *)(in_a0 + 0x5c);
                        local_1f0[0] = (float)QString::fromAscii_helper("G92 E0",-1);
                    /* try { // try from 0068b430 to 0068b437 has its CatchHandler @ 0068c3bc */
                        SerialObject::sendGcodeCmd(aQStack_f8,uVar11,local_1f0,1,0,0,0);
                        QString::~QString(aQStack_f8);
                        QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068b454 to 0068b45b has its CatchHandler @ 0068b390 */
                        uVar11 = *(undefined4 *)(in_a0 + 0x5c);
                        local_1f0[0] = (float)QString::fromAscii_helper("G1 X60 Y-3 F12000",-1);
                    /* try { // try from 0068b478 to 0068b47f has its CatchHandler @ 0068c3b4 */
                        SerialObject::sendGcodeCmd(aQStack_fc,uVar11,local_1f0,1,0,0,0);
                        QString::~QString(aQStack_fc);
                        QString::~QString((QString *)local_1f0);
                        local_54 = 0;
                        uVar11 = *(undefined4 *)(in_a0 + 0x5c);
                        local_184 = &QString::shared_null;
                        QString::shared_null = QString::shared_null + 1;
                        dVar16 = (double)(float)((double)*(float *)(in_a0 + 0x1c) + DAT_00ae6c00);
                    /* try { // try from 0068b4f8 to 0068b4ff has its CatchHandler @ 0068c3ac */
                        QString::number((double)CONCAT44(in_f13,in_f12),SUB81(dVar16,0),
                                        (int)((ulonglong)dVar16 >> 0x20));
                    /* try { // try from 0068b514 to 0068b51b has its CatchHandler @ 0068c3a4 */
                        local_88 = (undefined **)0xae0000;
                        ::operator+((char *)&local_18c,(QString *)&DAT_00ad8d98);
                    /* try { // try from 0068b52c to 0068b533 has its CatchHandler @ 0068c39c */
                        local_84 = 
                        "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
                        ;
                        ::operator+((QString *)local_1f0,(char *)&local_18c);
                    /* try { // try from 0068b54c to 0068b553 has its CatchHandler @ 0068c370 */
                        SerialObject::sendGcodeCmd(aQStack_100,uVar11,local_1f0,1,0,0,0);
                        QString::~QString(aQStack_100);
                        QString::~QString((QString *)local_1f0);
                        QString::~QString((QString *)&local_18c);
                        QString::~QString(aQStack_188);
                        QString::~QString((QString *)&local_184);
                        local_8c = *(float **)(in_a0 + 0x5c);
                    /* try { // try from 0068b590 to 0068b597 has its CatchHandler @ 0068b390 */
                        local_1f0[0] = (float)QString::fromAscii_helper("G1 X130 F1200",-1);
                    /* try { // try from 0068b5b8 to 0068b5bf has its CatchHandler @ 0068c368 */
                        SerialObject::sendGcodeCmd(aQStack_104,local_8c,local_1f0,1,0,0,0);
                        QString::~QString(aQStack_104);
                        QString::~QString((QString *)local_1f0);
                        local_8c = *(float **)(in_a0 + 0x5c);
                    /* try { // try from 0068b5e0 to 0068b5e7 has its CatchHandler @ 0068b390 */
                        local_1f0[0] = (float)QString::fromAscii_helper("G1 X150 F1200",-1);
                    /* try { // try from 0068b608 to 0068b60f has its CatchHandler @ 0068c340 */
                        SerialObject::sendGcodeCmd(aQStack_108,local_8c,local_1f0,1,0,0,0);
                        QString::~QString(aQStack_108);
                        QString::~QString((QString *)local_1f0);
                        local_54 = 0;
                        local_8c = *(float **)(in_a0 + 0x5c);
                        local_184 = &QString::shared_null;
                        QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 0068b680 to 0068b687 has its CatchHandler @ 0068c338 */
                        QString::number((double)CONCAT44(in_f13,in_f12),
                                        SUB81((double)(float)(dVar16 - _DAT_00adcbc0),0),
                                        (int)((ulonglong)(double)(float)(dVar16 - _DAT_00adcbc0) >>
                                             0x20));
                    /* try { // try from 0068b694 to 0068b69b has its CatchHandler @ 0068c348 */
                        ::operator+((char *)&local_18c,(QString *)(local_88 + -0x1c9a));
                    /* try { // try from 0068b6ac to 0068b6b3 has its CatchHandler @ 0068c330 */
                        ::operator+((QString *)local_1f0,(char *)&local_18c);
                    /* try { // try from 0068b6cc to 0068b6d3 has its CatchHandler @ 0068b924 */
                        SerialObject::sendGcodeCmd(aQStack_10c,local_8c,local_1f0,1,0,0,0);
                        QString::~QString(aQStack_10c);
                        QString::~QString((QString *)local_1f0);
                        QString::~QString((QString *)&local_18c);
                        QString::~QString(aQStack_188);
                        QString::~QString((QString *)&local_184);
                    /* try { // try from 0068b700 to 0068b77b has its CatchHandler @ 0068b390 */
                        SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x5c),0x8c);
                        sleep(2);
                        do {
                          iVar3 = SerialObject::waitArriveTemperature
                                            (*(SerialObject **)(in_a0 + 0x5c),false,true,false);
                          if (iVar3 != 0) {
                            local_7c = 
                            "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
                            ;
                            uVar11 = *(undefined4 *)(in_a0 + 0x5c);
                            local_1f0[0] = (float)QString::fromAscii_helper("M106 S0",-1);
                    /* try { // try from 0068b798 to 0068b79f has its CatchHandler @ 0068bab8 */
                            SerialObject::sendGcodeCmd(aQStack_110,uVar11,local_1f0,1,0,0,0);
                            QString::~QString(aQStack_110);
                            QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068b7bc to 0068b7c3 has its CatchHandler @ 0068b390 */
                            uVar11 = *(undefined4 *)(in_a0 + 0x5c);
                            local_1f0[0] = (float)QString::fromAscii_helper("G1 Z5 F6000",-1);
                    /* try { // try from 0068b7e0 to 0068b7e7 has its CatchHandler @ 0068bab0 */
                            SerialObject::sendGcodeCmd(aQStack_114,uVar11,local_1f0,1,0,0,0);
                            QString::~QString(aQStack_114);
                            QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068b800 to 0068b807 has its CatchHandler @ 0068b390 */
                            uVar11 = *(undefined4 *)(in_a0 + 0x5c);
                            local_1f0[0] = (float)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 0068b824 to 0068b82b has its CatchHandler @ 0068b950 */
                            SerialObject::sendGcodeCmd(aQStack_118,uVar11,local_1f0,1,0,0,0);
                            QString::~QString(aQStack_118);
                            QString::~QString((QString *)local_1f0);
                            uVar18 = (ulonglong)DAT_00adcba8;
                            uVar17 = (ulonglong)DAT_00afd66c;
                            local_84 = (char *)0x5;
                            local_78 = in_a0 + 0x124;
                            local_70 = in_a0 + 0x250;
                            local_64 = 
                            "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
                            ;
                            local_60 = "Level data abnormal!";
                            local_88 = &PTR_s_Internal_Server_Error_00b40000;
                            goto LAB_0068b894;
                          }
                          sleep(1);
                        } while (in_a0[0xa7] == (Print)0x0);
                      }
                    }
                    else {
                      QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068b288 to 0068b2e7 has its CatchHandler @ 0068b390 */
                      QMetaObject::tr((char *)&local_ec,(char *)&staticMetaObject);
                      uVar11 = *(undefined4 *)(in_a0 + 0x24);
                      *(undefined4 *)(in_a0 + 0x24) = local_ec;
                      local_ec = uVar11;
                      QString::~QString((QString *)&local_ec);
                    }
                  }
                  else {
                    QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068b084 to 0068b1b3 has its CatchHandler @ 0068b390 */
                    QMetaObject::tr((char *)&local_e8,(char *)&staticMetaObject);
                    uVar11 = *(undefined4 *)(in_a0 + 0x24);
                    *(undefined4 *)(in_a0 + 0x24) = local_e8;
                    local_e8 = uVar11;
                    QString::~QString((QString *)&local_e8);
                  }
                }
                else {
                  QString::~QString((QString *)local_1f0);
                  QMetaObject::tr((char *)&local_e4,(char *)&staticMetaObject);
                  uVar11 = *(undefined4 *)(in_a0 + 0x24);
                  *(undefined4 *)(in_a0 + 0x24) = local_e4;
                  local_e4 = uVar11;
                  QString::~QString((QString *)&local_e4);
                }
              }
              else {
                QString::~QString((QString *)local_1f0);
                QMetaObject::tr((char *)&local_e0,(char *)&staticMetaObject);
                uVar11 = *(undefined4 *)(in_a0 + 0x24);
                *(undefined4 *)(in_a0 + 0x24) = local_e0;
                local_e0 = uVar11;
                QString::~QString((QString *)&local_e0);
              }
            }
            else {
              QString::~QString((QString *)local_1f0);
              QMetaObject::tr((char *)&local_dc,(char *)&staticMetaObject);
              uVar11 = *(undefined4 *)(in_a0 + 0x24);
              *(undefined4 *)(in_a0 + 0x24) = local_dc;
              local_dc = uVar11;
              QString::~QString((QString *)&local_dc);
            }
          }
          else {
            QString::~QString((QString *)local_1f0);
            QMetaObject::tr((char *)&local_d8,(char *)&staticMetaObject);
            uVar11 = *(undefined4 *)(in_a0 + 0x24);
            *(undefined4 *)(in_a0 + 0x24) = local_d8;
            local_d8 = uVar11;
            QString::~QString((QString *)&local_d8);
          }
LAB_0068b0a8:
          QString::~QString(local_98);
          pSVar13 = *(SerialObject **)(in_a0 + 0x5c);
        }
      }
      goto LAB_0068aa90;
    }
    local_54 = 0;
                    /* try { // try from 0068a934 to 0068a96f has its CatchHandler @ 0068c3e4 */
    checkZ(in_a0,(float)in_f0_1,fVar2);
    local_54 = 0;
    SerialObject::printClearGoPos(in_f12,in_f14);
    uVar11 = *(undefined4 *)(in_a0 + 0x5c);
    local_1f0[0] = (float)QString::fromAscii_helper("BED_MESH_PROFILE LOAD=MESH_DATA",-1);
                    /* try { // try from 0068a98c to 0068a993 has its CatchHandler @ 0068c444 */
    SerialObject::sendGcodeCmd(aQStack_174,uVar11,local_1f0,1,0,0,0);
    QString::~QString(aQStack_174);
    QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068a9ac to 0068a9b3 has its CatchHandler @ 0068c3e4 */
    uVar11 = *(undefined4 *)(in_a0 + 0x5c);
    local_1f0[0] = (float)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 0068a9d0 to 0068a9d7 has its CatchHandler @ 0068c43c */
    SerialObject::sendGcodeCmd(aQStack_178,uVar11,local_1f0,1,0,0,0);
    QString::~QString(aQStack_178);
    QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068a9f4 to 0068a9fb has its CatchHandler @ 0068c3e4 */
    uVar11 = *(undefined4 *)(in_a0 + 0x5c);
    local_1f0[0] = (float)QString::fromAscii_helper("G1 Z50 F3000",-1);
                    /* try { // try from 0068aa18 to 0068aa1f has its CatchHandler @ 0068c434 */
    SerialObject::sendGcodeCmd(aQStack_17c,uVar11,local_1f0,1,0,0,0);
    QString::~QString(aQStack_17c);
    QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068aa38 to 0068aa3f has its CatchHandler @ 0068c3e4 */
    uVar11 = *(undefined4 *)(in_a0 + 0x5c);
    local_1f0[0] = (float)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 0068aa64 to 0068aa6b has its CatchHandler @ 0068c42c */
    SerialObject::sendGcodeCmd((QString *)&local_180,uVar11,local_1f0,1,0,0,0);
    QString::~QString((QString *)&local_180);
    QString::~QString((QString *)local_1f0);
    in_a0[0x98] = (Print)0x0;
    if (in_a0[0xa7] == (Print)0x0) goto LAB_0068a8b8;
  }
LAB_0068aa88:
  pSVar13 = *(SerialObject **)(in_a0 + 0x5c);
LAB_0068aa90:
                    /* try { // try from 0068aa94 to 0068aa9b has its CatchHandler @ 0068c3e4 */
  local_1f0[0] = (float)QString::fromAscii_helper("BED_MESH_PROFILE REMOVE=default",-1);
                    /* try { // try from 0068aabc to 0068aac3 has its CatchHandler @ 0068c3fc */
  SerialObject::sendGcodeCmd((QString *)&local_184,pSVar13,local_1f0,1,0,0,0);
  QString::~QString((QString *)&local_184);
  QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068aadc to 0068aae3 has its CatchHandler @ 0068c3e4 */
  uVar11 = *(undefined4 *)(in_a0 + 0x5c);
  local_1f0[0] = (float)QString::fromAscii_helper("BED_MESH_CLEAR",-1);
                    /* try { // try from 0068ab04 to 0068ab0b has its CatchHandler @ 0068c404 */
  SerialObject::sendGcodeCmd(aQStack_188,uVar11,local_1f0,1,0,0,0);
  QString::~QString(aQStack_188);
  QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068ab20 to 0068ab47 has its CatchHandler @ 0068c3e4 */
  SerialObject::setPlatformHeat(*(SerialObject **)(in_a0 + 0x5c),0);
  SerialObject::setRightNozzleTemp(*(SerialObject **)(in_a0 + 0x5c),0);
  uVar11 = *(undefined4 *)(in_a0 + 0x5c);
  local_1f0[0] = (float)QString::fromAscii_helper("M106 S0",-1);
                    /* try { // try from 0068ab68 to 0068ab6f has its CatchHandler @ 0068c40c */
  SerialObject::sendGcodeCmd((QString *)&local_18c,uVar11,local_1f0,1,0,0,0);
  QString::~QString((QString *)&local_18c);
  QString::~QString((QString *)local_1f0);
  in_a0[0x20] = (Print)0x1;
  QString::~QString((QString *)local_a0);
  return;
LAB_0068b894:
  pPVar12 = local_78;
  *(undefined4 *)(in_a0 + 0x370) = 0;
  *(undefined4 *)(in_a0 + 0x374) = 0;
  pPVar14 = local_78;
  do {
    local_54 = 0;
    *(undefined4 *)pPVar14 = 0;
    *(undefined4 *)(pPVar14 + 4) = 0;
    *(undefined4 *)(pPVar14 + 8) = 0;
    pPVar14 = pPVar14 + 0xc;
  } while (local_70 != pPVar14);
  if (in_a0[0xa7] == (Print)0x0) {
                    /* try { // try from 0068b8d8 to 0068b9af has its CatchHandler @ 0068b390 */
    iVar3 = SerialObject::checkLevelPinStatus(*(SerialObject **)(in_a0 + 0x5c));
    if (iVar3 != 0) {
      bVar1 = false;
      local_8c = (float *)(local_64 + -0x6a70);
      local_6c = "Probe triggered prior to movement.\nplease check level sensor.";
      local_68 = "mbda(bool, bool&)>; socket_t = int; size_t = unsigned int; time_t = long int]";
      do {
        SerialObject::cmdBedCalibration();
        uVar11 = local_180;
        local_180 = local_120;
        local_120 = uVar11;
        QString::~QString((QString *)&local_120);
        local_1f0[0] = (float)QString::fromAscii_helper(local_80 + -0x6ae0,-1);
                    /* try { // try from 0068b9c0 to 0068b9c7 has its CatchHandler @ 0068bbd0 */
        iVar3 = QString::indexOf(local_98,local_1f0,0,1);
        if (iVar3 == -1) {
          QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068bae0 to 0068bae7 has its CatchHandler @ 0068b390 */
          local_1f0[0] = (float)QString::fromAscii_helper(local_74 + -0x6ad4,-1);
                    /* try { // try from 0068baf8 to 0068baff has its CatchHandler @ 0068bce4 */
          iVar3 = QString::indexOf(local_98,local_1f0,0,1);
          if (iVar3 == -1) {
            QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068bbf4 to 0068bbfb has its CatchHandler @ 0068b390 */
            local_1f0[0] = (float)QString::fromAscii_helper((char *)local_8c,-1);
                    /* try { // try from 0068bc0c to 0068bc13 has its CatchHandler @ 0068bea4 */
            iVar3 = QString::indexOf(local_98,local_1f0,0,1);
            if (iVar3 == -1) goto LAB_0068bcfc;
            QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068bc38 to 0068bc73 has its CatchHandler @ 0068b390 */
            QMetaObject::tr((char *)&local_13c,(char *)(local_88 + 0x18d));
            uVar11 = *(undefined4 *)(in_a0 + 0x24);
            *(undefined4 *)(in_a0 + 0x24) = local_13c;
            local_13c = uVar11;
            QString::~QString((QString *)&local_13c);
            if (bVar1) goto LAB_0068b0a8;
            uVar11 = *(undefined4 *)(in_a0 + 0x5c);
            local_1f0[0] = (float)QString::fromAscii_helper(local_90 + -0x69d0,-1);
                    /* try { // try from 0068bc90 to 0068bc97 has its CatchHandler @ 0068bcf4 */
            SerialObject::sendGcodeCmd(aQStack_140,uVar11,local_1f0,1,0,0,0);
            QString::~QString(aQStack_140);
            QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068bcb0 to 0068bcb7 has its CatchHandler @ 0068b390 */
            uVar11 = *(undefined4 *)(in_a0 + 0x5c);
            local_1f0[0] = (float)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 0068bcd4 to 0068bcdb has its CatchHandler @ 0068bcec */
            SerialObject::sendGcodeCmd(aQStack_144,uVar11,local_1f0,1,0,0,0);
            pQVar9 = aQStack_144;
          }
          else {
            QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068bb24 to 0068bb5f has its CatchHandler @ 0068b390 */
            QMetaObject::tr((char *)&local_130,(char *)(local_88 + 0x18d));
            uVar11 = *(undefined4 *)(in_a0 + 0x24);
            *(undefined4 *)(in_a0 + 0x24) = local_130;
            local_130 = uVar11;
            QString::~QString((QString *)&local_130);
            if (bVar1) goto LAB_0068b0a8;
            uVar11 = *(undefined4 *)(in_a0 + 0x5c);
            local_1f0[0] = (float)QString::fromAscii_helper(local_90 + -0x69d0,-1);
                    /* try { // try from 0068bb7c to 0068bb83 has its CatchHandler @ 0068bbe0 */
            SerialObject::sendGcodeCmd(aQStack_134,uVar11,local_1f0,1,0,0,0);
            QString::~QString(aQStack_134);
            QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068bb9c to 0068bba3 has its CatchHandler @ 0068b390 */
            uVar11 = *(undefined4 *)(in_a0 + 0x5c);
            local_1f0[0] = (float)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 0068bbc0 to 0068bbc7 has its CatchHandler @ 0068bbd8 */
            SerialObject::sendGcodeCmd(aQStack_138,uVar11,local_1f0,1,0,0,0);
            pQVar9 = aQStack_138;
          }
        }
        else {
          QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068b9f0 to 0068ba2b has its CatchHandler @ 0068b390 */
          QMetaObject::tr((char *)&local_124,(char *)(local_88 + 0x18d));
          uVar11 = *(undefined4 *)(in_a0 + 0x24);
          *(undefined4 *)(in_a0 + 0x24) = local_124;
          local_124 = uVar11;
          QString::~QString((QString *)&local_124);
          if (bVar1) goto LAB_0068b0a8;
          uVar11 = *(undefined4 *)(in_a0 + 0x5c);
          local_1f0[0] = (float)QString::fromAscii_helper(local_90 + -0x69d0,-1);
                    /* try { // try from 0068ba48 to 0068ba4f has its CatchHandler @ 0068bac8 */
          SerialObject::sendGcodeCmd(aQStack_128,uVar11,local_1f0,1,0,0,0);
          QString::~QString(aQStack_128);
          QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068ba68 to 0068ba6f has its CatchHandler @ 0068b390 */
          uVar11 = *(undefined4 *)(in_a0 + 0x5c);
          local_1f0[0] = (float)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 0068ba8c to 0068ba93 has its CatchHandler @ 0068bac0 */
          SerialObject::sendGcodeCmd(aQStack_12c,uVar11,local_1f0,1,0,0,0);
          pQVar9 = aQStack_12c;
        }
        bVar1 = true;
        QString::~QString(pQVar9);
        QString::~QString((QString *)local_1f0);
      } while( true );
    }
    QMetaObject::tr((char *)&local_11c,(char *)&staticMetaObject);
    uVar11 = *(undefined4 *)(in_a0 + 0x24);
    *(undefined4 *)(in_a0 + 0x24) = local_11c;
    local_11c = uVar11;
    QString::~QString((QString *)&local_11c);
  }
  goto LAB_0068b0a8;
LAB_0068bcfc:
  QString::~QString((QString *)local_1f0);
  if (in_a0[0xa7] != (Print)0x0) {
                    /* try { // try from 0068c264 to 0068c26b has its CatchHandler @ 0068b390 */
    uVar11 = *(undefined4 *)(in_a0 + 0x5c);
    local_1f0[0] = (float)QString::fromAscii_helper("BED_MESH_PROFILE REMOVE=default",-1);
                    /* try { // try from 0068c288 to 0068c28f has its CatchHandler @ 0068c360 */
    SerialObject::sendGcodeCmd(aQStack_148,uVar11,local_1f0,1,0,0,0);
    QString::~QString(aQStack_148);
    QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068c2a8 to 0068c2af has its CatchHandler @ 0068b390 */
    uVar11 = *(undefined4 *)(in_a0 + 0x5c);
    local_1f0[0] = (float)QString::fromAscii_helper("BED_MESH_CLEAR",-1);
                    /* try { // try from 0068c2cc to 0068c2d3 has its CatchHandler @ 0068c358 */
    SerialObject::sendGcodeCmd(aQStack_14c,uVar11,local_1f0,1,0,0,0);
    QString::~QString(aQStack_14c);
    QString::~QString((QString *)local_1f0);
                    /* try { // try from 0068c2ec to 0068c2f3 has its CatchHandler @ 0068b390 */
    uVar11 = *(undefined4 *)(in_a0 + 0x5c);
    local_1f0[0] = (float)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 0068c310 to 0068c317 has its CatchHandler @ 0068c350 */
    SerialObject::sendGcodeCmd(aQStack_150,uVar11,local_1f0,1,0,0,0);
    QString::~QString(aQStack_150);
    QString::~QString((QString *)local_1f0);
    goto LAB_0068b0a8;
  }
  memset(local_1f0,0,100);
  local_8c = local_1f0;
  local_6c = local_94 + -0x29f0;
  do {
    local_54 = 0;
    fVar2 = (*(float *)pPVar12 + *(float *)(pPVar12 + 4) + *(float *)(pPVar12 + 8)) / (float)uVar18;
                    /* try { // try from 0068bd6c to 0068bd73 has its CatchHandler @ 0068b390 */
    *local_8c = fVar2;
    QDebug::QDebug((QDebug *)&local_18c,0);
                    /* try { // try from 0068bd78 to 0068bda7 has its CatchHandler @ 0068c244 */
    pQVar6 = (QDebug *)QDebug::operator<<((QDebug *)&local_18c,local_6c);
    pQVar6 = (QDebug *)QDebug::operator<<(pQVar6,"value: ");
    local_54 = 0;
    QDebug::operator<<(pQVar6,fVar2);
    pPVar12 = pPVar12 + 0xc;
    local_8c = local_8c + 1;
    QDebug::~QDebug((QDebug *)&local_18c);
  } while (pPVar14 != pPVar12);
                    /* try { // try from 0068bdd0 to 0068bdd7 has its CatchHandler @ 0068b390 */
  uVar11 = *(undefined4 *)(in_a0 + 0x5c);
  local_18c = QString::fromAscii_helper("BED_MESH_OUTPUT PGP=0",-1);
                    /* try { // try from 0068bdf4 to 0068bdfb has its CatchHandler @ 0068c230 */
  SerialObject::sendGcodeCmd(aQStack_188,uVar11,(QString *)&local_18c,1,0,0,0);
  QString::~QString((QString *)&local_18c);
                    /* try { // try from 0068be08 to 0068be0f has its CatchHandler @ 0068c228 */
  QDebug::QDebug((QDebug *)&local_18c,0);
                    /* try { // try from 0068be18 to 0068be3b has its CatchHandler @ 0068bfb0 */
  pQVar6 = (QDebug *)QDebug::operator<<((QDebug *)&local_18c,local_94 + -0x29f0);
  pQVar6 = (QDebug *)QDebug::operator<<(pQVar6,"mesh_output: ");
  QDebug::operator<<(pQVar6,aQStack_188);
  QDebug::~QDebug((QDebug *)&local_18c);
  iVar3 = 0x18;
  do {
    pfVar7 = local_1f0;
    iVar10 = 0;
    while (iVar10 < iVar3) {
      local_54 = 0;
      fVar2 = (float)*(undefined8 *)pfVar7;
      fVar15 = (float)((ulonglong)*(undefined8 *)pfVar7 >> 0x20);
      iVar10 = iVar10 + 1;
      if (fVar15 < fVar2) {
        *pfVar7 = fVar15;
        pfVar7[1] = fVar2;
      }
      pfVar7 = pfVar7 + 1;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  if ((local_1f0[0] <= (float)uVar17) && (local_54 = 0, local_190 - local_1f0[0] <= (float)uVar17))
  {
                    /* try { // try from 0068bfd4 to 0068bfdb has its CatchHandler @ 0068c228 */
    uVar11 = *(undefined4 *)(in_a0 + 0x5c);
    local_18c = QString::fromAscii_helper("BED_MESH_PROFILE LOAD=default",-1);
                    /* try { // try from 0068bff8 to 0068bfff has its CatchHandler @ 0068c210 */
    SerialObject::sendGcodeCmd(aQStack_168,uVar11,(QString *)&local_18c,1,0,0,0);
    QString::~QString(aQStack_168);
    QString::~QString((QString *)&local_18c);
                    /* try { // try from 0068c018 to 0068c01f has its CatchHandler @ 0068c228 */
    uVar11 = *(undefined4 *)(in_a0 + 0x5c);
    local_18c = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 0068c03c to 0068c043 has its CatchHandler @ 0068c208 */
    SerialObject::sendGcodeCmd(aQStack_16c,uVar11,(QString *)&local_18c,1,0,0,0);
    QString::~QString(aQStack_16c);
    QString::~QString((QString *)&local_18c);
                    /* try { // try from 0068c054 to 0068c06f has its CatchHandler @ 0068c228 */
    saveLevelPrintData();
    uVar11 = *(undefined4 *)(in_a0 + 0x5c);
    local_18c = QString::fromAscii_helper(local_7c + -0x6918,-1);
                    /* try { // try from 0068c08c to 0068c093 has its CatchHandler @ 0068c1dc */
    SerialObject::sendGcodeCmd(aQStack_170,uVar11,(QString *)&local_18c,1,0,0,0);
    QString::~QString(aQStack_170);
    QString::~QString((QString *)&local_18c);
    local_54 = 0;
                    /* try { // try from 0068c0c4 to 0068c0f3 has its CatchHandler @ 0068c228 */
    in_a0[0x98] = (Print)0x1;
    SerialObject::printClearGoPos(in_f12,in_f14);
    goto LAB_0068c0cc;
  }
  local_54 = 0;
                    /* try { // try from 0068bf08 to 0068bf0f has its CatchHandler @ 0068c228 */
  uVar11 = *(undefined4 *)(in_a0 + 0x5c);
  local_18c = QString::fromAscii_helper("BED_MESH_PROFILE REMOVE=default",-1);
                    /* try { // try from 0068bf2c to 0068bf33 has its CatchHandler @ 0068c220 */
  SerialObject::sendGcodeCmd(aQStack_154,uVar11,(QString *)&local_18c,1,0,0,0);
  QString::~QString(aQStack_154);
  QString::~QString((QString *)&local_18c);
                    /* try { // try from 0068bf4c to 0068bf53 has its CatchHandler @ 0068c228 */
  uVar11 = *(undefined4 *)(in_a0 + 0x5c);
  local_18c = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 0068bf70 to 0068bf77 has its CatchHandler @ 0068c218 */
  SerialObject::sendGcodeCmd(aQStack_158,uVar11,(QString *)&local_18c,1,0,0,0);
  pcVar8 = local_84 + -1;
  local_84 = pcVar8;
  QString::~QString(aQStack_158);
  QString::~QString((QString *)&local_18c);
  if (pcVar8 == (char *)0x0) goto LAB_0068c0e4;
  QString::~QString(aQStack_188);
  goto LAB_0068b894;
LAB_0068c0e4:
  uVar11 = *(undefined4 *)(in_a0 + 0x5c);
  local_18c = QString::fromAscii_helper("BED_MESH_PROFILE LOAD=MESH_DATA",-1);
                    /* try { // try from 0068c110 to 0068c117 has its CatchHandler @ 0068c200 */
  SerialObject::sendGcodeCmd(aQStack_15c,uVar11,(QString *)&local_18c,1,0,0,0);
  QString::~QString(aQStack_15c);
  QString::~QString((QString *)&local_18c);
                    /* try { // try from 0068c130 to 0068c137 has its CatchHandler @ 0068c228 */
  uVar11 = *(undefined4 *)(in_a0 + 0x5c);
  local_18c = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 0068c154 to 0068c15b has its CatchHandler @ 0068c1f8 */
  SerialObject::sendGcodeCmd(aQStack_160,uVar11,(QString *)&local_18c,1,0,0,0);
  QString::~QString(aQStack_160);
  QString::~QString((QString *)&local_18c);
  uVar11 = *(undefined4 *)(in_a0 + 0x5c);
                    /* try { // try from 0068c178 to 0068c17f has its CatchHandler @ 0068c228 */
  local_18c = QString::fromAscii_helper(local_7c + -0x6918,-1);
                    /* try { // try from 0068c19c to 0068c1a3 has its CatchHandler @ 0068c1f0 */
  SerialObject::sendGcodeCmd(aQStack_164,uVar11,(QString *)&local_18c,1,0,0,0);
  QString::~QString(aQStack_164);
  QString::~QString((QString *)&local_18c);
  local_54 = 0;
                    /* try { // try from 0068c1cc to 0068c1d3 has its CatchHandler @ 0068c228 */
  SerialObject::printClearGoPos(in_f12,in_f14);
  in_a0[0x98] = (Print)0x0;
LAB_0068c0cc:
  QString::~QString(aQStack_188);
  QString::~QString(local_98);
LAB_0068a8b8:
  QString::~QString((QString *)local_a0);
  return;
}



// ===== _GLOBAL__sub_I_pthreadChangeChannel @ 005033bc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* pthreadChangeChannel(void*) */

void _GLOBAL__sub_I_pthreadChangeChannel(void)

{
  allocator *paVar1;
  
  ICON_PATH = QString::fromAscii_helper(":/res/icon/",-1);
  __cxa_atexit(QString::~QString,&ICON_PATH,&__dso_handle);
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  paVar1 = (allocator *)&__dso_handle;
  __cxa_atexit(&LAB_00d4fe90,&std::__ioinit);
  std::__cxx11::string::string((string *)mqtt::VERSION_STR,"Paho MQTT C++ (mqttpp) v. 1.2",paVar1);
  paVar1 = (allocator *)&__dso_handle;
  __cxa_atexit(std::__cxx11::string::~string,mqtt::VERSION_STR);
  std::__cxx11::string::string
            ((string *)mqtt::COPYRIGHT,"Copyright (c) 2013-2020 Frank Pagliughi",paVar1);
  __cxa_atexit(std::__cxx11::string::~string,mqtt::COPYRIGHT,&__dso_handle);
  return;
}


// ===== calc_flush_vol @ 005cc724

/* calc_flush_vol(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char,
   unsigned char, unsigned char, unsigned char) */

int calc_flush_vol(uchar param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5,
                  uchar param_6,uchar param_7,uchar param_8)

{
  int iVar1;
  undefined3 in_register_00000011;
  undefined3 in_register_00000015;
  undefined3 in_register_00000019;
  undefined3 in_register_0000001d;
  float fVar2;
  float fVar4;
  double dVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  double local_68;
  double local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_3c;
  
  if (CONCAT31(in_register_00000011,param_1) == 0) {
    local_44 = DAT_00acd1b0;
    local_48 = DAT_00acd1b0;
    fVar2 = DAT_00acd1b0;
  }
  else {
    local_44 = (float)CONCAT31(in_register_00000019,param_3) / DAT_00ae6c38;
    local_48 = (float)CONCAT31(in_register_00000015,param_2) / DAT_00ae6c38;
    fVar2 = (float)CONCAT31(in_register_0000001d,param_4) / DAT_00ae6c38;
  }
  if (param_5 == '\0') {
    fVar6 = DAT_00acd1b0;
    fVar8 = DAT_00acd1b0;
    fVar9 = DAT_00acd1b0;
  }
  else {
    fVar6 = (float)param_6 / DAT_00ae6c38;
    fVar8 = (float)param_7 / DAT_00ae6c38;
    fVar9 = (float)param_8 / DAT_00ae6c38;
  }
  local_3c = 0;
  RGB2HSV(local_48,local_44,fVar2,&local_74,&local_78,&local_7c);
  local_3c = 0;
  RGB2HSV(fVar6,fVar8,fVar9,&local_80,&local_84,&local_88);
  local_3c = 0;
  local_4c = local_78;
  local_50 = local_7c;
  local_54 = local_84;
  local_58 = local_88;
  local_60 = 0.0;
  local_68 = DAT_00ae6bf8;
  fVar4 = DAT_00ae6c3c;
  sincosf((float)((double)(local_74 / DAT_00ae6c3c) * DAT_00ae6bf8 + 0.0),&local_70,&local_6c);
  local_3c = 0;
  fVar5 = local_70;
  fVar7 = local_6c;
  sincosf((float)((double)(local_80 / fVar4) * local_68 + local_60),&local_70,&local_6c);
  fVar4 = fVar5 * local_4c * local_50 - local_70 * local_54 * local_58;
  fVar5 = fVar7 * local_4c * local_50 - local_6c * local_54 * local_58;
  fVar5 = fVar5 * fVar5 + fVar4 * fVar4;
  fVar4 = SQRT(fVar5);
  if (fVar5 < 0.0) {
    local_3c = 0;
    local_60 = (double)CONCAT44(local_60._4_4_,local_44);
    local_68 = (double)CONCAT44(local_68._4_4_,local_48);
    sqrtf(fVar5);
  }
  dVar3 = (double)CONCAT44(DAT_00ae6c34,
                           SUB84((double)fVar8 * DAT_00ae6c08 + 0.0 +
                                 (double)fVar6 * DAT_00ae6c00 + 0.0,0)) +
          (double)fVar9 * DAT_00ae6c10 + 0.0;
  fVar6 = (float)((double)(float)((ulonglong)DAT_00ae6c00 >> 0x20) * DAT_00ae6c00 + 0.0 +
                  DAT_00ae6c08 * 0.0 + 0.0 + (double)fVar2 * DAT_00ae6c10 + 0.0);
  fVar2 = (float)dVar3;
  if (fVar2 < fVar6) {
    fVar4 = (float)((ulonglong)dVar3 >> 0x20);
    fVar2 = (fVar6 - fVar2) * DAT_00ae6c48;
    fVar6 = (float)((double)local_88 * DAT_00ae6c18 + 0.0 + (double)local_7c * DAT_00ae6c20 + 0.0);
    if (fVar6 <= fVar4) {
      fVar4 = fVar6;
    }
  }
  else {
    local_3c = 0;
    fVar2 = powf(fVar2 - fVar6,DAT_00ae6c40);
    fVar2 = fVar2 * DAT_00ae6c44;
  }
  fVar4 = fVar4 * DAT_00ae6c4c;
  fVar2 = (fVar4 * fVar4 + fVar2 * fVar2) - (fVar4 + fVar4) * fVar2 * DAT_00ae6c50;
  fVar6 = SQRT(fVar2);
  if (fVar2 < 0.0) {
    local_3c = 0;
    sqrtf(fVar2);
  }
  iVar1 = 0x3c;
  if ((DAT_00ae6c2c <= fVar6) && (iVar1 = (int)(fVar6 + 0.0), 800 < iVar1)) {
    iVar1 = 800;
  }
  return iVar1;
}


// ===== SerialObject::getFilamentTypeUnloadSpeed @ 005e4070

/* SerialObject::getFilamentTypeUnloadSpeed(int) */

undefined4 SerialObject::getFilamentTypeUnloadSpeed(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *local_20;
  QString aQStack_1c [4];
  undefined4 local_18;
  undefined4 local_14 [2];
  
  local_14[0] = QString::fromAscii_helper("PLA",-1);
                    /* try { // try from 005e40a8 to 005e40eb has its CatchHandler @ 005e4188 */
  getChnFilamentType((int)&local_18);
  uVar2 = local_14[0];
  local_14[0] = local_18;
  local_18 = uVar2;
  QString::~QString((QString *)&local_18);
  if (QString::codecForCStrings == 0) {
    local_20 = &DAT_00adcde8;
    iVar1 = QString::operator==((QString *)local_14,(QLatin1String *)&local_20);
  }
  else {
    QString::fromAscii((char *)aQStack_1c,0xadcde8);
                    /* try { // try from 005e40f4 to 005e40fb has its CatchHandler @ 005e419c */
    iVar1 = QString::operator==((QString *)local_14,aQStack_1c);
    QString::~QString(aQStack_1c);
  }
  if (iVar1 == 0) {
                    /* try { // try from 005e4114 to 005e417f has its CatchHandler @ 005e4188 */
    iVar1 = qStringComparisonHelper((QString *)local_14,(char *)&PTR_LAB_00adcdf0);
    uVar2 = 200;
    if (iVar1 != 0) goto LAB_005e4124;
    iVar1 = qStringComparisonHelper((QString *)local_14,"SILK");
    uVar2 = 600;
    if (iVar1 == 0) goto LAB_005e4124;
  }
  uVar2 = 300;
LAB_005e4124:
  QString::~QString((QString *)local_14);
  return uVar2;
}


// ===== SerialObject::getFilamentTypeUnloadSpace @ 005e41b0

/* SerialObject::getFilamentTypeUnloadSpace(int) */

undefined4 SerialObject::getFilamentTypeUnloadSpace(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *local_20;
  QString aQStack_1c [4];
  undefined4 local_18;
  undefined4 local_14 [2];
  
  local_14[0] = QString::fromAscii_helper("PLA",-1);
                    /* try { // try from 005e41e8 to 005e422b has its CatchHandler @ 005e42bc */
  getChnFilamentType((int)&local_18);
  uVar1 = local_14[0];
  local_14[0] = local_18;
  local_18 = uVar1;
  QString::~QString((QString *)&local_18);
  if (QString::codecForCStrings == 0) {
    local_20 = &DAT_00adcde8;
    iVar2 = QString::operator==((QString *)local_14,(QLatin1String *)&local_20);
  }
  else {
    QString::fromAscii((char *)aQStack_1c,0xadcde8);
                    /* try { // try from 005e4234 to 005e423b has its CatchHandler @ 005e42d0 */
    iVar2 = QString::operator==((QString *)local_14,aQStack_1c);
    QString::~QString(aQStack_1c);
  }
                    /* try { // try from 005e4254 to 005e42b3 has its CatchHandler @ 005e42bc */
  if ((iVar2 == 0) &&
     (iVar2 = qStringComparisonHelper((QString *)local_14,(char *)&PTR_LAB_00adcdf0), iVar2 == 0)) {
    qStringComparisonHelper((QString *)local_14,"SILK");
  }
  QString::~QString((QString *)local_14);
  return 0x3c;
}


// ===== SerialObject::flushFilamentSecond @ 005ee3ec

/* SerialObject::flushFilamentSecond(int, int) */

void SerialObject::flushFilamentSecond(int param_1,int param_2)

{
  int iVar1;
  QString aQStack_40 [4];
  undefined4 local_3c;
  QString aQStack_38 [4];
  undefined4 *local_34;
  QString aQStack_30 [4];
  QString aQStack_2c [4];
  QString aQStack_28 [4];
  undefined4 *local_24 [2];
  
  iVar1 = getFilamentTypeFristSpeed((SerialObject *)param_1,param_2,true);
  local_34 = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005ee448 to 005ee44f has its CatchHandler @ 005ee704 */
  QString::number((int)aQStack_38,iVar1);
                    /* try { // try from 005ee45c to 005ee463 has its CatchHandler @ 005ee7d4 */
  ::operator+((char *)&local_3c,(QString *)"M106 S");
                    /* try { // try from 005ee47c to 005ee483 has its CatchHandler @ 005ee7cc */
  sendGcodeCmd(aQStack_40,param_1,&local_3c,1,0,0,0);
  QString::~QString(aQStack_40);
  QString::~QString((QString *)&local_3c);
  iVar1 = 3;
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  do {
    if (*(char *)(param_1 + 0x2e3) != '\0') break;
    iVar1 = iVar1 + -1;
    sleep(1);
  } while (iVar1 != 0);
  local_3c = QString::fromAscii_helper("G92 E0",-1);
                    /* try { // try from 005ee4f4 to 005ee4fb has its CatchHandler @ 005ee7c4 */
  sendGcodeCmd(aQStack_40,param_1,&local_3c,1,0,0,0);
  QString::~QString(aQStack_40);
  QString::~QString((QString *)&local_3c);
  iVar1 = getFilamentTypeSecondSpeed((SerialObject *)param_1,param_2,false);
  local_24[0] = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005ee544 to 005ee54b has its CatchHandler @ 005ee7bc */
  QString::number((int)aQStack_28,0x5a);
                    /* try { // try from 005ee558 to 005ee55f has its CatchHandler @ 005ee7b4 */
  ::operator+((char *)aQStack_2c,(QString *)&DAT_00ad97cc);
                    /* try { // try from 005ee56c to 005ee573 has its CatchHandler @ 005ee7ac */
  ::operator+(aQStack_30,(char *)aQStack_2c);
  local_34 = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005ee598 to 005ee59f has its CatchHandler @ 005ee7a4 */
  QString::number((int)aQStack_38,iVar1);
                    /* try { // try from 005ee5a8 to 005ee5af has its CatchHandler @ 005ee79c */
  ::operator+((QString *)&local_3c,aQStack_30);
                    /* try { // try from 005ee5c8 to 005ee5cf has its CatchHandler @ 005ee758 */
  sendGcodeCmd(aQStack_40,param_1,&local_3c,1,0,0,0);
  QString::~QString(aQStack_40);
  QString::~QString((QString *)&local_3c);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  QString::~QString(aQStack_30);
  QString::~QString(aQStack_2c);
  QString::~QString(aQStack_28);
  QString::~QString((QString *)local_24);
  local_3c = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005ee63c to 005ee643 has its CatchHandler @ 005ee744 */
  sendGcodeCmd(aQStack_40,param_1,&local_3c,1,0,0,0);
  QString::~QString(aQStack_40);
  QString::~QString((QString *)&local_3c);
  iVar1 = getFilamentTypeSecondSpeed((SerialObject *)param_1,param_2,true);
  local_34 = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005ee688 to 005ee68f has its CatchHandler @ 005ee73c */
  QString::number((int)aQStack_38,iVar1);
                    /* try { // try from 005ee698 to 005ee69f has its CatchHandler @ 005ee734 */
  ::operator+((char *)&local_3c,(QString *)"M106 S");
                    /* try { // try from 005ee6b8 to 005ee6bf has its CatchHandler @ 005ee718 */
  sendGcodeCmd(aQStack_40,param_1,&local_3c,1,0,0,0);
  QString::~QString(aQStack_40);
  QString::~QString((QString *)&local_3c);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  return;
}


// ===== SerialObject::flushFilamentBrush @ 005ee7dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SerialObject::flushFilamentBrush(bool, float, float) */

void SerialObject::flushFilamentBrush(bool param_1,float param_2,float param_3)

{
  undefined3 in_register_00000011;
  int iVar1;
  uint in_a3;
  int iVar2;
  double in_f12_13;
  float fVar3;
  ulonglong uVar4;
  double dVar5;
  float fVar6;
  ulonglong uVar7;
  QString aQStack_58 [4];
  undefined4 local_54;
  QString aQStack_50 [4];
  QString aQStack_4c [4];
  undefined4 *local_48 [3];
  undefined4 local_3c;
  
  iVar1 = CONCAT31(in_register_00000011,param_1);
  local_3c = 0;
  uVar7 = (ulonglong)(uint)param_3;
  uVar4 = (ulonglong)in_a3;
  iVar2 = 3;
  do {
    fVar6 = (float)uVar7;
    fVar3 = (float)uVar4;
    if (*(char *)(iVar1 + 0x2e3) != '\0') break;
    iVar2 = iVar2 + -1;
    sleep(1);
    fVar6 = (float)uVar7;
    fVar3 = (float)uVar4;
  } while (iVar2 != 0);
  if (param_2 != 0.0) {
    local_54 = QString::fromAscii_helper("G92 E0",-1);
                    /* try { // try from 005eed00 to 005eed07 has its CatchHandler @ 005eee14 */
    sendGcodeCmd(aQStack_58,iVar1,(QString *)&local_54,1,0,0,0);
    QString::~QString(aQStack_58);
    QString::~QString((QString *)&local_54);
    local_54 = QString::fromAscii_helper("G1 E-3 F300",-1);
                    /* try { // try from 005eed44 to 005eed4b has its CatchHandler @ 005eee0c */
    sendGcodeCmd(aQStack_58,iVar1,(QString *)&local_54,1,0,0,0);
    QString::~QString(aQStack_58);
    QString::~QString((QString *)&local_54);
    local_54 = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005eed88 to 005eed8f has its CatchHandler @ 005eee04 */
    sendGcodeCmd(aQStack_58,iVar1,(QString *)&local_54,1,0,0,0);
    QString::~QString(aQStack_58);
    QString::~QString((QString *)&local_54);
    local_54 = QString::fromAscii_helper("G92 E0",-1);
                    /* try { // try from 005eedc8 to 005eedcf has its CatchHandler @ 005eedfc */
    sendGcodeCmd(aQStack_58,iVar1,(QString *)&local_54,1,0,0,0);
    QString::~QString(aQStack_58);
    QString::~QString((QString *)&local_54);
  }
  local_54 = QString::fromAscii_helper("G1 Y220 F12000",-1);
                    /* try { // try from 005ee8b4 to 005ee8bb has its CatchHandler @ 005eede8 */
  sendGcodeCmd(aQStack_58,iVar1,(QString *)&local_54,1,0,0,0);
  QString::~QString(aQStack_58);
  QString::~QString((QString *)&local_54);
  local_48[0] = (undefined4 *)QString::fromAscii_helper("%1",-1);
  local_3c = 0;
  dVar5 = (double)(fVar3 + _DAT_00ae04f8);
                    /* try { // try from 005ee918 to 005ee91f has its CatchHandler @ 005eeed4 */
  QString::number(in_f12_13,SUB81(dVar5,0),(int)((ulonglong)dVar5 >> 0x20));
                    /* try { // try from 005ee92c to 005ee933 has its CatchHandler @ 005eeecc */
  ::operator+((char *)aQStack_50,(QString *)&DAT_00ad8d80);
                    /* try { // try from 005ee940 to 005ee947 has its CatchHandler @ 005eeec4 */
  ::operator+((QString *)&local_54,(char *)aQStack_50);
                    /* try { // try from 005ee960 to 005ee967 has its CatchHandler @ 005eeebc */
  sendGcodeCmd(aQStack_58,iVar1,(QString *)&local_54,1,0,0,0);
  QString::~QString(aQStack_58);
  QString::~QString((QString *)&local_54);
  QString::~QString(aQStack_50);
  QString::~QString(aQStack_4c);
  QString::~QString((QString *)local_48);
  local_54 = QString::fromAscii_helper("G1 Y220 F12000",-1);
                    /* try { // try from 005ee9b8 to 005ee9bf has its CatchHandler @ 005eeeb4 */
  sendGcodeCmd(aQStack_58,iVar1,(QString *)&local_54,1,0,0,0);
  QString::~QString(aQStack_58);
  QString::~QString((QString *)&local_54);
  local_48[0] = (undefined4 *)QString::fromAscii_helper("%1",-1);
  local_3c = 0;
                    /* try { // try from 005eea08 to 005eea0f has its CatchHandler @ 005eeeac */
  QString::number(in_f12_13,SUB81(dVar5,0),(int)((ulonglong)dVar5 >> 0x20));
                    /* try { // try from 005eea18 to 005eea1f has its CatchHandler @ 005eeea4 */
  ::operator+((char *)aQStack_50,(QString *)&DAT_00ad8d80);
                    /* try { // try from 005eea28 to 005eea2f has its CatchHandler @ 005eee9c */
  ::operator+((QString *)&local_54,(char *)aQStack_50);
                    /* try { // try from 005eea48 to 005eea4f has its CatchHandler @ 005eee94 */
  sendGcodeCmd(aQStack_58,iVar1,(QString *)&local_54,1,0,0,0);
  QString::~QString(aQStack_58);
  QString::~QString((QString *)&local_54);
  QString::~QString(aQStack_50);
  QString::~QString(aQStack_4c);
  QString::~QString((QString *)local_48);
  local_54 = QString::fromAscii_helper("G1 Y220 F12000",-1);
                    /* try { // try from 005eeaa0 to 005eeaa7 has its CatchHandler @ 005eee8c */
  sendGcodeCmd(aQStack_58,iVar1,(QString *)&local_54,1,0,0,0);
  QString::~QString(aQStack_58);
  QString::~QString((QString *)&local_54);
  if (param_2 == 0.0) {
    local_3c = 0;
    local_48[0] = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005eeb1c to 005eeb23 has its CatchHandler @ 005eee84 */
    QString::number(in_f12_13,SUB81((double)fVar6 + DAT_00ae04f0,0),
                    (int)((ulonglong)((double)fVar6 + DAT_00ae04f0) >> 0x20));
                    /* try { // try from 005eeb30 to 005eeb37 has its CatchHandler @ 005eee7c */
    ::operator+((char *)aQStack_50,(QString *)&DAT_00ad8d90);
                    /* try { // try from 005eeb44 to 005eeb4b has its CatchHandler @ 005eee74 */
    ::operator+((QString *)&local_54,(char *)aQStack_50);
                    /* try { // try from 005eeb64 to 005eeb6b has its CatchHandler @ 005eee6c */
    sendGcodeCmd(aQStack_58,iVar1,(QString *)&local_54,1,0,0,0);
    QString::~QString(aQStack_58);
    QString::~QString((QString *)&local_54);
    QString::~QString(aQStack_50);
    QString::~QString(aQStack_4c);
    QString::~QString((QString *)local_48);
    local_48[0] = (undefined4 *)QString::fromAscii_helper("%1",-1);
    local_3c = 0;
                    /* try { // try from 005eebcc to 005eebd3 has its CatchHandler @ 005eee64 */
    QString::number(in_f12_13,SUB81(dVar5,0),(int)((ulonglong)dVar5 >> 0x20));
                    /* try { // try from 005eebdc to 005eebe3 has its CatchHandler @ 005eee5c */
    ::operator+((char *)aQStack_50,(QString *)&DAT_00ad8d80);
                    /* try { // try from 005eebec to 005eebf3 has its CatchHandler @ 005eee54 */
    ::operator+((QString *)&local_54,(char *)aQStack_50);
                    /* try { // try from 005eec0c to 005eec13 has its CatchHandler @ 005eee24 */
    sendGcodeCmd(aQStack_58,iVar1,(QString *)&local_54,1,0,0,0);
    QString::~QString(aQStack_58);
    QString::~QString((QString *)&local_54);
    QString::~QString(aQStack_50);
    QString::~QString(aQStack_4c);
    QString::~QString((QString *)local_48);
  }
  local_54 = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005eec68 to 005eec6f has its CatchHandler @ 005eee1c */
  sendGcodeCmd(aQStack_58,iVar1,(QString *)&local_54,1,0,0,0);
  QString::~QString(aQStack_58);
  QString::~QString((QString *)&local_54);
  return;
}


// ===== SerialObject::checkRefulling @ 005f1d84

/* SerialObject::checkRefulling(int) */

undefined4 __thiscall SerialObject::checkRefulling(SerialObject *this,int param_1)

{
  QTextStream *pQVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  Data *local_58;
  Data *local_54;
  Data *local_50;
  Data *local_4c;
  Data *local_48;
  QTextStream *local_44;
  Data *local_40 [2];
  char *local_38;
  undefined4 *local_34;
  char *local_30;
  
  this[0x2f0] = (SerialObject)0x1;
  local_38 = 
  "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
  ;
  local_34 = &QString::shared_null;
  iVar5 = 0;
  local_30 = "../ad5x/serial/SerialObject.cpp";
  do {
    local_58 = (Data *)QString::fromAscii_helper(local_38 + -0x2424,-1);
                    /* try { // try from 005f1e10 to 005f1e17 has its CatchHandler @ 005f2464 */
    sendCmdToUart4(local_40,this,&local_58);
    iVar2 = *(int *)local_58;
    *(int *)local_58 = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_58);
    }
                    /* try { // try from 005f1e40 to 005f1e47 has its CatchHandler @ 005f245c */
    pQVar1 = operator_new(0x18);
                    /* try { // try from 005f1e5c to 005f1e63 has its CatchHandler @ 005f2448 */
    local_44 = (QTextStream *)0x2;
    QTextStream::QTextStream(pQVar1,pQVar1 + 8,&local_44);
    *(undefined4 **)(pQVar1 + 8) = local_34;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar1 + 0xc) = 1;
    *(undefined4 *)(pQVar1 + 0x10) = 0;
    pQVar1[0x14] = (QTextStream)0x1;
    pQVar1[0x15] = (QTextStream)0x1;
    local_44 = pQVar1;
                    /* try { // try from 005f1ea4 to 005f1eab has its CatchHandler @ 005f2440 */
    QString::fromAscii((char *)&local_48,(int)local_30);
                    /* try { // try from 005f1eb0 to 005f1eb7 has its CatchHandler @ 005f242c */
    QTextStream::operator<<(pQVar1,(QString *)&local_48);
    iVar2 = *(int *)local_48;
    *(int *)local_48 = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_48);
    }
    if (local_44[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_44,' ');
    }
    pQVar1 = local_44;
                    /* try { // try from 005f1ef8 to 005f1eff has its CatchHandler @ 005f2440 */
    QString::fromAscii((char *)&local_4c,0xaeac6c);
                    /* try { // try from 005f1f04 to 005f1f0b has its CatchHandler @ 005f2418 */
    QTextStream::operator<<(pQVar1,(QString *)&local_4c);
    iVar2 = *(int *)local_4c;
    *(int *)local_4c = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_4c);
    }
    if (local_44[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_44,' ');
    }
    pQVar1 = local_44;
                    /* try { // try from 005f1f50 to 005f1f57 has its CatchHandler @ 005f2440 */
    QString::fromAscii((char *)&local_50,0xaddbe0);
                    /* try { // try from 005f1f5c to 005f1f63 has its CatchHandler @ 005f2404 */
    QTextStream::operator<<(pQVar1,(QString *)&local_50);
    iVar2 = *(int *)local_50;
    *(int *)local_50 = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_50);
    }
    if (local_44[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_44,' ');
    }
                    /* try { // try from 005f1f9c to 005f1fdb has its CatchHandler @ 005f2440 */
    pQVar1 = (QTextStream *)QTextStream::operator<<(local_44,'\"');
    pQVar1 = (QTextStream *)QTextStream::operator<<(pQVar1,(QString *)local_40);
    QTextStream::operator<<(pQVar1,'\"');
    if (local_44[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_44,' ');
    }
    pQVar1 = local_44;
    QString::fromAscii((char *)&local_54,0xae9988);
                    /* try { // try from 005f1fe0 to 005f1fe7 has its CatchHandler @ 005f23f0 */
    QTextStream::operator<<(pQVar1,(QString *)&local_54);
    iVar2 = *(int *)local_54;
    *(int *)local_54 = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_54);
    }
    if (local_44[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_44,' ');
    }
                    /* try { // try from 005f2020 to 005f204b has its CatchHandler @ 005f2440 */
    QTextStream::operator<<(local_44,param_1);
    if (local_44[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_44,' ');
    }
    pQVar1 = local_44;
    QString::fromAscii((char *)&local_58,0xae9824);
                    /* try { // try from 005f2050 to 005f2057 has its CatchHandler @ 005f23d4 */
    QTextStream::operator<<(pQVar1,(QString *)&local_58);
    iVar2 = *(int *)local_58;
    *(int *)local_58 = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_58);
    }
    if (local_44[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_44,' ');
    }
                    /* try { // try from 005f2090 to 005f2097 has its CatchHandler @ 005f2440 */
    QTextStream::operator<<(local_44,iVar5);
    if (local_44[0x14] != (QTextStream)0x0) {
                    /* try { // try from 005f2208 to 005f227f has its CatchHandler @ 005f2440 */
      QTextStream::operator<<(local_44,' ');
    }
    QDebug::~QDebug((QDebug *)&local_44);
                    /* try { // try from 005f20b8 to 005f20bf has its CatchHandler @ 005f245c */
    local_48 = (Data *)QString::fromAscii_helper("[: ]",-1);
                    /* try { // try from 005f20d0 to 005f20d7 has its CatchHandler @ 005f23cc */
    QRegExp::QRegExp((QRegExp *)&local_4c,&local_48,1,0);
                    /* try { // try from 005f20f8 to 005f20ff has its CatchHandler @ 005f23c4 */
    local_50 = (Data *)0x1;
    QString::section(&local_54,local_40,&local_4c,3,3,(QString *)&local_50);
                    /* try { // try from 005f2104 to 005f210b has its CatchHandler @ 005f23bc */
    QString::trimmed();
                    /* try { // try from 005f2114 to 005f211b has its CatchHandler @ 005f2388 */
    iVar2 = QString::toInt((bool *)&local_58,0);
    iVar3 = *(int *)local_58;
    *(int *)local_58 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_58);
    }
    iVar3 = *(int *)local_54;
    *(int *)local_54 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_54);
    }
    QRegExp::~QRegExp((QRegExp *)&local_4c);
    iVar3 = *(int *)local_48;
    *(int *)local_48 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_48);
      if (iVar2 == 5) goto LAB_005f22cc;
LAB_005f21a8:
      if (iVar2 == 0x7f) {
        uVar4 = 8;
        goto LAB_005f2338;
      }
    }
    else {
      if (iVar2 != 5) goto LAB_005f21a8;
LAB_005f22cc:
                    /* try { // try from 005f22cc to 005f22d3 has its CatchHandler @ 005f245c */
      iVar2 = checkFilamentSenser(this);
      if (iVar2 == 0) {
        uVar4 = 0;
        goto LAB_005f2338;
      }
    }
    iVar5 = iVar5 + 1;
    if (this[0x2e3] != (SerialObject)0x0) {
      uVar4 = 1;
      goto LAB_005f2338;
    }
    if (iVar5 == 0xb) {
      uVar4 = 4;
LAB_005f2338:
      QString::~QString((QString *)local_40);
      this[0x2f0] = (SerialObject)0x0;
      return uVar4;
    }
                    /* try { // try from 005f21c8 to 005f21cf has its CatchHandler @ 005f245c */
    sleep(1);
    iVar2 = *(int *)local_40[0];
    *(int *)local_40[0] = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_40[0]);
    }
  } while( true );
}


// ===== SerialObject::checkRefullingFrist @ 005f2478

/* SerialObject::checkRefullingFrist(int) */

undefined4 __thiscall SerialObject::checkRefullingFrist(SerialObject *this,int param_1)

{
  QTextStream *pQVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  Data *local_58;
  Data *local_54;
  Data *local_50;
  Data *local_4c;
  Data *local_48;
  QTextStream *local_44;
  QString aQStack_40 [4];
  Data *local_3c;
  char *local_38;
  undefined4 *local_34;
  char *local_30;
  int local_2c;
  
  this[0x2f0] = (SerialObject)0x1;
  local_38 = 
  "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
  ;
  local_34 = &QString::shared_null;
  local_2c = 0;
  iVar5 = 0;
  local_30 = "../ad5x/serial/SerialObject.cpp";
  while( true ) {
    local_58 = (Data *)QString::fromAscii_helper(local_38 + -0x2424,-1);
                    /* try { // try from 005f2508 to 005f250f has its CatchHandler @ 005f2bc4 */
    sendCmdToUart4(&local_3c,this,&local_58);
    iVar2 = *(int *)local_58;
    *(int *)local_58 = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_58);
    }
                    /* try { // try from 005f2538 to 005f253f has its CatchHandler @ 005f2c64 */
    pQVar1 = operator_new(0x18);
                    /* try { // try from 005f2554 to 005f255b has its CatchHandler @ 005f2c50 */
    local_44 = (QTextStream *)0x2;
    QTextStream::QTextStream(pQVar1,pQVar1 + 8,&local_44);
    *(undefined4 **)(pQVar1 + 8) = local_34;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar1 + 0xc) = 1;
    *(undefined4 *)(pQVar1 + 0x10) = 0;
    pQVar1[0x14] = (QTextStream)0x1;
    pQVar1[0x15] = (QTextStream)0x1;
    local_44 = pQVar1;
                    /* try { // try from 005f259c to 005f25a3 has its CatchHandler @ 005f2ca8 */
    QString::fromAscii((char *)&local_48,(int)local_30);
                    /* try { // try from 005f25a8 to 005f25af has its CatchHandler @ 005f2c94 */
    QTextStream::operator<<(pQVar1,(QString *)&local_48);
    iVar2 = *(int *)local_48;
    *(int *)local_48 = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_48);
    }
    if (local_44[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_44,' ');
    }
    pQVar1 = local_44;
                    /* try { // try from 005f25f0 to 005f25f7 has its CatchHandler @ 005f2ca8 */
    QString::fromAscii((char *)&local_4c,0xaeac58);
                    /* try { // try from 005f25fc to 005f2603 has its CatchHandler @ 005f2c80 */
    QTextStream::operator<<(pQVar1,(QString *)&local_4c);
    iVar2 = *(int *)local_4c;
    *(int *)local_4c = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_4c);
    }
    if (local_44[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_44,' ');
    }
    pQVar1 = local_44;
                    /* try { // try from 005f2648 to 005f264f has its CatchHandler @ 005f2ca8 */
    QString::fromAscii((char *)&local_50,0xaddbe0);
                    /* try { // try from 005f2654 to 005f265b has its CatchHandler @ 005f2c6c */
    QTextStream::operator<<(pQVar1,(QString *)&local_50);
    iVar2 = *(int *)local_50;
    *(int *)local_50 = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_50);
    }
    if (local_44[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_44,' ');
    }
                    /* try { // try from 005f2694 to 005f26d3 has its CatchHandler @ 005f2ca8 */
    pQVar1 = (QTextStream *)QTextStream::operator<<(local_44,'\"');
    pQVar1 = (QTextStream *)QTextStream::operator<<(pQVar1,(QString *)&local_3c);
    QTextStream::operator<<(pQVar1,'\"');
    if (local_44[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_44,' ');
    }
    pQVar1 = local_44;
    QString::fromAscii((char *)&local_54,0xae9988);
                    /* try { // try from 005f26d8 to 005f26df has its CatchHandler @ 005f2c18 */
    QTextStream::operator<<(pQVar1,(QString *)&local_54);
    iVar2 = *(int *)local_54;
    *(int *)local_54 = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_54);
    }
    if (local_44[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_44,' ');
    }
                    /* try { // try from 005f2718 to 005f2743 has its CatchHandler @ 005f2ca8 */
    QTextStream::operator<<(local_44,param_1);
    if (local_44[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_44,' ');
    }
    pQVar1 = local_44;
    QString::fromAscii((char *)&local_58,0xae9824);
                    /* try { // try from 005f2748 to 005f274f has its CatchHandler @ 005f2bfc */
    QTextStream::operator<<(pQVar1,(QString *)&local_58);
    iVar2 = *(int *)local_58;
    *(int *)local_58 = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_58);
    }
    if (local_44[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_44,' ');
    }
                    /* try { // try from 005f2788 to 005f278f has its CatchHandler @ 005f2ca8 */
    QTextStream::operator<<(local_44,iVar5);
    if (local_44[0x14] != (QTextStream)0x0) {
                    /* try { // try from 005f290c to 005f2983 has its CatchHandler @ 005f2ca8 */
      QTextStream::operator<<(local_44,' ');
    }
    QDebug::~QDebug((QDebug *)&local_44);
                    /* try { // try from 005f27b0 to 005f27b7 has its CatchHandler @ 005f2c64 */
    local_48 = (Data *)QString::fromAscii_helper("[: ]",-1);
                    /* try { // try from 005f27c8 to 005f27cf has its CatchHandler @ 005f2bf4 */
    QRegExp::QRegExp((QRegExp *)&local_4c,&local_48,1,0);
                    /* try { // try from 005f27f0 to 005f27f7 has its CatchHandler @ 005f2bd8 */
    local_50 = (Data *)0x1;
    QString::section(&local_54,&local_3c,&local_4c,3,3,(QString *)&local_50);
                    /* try { // try from 005f27fc to 005f2803 has its CatchHandler @ 005f2c48 */
    QString::trimmed();
                    /* try { // try from 005f280c to 005f2813 has its CatchHandler @ 005f2c2c */
    iVar2 = QString::toInt((bool *)&local_58,0);
    iVar3 = *(int *)local_58;
    *(int *)local_58 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_58);
    }
    iVar3 = *(int *)local_54;
    *(int *)local_54 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_54);
    }
    QRegExp::~QRegExp((QRegExp *)&local_4c);
    iVar3 = *(int *)local_48;
    *(int *)local_48 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_48);
    }
                    /* try { // try from 005f2898 to 005f28d3 has its CatchHandler @ 005f2c64 */
    iVar3 = checkFilamentSenser(this);
    if (iVar3 == 0) {
                    /* try { // try from 005f2a58 to 005f2a5f has its CatchHandler @ 005f2c64 */
      local_58 = (Data *)QString::fromAscii_helper("F112",-1);
                    /* try { // try from 005f2a6c to 005f2a73 has its CatchHandler @ 005f2cb0 */
      sendCmdToUart4(&local_54,this,&local_58);
      QString::~QString((QString *)&local_58);
                    /* try { // try from 005f2a84 to 005f2a8b has its CatchHandler @ 005f2cc4 */
      local_58 = (Data *)QString::fromAscii_helper("ok",-1);
                    /* try { // try from 005f2a9c to 005f2aa3 has its CatchHandler @ 005f2ccc */
      iVar5 = QString::indexOf(&local_54,&local_58,0,1);
      if (iVar5 == -1) {
        QString::~QString((QString *)&local_58);
                    /* try { // try from 005f2b60 to 005f2b67 has its CatchHandler @ 005f2cc4 */
        local_58 = (Data *)QString::fromAscii_helper("F112",-1);
                    /* try { // try from 005f2b74 to 005f2b7b has its CatchHandler @ 005f2b8c */
        sendCmdToUart4(aQStack_40,this,&local_58);
        QString::~QString(aQStack_40);
      }
      uVar4 = 0;
      QString::~QString((QString *)&local_58);
      QString::~QString((QString *)&local_54);
      goto LAB_005f2ac0;
    }
    if (iVar2 == 5) {
      iVar5 = iVar5 + 1;
      if (10 < iVar5) {
        uVar4 = 4;
        goto LAB_005f2ac0;
      }
    }
    else {
      if (iVar2 == 0x7f) {
        uVar4 = 8;
        goto LAB_005f2ac0;
      }
      if ((iVar2 == 0x7e) && (local_2c = local_2c + 1, 10 < local_2c)) {
        uVar4 = 10;
        goto LAB_005f2ac0;
      }
    }
    if (this[0x2e3] != (SerialObject)0x0) break;
    sleep(1);
    iVar2 = *(int *)local_3c;
    *(int *)local_3c = iVar2 + -1;
    if (iVar2 == 1) {
      QString::free(local_3c);
    }
  }
  uVar4 = 1;
LAB_005f2ac0:
  QString::~QString((QString *)&local_3c);
  this[0x2f0] = (SerialObject)0x0;
  local_54 = (Data *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005f2af8 to 005f2aff has its CatchHandler @ 005f2bb0 */
  sendGcodeCmd(&local_58,this,&local_54,1,0,0,0);
  QString::~QString((QString *)&local_58);
  QString::~QString((QString *)&local_54);
  return uVar4;
}


// ===== SerialObject::checkCrotchCutting @ 005f4f8c

/* SerialObject::checkCrotchCutting(int) */

void __thiscall SerialObject::checkCrotchCutting(SerialObject *this,int param_1)

{
  SerialObject SVar1;
  QTextStream *pQVar2;
  QDebug *pQVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Data *local_60;
  Data *local_5c;
  Data *local_58;
  Data *local_54;
  Data *local_50;
  QTextStream *local_4c;
  QString aQStack_48 [4];
  QString aQStack_44 [4];
  Data *local_40 [2];
  char *local_38;
  undefined4 *local_34;
  undefined **local_30;
  char *local_2c;
  
  local_2c = "g()";
  local_54 = (Data *)QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f4fe0 to 005f4fe7 has its CatchHandler @ 005f56dc */
  QString::number((int)&local_58,param_1);
                    /* try { // try from 005f4ff8 to 005f4fff has its CatchHandler @ 005f5858 */
  local_30 = &PTR_s_Internal_Server_Error_00af0000;
  ::operator+((char *)&local_5c,(QString *)"F24 C");
                    /* try { // try from 005f5008 to 005f500f has its CatchHandler @ 005f583c */
  sendCmdToUart4(&local_60,this,&local_5c);
  QString::~QString((QString *)&local_60);
  QString::~QString((QString *)&local_5c);
  QString::~QString((QString *)&local_58);
  QString::~QString((QString *)&local_54);
  this[0x2f0] = (SerialObject)0x1;
  if (this[0x2e3] == (SerialObject)0x0) {
    local_38 = 
    "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
    ;
    iVar6 = 0;
    local_34 = &QString::shared_null;
    do {
      local_60 = (Data *)QString::fromAscii_helper(local_38 + -0x2424,-1);
                    /* try { // try from 005f5398 to 005f539f has its CatchHandler @ 005f5828 */
      sendCmdToUart4(local_40,this,&local_60);
      iVar4 = *(int *)local_60;
      *(int *)local_60 = iVar4 + -1;
      if (iVar4 == 1) {
        QString::free(local_60);
      }
                    /* try { // try from 005f53c8 to 005f53cf has its CatchHandler @ 005f5820 */
      pQVar2 = operator_new(0x18);
                    /* try { // try from 005f53e4 to 005f53eb has its CatchHandler @ 005f580c */
      local_4c = (QTextStream *)0x2;
      QTextStream::QTextStream(pQVar2,pQVar2 + 8,&local_4c);
      *(undefined4 **)(pQVar2 + 8) = local_34;
      QString::shared_null = QString::shared_null + 1;
      *(undefined4 *)(pQVar2 + 0xc) = 1;
      *(undefined4 *)(pQVar2 + 0x10) = 0;
      pQVar2[0x14] = (QTextStream)0x1;
      pQVar2[0x15] = (QTextStream)0x1;
      local_4c = pQVar2;
                    /* try { // try from 005f542c to 005f5433 has its CatchHandler @ 005f5804 */
      QString::fromAscii((char *)&local_50,0xae8970);
                    /* try { // try from 005f5438 to 005f543f has its CatchHandler @ 005f57f0 */
      QTextStream::operator<<(pQVar2,(QString *)&local_50);
      iVar4 = *(int *)local_50;
      *(int *)local_50 = iVar4 + -1;
      if (iVar4 == 1) {
        QString::free(local_50);
      }
      if (local_4c[0x14] != (QTextStream)0x0) {
                    /* try { // try from 005f5478 to 005f54ef has its CatchHandler @ 005f5804 */
        QTextStream::operator<<(local_4c,' ');
      }
      pQVar2 = local_4c;
                    /* try { // try from 005f507c to 005f5083 has its CatchHandler @ 005f5804 */
      QString::fromAscii((char *)&local_54,0xaeaad4);
                    /* try { // try from 005f5088 to 005f508f has its CatchHandler @ 005f57dc */
      QTextStream::operator<<(pQVar2,(QString *)&local_54);
      iVar4 = *(int *)local_54;
      *(int *)local_54 = iVar4 + -1;
      if (iVar4 == 1) {
        QString::free(local_54);
      }
      if (local_4c[0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_4c,' ');
      }
      pQVar2 = local_4c;
                    /* try { // try from 005f50d0 to 005f50d7 has its CatchHandler @ 005f5804 */
      QString::fromAscii((char *)&local_58,0xaddbe0);
                    /* try { // try from 005f50dc to 005f50e3 has its CatchHandler @ 005f57c8 */
      QTextStream::operator<<(pQVar2,(QString *)&local_58);
      iVar4 = *(int *)local_58;
      *(int *)local_58 = iVar4 + -1;
      if (iVar4 == 1) {
        QString::free(local_58);
      }
      if (local_4c[0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_4c,' ');
      }
                    /* try { // try from 005f511c to 005f515b has its CatchHandler @ 005f5804 */
      pQVar2 = (QTextStream *)QTextStream::operator<<(local_4c,'\"');
      pQVar2 = (QTextStream *)QTextStream::operator<<(pQVar2,(QString *)local_40);
      QTextStream::operator<<(pQVar2,'\"');
      if (local_4c[0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_4c,' ');
      }
      pQVar2 = local_4c;
      QString::fromAscii((char *)&local_5c,0xae9988);
                    /* try { // try from 005f5160 to 005f5167 has its CatchHandler @ 005f57b4 */
      QTextStream::operator<<(pQVar2,(QString *)&local_5c);
      iVar4 = *(int *)local_5c;
      *(int *)local_5c = iVar4 + -1;
      if (iVar4 == 1) {
        QString::free(local_5c);
      }
      if (local_4c[0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_4c,' ');
      }
                    /* try { // try from 005f51a0 to 005f51cb has its CatchHandler @ 005f5804 */
      QTextStream::operator<<(local_4c,param_1);
      if (local_4c[0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_4c,' ');
      }
      pQVar2 = local_4c;
      QString::fromAscii((char *)&local_60,0xafd964);
                    /* try { // try from 005f51d0 to 005f51d7 has its CatchHandler @ 005f5798 */
      QTextStream::operator<<(pQVar2,(QString *)&local_60);
      iVar4 = *(int *)local_60;
      *(int *)local_60 = iVar4 + -1;
      if (iVar4 == 1) {
        QString::free(local_60);
      }
      if (local_4c[0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_4c,' ');
      }
                    /* try { // try from 005f5210 to 005f5217 has its CatchHandler @ 005f5804 */
      QTextStream::operator<<(local_4c,iVar6);
      if (local_4c[0x14] != (QTextStream)0x0) {
        QTextStream::operator<<(local_4c,' ');
      }
      QDebug::~QDebug((QDebug *)&local_4c);
                    /* try { // try from 005f5238 to 005f523f has its CatchHandler @ 005f5820 */
      local_50 = (Data *)QString::fromAscii_helper("[: ]",-1);
                    /* try { // try from 005f5250 to 005f5257 has its CatchHandler @ 005f5790 */
      QRegExp::QRegExp((QRegExp *)&local_54,&local_50,1,0);
                    /* try { // try from 005f527c to 005f5283 has its CatchHandler @ 005f5788 */
      local_58 = (Data *)0x1;
      QString::section(&local_5c,local_40,&local_54,3,3,&local_58);
                    /* try { // try from 005f5288 to 005f528f has its CatchHandler @ 005f5780 */
      QString::trimmed();
                    /* try { // try from 005f5298 to 005f529f has its CatchHandler @ 005f5754 */
      iVar4 = QString::toInt((bool *)&local_60,0);
      iVar5 = *(int *)local_60;
      *(int *)local_60 = iVar5 + -1;
      if (iVar5 == 1) {
        QString::free(local_60);
        iVar5 = *(int *)local_5c;
        *(int *)local_5c = iVar5 + -1;
      }
      else {
        iVar5 = *(int *)local_5c;
        *(int *)local_5c = iVar5 + -1;
      }
      if (iVar5 == 1) {
        QString::free(local_5c);
      }
      QRegExp::~QRegExp((QRegExp *)&local_54);
      iVar5 = *(int *)local_50;
      *(int *)local_50 = iVar5 + -1;
      if (iVar5 == 1) {
        QString::free(local_50);
        if (iVar4 != 5) goto LAB_005f5328;
LAB_005f55ac:
        QString::~QString((QString *)local_40);
        break;
      }
      if (iVar4 == 5) goto LAB_005f55ac;
LAB_005f5328:
      if (0x14 < iVar6) goto LAB_005f55ac;
      if (iVar4 == 0x7f) {
                    /* try { // try from 005f55fc to 005f5603 has its CatchHandler @ 005f5820 */
        QDebug::QDebug((QDebug *)&local_60,0);
                    /* try { // try from 005f5608 to 005f562b has its CatchHandler @ 005f5740 */
        pQVar3 = (QDebug *)QDebug::operator<<((QDebug *)&local_60,"../ad5x/serial/SerialObject.cpp")
        ;
        pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,"checkCrotchCutting");
        QDebug::operator<<(pQVar3,"Drv error:");
        QDebug::~QDebug((QDebug *)&local_60);
                    /* try { // try from 005f563c to 005f5643 has its CatchHandler @ 005f5820 */
        local_60 = (Data *)QString::fromAscii_helper("F15",-1);
                    /* try { // try from 005f5650 to 005f5657 has its CatchHandler @ 005f572c */
        sendCmdToUart4(aQStack_44,this,&local_60);
        QString::~QString(aQStack_44);
        QString::~QString((QString *)&local_60);
                    /* try { // try from 005f5670 to 005f5677 has its CatchHandler @ 005f5820 */
        local_58 = (Data *)QString::fromAscii_helper(local_2c + -0x1104,-1);
                    /* try { // try from 005f5684 to 005f568b has its CatchHandler @ 005f5724 */
        QString::number((int)&local_5c,param_1);
                    /* try { // try from 005f5698 to 005f569f has its CatchHandler @ 005f571c */
        ::operator+((char *)&local_60,(QString *)(local_30 + -0x19be));
                    /* try { // try from 005f56a8 to 005f56af has its CatchHandler @ 005f56f0 */
        sendCmdToUart4(aQStack_48,this,&local_60);
        QString::~QString(aQStack_48);
        QString::~QString((QString *)&local_60);
        QString::~QString((QString *)&local_5c);
        iVar6 = 1;
        QString::~QString((QString *)&local_58);
      }
      else {
        iVar6 = iVar6 + 1;
        if (iVar4 == 0x7e) goto LAB_005f55ac;
      }
                    /* try { // try from 005f5340 to 005f5347 has its CatchHandler @ 005f5820 */
      sleep(1);
      iVar4 = *(int *)local_40[0];
      *(int *)local_40[0] = iVar4 + -1;
      if (iVar4 == 1) {
        QString::free(local_40[0]);
        SVar1 = this[0x2e3];
      }
      else {
        SVar1 = this[0x2e3];
      }
    } while (SVar1 == (SerialObject)0x0);
  }
  this[0x2f0] = (SerialObject)0x0;
  return;
}


// ===== SerialObject::checkFeeding @ 005f9674

/* SerialObject::checkFeeding(int) */

undefined4 __thiscall SerialObject::checkFeeding(SerialObject *this,int param_1)

{
  QTextStream *pQVar1;
  QDebug *pQVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  Data **ppDVar8;
  Data *local_78;
  Data *local_74;
  Data *local_70;
  Data *local_6c;
  Data *local_68;
  QTextStream *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  QString aQStack_58 [4];
  QString aQStack_54 [4];
  QString aQStack_50 [8];
  char *local_48;
  char *local_44;
  char *local_40;
  int local_3c;
  int local_38;
  undefined **local_34;
  undefined **local_30;
  
  this[0x2f0] = (SerialObject)0x1;
  local_48 = 
  "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
  ;
  local_44 = "../ad5x/serial/SerialObject.cpp";
  local_34 = &PTR_s_Internal_Server_Error_00af0000;
  local_30 = &PTR_s_Internal_Server_Error_00af0000;
  local_38 = 0;
  local_3c = 0;
  iVar6 = 0;
  iVar5 = 0;
  local_40 = "checkFeeding";
  while( true ) {
    local_78 = (Data *)QString::fromAscii_helper(local_48 + -0x2424,-1);
                    /* try { // try from 005f9ac0 to 005f9ac7 has its CatchHandler @ 005fa040 */
    sendCmdToUart4(aQStack_50,this,&local_78);
    iVar4 = *(int *)local_78;
    *(int *)local_78 = iVar4 + -1;
    if (iVar4 == 1) {
      QString::free(local_78);
    }
                    /* try { // try from 005f9af4 to 005f9afb has its CatchHandler @ 005fa1ac */
    QDebug::QDebug((QDebug *)&local_64,0);
    pQVar1 = local_64;
                    /* try { // try from 005f9b08 to 005f9b0f has its CatchHandler @ 005fa1a4 */
    QString::fromAscii((char *)&local_68,(int)local_44);
                    /* try { // try from 005f9b14 to 005f9b1b has its CatchHandler @ 005fa024 */
    QTextStream::operator<<(pQVar1,(QString *)&local_68);
    iVar4 = *(int *)local_68;
    *(int *)local_68 = iVar4 + -1;
    if (iVar4 == 1) {
      QString::free(local_68);
    }
    if (local_64[0x14] != (QTextStream)0x0) {
                    /* try { // try from 005f9b54 to 005f9bcb has its CatchHandler @ 005fa1a4 */
      QTextStream::operator<<(local_64,' ');
    }
    pQVar1 = local_64;
                    /* try { // try from 005f9704 to 005f970b has its CatchHandler @ 005fa1a4 */
    QString::fromAscii((char *)&local_6c,(int)local_40);
                    /* try { // try from 005f9710 to 005f9717 has its CatchHandler @ 005fa1dc */
    QTextStream::operator<<(pQVar1,(QString *)&local_6c);
    iVar4 = *(int *)local_6c;
    *(int *)local_6c = iVar4 + -1;
    if (iVar4 == 1) {
      QString::free(local_6c);
    }
    if (local_64[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_64,' ');
    }
    pQVar1 = local_64;
                    /* try { // try from 005f975c to 005f9763 has its CatchHandler @ 005fa1a4 */
    QString::fromAscii((char *)&local_70,0xaddbe0);
                    /* try { // try from 005f9768 to 005f976f has its CatchHandler @ 005fa1c8 */
    QTextStream::operator<<(pQVar1,(QString *)&local_70);
    QString::~QString((QString *)&local_70);
    if (local_64[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_64,' ');
    }
                    /* try { // try from 005f9788 to 005f97c7 has its CatchHandler @ 005fa1a4 */
    pQVar1 = (QTextStream *)QTextStream::operator<<(local_64,'\"');
    pQVar1 = (QTextStream *)QTextStream::operator<<(pQVar1,aQStack_50);
    QTextStream::operator<<(pQVar1,'\"');
    if (local_64[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_64,' ');
    }
    pQVar1 = local_64;
    QString::fromAscii((char *)&local_74,0xae9988);
                    /* try { // try from 005f97cc to 005f97d3 has its CatchHandler @ 005fa1b4 */
    QTextStream::operator<<(pQVar1,(QString *)&local_74);
    QString::~QString((QString *)&local_74);
    if (local_64[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_64,' ');
    }
                    /* try { // try from 005f97ec to 005f9813 has its CatchHandler @ 005fa1a4 */
    QTextStream::operator<<(local_64,param_1);
    if (local_64[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_64,' ');
    }
    pQVar1 = local_64;
    QString::fromAscii((char *)&local_78,0xae9824);
                    /* try { // try from 005f9818 to 005f981f has its CatchHandler @ 005fa180 */
    QTextStream::operator<<(pQVar1,(QString *)&local_78);
    iVar4 = *(int *)local_78;
    *(int *)local_78 = iVar4 + -1;
    if (iVar4 == 1) {
      QString::free(local_78);
    }
    if (local_64[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_64,' ');
    }
                    /* try { // try from 005f9858 to 005f985f has its CatchHandler @ 005fa1a4 */
    QTextStream::operator<<(local_64,iVar5);
    if (local_64[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_64,' ');
    }
    QDebug::~QDebug((QDebug *)&local_64);
                    /* try { // try from 005f9880 to 005f9887 has its CatchHandler @ 005fa1ac */
    local_68 = (Data *)QString::fromAscii_helper("[: ]",-1);
                    /* try { // try from 005f9898 to 005f989f has its CatchHandler @ 005fa1f8 */
    QRegExp::QRegExp((QRegExp *)&local_6c,&local_68,1,0);
                    /* try { // try from 005f98c0 to 005f98c7 has its CatchHandler @ 005fa1f0 */
    local_70 = (Data *)0x1;
    QString::section(&local_74,aQStack_50,&local_6c,3,3,(QString *)&local_70);
                    /* try { // try from 005f98cc to 005f98d3 has its CatchHandler @ 005fa21c */
    QString::trimmed();
                    /* try { // try from 005f98dc to 005f98e3 has its CatchHandler @ 005fa054 */
    iVar4 = QString::toInt((bool *)&local_78,0);
    QString::~QString((QString *)&local_78);
    iVar3 = *(int *)local_74;
    *(int *)local_74 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_74);
    }
    QRegExp::~QRegExp((QRegExp *)&local_6c);
    iVar3 = *(int *)local_68;
    *(int *)local_68 = iVar3 + -1;
    if (iVar3 == 1) {
      QString::free(local_68);
    }
    if (iVar4 == 5) {
      if (this[0x8a] != (SerialObject)0x0) {
                    /* try { // try from 005f9fc8 to 005f9fcf has its CatchHandler @ 005fa1ac */
        local_78 = (Data *)QString::fromAscii_helper("F112",-1);
                    /* try { // try from 005f9fdc to 005f9fe3 has its CatchHandler @ 005fa224 */
        sendCmdToUart4(aQStack_54,this,&local_78);
        QString::~QString(aQStack_54);
        QString::~QString((QString *)&local_78);
        QString::~QString(aQStack_50);
        return 7;
      }
      if ((iVar6 == 3) && (local_38 == 0)) {
                    /* try { // try from 005f9bf0 to 005f9c07 has its CatchHandler @ 005fa1ac */
        checkCrotchCutting(this,param_1);
        local_60 = QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f9c14 to 005f9c1b has its CatchHandler @ 005fa0f4 */
        QString::number((int)&local_64,param_1);
                    /* try { // try from 005f9c28 to 005f9c2f has its CatchHandler @ 005fa108 */
        ::operator+((char *)&local_68,(QString *)&DAT_00addbc8);
                    /* try { // try from 005f9c3c to 005f9c43 has its CatchHandler @ 005fa11c */
        ::operator+((QString *)&local_6c,(char *)&local_68);
                    /* try { // try from 005f9c48 to 005f9c4f has its CatchHandler @ 005fa130 */
        local_70 = (Data *)QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f9c5c to 005f9c63 has its CatchHandler @ 005fa144 */
        QString::number((int)&local_74,0x4b0);
                    /* try { // try from 005f9c6c to 005f9c73 has its CatchHandler @ 005fa158 */
        ::operator+((QString *)&local_78,(QString *)&local_6c);
                    /* try { // try from 005f9c7c to 005f9c83 has its CatchHandler @ 005fa16c */
        sendCmdToUart4(aQStack_58,this,&local_78);
        QString::~QString(aQStack_58);
        QString::~QString((QString *)&local_78);
        QString::~QString((QString *)&local_74);
        QString::~QString((QString *)&local_70);
        QString::~QString((QString *)&local_6c);
        QString::~QString((QString *)&local_68);
        QString::~QString((QString *)&local_64);
        QString::~QString((QString *)&local_60);
        local_38 = 1;
      }
    }
    else {
      if (iVar4 == 0x7f) {
        uVar7 = 8;
        goto LAB_005f9dd0;
      }
      if ((iVar4 == 0x7e) && (local_3c = local_3c + 1, 100 < local_3c)) {
                    /* try { // try from 005f9d44 to 005f9d4b has its CatchHandler @ 005fa1ac */
        QDebug::QDebug((QDebug *)&local_78,2);
                    /* try { // try from 005f9d54 to 005f9d87 has its CatchHandler @ 005fa008 */
        pQVar2 = (QDebug *)QDebug::operator<<((QDebug *)&local_78,(char *)(local_34 + -0x1da4));
        pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,(char *)(local_30 + -0x14ee));
        pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,"IFS home error! chn:");
        QDebug::operator<<(pQVar2,param_1);
        uVar7 = 10;
        QDebug::~QDebug((QDebug *)&local_78);
        goto LAB_005f9dd0;
      }
    }
                    /* try { // try from 005f9964 to 005f999f has its CatchHandler @ 005fa1ac */
    iVar4 = checkFilamentSenser(this);
    if (iVar4 != 0) {
                    /* try { // try from 005f9da0 to 005f9da7 has its CatchHandler @ 005fa1ac */
      local_78 = (Data *)QString::fromAscii_helper("F112",-1);
                    /* try { // try from 005f9db4 to 005f9dbb has its CatchHandler @ 005fa200 */
      sendCmdToUart4(&local_5c,this,&local_78);
      uVar7 = 0;
      QString::~QString((QString *)&local_5c);
      QString::~QString((QString *)&local_78);
      goto LAB_005f9dd0;
    }
    iVar5 = iVar5 + 1;
    if (this[0x2e3] != (SerialObject)0x0) break;
    if (300 < iVar5) {
      if (iVar6 == 3) {
                    /* try { // try from 005f9e60 to 005f9e67 has its CatchHandler @ 005fa1ac */
        QDebug::QDebug((QDebug *)&local_78,2);
                    /* try { // try from 005f9e70 to 005f9ea3 has its CatchHandler @ 005fa280 */
        pQVar2 = (QDebug *)QDebug::operator<<((QDebug *)&local_78,(char *)(local_34 + -0x1da4));
        pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,(char *)(local_30 + -0x14ee));
        pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,"load timeOut! chn:");
        QDebug::operator<<(pQVar2,param_1);
        QDebug::~QDebug((QDebug *)&local_78);
        local_64 = (QTextStream *)&QString::shared_null;
        local_68 = (Data *)&QString::shared_null;
        QString::shared_null = QString::shared_null + 2;
        ppDVar8 = &local_68;
                    /* try { // try from 005f9f00 to 005f9f07 has its CatchHandler @ 005fa278 */
        getIFSLoadErrorCode((int)&local_6c,(QString *)this,(QString *)param_1);
        local_70 = local_6c;
        *(int *)local_6c = *(int *)local_6c + 1;
        local_74 = (Data *)local_64;
        *(int *)local_64 = *(int *)local_64 + 1;
        local_78 = local_68;
        *(int *)local_68 = *(int *)local_68 + 1;
                    /* try { // try from 005f9f74 to 005f9f7b has its CatchHandler @ 005fa250 */
        sigIFSError(this,(QString *)&local_70,&local_74,&local_78,ppDVar8);
        QString::~QString((QString *)&local_78);
        QString::~QString((QString *)&local_74);
        QString::~QString((QString *)&local_70);
                    /* try { // try from 005f9f98 to 005f9f9f has its CatchHandler @ 005fa22c */
        checkCrotchF39(this,param_1);
        QString::~QString((QString *)&local_6c);
        QString::~QString((QString *)&local_68);
        QString::~QString((QString *)&local_64);
        uVar7 = 3;
        goto LAB_005f9dd0;
      }
      local_5c = QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f99b0 to 005f99b7 has its CatchHandler @ 005fa194 */
      QString::number((int)&local_60,param_1);
                    /* try { // try from 005f99c4 to 005f99cb has its CatchHandler @ 005fa0a4 */
      QString::fromAscii((char *)&local_68,0xaddc24);
                    /* try { // try from 005f99d0 to 005f99d7 has its CatchHandler @ 005fa080 */
      QString::append((QString *)&local_68);
                    /* try { // try from 005f99e4 to 005f99eb has its CatchHandler @ 005fa0ec */
      ::operator+((QString *)&local_6c,(char *)&local_68);
                    /* try { // try from 005f99f0 to 005f99f7 has its CatchHandler @ 005fa0e4 */
      local_70 = (Data *)QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f9a04 to 005f9a0b has its CatchHandler @ 005fa0dc */
      QString::number((int)&local_74,0x4b0);
      local_78 = local_6c;
      *(int *)local_6c = *(int *)local_6c + 1;
                    /* try { // try from 005f9a30 to 005f9a37 has its CatchHandler @ 005fa0ac */
      QString::append((QString *)&local_78);
                    /* try { // try from 005f9a40 to 005f9a47 has its CatchHandler @ 005fa19c */
      sendCmdToUart4(&local_64,this,&local_78);
      QString::~QString((QString *)&local_64);
      QString::~QString((QString *)&local_78);
      QString::~QString((QString *)&local_74);
      QString::~QString((QString *)&local_70);
      QString::~QString((QString *)&local_6c);
      QString::~QString((QString *)&local_68);
      iVar6 = 3;
      QString::~QString((QString *)&local_60);
      iVar5 = 0;
      QString::~QString((QString *)&local_5c);
    }
                    /* try { // try from 005f9a94 to 005f9a9b has its CatchHandler @ 005fa1ac */
    usleep(100000);
    QString::~QString(aQStack_50);
  }
                    /* try { // try from 005f9e18 to 005f9e1f has its CatchHandler @ 005fa1ac */
  local_78 = (Data *)QString::fromAscii_helper("F112",-1);
                    /* try { // try from 005f9e30 to 005f9e37 has its CatchHandler @ 005fa214 */
  sendCmdToUart4((QString *)&local_60,this,&local_78);
  QString::~QString((QString *)&local_60);
  uVar7 = 1;
  QString::~QString((QString *)&local_78);
LAB_005f9dd0:
  QString::~QString(aQStack_50);
  this[0x2f0] = (SerialObject)0x0;
  return uVar7;
}


// ===== SerialObject::flushFilamentFrist @ 005fc930

/* SerialObject::flushFilamentFrist(int, bool) */

void SerialObject::flushFilamentFrist(int param_1,bool param_2)

{
  GetConfigFile *this;
  Config *this_00;
  int iVar1;
  int iVar2;
  undefined3 in_register_00000015;
  float fVar3;
  QString aQStack_50 [4];
  undefined4 local_4c;
  QString aQStack_48 [4];
  undefined4 *local_44;
  QString aQStack_40 [4];
  QString aQStack_3c [4];
  QString aQStack_38 [4];
  undefined4 *local_34 [2];
  undefined4 local_2c;
  
  fVar3 = (float)CONCAT31(in_register_00000015,param_2);
  local_2c = 0;
  this = (GetConfigFile *)getConfigFile();
  this_00 = (Config *)GetConfigFile::configFile(this);
  iVar1 = Config::getChannel(this_00);
  iVar2 = getFilamentTypeFristSpeed((SerialObject *)param_1,iVar1,true);
  local_44 = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005fc9d4 to 005fc9db has its CatchHandler @ 005fcd94 */
  QString::number((int)aQStack_48,iVar2);
                    /* try { // try from 005fc9e8 to 005fc9ef has its CatchHandler @ 005fce94 */
  ::operator+((char *)&local_4c,(QString *)"M106 S");
                    /* try { // try from 005fca08 to 005fca0f has its CatchHandler @ 005fce8c */
  sendGcodeCmd(aQStack_50,param_1,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  QString::~QString(aQStack_48);
  QString::~QString((QString *)&local_44);
  local_4c = QString::fromAscii_helper("G92 E0",-1);
                    /* try { // try from 005fca5c to 005fca63 has its CatchHandler @ 005fce84 */
  sendGcodeCmd(aQStack_50,param_1,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  iVar2 = getFilamentTypeFristSpeed((SerialObject *)param_1,iVar1,false);
  local_34[0] = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005fcaac to 005fcab3 has its CatchHandler @ 005fce7c */
  QString::number((int)aQStack_38,0x5a);
                    /* try { // try from 005fcac0 to 005fcac7 has its CatchHandler @ 005fce74 */
  ::operator+((char *)aQStack_3c,(QString *)&DAT_00ad97cc);
                    /* try { // try from 005fcad4 to 005fcadb has its CatchHandler @ 005fce6c */
  ::operator+(aQStack_40,(char *)aQStack_3c);
  local_44 = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005fcb00 to 005fcb07 has its CatchHandler @ 005fce64 */
  QString::number((int)aQStack_48,iVar2);
                    /* try { // try from 005fcb10 to 005fcb17 has its CatchHandler @ 005fce5c */
  ::operator+((QString *)&local_4c,aQStack_40);
                    /* try { // try from 005fcb30 to 005fcb37 has its CatchHandler @ 005fce54 */
  sendGcodeCmd(aQStack_50,param_1,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  QString::~QString(aQStack_48);
  QString::~QString((QString *)&local_44);
  QString::~QString(aQStack_40);
  QString::~QString(aQStack_3c);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)local_34);
  local_34[0] = (undefined4 *)QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005fcb94 to 005fcb9b has its CatchHandler @ 005fce4c */
  QString::number((int)aQStack_38,(int)fVar3);
                    /* try { // try from 005fcba8 to 005fcbaf has its CatchHandler @ 005fce44 */
  ::operator+((char *)aQStack_3c,(QString *)&DAT_00addbc8);
                    /* try { // try from 005fcbbc to 005fcbc3 has its CatchHandler @ 005fce3c */
  ::operator+(aQStack_40,(char *)aQStack_3c);
  local_44 = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005fcbe8 to 005fcbef has its CatchHandler @ 005fce34 */
  QString::number((int)aQStack_48,iVar2);
                    /* try { // try from 005fcbf8 to 005fcbff has its CatchHandler @ 005fce2c */
  ::operator+((QString *)&local_4c,aQStack_40);
                    /* try { // try from 005fcc08 to 005fcc0f has its CatchHandler @ 005fcde8 */
  sendCmdToUart4(aQStack_50,param_1,&local_4c);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  QString::~QString(aQStack_48);
  QString::~QString((QString *)&local_44);
  QString::~QString(aQStack_40);
  QString::~QString(aQStack_3c);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)local_34);
  local_2c = 0;
  iVar2 = checkLoad(param_1,fVar3,SUB41((float)iVar2,0));
  if (iVar2 != 1) {
    checkCrotchF39((SerialObject *)param_1,(int)fVar3);
    local_4c = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005fccbc to 005fccc3 has its CatchHandler @ 005fcdd4 */
    sendGcodeCmd(aQStack_50,param_1,&local_4c,1,0,0,0);
    QString::~QString(aQStack_50);
    QString::~QString((QString *)&local_4c);
    iVar1 = getFilamentTypeSecondSpeed((SerialObject *)param_1,iVar1,true);
    local_44 = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005fcd08 to 005fcd0f has its CatchHandler @ 005fcdcc */
    QString::number((int)aQStack_48,iVar1);
                    /* try { // try from 005fcd18 to 005fcd1f has its CatchHandler @ 005fcdc4 */
    ::operator+((char *)&local_4c,(QString *)"M106 S");
                    /* try { // try from 005fcd38 to 005fcd3f has its CatchHandler @ 005fcda8 */
    sendGcodeCmd(aQStack_50,param_1,&local_4c,1,0,0,0);
    QString::~QString(aQStack_50);
    QString::~QString((QString *)&local_4c);
    QString::~QString(aQStack_48);
    QString::~QString((QString *)&local_44);
  }
  return;
}


// ===== SerialObject::autoDetectLoad @ 005fd5a0

/* SerialObject::autoDetectLoad(int, int, bool, bool) */

int __thiscall
SerialObject::autoDetectLoad(SerialObject *this,int param_1,int param_2,bool param_3,bool param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  QDebug *pQVar3;
  undefined3 in_register_0000001d;
  uint uVar4;
  int iVar5;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  QString *local_48;
  QString *local_44;
  int local_40;
  undefined **local_3c;
  char *local_38;
  undefined **local_34;
  uint local_30;
  
  local_30 = (uint)param_4;
  local_4c = &QString::shared_null;
  local_50 = &QString::shared_null;
  local_54 = &QString::shared_null;
  local_58 = &QString::shared_null;
  QString::shared_null = QString::shared_null + 4;
  local_44 = (QString *)&local_54;
  local_48 = (QString *)&local_58;
                    /* try { // try from 005fd67c to 005fd813 has its CatchHandler @ 005fda54 */
  getChnFilamentType((int)&local_5c);
  puVar2 = local_5c;
  local_5c = local_50;
  local_50 = puVar2;
  QString::~QString((QString *)&local_5c);
  local_44 = (QString *)&local_54;
  local_48 = (QString *)&local_58;
  getChnFilamentColor((int)&local_60);
  puVar2 = local_54;
  local_54 = local_60;
  local_60 = puVar2;
  QString::~QString((QString *)&local_60);
  local_44 = (QString *)&local_54;
  local_48 = (QString *)&local_58;
  local_3c = &PTR_s_Internal_Server_Error_00af0000;
  local_38 = "fileType:";
  uVar4 = 0;
  local_34 = &PTR_s_Internal_Server_Error_00af0000;
  do {
    QMutex::lock();
    iVar5 = *(int *)(this + 0x298);
    QMutex::unlock();
    uVar1 = uVar4 & 0x1f;
    uVar4 = uVar4 + 1;
    if ((iVar5 >> uVar1 & 1U) != 0) {
      getChnFilamentType((int)&local_64);
      puVar2 = local_64;
      local_64 = local_4c;
      local_4c = puVar2;
      QString::~QString((QString *)&local_64);
      getChnFilamentColor((int)&local_68);
      puVar2 = local_58;
      local_58 = local_68;
      local_68 = puVar2;
      QString::~QString((QString *)&local_68);
      QDebug::QDebug((QDebug *)&local_70,0);
                    /* try { // try from 005fd818 to 005fd85f has its CatchHandler @ 005fda4c */
      pQVar3 = (QDebug *)QDebug::operator<<((QDebug *)&local_70,"../ad5x/serial/SerialObject.cpp");
      pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,"autoDetectLoad");
      pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,(char *)(local_3c + -0x1964));
      pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,(QString *)&local_4c);
      pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,local_38);
      QDebug::operator<<(pQVar3,(QString *)&local_50);
      QDebug::~QDebug((QDebug *)&local_70);
                    /* try { // try from 005fd86c to 005fd873 has its CatchHandler @ 005fda54 */
      QDebug::QDebug((QDebug *)&local_70,0);
                    /* try { // try from 005fd878 to 005fd8c3 has its CatchHandler @ 005fda38 */
      pQVar3 = (QDebug *)QDebug::operator<<((QDebug *)&local_70,"../ad5x/serial/SerialObject.cpp");
      pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,"autoDetectLoad");
      pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,(char *)(local_34 + -0x195d));
      pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,local_44);
      pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,"fileColor:");
      QDebug::operator<<(pQVar3,local_48);
      QDebug::~QDebug((QDebug *)&local_70);
                    /* try { // try from 005fd8e8 to 005fd94b has its CatchHandler @ 005fda54 */
      if ((((local_4c[2] != 0) && (local_58[2] != 0)) &&
          (iVar5 = QString::operator==((QString *)&local_4c,(QString *)&local_50), iVar5 != 0)) &&
         (local_40 = QString::operator==(local_44,local_48), local_40 != 0)) {
        *(uint *)(this + (param_2 + 0x94) * 4) = uVar4;
        if (((CONCAT31(in_register_0000001d,param_3) == 0) && (local_30 == 0)) &&
           (iVar5 = doAutoDetectLoad(this,uVar4), iVar5 == 0)) {
          local_70 = QString::fromAscii_helper("M25",-1);
                    /* try { // try from 005fd96c to 005fd973 has its CatchHandler @ 005fda5c */
          sendGcodeCmd((QString *)&local_6c,this,(QDebug *)&local_70,1,0,0,0);
          QString::~QString((QString *)&local_6c);
          QString::~QString((QString *)&local_70);
          this[0x8a] = (SerialObject)0x1;
          local_40 = 0;
        }
        goto LAB_005fd760;
      }
    }
    if (uVar4 == 4) {
      local_40 = 0;
      if (local_30 == 0) {
                    /* try { // try from 005fd99c to 005fd9b3 has its CatchHandler @ 005fda54 */
        autoLoadNoFilamentPause(this,param_1,param_2);
        local_6c = QString::fromAscii_helper("M25",-1);
                    /* try { // try from 005fd9d8 to 005fd9df has its CatchHandler @ 005fda00 */
        sendGcodeCmd((QString *)&local_70,this,(QString *)&local_6c,1,0,0,0);
        QString::~QString((QString *)&local_70);
        QString::~QString((QString *)&local_6c);
        this[0x8a] = (SerialObject)0x1;
        local_40 = 0;
      }
LAB_005fd760:
      QString::~QString(local_48);
      QString::~QString(local_44);
      QString::~QString((QString *)&local_50);
      QString::~QString((QString *)&local_4c);
      return local_40;
    }
  } while( true );
}


// ===== FourToOne::changeChannel @ 007a1ba4

/* FourToOne::changeChannel(int, float, float) */

int __thiscall FourToOne::changeChannel(FourToOne *this,int param_1,float param_2,float param_3)

{
  GetConfigFile *pGVar1;
  Config *pCVar2;
  int iVar3;
  QTextStream *pQVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  Data *local_68;
  Data *local_64;
  Data *local_60;
  Data *local_5c;
  QTextStream *local_58 [2];
  char *local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  undefined4 local_3c;
  
  local_3c = 0;
  uVar6 = *(undefined4 *)(this + 0x18);
  uVar11 = (ulonglong)(uint)param_2;
  uVar10 = (ulonglong)(uint)param_3;
  local_64 = (Data *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 007a1c50 to 007a1c57 has its CatchHandler @ 007a20cc */
  SerialObject::sendGcodeCmd(&local_68,uVar6,&local_64,1,0,0,0);
  QString::~QString((QString *)&local_68);
  QString::~QString((QString *)&local_64);
  pGVar1 = (GetConfigFile *)getConfigFile();
  pCVar2 = (Config *)GetConfigFile::configFile(pGVar1);
  iVar3 = Config::getChannel(pCVar2);
  local_3c = 0;
  iVar3 = doLoadAndUnload(this,param_1,iVar3,(float)uVar11,(float)uVar10);
  if (iVar3 != 1) {
    if (iVar3 == 6) {
      return 6;
    }
    if (this[0x34] == (FourToOne)0x0) {
      local_50 = "../ad5x/dialog/fourToOne.cpp";
      local_4c = 
      "::process_server_socket_core(const std::atomic<int>&, socket_t, size_t, time_t, T) [with T = httplib::detail::process_server_socket(const std::atomic<int>&, socket_t, size_t, time_t, time_t, time_t, time_t, time_t, T) [with T = httplib::Server::process_and_close_socket(socket_t)::<lambda(httplib::Stream&, bool, bool&)>; socket_t = int; size_t = unsigned int; time_t = long int]::<lambda(bool, bool&)>; socket_t = int; size_t = unsigned int; time_t = long int]"
      ;
      local_48 = "temp:";
      local_44 = 
      "::process_server_socket_core(const std::atomic<int>&, socket_t, size_t, time_t, T) [with T = httplib::detail::process_server_socket(const std::atomic<int>&, socket_t, size_t, time_t, time_t, time_t, time_t, time_t, T) [with T = httplib::Server::process_and_close_socket(socket_t)::<lambda(httplib::Stream&, bool, bool&)>; socket_t = int; size_t = unsigned int; time_t = long int]::<lambda(bool, bool&)>; socket_t = int; size_t = unsigned int; time_t = long int]"
      ;
      do {
        local_3c = 0;
        fVar7 = (float)MainWindow::getNozzleRightRealTemp(MainWindow::instMainWindow);
        local_3c = 0;
        fVar8 = (float)MainWindow::getNozzleRightTargetTemp(MainWindow::instMainWindow);
        local_3c = 0;
        iVar9 = (int)fVar8;
        pQVar4 = operator_new(0x18);
                    /* try { // try from 007a1ed0 to 007a1ed7 has its CatchHandler @ 007a20e0 */
        local_68 = (Data *)0x2;
        QTextStream::QTextStream(pQVar4,pQVar4 + 8,&local_68);
        *(int **)(pQVar4 + 8) = &QString::shared_null;
        QString::shared_null = QString::shared_null + 1;
        *(undefined4 *)(pQVar4 + 0xc) = 1;
        *(undefined4 *)(pQVar4 + 0x10) = 2;
        pQVar4[0x14] = (QTextStream)0x1;
        pQVar4[0x15] = (QTextStream)0x1;
        local_58[0] = pQVar4;
                    /* try { // try from 007a1f18 to 007a1f1f has its CatchHandler @ 007a20f4 */
        QString::fromAscii((char *)&local_5c,(int)local_50);
                    /* try { // try from 007a1f24 to 007a1f2b has its CatchHandler @ 007a20fc */
        QTextStream::operator<<(pQVar4,(QString *)&local_5c);
        iVar5 = *(int *)local_5c;
        *(int *)local_5c = iVar5 + -1;
        if (iVar5 == 1) {
          QString::free(local_5c);
        }
        if (local_58[0][0x14] != (QTextStream)0x0) {
                    /* try { // try from 007a1f64 to 007a2013 has its CatchHandler @ 007a20f4 */
          QTextStream::operator<<(local_58[0],' ');
        }
        pQVar4 = local_58[0];
                    /* try { // try from 007a1d0c to 007a1d13 has its CatchHandler @ 007a20f4 */
        QString::fromAscii((char *)&local_60,(int)(local_4c + -0x6148));
                    /* try { // try from 007a1d18 to 007a1d1f has its CatchHandler @ 007a2110 */
        QTextStream::operator<<(pQVar4,(QString *)&local_60);
        iVar5 = *(int *)local_60;
        *(int *)local_60 = iVar5 + -1;
        if (iVar5 == 1) {
          QString::free(local_60);
        }
        if (local_58[0][0x14] != (QTextStream)0x0) {
          QTextStream::operator<<(local_58[0],' ');
        }
        pQVar4 = local_58[0];
                    /* try { // try from 007a1d60 to 007a1d67 has its CatchHandler @ 007a20f4 */
        QString::fromAscii((char *)&local_64,(int)local_48);
                    /* try { // try from 007a1d6c to 007a1d73 has its CatchHandler @ 007a2124 */
        QTextStream::operator<<(pQVar4,(QString *)&local_64);
        iVar5 = *(int *)local_64;
        *(int *)local_64 = iVar5 + -1;
        if (iVar5 == 1) {
          QString::free(local_64);
        }
        if (local_58[0][0x14] != (QTextStream)0x0) {
          QTextStream::operator<<(local_58[0],' ');
        }
                    /* try { // try from 007a1dac to 007a1dd7 has its CatchHandler @ 007a20f4 */
        QTextStream::operator<<(local_58[0],(int)fVar7);
        if (local_58[0][0x14] != (QTextStream)0x0) {
          QTextStream::operator<<(local_58[0],' ');
        }
        pQVar4 = local_58[0];
        QString::fromAscii((char *)&local_68,(int)(local_44 + -0x70bc));
                    /* try { // try from 007a1ddc to 007a1de3 has its CatchHandler @ 007a20b0 */
        QTextStream::operator<<(pQVar4,(QString *)&local_68);
        iVar5 = *(int *)local_68;
        *(int *)local_68 = iVar5 + -1;
        if (iVar5 == 1) {
          QString::free(local_68);
        }
        if (local_58[0][0x14] != (QTextStream)0x0) {
          QTextStream::operator<<(local_58[0],' ');
        }
                    /* try { // try from 007a1e1c to 007a1e23 has its CatchHandler @ 007a20f4 */
        QTextStream::operator<<(local_58[0],iVar9);
        if (local_58[0][0x14] != (QTextStream)0x0) {
          QTextStream::operator<<(local_58[0],' ');
        }
        QDebug::~QDebug((QDebug *)local_58);
        if ((iVar9 <= (int)fVar7) && (0 < iVar9)) {
          local_3c = 0;
          SerialObject::cleanFilamentBox
                    (*(SerialObject **)(this + 0x18),param_1,0,(float)uVar11,(float)uVar10,true);
          pGVar1 = (GetConfigFile *)getConfigFile();
          pCVar2 = (Config *)GetConfigFile::configFile(pGVar1);
          Config::setChannel(pCVar2,param_1);
          return iVar3;
        }
        sleep(1);
      } while (this[0x34] == (FourToOne)0x0);
    }
  }
  return 1;
}


// ===== pthreadChangeChannel @ 007a2888

/* pthreadChangeChannel(void*) */

undefined4 pthreadChangeChannel(void *param_1)

{
  QTextStream *pQVar1;
  QTextStream *local_18 [3];
  
  pthread_testcancel();
  pQVar1 = operator_new(0x18);
                    /* try { // try from 007a28bc to 007a28c3 has its CatchHandler @ 007a2938 */
  local_18[0] = (QTextStream *)0x2;
  QTextStream::QTextStream(pQVar1,pQVar1 + 8,local_18);
  *(int **)(pQVar1 + 8) = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
  *(undefined4 *)(pQVar1 + 0xc) = 1;
  *(undefined4 *)(pQVar1 + 0x10) = 0;
  pQVar1[0x14] = (QTextStream)0x1;
  pQVar1[0x15] = (QTextStream)0x1;
  local_18[0] = pQVar1;
                    /* try { // try from 007a2908 to 007a290f has its CatchHandler @ 007a294c */
  QDebug::operator<<((QDebug *)local_18,"pthreadChangeChannel");
  QDebug::~QDebug((QDebug *)local_18);
  FourToOne::changeStart();
  return 0;
}



// ===== SerialObject::clear_go_pos @ 005eceac

/* SerialObject::clear_go_pos() */

void __thiscall SerialObject::clear_go_pos(SerialObject *this)

{
  QString aQStack_10 [4];
  undefined4 local_c;
  
  local_c = QString::fromAscii_helper("G1 X52.5 F12000",-1);
                    /* try { // try from 005ecee8 to 005eceef has its CatchHandler @ 005ecfdc */
  sendGcodeCmd(aQStack_10,this,&local_c,1,0,0,0);
  QString::~QString(aQStack_10);
  QString::~QString((QString *)&local_c);
  local_c = QString::fromAscii_helper("G1 Y220 F12000",-1);
                    /* try { // try from 005ecf2c to 005ecf33 has its CatchHandler @ 005ed000 */
  sendGcodeCmd(aQStack_10,this,&local_c,1,0,0,0);
  QString::~QString(aQStack_10);
  QString::~QString((QString *)&local_c);
  local_c = QString::fromAscii_helper("G1 Y229 F3000",-1);
                    /* try { // try from 005ecf70 to 005ecf77 has its CatchHandler @ 005ecff8 */
  sendGcodeCmd(aQStack_10,this,&local_c,1,0,0,0);
  QString::~QString(aQStack_10);
  QString::~QString((QString *)&local_c);
  local_c = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005ecfb4 to 005ecfbb has its CatchHandler @ 005ecff0 */
  sendGcodeCmd(aQStack_10,this,&local_c,1,0,0,0);
  QString::~QString(aQStack_10);
  QString::~QString((QString *)&local_c);
  return;
}


// ===== SerialObject::printClearGoPos @ 005ed008

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SerialObject::printClearGoPos(float, float) */

void SerialObject::printClearGoPos(float param_1,float param_2)

{
  undefined4 in_a0;
  float in_a1;
  float in_a2;
  undefined4 in_f13;
  QString aQStack_30 [4];
  undefined4 local_2c;
  QString aQStack_28 [4];
  QString aQStack_24 [4];
  undefined4 *local_20 [2];
  undefined4 local_18;
  
  local_18 = 0;
  local_20[0] = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005ed0ac to 005ed0b3 has its CatchHandler @ 005ed2a0 */
  QString::number((double)CONCAT44(in_f13,param_1),SUB81((double)in_a1 + DAT_00ae04f0,0),
                  (int)((ulonglong)((double)in_a1 + DAT_00ae04f0) >> 0x20));
                    /* try { // try from 005ed0c0 to 005ed0c7 has its CatchHandler @ 005ed31c */
  ::operator+((char *)aQStack_28,(QString *)&DAT_00ad8d90);
                    /* try { // try from 005ed0d4 to 005ed0db has its CatchHandler @ 005ed314 */
  ::operator+((QString *)&local_2c,(char *)aQStack_28);
                    /* try { // try from 005ed0f4 to 005ed0fb has its CatchHandler @ 005ed30c */
  sendGcodeCmd(aQStack_30,in_a0,&local_2c,1,0,0,0);
  QString::~QString(aQStack_30);
  QString::~QString((QString *)&local_2c);
  QString::~QString(aQStack_28);
  QString::~QString(aQStack_24);
  QString::~QString((QString *)local_20);
  local_2c = QString::fromAscii_helper("G1 Y220 F12000",-1);
                    /* try { // try from 005ed150 to 005ed157 has its CatchHandler @ 005ed304 */
  sendGcodeCmd(aQStack_30,in_a0,&local_2c,1,0,0,0);
  QString::~QString(aQStack_30);
  QString::~QString((QString *)&local_2c);
  local_20[0] = (undefined4 *)QString::fromAscii_helper("%1",-1);
  local_18 = 0;
                    /* try { // try from 005ed1b4 to 005ed1bb has its CatchHandler @ 005ed2fc */
  QString::number((double)CONCAT44(in_f13,param_1),SUB81((double)(in_a2 + _DAT_00ae04f8),0),
                  (int)((ulonglong)(double)(in_a2 + _DAT_00ae04f8) >> 0x20));
                    /* try { // try from 005ed1c8 to 005ed1cf has its CatchHandler @ 005ed2f4 */
  ::operator+((char *)aQStack_28,(QString *)&DAT_00ad8d80);
                    /* try { // try from 005ed1dc to 005ed1e3 has its CatchHandler @ 005ed2ec */
  ::operator+((QString *)&local_2c,(char *)aQStack_28);
                    /* try { // try from 005ed1fc to 005ed203 has its CatchHandler @ 005ed2c8 */
  sendGcodeCmd(aQStack_30,in_a0,&local_2c,1,0,0,0);
  QString::~QString(aQStack_30);
  QString::~QString((QString *)&local_2c);
  QString::~QString(aQStack_28);
  QString::~QString(aQStack_24);
  QString::~QString((QString *)local_20);
  local_2c = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005ed258 to 005ed25f has its CatchHandler @ 005ed2b4 */
  sendGcodeCmd(aQStack_30,in_a0,&local_2c,1,0,0,0);
  QString::~QString(aQStack_30);
  QString::~QString((QString *)&local_2c);
  return;
}


// ===== SerialObject::clear_nozzle @ 005ed324

/* SerialObject::clear_nozzle() */

void __thiscall SerialObject::clear_nozzle(SerialObject *this)

{
  QString aQStack_18 [4];
  undefined4 local_14 [2];
  
  local_14[0] = QString::fromAscii_helper("G1 X73 F9000",-1);
                    /* try { // try from 005ed364 to 005ed36b has its CatchHandler @ 005ed49c */
  sendGcodeCmd(aQStack_18,this,local_14,1,0,0,0);
  QString::~QString(aQStack_18);
  QString::~QString((QString *)local_14);
  local_14[0] = QString::fromAscii_helper("G1 X65",-1);
                    /* try { // try from 005ed3a8 to 005ed3af has its CatchHandler @ 005ed4c8 */
  sendGcodeCmd(aQStack_18,this,local_14,1,0,0,0);
  QString::~QString(aQStack_18);
  QString::~QString((QString *)local_14);
  local_14[0] = QString::fromAscii_helper("G1 X73",-1);
                    /* try { // try from 005ed3ec to 005ed3f3 has its CatchHandler @ 005ed4c0 */
  sendGcodeCmd(aQStack_18,this,local_14,1,0,0,0);
  QString::~QString(aQStack_18);
  QString::~QString((QString *)local_14);
  local_14[0] = QString::fromAscii_helper("G1 X65",-1);
                    /* try { // try from 005ed42c to 005ed433 has its CatchHandler @ 005ed4b8 */
  sendGcodeCmd(aQStack_18,this,local_14,1,0,0,0);
  QString::~QString(aQStack_18);
  QString::~QString((QString *)local_14);
  local_14[0] = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005ed470 to 005ed477 has its CatchHandler @ 005ed4b0 */
  sendGcodeCmd(aQStack_18,this,local_14,1,0,0,0);
  QString::~QString(aQStack_18);
  QString::~QString((QString *)local_14);
  return;
}


// ===== SerialObject::clear_brush @ 005ed4d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SerialObject::clear_brush(float) */

void SerialObject::clear_brush(float param_1)

{
  undefined4 in_a0;
  float in_a1;
  undefined4 in_f13;
  QString aQStack_38 [4];
  undefined4 local_34;
  QString aQStack_30 [4];
  QString aQStack_2c [4];
  undefined4 local_28 [2];
  undefined4 local_20;
  
  local_20 = 0;
  local_34 = QString::fromAscii_helper("G1 Y220 F3000",-1);
                    /* try { // try from 005ed558 to 005ed55f has its CatchHandler @ 005ed8c8 */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  local_34 = QString::fromAscii_helper("G1 X78 F12000",-1);
                    /* try { // try from 005ed59c to 005ed5a3 has its CatchHandler @ 005ed960 */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  local_28[0] = QString::fromAscii_helper("%1",-1);
  local_20 = 0;
                    /* try { // try from 005ed600 to 005ed607 has its CatchHandler @ 005ed958 */
  QString::number((double)CONCAT44(in_f13,param_1),SUB81((double)(in_a1 + _DAT_00ae04f8),0),
                  (int)((ulonglong)(double)(in_a1 + _DAT_00ae04f8) >> 0x20));
                    /* try { // try from 005ed614 to 005ed61b has its CatchHandler @ 005ed950 */
  ::operator+((char *)aQStack_30,(QString *)&DAT_00ad8d80);
                    /* try { // try from 005ed628 to 005ed62f has its CatchHandler @ 005ed948 */
  ::operator+((QString *)&local_34,(char *)aQStack_30);
                    /* try { // try from 005ed648 to 005ed64f has its CatchHandler @ 005ed91c */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  QString::~QString(aQStack_30);
  QString::~QString(aQStack_2c);
  QString::~QString((QString *)local_28);
  local_34 = QString::fromAscii_helper("G1 X65 F12000",-1);
                    /* try { // try from 005ed6a4 to 005ed6ab has its CatchHandler @ 005ed914 */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  local_34 = QString::fromAscii_helper("G1 X73",-1);
                    /* try { // try from 005ed6e8 to 005ed6ef has its CatchHandler @ 005ed90c */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  local_34 = QString::fromAscii_helper("G1 X65",-1);
                    /* try { // try from 005ed72c to 005ed733 has its CatchHandler @ 005ed904 */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  local_34 = QString::fromAscii_helper("G1 X73",-1);
                    /* try { // try from 005ed76c to 005ed773 has its CatchHandler @ 005ed8fc */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  local_34 = QString::fromAscii_helper("G1 X65",-1);
                    /* try { // try from 005ed7ac to 005ed7b3 has its CatchHandler @ 005ed8f4 */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  local_34 = QString::fromAscii_helper("G1 X78",-1);
                    /* try { // try from 005ed7f0 to 005ed7f7 has its CatchHandler @ 005ed8ec */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  local_34 = QString::fromAscii_helper("G1 Y220",-1);
                    /* try { // try from 005ed834 to 005ed83b has its CatchHandler @ 005ed8e4 */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  local_34 = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005ed878 to 005ed87f has its CatchHandler @ 005ed8dc */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  return;
}


// ===== SerialObject::clearBrush @ 005ed968

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SerialObject::clearBrush(float) */

void SerialObject::clearBrush(float param_1)

{
  undefined4 in_a0;
  float in_a1;
  undefined4 in_f13;
  QString aQStack_38 [4];
  undefined4 local_34;
  QString aQStack_30 [4];
  QString aQStack_2c [4];
  undefined4 local_28 [2];
  undefined4 local_20;
  
  local_20 = 0;
  local_34 = QString::fromAscii_helper("G1 Y220 F3000",-1);
                    /* try { // try from 005ed9f0 to 005ed9f7 has its CatchHandler @ 005edd1c */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  local_34 = QString::fromAscii_helper("G1 X78 F12000",-1);
                    /* try { // try from 005eda34 to 005eda3b has its CatchHandler @ 005eddac */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  local_28[0] = QString::fromAscii_helper("%1",-1);
  local_20 = 0;
                    /* try { // try from 005eda98 to 005eda9f has its CatchHandler @ 005edda4 */
  QString::number((double)CONCAT44(in_f13,param_1),SUB81((double)(in_a1 + _DAT_00ae04f8),0),
                  (int)((ulonglong)(double)(in_a1 + _DAT_00ae04f8) >> 0x20));
                    /* try { // try from 005edaac to 005edab3 has its CatchHandler @ 005edd9c */
  ::operator+((char *)aQStack_30,(QString *)&DAT_00ad8d80);
                    /* try { // try from 005edac0 to 005edac7 has its CatchHandler @ 005edd94 */
  ::operator+((QString *)&local_34,(char *)aQStack_30);
                    /* try { // try from 005edae0 to 005edae7 has its CatchHandler @ 005edd68 */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  QString::~QString(aQStack_30);
  QString::~QString(aQStack_2c);
  QString::~QString((QString *)local_28);
  local_34 = QString::fromAscii_helper("G1 X65 F12000",-1);
                    /* try { // try from 005edb3c to 005edb43 has its CatchHandler @ 005edd60 */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  local_34 = QString::fromAscii_helper("G1 X73",-1);
                    /* try { // try from 005edb80 to 005edb87 has its CatchHandler @ 005edd58 */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  local_34 = QString::fromAscii_helper("G1 X65",-1);
                    /* try { // try from 005edbc4 to 005edbcb has its CatchHandler @ 005edd50 */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  local_34 = QString::fromAscii_helper("G1 X73",-1);
                    /* try { // try from 005edc04 to 005edc0b has its CatchHandler @ 005edd48 */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  local_34 = QString::fromAscii_helper("G1 X65",-1);
                    /* try { // try from 005edc44 to 005edc4b has its CatchHandler @ 005edd40 */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  local_34 = QString::fromAscii_helper("G1 X78",-1);
                    /* try { // try from 005edc88 to 005edc8f has its CatchHandler @ 005edd38 */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  local_34 = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005edccc to 005edcd3 has its CatchHandler @ 005edd30 */
  sendGcodeCmd(aQStack_38,in_a0,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  return;
}


// ===== SerialObject::filamentCut @ 005eddb4

/* SerialObject::filamentCut() */

void SerialObject::filamentCut(void)

{
  GetConfigFile *pGVar1;
  Config *pCVar2;
  undefined4 in_a0;
  float in_f0;
  float in_f12;
  undefined4 in_f13;
  float in_f14;
  float fVar3;
  QString aQStack_50 [4];
  undefined4 local_4c;
  QString aQStack_48 [4];
  QString aQStack_44 [4];
  undefined4 *local_40 [3];
  undefined4 local_34;
  
  local_34 = 0;
  pGVar1 = (GetConfigFile *)getConfigFile();
  pCVar2 = (Config *)GetConfigFile::configFile(pGVar1);
  local_34 = 0;
  Config::getLeftExtruderXOffset(pCVar2);
  local_34 = 0;
  pGVar1 = (GetConfigFile *)getConfigFile();
  pCVar2 = (Config *)GetConfigFile::configFile(pGVar1);
  local_34 = 0;
  Config::getLeftExtruderYOffset(pCVar2);
  local_34 = 0;
  local_4c = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005edea4 to 005edeab has its CatchHandler @ 005ee334 */
  sendGcodeCmd(aQStack_50,in_a0,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  local_4c = QString::fromAscii_helper("G90",-1);
                    /* try { // try from 005edee8 to 005edeef has its CatchHandler @ 005ee3e4 */
  sendGcodeCmd(aQStack_50,in_a0,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  local_4c = QString::fromAscii_helper("G1 Y10 F18000",-1);
                    /* try { // try from 005edf2c to 005edf33 has its CatchHandler @ 005ee3dc */
  sendGcodeCmd(aQStack_50,in_a0,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  pGVar1 = (GetConfigFile *)getConfigFile();
  pCVar2 = (Config *)GetConfigFile::configFile(pGVar1);
  local_34 = 0;
  Config::getCutXOffset(pCVar2);
  local_34 = 0;
  fVar3 = in_f0;
  pGVar1 = (GetConfigFile *)getConfigFile();
  pCVar2 = (Config *)GetConfigFile::configFile(pGVar1);
  local_34 = 0;
  Config::getCutYOffset(pCVar2);
  local_34 = 0;
  local_40[0] = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005ee000 to 005ee007 has its CatchHandler @ 005ee3d4 */
  QString::number((double)CONCAT44(in_f13,in_f12),SUB81((double)in_f0 - DAT_00ae04e0,0),
                  (int)((ulonglong)((double)in_f0 - DAT_00ae04e0) >> 0x20));
                    /* try { // try from 005ee014 to 005ee01b has its CatchHandler @ 005ee3cc */
  ::operator+((char *)aQStack_48,(QString *)&DAT_00ad8d80);
                    /* try { // try from 005ee028 to 005ee02f has its CatchHandler @ 005ee3c4 */
  ::operator+((QString *)&local_4c,(char *)aQStack_48);
                    /* try { // try from 005ee048 to 005ee04f has its CatchHandler @ 005ee3bc */
  sendGcodeCmd(aQStack_50,in_a0,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  QString::~QString(aQStack_48);
  QString::~QString(aQStack_44);
  QString::~QString((QString *)local_40);
  local_4c = QString::fromAscii_helper("G1 X20  F12000",-1);
                    /* try { // try from 005ee0a4 to 005ee0ab has its CatchHandler @ 005ee3b4 */
  sendGcodeCmd(aQStack_50,in_a0,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  local_34 = 0;
  local_40[0] = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005ee110 to 005ee117 has its CatchHandler @ 005ee3ac */
  QString::number((double)CONCAT44(in_f13,in_f12),SUB81((double)fVar3 - DAT_00ae04e8,0),
                  (int)((ulonglong)((double)fVar3 - DAT_00ae04e8) >> 0x20));
                    /* try { // try from 005ee124 to 005ee12b has its CatchHandler @ 005ee3a4 */
  ::operator+((char *)aQStack_48,(QString *)&DAT_00ad8d90);
                    /* try { // try from 005ee138 to 005ee13f has its CatchHandler @ 005ee39c */
  ::operator+((QString *)&local_4c,(char *)aQStack_48);
                    /* try { // try from 005ee158 to 005ee15f has its CatchHandler @ 005ee370 */
  sendGcodeCmd(aQStack_50,in_a0,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  QString::~QString(aQStack_48);
  QString::~QString(aQStack_44);
  QString::~QString((QString *)local_40);
  local_4c = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005ee1b0 to 005ee1b7 has its CatchHandler @ 005ee368 */
  sendGcodeCmd(aQStack_50,in_a0,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  local_4c = QString::fromAscii_helper("G92 E0",-1);
                    /* try { // try from 005ee1f4 to 005ee1fb has its CatchHandler @ 005ee360 */
  sendGcodeCmd(aQStack_50,in_a0,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  local_4c = QString::fromAscii_helper("G1 E-5 F600",-1);
                    /* try { // try from 005ee238 to 005ee23f has its CatchHandler @ 005ee358 */
  sendGcodeCmd(aQStack_50,in_a0,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  local_4c = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005ee278 to 005ee27f has its CatchHandler @ 005ee350 */
  sendGcodeCmd(aQStack_50,in_a0,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  local_34 = 0;
  printClearGoPos(in_f12,in_f14);
  local_4c = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005ee2d8 to 005ee2df has its CatchHandler @ 005ee348 */
  sendGcodeCmd(aQStack_50,in_a0,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  return;
}


// ===== SerialObject::clearCurrentChnFilament @ 005eeedc

/* SerialObject::clearCurrentChnFilament(int, float, float) */

void SerialObject::clearCurrentChnFilament(int param_1,float param_2,float param_3)

{
  float in_f12;
  float in_f14;
  
  printClearGoPos(in_f12,in_f14);
  flushFilamentSecond(param_1,(int)param_2);
  flushFilamentBrush(SUB41(param_1,0),0.0,param_3);
  return;
}


// ===== SerialObject::setPrintChannel @ 005f159c

/* SerialObject::setPrintChannel(int, int) */

void __thiscall SerialObject::setPrintChannel(SerialObject *this,int param_1,int param_2)

{
  QDebug *pQVar1;
  undefined4 *puVar2;
  QDebug aQStack_20 [12];
  
  QDebug::QDebug(aQStack_20,0);
                    /* try { // try from 005f15d4 to 005f16b7 has its CatchHandler @ 005f16c0 */
  pQVar1 = (QDebug *)QDebug::operator<<(aQStack_20,"../ad5x/serial/SerialObject.cpp");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"setPrintChannel");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"channel: ");
  QTextStream::operator<<(*(QTextStream **)pQVar1,param_1 + 1);
  if ((*(QTextStream **)pQVar1)[0x14] != (QTextStream)0x0) {
    QTextStream::operator<<(*(QTextStream **)pQVar1,' ');
  }
  puVar2 = (undefined4 *)QDebug::operator<<(pQVar1,"T");
  QTextStream::operator<<((QTextStream *)*puVar2,param_2);
  if (((QTextStream *)*puVar2)[0x14] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*puVar2,' ');
  }
  QDebug::~QDebug(aQStack_20);
  if (param_2 < 0x10) {
    *(uint *)(this + 0x294) = *(uint *)(this + 0x294) | 1 << (param_2 & 0x1fU);
    *(int *)(this + (param_2 + 0x94) * 4) = param_1 + 1;
  }
  return;
}


// ===== SerialObject::setPrintChannelNum @ 005f16d4

/* SerialObject::setPrintChannelNum(int) */

void __thiscall SerialObject::setPrintChannelNum(SerialObject *this,int param_1)

{
  bool bVar1;
  QDebug *pQVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  SerialObject *pSVar7;
  QDebug aQStack_18 [8];
  
  QDebug::QDebug(aQStack_18,0);
                    /* try { // try from 005f1704 to 005f17fb has its CatchHandler @ 005f1804 */
  pQVar2 = (QDebug *)QDebug::operator<<(aQStack_18,"../ad5x/serial/SerialObject.cpp");
  pQVar2 = (QDebug *)QDebug::operator<<(pQVar2,"setPrintChannelNum");
  puVar3 = (undefined4 *)QDebug::operator<<(pQVar2,"num: ");
  QTextStream::operator<<((QTextStream *)*puVar3,param_1);
  if (((QTextStream *)*puVar3)[0x14] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*puVar3,' ');
  }
  QDebug::~QDebug(aQStack_18);
  if (param_1 < 0x11) {
    uVar5 = 0;
    do {
      uVar4 = uVar5 + 1;
      if ((*(int *)(this + 0x294) >> (uVar5 & 0x1f) & 1U) != 0) {
        iVar6 = *(int *)(this + (uVar5 + 0x94) * 4);
        break;
      }
      iVar6 = 0;
      uVar5 = uVar4;
    } while (uVar4 != 0x10);
    pSVar7 = this + 0x250;
    uVar5 = 0;
    bVar1 = false;
    do {
      if ((*(int *)(this + 0x294) >> (uVar5 & 0x1f) & 1U) != 0) {
        bVar1 = true;
        if (*(int *)pSVar7 != iVar6) goto LAB_005f17d8;
      }
      uVar5 = uVar5 + 1;
      pSVar7 = pSVar7 + 4;
    } while (uVar5 != 0x10);
    if (bVar1) {
      param_1 = 1;
    }
LAB_005f17d8:
    *(int *)(this + 0x290) = param_1;
  }
  return;
}


// ===== SerialObject::clearAllFilament @ 005f3e14

/* SerialObject::clearAllFilament(float, float) */

undefined4 SerialObject::clearAllFilament(float param_1,float param_2)

{
  SerialObject SVar1;
  undefined4 uVar2;
  GetConfigFile *this;
  Config *this_00;
  QTextStream *pQVar3;
  int iVar4;
  SerialObject *in_a0;
  uint in_a1;
  int iVar5;
  ulonglong uVar6;
  Data *local_d8 [33];
  Data *local_54;
  Data *local_50;
  QTextStream *local_4c;
  float local_48;
  PrintContinueConfig *local_44;
  undefined4 local_3c;
  
  local_3c = 0;
  *(undefined4 *)(in_a0 + 0x144) = 1;
  uVar6 = (ulonglong)in_a1;
  uVar2 = PowerSavingModeFile();
  local_44 = (PrintContinueConfig *)(in_a0 + 0xd4);
  PrintContinueConfig::PrintContinueConfig((PrintContinueConfig *)local_d8,local_44);
                    /* try { // try from 005f3eb4 to 005f3ebb has its CatchHandler @ 005f42cc */
  CPowerSavingModeFile::setPowerSavingMode(uVar2,local_d8);
  PrintContinueConfig::~PrintContinueConfig((PrintContinueConfig *)local_d8);
  this = (GetConfigFile *)getConfigFile();
  this_00 = (Config *)GetConfigFile::configFile(this);
  local_48 = (float)Config::getChannel(this_00);
  iVar5 = 0;
  while( true ) {
    pQVar3 = operator_new(0x18);
                    /* try { // try from 005f3f18 to 005f3f1f has its CatchHandler @ 005f42e8 */
    local_d8[0] = (Data *)0x2;
    QTextStream::QTextStream(pQVar3,pQVar3 + 8,local_d8);
    *(int **)(pQVar3 + 8) = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar3 + 0xc) = 1;
    *(undefined4 *)(pQVar3 + 0x10) = 0;
    pQVar3[0x14] = (QTextStream)0x1;
    pQVar3[0x15] = (QTextStream)0x1;
    local_4c = pQVar3;
                    /* try { // try from 005f3f5c to 005f3f63 has its CatchHandler @ 005f42e0 */
    QString::fromAscii((char *)&local_50,0xae8970);
                    /* try { // try from 005f3f68 to 005f3f6f has its CatchHandler @ 005f42a4 */
    QTextStream::operator<<(pQVar3,(QString *)&local_50);
    iVar4 = *(int *)local_50;
    *(int *)local_50 = iVar4 + -1;
    if (iVar4 == 1) {
      QString::free(local_50);
    }
    if (local_4c[0x14] != (QTextStream)0x0) {
                    /* try { // try from 005f40d8 to 005f4123 has its CatchHandler @ 005f42e0 */
      QTextStream::operator<<(local_4c,' ');
    }
    pQVar3 = local_4c;
                    /* try { // try from 005f3fb0 to 005f3fb7 has its CatchHandler @ 005f42e0 */
    QString::fromAscii((char *)&local_54,0xaeab24);
                    /* try { // try from 005f3fbc to 005f3fc3 has its CatchHandler @ 005f4288 */
    QTextStream::operator<<(pQVar3,(QString *)&local_54);
    iVar4 = *(int *)local_54;
    *(int *)local_54 = iVar4 + -1;
    if (iVar4 == 1) {
      QString::free(local_54);
    }
    if (local_4c[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_4c,' ');
    }
    pQVar3 = local_4c;
                    /* try { // try from 005f4004 to 005f400b has its CatchHandler @ 005f42e0 */
    QString::fromAscii((char *)local_d8,0xae1a40);
                    /* try { // try from 005f4010 to 005f4017 has its CatchHandler @ 005f42b8 */
    QTextStream::operator<<(pQVar3,(QString *)local_d8);
    iVar4 = *(int *)local_d8[0];
    *(int *)local_d8[0] = iVar4 + -1;
    if (iVar4 == 1) {
      QString::free(local_d8[0]);
    }
    if (local_4c[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_4c,' ');
    }
                    /* try { // try from 005f4050 to 005f4057 has its CatchHandler @ 005f42e0 */
    QTextStream::operator<<(local_4c,iVar5);
    if (local_4c[0x14] == (QTextStream)0x0) {
      QDebug::~QDebug((QDebug *)&local_4c);
      SVar1 = in_a0[0x89];
    }
    else {
      QTextStream::operator<<(local_4c,' ');
      QDebug::~QDebug((QDebug *)&local_4c);
      SVar1 = in_a0[0x89];
    }
    if (SVar1 != (SerialObject)0x0) {
      return 1;
    }
    if (in_a0[0x8a] != (SerialObject)0x0) {
      return 1;
    }
    if (iVar5 == 8) break;
    local_3c = 0;
    clearCurrentChnFilament((int)in_a0,local_48,(float)uVar6);
    iVar4 = checkFilamentSenser(in_a0);
    iVar5 = iVar5 + 1;
    if (iVar4 == 0) {
      local_54 = (Data *)QString::fromAscii_helper("G1 Y220 F12000",-1);
                    /* try { // try from 005f41e4 to 005f41eb has its CatchHandler @ 005f4274 */
      sendGcodeCmd(local_d8,in_a0,&local_54,1,0,0,0);
      QString::~QString((QString *)local_d8);
      QString::~QString((QString *)&local_54);
      local_54 = (Data *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005f4228 to 005f422f has its CatchHandler @ 005f4304 */
      sendGcodeCmd(local_d8,in_a0,&local_54,1,0,0,0);
      QString::~QString((QString *)local_d8);
      QString::~QString((QString *)&local_54);
      *(undefined4 *)(in_a0 + 0x144) = 0;
      uVar2 = PowerSavingModeFile();
      PrintContinueConfig::PrintContinueConfig((PrintContinueConfig *)local_d8,local_44);
                    /* try { // try from 005f425c to 005f4263 has its CatchHandler @ 005f42fc */
      CPowerSavingModeFile::setPowerSavingMode(uVar2,local_d8);
      PrintContinueConfig::~PrintContinueConfig((PrintContinueConfig *)local_d8);
      return 0;
    }
    sleep(1);
  }
  clearOldFilament(in_a0,(int)local_48);
  return 1;
}


// ===== SerialObject::checkPurgeOldFilament @ 005f454c

/* SerialObject::checkPurgeOldFilament(int, float, float) */

uint SerialObject::checkPurgeOldFilament(int param_1,float param_2,float param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  QDebug *pQVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  QString aQStack_70 [4];
  undefined4 *local_6c;
  char *local_68;
  char *local_64;
  undefined **local_60;
  char *local_5c;
  char *local_58;
  int local_54;
  undefined **local_50;
  char *local_4c;
  undefined4 *local_48;
  undefined4 local_3c;
  
  local_3c = 0;
  uVar8 = (ulonglong)(uint)param_3;
  iVar2 = checkFilamentSenser((SerialObject *)param_1);
  uVar6 = 0;
  if (iVar2 != 0) {
    iVar2 = getFilamentTypeFristSpeed((SerialObject *)param_1,(int)param_2,true);
    local_48 = &QString::shared_null;
    local_7c = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005f466c to 005f4673 has its CatchHandler @ 005f4df0 */
    QString::number((int)&local_80,iVar2);
                    /* try { // try from 005f4684 to 005f468b has its CatchHandler @ 005f4e04 */
    local_50 = &PTR_s_Internal_Server_Error_00af0000;
    ::operator+((char *)&local_84,(QString *)"M106 S");
                    /* try { // try from 005f46a4 to 005f46ab has its CatchHandler @ 005f4e18 */
    sendGcodeCmd(&local_88,param_1,&local_84,1,0,0,0);
    QString::~QString((QString *)&local_88);
    QString::~QString((QString *)&local_84);
    QString::~QString((QString *)&local_80);
    QString::~QString((QString *)&local_7c);
    local_4c = "g()";
    local_84 = QString::fromAscii_helper("G92 E0",-1);
                    /* try { // try from 005f46fc to 005f4703 has its CatchHandler @ 005f4e2c */
    sendGcodeCmd(&local_88,param_1,&local_84,1,0,0,0);
    QString::~QString((QString *)&local_88);
    QString::~QString((QString *)&local_84);
    iVar2 = getFilamentTypeFristSpeed((SerialObject *)param_1,(int)param_2,false);
    local_6c = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005f474c to 005f4753 has its CatchHandler @ 005f4e40 */
    QString::number((int)aQStack_70,0x5a);
                    /* try { // try from 005f4760 to 005f4767 has its CatchHandler @ 005f4e54 */
    ::operator+((char *)&local_74,(QString *)&DAT_00ad97cc);
                    /* try { // try from 005f4774 to 005f477b has its CatchHandler @ 005f4e68 */
    ::operator+((QString *)&local_78,(char *)&local_74);
    local_7c = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005f47a0 to 005f47a7 has its CatchHandler @ 005f4e7c */
    QString::number((int)&local_80,iVar2);
                    /* try { // try from 005f47b0 to 005f47b7 has its CatchHandler @ 005f4e98 */
    ::operator+((QString *)&local_84,(QString *)&local_78);
                    /* try { // try from 005f47d0 to 005f47d7 has its CatchHandler @ 005f4eac */
    sendGcodeCmd(&local_88,param_1,&local_84,1,0,0,0);
    QString::~QString((QString *)&local_88);
    QString::~QString((QString *)&local_84);
    QString::~QString((QString *)&local_80);
    QString::~QString((QString *)&local_7c);
    QString::~QString((QString *)&local_78);
    QString::~QString((QString *)&local_74);
    QString::~QString(aQStack_70);
    QString::~QString((QString *)&local_6c);
    iVar2 = getFilamentTypeTime(param_1);
    local_74 = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined1 *)(param_1 + 0x2f0) = 1;
    if ((-1 < iVar2) && (*(char *)(param_1 + 0x2e3) == '\0')) {
      local_68 = 
      "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
      ;
      local_64 = "ok";
      local_60 = &PTR_s_Internal_Server_Error_00af0000;
      local_5c = "checkPurgeOldFilament";
      iVar5 = 0;
      iVar7 = 0;
      local_58 = 
      "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
      ;
      do {
        iVar5 = iVar5 + 1;
        local_88 = QString::fromAscii_helper(local_68 + -0x2424,-1);
                    /* try { // try from 005f48e4 to 005f48eb has its CatchHandler @ 005f4ec8 */
        sendCmdToUart4(&local_78,param_1,&local_88);
        puVar1 = local_74;
        local_74 = local_78;
        local_78 = puVar1;
        QString::~QString((QString *)&local_78);
        QString::~QString((QString *)&local_88);
                    /* try { // try from 005f4910 to 005f4917 has its CatchHandler @ 005f4ec0 */
        local_88 = QString::fromAscii_helper(local_64,-1);
                    /* try { // try from 005f4928 to 005f492f has its CatchHandler @ 005f4ed0 */
        iVar3 = QString::indexOf(&local_74,&local_88,0,1);
        if (iVar3 == -1) {
          QString::~QString((QString *)&local_88);
                    /* try { // try from 005f48a4 to 005f48d7 has its CatchHandler @ 005f4ec0 */
          sleep(1);
        }
        else {
          QString::~QString((QString *)&local_88);
                    /* try { // try from 005f4948 to 005f494f has its CatchHandler @ 005f4ec0 */
          local_78 = (undefined4 *)QString::fromAscii_helper("[: ]",-1);
                    /* try { // try from 005f4960 to 005f4967 has its CatchHandler @ 005f4ed8 */
          QRegExp::QRegExp((QRegExp *)&local_7c,&local_78,1,0);
                    /* try { // try from 005f498c to 005f4993 has its CatchHandler @ 005f4eec */
          local_80 = 1;
          QString::section(&local_84,&local_74,&local_7c,5,5,&local_80);
                    /* try { // try from 005f4998 to 005f499f has its CatchHandler @ 005f4f00 */
          QString::trimmed();
                    /* try { // try from 005f49a8 to 005f49af has its CatchHandler @ 005f4f14 */
          local_54 = QString::toInt((bool *)&local_88,0);
          QString::~QString((QString *)&local_88);
          QString::~QString((QString *)&local_84);
          QRegExp::~QRegExp((QRegExp *)&local_7c);
          QString::~QString((QString *)&local_78);
                    /* try { // try from 005f49d8 to 005f49df has its CatchHandler @ 005f4ec0 */
          local_78 = (undefined4 *)QString::fromAscii_helper("[: ]",-1);
                    /* try { // try from 005f49f0 to 005f49f7 has its CatchHandler @ 005f4f28 */
          QRegExp::QRegExp((QRegExp *)&local_7c,&local_78,1,0);
                    /* try { // try from 005f4a1c to 005f4a23 has its CatchHandler @ 005f4f30 */
          local_80 = 1;
          QString::section(&local_84,&local_74,&local_7c,0xb,0xb,&local_80);
                    /* try { // try from 005f4a28 to 005f4a2f has its CatchHandler @ 005f4f38 */
          QString::trimmed();
                    /* try { // try from 005f4a38 to 005f4a3f has its CatchHandler @ 005f4f40 */
          iVar3 = QString::toInt((bool *)&local_88,0);
          QString::~QString((QString *)&local_88);
          QString::~QString((QString *)&local_84);
          QRegExp::~QRegExp((QRegExp *)&local_7c);
          QString::~QString((QString *)&local_78);
                    /* try { // try from 005f4a68 to 005f4a6f has its CatchHandler @ 005f4ec0 */
          QDebug::QDebug((QDebug *)&local_88,0);
                    /* try { // try from 005f4a78 to 005f4afb has its CatchHandler @ 005f4da4 */
          pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)&local_88,(char *)(local_60 + -0x1da4));
          pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,local_5c);
          pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,local_58 + -0x2420);
          pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,(QString *)&local_74);
          pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"chn:");
          pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,(int)param_2);
          pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"timeCnt:");
          pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,iVar5);
          pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"time:");
          QDebug::operator<<(pQVar4,iVar2);
          QDebug::~QDebug((QDebug *)&local_88);
          if (iVar3 == 0) {
            iVar7 = iVar7 + 1;
            if (iVar2 < iVar7) {
              uVar6 = ~(local_54 >> ((uint)param_2 & 0x1f)) & 1;
              goto LAB_005f4b34;
            }
          }
          else {
            iVar7 = 0;
          }
                    /* try { // try from 005f4b1c to 005f4b43 has its CatchHandler @ 005f4ec0 */
          sleep(1);
        }
      } while ((iVar5 <= iVar2) && (*(char *)(param_1 + 0x2e3) == '\0'));
    }
    uVar6 = 0;
LAB_005f4b34:
    local_88 = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005f4b60 to 005f4b67 has its CatchHandler @ 005f4f48 */
    sendGcodeCmd(&local_7c,param_1,&local_88,1,0,0,0);
    QString::~QString((QString *)&local_7c);
    QString::~QString((QString *)&local_88);
                    /* try { // try from 005f4b80 to 005f4b87 has its CatchHandler @ 005f4ec0 */
    iVar2 = getFilamentTypeSecondSpeed((SerialObject *)param_1,(int)param_2,true);
    local_7c = local_48;
    QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005f4bb0 to 005f4bb7 has its CatchHandler @ 005f4f50 */
    QString::number((int)&local_84,iVar2);
                    /* try { // try from 005f4bc4 to 005f4bcb has its CatchHandler @ 005f4f64 */
    ::operator+((char *)&local_88,(QString *)(local_50 + -0x1a85));
                    /* try { // try from 005f4be4 to 005f4beb has its CatchHandler @ 005f4f78 */
    sendGcodeCmd(&local_80,param_1,&local_88,1,0,0,0);
    QString::~QString((QString *)&local_80);
    QString::~QString((QString *)&local_88);
    QString::~QString((QString *)&local_84);
    QString::~QString((QString *)&local_7c);
    local_3c = 0;
                    /* try { // try from 005f4c28 to 005f4c57 has its CatchHandler @ 005f4ec0 */
    flushFilamentBrush(SUB41(param_1,0),0.0,(float)uVar8);
    if (uVar6 != 0) {
      iVar2 = 0;
      QDebug::QDebug((QDebug *)&local_88,0);
      while( true ) {
                    /* try { // try from 005f4c5c to 005f4c7b has its CatchHandler @ 005f4dc0 */
        pQVar4 = (QDebug *)QDebug::operator<<((QDebug *)&local_88,"checkPurgeOldFilament");
        pQVar4 = (QDebug *)QDebug::operator<<(pQVar4,"clearCurrentChnFilament->timeCount:");
        QDebug::operator<<(pQVar4,iVar2);
        QDebug::~QDebug((QDebug *)&local_88);
        local_3c = 0;
                    /* try { // try from 005f4ca0 to 005f4d07 has its CatchHandler @ 005f4ec0 */
        clearCurrentChnFilament(param_1,(float)((int)param_2 + 1),(float)uVar8);
        uVar6 = checkFilamentSenser((SerialObject *)param_1);
        if (uVar6 == 0) break;
        iVar2 = iVar2 + 1;
        if ((iVar2 == 8) || (uVar6 = (uint)*(byte *)(param_1 + 0x2e3), uVar6 != 0))
        goto LAB_005f4d00;
        sleep(1);
        QDebug::QDebug((QDebug *)&local_88,0);
      }
    }
    uVar6 = 0;
LAB_005f4d00:
    local_88 = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005f4d24 to 005f4d2b has its CatchHandler @ 005f4dc8 */
    sendGcodeCmd(&local_84,param_1,&local_88,1,0,0,0);
    QString::~QString((QString *)&local_84);
    QString::~QString((QString *)&local_88);
                    /* try { // try from 005f4d44 to 005f4d4b has its CatchHandler @ 005f4ec0 */
    local_84 = QString::fromAscii_helper(local_4c + 0x1de8,-1);
                    /* try { // try from 005f4d68 to 005f4d6f has its CatchHandler @ 005f4ddc */
    sendGcodeCmd(&local_88,param_1,&local_84,1,0,0,0);
    QString::~QString((QString *)&local_88);
    QString::~QString((QString *)&local_84);
    *(undefined1 *)(param_1 + 0x2f0) = 0;
    QString::~QString((QString *)&local_74);
  }
  return uVar6;
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


// ===== SerialObject::fourInOneCut @ 005f5860

/* SerialObject::fourInOneCut(int, float, float) */

void __thiscall
SerialObject::fourInOneCut(SerialObject *this,int param_1,float param_2,float param_3)

{
  GetConfigFile *pGVar1;
  Config *pCVar2;
  float in_f0;
  float in_f12;
  undefined4 in_f13;
  float in_f14;
  float fVar3;
  QString aQStack_50 [4];
  undefined4 local_4c;
  QString aQStack_48 [4];
  QString aQStack_44 [4];
  undefined4 *local_40 [2];
  undefined4 local_38;
  
  local_38 = 0;
  local_4c = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005f5900 to 005f5907 has its CatchHandler @ 005f5da0 */
  sendGcodeCmd(aQStack_50,this,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  local_4c = QString::fromAscii_helper("G90",-1);
                    /* try { // try from 005f5944 to 005f594b has its CatchHandler @ 005f5e50 */
  sendGcodeCmd(aQStack_50,this,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  local_4c = QString::fromAscii_helper("G1 Y10 F18000",-1);
                    /* try { // try from 005f5988 to 005f598f has its CatchHandler @ 005f5e48 */
  sendGcodeCmd(aQStack_50,this,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  pGVar1 = (GetConfigFile *)getConfigFile();
  pCVar2 = (Config *)GetConfigFile::configFile(pGVar1);
  local_38 = 0;
  Config::getCutXOffset(pCVar2);
  local_38 = 0;
  fVar3 = in_f0;
  pGVar1 = (GetConfigFile *)getConfigFile();
  pCVar2 = (Config *)GetConfigFile::configFile(pGVar1);
  local_38 = 0;
  Config::getCutYOffset(pCVar2);
  local_38 = 0;
  local_40[0] = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005f5a5c to 005f5a63 has its CatchHandler @ 005f5e40 */
  QString::number((double)CONCAT44(in_f13,in_f12),SUB81((double)in_f0 - DAT_00ae04e0,0),
                  (int)((ulonglong)((double)in_f0 - DAT_00ae04e0) >> 0x20));
                    /* try { // try from 005f5a70 to 005f5a77 has its CatchHandler @ 005f5e38 */
  ::operator+((char *)aQStack_48,(QString *)&DAT_00ad8d80);
                    /* try { // try from 005f5a84 to 005f5a8b has its CatchHandler @ 005f5e30 */
  ::operator+((QString *)&local_4c,(char *)aQStack_48);
                    /* try { // try from 005f5aa4 to 005f5aab has its CatchHandler @ 005f5e28 */
  sendGcodeCmd(aQStack_50,this,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  QString::~QString(aQStack_48);
  QString::~QString(aQStack_44);
  QString::~QString((QString *)local_40);
  local_4c = QString::fromAscii_helper("G1 X20  F12000",-1);
                    /* try { // try from 005f5b00 to 005f5b07 has its CatchHandler @ 005f5e20 */
  sendGcodeCmd(aQStack_50,this,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  local_38 = 0;
  local_40[0] = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005f5b6c to 005f5b73 has its CatchHandler @ 005f5e18 */
  QString::number((double)CONCAT44(in_f13,in_f12),SUB81((double)fVar3 - DAT_00ae04e8,0),
                  (int)((ulonglong)((double)fVar3 - DAT_00ae04e8) >> 0x20));
                    /* try { // try from 005f5b80 to 005f5b87 has its CatchHandler @ 005f5e10 */
  ::operator+((char *)aQStack_48,(QString *)&DAT_00ad8d90);
                    /* try { // try from 005f5b94 to 005f5b9b has its CatchHandler @ 005f5e08 */
  ::operator+((QString *)&local_4c,(char *)aQStack_48);
                    /* try { // try from 005f5bb4 to 005f5bbb has its CatchHandler @ 005f5ddc */
  sendGcodeCmd(aQStack_50,this,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  QString::~QString(aQStack_48);
  QString::~QString(aQStack_44);
  QString::~QString((QString *)local_40);
  local_4c = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005f5c0c to 005f5c13 has its CatchHandler @ 005f5dd4 */
  sendGcodeCmd(aQStack_50,this,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  local_4c = QString::fromAscii_helper("G92 E0",-1);
                    /* try { // try from 005f5c50 to 005f5c57 has its CatchHandler @ 005f5dcc */
  sendGcodeCmd(aQStack_50,this,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  local_4c = QString::fromAscii_helper("G1 E-5 F600",-1);
                    /* try { // try from 005f5c94 to 005f5c9b has its CatchHandler @ 005f5dc4 */
  sendGcodeCmd(aQStack_50,this,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  local_4c = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005f5cd4 to 005f5cdb has its CatchHandler @ 005f5dbc */
  sendGcodeCmd(aQStack_50,this,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  local_38 = 0;
  printClearGoPos(in_f12,in_f14);
  checkCrotchCutting(this,param_1);
  local_4c = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005f5d40 to 005f5d47 has its CatchHandler @ 005f5db4 */
  sendGcodeCmd(aQStack_50,this,&local_4c,1,0,0,0);
  QString::~QString(aQStack_50);
  QString::~QString((QString *)&local_4c);
  return;
}


// ===== SerialObject::cutFilament @ 005f5e58

/* SerialObject::cutFilament(int, float, float) */

undefined4 __thiscall
SerialObject::cutFilament(SerialObject *this,int param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  QString aQStack_38 [4];
  undefined4 local_34;
  QString aQStack_30 [4];
  undefined4 local_2c;
  QString aQStack_28 [4];
  QString aQStack_24 [4];
  QString aQStack_20 [4];
  undefined4 local_1c;
  
  fourInOneCut(this,param_1,param_2,param_3);
  local_34 = QString::fromAscii_helper("G92 E0",-1);
                    /* try { // try from 005f5eac to 005f5eb3 has its CatchHandler @ 005f60ac */
  sendGcodeCmd(aQStack_38,this,&local_34,1,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  iVar1 = getFilamentTypeUnloadSpeed((int)this);
  iVar2 = getFilamentTypeUnloadSpace((int)this);
  local_1c = QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f5f00 to 005f5f07 has its CatchHandler @ 005f6164 */
  QString::number((int)aQStack_20,param_1);
                    /* try { // try from 005f5f14 to 005f5f1b has its CatchHandler @ 005f615c */
  ::operator+((char *)aQStack_24,(QString *)"F11 C");
                    /* try { // try from 005f5f28 to 005f5f2f has its CatchHandler @ 005f6154 */
  ::operator+(aQStack_28,(char *)aQStack_24);
                    /* try { // try from 005f5f34 to 005f5f3b has its CatchHandler @ 005f614c */
  local_2c = QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f5f48 to 005f5f4f has its CatchHandler @ 005f6144 */
  QString::number((int)aQStack_30,iVar1);
                    /* try { // try from 005f5f58 to 005f5f5f has its CatchHandler @ 005f613c */
  ::operator+((QString *)&local_34,aQStack_28);
                    /* try { // try from 005f5f68 to 005f5f6f has its CatchHandler @ 005f6134 */
  sendCmdToUart4(aQStack_38,this,&local_34);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  QString::~QString(aQStack_30);
  QString::~QString((QString *)&local_2c);
  QString::~QString(aQStack_28);
  QString::~QString(aQStack_24);
  QString::~QString(aQStack_20);
  QString::~QString((QString *)&local_1c);
  local_1c = QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f5fc8 to 005f5fcf has its CatchHandler @ 005f612c */
  QString::number((int)aQStack_20,iVar2);
                    /* try { // try from 005f5fdc to 005f5fe3 has its CatchHandler @ 005f6124 */
  ::operator+((char *)aQStack_24,(QString *)"G1 E-");
                    /* try { // try from 005f5ff0 to 005f5ff7 has its CatchHandler @ 005f611c */
  ::operator+(aQStack_28,(char *)aQStack_24);
                    /* try { // try from 005f5ffc to 005f6003 has its CatchHandler @ 005f6114 */
  local_2c = QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f6010 to 005f6017 has its CatchHandler @ 005f610c */
  QString::number((int)aQStack_30,iVar1);
                    /* try { // try from 005f6020 to 005f6027 has its CatchHandler @ 005f6104 */
  ::operator+((QString *)&local_34,aQStack_28);
                    /* try { // try from 005f6040 to 005f6047 has its CatchHandler @ 005f60c0 */
  sendGcodeCmd(aQStack_38,this,&local_34,0,0,0,0);
  QString::~QString(aQStack_38);
  QString::~QString((QString *)&local_34);
  QString::~QString(aQStack_30);
  QString::~QString((QString *)&local_2c);
  QString::~QString(aQStack_28);
  QString::~QString(aQStack_24);
  QString::~QString(aQStack_20);
  QString::~QString((QString *)&local_1c);
  return 0;
}


// ===== SerialObject::fourInOneUnLoad @ 005f616c

/* SerialObject::fourInOneUnLoad(int, bool) */

byte __thiscall SerialObject::fourInOneUnLoad(SerialObject *this,int param_1,bool param_2)

{
  SerialObject SVar1;
  byte bVar2;
  QDebug *pQVar3;
  QTextStream *pQVar4;
  int iVar5;
  int iVar6;
  undefined3 in_register_00000019;
  int iVar7;
  Data *local_70;
  Data *local_6c;
  Data *local_68;
  Data *local_64;
  QTextStream *local_60;
  QString aQStack_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  QString aQStack_50 [4];
  QString aQStack_4c [4];
  char *local_48;
  undefined4 *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  QString *local_34;
  char *local_30;
  
  QDebug::QDebug((QDebug *)&local_70,2);
                    /* try { // try from 005f61b8 to 005f61eb has its CatchHandler @ 005f6d94 */
  pQVar3 = (QDebug *)QDebug::operator<<((QDebug *)&local_70,"../ad5x/serial/SerialObject.cpp");
  pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,"fourInOneUnLoad");
  pQVar3 = (QDebug *)QDebug::operator<<(pQVar3,"channel");
  QDebug::operator<<(pQVar3,param_1);
  QDebug::~QDebug((QDebug *)&local_70);
  if (CONCAT31(in_register_00000019,param_2) != 0) {
    checkCrotchCutting(this,param_1);
    local_34 = (QString *)&local_58;
    local_54 = QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f6a70 to 005f6a77 has its CatchHandler @ 005f6e18 */
    QString::number((int)&local_58,param_1);
                    /* try { // try from 005f6a88 to 005f6a8f has its CatchHandler @ 005f6e10 */
    ::operator+((char *)aQStack_5c,(QString *)"F11 C");
                    /* try { // try from 005f6aa0 to 005f6aa7 has its CatchHandler @ 005f6e08 */
    ::operator+((QString *)&local_60,(char *)aQStack_5c);
                    /* try { // try from 005f6aac to 005f6ab3 has its CatchHandler @ 005f6e00 */
    local_64 = (Data *)QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f6ac4 to 005f6acb has its CatchHandler @ 005f6df8 */
    QString::number((int)&local_68,600);
                    /* try { // try from 005f6ad8 to 005f6adf has its CatchHandler @ 005f6df0 */
    ::operator+((QString *)&local_6c,(QString *)&local_60);
                    /* try { // try from 005f6ae8 to 005f6aef has its CatchHandler @ 005f6da8 */
    sendCmdToUart4(&local_70,this,(QString *)&local_6c);
    QString::~QString((QString *)&local_70);
    QString::~QString((QString *)&local_6c);
    QString::~QString((QString *)&local_68);
    QString::~QString((QString *)&local_64);
    QString::~QString((QString *)&local_60);
    QString::~QString(aQStack_5c);
    QString::~QString((QString *)&local_58);
    QString::~QString((QString *)&local_54);
  }
  local_6c = (Data *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005f622c to 005f6233 has its CatchHandler @ 005f6d80 */
  sendGcodeCmd(&local_70,this,(QString *)&local_6c,1,0,0,0);
  QString::~QString((QString *)&local_70);
  QString::~QString((QString *)&local_6c);
  local_48 = 
  "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
  ;
  local_44 = &QString::shared_null;
  local_40 = "data: ";
  local_3c = "mbda(bool, bool&)>; socket_t = int; size_t = unsigned int; time_t = long int]";
  local_38 = "[: ]";
  iVar7 = 0;
  local_30 = 
  "color: #000000;\npadding-left: 20px;\nborder:none;\nborder-radius:0px;\nbackground-image: url(:/res/icon/FFM/none.png);\n}\nQPushButton:focus{outline:none;}"
  ;
  do {
    local_70 = (Data *)QString::fromAscii_helper(local_48 + -0x2424,-1);
                    /* try { // try from 005f6520 to 005f6527 has its CatchHandler @ 005f6c50 */
    sendCmdToUart4(aQStack_4c,this,&local_70);
    iVar6 = *(int *)local_70;
    *(int *)local_70 = iVar6 + -1;
    if (iVar6 == 1) {
      QString::free(local_70);
    }
                    /* try { // try from 005f6550 to 005f6557 has its CatchHandler @ 005f6c48 */
    pQVar4 = operator_new(0x18);
                    /* try { // try from 005f6570 to 005f6577 has its CatchHandler @ 005f6c34 */
    local_60 = (QTextStream *)0x2;
    QTextStream::QTextStream(pQVar4,pQVar4 + 8,(QDebug *)&local_60);
    *(undefined4 **)(pQVar4 + 8) = local_44;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar4 + 0xc) = 1;
    *(undefined4 *)(pQVar4 + 0x10) = 0;
    pQVar4[0x14] = (QTextStream)0x1;
    pQVar4[0x15] = (QTextStream)0x1;
    local_60 = pQVar4;
                    /* try { // try from 005f65b8 to 005f65bf has its CatchHandler @ 005f6c2c */
    QString::fromAscii((char *)&local_64,0xae8970);
                    /* try { // try from 005f65c4 to 005f65cb has its CatchHandler @ 005f6c18 */
    QTextStream::operator<<(pQVar4,(QString *)&local_64);
    iVar6 = *(int *)local_64;
    *(int *)local_64 = iVar6 + -1;
    if (iVar6 == 1) {
      QString::free(local_64);
    }
    if (local_60[0x14] != (QTextStream)0x0) {
                    /* try { // try from 005f6604 to 005f665b has its CatchHandler @ 005f6c2c */
      QTextStream::operator<<(local_60,' ');
    }
    pQVar4 = local_60;
                    /* try { // try from 005f6294 to 005f629b has its CatchHandler @ 005f6c2c */
    QString::fromAscii((char *)&local_68,0xaeabdc);
                    /* try { // try from 005f62a0 to 005f62a7 has its CatchHandler @ 005f6c04 */
    QTextStream::operator<<(pQVar4,(QString *)&local_68);
    iVar6 = *(int *)local_68;
    *(int *)local_68 = iVar6 + -1;
    if (iVar6 == 1) {
      QString::free(local_68);
    }
    if (local_60[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_60,' ');
    }
    pQVar4 = local_60;
                    /* try { // try from 005f62e8 to 005f62ef has its CatchHandler @ 005f6c2c */
    QString::fromAscii((char *)&local_6c,(int)local_40);
                    /* try { // try from 005f62f4 to 005f62fb has its CatchHandler @ 005f6bf0 */
    QTextStream::operator<<(pQVar4,(QString *)&local_6c);
    iVar6 = *(int *)local_6c;
    *(int *)local_6c = iVar6 + -1;
    if (iVar6 == 1) {
      QString::free(local_6c);
    }
    if (local_60[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_60,' ');
    }
                    /* try { // try from 005f6334 to 005f6377 has its CatchHandler @ 005f6c2c */
    pQVar4 = (QTextStream *)QTextStream::operator<<(local_60,'\"');
    pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,aQStack_4c);
    QTextStream::operator<<(pQVar4,'\"');
    if (local_60[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_60,' ');
    }
    pQVar4 = local_60;
    QString::fromAscii((char *)&local_70,(int)(local_3c + -0x269c));
                    /* try { // try from 005f637c to 005f6383 has its CatchHandler @ 005f6bd4 */
    QTextStream::operator<<(pQVar4,(QString *)&local_70);
    iVar6 = *(int *)local_70;
    *(int *)local_70 = iVar6 + -1;
    if (iVar6 == 1) {
      QString::free(local_70);
    }
    if (local_60[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_60,' ');
    }
                    /* try { // try from 005f63bc to 005f63c3 has its CatchHandler @ 005f6c2c */
    QTextStream::operator<<(local_60,iVar7);
    if (local_60[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_60,' ');
    }
    QDebug::~QDebug((QDebug *)&local_60);
                    /* try { // try from 005f63e0 to 005f63e7 has its CatchHandler @ 005f6c48 */
    local_60 = (QTextStream *)QString::fromAscii_helper(local_38,-1);
                    /* try { // try from 005f63f8 to 005f63ff has its CatchHandler @ 005f6ca4 */
    QRegExp::QRegExp((QRegExp *)&local_64,(QDebug *)&local_60,1,0);
                    /* try { // try from 005f6420 to 005f6427 has its CatchHandler @ 005f6c9c */
    local_68 = (Data *)0x1;
    QString::section((QString *)&local_6c,aQStack_4c,&local_64,3,3,(QString *)&local_68);
                    /* try { // try from 005f642c to 005f6433 has its CatchHandler @ 005f6c94 */
    QString::trimmed();
                    /* try { // try from 005f643c to 005f6443 has its CatchHandler @ 005f6c64 */
    iVar6 = QString::toInt((bool *)&local_70,0);
    iVar5 = *(int *)local_70;
    *(int *)local_70 = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free(local_70);
    }
    iVar5 = *(int *)local_6c;
    *(int *)local_6c = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free(local_6c);
    }
    QRegExp::~QRegExp((QRegExp *)&local_64);
    iVar5 = *(int *)local_60;
    *(int *)local_60 = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free((Data *)local_60);
    }
    if (iVar6 == 5) {
      if (iVar7 == 0) {
                    /* try { // try from 005f6960 to 005f6977 has its CatchHandler @ 005f6c48 */
        checkCrotchCutting(this,param_1);
        local_58 = QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f6988 to 005f698f has its CatchHandler @ 005f6e50 */
        QString::number((int)aQStack_5c,param_1);
                    /* try { // try from 005f699c to 005f69a3 has its CatchHandler @ 005f6e48 */
        ::operator+((char *)&local_60,(QString *)"F11 C");
                    /* try { // try from 005f69b0 to 005f69b7 has its CatchHandler @ 005f6e40 */
        ::operator+((QString *)&local_64,(char *)&local_60);
                    /* try { // try from 005f69bc to 005f69c3 has its CatchHandler @ 005f6e38 */
        local_68 = (Data *)QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f69d0 to 005f69d7 has its CatchHandler @ 005f6e30 */
        QString::number((int)&local_6c,600);
                    /* try { // try from 005f69e0 to 005f69e7 has its CatchHandler @ 005f6e28 */
        ::operator+((QString *)&local_70,(QString *)&local_64);
                    /* try { // try from 005f69f0 to 005f69f7 has its CatchHandler @ 005f6e20 */
        sendCmdToUart4(aQStack_50,this,&local_70);
        QString::~QString(aQStack_50);
        QString::~QString((QString *)&local_70);
        QString::~QString((QString *)&local_6c);
        QString::~QString((QString *)&local_68);
        QString::~QString((QString *)&local_64);
        QString::~QString((QString *)&local_60);
        QString::~QString(aQStack_5c);
        iVar7 = 1;
        QString::~QString((QString *)&local_58);
        SVar1 = this[0x8a];
      }
      else {
        if (iVar7 != 1) {
                    /* try { // try from 005f6b6c to 005f6b73 has its CatchHandler @ 005f6c48 */
          bVar2 = checkFilamentSenser(this);
          bVar2 = bVar2 ^ 1;
          goto LAB_005f6764;
        }
                    /* try { // try from 005f6674 to 005f6693 has its CatchHandler @ 005f6c48 */
        iVar6 = checkFilamentSenser(this);
        iVar7 = 2;
        if (iVar6 == 0) goto LAB_005f64e4;
        local_58 = QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f66a4 to 005f66ab has its CatchHandler @ 005f6b9c */
        QString::number((int)aQStack_5c,param_1);
                    /* try { // try from 005f66b8 to 005f66bf has its CatchHandler @ 005f6bcc */
        ::operator+((char *)&local_60,(QString *)"F11 C");
                    /* try { // try from 005f66cc to 005f66d3 has its CatchHandler @ 005f6bb0 */
        ::operator+((QString *)&local_64,(char *)&local_60);
                    /* try { // try from 005f66d8 to 005f66df has its CatchHandler @ 005f6cec */
        local_68 = (Data *)QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f66ec to 005f66f3 has its CatchHandler @ 005f6ce4 */
        QString::number((int)&local_6c,600);
                    /* try { // try from 005f66fc to 005f6703 has its CatchHandler @ 005f6cdc */
        ::operator+((QString *)&local_70,(QString *)&local_64);
                    /* try { // try from 005f670c to 005f6713 has its CatchHandler @ 005f6cac */
        sendCmdToUart4(&local_54,this,&local_70);
        QString::~QString((QString *)&local_54);
        QString::~QString((QString *)&local_70);
        QString::~QString((QString *)&local_6c);
        QString::~QString((QString *)&local_68);
        QString::~QString((QString *)&local_64);
        QString::~QString((QString *)&local_60);
        QString::~QString(aQStack_5c);
        QString::~QString((QString *)&local_58);
        SVar1 = this[0x8a];
        iVar7 = 2;
      }
    }
    else if (iVar6 == 0x7f) {
                    /* try { // try from 005f6828 to 005f682f has its CatchHandler @ 005f6c48 */
      local_70 = (Data *)QString::fromAscii_helper(local_30 + -0x2410,-1);
      local_34 = (QString *)&local_58;
                    /* try { // try from 005f6848 to 005f684f has its CatchHandler @ 005f6d6c */
      sendCmdToUart4((QString *)&local_58,this,&local_70);
      local_34 = (QString *)&local_58;
      QString::~QString((QString *)&local_58);
      QString::~QString((QString *)&local_70);
                    /* try { // try from 005f6868 to 005f687f has its CatchHandler @ 005f6c48 */
      checkCrotchCutting(this,param_1);
      local_54 = QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f688c to 005f6893 has its CatchHandler @ 005f6d64 */
      QString::number((int)local_34,param_1);
                    /* try { // try from 005f68a0 to 005f68a7 has its CatchHandler @ 005f6d5c */
      ::operator+((char *)&local_60,(QString *)"F11 C");
                    /* try { // try from 005f68b8 to 005f68bf has its CatchHandler @ 005f6d54 */
      ::operator+((QString *)&local_64,(char *)&local_60);
                    /* try { // try from 005f68c4 to 005f68cb has its CatchHandler @ 005f6d4c */
      local_68 = (Data *)QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f68d8 to 005f68df has its CatchHandler @ 005f6d44 */
      QString::number((int)&local_6c,600);
                    /* try { // try from 005f68ec to 005f68f3 has its CatchHandler @ 005f6d3c */
      ::operator+((QString *)&local_70,(QString *)&local_64);
                    /* try { // try from 005f6904 to 005f690b has its CatchHandler @ 005f6cf4 */
      sendCmdToUart4(aQStack_5c,this,&local_70);
      QString::~QString(aQStack_5c);
      QString::~QString((QString *)&local_70);
      QString::~QString((QString *)&local_6c);
      QString::~QString((QString *)&local_68);
      QString::~QString((QString *)&local_64);
      QString::~QString((QString *)&local_60);
      QString::~QString(local_34);
      QString::~QString((QString *)&local_54);
      SVar1 = this[0x8a];
    }
    else {
      if (iVar6 == 0x7e) {
                    /* try { // try from 005f6b38 to 005f6b3f has its CatchHandler @ 005f6c48 */
        QDebug::QDebug((QDebug *)&local_70,0);
                    /* try { // try from 005f6b44 to 005f6b57 has its CatchHandler @ 005f6b80 */
        pQVar3 = (QDebug *)QDebug::operator<<((QDebug *)&local_70,"../ad5x/serial/SerialObject.cpp")
        ;
        QDebug::operator<<(pQVar3,"fourInOneUnLoad");
        bVar2 = 0;
        QDebug::~QDebug((QDebug *)&local_70);
        goto LAB_005f6764;
      }
LAB_005f64e4:
      SVar1 = this[0x8a];
    }
    if (SVar1 != (SerialObject)0x0) {
      bVar2 = 0;
LAB_005f6764:
      QString::~QString(aQStack_4c);
      return bVar2;
    }
                    /* try { // try from 005f64f4 to 005f64fb has its CatchHandler @ 005f6c48 */
    usleep(200000);
    QString::~QString(aQStack_4c);
  } while( true );
}


// ===== SerialObject::checkFourInOneUnLoad @ 005f719c

/* SerialObject::checkFourInOneUnLoad() */

float __thiscall SerialObject::checkFourInOneUnLoad(SerialObject *this)

{
  QDebug *pQVar1;
  undefined4 *puVar2;
  float fVar3;
  GetConfigFile *pGVar4;
  Config *pCVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  float fVar13;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  QString aQStack_34 [4];
  float local_30;
  undefined4 local_28;
  
  local_28 = 0;
  QDebug::QDebug((QDebug *)&local_48,2);
                    /* try { // try from 005f71f4 to 005f723b has its CatchHandler @ 005f76e0 */
  pQVar1 = (QDebug *)QDebug::operator<<((QDebug *)&local_48,"../ad5x/serial/SerialObject.cpp");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"checkFourInOneUnLoad");
  puVar2 = (undefined4 *)QDebug::operator<<(pQVar1,"cut:");
  if (this[0x2f2] == (SerialObject)0x0) {
    pcVar11 = "false";
  }
  else {
    pcVar11 = "true";
  }
  QTextStream::operator<<((QTextStream *)*puVar2,pcVar11);
  if (((QTextStream *)*puVar2)[0x14] != (QTextStream)0x0) {
                    /* try { // try from 005f72a8 to 005f72af has its CatchHandler @ 005f76e0 */
    QTextStream::operator<<((QTextStream *)*puVar2,' ');
  }
  QDebug::~QDebug((QDebug *)&local_48);
  fVar3 = (float)checkFilamentSenser(this);
  if (fVar3 == 0.0) {
    this[0x2f2] = (SerialObject)0x0;
    return 1.4013e-45;
  }
  pGVar4 = (GetConfigFile *)getConfigFile();
  pCVar5 = (Config *)GetConfigFile::configFile(pGVar4);
  uVar6 = Config::getChannel(pCVar5);
  uVar10 = 1;
  if (0 < (int)uVar6) {
    uVar10 = uVar6;
  }
  pGVar4 = (GetConfigFile *)getConfigFile();
  pCVar5 = (Config *)GetConfigFile::configFile(pGVar4);
  local_28 = 0;
  local_30 = (float)Config::getLeftExtruderXOffset(pCVar5);
  local_28 = 0;
  pGVar4 = (GetConfigFile *)getConfigFile();
  pCVar5 = (Config *)GetConfigFile::configFile(pGVar4);
  local_28 = 0;
  fVar13 = (float)Config::getLeftExtruderYOffset(pCVar5);
  local_28 = 0;
  if (this[0x2f2] == (SerialObject)0x0) {
    local_28 = 0;
    this[0x2f2] = (SerialObject)0x1;
    fourInOneCut(this,uVar10,local_30,fVar13);
  }
  local_44 = QString::fromAscii_helper("G92 E0",-1);
                    /* try { // try from 005f7384 to 005f738b has its CatchHandler @ 005f77dc */
  sendGcodeCmd(&local_48,this,&local_44,1,0,0,0);
  QString::~QString((QString *)&local_48);
  QString::~QString((QString *)&local_44);
  local_3c = QString::fromAscii_helper("%1",-1);
                    /* try { // try from 005f73b8 to 005f73bf has its CatchHandler @ 005f777c */
  QString::number((int)&local_40,600);
                    /* try { // try from 005f73cc to 005f73d3 has its CatchHandler @ 005f7790 */
  ::operator+((char *)&local_44,(QString *)"G1 E-60 F");
                    /* try { // try from 005f73ec to 005f73f3 has its CatchHandler @ 005f77a4 */
  sendGcodeCmd(&local_48,this,&local_44,0,0,0,0);
  QString::~QString((QString *)&local_48);
  QString::~QString((QString *)&local_44);
  QString::~QString((QString *)&local_40);
  QString::~QString((QString *)&local_3c);
  local_48 = QString::fromAscii_helper("F13",-1);
                    /* try { // try from 005f7430 to 005f7437 has its CatchHandler @ 005f77b8 */
  sendCmdToUart4(aQStack_34,this,&local_48);
  QString::~QString((QString *)&local_48);
                    /* try { // try from 005f7444 to 005f744b has its CatchHandler @ 005f76f4 */
  QDebug::QDebug((QDebug *)&local_48,0);
                    /* try { // try from 005f7450 to 005f747f has its CatchHandler @ 005f7708 */
  pQVar1 = (QDebug *)QDebug::operator<<((QDebug *)&local_48,"../ad5x/serial/SerialObject.cpp");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"checkFourInOneUnLoad");
  pQVar1 = (QDebug *)QDebug::operator<<(pQVar1,"data: ");
  QDebug::operator<<(pQVar1,aQStack_34);
  QDebug::~QDebug((QDebug *)&local_48);
                    /* try { // try from 005f7490 to 005f7497 has its CatchHandler @ 005f76f4 */
  local_38 = QString::fromAscii_helper("[: ]",-1);
                    /* try { // try from 005f74a8 to 005f74af has its CatchHandler @ 005f771c */
  QRegExp::QRegExp((QRegExp *)&local_3c,&local_38,1,0);
                    /* try { // try from 005f74d4 to 005f74db has its CatchHandler @ 005f7730 */
  local_40 = 1;
  QString::section(&local_44,aQStack_34,&local_3c,9,9,&local_40);
                    /* try { // try from 005f74e0 to 005f74e7 has its CatchHandler @ 005f7744 */
  QString::trimmed();
                    /* try { // try from 005f74f0 to 005f74f7 has its CatchHandler @ 005f7758 */
  iVar7 = QString::toInt((bool *)&local_48,0);
  QString::~QString((QString *)&local_48);
  QString::~QString((QString *)&local_44);
  QRegExp::~QRegExp((QRegExp *)&local_3c);
  QString::~QString((QString *)&local_38);
                    /* try { // try from 005f7520 to 005f7527 has its CatchHandler @ 005f76f4 */
  local_38 = QString::fromAscii_helper("[: ]",-1);
                    /* try { // try from 005f7538 to 005f753f has its CatchHandler @ 005f776c */
  QRegExp::QRegExp((QRegExp *)&local_3c,&local_38,1,0);
                    /* try { // try from 005f7564 to 005f756b has its CatchHandler @ 005f7774 */
  local_40 = 1;
  QString::section(&local_44,aQStack_34,&local_3c,5,5,&local_40);
                    /* try { // try from 005f7570 to 005f7577 has its CatchHandler @ 005f77cc */
  QString::trimmed();
                    /* try { // try from 005f7580 to 005f7587 has its CatchHandler @ 005f77d4 */
  iVar8 = QString::toInt((bool *)&local_48,0);
  QString::~QString((QString *)&local_48);
  QString::~QString((QString *)&local_44);
  QRegExp::~QRegExp((QRegExp *)&local_3c);
  QString::~QString((QString *)&local_38);
  if ((((iVar7 >> (uVar10 - 1 & 0x1f) & 1U) != 0) || ((iVar8 >> (uVar10 - 1 & 0x1f) & 1U) == 0)) ||
     (iVar9 = fourInOneUnLoad(this,uVar10,false), iVar9 == 0)) {
    fVar13 = 0.0;
    uVar6 = 0;
    do {
      uVar12 = uVar6 + 1;
      if ((((iVar7 >> (uVar6 & 0x1f) & 1U) == 0) && (uVar10 != uVar12)) &&
         ((iVar8 >> (uVar6 & 0x1f) & 1U) != 0)) {
                    /* try { // try from 005f7644 to 005f766f has its CatchHandler @ 005f76f4 */
        fVar13 = (float)fourInOneUnLoad(this,uVar12,true);
      }
      uVar6 = uVar12;
    } while (uVar12 != 4);
    local_30 = fVar13;
    if (fVar13 == 0.0) {
      QString::~QString(aQStack_34);
      return local_30;
    }
  }
  QString::~QString(aQStack_34);
  return fVar3;
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


// ===== SerialObject::changeChannel @ 005fe970

/* SerialObject::changeChannel(bool, int, float, float, bool) */

int SerialObject::changeChannel(bool param_1,int param_2,float param_3,float param_4,bool param_5)

{
  undefined4 uVar1;
  GetConfigFile *pGVar2;
  Config *pCVar3;
  int iVar4;
  int iVar5;
  QDebug *pQVar6;
  undefined4 *puVar7;
  undefined3 in_register_00000011;
  SerialObject *this;
  char cVar8;
  int iVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double in_f12_13;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined3 in_stack_00000011;
  bool in_stack_00000014;
  int *local_128 [33];
  int *local_a4;
  undefined4 *local_a0;
  undefined4 *local_9c;
  QString aQStack_98 [4];
  QString aQStack_94 [4];
  QString aQStack_90 [4];
  QString aQStack_8c [4];
  QString aQStack_88 [4];
  QString aQStack_84 [4];
  QString aQStack_80 [4];
  int *local_7c;
  QString aQStack_78 [4];
  QString aQStack_74 [4];
  QString aQStack_70 [4];
  int *local_6c;
  int *local_68;
  QString aQStack_64 [4];
  QString aQStack_60 [4];
  int *local_5c;
  undefined4 *local_58;
  PrintContinueConfig *local_54;
  char *local_50;
  undefined4 local_44;
  
  this = (SerialObject *)CONCAT31(in_register_00000011,param_1);
  local_44 = 0;
  uVar15 = (ulonglong)(uint)param_4;
  uVar16 = (ulonglong)_param_5;
  local_a4 = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005fea20 to 005fea27 has its CatchHandler @ 005ff5cc */
  sendGcodeCmd(local_128,this,&local_a4,1,0,0,0);
  QString::~QString((QString *)local_128);
  QString::~QString((QString *)&local_a4);
  *(undefined4 *)(this + 0x134) = 1;
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(this + 0x248);
  *(float *)(this + 0x138) = param_3;
  local_54 = (PrintContinueConfig *)(this + 0xd4);
  uVar1 = PowerSavingModeFile();
  PrintContinueConfig::PrintContinueConfig
            ((PrintContinueConfig *)local_128,(PrintContinueConfig *)(this + 0xd4));
                    /* try { // try from 005fea70 to 005fea77 has its CatchHandler @ 005ff7a0 */
  CPowerSavingModeFile::setPowerSavingMode(uVar1,local_128);
  PrintContinueConfig::~PrintContinueConfig((PrintContinueConfig *)local_128);
  local_128[0] = (int *)QString::fromAscii_helper("M114",-1);
                    /* try { // try from 005feaac to 005feab3 has its CatchHandler @ 005ff644 */
  sendGcodeCmd(&local_5c,this,local_128,1,0,0,0);
  QString::~QString((QString *)local_128);
  local_a4 = local_5c;
  *local_5c = *local_5c + 1;
                    /* try { // try from 005feae4 to 005feaeb has its CatchHandler @ 005ff63c */
  local_128[0] = (int *)QString::fromAscii_helper("X:",-1);
                    /* try { // try from 005feaf8 to 005feaff has its CatchHandler @ 005ff620 */
  ParseXYZEFField(aQStack_60,&local_a4,local_128);
  QString::~QString((QString *)local_128);
  QString::~QString((QString *)&local_a4);
  local_a4 = local_5c;
  *local_5c = *local_5c + 1;
                    /* try { // try from 005feb38 to 005feb3f has its CatchHandler @ 005ff618 */
  local_128[0] = (int *)QString::fromAscii_helper("Y:",-1);
                    /* try { // try from 005feb4c to 005feb53 has its CatchHandler @ 005ff5fc */
  ParseXYZEFField(aQStack_64,&local_a4,local_128);
  QString::~QString((QString *)local_128);
  QString::~QString((QString *)&local_a4);
  local_44 = 0;
  local_58 = &QString::shared_null;
  local_128[0] = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
  dVar13 = (double)*(float *)(this + 0x2ec);
                    /* try { // try from 005febbc to 005febc3 has its CatchHandler @ 005ff5e8 */
  QString::number(in_f12_13,SUB81(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
  local_68 = local_6c;
  *local_6c = *local_6c + 1;
  QString::~QString((QString *)&local_6c);
  QString::~QString((QString *)local_128);
  local_44 = 0;
                    /* try { // try from 005fec08 to 005fec0f has its CatchHandler @ 005ff5e0 */
  QString::toDouble((bool *)&local_68);
  local_44 = 0;
  dVar14 = dVar13;
  if (param_2 == 0) {
    if (DAT_00aeae60 < dVar13) {
      cVar8 = SUB81(dVar13,0);
      iVar4 = (int)((ulonglong)dVar13 >> 0x20);
      dVar14 = DAT_00aeae60;
    }
    else {
      dVar14 = dVar13 + DAT_00aeae68;
      cVar8 = SUB81(dVar14,0);
      iVar4 = (int)((ulonglong)dVar14 >> 0x20);
    }
    local_44 = 0;
    local_9c = local_58;
    QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005fec9c to 005feca3 has its CatchHandler @ 005ff7b4 */
    QString::number(in_f12_13,cVar8,iVar4);
                    /* try { // try from 005fecb0 to 005fecb7 has its CatchHandler @ 005ff7bc */
    ::operator+((char *)&local_a4,(QString *)&DAT_00ad8d98);
                    /* try { // try from 005fecc4 to 005feccb has its CatchHandler @ 005ff7c4 */
    ::operator+((QString *)local_128,(char *)&local_a4);
                    /* try { // try from 005fece4 to 005feceb has its CatchHandler @ 005ff6cc */
    sendGcodeCmd(aQStack_70,this,local_128,1,0,0,0);
    QString::~QString(aQStack_70);
    QString::~QString((QString *)local_128);
    QString::~QString((QString *)&local_a4);
    QString::~QString((QString *)&local_a0);
    QString::~QString((QString *)&local_9c);
                    /* try { // try from 005fed18 to 005fed1f has its CatchHandler @ 005ff5e0 */
    local_128[0] = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005fed3c to 005fed43 has its CatchHandler @ 005ff6f8 */
    sendGcodeCmd(aQStack_74,this,local_128,1,0,0,0);
    QString::~QString(aQStack_74);
    QString::~QString((QString *)local_128);
  }
                    /* try { // try from 005fed54 to 005fef2f has its CatchHandler @ 005ff5e0 */
  pGVar2 = (GetConfigFile *)getConfigFile();
  pCVar3 = (Config *)GetConfigFile::configFile(pGVar2);
  iVar4 = Config::getChannel(pCVar3);
  local_44 = 0;
  iVar5 = doLoadAndUnload(this,(int)param_3,iVar4,(float)uVar15,(float)uVar16,in_stack_00000014);
  if (iVar5 != 1) {
    if (iVar5 == 6) goto LAB_005fee5c;
    if (iVar5 == 9) {
      param_3 = *(float *)(this + (*(int *)(this + 0x248) + 0x94) * 4);
    }
    while (fVar12 = SUB84(dVar14,0), this[0x2e3] == (SerialObject)0x0) {
      if (this[0x8a] != (SerialObject)0x0) {
LAB_005feefc:
        iVar4 = getFlushVol((int)this,iVar4);
        local_44 = 0;
        *(undefined4 *)(this + 0x228) = *(undefined4 *)(this + 0x224);
        QDebug::QDebug((QDebug *)local_128,0);
                    /* try { // try from 005fef38 to 005fef9b has its CatchHandler @ 005ff7dc */
        pQVar6 = (QDebug *)QDebug::operator<<((QDebug *)local_128,"../ad5x/serial/SerialObject.cpp")
        ;
        pQVar6 = (QDebug *)QDebug::operator<<(pQVar6,"changeChannel");
        pQVar6 = (QDebug *)QDebug::operator<<(pQVar6,"getFlushVol: ");
        pQVar6 = (QDebug *)QDebug::operator<<(pQVar6,iVar4);
        puVar7 = (undefined4 *)QDebug::operator<<(pQVar6,"m_channelFanSpeed:");
        local_44 = 0;
        QTextStream::operator<<((QTextStream *)*puVar7,*(float *)(this + 0x228));
        if (((QTextStream *)*puVar7)[0x14] != (QTextStream)0x0) {
                    /* try { // try from 005ff580 to 005ff587 has its CatchHandler @ 005ff7dc */
          QTextStream::operator<<((QTextStream *)*puVar7,' ');
        }
        QDebug::~QDebug((QDebug *)local_128);
                    /* try { // try from 005fefbc to 005ff01f has its CatchHandler @ 005ff5e0 */
        pGVar2 = (GetConfigFile *)getConfigFile();
        pCVar3 = (Config *)GetConfigFile::configFile(pGVar2);
        Config::setChannel(pCVar3,(int)param_3);
        iVar9 = 0;
        local_50 = "M400";
        do {
          local_44 = 0;
          cleanFilamentBox(this,(int)param_3,iVar4,(float)uVar15,(float)uVar16,true);
          local_128[0] = (int *)QString::fromAscii_helper(local_50,-1);
                    /* try { // try from 005ff03c to 005ff043 has its CatchHandler @ 005ff7cc */
          sendGcodeCmd(aQStack_78,this,local_128,1,0,0,0);
          iVar9 = iVar9 + 1;
          QString::~QString(aQStack_78);
          QString::~QString((QString *)local_128);
        } while ((400 < iVar4) + 1 != iVar9);
                    /* try { // try from 005ff064 to 005ff06b has its CatchHandler @ 005ff5e0 */
        getChnFilamentType((int)&local_7c);
        local_128[0] = local_7c;
        *local_7c = *local_7c + 1;
                    /* try { // try from 005ff090 to 005ff097 has its CatchHandler @ 005ff7d4 */
        printChnFilament(this,local_128);
        QString::~QString((QString *)local_128);
        if (param_2 == 0) {
          this[0xd0] = (SerialObject)0x1;
        }
        *(float *)(this + 0x138) = param_3;
                    /* try { // try from 005ff0b4 to 005ff0bb has its CatchHandler @ 005ff774 */
        *(undefined4 *)(this + 0x134) = 0;
        uVar1 = PowerSavingModeFile();
        PrintContinueConfig::PrintContinueConfig((PrintContinueConfig *)local_128,local_54);
                    /* try { // try from 005ff0d0 to 005ff0d7 has its CatchHandler @ 005ff77c */
        CPowerSavingModeFile::setPowerSavingMode(uVar1,local_128);
        PrintContinueConfig::~PrintContinueConfig((PrintContinueConfig *)local_128);
        local_44 = 0;
        local_a0 = local_58;
        QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 005ff130 to 005ff137 has its CatchHandler @ 005ff790 */
        QString::number(in_f12_13,SUB81((double)*(float *)(this + 0x228),0),
                        (int)((ulonglong)(double)*(float *)(this + 0x228) >> 0x20));
                    /* try { // try from 005ff144 to 005ff14b has its CatchHandler @ 005ff798 */
        ::operator+((char *)local_128,(QString *)"SET_FAN_SPEED FAN=fanM106 SPEED=");
                    /* try { // try from 005ff164 to 005ff16b has its CatchHandler @ 005ff70c */
        sendGcodeCmd(aQStack_80,this,local_128,1,0,0,0);
        QString::~QString(aQStack_80);
        QString::~QString((QString *)local_128);
        QString::~QString((QString *)&local_a4);
        QString::~QString((QString *)&local_a0);
        if (param_2 == 0) {
                    /* try { // try from 005ff1a8 to 005ff1af has its CatchHandler @ 005ff774 */
          ::operator+((char *)&local_a4,(QString *)&DAT_00ad8d80);
                    /* try { // try from 005ff1bc to 005ff1c3 has its CatchHandler @ 005ff730 */
          ::operator+((QString *)local_128,(char *)&local_a4);
                    /* try { // try from 005ff1dc to 005ff1e3 has its CatchHandler @ 005ff738 */
          sendGcodeCmd(aQStack_84,this,local_128,1,0,0,0);
          QString::~QString(aQStack_84);
          QString::~QString((QString *)local_128);
          QString::~QString((QString *)&local_a4);
                    /* try { // try from 005ff200 to 005ff207 has its CatchHandler @ 005ff774 */
          local_128[0] = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005ff224 to 005ff22b has its CatchHandler @ 005ff74c */
          sendGcodeCmd(aQStack_88,this,local_128,1,0,0,0);
          QString::~QString(aQStack_88);
          QString::~QString((QString *)local_128);
                    /* try { // try from 005ff248 to 005ff24f has its CatchHandler @ 005ff774 */
          ::operator+((char *)&local_a4,(QString *)&DAT_00ad8d90);
                    /* try { // try from 005ff258 to 005ff25f has its CatchHandler @ 005ff754 */
          ::operator+((QString *)local_128,(char *)&local_a4);
                    /* try { // try from 005ff278 to 005ff27f has its CatchHandler @ 005ff75c */
          sendGcodeCmd(aQStack_8c,this,local_128,1,0,0,0);
          QString::~QString(aQStack_8c);
          QString::~QString((QString *)local_128);
          QString::~QString((QString *)&local_a4);
                    /* try { // try from 005ff29c to 005ff2a3 has its CatchHandler @ 005ff774 */
          local_128[0] = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005ff2c0 to 005ff2c7 has its CatchHandler @ 005ff764 */
          sendGcodeCmd(aQStack_90,this,local_128,1,0,0,0);
          QString::~QString(aQStack_90);
          QString::~QString((QString *)local_128);
                    /* try { // try from 005ff2e0 to 005ff2e7 has its CatchHandler @ 005ff774 */
          local_9c = (undefined4 *)QString::fromAscii_helper("%1",-1);
          local_44 = 0;
                    /* try { // try from 005ff314 to 005ff31b has its CatchHandler @ 005ff76c */
          QString::number(in_f12_13,SUB81(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
                    /* try { // try from 005ff328 to 005ff32f has its CatchHandler @ 005ff658 */
          ::operator+((char *)&local_a4,(QString *)&DAT_00ad8d98);
                    /* try { // try from 005ff33c to 005ff343 has its CatchHandler @ 005ff674 */
          ::operator+((QString *)local_128,(char *)&local_a4);
                    /* try { // try from 005ff35c to 005ff363 has its CatchHandler @ 005ff688 */
          sendGcodeCmd(aQStack_94,this,local_128,1,0,0,0);
          QString::~QString(aQStack_94);
          QString::~QString((QString *)local_128);
          QString::~QString((QString *)&local_a4);
          QString::~QString((QString *)&local_a0);
          QString::~QString((QString *)&local_9c);
                    /* try { // try from 005ff390 to 005ff397 has its CatchHandler @ 005ff774 */
          local_128[0] = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005ff3b4 to 005ff3bb has its CatchHandler @ 005ff69c */
          sendGcodeCmd(aQStack_98,this,local_128,1,0,0,0);
          QString::~QString(aQStack_98);
          QString::~QString((QString *)local_128);
          local_44 = 0;
          if (0.0 <= *(float *)(this + 0xbc)) {
                    /* try { // try from 005ff3f0 to 005ff3f7 has its CatchHandler @ 005ff774 */
            local_a0 = (undefined4 *)QString::fromAscii_helper("%1",-1);
            local_44 = 0;
                    /* try { // try from 005ff42c to 005ff433 has its CatchHandler @ 005ff590 */
            QString::number(in_f12_13,SUB81((double)*(float *)(this + 0xbc),0),
                            (int)((ulonglong)(double)*(float *)(this + 0xbc) >> 0x20));
                    /* try { // try from 005ff440 to 005ff447 has its CatchHandler @ 005ff814 */
            ::operator+((char *)local_128,(QString *)&DAT_00ae961c);
                    /* try { // try from 005ff460 to 005ff467 has its CatchHandler @ 005ff7f8 */
            sendGcodeCmd(&local_9c,this,local_128,1,0,0,0);
            QString::~QString((QString *)&local_9c);
            QString::~QString((QString *)local_128);
            QString::~QString((QString *)&local_a4);
            QString::~QString((QString *)&local_a0);
          }
          else {
                    /* try { // try from 005ff53c to 005ff543 has its CatchHandler @ 005ff774 */
            local_128[0] = (int *)QString::fromAscii_helper("G92 E0",-1);
                    /* try { // try from 005ff560 to 005ff567 has its CatchHandler @ 005ff7f0 */
            sendGcodeCmd((QString *)&local_a0,this,local_128,1,0,0,0);
            QString::~QString((QString *)&local_a0);
            QString::~QString((QString *)local_128);
          }
        }
                    /* try { // try from 005ff48c to 005ff493 has its CatchHandler @ 005ff774 */
        local_128[0] = (int *)QString::fromAscii_helper("M400",-1);
                    /* try { // try from 005ff4b0 to 005ff4b7 has its CatchHandler @ 005ff6b0 */
        sendGcodeCmd(&local_a4,this,local_128,1,0,0,0);
        QString::~QString((QString *)&local_a4);
        QString::~QString((QString *)local_128);
        this[0x2e0] = (SerialObject)0x0;
                    /* try { // try from 005ff4d4 to 005ff4db has its CatchHandler @ 005ff774 */
        local_a4 = (int *)QString::fromAscii_helper("SDCARD_CLEAR_REFUELLING",-1);
                    /* try { // try from 005ff4f8 to 005ff4ff has its CatchHandler @ 005ff6b8 */
        sendGcodeCmd(local_128,this,&local_a4,1,0,0,0);
        QString::~QString((QString *)local_128);
        QString::~QString((QString *)&local_a4);
        QString::~QString((QString *)&local_7c);
        goto LAB_005fee5c;
      }
      local_44 = 0;
      MainWindow::getNozzleRightRealTemp(MainWindow::instMainWindow);
      local_44 = 0;
      fVar10 = (float)(int)fVar12;
      MainWindow::getNozzleRightTargetTemp(MainWindow::instMainWindow);
      local_44 = 0;
      uVar11 = (uint)fVar10;
      dVar14 = (double)(ulonglong)uVar11;
      if ((((int)uVar11 <= (int)fVar12) && (0 < (int)uVar11)) || (this[0x8a] != (SerialObject)0x0))
      goto LAB_005feefc;
      sleep(1);
    }
  }
  iVar5 = 1;
LAB_005fee5c:
  QString::~QString((QString *)&local_68);
  QString::~QString(aQStack_64);
  QString::~QString(aQStack_60);
  QString::~QString((QString *)&local_5c);
  return iVar5;
}


// ===== Config::getCutXOffset @ 0063888c

/* Config::getCutXOffset() */

undefined4 __thiscall Config::getCutXOffset(Config *this)

{
  int iVar1;
  Value *this_00;
  Mutex *this_01;
  undefined4 uVar2;
  
  this_01 = (Mutex *)(this + 0x6f0);
  ffsdk::Mutex::lock(this_01);
  iVar1 = Json::Value::isMember((Value *)(this + 0x360),"CutXOffset");
  if (iVar1 == 0) {
    ffsdk::Mutex::unlock(this_01);
    setCutXOffset(this,0.0);
  }
  else {
    this_00 = (Value *)Json::Value::operator[]((Value *)(this + 0x360),"CutXOffset");
    uVar2 = Json::Value::asFloat(this_00);
    *(undefined4 *)(this + 0x358) = uVar2;
  }
  ffsdk::Mutex::unlock(this_01);
  return *(undefined4 *)(this + 0x358);
}


// ===== Config::getCutYOffset @ 00638af4

/* Config::getCutYOffset() */

undefined4 __thiscall Config::getCutYOffset(Config *this)

{
  int iVar1;
  Value *this_00;
  Mutex *this_01;
  undefined4 uVar2;
  
  this_01 = (Mutex *)(this + 0x6f0);
  ffsdk::Mutex::lock(this_01);
  iVar1 = Json::Value::isMember((Value *)(this + 0x360),"CutYOffset");
  if (iVar1 == 0) {
    ffsdk::Mutex::unlock(this_01);
    setCutYOffset(this,0.0);
  }
  else {
    this_00 = (Value *)Json::Value::operator[]((Value *)(this + 0x360),"CutYOffset");
    uVar2 = Json::Value::asFloat(this_00);
    *(undefined4 *)(this + 0x35c) = uVar2;
  }
  ffsdk::Mutex::unlock(this_01);
  return *(undefined4 *)(this + 0x35c);
}


// ===== Config::getUnloadESpace @ 006447ac

/* Config::getUnloadESpace() */

undefined4 __thiscall Config::getUnloadESpace(Config *this)

{
  int iVar1;
  Value *this_00;
  undefined4 uVar2;
  
  iVar1 = Json::Value::isMember((Value *)(this + 0x628),"UnloadESpace");
  if (iVar1 == 0) {
    setUnloadESpace(this,0x3c);
    return *(undefined4 *)(this + 0x618);
  }
  this_00 = (Value *)Json::Value::operator[]((Value *)(this + 0x628),"UnloadESpace");
  uVar2 = Json::Value::asInt(this_00);
  *(undefined4 *)(this + 0x618) = uVar2;
  return uVar2;
}


// ===== Config::getUnloadIFSSpace @ 00644904

/* Config::getUnloadIFSSpace() */

undefined4 __thiscall Config::getUnloadIFSSpace(Config *this)

{
  int iVar1;
  Value *this_00;
  undefined4 uVar2;
  
  iVar1 = Json::Value::isMember((Value *)(this + 0x628),"UnloadIFSSpace");
  if (iVar1 == 0) {
    setUnloadIFSSpace(this,0x46);
    return *(undefined4 *)(this + 0x61c);
  }
  this_00 = (Value *)Json::Value::operator[]((Value *)(this + 0x628),"UnloadIFSSpace");
  uVar2 = Json::Value::asInt(this_00);
  *(undefined4 *)(this + 0x61c) = uVar2;
  return uVar2;
}


// ===== Config::getUnloadSpeed @ 00644a5c

/* Config::getUnloadSpeed() */

undefined4 __thiscall Config::getUnloadSpeed(Config *this)

{
  int iVar1;
  Value *this_00;
  undefined4 uVar2;
  
  iVar1 = Json::Value::isMember((Value *)(this + 0x628),"UnloadSpeed");
  if (iVar1 == 0) {
    setUnloadSpeed(this,600);
    return *(undefined4 *)(this + 0x620);
  }
  this_00 = (Value *)Json::Value::operator[]((Value *)(this + 0x628),"UnloadSpeed");
  uVar2 = Json::Value::asInt(this_00);
  *(undefined4 *)(this + 0x620) = uVar2;
  return uVar2;
}


// ===== SetCutOffset::goMove @ 007cafdc

/* SetCutOffset::goMove() */

void SetCutOffset::goMove(void)

{
  GetConfigFile *pGVar1;
  Config *pCVar2;
  int in_a0;
  undefined4 uVar3;
  float in_f0;
  float fVar4;
  double dVar5;
  double in_f12_13;
  undefined4 local_40;
  undefined4 local_3c;
  QString aQStack_38 [4];
  QString aQStack_34 [4];
  undefined4 *local_30 [2];
  undefined4 local_28;
  
  local_28 = 0;
  SerialObject::homeManager(SUB41(*(undefined4 *)(in_a0 + 0x18),0),true,true);
  uVar3 = *(undefined4 *)(in_a0 + 0x18);
  local_3c = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 007cb070 to 007cb077 has its CatchHandler @ 007cb4d0 */
  SerialObject::sendGcodeCmd(&local_40,uVar3,&local_3c,1,0,0,0);
  QString::~QString((QString *)&local_40);
  QString::~QString((QString *)&local_3c);
  uVar3 = *(undefined4 *)(in_a0 + 0x18);
  local_3c = QString::fromAscii_helper("G90",-1);
                    /* try { // try from 007cb0b8 to 007cb0bf has its CatchHandler @ 007cb594 */
  SerialObject::sendGcodeCmd(&local_40,uVar3,&local_3c,1,0,0,0);
  QString::~QString((QString *)&local_40);
  QString::~QString((QString *)&local_3c);
  uVar3 = *(undefined4 *)(in_a0 + 0x18);
  local_3c = QString::fromAscii_helper("G1 Y10 F18000",-1);
                    /* try { // try from 007cb100 to 007cb107 has its CatchHandler @ 007cb58c */
  SerialObject::sendGcodeCmd(&local_40,uVar3,&local_3c,1,0,0,0);
  QString::~QString((QString *)&local_40);
  QString::~QString((QString *)&local_3c);
  pGVar1 = (GetConfigFile *)getConfigFile();
  pCVar2 = (Config *)GetConfigFile::configFile(pGVar1);
  local_28 = 0;
  Config::getCutYOffset(pCVar2);
  local_28 = 0;
  uVar3 = *(undefined4 *)(in_a0 + 0x18);
  local_30[0] = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
  dVar5 = (double)in_f0 - DAT_00ae04e0;
                    /* try { // try from 007cb19c to 007cb1a3 has its CatchHandler @ 007cb584 */
  QString::number(in_f12_13,SUB81(dVar5,0),(int)((ulonglong)dVar5 >> 0x20));
  fVar4 = SUB84(dVar5,0);
                    /* try { // try from 007cb1b0 to 007cb1b7 has its CatchHandler @ 007cb57c */
  QString::fromAscii((char *)aQStack_38,0xad8d80);
                    /* try { // try from 007cb1bc to 007cb1c3 has its CatchHandler @ 007cb574 */
  QString::append(aQStack_38);
                    /* try { // try from 007cb1d0 to 007cb1d7 has its CatchHandler @ 007cb56c */
  ::operator+((QString *)&local_3c,(char *)aQStack_38);
                    /* try { // try from 007cb1f0 to 007cb1f7 has its CatchHandler @ 007cb564 */
  SerialObject::sendGcodeCmd(&local_40,uVar3,&local_3c,1,0,0,0);
  QString::~QString((QString *)&local_40);
  QString::~QString((QString *)&local_3c);
  QString::~QString(aQStack_38);
  QString::~QString(aQStack_34);
  QString::~QString((QString *)local_30);
  if (*(char *)(in_a0 + 0x1c) == '\0') {
    uVar3 = *(undefined4 *)(in_a0 + 0x18);
    local_3c = QString::fromAscii_helper("G1 X52.5  F12000",-1);
                    /* try { // try from 007cb4b0 to 007cb4b7 has its CatchHandler @ 007cb4e4 */
    SerialObject::sendGcodeCmd(&local_40,uVar3,&local_3c,1,0,0,0);
    QString::~QString((QString *)&local_40);
    QString::~QString((QString *)&local_3c);
    uVar3 = *(undefined4 *)(in_a0 + 0x18);
  }
  else {
    pGVar1 = (GetConfigFile *)getConfigFile();
    pCVar2 = (Config *)GetConfigFile::configFile(pGVar1);
    local_28 = 0;
    Config::getCutXOffset(pCVar2);
    local_28 = 0;
    uVar3 = *(undefined4 *)(in_a0 + 0x18);
    local_3c = QString::fromAscii_helper("G1 X20  F12000",-1);
                    /* try { // try from 007cb298 to 007cb29f has its CatchHandler @ 007cb55c */
    SerialObject::sendGcodeCmd(&local_40,uVar3,&local_3c,1,0,0,0);
    QString::~QString((QString *)&local_40);
    QString::~QString((QString *)&local_3c);
    local_28 = 0;
    uVar3 = *(undefined4 *)(in_a0 + 0x18);
    local_30[0] = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 007cb308 to 007cb30f has its CatchHandler @ 007cb554 */
    QString::number(in_f12_13,SUB81((double)fVar4 - DAT_00ae04e8,0),
                    (int)((ulonglong)((double)fVar4 - DAT_00ae04e8) >> 0x20));
                    /* try { // try from 007cb31c to 007cb323 has its CatchHandler @ 007cb54c */
    QString::fromAscii((char *)aQStack_38,0xad8d90);
                    /* try { // try from 007cb328 to 007cb32f has its CatchHandler @ 007cb544 */
    QString::append(aQStack_38);
                    /* try { // try from 007cb33c to 007cb343 has its CatchHandler @ 007cb53c */
    ::operator+((QString *)&local_3c,(char *)aQStack_38);
                    /* try { // try from 007cb35c to 007cb363 has its CatchHandler @ 007cb510 */
    SerialObject::sendGcodeCmd(&local_40,uVar3,&local_3c,1,0,0,0);
    QString::~QString((QString *)&local_40);
    QString::~QString((QString *)&local_3c);
    QString::~QString(aQStack_38);
    QString::~QString(aQStack_34);
    QString::~QString((QString *)local_30);
    uVar3 = *(undefined4 *)(in_a0 + 0x18);
  }
  local_3c = QString::fromAscii_helper("M400",-1);
                    /* try { // try from 007cb3b8 to 007cb3bf has its CatchHandler @ 007cb508 */
  SerialObject::sendGcodeCmd(&local_40,uVar3,&local_3c,1,0,0,0);
  QString::~QString((QString *)&local_40);
  QString::~QString((QString *)&local_3c);
  uVar3 = *(undefined4 *)(in_a0 + 0x18);
  local_40 = QString::fromAscii_helper("M114",-1);
                    /* try { // try from 007cb400 to 007cb407 has its CatchHandler @ 007cb4f4 */
  SerialObject::sendGcodeCmd(&local_3c,uVar3,&local_40,1,0,0,0);
  QString::~QString((QString *)&local_40);
                    /* try { // try from 007cb418 to 007cb437 has its CatchHandler @ 007cb4ec */
  QLabel::setText(*(QString **)(*(int *)(in_a0 + 0x14) + 4));
  if (WaitMovieDialog::instWaitMovieDialog != 0) {
    QWidget::close();
    WaitMovieDialog::instWaitMovieDialog = 0;
  }
  QString::~QString((QString *)&local_3c);
  return;
}


// ===== SerialObject::clearOldFilament @ 007ec454

/* SerialObject::clearOldFilament(int) */

void __thiscall SerialObject::clearOldFilament(SerialObject *this,int param_1)

{
  int local_res4 [3];
  void *local_10;
  int *local_c;
  
  local_c = local_res4;
  local_10 = (void *)0x0;
  local_res4[0] = param_1;
  QMetaObject::activate((QObject *)this,(QMetaObject *)&staticMetaObject,0x2e,&local_10);
  return;
}



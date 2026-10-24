string "H1 Point" at 00b05aa4
  ref from 006ca754 in retranslateUi
string "H2 S500" at 00b05a0c
  ref from 006c8774 in on_H2S500_clicked
string "H3 S200" at 00b05a14
  ref from 006c885c in on_H3S200_clicked
string "H3 S100" at 00b05a1c
  ref from 006c8944 in on_H3S100_clicked
string "/dev/ttyS7" at 00ae8b04
  ref from 005e68a4 in getInstance
string "/dev/ttyS3" at 00ae6f28
  ref from 005dd610 in openUart3

// ===== retranslateUi @ 006ca550

/* Ui_WeightAdjust::retranslateUi(QDialog*) */

void __thiscall Ui_WeightAdjust::retranslateUi(Ui_WeightAdjust *this,QDialog *param_1)

{
  QString *pQVar1;
  undefined4 *local_20 [2];
  
  QCoreApplication::translate(local_20,"WeightAdjust","Dialog",0,1);
                    /* try { // try from 006ca59c to 006ca5a3 has its CatchHandler @ 006ca864 */
  QWidget::setWindowTitle((QString *)param_1);
  QString::~QString((QString *)local_20);
  pQVar1 = *(QString **)(this + 4);
  QCoreApplication::translate(local_20,"WeightAdjust","Close",0,1);
                    /* try { // try from 006ca5d4 to 006ca5db has its CatchHandler @ 006ca8d0 */
  QAbstractButton::setText(pQVar1);
  QString::~QString((QString *)local_20);
  local_20[0] = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 006ca60c to 006ca613 has its CatchHandler @ 006ca8c8 */
  QLabel::setText(*(QString **)(this + 8));
  QString::~QString((QString *)local_20);
  pQVar1 = *(QString **)(this + 0xc);
  QCoreApplication::translate(local_20,"WeightAdjust",&DAT_00ae9758,0,1);
                    /* try { // try from 006ca644 to 006ca64b has its CatchHandler @ 006ca8c0 */
  QAbstractButton::setText(pQVar1);
  QString::~QString((QString *)local_20);
  pQVar1 = *(QString **)(this + 0x10);
  QCoreApplication::translate(local_20,"WeightAdjust","H2-S500",0,1);
                    /* try { // try from 006ca67c to 006ca683 has its CatchHandler @ 006ca8b8 */
  QAbstractButton::setText(pQVar1);
  QString::~QString((QString *)local_20);
  pQVar1 = *(QString **)(this + 0x14);
  QCoreApplication::translate(local_20,"WeightAdjust","H3-S200",0,1);
                    /* try { // try from 006ca6b4 to 006ca6bb has its CatchHandler @ 006ca8b0 */
  QAbstractButton::setText(pQVar1);
  QString::~QString((QString *)local_20);
  pQVar1 = *(QString **)(this + 0x18);
  QCoreApplication::translate(local_20,"WeightAdjust","move ++",0,1);
                    /* try { // try from 006ca6ec to 006ca6f3 has its CatchHandler @ 006ca8a8 */
  QAbstractButton::setText(pQVar1);
  QString::~QString((QString *)local_20);
  pQVar1 = *(QString **)(this + 0x1c);
  QCoreApplication::translate(local_20,"WeightAdjust","Move --",0,1);
                    /* try { // try from 006ca724 to 006ca72b has its CatchHandler @ 006ca8a0 */
  QAbstractButton::setText(pQVar1);
  QString::~QString((QString *)local_20);
  pQVar1 = *(QString **)(this + 0x20);
  QCoreApplication::translate(local_20,"WeightAdjust","H1 Point",0,1);
                    /* try { // try from 006ca75c to 006ca763 has its CatchHandler @ 006ca898 */
  QAbstractButton::setText(pQVar1);
  QString::~QString((QString *)local_20);
  local_20[0] = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
                    /* try { // try from 006ca78c to 006ca793 has its CatchHandler @ 006ca890 */
  QLabel::setText(*(QString **)(this + 0x24));
  QString::~QString((QString *)local_20);
  pQVar1 = *(QString **)(this + 0x28);
  QCoreApplication::translate(local_20,"WeightAdjust","T:60/60",0,1);
                    /* try { // try from 006ca7c4 to 006ca7cb has its CatchHandler @ 006ca888 */
  QAbstractButton::setText(pQVar1);
  QString::~QString((QString *)local_20);
  pQVar1 = *(QString **)(this + 0x2c);
  QCoreApplication::translate(local_20,"WeightAdjust","H3-S100",0,1);
                    /* try { // try from 006ca7fc to 006ca803 has its CatchHandler @ 006ca880 */
  QAbstractButton::setText(pQVar1);
  QString::~QString((QString *)local_20);
  pQVar1 = *(QString **)(this + 0x30);
  QCoreApplication::translate(local_20,"WeightAdjust",&DAT_00b05ac0,0,1);
                    /* try { // try from 006ca834 to 006ca83b has its CatchHandler @ 006ca878 */
  QAbstractButton::setText(pQVar1);
  QString::~QString((QString *)local_20);
  return;
}



// ===== on_H2S500_clicked @ 006c8758

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



// ===== on_H3S200_clicked @ 006c8840

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



// ===== on_H3S100_clicked @ 006c8928

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



// ===== getInstance @ 005e6750

/* SerialObject::getInstance(QString const&, int) */

undefined1 * SerialObject::getInstance(QString *param_1,int param_2)

{
  int iVar1;
  undefined4 local_18 [2];
  
  SYNC(0);
  if ((getInstance(QString_const&,int)::instance == '\0') &&
     (iVar1 = __cxa_guard_acquire(&getInstance(QString_const&,int)::instance), iVar1 != 0)) {
                    /* try { // try from 005e6864 to 005e686b has its CatchHandler @ 005e68e0 */
    SerialObject((SerialObject *)getInstance(QString_const&,int)::instance);
    __cxa_guard_release(&getInstance(QString_const&,int)::instance);
    __cxa_atexit(~SerialObject,getInstance(QString_const&,int)::instance,&__dso_handle);
  }
  SYNC(0);
  if ((getInstance(QString_const&,int)::Imutex == '\0') &&
     (iVar1 = __cxa_guard_acquire(&getInstance(QString_const&,int)::Imutex), iVar1 != 0)) {
                    /* try { // try from 005e67e8 to 005e67ef has its CatchHandler @ 005e6918 */
    QMutex::QMutex((QMutex *)&getInstance(QString_const&,int)::Imutex,0);
    __cxa_guard_release(&getInstance(QString_const&,int)::Imutex);
    __cxa_atexit(QMutex::~QMutex,&getInstance(QString_const&,int)::Imutex,&__dso_handle);
  }
  if (getInstance(QString_const&,int)::instance._128_4_ != 0) {
    return getInstance(QString_const&,int)::instance;
  }
  QMutex::lockInline((QMutex *)&getInstance(QString_const&,int)::Imutex);
  if (getInstance(QString_const&,int)::instance._128_4_ == 0) {
                    /* try { // try from 005e6894 to 005e68af has its CatchHandler @ 005e6910 */
    getInstance(QString_const&,int)::instance._128_4_ = clientOpen();
    local_18[0] = QString::fromAscii_helper("/dev/ttyS7",-1);
                    /* try { // try from 005e68b4 to 005e68bb has its CatchHandler @ 005e68f4 */
    getInstance(QString_const&,int)::instance._132_4_ = serialOpen((QString *)local_18);
    QString::~QString((QString *)local_18);
                    /* try { // try from 005e68d0 to 005e68d7 has its CatchHandler @ 005e6910 */
    QString::operator=((QString *)&m_dev,param_1);
  }
  QMutex::unlockInline((QMutex *)&getInstance(QString_const&,int)::Imutex);
  return getInstance(QString_const&,int)::instance;
}



// ===== openUart3 @ 005dd428

/* Serial::openUart3() */

int __thiscall Serial::openUart3(Serial *this)

{
  QTextStream QVar1;
  QTextStream *pQVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  QDebug *this_00;
  undefined1 local_58 [52];
  Data *local_24;
  Data *local_20;
  QTextStream *local_1c;
  QTextStream *local_18 [2];
  
  if (-1 < *(int *)(this + 0xc)) {
    pQVar2 = operator_new(0x18);
                    /* try { // try from 005dd468 to 005dd46f has its CatchHandler @ 005ddbbc */
    local_58._0_4_ = (Data *)0x2;
    QTextStream::QTextStream(pQVar2,pQVar2 + 8,(QString *)local_58);
    *(int **)(pQVar2 + 8) = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar2 + 0xc) = 1;
    *(undefined4 *)(pQVar2 + 0x10) = 0;
    pQVar2[0x14] = (QTextStream)0x1;
    pQVar2[0x15] = (QTextStream)0x1;
    local_1c = pQVar2;
                    /* try { // try from 005dd4bc to 005dd4c3 has its CatchHandler @ 005ddbdc */
    QString::fromAscii((char *)&local_20,0xae6d28);
                    /* try { // try from 005dd4c8 to 005dd4cf has its CatchHandler @ 005ddbd4 */
    QTextStream::operator<<(pQVar2,(QString *)&local_20);
    iVar5 = *(int *)local_20;
    *(int *)local_20 = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free(local_20);
      QVar1 = local_1c[0x14];
    }
    else {
      QVar1 = local_1c[0x14];
    }
    if (QVar1 != (QTextStream)0x0) {
      QTextStream::operator<<(local_1c,' ');
    }
    pQVar2 = local_1c;
                    /* try { // try from 005dd514 to 005dd51b has its CatchHandler @ 005ddbdc */
    QString::fromAscii((char *)&local_24,0xae6f90);
                    /* try { // try from 005dd520 to 005dd527 has its CatchHandler @ 005ddbcc */
    QTextStream::operator<<(pQVar2,(QString *)&local_24);
    iVar5 = *(int *)local_24;
    *(int *)local_24 = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free(local_24);
      QVar1 = local_1c[0x14];
    }
    else {
      QVar1 = local_1c[0x14];
    }
    if (QVar1 != (QTextStream)0x0) {
      QTextStream::operator<<(local_1c,' ');
    }
    pQVar2 = local_1c;
                    /* try { // try from 005dd568 to 005dd56f has its CatchHandler @ 005ddbdc */
    QString::fromAscii((char *)local_58,0xae6f00);
                    /* try { // try from 005dd574 to 005dd57b has its CatchHandler @ 005ddbc4 */
    QTextStream::operator<<(pQVar2,(QString *)local_58);
    iVar5 = *(int *)local_58._0_4_;
    *(int *)local_58._0_4_ = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free((Data *)local_58._0_4_);
      QVar1 = local_1c[0x14];
    }
    else {
      QVar1 = local_1c[0x14];
    }
    if (QVar1 != (QTextStream)0x0) {
                    /* try { // try from 005dd5d4 to 005dd5fb has its CatchHandler @ 005ddbdc */
      QTextStream::operator<<(local_1c,' ');
    }
    QDebug::~QDebug((QDebug *)&local_1c);
    return 0;
  }
  iVar5 = open("/dev/ttyS3",0x882);
  if (iVar5 < 0) {
    pQVar2 = operator_new(0x18);
                    /* try { // try from 005dd8e0 to 005dd8e7 has its CatchHandler @ 005ddb20 */
    local_58._0_4_ = (Data *)0x2;
    QTextStream::QTextStream(pQVar2,pQVar2 + 8,(QString *)local_58);
    *(int **)(pQVar2 + 8) = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar2 + 0xc) = 1;
    *(undefined4 *)(pQVar2 + 0x10) = 0;
    pQVar2[0x14] = (QTextStream)0x1;
    pQVar2[0x15] = (QTextStream)0x1;
    local_1c = pQVar2;
                    /* try { // try from 005dd934 to 005dd93b has its CatchHandler @ 005ddb18 */
    QString::fromAscii((char *)&local_20,0xae6d28);
                    /* try { // try from 005dd940 to 005dd947 has its CatchHandler @ 005ddafc */
    QTextStream::operator<<(pQVar2,(QString *)&local_20);
    iVar5 = *(int *)local_20;
    *(int *)local_20 = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free(local_20);
    }
    if (local_1c[0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_1c,' ');
    }
    pQVar2 = local_1c;
                    /* try { // try from 005dd990 to 005dd997 has its CatchHandler @ 005ddb18 */
    QString::fromAscii((char *)&local_24,0xae6f90);
                    /* try { // try from 005dd99c to 005dd9a3 has its CatchHandler @ 005ddb34 */
    QTextStream::operator<<(pQVar2,(QString *)&local_24);
    iVar5 = *(int *)local_24;
    *(int *)local_24 = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free(local_24);
    }
    if (local_1c[0x14] != (QTextStream)0x0) {
                    /* try { // try from 005ddaac to 005ddac3 has its CatchHandler @ 005ddb18 */
      QTextStream::operator<<(local_1c,' ');
    }
    pQVar2 = local_1c;
                    /* try { // try from 005dd9e8 to 005dd9ef has its CatchHandler @ 005ddb18 */
    QString::fromAscii((char *)local_58,0xae6f34);
                    /* try { // try from 005dd9f4 to 005dd9fb has its CatchHandler @ 005ddb48 */
    QTextStream::operator<<(pQVar2,(QString *)local_58);
    iVar5 = *(int *)local_58._0_4_;
    *(int *)local_58._0_4_ = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free((Data *)local_58._0_4_);
    }
    if (local_1c[0x14] == (QTextStream)0x0) {
      this_00 = (QDebug *)&local_1c;
    }
    else {
                    /* try { // try from 005dda3c to 005dda43 has its CatchHandler @ 005ddb18 */
      QTextStream::operator<<(local_1c,' ');
      this_00 = (QDebug *)&local_1c;
    }
  }
  else {
    cfsetispeed((termios *)local_58,0xd);
    cfsetospeed((termios *)local_58,0xd);
    local_58._12_4_ = local_58._12_4_ & 0xffffffe4;
    local_58._4_4_ = local_58._4_4_ & 0xfffffffe;
    local_58._0_4_ = local_58._0_4_ & 0xfffffaff;
    local_58._8_4_ = local_58._8_4_ & 0x7ffffe8f | 0x8b0;
    ::tcflush(*(int *)(this + 0xc),2);
    iVar3 = tcsetattr(iVar5,0x540e,(termios *)local_58);
    if (-1 < iVar3) {
      *(int *)(this + 0xc) = iVar5;
      return 0;
    }
    pQVar2 = operator_new(0x18);
                    /* try { // try from 005dd73c to 005dd743 has its CatchHandler @ 005ddba8 */
    local_24 = (Data *)0x2;
    QTextStream::QTextStream(pQVar2,pQVar2 + 8,(QString *)&local_24);
    *(int **)(pQVar2 + 8) = &QString::shared_null;
    QString::shared_null = QString::shared_null + 1;
    *(undefined4 *)(pQVar2 + 0xc) = 1;
    *(undefined4 *)(pQVar2 + 0x10) = 0;
    pQVar2[0x14] = (QTextStream)0x1;
    pQVar2[0x15] = (QTextStream)0x1;
    local_18[0] = pQVar2;
                    /* try { // try from 005dd78c to 005dd793 has its CatchHandler @ 005ddba0 */
    QString::fromAscii((char *)&local_1c,0xae6d28);
                    /* try { // try from 005dd798 to 005dd79f has its CatchHandler @ 005ddb8c */
    QTextStream::operator<<(pQVar2,(QString *)&local_1c);
    iVar5 = *(int *)local_1c;
    *(int *)local_1c = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free((Data *)local_1c);
    }
    if (local_18[0][0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_18[0],' ');
    }
    pQVar2 = local_18[0];
                    /* try { // try from 005dd7e8 to 005dd7ef has its CatchHandler @ 005ddba0 */
    QString::fromAscii((char *)&local_20,0xae6f90);
                    /* try { // try from 005dd7f4 to 005dd7fb has its CatchHandler @ 005ddb5c */
    QTextStream::operator<<(pQVar2,(QString *)&local_20);
    iVar5 = *(int *)local_20;
    *(int *)local_20 = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free(local_20);
    }
    if (local_18[0][0x14] != (QTextStream)0x0) {
      QTextStream::operator<<(local_18[0],' ');
    }
    pQVar2 = local_18[0];
                    /* try { // try from 005dd840 to 005dd847 has its CatchHandler @ 005ddba0 */
    QString::fromAscii((char *)&local_24,0xae6f5c);
                    /* try { // try from 005dd84c to 005dd853 has its CatchHandler @ 005ddb78 */
    QTextStream::operator<<(pQVar2,(QString *)&local_24);
    iVar5 = *(int *)local_24;
    *(int *)local_24 = iVar5 + -1;
    if (iVar5 == 1) {
      QString::free(local_24);
    }
    if (local_18[0][0x14] == (QTextStream)0x0) {
      this_00 = (QDebug *)local_18;
    }
    else {
                    /* try { // try from 005dda4c to 005dda73 has its CatchHandler @ 005ddba0 */
      QTextStream::operator<<(local_18[0],' ');
      this_00 = (QDebug *)local_18;
    }
  }
  QDebug::~QDebug(this_00);
  piVar4 = __errno_location();
  return -*piVar4;
}



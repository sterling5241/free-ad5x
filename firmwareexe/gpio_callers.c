gpio_out <- MainWindow::doPowerOff @ 0053a33c
gpio_out <- Print::printCompletedPowerOff @ 00682a58
gpio_set_value <- gpio_out @ 0079d614
gpio_export <- gpio_out @ 0079d43c
gpio_export <- sLightCheck @ 0079d374
// ===== MainWindow::doPowerOff @ 0053a244

/* MainWindow::doPowerOff() */

void MainWindow::doPowerOff(void)

{
  QDebug *this;
  int iVar1;
  SelectDialog *pSVar2;
  int *local_20;
  QString aQStack_1c [4];
  int *local_18;
  int *local_14;
  
  QDebug::QDebug((QDebug *)&local_20,0);
                    /* try { // try from 0053a26c to 0053a283 has its CatchHandler @ 0053a454 */
  this = (QDebug *)QDebug::operator<<((QDebug *)&local_20,"../ad5x/mainWindow.cpp");
  QDebug::operator<<(this,"doPowerOff");
  QDebug::~QDebug((QDebug *)&local_20);
  if (LcdProtect::instLcdProtect != 0) {
    LcdProtect::lightScreen();
    QWidget::close();
    LcdProtect::instLcdProtect = 0;
  }
  QMetaObject::tr((char *)&local_14,(char *)&staticMetaObject);
  pSVar2 = SelectDialog::instSelectDialog;
  if (SelectDialog::instSelectDialog == (SelectDialog *)0x0) {
    local_18 = local_14;
    *local_14 = *local_14 + 1;
                    /* try { // try from 0053a37c to 0053a383 has its CatchHandler @ 0053a3f0 */
    QMetaObject::tr((char *)aQStack_1c,(char *)&SelectDialog::staticMetaObject);
                    /* try { // try from 0053a394 to 0053a39b has its CatchHandler @ 0053a410 */
    QMetaObject::tr((char *)&local_20,(char *)&SelectDialog::staticMetaObject);
                    /* try { // try from 0053a39c to 0053a3a3 has its CatchHandler @ 0053a428 */
    pSVar2 = operator_new(0x18);
                    /* try { // try from 0053a3c4 to 0053a3cb has its CatchHandler @ 0053a440 */
    SelectDialog::SelectDialog(pSVar2,1,(QString *)&local_18,aQStack_1c,&local_20,0);
    SelectDialog::instSelectDialog = pSVar2;
    QString::~QString((QString *)&local_20);
    QString::~QString(aQStack_1c);
    QString::~QString((QString *)&local_18);
  }
  else {
    local_20 = local_14;
    *local_14 = *local_14 + 1;
                    /* try { // try from 0053a2f8 to 0053a2ff has its CatchHandler @ 0053a470 */
    SelectDialog::setLabelText(pSVar2,&local_20);
    QString::~QString((QString *)&local_20);
  }
                    /* try { // try from 0053a308 to 0053a343 has its CatchHandler @ 0053a468 */
  iVar1 = QDialog::exec();
  if (iVar1 == 1) {
    gpio_out(0x2c,0);
  }
  QString::~QString((QString *)&local_14);
  return;
}


// ===== Print::printCompletedPowerOff @ 0068292c

/* Print::printCompletedPowerOff() */

void Print::printCompletedPowerOff(void)

{
  QTextStream *pQVar1;
  int iVar2;
  Data *local_20;
  Data *local_1c;
  QTextStream *local_18 [3];
  
  pQVar1 = operator_new(0x18);
                    /* try { // try from 00682958 to 0068295f has its CatchHandler @ 00682ab4 */
  local_20 = (Data *)0x2;
  QTextStream::QTextStream(pQVar1,pQVar1 + 8,&local_20);
  *(int **)(pQVar1 + 8) = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
  *(undefined4 *)(pQVar1 + 0xc) = 1;
  *(undefined4 *)(pQVar1 + 0x10) = 0;
  pQVar1[0x14] = (QTextStream)0x1;
  pQVar1[0x15] = (QTextStream)0x1;
  local_18[0] = pQVar1;
                    /* try { // try from 006829a8 to 006829af has its CatchHandler @ 00682af8 */
  QString::fromAscii((char *)&local_1c,0xaf9c30);
                    /* try { // try from 006829b4 to 006829bb has its CatchHandler @ 00682ae4 */
  QTextStream::operator<<(pQVar1,(QString *)&local_1c);
  iVar2 = *(int *)local_1c;
  *(int *)local_1c = iVar2 + -1;
  if (iVar2 == 1) {
    QString::free(local_1c);
  }
  if (local_18[0][0x14] != (QTextStream)0x0) {
                    /* try { // try from 00682a74 to 00682a8b has its CatchHandler @ 00682af8 */
    QTextStream::operator<<(local_18[0],' ');
  }
  pQVar1 = local_18[0];
                    /* try { // try from 00682a00 to 00682a07 has its CatchHandler @ 00682af8 */
  QString::fromAscii((char *)&local_20,0xafd408);
                    /* try { // try from 00682a0c to 00682a13 has its CatchHandler @ 00682ac8 */
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
  gpio_out(0x2c,0);
  return;
}


// ===== gpio_out @ 0079d420

/* gpio_out(unsigned int, unsigned int) */

void gpio_out(uint param_1,uint param_2)

{
  int iVar1;
  QTextStream *pQVar2;
  int iVar3;
  Data *local_40 [2];
  Data aDStack_38 [16];
  Data *local_28;
  Data *local_24;
  QTextStream *local_20 [3];
  
  iVar1 = gpio_export(param_1);
  pQVar2 = operator_new(0x18);
                    /* try { // try from 0079d464 to 0079d46b has its CatchHandler @ 0079d710 */
  local_40[0] = (Data *)0x2;
  QTextStream::QTextStream(pQVar2,pQVar2 + 8,local_40);
  *(int **)(pQVar2 + 8) = &QString::shared_null;
  QString::shared_null = QString::shared_null + 1;
  *(undefined4 *)(pQVar2 + 0xc) = 1;
  *(undefined4 *)(pQVar2 + 0x10) = 0;
  pQVar2[0x14] = (QTextStream)0x1;
  pQVar2[0x15] = (QTextStream)0x1;
  local_20[0] = pQVar2;
                    /* try { // try from 0079d4b4 to 0079d4bb has its CatchHandler @ 0079d708 */
  QString::fromAscii((char *)&local_24,0xb28c1c);
                    /* try { // try from 0079d4c0 to 0079d4c7 has its CatchHandler @ 0079d6f4 */
  QTextStream::operator<<(pQVar2,(QString *)&local_24);
  iVar3 = *(int *)local_24;
  *(int *)local_24 = iVar3 + -1;
  if (iVar3 == 1) {
    QString::free(local_24);
  }
  if (local_20[0][0x14] != (QTextStream)0x0) {
                    /* try { // try from 0079d638 to 0079d66f has its CatchHandler @ 0079d708 */
    QTextStream::operator<<(local_20[0],' ');
  }
  pQVar2 = local_20[0];
                    /* try { // try from 0079d50c to 0079d513 has its CatchHandler @ 0079d708 */
  QString::fromAscii((char *)&local_28,0xb28c40);
                    /* try { // try from 0079d518 to 0079d51f has its CatchHandler @ 0079d6e0 */
  QTextStream::operator<<(pQVar2,(QString *)&local_28);
  iVar3 = *(int *)local_28;
  *(int *)local_28 = iVar3 + -1;
  if (iVar3 == 1) {
    QString::free(local_28);
  }
  if (local_20[0][0x14] != (QTextStream)0x0) {
    QTextStream::operator<<(local_20[0],' ');
  }
  pQVar2 = local_20[0];
                    /* try { // try from 0079d564 to 0079d56b has its CatchHandler @ 0079d708 */
  QString::fromAscii((char *)local_40,0xb28c34);
                    /* try { // try from 0079d570 to 0079d577 has its CatchHandler @ 0079d6a8 */
  QTextStream::operator<<(pQVar2,(QString *)local_40);
  iVar3 = *(int *)local_40[0];
  *(int *)local_40[0] = iVar3 + -1;
  if (iVar3 == 1) {
    QString::free(local_40[0]);
  }
  if (local_20[0][0x14] != (QTextStream)0x0) {
    QTextStream::operator<<(local_20[0],' ');
  }
                    /* try { // try from 0079d5b0 to 0079d5b7 has its CatchHandler @ 0079d708 */
  QTextStream::operator<<(local_20[0],iVar1);
  if (local_20[0][0x14] != (QTextStream)0x0) {
    QTextStream::operator<<(local_20[0],' ');
  }
  QDebug::~QDebug((QDebug *)local_20);
  local_40[0] = aDStack_38;
  std::__cxx11::string::_M_construct<char_const*>(local_40,"out","");
                    /* try { // try from 0079d5f4 to 0079d5fb has its CatchHandler @ 0079d6c4 */
  gpio_set_direction(param_1,(string *)local_40);
  if (local_40[0] != aDStack_38) {
    operator_delete(local_40[0]);
  }
  gpio_set_value(param_1,param_2);
  return;
}


// ===== sLightCheck @ 0079d360

/* sLightCheck(unsigned int) */

bool sLightCheck(uint param_1)

{
  int iVar1;
  undefined1 *local_30 [2];
  undefined1 auStack_28 [16];
  uint local_18 [3];
  
  local_18[0] = 0;
  gpio_export(param_1);
  local_30[0] = auStack_28;
  std::__cxx11::string::_M_construct<char_const*>(local_30,"in","");
                    /* try { // try from 0079d3a0 to 0079d3a7 has its CatchHandler @ 0079d404 */
  gpio_set_direction(param_1,(string *)local_30);
  if (local_30[0] != auStack_28) {
    operator_delete(local_30[0]);
  }
  iVar1 = gpio_get_value(param_1,local_18);
  if (iVar1 < 0) {
    return false;
  }
  return local_18[0] != 1;
}



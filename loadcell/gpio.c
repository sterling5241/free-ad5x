
// ===== gpio_export @ 0079cb14
// caller: ? @ 00cdb7bc
// caller: ? @ 00d17508
// caller: ? @ Entry Point
// caller: gpio_out @ 0079d43c
// caller: sLightCheck @ 0079d374

/* gpio_export(unsigned int) */

int gpio_export(uint param_1)

{
  int iVar1;
  size_t __n;
  ssize_t sVar2;
  int *piVar3;
  int iVar4;
  char acStack_190 [256];
  char acStack_90 [128];
  
  snprintf(acStack_190,0x100,"%s/gpio%u","/sys/class/gpio",param_1);
  iVar1 = access(acStack_190,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = open("/sys/class/gpio/export",1);
  if (iVar1 < 0) {
    perror("gpio/export");
    piVar3 = __errno_location();
    return -*piVar3;
  }
  __n = snprintf(acStack_90,0x80,"%d",param_1);
  sVar2 = write(iVar1,acStack_90,__n);
  iVar4 = 0;
  if (sVar2 < 0) {
    piVar3 = __errno_location();
    iVar4 = -*piVar3;
  }
  close(iVar1);
  return iVar4;
}



// ===== gpio_set_value @ 0079ce64
// caller: ? @ 00cdb7d4
// caller: ? @ 00d175b4
// caller: ? @ Entry Point
// caller: gpio_out @ 0079d614

/* gpio_set_value(unsigned int, unsigned int) */

int gpio_set_value(uint param_1,uint param_2)

{
  int iVar1;
  int __fd;
  ssize_t sVar2;
  int *piVar3;
  char acStack_98 [128];
  undefined1 local_18 [8];
  
  if (param_2 < 2) {
    snprintf(acStack_98,0x80,"%s/gpio%d/value","/sys/class/gpio",param_1);
    iVar1 = access(acStack_98,0);
    if (iVar1 == 0) {
      __fd = open(acStack_98,1);
      if (__fd < 0) {
        piVar3 = __errno_location();
        return -*piVar3;
      }
      if (param_2 == 0) {
        local_18[0] = 0x30;
      }
      else {
        local_18[0] = 0x31;
      }
      sVar2 = write(__fd,local_18,1);
      iVar1 = 0;
      if (sVar2 < 0) {
        piVar3 = __errno_location();
        iVar1 = -*piVar3;
      }
      close(__fd);
    }
    else {
      iVar1 = -0x11;
    }
  }
  else {
    iVar1 = -0x16;
  }
  return iVar1;
}



// ===== gpio_out @ 0079d420
// caller: ? @ 00cdb814
// caller: ? @ 00d1771c
// caller: ? @ 00de3183
// caller: ? @ 00de31b7
// caller: ? @ 00de31c2
// caller: ? @ 00de31cd
// caller: ? @ Entry Point
// caller: MainWindow::doPowerOff @ 0053a33c
// caller: Print::printCompletedPowerOff @ 00682a58

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



// ===== _init @ 004012a8

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = 0;
  if (PTR___gmon_start___004189e4 != (undefined *)0x0) {
    iVar1 = (*(code *)PTR___gmon_start___004189e4)();
  }
  return iVar1;
}


// ===== main @ 004012f0

int main(int param_1,char **param_2)

{
  int iVar1;
  N32Isp aNStack_370 [660];
  ParseInputParam aPStack_dc [84];
  input_param local_88;
  char local_87;
  char local_86;
  undefined1 *local_84;
  int local_80;
  undefined1 local_7c [16];
  undefined4 local_6c;
  undefined4 local_68;
  char local_64;
  undefined4 local_60;
  char local_5c;
  undefined1 *local_54;
  int local_50;
  undefined1 local_4c [16];
  char local_3c;
  char local_3b;
  char local_3a;
  char local_39;
  char local_38;
  char local_37;
  undefined1 *local_34 [2];
  undefined1 auStack_2c [24];
  
  N32Isp::N32Isp(aNStack_370);
  local_84 = local_7c;
  local_54 = local_4c;
  local_80 = 0;
  local_7c[0] = 0;
  local_50 = 0;
                    /* try { // try from 00401338 to 0040133f has its CatchHandler @ 00401718 */
  local_4c[0] = 0;
  ParseInputParam::ParseInputParam(aPStack_dc);
                    /* try { // try from 00401350 to 004013f3 has its CatchHandler @ 00401700 */
  ParseInputParam::parse_command_input_paramter(aPStack_dc,param_1,param_2,&local_88);
  if ((local_88 != (input_param)0x0) || (param_1 < 2)) {
    ParseInputParam::show_help_info();
    iVar1 = 0;
    goto LAB_0040146c;
  }
  if (local_87 != '\0') {
    N32Isp::serial_port_scan();
    iVar1 = 0;
    goto LAB_0040146c;
  }
  if ((local_5c != '\0') && (local_86 == '\0')) {
    local_86 = '\x01';
  }
  if ((local_38 != '\0') && (local_86 == '\0')) {
    local_86 = '\x01';
  }
  if (local_37 == '\0') {
    if (local_39 == '\0') goto LAB_004014c4;
    if (local_86 == '\0') {
      local_86 = '\x01';
    }
LAB_004013d8:
    local_34[0] = auStack_2c;
    std::__cxx11::string::_M_construct<char*>(local_34,local_84,local_84 + local_80);
                    /* try { // try from 00401410 to 00401417 has its CatchHandler @ 004016f8 */
    iVar1 = N32Isp::connected_to_N32G45x
                      (aNStack_370,local_34,local_6c,local_68,(int)local_64,local_60);
    if (local_34[0] != auStack_2c) {
      operator_delete(local_34[0]);
    }
    if (-1 < iVar1) {
      if (local_5c != '\0') {
LAB_004014d8:
        if (local_3c == '\0') {
          if (local_3b == '\0') goto LAB_004014ec;
LAB_0040167c:
          local_34[0] = auStack_2c;
          std::__cxx11::string::_M_construct<char*>(local_34,local_54,local_54 + local_50);
                    /* try { // try from 00401698 to 0040169f has its CatchHandler @ 00401710 */
          iVar1 = N32Isp::erase_flash_by_file_size(aNStack_370,local_34);
          if (local_34[0] != auStack_2c) {
            operator_delete(local_34[0]);
          }
          if (iVar1 < 0) goto LAB_0040161c;
        }
        else {
          if (local_3b == '\0') {
LAB_00401644:
            iVar1 = N32Isp::erase_flash_all(aNStack_370);
            if (iVar1 < 0) goto LAB_0040161c;
          }
          else {
LAB_004014ec:
            local_34[0] = auStack_2c;
            std::__cxx11::string::_M_construct<char*>(local_34,local_54,local_54 + local_50);
                    /* try { // try from 0040150c to 00401513 has its CatchHandler @ 00401708 */
            iVar1 = N32Isp::erase_flash_by_file_size(aNStack_370,local_34);
            if (local_34[0] != auStack_2c) {
              operator_delete(local_34[0]);
            }
            if (iVar1 < 0) goto LAB_0040161c;
            if (local_3c != '\0') goto LAB_00401644;
          }
          if (local_3b != '\0') goto LAB_0040167c;
        }
        local_34[0] = auStack_2c;
                    /* try { // try from 00401554 to 0040155b has its CatchHandler @ 00401700 */
        std::__cxx11::string::_M_construct<char*>(local_34,local_54,local_54 + local_50);
                    /* try { // try from 00401564 to 0040156b has its CatchHandler @ 00401724 */
        iVar1 = N32Isp::download_file_to_flash(aNStack_370,local_34,0x8000000);
        if (local_34[0] != auStack_2c) {
          operator_delete(local_34[0]);
        }
        if (iVar1 < 0) goto LAB_0040161c;
        if (local_3a != '\0') {
          local_34[0] = auStack_2c;
          std::__cxx11::string::_M_construct<char*>(local_34,local_54,local_54 + local_50);
                    /* try { // try from 004015f8 to 004015ff has its CatchHandler @ 004016c4 */
          iVar1 = N32Isp::check_download_file(aNStack_370,local_34,0x8000000);
          if (local_34[0] != auStack_2c) {
            operator_delete(local_34[0]);
          }
          if (iVar1 < 0) goto LAB_0040161c;
        }
        if (local_5c != '\0') goto LAB_0040159c;
      }
                    /* try { // try from 00401448 to 00401507 has its CatchHandler @ 00401700 */
      if ((local_39 == '\0') || (iVar1 = N32Isp::erase_flash_all(aNStack_370), -1 < iVar1))
      goto LAB_0040159c;
    }
  }
  else {
    if (local_86 == '\0') {
      local_86 = '\x01';
    }
    if (local_39 != '\0') goto LAB_004013d8;
LAB_004014c4:
    if (local_86 != '\0') goto LAB_004013d8;
    iVar1 = 0;
    if (local_5c != '\0') goto LAB_004014d8;
LAB_0040159c:
                    /* try { // try from 004015b0 to 004015ef has its CatchHandler @ 00401700 */
    if (((local_38 == '\0') || (iVar1 = N32Isp::chip_system_reset(aNStack_370), -1 < iVar1)) &&
       ((local_37 == '\0' || (iVar1 = N32Isp::chip_app_go(aNStack_370), -1 < iVar1)))) {
      N32Isp::disconnected_N32G45X(aNStack_370);
      setUpdateFlag();
      goto LAB_0040146c;
    }
  }
LAB_0040161c:
                    /* try { // try from 0040161c to 00401693 has its CatchHandler @ 00401700 */
  N32Isp::disconnected_N32G45X(aNStack_370);
  iVar1 = -1;
LAB_0040146c:
  ParseInputParam::~ParseInputParam(aPStack_dc);
  input_param::~input_param(&local_88);
  N32Isp::~N32Isp(aNStack_370);
  return iVar1;
}


// ===== _GLOBAL__sub_I_setUpdateFlag @ 0040172c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* setUpdateFlag() */

void _GLOBAL__sub_I_setUpdateFlag(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(&LAB_00408880,&std::__ioinit,&__dso_handle);
  return;
}


// ===== _GLOBAL__sub_I_Serial @ 00401768

/* Serial::Serial() */

void Serial::_GLOBAL__sub_I_Serial(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(&LAB_00408880,&std::__ioinit,&__dso_handle);
  return;
}


// ===== _GLOBAL__sub_I_ParseInputParam @ 004017a4

/* ParseInputParam::ParseInputParam() */

void ParseInputParam::_GLOBAL__sub_I_ParseInputParam(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(&LAB_00408880,&std::__ioinit,&__dso_handle);
  return;
}


// ===== _GLOBAL__sub_I_ISPCommand @ 004017e0

/* ISPCommand::ISPCommand() */

void ISPCommand::_GLOBAL__sub_I_ISPCommand(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(&LAB_00408880,&std::__ioinit,&__dso_handle);
  return;
}


// ===== _GLOBAL__sub_I_gpio_export @ 0040181c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* gpio_export(unsigned int) */

void _GLOBAL__sub_I_gpio_export(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(&LAB_00408880,&std::__ioinit,&__dso_handle);
  return;
}


// ===== _GLOBAL__sub_I_N32Isp @ 00401858

/* N32Isp::N32Isp() */

void N32Isp::_GLOBAL__sub_I_N32Isp(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(&LAB_00408880,&std::__ioinit,&__dso_handle);
  return;
}


// ===== __start @ 004018a0

void processEntry __start(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 auStack_20 [16];
  code *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = __libc_csu_fini;
  local_c = param_1;
  __libc_start_main(main,param_2,&param_3,__libc_csu_init);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// ===== deregister_tm_clones @ 00401900

/* WARNING: Removing unreachable block (ram,0x00401918) */
/* WARNING: Removing unreachable block (ram,0x00401924) */

void deregister_tm_clones(void)

{
  return;
}


// ===== register_tm_clones @ 00401934

/* WARNING: Removing unreachable block (ram,0x00401964) */
/* WARNING: Removing unreachable block (ram,0x00401954) */
/* WARNING: Removing unreachable block (ram,0x00401970) */

void register_tm_clones(void)

{
  return;
}


// ===== __do_global_dtors_aux @ 00401980

void __do_global_dtors_aux(void)

{
  if (completed_6546 == '\0') {
    deregister_tm_clones();
    completed_6546 = '\x01';
  }
  return;
}


// ===== _M_construct<char*> @ 004019c0

/* void std::__cxx11::string::_M_construct<char*>(char*, char*, std::forward_iterator_tag) [clone
   .isra.18] */

void std::__cxx11::string::_M_construct<char*>(uint *param_1,undefined1 *param_2,int param_3)

{
  void *__dest;
  undefined1 *puVar1;
  uint uVar2;
  size_t unaff_s0;
  undefined1 *unaff_s2;
  undefined8 uVar3;
  uint local_18 [2];
  
  if (param_2 == (undefined1 *)0x0) {
    if (param_3 == 0) {
      local_18[0] = 0;
      uVar2 = *param_1;
      goto LAB_00401a0c;
    }
    uVar3 = std::__throw_logic_error("basic_string::_M_construct null not valid");
    param_2 = unaff_s2;
LAB_00401a84:
    uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
    __dest = (void *)uVar3;
    if (unaff_s0 == 0) goto LAB_00401a0c;
  }
  else {
    unaff_s0 = param_3 - (int)param_2;
    local_18[0] = unaff_s0;
    if (unaff_s0 < 0x10) {
      puVar1 = (undefined1 *)*param_1;
      uVar3 = CONCAT44(puVar1,puVar1);
      if (unaff_s0 == 1) {
        *puVar1 = *param_2;
        uVar2 = *param_1;
        goto LAB_00401a0c;
      }
      goto LAB_00401a84;
    }
    __dest = (void *)std::__cxx11::string::_M_create(param_1,(uint)local_18);
    *param_1 = (uint)__dest;
    param_1[2] = local_18[0];
  }
  memcpy(__dest,param_2,unaff_s0);
  uVar2 = *param_1;
LAB_00401a0c:
  param_1[1] = local_18[0];
  *(undefined1 *)(uVar2 + local_18[0]) = 0;
  return;
}


// ===== setUpdateFlag @ 00401a94

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* setUpdateFlag() */

undefined4 setUpdateFlag(void)

{
  char *pcVar1;
  char acStack_1048 [4096];
  char acStack_48 [68];
  
  pcVar1 = getcwd(acStack_1048,0x1000);
  if (pcVar1 != (char *)0x0) {
    sprintf(acStack_48,"rm -f %s/UpdateM",acStack_1048);
    puts(acStack_48);
    system(acStack_48);
    sync();
  }
  return 0;
}


// ===== ~input_param @ 00401af0

/* input_param::~input_param() */

void __thiscall input_param::~input_param(input_param *this)

{
  if (*(input_param **)(this + 0x34) != this + 0x3c) {
    operator_delete(*(input_param **)(this + 0x34));
  }
  if (*(input_param **)(this + 4) == this + 0xc) {
    return;
  }
  operator_delete(*(input_param **)(this + 4));
  return;
}


// ===== _M_construct<char_const*> @ 00401b40

/* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
   std::forward_iterator_tag) [clone .isra.24] */

void std::__cxx11::string::_M_construct<char_const*>(uint *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *__dest;
  uint __n;
  uint local_18 [2];
  
  __n = param_3 - (int)param_2;
  local_18[0] = __n;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      param_1[1] = 1;
      *(undefined1 *)(*param_1 + 1) = 0;
      return;
    }
    if (__n == 0) {
      param_1[1] = 0;
      *__dest = 0;
      return;
    }
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(uint)local_18);
    *param_1 = (uint)__dest;
    param_1[2] = local_18[0];
  }
  memcpy(__dest,param_2,__n);
  param_1[1] = local_18[0];
  *(undefined1 *)(*param_1 + local_18[0]) = 0;
  return;
}


// ===== Serial @ 00401c34

/* Serial::Serial() */

void __thiscall Serial::Serial(Serial *this)

{
  *(Serial **)this = this + 8;
  std::__cxx11::string::_M_construct<char_const*>(this,&DAT_004069b4,&DAT_004069be);
  *(undefined4 *)(this + 0x18) = 0x2580;
  *(undefined4 *)(this + 0x1c) = 8;
  *(undefined4 *)(this + 0x20) = 1;
  this[0x24] = (Serial)0x6e;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x25] = (Serial)0x0;
  return;
}


// ===== ~Serial @ 00401c98

/* Serial::~Serial() */

void __thiscall Serial::~Serial(Serial *this)

{
  if (*(Serial **)this == this + 8) {
    return;
  }
  operator_delete(*(Serial **)this);
  return;
}


// ===== check_serial @ 00401cb8

/* Serial::check_serial() */

undefined4 Serial::check_serial(void)

{
  FILE *__stream;
  size_t sVar1;
  int iVar2;
  ostream *poVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  char acStack_d0 [128];
  char *local_50;
  int local_4c;
  char local_48 [16];
  char *local_38 [2];
  char acStack_30 [20];
  
  local_38[0] = acStack_30;
  std::__cxx11::string::_M_construct<char_const*>(local_38,"/bin/ls /dev/ttyS*","");
                    /* try { // try from 00401d00 to 00401d07 has its CatchHandler @ 00402128 */
  __stream = popen(local_38[0],"r");
  if (__stream == (FILE *)0x0) {
                    /* try { // try from 00401f28 to 00401f6b has its CatchHandler @ 00402128 */
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"popen error.",0xc);
    piVar6 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar6 == (int *)0x0) {
                    /* try { // try from 00402110 to 00402117 has its CatchHandler @ 00402128 */
      uVar5 = std::__throw_bad_cast();
      return uVar5;
    }
    if ((char)piVar6[7] == '\0') {
                    /* try { // try from 00402044 to 0040206b has its CatchHandler @ 00402128 */
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
        (**(code **)(*piVar6 + 0x18))(piVar6,10);
      }
    }
    std::ostream::put(-0x10);
    std::ostream::flush();
    uVar5 = 0xffffffff;
  }
  else {
    local_4c = 0;
    local_48[0] = '\0';
    local_50 = local_48;
    while (iVar2 = feof(__stream), iVar2 == 0) {
                    /* try { // try from 00401d34 to 00401f0f has its CatchHandler @ 004020e0 */
      sVar1 = fread(acStack_d0,1,0x80,__stream);
      iVar2 = ferror(__stream);
      if (iVar2 != 0) {
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"fread error",0xb);
        piVar6 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
        if (piVar6 == (int *)0x0) {
          uVar5 = std::__throw_bad_cast();
          return uVar5;
        }
        goto LAB_00401e38;
      }
      acStack_d0[sVar1] = '\0';
      sVar1 = strlen(acStack_d0);
      if (0x7fffffffU - local_4c < sVar1) {
        pcVar4 = "basic_string::append";
        std::__throw_length_error("basic_string::append");
                    /* catch() { ... } // from try @ 00401d34 with catch @ 004020e0
                       catch() { ... } // from try @ 00401f74 with catch @ 004020e0
                       catch() { ... } // from try @ 00402074 with catch @ 004020e0
                       catch() { ... } // from try @ 00402118 with catch @ 004020e0 */
        if (local_50 != local_48) {
          operator_delete(local_50);
        }
        if (local_38[0] != acStack_30) {
          operator_delete(local_38[0]);
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(pcVar4);
      }
      std::__cxx11::string::_M_append((char *)&local_50,(uint)acStack_d0);
    }
    pclose(__stream);
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&std::cout,"Enum the COM port...\n",0x15);
    piVar6 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar6 == (int *)0x0) {
      uVar5 = std::__throw_bad_cast();
      return uVar5;
    }
    if ((char)piVar6[7] == '\0') {
                    /* try { // try from 00401f74 to 0040203b has its CatchHandler @ 004020e0 */
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
        (**(code **)(*piVar6 + 0x18))(piVar6,10);
      }
    }
    std::ostream::put(-0x10);
    std::ostream::flush();
    iVar2 = std::__cxx11::string::find((char *)&local_50,0x406a24,0);
    if (iVar2 == -1) {
      poVar3 = std::__ostream_insert<char,std::char_traits<char>>
                         ((ostream *)&std::cout,local_50,local_4c);
      piVar6 = *(int **)(poVar3 + *(int *)(*(int *)poVar3 + -0xc) + 0x7c);
      if (piVar6 == (int *)0x0) {
        uVar5 = std::__throw_bad_cast();
        return uVar5;
      }
      if ((char)piVar6[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar6 + 0x18))(piVar6,10);
        }
      }
      std::ostream::put((char)poVar3);
      std::ostream::flush();
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"Enum the COM port\n",0x12);
      piVar6 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
      if (piVar6 == (int *)0x0) {
                    /* try { // try from 00402118 to 0040213f has its CatchHandler @ 004020e0 */
        uVar5 = std::__throw_bad_cast();
        return uVar5;
      }
      if ((char)piVar6[7] == '\0') {
                    /* try { // try from 00402074 to 004020df has its CatchHandler @ 004020e0 */
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar6 + 0x18))(piVar6,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      uVar5 = 0;
    }
    else {
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"No COM port was found.",0x16);
      piVar6 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
      if (piVar6 == (int *)0x0) {
        uVar5 = std::__throw_bad_cast();
        return uVar5;
      }
LAB_00401e38:
      if ((char)piVar6[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar6 + 0x18))(piVar6,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      uVar5 = 0xffffffff;
    }
    if (local_50 != local_48) {
      operator_delete(local_50);
    }
  }
  if (local_38[0] != acStack_30) {
    operator_delete(local_38[0]);
  }
  return uVar5;
}


// ===== open_serial @ 00402140

/* Serial::open_serial(std::__cxx11::string, unsigned int, unsigned int, char, unsigned int) */

undefined4 __thiscall
Serial::open_serial(Serial *this,undefined4 param_2,uint param_3,int param_4,char param_5,
                   int param_6)

{
  cc_t cVar1;
  cc_t cVar2;
  cc_t cVar3;
  termios *ptVar4;
  termios *ptVar5;
  int __fd;
  termios *ptVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  tcflag_t tVar10;
  uint uVar11;
  termios *ptVar12;
  tcflag_t tVar13;
  tcflag_t tVar14;
  speed_t __speed;
  int *piVar15;
  termios *__termios_p;
  
  std::__cxx11::string::_M_assign((string *)this);
  if (this[0x25] != (Serial)0x0) {
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"serial is open.",0xf);
    piVar15 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar15 != (int *)0x0) {
      if ((char)piVar15[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar15 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar15 + 0x18))(piVar15,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      return 0;
    }
LAB_00402530:
    uVar8 = std::__throw_bad_cast();
    return uVar8;
  }
  __fd = open(*(char **)this,0x882);
  *(int *)(this + 0x28) = __fd;
  if (__fd < 0) {
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&std::cout,"open serial device error",0x18);
    piVar15 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar15 != (int *)0x0) {
      if ((char)piVar15[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        (**(code **)(*piVar15 + 0x18))(piVar15,10);
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      return 0xffffffff;
    }
    goto LAB_00402530;
  }
  fcntl(__fd,4,0);
  __termios_p = (termios *)(this + 0x60);
  tcgetattr(*(int *)(this + 0x28),(termios *)(this + 0x2c));
  ptVar4 = __termios_p;
  ptVar5 = (termios *)(this + 0x2c);
  do {
    ptVar12 = ptVar5;
    ptVar6 = ptVar4;
    tVar14 = ptVar12->c_oflag;
    tVar13 = ptVar12->c_cflag;
    tVar10 = ptVar12->c_lflag;
    ptVar6->c_iflag = ptVar12->c_iflag;
    ptVar6->c_oflag = tVar14;
    ptVar6->c_cflag = tVar13;
    ptVar6->c_lflag = tVar10;
    ptVar4 = (termios *)&ptVar6->c_line;
    ptVar5 = (termios *)&ptVar12->c_line;
  } while ((Serial *)&ptVar12->c_line != this + 0x5c);
  cVar1 = ptVar12->c_cc[0];
  cVar2 = ptVar12->c_cc[1];
  cVar3 = ptVar12->c_cc[2];
  ptVar6->c_line = ptVar12->c_line;
  ptVar6->c_cc[0] = cVar1;
  ptVar6->c_cc[1] = cVar2;
  ptVar6->c_cc[2] = cVar3;
  cfmakeraw(__termios_p);
  this[0x75] = (Serial)0x0;
  this[0x76] = (Serial)0x14;
  if (param_3 == 0x2580) {
    __speed = 0xd;
  }
  else if (param_3 < 0x2581) {
    if (param_3 == 0x708) {
      __speed = 10;
    }
    else {
      __speed = 0xc;
      if ((param_3 != 0x12c0) && (__speed = 9, param_3 != 0x4b0)) {
LAB_0040242c:
        __speed = 0xe;
      }
    }
  }
  else if (param_3 == 0xe100) {
    __speed = 0x1001;
  }
  else if (param_3 < 0xe101) {
    __speed = 0xf;
    if (param_3 != 0x9600) {
      __speed = 0xe;
    }
  }
  else {
    __speed = 0x1002;
    if ((param_3 != 0x1c200) && (__speed = 0x1003, param_3 != 0x38400)) goto LAB_0040242c;
  }
  cfsetispeed(__termios_p,__speed);
  cfsetospeed(__termios_p,__speed);
  uVar9 = *(uint *)(this + 0x68) & 0x7fffffcf;
  uVar7 = uVar9 | 0x880;
  *(uint *)(this + 0x60) = *(uint *)(this + 0x60) & 0xfffffaff;
  *(uint *)(this + 0x68) = uVar7;
  *(uint *)(this + 100) = *(uint *)(this + 100) & 0xfffffffe;
  if (param_4 == 6) {
    uVar7 = uVar9 | 0x890;
LAB_004022c0:
    uVar11 = uVar7 | 0x100;
  }
  else {
    if (param_4 == 7) {
      uVar7 = uVar9 | 0x8a0;
      goto LAB_004022c0;
    }
    uVar11 = uVar9 | 0x980;
    if (param_4 != 5) {
      uVar7 = uVar9 | 0x8b0;
      goto LAB_004022c0;
    }
  }
  *(uint *)(this + 0x68) = uVar11;
  if (param_5 == 'O') {
LAB_00402438:
    uVar7 = uVar7 & 0x200;
    *(uint *)(this + 0x68) = uVar7;
    goto joined_r0x00402440;
  }
  if (param_5 < 'P') {
    if (param_5 == 'E') goto LAB_00402460;
  }
  else {
    if (param_5 == 'e') {
LAB_00402460:
      uVar7 = uVar7 & 0xfffffdff | 0x100;
      *(uint *)(this + 0x68) = uVar7;
      goto joined_r0x00402440;
    }
    if (param_5 == 'o') goto LAB_00402438;
  }
  uVar7 = uVar7 & 0xfffffeff;
  *(uint *)(this + 0x68) = uVar7;
joined_r0x00402440:
  if (param_6 == 2) {
    *(uint *)(this + 0x68) = uVar7 & 0x40;
  }
  else {
    *(uint *)(this + 0x68) = uVar7 & 0xffffffbf;
  }
  *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) & 0xffffffe4;
  tcsetattr(*(int *)(this + 0x28),0x540e,__termios_p);
  this[0x25] = (Serial)0x1;
  return 0;
}


// ===== close_serial @ 00402538

/* Serial::close_serial() */

undefined4 __thiscall Serial::close_serial(Serial *this)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  
  if (this[0x25] == (Serial)0x0) {
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"serial is close",0xf);
    piVar4 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar4 != (int *)0x0) {
      if ((char)piVar4[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar4 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar4 + 0x18))(piVar4,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      return 0;
    }
  }
  else {
    if (*(int *)(this + 0x28) < 0) {
      iVar1 = 0x10;
      pcVar3 = "serial fd error\n";
    }
    else {
      iVar1 = tcsetattr(*(int *)(this + 0x28),0x540e,(termios *)(this + 0x2c));
      if (-1 < iVar1) {
        close(*(int *)(this + 0x28));
        *(undefined4 *)(this + 0x28) = 0;
        this[0x25] = (Serial)0x0;
        return 0;
      }
      iVar1 = 0x16;
      pcVar3 = "set serial attr error\n";
    }
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar3,iVar1);
    piVar4 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar4 != (int *)0x0) {
      if ((char)piVar4[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar4 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar4 + 0x18))(piVar4,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      return 0xffffffff;
    }
  }
  uVar2 = std::__throw_bad_cast();
  return uVar2;
}


// ===== serial_send @ 004026d8

/* Serial::serial_send(unsigned char*, int) */

undefined4 __thiscall Serial::serial_send(Serial *this,uchar *param_1,int param_2)

{
  ssize_t sVar1;
  
  if (param_2 < 1) {
    return 0;
  }
  do {
    sVar1 = write(*(int *)(this + 0x28),param_1,param_2);
    param_2 = param_2 - sVar1;
    if (sVar1 < 1) {
      return 0xffffffff;
    }
    param_1 = param_1 + sVar1;
  } while (0 < param_2);
  return 0;
}


// ===== serial_recv @ 00402764

/* WARNING: Removing unreachable block (ram,0x004027e4) */
/* WARNING: Removing unreachable block (ram,0x00402838) */
/* Serial::serial_recv(unsigned char*, int) */

int __thiscall Serial::serial_recv(Serial *this,uchar *param_1,int param_2)

{
  __fd_mask *p_Var1;
  ssize_t sVar2;
  int iVar3;
  int __fd;
  int iVar4;
  fd_set local_b8;
  timeval local_38;
  uchar *local_30;
  
  if (param_2 < 1) {
    return 0;
  }
  local_30 = param_1;
  iVar4 = 0;
  p_Var1 = local_b8.fds_bits;
  do {
    do {
      *p_Var1 = 0;
      p_Var1 = p_Var1 + 1;
    } while (&local_38 != (timeval *)p_Var1);
    iVar3 = *(int *)(this + 0x28);
    local_38.tv_sec = 2;
    local_38.tv_usec = 0;
    p_Var1 = local_b8.fds_bits + iVar3 / 0x20;
    *p_Var1 = 1 << (iVar3 % 0x20 & 0x1fU) | *p_Var1;
    iVar3 = select(iVar3 + 1,&local_b8,(fd_set *)0x0,(fd_set *)0x0,&local_38);
    if (iVar3 == -1) {
      return -1;
    }
    if (iVar3 == 0) {
      return 0;
    }
    __fd = *(int *)(this + 0x28);
    if (((1 << (__fd % 0x20 & 0x1fU) & local_b8.fds_bits[__fd / 0x20]) != 0) &&
       (sVar2 = read(__fd,local_30 + iVar4,param_2 - iVar4), -1 < sVar2)) {
      iVar4 = iVar4 + sVar2;
    }
    p_Var1 = local_b8.fds_bits;
  } while (iVar4 < param_2);
  return iVar3;
}


// ===== serial_flush @ 004028f4

/* Serial::serial_flush() */

void __thiscall Serial::serial_flush(Serial *this)

{
  tcflush(*(int *)(this + 0x28),2);
  return;
}


// ===== do_widen @ 00402900

/* std::ctype<char>::do_widen(char) const */

undefined4 __thiscall std::ctype<char>::do_widen(ctype<char> *this,char param_1)

{
  undefined3 in_register_00000015;
  
  return CONCAT31(in_register_00000015,param_1);
}


// ===== ParseInputParam @ 00402910

/* ParseInputParam::ParseInputParam() */

void __thiscall ParseInputParam::ParseInputParam(ParseInputParam *this)

{
  *(ParseInputParam **)(this + 4) = this + 0xc;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (ParseInputParam)0x0;
  *(ParseInputParam **)(this + 0x34) = this + 0x3c;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x3c] = (ParseInputParam)0x0;
  *this = (ParseInputParam)0x0;
  this[1] = (ParseInputParam)0x0;
  this[2] = (ParseInputParam)0x0;
                    /* try { // try from 00402970 to 004029bf has its CatchHandler @ 004029f4 */
  std::__cxx11::string::_M_replace((uint)(this + 4),0,(char *)0x0,0x4069b4);
  *(undefined4 *)(this + 0x1c) = 0x2580;
  *(undefined4 *)(this + 0x20) = 8;
  this[0x24] = (ParseInputParam)0x6e;
  *(undefined4 *)(this + 0x28) = 1;
  this[0x2c] = (ParseInputParam)0x0;
  *(undefined4 *)(this + 0x30) = 0x8000000;
  std::__cxx11::string::_M_replace((uint)(this + 0x34),0,*(char **)(this + 0x38),0x407428);
  this[0x4c] = (ParseInputParam)0x0;
  this[0x4d] = (ParseInputParam)0x0;
  this[0x4e] = (ParseInputParam)0x0;
  this[0x4f] = (ParseInputParam)0x0;
  this[0x50] = (ParseInputParam)0x0;
  this[0x51] = (ParseInputParam)0x0;
  return;
}


// ===== ~ParseInputParam @ 00402a24

/* ParseInputParam::~ParseInputParam() */

void __thiscall ParseInputParam::~ParseInputParam(ParseInputParam *this)

{
  if (*(ParseInputParam **)(this + 0x34) != this + 0x3c) {
    operator_delete(*(ParseInputParam **)(this + 0x34));
  }
  if (*(ParseInputParam **)(this + 4) == this + 0xc) {
    return;
  }
  operator_delete(*(ParseInputParam **)(this + 4));
  return;
}


// ===== parse_command_input_paramter @ 00402a74

/* ParseInputParam::parse_command_input_paramter(int, char**, input_param&) */

void __thiscall
ParseInputParam::parse_command_input_paramter
          (ParseInputParam *this,int param_1,char **param_2,input_param *param_3)

{
  ParseInputParam PVar1;
  ParseInputParam PVar2;
  ParseInputParam PVar3;
  ParseInputParam PVar4;
  ParseInputParam PVar5;
  undefined **ppuVar6;
  int iVar7;
  ParseInputParam *pPVar8;
  ParseInputParam *pPVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  int *piVar17;
  undefined4 local_118 [44];
  ParseInputParam *local_68;
  ParseInputParam *local_64;
  ParseInputParam *local_60;
  undefined1 local_5c;
  ParseInputParam *local_50;
  ParseInputParam *local_4c;
  ParseInputParam *local_48 [4];
  ParseInputParam **local_38;
  ParseInputParam **local_34;
  ParseInputParam *local_30;
  
  ppuVar6 = &PTR_DAT_00406f00;
  puVar12 = local_118;
  do {
    puVar16 = *ppuVar6;
    puVar15 = ppuVar6[1];
    puVar14 = ppuVar6[2];
    puVar13 = ppuVar6[3];
    ppuVar6 = ppuVar6 + 4;
    *puVar12 = puVar16;
    puVar12[1] = puVar15;
    puVar12[2] = puVar14;
    puVar12[3] = puVar13;
    puVar12 = puVar12 + 4;
    pPVar8 = local_68;
  } while (ppuVar6 != &switchD_00402b38::switchdataD_00406fb0);
switchD_00402b38_caseD_40:
  local_68 = pPVar8;
  do {
    iVar7 = getopt_long(param_1,param_2,"?mcderj",local_118,0);
    if (iVar7 == -1) {
      PVar1 = this[1];
      PVar2 = this[2];
      *param_3 = (input_param)*this;
      *(ParseInputParam *)(param_3 + 1) = PVar1;
      *(ParseInputParam *)(param_3 + 2) = PVar2;
      std::__cxx11::string::_M_assign((string *)(param_3 + 4));
      uVar11 = *(undefined4 *)(this + 0x20);
      *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(this + 0x1c);
      *(undefined4 *)(param_3 + 0x20) = uVar11;
      *(ParseInputParam *)(param_3 + 0x24) = this[0x24];
      PVar1 = this[0x2c];
      uVar11 = *(undefined4 *)(this + 0x30);
      *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(this + 0x28);
      *(ParseInputParam *)(param_3 + 0x2c) = PVar1;
      *(undefined4 *)(param_3 + 0x30) = uVar11;
      std::__cxx11::string::_M_assign((string *)(param_3 + 0x34));
      PVar1 = this[0x4d];
      PVar2 = this[0x4e];
      PVar3 = this[0x4f];
      PVar4 = this[0x50];
      PVar5 = this[0x51];
      *(ParseInputParam *)(param_3 + 0x4c) = this[0x4c];
      *(ParseInputParam *)(param_3 + 0x4d) = PVar1;
      *(ParseInputParam *)(param_3 + 0x4e) = PVar2;
      *(ParseInputParam *)(param_3 + 0x4f) = PVar3;
      *(ParseInputParam *)(param_3 + 0x50) = PVar4;
      *(ParseInputParam *)(param_3 + 0x51) = PVar5;
      return;
    }
    pPVar8 = local_68;
    switch(iVar7) {
    case 0x3f:
      *this = (ParseInputParam)0x1;
    default:
      goto switchD_00402b38_caseD_40;
    case 0x41:
      local_38 = &local_50;
      local_50 = (ParseInputParam *)local_48;
      if (optarg == (ParseInputParam **)0x0) goto LAB_0040332c;
      local_34 = optarg;
      pPVar8 = (ParseInputParam *)strlen((char *)optarg);
      local_68 = pPVar8;
      if (pPVar8 < (ParseInputParam *)0x10) {
        if (pPVar8 == (ParseInputParam *)0x1) {
          local_48[0] = (ParseInputParam *)CONCAT31(local_48[0]._1_3_,*(char *)local_34);
        }
        else if (pPVar8 != (ParseInputParam *)0x0) {
          pPVar9 = (ParseInputParam *)local_48;
          goto LAB_0040311c;
        }
        ((ParseInputParam *)local_48)[(int)pPVar8] = (ParseInputParam)0x0;
        pPVar9 = *(ParseInputParam **)(this + 4);
        local_4c = pPVar8;
        if (local_50 != (ParseInputParam *)local_48) goto LAB_00402d18;
LAB_00403150:
        local_68 = local_4c;
        std::__cxx11::string::_M_assign((string *)(this + 4));
      }
      else {
        pPVar9 = (ParseInputParam *)
                 std::__cxx11::string::_M_create((uint *)local_38,(uint)&local_68);
        local_48[0] = local_68;
        local_50 = pPVar9;
LAB_0040311c:
        memcpy(pPVar9,local_34,(size_t)pPVar8);
        local_4c = local_68;
        local_50[(int)local_68] = (ParseInputParam)0x0;
        pPVar9 = *(ParseInputParam **)(this + 4);
        if (local_50 == (ParseInputParam *)local_48) goto LAB_00403150;
LAB_00402d18:
        local_68 = local_4c;
        if (pPVar9 == this + 0xc) {
          *(ParseInputParam **)(this + 4) = local_50;
          *(ParseInputParam **)(this + 8) = local_4c;
          *(ParseInputParam **)(this + 0xc) = local_48[0];
        }
        else {
          pPVar8 = *(ParseInputParam **)(this + 0xc);
          *(ParseInputParam **)(this + 4) = local_50;
          *(ParseInputParam **)(this + 8) = local_4c;
          *(ParseInputParam **)(this + 0xc) = local_48[0];
          if (pPVar9 != (ParseInputParam *)0x0) {
            local_50 = pPVar9;
            local_48[0] = pPVar8;
            goto LAB_00402d40;
          }
        }
        local_50 = (ParseInputParam *)local_48;
      }
LAB_00402d40:
      local_4c = (ParseInputParam *)0x0;
      *local_50 = (ParseInputParam)0x0;
      pPVar9 = local_50;
      pPVar8 = local_68;
      if (local_50 == (ParseInputParam *)local_48) goto switchD_00402b38_caseD_40;
      break;
    case 0x42:
      lVar10 = strtol((char *)optarg,(char **)0x0,10);
      *(long *)(this + 0x1c) = lVar10;
      pPVar8 = local_68;
      goto switchD_00402b38_caseD_40;
    case 0x43:
      lVar10 = strtol((char *)optarg,(char **)0x0,10);
      *(long *)(this + 0x20) = lVar10;
      pPVar8 = local_68;
      goto switchD_00402b38_caseD_40;
    case 0x44:
      local_38 = &local_50;
      local_50 = (ParseInputParam *)local_48;
      if (optarg == (ParseInputParam **)0x0) goto LAB_0040332c;
      local_34 = optarg;
      pPVar8 = (ParseInputParam *)strlen((char *)optarg);
      local_68 = pPVar8;
      if (pPVar8 < (ParseInputParam *)0x10) {
        pPVar9 = (ParseInputParam *)local_48;
        if (pPVar8 == (ParseInputParam *)0x1) {
          local_48[0] = (ParseInputParam *)CONCAT31(local_48[0]._1_3_,*(char *)local_34);
        }
        else if (pPVar8 != (ParseInputParam *)0x0) {
          goto LAB_004030dc;
        }
      }
      else {
        pPVar9 = (ParseInputParam *)
                 std::__cxx11::string::_M_create((uint *)local_38,(uint)&local_68);
        local_48[0] = local_68;
        local_50 = pPVar9;
LAB_004030dc:
        memcpy(pPVar9,local_34,(size_t)pPVar8);
        pPVar9 = local_50;
      }
      pPVar9[(int)local_68] = (ParseInputParam)0x0;
      local_60 = (ParseInputParam *)0x454e4f4e;
      local_64 = (ParseInputParam *)0x4;
      local_5c = 0;
      local_4c = local_68;
      if ((((local_68 == (ParseInputParam *)0x4) && (*local_50 == (ParseInputParam)0x4e)) &&
          (local_50[1] == (ParseInputParam)0x4f)) &&
         ((local_50[2] == (ParseInputParam)0x4e && (local_50[3] == (ParseInputParam)0x45)))) {
        pPVar8 = (ParseInputParam *)&local_60;
        if (local_50 != (ParseInputParam *)local_48) {
          local_68 = (ParseInputParam *)&local_60;
          operator_delete(local_50);
          pPVar8 = local_68;
        }
        local_68 = pPVar8;
        this[0x24] = (ParseInputParam)0x6e;
        pPVar8 = local_68;
        goto switchD_00402b38_caseD_40;
      }
      pPVar8 = (ParseInputParam *)&local_60;
      if (local_50 != (ParseInputParam *)local_48) {
        local_68 = (ParseInputParam *)&local_60;
        operator_delete(local_50);
        pPVar8 = local_68;
      }
      local_68 = pPVar8;
      local_50 = (ParseInputParam *)local_48;
      if (optarg == (ParseInputParam **)0x0) goto LAB_0040332c;
      local_34 = optarg;
      local_68 = (ParseInputParam *)strlen((char *)optarg);
      if (local_68 < (ParseInputParam *)0x10) {
        pPVar8 = (ParseInputParam *)local_48;
        if (local_68 == (ParseInputParam *)0x1) {
          local_48[0] = (ParseInputParam *)CONCAT31(local_48[0]._1_3_,*(char *)local_34);
        }
        else if (local_68 != (ParseInputParam *)0x0) {
          pPVar9 = local_68;
          goto LAB_00403244;
        }
      }
      else {
        local_30 = local_68;
        pPVar8 = (ParseInputParam *)
                 std::__cxx11::string::_M_create((uint *)local_38,(uint)&local_68);
        local_48[0] = local_68;
        pPVar9 = local_30;
        local_50 = pPVar8;
LAB_00403244:
        memcpy(pPVar8,local_34,(size_t)pPVar9);
        pPVar8 = local_50;
      }
      pPVar8[(int)local_68] = (ParseInputParam)0x0;
      local_64 = (ParseInputParam *)0x3;
      local_60 = (ParseInputParam *)0x44444f;
      local_4c = local_68;
      if (((local_68 == (ParseInputParam *)0x3) && (*local_50 == (ParseInputParam)0x4f)) &&
         ((local_50[1] == (ParseInputParam)0x44 && (local_50[2] == (ParseInputParam)0x44)))) {
        pPVar8 = (ParseInputParam *)&local_60;
        if (local_50 != (ParseInputParam *)local_48) {
          local_68 = (ParseInputParam *)&local_60;
          operator_delete(local_50);
          pPVar8 = local_68;
        }
        local_68 = pPVar8;
        this[0x24] = (ParseInputParam)0x6f;
        pPVar8 = local_68;
        goto switchD_00402b38_caseD_40;
      }
      pPVar8 = (ParseInputParam *)&local_60;
      if (local_50 != (ParseInputParam *)local_48) {
        local_68 = (ParseInputParam *)&local_60;
        operator_delete(local_50);
        pPVar8 = local_68;
      }
      local_68 = pPVar8;
      local_50 = (ParseInputParam *)local_48;
      if (optarg == (ParseInputParam **)0x0) {
LAB_0040332c:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&std::cout,"Nations command line ",0x15);
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"v1.0.0",6);
        piVar17 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
        if (piVar17 != (int *)0x0) {
          if ((char)piVar17[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*piVar17 + 0x18) != std::ctype<char>::do_widen) {
              (**(code **)(*piVar17 + 0x18))(piVar17,10);
            }
          }
          std::ostream::put(-0x10);
          std::ostream::flush();
          piVar17 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
          if (piVar17 != (int *)0x0) {
            if ((char)piVar17[7] == '\0') {
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*piVar17 + 0x18) != std::ctype<char>::do_widen) {
                (**(code **)(*piVar17 + 0x18))(piVar17,10);
              }
            }
            std::ostream::put(-0x10);
            std::ostream::flush();
            std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," Usage :",8);
            piVar17 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
            if (piVar17 != (int *)0x0) {
              if ((char)piVar17[7] == '\0') {
                std::ctype<char>::_M_widen_init();
                if (*(code **)(*piVar17 + 0x18) != std::ctype<char>::do_widen) {
                  (**(code **)(*piVar17 + 0x18))(piVar17,10);
                }
              }
              std::ostream::put(-0x10);
              std::ostream::flush();
              piVar17 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
              if (piVar17 != (int *)0x0) {
                if ((char)piVar17[7] == '\0') {
                  std::ctype<char>::_M_widen_init();
                  if (*(code **)(*piVar17 + 0x18) != std::ctype<char>::do_widen) {
                    (**(code **)(*piVar17 + 0x18))(piVar17,10);
                  }
                }
                std::ostream::put(-0x10);
                std::ostream::flush();
                std::__ostream_insert<char,std::char_traits<char>>
                          ((ostream *)&std::cout,
                           " NationsCommand [options] [Agrument][[options] [Agrument]...]",0x3d);
                piVar17 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                if (piVar17 != (int *)0x0) {
                  if ((char)piVar17[7] == '\0') {
                    std::ctype<char>::_M_widen_init();
                    if (*(code **)(*piVar17 + 0x18) != std::ctype<char>::do_widen) {
                      (**(code **)(*piVar17 + 0x18))(piVar17,10);
                    }
                  }
                  std::ostream::put(-0x10);
                  std::ostream::flush();
                  piVar17 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                  if (piVar17 != (int *)0x0) {
                    if ((char)piVar17[7] == '\0') {
                      std::ctype<char>::_M_widen_init();
                      if (*(code **)(*piVar17 + 0x18) != std::ctype<char>::do_widen) {
                        (**(code **)(*piVar17 + 0x18))(piVar17,10);
                      }
                    }
                    std::ostream::put(-0x10);
                    std::ostream::flush();
                    std::__ostream_insert<char,std::char_traits<char>>
                              ((ostream *)&std::cout,"  -?                   (Show this help)",0x27)
                    ;
                    piVar17 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                    if (piVar17 != (int *)0x0) {
                      if ((char)piVar17[7] == '\0') {
                        std::ctype<char>::_M_widen_init();
                        if (*(code **)(*piVar17 + 0x18) != std::ctype<char>::do_widen) {
                          (**(code **)(*piVar17 + 0x18))(piVar17,10);
                        }
                      }
                      std::ostream::put(-0x10);
                      std::ostream::flush();
                      std::__ostream_insert<char,std::char_traits<char>>
                                ((ostream *)&std::cout,"  -m                   (Enum the COM port)",
                                 0x2a);
                      piVar17 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                      if (piVar17 != (int *)0x0) {
                        if ((char)piVar17[7] == '\0') {
                          std::ctype<char>::_M_widen_init();
                          if (*(code **)(*piVar17 + 0x18) != std::ctype<char>::do_widen) {
                            (**(code **)(*piVar17 + 0x18))(piVar17,10);
                          }
                        }
                        std::ostream::put(-0x10);
                        std::ostream::flush();
                        std::__ostream_insert<char,std::char_traits<char>>
                                  ((ostream *)&std::cout,
                                   "  -c                   (Establish connection to the COM port)",
                                   0x3d);
                        piVar17 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                        if (piVar17 != (int *)0x0) {
                          if ((char)piVar17[7] == '\0') {
                            std::ctype<char>::_M_widen_init();
                            if (*(code **)(*piVar17 + 0x18) != std::ctype<char>::do_widen) {
                              (**(code **)(*piVar17 + 0x18))(piVar17,10);
                            }
                          }
                          std::ostream::put(-0x10);
                          std::ostream::flush();
                          std::__ostream_insert<char,std::char_traits<char>>
                                    ((ostream *)&std::cout,
                                     "     --pn  port_nb     : e.g: 1, 2 ..., default 1",0x31);
                          piVar17 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                          if (piVar17 != (int *)0x0) {
                            if ((char)piVar17[7] == '\0') {
                              std::ctype<char>::_M_widen_init();
                              if (*(code **)(*piVar17 + 0x18) != std::ctype<char>::do_widen) {
                                (**(code **)(*piVar17 + 0x18))(piVar17,10);
                              }
                            }
                            std::ostream::put(-0x10);
                            std::ostream::flush();
                            std::__ostream_insert<char,std::char_traits<char>>
                                      ((ostream *)&std::cout,
                                       "     --br  baud_rate   : e.g: 115200, 57600 ..., default 115200"
                                       ,0x3f);
                            piVar17 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                            if (piVar17 != (int *)0x0) {
                              if ((char)piVar17[7] == '\0') {
                                std::ctype<char>::_M_widen_init();
                                if (*(code **)(*piVar17 + 0x18) != std::ctype<char>::do_widen) {
                                  (**(code **)(*piVar17 + 0x18))(piVar17,10);
                                }
                              }
                              std::ostream::put(-0x10);
                              std::ostream::flush();
                              std::__ostream_insert<char,std::char_traits<char>>
                                        ((ostream *)&std::cout,
                                         "     --db  data_bits   : value in {5,6,7,8} ..., default 8"
                                         ,0x3a);
                              piVar17 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                              if (piVar17 != (int *)0x0) {
                                if ((char)piVar17[7] == '\0') {
                                  std::ctype<char>::_M_widen_init();
                                  if (*(code **)(*piVar17 + 0x18) != std::ctype<char>::do_widen) {
                                    (**(code **)(*piVar17 + 0x18))(piVar17,10);
                                  }
                                }
                                std::ostream::put(-0x10);
                                std::ostream::flush();
                                std::__ostream_insert<char,std::char_traits<char>>
                                          ((ostream *)&std::cout,
                                           "     --pr  parity      : value in {NONE,ODD,EVEN} ..., default NONE"
                                           ,0x43);
                                piVar17 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                                if (piVar17 != (int *)0x0) {
                                  if ((char)piVar17[7] == '\0') {
                                    std::ctype<char>::_M_widen_init();
                                    if (*(code **)(*piVar17 + 0x18) != std::ctype<char>::do_widen) {
                                      (**(code **)(*piVar17 + 0x18))(piVar17,10);
                                    }
                                  }
                                  std::ostream::put(-0x10);
                                  std::ostream::flush();
                                  std::__ostream_insert<char,std::char_traits<char>>
                                            ((ostream *)&std::cout,
                                             "     --sb  stop_bits   : value in {1,1.5,2} ..., default 1"
                                             ,0x3a);
                                  piVar17 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                                  if (piVar17 != (int *)0x0) {
                                    if ((char)piVar17[7] == '\0') {
                                      std::ctype<char>::_M_widen_init();
                                      if (*(code **)(*piVar17 + 0x18) != std::ctype<char>::do_widen)
                                      {
                                        (**(code **)(*piVar17 + 0x18))(piVar17,10);
                                      }
                                    }
                                    std::ostream::put(-0x10);
                                    std::ostream::flush();
                                    std::__ostream_insert<char,std::char_traits<char>>
                                              ((ostream *)&std::cout,
                                               "  -d                   (Download the content of a file into MCU flash)"
                                               ,0x46);
                                    piVar17 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                                    if (piVar17 != (int *)0x0) {
                                      if ((char)piVar17[7] == '\0') {
                                        std::ctype<char>::_M_widen_init();
                                        if (*(code **)(*piVar17 + 0x18) !=
                                            std::ctype<char>::do_widen) {
                                          (**(code **)(*piVar17 + 0x18))(piVar17,10);
                                        }
                                      }
                                      std::ostream::put(-0x10);
                                      std::ostream::flush();
                                      std::__ostream_insert<char,std::char_traits<char>>
                                                ((ostream *)&std::cout,
                                                 "     --a               : download start address(hex) default 0x08000000"
                                                 ,0x47);
                                      piVar17 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc)
                                                         );
                                      if (piVar17 != (int *)0x0) {
                                        if ((char)piVar17[7] == '\0') {
                                          std::ctype<char>::_M_widen_init();
                                          if (*(code **)(*piVar17 + 0x18) !=
                                              std::ctype<char>::do_widen) {
                                            (**(code **)(*piVar17 + 0x18))(piVar17,10);
                                          }
                                        }
                                        std::ostream::put(-0x10);
                                        std::ostream::flush();
                                        std::__ostream_insert<char,std::char_traits<char>>
                                                  ((ostream *)&std::cout,
                                                                                                      
                                                  "     --fn              : full path name (.bin file)"
                                                  ,0x33);
                                        piVar17 = *(int **)(&DAT_00418a6c +
                                                           *(int *)(std::cout + -0xc));
                                        if (piVar17 != (int *)0x0) {
                                          if ((char)piVar17[7] == '\0') {
                                            std::ctype<char>::_M_widen_init();
                                            if (*(code **)(*piVar17 + 0x18) !=
                                                std::ctype<char>::do_widen) {
                                              (**(code **)(*piVar17 + 0x18))(piVar17,10);
                                            }
                                          }
                                          std::ostream::put(-0x10);
                                          std::ostream::flush();
                                          std::__ostream_insert<char,std::char_traits<char>>
                                                    ((ostream *)&std::cout,
                                                     "     --eall            : erase all pages",0x28
                                                    );
                                          piVar17 = *(int **)(&DAT_00418a6c +
                                                             *(int *)(std::cout + -0xc));
                                          if (piVar17 != (int *)0x0) {
                                            if ((char)piVar17[7] == '\0') {
                                              std::ctype<char>::_M_widen_init();
                                              if (*(code **)(*piVar17 + 0x18) !=
                                                  std::ctype<char>::do_widen) {
                                                (**(code **)(*piVar17 + 0x18))(piVar17,10);
                                              }
                                            }
                                            std::ostream::put(-0x10);
                                            std::ostream::flush();
                                            std::__ostream_insert<char,std::char_traits<char>>
                                                      ((ostream *)&std::cout,
                                                       "     --esec            : erase by file size"
                                                       ,0x2b);
                                            piVar17 = *(int **)(&DAT_00418a6c +
                                                               *(int *)(std::cout + -0xc));
                                            if (piVar17 != (int *)0x0) {
                                              if ((char)piVar17[7] == '\0') {
                                                std::ctype<char>::_M_widen_init();
                                                if (*(code **)(*piVar17 + 0x18) !=
                                                    std::ctype<char>::do_widen) {
                                                  (**(code **)(*piVar17 + 0x18))(piVar17,10);
                                                }
                                              }
                                              std::ostream::put(-0x10);
                                              std::ostream::flush();
                                              std::__ostream_insert<char,std::char_traits<char>>
                                                        ((ostream *)&std::cout,
                                                                                                                  
                                                  "     --v               : verify after download",
                                                  0x2e);
                                              piVar17 = *(int **)(&DAT_00418a6c +
                                                                 *(int *)(std::cout + -0xc));
                                              if (piVar17 != (int *)0x0) {
                                                if ((char)piVar17[7] == '\0') {
                                                  std::ctype<char>::_M_widen_init();
                                                  if (*(code **)(*piVar17 + 0x18) !=
                                                      std::ctype<char>::do_widen) {
                                                    (**(code **)(*piVar17 + 0x18))(piVar17,10);
                                                  }
                                                }
                                                std::ostream::put(-0x10);
                                                std::ostream::flush();
                                                std::__ostream_insert<char,std::char_traits<char>>
                                                          ((ostream *)&std::cout,
                                                                                                                      
                                                  "  -e                   (Erasing all pages)",0x2a)
                                                ;
                                                piVar17 = *(int **)(&DAT_00418a6c +
                                                                   *(int *)(std::cout + -0xc));
                                                if (piVar17 != (int *)0x0) {
                                                  if ((char)piVar17[7] == '\0') {
                                                    std::ctype<char>::_M_widen_init();
                                                    if (*(code **)(*piVar17 + 0x18) !=
                                                        std::ctype<char>::do_widen) {
                                                      (**(code **)(*piVar17 + 0x18))(piVar17,10);
                                                    }
                                                  }
                                                  std::ostream::put(-0x10);
                                                  std::ostream::flush();
                                                  std::__ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                                                                                          
                                                  "  -r                   (Reset the chip)",0x27);
                                                  piVar17 = *(int **)(&DAT_00418a6c +
                                                                     *(int *)(std::cout + -0xc));
                                                  if (piVar17 != (int *)0x0) {
                                                    if ((char)piVar17[7] == '\0') {
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*piVar17 + 0x18) !=
                                                          std::ctype<char>::do_widen) {
                                                        (**(code **)(*piVar17 + 0x18))(piVar17,10);
                                                      }
                                                    }
                                                    std::ostream::put(-0x10);
                                                    std::ostream::flush();
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                                                                                          
                                                  "  -j                   (Jump after download)",
                                                  0x2c);
                                                  piVar17 = *(int **)(&DAT_00418a6c +
                                                                     *(int *)(std::cout + -0xc));
                                                  if (piVar17 != (int *)0x0) {
                                                    if ((char)piVar17[7] == '\0') {
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*piVar17 + 0x18) !=
                                                          std::ctype<char>::do_widen) {
                                                        (**(code **)(*piVar17 + 0x18))(piVar17,10);
                                                      }
                                                    }
                                                    std::ostream::put(-0x10);
                                                    std::ostream::flush();
                                                    return;
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        std::__throw_bad_cast();
        return;
      }
      local_34 = optarg;
      local_68 = (ParseInputParam *)strlen((char *)optarg);
      if (local_68 < (ParseInputParam *)0x10) {
        pPVar8 = (ParseInputParam *)local_48;
        if (local_68 == (ParseInputParam *)0x1) {
          local_48[0] = (ParseInputParam *)CONCAT31(local_48[0]._1_3_,*(char *)local_34);
        }
        else if (local_68 != (ParseInputParam *)0x0) {
          pPVar9 = local_68;
          goto LAB_00403300;
        }
      }
      else {
        local_30 = local_68;
        pPVar8 = (ParseInputParam *)
                 std::__cxx11::string::_M_create((uint *)local_38,(uint)&local_68);
        local_48[0] = local_68;
        pPVar9 = local_30;
        local_50 = pPVar8;
LAB_00403300:
        memcpy(pPVar8,local_34,(size_t)pPVar9);
        pPVar8 = local_50;
      }
      pPVar8[(int)local_68] = (ParseInputParam)0x0;
      local_60 = (ParseInputParam *)0x4e455645;
      local_64 = (ParseInputParam *)0x4;
      local_5c = 0;
      local_4c = local_68;
      pPVar8 = (ParseInputParam *)&local_60;
      if ((((local_68 == (ParseInputParam *)0x4) && (*local_50 == (ParseInputParam)0x45)) &&
          (local_50[1] == (ParseInputParam)0x56)) &&
         ((local_50[2] == (ParseInputParam)0x45 && (local_50[3] == (ParseInputParam)0x4e)))) {
        if (local_50 == (ParseInputParam *)local_48) {
          this[0x24] = (ParseInputParam)0x65;
        }
        else {
          local_68 = (ParseInputParam *)&local_60;
          operator_delete(local_50);
          this[0x24] = (ParseInputParam)0x65;
          pPVar8 = local_68;
        }
        goto switchD_00402b38_caseD_40;
      }
      pPVar9 = local_50;
      if (local_50 == (ParseInputParam *)local_48) goto switchD_00402b38_caseD_40;
      break;
    case 0x45:
      lVar10 = strtol((char *)optarg,(char **)0x0,10);
      *(long *)(this + 0x28) = lVar10;
      pPVar8 = local_68;
      goto switchD_00402b38_caseD_40;
    case 0x46:
      lVar10 = strtol((char *)optarg,(char **)0x0,10);
      *(long *)(this + 0x30) = lVar10;
      pPVar8 = local_68;
      goto switchD_00402b38_caseD_40;
    case 0x47:
      local_68 = (ParseInputParam *)&local_60;
      if (optarg == (ParseInputParam **)0x0) goto LAB_0040332c;
      local_38 = optarg;
      pPVar8 = (ParseInputParam *)strlen((char *)optarg);
      local_50 = pPVar8;
      if (pPVar8 < (ParseInputParam *)0x10) {
        if (pPVar8 == (ParseInputParam *)0x1) {
          local_60 = (ParseInputParam *)CONCAT31(local_60._1_3_,*(char *)local_38);
        }
        else if (pPVar8 != (ParseInputParam *)0x0) {
          pPVar9 = (ParseInputParam *)&local_60;
          goto LAB_00403070;
        }
        ((ParseInputParam *)&local_60)[(int)pPVar8] = (ParseInputParam)0x0;
        pPVar9 = *(ParseInputParam **)(this + 0x34);
        local_64 = pPVar8;
        if (local_68 != (ParseInputParam *)&local_60) goto LAB_00402c14;
LAB_004030a4:
        std::__cxx11::string::_M_assign((string *)(this + 0x34));
      }
      else {
        pPVar9 = (ParseInputParam *)
                 std::__cxx11::string::_M_create((uint *)&local_68,(uint)&local_50);
        local_60 = local_50;
        local_68 = pPVar9;
LAB_00403070:
        memcpy(pPVar9,local_38,(size_t)pPVar8);
        local_64 = local_50;
        local_68[(int)local_50] = (ParseInputParam)0x0;
        pPVar9 = *(ParseInputParam **)(this + 0x34);
        if (local_68 == (ParseInputParam *)&local_60) goto LAB_004030a4;
LAB_00402c14:
        if (pPVar9 == this + 0x3c) {
          *(ParseInputParam **)(this + 0x34) = local_68;
          *(ParseInputParam **)(this + 0x38) = local_64;
          *(ParseInputParam **)(this + 0x3c) = local_60;
        }
        else {
          pPVar8 = *(ParseInputParam **)(this + 0x3c);
          *(ParseInputParam **)(this + 0x34) = local_68;
          *(ParseInputParam **)(this + 0x38) = local_64;
          *(ParseInputParam **)(this + 0x3c) = local_60;
          if (pPVar9 != (ParseInputParam *)0x0) {
            local_68 = pPVar9;
            local_60 = pPVar8;
            goto LAB_00402c3c;
          }
        }
        local_68 = (ParseInputParam *)&local_60;
      }
LAB_00402c3c:
      local_64 = (ParseInputParam *)0x0;
      *local_68 = (ParseInputParam)0x0;
      pPVar9 = local_68;
      pPVar8 = local_68;
      if (local_68 == (ParseInputParam *)&local_60) goto switchD_00402b38_caseD_40;
      break;
    case 0x48:
      this[0x4c] = (ParseInputParam)0x1;
      goto switchD_00402b38_caseD_40;
    case 0x49:
      this[0x4d] = (ParseInputParam)0x1;
      goto switchD_00402b38_caseD_40;
    case 0x4a:
      this[0x4e] = (ParseInputParam)0x1;
      goto switchD_00402b38_caseD_40;
    case 99:
      this[2] = (ParseInputParam)0x1;
      goto switchD_00402b38_caseD_40;
    case 100:
      this[0x2c] = (ParseInputParam)0x1;
      goto switchD_00402b38_caseD_40;
    case 0x65:
      this[0x4f] = (ParseInputParam)0x1;
      goto switchD_00402b38_caseD_40;
    case 0x6a:
      this[0x51] = (ParseInputParam)0x1;
      goto switchD_00402b38_caseD_40;
    case 0x6d:
      this[1] = (ParseInputParam)0x1;
      goto switchD_00402b38_caseD_40;
    case 0x72:
      this[0x50] = (ParseInputParam)0x1;
      goto switchD_00402b38_caseD_40;
    }
    local_68 = pPVar8;
    operator_delete(pPVar9);
  } while( true );
}


// ===== show_help_info @ 00403338

/* ParseInputParam::show_help_info() */

void ParseInputParam::show_help_info(void)

{
  int *piVar1;
  
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)&std::cout,"Nations command line ",0x15);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"v1.0.0",6);
  piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
  if (piVar1 != (int *)0x0) {
    if ((char)piVar1[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*piVar1 + 0x18) != std::ctype<char>::do_widen) {
        (**(code **)(*piVar1 + 0x18))(piVar1,10);
      }
    }
    std::ostream::put(-0x10);
    std::ostream::flush();
    piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar1 != (int *)0x0) {
      if ((char)piVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar1 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar1 + 0x18))(piVar1,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," Usage :",8);
      piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
      if (piVar1 != (int *)0x0) {
        if ((char)piVar1[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*piVar1 + 0x18) != std::ctype<char>::do_widen) {
            (**(code **)(*piVar1 + 0x18))(piVar1,10);
          }
        }
        std::ostream::put(-0x10);
        std::ostream::flush();
        piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
        if (piVar1 != (int *)0x0) {
          if ((char)piVar1[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*piVar1 + 0x18) != std::ctype<char>::do_widen) {
              (**(code **)(*piVar1 + 0x18))(piVar1,10);
            }
          }
          std::ostream::put(-0x10);
          std::ostream::flush();
          std::__ostream_insert<char,std::char_traits<char>>
                    ((ostream *)&std::cout,
                     " NationsCommand [options] [Agrument][[options] [Agrument]...]",0x3d);
          piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
          if (piVar1 != (int *)0x0) {
            if ((char)piVar1[7] == '\0') {
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*piVar1 + 0x18) != std::ctype<char>::do_widen) {
                (**(code **)(*piVar1 + 0x18))(piVar1,10);
              }
            }
            std::ostream::put(-0x10);
            std::ostream::flush();
            piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
            if (piVar1 != (int *)0x0) {
              if ((char)piVar1[7] == '\0') {
                std::ctype<char>::_M_widen_init();
                if (*(code **)(*piVar1 + 0x18) != std::ctype<char>::do_widen) {
                  (**(code **)(*piVar1 + 0x18))(piVar1,10);
                }
              }
              std::ostream::put(-0x10);
              std::ostream::flush();
              std::__ostream_insert<char,std::char_traits<char>>
                        ((ostream *)&std::cout,"  -?                   (Show this help)",0x27);
              piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
              if (piVar1 != (int *)0x0) {
                if ((char)piVar1[7] == '\0') {
                  std::ctype<char>::_M_widen_init();
                  if (*(code **)(*piVar1 + 0x18) != std::ctype<char>::do_widen) {
                    (**(code **)(*piVar1 + 0x18))(piVar1,10);
                  }
                }
                std::ostream::put(-0x10);
                std::ostream::flush();
                std::__ostream_insert<char,std::char_traits<char>>
                          ((ostream *)&std::cout,"  -m                   (Enum the COM port)",0x2a);
                piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                if (piVar1 != (int *)0x0) {
                  if ((char)piVar1[7] == '\0') {
                    std::ctype<char>::_M_widen_init();
                    if (*(code **)(*piVar1 + 0x18) != std::ctype<char>::do_widen) {
                      (**(code **)(*piVar1 + 0x18))(piVar1,10);
                    }
                  }
                  std::ostream::put(-0x10);
                  std::ostream::flush();
                  std::__ostream_insert<char,std::char_traits<char>>
                            ((ostream *)&std::cout,
                             "  -c                   (Establish connection to the COM port)",0x3d);
                  piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                  if (piVar1 != (int *)0x0) {
                    if ((char)piVar1[7] == '\0') {
                      std::ctype<char>::_M_widen_init();
                      if (*(code **)(*piVar1 + 0x18) != std::ctype<char>::do_widen) {
                        (**(code **)(*piVar1 + 0x18))(piVar1,10);
                      }
                    }
                    std::ostream::put(-0x10);
                    std::ostream::flush();
                    std::__ostream_insert<char,std::char_traits<char>>
                              ((ostream *)&std::cout,
                               "     --pn  port_nb     : e.g: 1, 2 ..., default 1",0x31);
                    piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                    if (piVar1 != (int *)0x0) {
                      if ((char)piVar1[7] == '\0') {
                        std::ctype<char>::_M_widen_init();
                        if (*(code **)(*piVar1 + 0x18) != std::ctype<char>::do_widen) {
                          (**(code **)(*piVar1 + 0x18))(piVar1,10);
                        }
                      }
                      std::ostream::put(-0x10);
                      std::ostream::flush();
                      std::__ostream_insert<char,std::char_traits<char>>
                                ((ostream *)&std::cout,
                                 "     --br  baud_rate   : e.g: 115200, 57600 ..., default 115200",
                                 0x3f);
                      piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                      if (piVar1 != (int *)0x0) {
                        if ((char)piVar1[7] == '\0') {
                          std::ctype<char>::_M_widen_init();
                          if (*(code **)(*piVar1 + 0x18) != std::ctype<char>::do_widen) {
                            (**(code **)(*piVar1 + 0x18))(piVar1,10);
                          }
                        }
                        std::ostream::put(-0x10);
                        std::ostream::flush();
                        std::__ostream_insert<char,std::char_traits<char>>
                                  ((ostream *)&std::cout,
                                   "     --db  data_bits   : value in {5,6,7,8} ..., default 8",0x3a
                                  );
                        piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                        if (piVar1 != (int *)0x0) {
                          if ((char)piVar1[7] == '\0') {
                            std::ctype<char>::_M_widen_init();
                            if (*(code **)(*piVar1 + 0x18) != std::ctype<char>::do_widen) {
                              (**(code **)(*piVar1 + 0x18))(piVar1,10);
                            }
                          }
                          std::ostream::put(-0x10);
                          std::ostream::flush();
                          std::__ostream_insert<char,std::char_traits<char>>
                                    ((ostream *)&std::cout,
                                     "     --pr  parity      : value in {NONE,ODD,EVEN} ..., default NONE"
                                     ,0x43);
                          piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                          if (piVar1 != (int *)0x0) {
                            if ((char)piVar1[7] == '\0') {
                              std::ctype<char>::_M_widen_init();
                              if (*(code **)(*piVar1 + 0x18) != std::ctype<char>::do_widen) {
                                (**(code **)(*piVar1 + 0x18))(piVar1,10);
                              }
                            }
                            std::ostream::put(-0x10);
                            std::ostream::flush();
                            std::__ostream_insert<char,std::char_traits<char>>
                                      ((ostream *)&std::cout,
                                       "     --sb  stop_bits   : value in {1,1.5,2} ..., default 1",
                                       0x3a);
                            piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                            if (piVar1 != (int *)0x0) {
                              if ((char)piVar1[7] == '\0') {
                                std::ctype<char>::_M_widen_init();
                                if (*(code **)(*piVar1 + 0x18) != std::ctype<char>::do_widen) {
                                  (**(code **)(*piVar1 + 0x18))(piVar1,10);
                                }
                              }
                              std::ostream::put(-0x10);
                              std::ostream::flush();
                              std::__ostream_insert<char,std::char_traits<char>>
                                        ((ostream *)&std::cout,
                                         "  -d                   (Download the content of a file into MCU flash)"
                                         ,0x46);
                              piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                              if (piVar1 != (int *)0x0) {
                                if ((char)piVar1[7] == '\0') {
                                  std::ctype<char>::_M_widen_init();
                                  if (*(code **)(*piVar1 + 0x18) != std::ctype<char>::do_widen) {
                                    (**(code **)(*piVar1 + 0x18))(piVar1,10);
                                  }
                                }
                                std::ostream::put(-0x10);
                                std::ostream::flush();
                                std::__ostream_insert<char,std::char_traits<char>>
                                          ((ostream *)&std::cout,
                                           "     --a               : download start address(hex) default 0x08000000"
                                           ,0x47);
                                piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                                if (piVar1 != (int *)0x0) {
                                  if ((char)piVar1[7] == '\0') {
                                    std::ctype<char>::_M_widen_init();
                                    if (*(code **)(*piVar1 + 0x18) != std::ctype<char>::do_widen) {
                                      (**(code **)(*piVar1 + 0x18))(piVar1,10);
                                    }
                                  }
                                  std::ostream::put(-0x10);
                                  std::ostream::flush();
                                  std::__ostream_insert<char,std::char_traits<char>>
                                            ((ostream *)&std::cout,
                                             "     --fn              : full path name (.bin file)",
                                             0x33);
                                  piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                                  if (piVar1 != (int *)0x0) {
                                    if ((char)piVar1[7] == '\0') {
                                      std::ctype<char>::_M_widen_init();
                                      if (*(code **)(*piVar1 + 0x18) != std::ctype<char>::do_widen)
                                      {
                                        (**(code **)(*piVar1 + 0x18))(piVar1,10);
                                      }
                                    }
                                    std::ostream::put(-0x10);
                                    std::ostream::flush();
                                    std::__ostream_insert<char,std::char_traits<char>>
                                              ((ostream *)&std::cout,
                                               "     --eall            : erase all pages",0x28);
                                    piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
                                    if (piVar1 != (int *)0x0) {
                                      if ((char)piVar1[7] == '\0') {
                                        std::ctype<char>::_M_widen_init();
                                        if (*(code **)(*piVar1 + 0x18) != std::ctype<char>::do_widen
                                           ) {
                                          (**(code **)(*piVar1 + 0x18))(piVar1,10);
                                        }
                                      }
                                      std::ostream::put(-0x10);
                                      std::ostream::flush();
                                      std::__ostream_insert<char,std::char_traits<char>>
                                                ((ostream *)&std::cout,
                                                 "     --esec            : erase by file size",0x2b)
                                      ;
                                      piVar1 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc))
                                      ;
                                      if (piVar1 != (int *)0x0) {
                                        if ((char)piVar1[7] == '\0') {
                                          std::ctype<char>::_M_widen_init();
                                          if (*(code **)(*piVar1 + 0x18) !=
                                              std::ctype<char>::do_widen) {
                                            (**(code **)(*piVar1 + 0x18))(piVar1,10);
                                          }
                                        }
                                        std::ostream::put(-0x10);
                                        std::ostream::flush();
                                        std::__ostream_insert<char,std::char_traits<char>>
                                                  ((ostream *)&std::cout,
                                                   "     --v               : verify after download",
                                                   0x2e);
                                        piVar1 = *(int **)(&DAT_00418a6c +
                                                          *(int *)(std::cout + -0xc));
                                        if (piVar1 != (int *)0x0) {
                                          if ((char)piVar1[7] == '\0') {
                                            std::ctype<char>::_M_widen_init();
                                            if (*(code **)(*piVar1 + 0x18) !=
                                                std::ctype<char>::do_widen) {
                                              (**(code **)(*piVar1 + 0x18))(piVar1,10);
                                            }
                                          }
                                          std::ostream::put(-0x10);
                                          std::ostream::flush();
                                          std::__ostream_insert<char,std::char_traits<char>>
                                                    ((ostream *)&std::cout,
                                                     "  -e                   (Erasing all pages)",
                                                     0x2a);
                                          piVar1 = *(int **)(&DAT_00418a6c +
                                                            *(int *)(std::cout + -0xc));
                                          if (piVar1 != (int *)0x0) {
                                            if ((char)piVar1[7] == '\0') {
                                              std::ctype<char>::_M_widen_init();
                                              if (*(code **)(*piVar1 + 0x18) !=
                                                  std::ctype<char>::do_widen) {
                                                (**(code **)(*piVar1 + 0x18))(piVar1,10);
                                              }
                                            }
                                            std::ostream::put(-0x10);
                                            std::ostream::flush();
                                            std::__ostream_insert<char,std::char_traits<char>>
                                                      ((ostream *)&std::cout,
                                                       "  -r                   (Reset the chip)",
                                                       0x27);
                                            piVar1 = *(int **)(&DAT_00418a6c +
                                                              *(int *)(std::cout + -0xc));
                                            if (piVar1 != (int *)0x0) {
                                              if ((char)piVar1[7] == '\0') {
                                                std::ctype<char>::_M_widen_init();
                                                if (*(code **)(*piVar1 + 0x18) !=
                                                    std::ctype<char>::do_widen) {
                                                  (**(code **)(*piVar1 + 0x18))(piVar1,10);
                                                }
                                              }
                                              std::ostream::put(-0x10);
                                              std::ostream::flush();
                                              std::__ostream_insert<char,std::char_traits<char>>
                                                        ((ostream *)&std::cout,
                                                                                                                  
                                                  "  -j                   (Jump after download)",
                                                  0x2c);
                                              piVar1 = *(int **)(&DAT_00418a6c +
                                                                *(int *)(std::cout + -0xc));
                                              if (piVar1 != (int *)0x0) {
                                                if ((char)piVar1[7] == '\0') {
                                                  std::ctype<char>::_M_widen_init();
                                                  if (*(code **)(*piVar1 + 0x18) !=
                                                      std::ctype<char>::do_widen) {
                                                    (**(code **)(*piVar1 + 0x18))(piVar1,10);
                                                  }
                                                }
                                                std::ostream::put(-0x10);
                                                std::ostream::flush();
                                                return;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  std::__throw_bad_cast();
  return;
}


// ===== _M_construct<char*> @ 00403e70

/* void std::__cxx11::string::_M_construct<char*>(char*, char*, std::forward_iterator_tag) [clone
   .isra.22] */

void std::__cxx11::string::_M_construct<char*>(uint *param_1,undefined1 *param_2,int param_3)

{
  void *__dest;
  undefined1 *puVar1;
  uint uVar2;
  size_t unaff_s0;
  undefined1 *unaff_s2;
  undefined8 uVar3;
  uint local_18 [2];
  
  if (param_2 == (undefined1 *)0x0) {
    if (param_3 == 0) {
      param_1[1] = 0;
      *(undefined1 *)*param_1 = 0;
      return;
    }
    uVar3 = std::__throw_logic_error("basic_string::_M_construct null not valid");
    param_2 = unaff_s2;
  }
  else {
    unaff_s0 = param_3 - (int)param_2;
    local_18[0] = unaff_s0;
    if (0xf < unaff_s0) {
      __dest = (void *)std::__cxx11::string::_M_create(param_1,(uint)local_18);
      *param_1 = (uint)__dest;
      param_1[2] = local_18[0];
      goto LAB_00403f04;
    }
    puVar1 = (undefined1 *)*param_1;
    uVar3 = CONCAT44(puVar1,puVar1);
    if (unaff_s0 == 1) {
      *puVar1 = *param_2;
      uVar2 = *param_1;
      goto LAB_00403ebc;
    }
  }
  uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
  __dest = (void *)uVar3;
  if (unaff_s0 == 0) {
LAB_00403ebc:
    param_1[1] = local_18[0];
    *(undefined1 *)(uVar2 + local_18[0]) = 0;
    return;
  }
LAB_00403f04:
  memcpy(__dest,param_2,unaff_s0);
  param_1[1] = local_18[0];
  *(undefined1 *)(*param_1 + local_18[0]) = 0;
  return;
}


// ===== ISPCommand @ 00403f8c

/* ISPCommand::ISPCommand() */

void __thiscall ISPCommand::ISPCommand(ISPCommand *this)

{
  *(ISPCommand **)this = this + 8;
  std::__cxx11::string::_M_construct<char_const*>(this,&DAT_004069b4,&DAT_004069be);
  *(undefined4 *)(this + 0x18) = 0x2580;
  *(undefined4 *)(this + 0x1c) = 8;
  *(undefined4 *)(this + 0x20) = 1;
  this[0x24] = (ISPCommand)0x6e;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x25] = (ISPCommand)0x0;
  return;
}


// ===== ~ISPCommand @ 00403f94

/* ISPCommand::~ISPCommand() */

void __thiscall ISPCommand::~ISPCommand(ISPCommand *this)

{
  if (*(ISPCommand **)this == this + 8) {
    return;
  }
  operator_delete(*(ISPCommand **)this);
  return;
}


// ===== serial_port_scan @ 00403f9c

/* ISPCommand::serial_port_scan() */

undefined4 ISPCommand::serial_port_scan(void)

{
  FILE *__stream;
  size_t sVar1;
  int iVar2;
  ostream *poVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  char acStack_d0 [128];
  char *pcStack_50;
  int iStack_4c;
  char acStack_48 [16];
  char *apcStack_38 [2];
  char acStack_30 [20];
  
  apcStack_38[0] = acStack_30;
  std::__cxx11::string::_M_construct<char_const*>(apcStack_38,"/bin/ls /dev/ttyS*","");
  __stream = popen(apcStack_38[0],"r");
  if (__stream == (FILE *)0x0) {
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"popen error.",0xc);
    piVar6 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar6 == (int *)0x0) {
      uVar5 = std::__throw_bad_cast();
      return uVar5;
    }
    if ((char)piVar6[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
        (**(code **)(*piVar6 + 0x18))(piVar6,10);
      }
    }
    std::ostream::put(-0x10);
    std::ostream::flush();
    uVar5 = 0xffffffff;
  }
  else {
    iStack_4c = 0;
    acStack_48[0] = '\0';
    pcStack_50 = acStack_48;
    while (iVar2 = feof(__stream), iVar2 == 0) {
      sVar1 = fread(acStack_d0,1,0x80,__stream);
      iVar2 = ferror(__stream);
      if (iVar2 != 0) {
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"fread error",0xb);
        piVar6 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
        if (piVar6 == (int *)0x0) {
          uVar5 = std::__throw_bad_cast();
          return uVar5;
        }
        goto LAB_00401e38;
      }
      acStack_d0[sVar1] = '\0';
      sVar1 = strlen(acStack_d0);
      if (0x7fffffffU - iStack_4c < sVar1) {
        pcVar4 = "basic_string::append";
        std::__throw_length_error("basic_string::append");
        if (pcStack_50 != acStack_48) {
          operator_delete(pcStack_50);
        }
        if (apcStack_38[0] != acStack_30) {
          operator_delete(apcStack_38[0]);
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(pcVar4);
      }
      std::__cxx11::string::_M_append((char *)&pcStack_50,(uint)acStack_d0);
    }
    pclose(__stream);
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&std::cout,"Enum the COM port...\n",0x15);
    piVar6 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar6 == (int *)0x0) {
      uVar5 = std::__throw_bad_cast();
      return uVar5;
    }
    if ((char)piVar6[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
        (**(code **)(*piVar6 + 0x18))(piVar6,10);
      }
    }
    std::ostream::put(-0x10);
    std::ostream::flush();
    iVar2 = std::__cxx11::string::find((char *)&pcStack_50,0x406a24,0);
    if (iVar2 == -1) {
      poVar3 = std::__ostream_insert<char,std::char_traits<char>>
                         ((ostream *)&std::cout,pcStack_50,iStack_4c);
      piVar6 = *(int **)(poVar3 + *(int *)(*(int *)poVar3 + -0xc) + 0x7c);
      if (piVar6 == (int *)0x0) {
        uVar5 = std::__throw_bad_cast();
        return uVar5;
      }
      if ((char)piVar6[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar6 + 0x18))(piVar6,10);
        }
      }
      std::ostream::put((char)poVar3);
      std::ostream::flush();
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"Enum the COM port\n",0x12);
      piVar6 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
      if (piVar6 == (int *)0x0) {
        uVar5 = std::__throw_bad_cast();
        return uVar5;
      }
      if ((char)piVar6[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar6 + 0x18))(piVar6,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      uVar5 = 0;
    }
    else {
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"No COM port was found.",0x16);
      piVar6 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
      if (piVar6 == (int *)0x0) {
        uVar5 = std::__throw_bad_cast();
        return uVar5;
      }
LAB_00401e38:
      if ((char)piVar6[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar6 + 0x18))(piVar6,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      uVar5 = 0xffffffff;
    }
    if (pcStack_50 != acStack_48) {
      operator_delete(pcStack_50);
    }
  }
  if (apcStack_38[0] != acStack_30) {
    operator_delete(apcStack_38[0]);
  }
  return uVar5;
}


// ===== chip_disconnection @ 00403fa4

/* ISPCommand::chip_disconnection() */

undefined4 __thiscall ISPCommand::chip_disconnection(ISPCommand *this)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  
  if (this[0x25] == (ISPCommand)0x0) {
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"serial is close",0xf);
    piVar4 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar4 != (int *)0x0) {
      if ((char)piVar4[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar4 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar4 + 0x18))(piVar4,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      return 0;
    }
  }
  else {
    if (*(int *)(this + 0x28) < 0) {
      iVar1 = 0x10;
      pcVar3 = "serial fd error\n";
    }
    else {
      iVar1 = tcsetattr(*(int *)(this + 0x28),0x540e,(termios *)(this + 0x2c));
      if (-1 < iVar1) {
        close(*(int *)(this + 0x28));
        *(undefined4 *)(this + 0x28) = 0;
        this[0x25] = (ISPCommand)0x0;
        return 0;
      }
      iVar1 = 0x16;
      pcVar3 = "set serial attr error\n";
    }
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar3,iVar1);
    piVar4 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar4 != (int *)0x0) {
      if ((char)piVar4[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar4 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar4 + 0x18))(piVar4,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      return 0xffffffff;
    }
  }
  uVar2 = std::__throw_bad_cast();
  return uVar2;
}


// ===== uchar_to_uint32 @ 00403fac

/* uchar_to_uint32(unsigned char*, int, unsigned int*) */

void uchar_to_uint32(uchar *param_1,int param_2,uint *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  
  if (0 < param_2) {
    pbVar5 = param_1 + (param_2 - 1U & 0xfffffffc) + 4;
    do {
      pbVar1 = param_1 + 3;
      pbVar2 = param_1 + 2;
      bVar4 = *param_1;
      pbVar3 = param_1 + 1;
      param_1 = param_1 + 4;
      *param_3 = (uint)*pbVar1 << 0x18 | (uint)*pbVar2 << 0x10 | (uint)bVar4 | (uint)*pbVar3 << 8;
      param_3 = param_3 + 1;
    } while (pbVar5 != param_1);
  }
  return;
}


// ===== stm32crc @ 00404004

/* stm32crc(unsigned int*, int) */

void stm32crc(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = 0xffffffff;
  while (param_2 = param_2 + -1, param_2 != -1) {
    puVar4 = param_1 + 1;
    uVar6 = *param_1;
    iVar5 = 0x20;
    uVar3 = 0x80000000;
    do {
      iVar5 = iVar5 + -1;
      uVar2 = uVar1 << 1;
      if ((int)uVar1 < 0) {
        uVar2 = uVar2 ^ 0x4c11db7;
      }
      uVar1 = uVar2;
      if ((uVar6 & uVar3) != 0) {
        uVar1 = uVar2 ^ 0x4c11db7;
      }
      uVar3 = uVar3 >> 1;
      param_1 = puVar4;
    } while (iVar5 != 0);
  }
  return;
}


// ===== crc32 @ 00404068

/* ISPCommand::crc32(unsigned char*, unsigned int) */

uint __thiscall ISPCommand::crc32(ISPCommand *this,uchar *param_1,uint param_2)

{
  uint *puVar1;
  uint *__s;
  ISPCommand IVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ISPCommand IVar10;
  
  if ((int)param_2 < 0) {
    __cxa_throw_bad_array_new_length();
    memset(this + 0x94,0,0x200);
    IVar10 = (ISPCommand)*param_1;
    this[0x94] = IVar10;
    this[0x95] = *(ISPCommand *)(param_1 + 1);
    this[0x96] = *(ISPCommand *)(param_1 + 4);
    this[0x97] = *(ISPCommand *)(param_1 + 5);
    this[0x98] = *(ISPCommand *)(param_1 + 6);
    this[0x99] = *(ISPCommand *)(param_1 + 7);
    this[0x9a] = *(ISPCommand *)(param_1 + 8);
    this[0x9b] = *(ISPCommand *)(param_1 + 9);
    this[0x9c] = *(ISPCommand *)(param_1 + 10);
    this[0x9d] = *(ISPCommand *)(param_1 + 0xb);
    uVar7 = (uint)*(ushort *)(param_1 + 6);
    if (uVar7 == 0) {
      iVar4 = 0xb;
      uVar8 = 10;
    }
    else {
      memcpy(this + 0x9e,*(void **)(param_1 + 0xc),uVar7);
      uVar8 = uVar7 + 10;
      iVar4 = uVar7 + 0xb;
    }
    IVar2 = (ISPCommand)0x0;
    uVar7 = 0;
    while( true ) {
      uVar7 = uVar7 + 1 & 0xff;
      IVar2 = (ISPCommand)((byte)IVar2 ^ (byte)IVar10);
      if (uVar8 <= uVar7) break;
      IVar10 = (this + 0x94)[uVar7];
    }
    this[uVar8 + 0x94] = IVar2;
    *(ISPCommand *)(param_1 + 0x10) = IVar2;
    *(int *)param_2 = iVar4;
    return 0;
  }
  uVar7 = param_2 >> 2;
  __s = operator_new__(param_2 & 0xfffffffc);
  memset(__s,0,uVar7);
  uchar_to_uint32(param_1,param_2,__s);
  uVar8 = 0xffffffff;
  puVar1 = __s;
  while (uVar7 = uVar7 - 1, uVar7 != 0xffffffff) {
    puVar6 = puVar1 + 1;
    uVar5 = *puVar1;
    iVar4 = 0x20;
    uVar3 = 0x80000000;
    do {
      uVar9 = uVar8 << 1;
      if ((int)uVar8 < 0) {
        uVar9 = uVar9 ^ 0x4c11db7;
      }
      iVar4 = iVar4 + -1;
      uVar8 = uVar9;
      if ((uVar5 & uVar3) != 0) {
        uVar8 = uVar9 ^ 0x4c11db7;
      }
      uVar3 = uVar3 >> 1;
      puVar1 = puVar6;
    } while (iVar4 != 0);
  }
  operator_delete__(__s);
  return uVar8;
}


// ===== packaged_data @ 00404154

/* ISPCommand::packaged_data(master_send_master_instruction&, unsigned int&) */

undefined4 __thiscall
ISPCommand::packaged_data(ISPCommand *this,master_send_master_instruction *param_1,uint *param_2)

{
  uint uVar1;
  ISPCommand IVar2;
  uint uVar3;
  ISPCommand IVar4;
  uint uVar5;
  
  memset(this + 0x94,0,0x200);
  IVar4 = *(ISPCommand *)param_1;
  this[0x94] = IVar4;
  this[0x95] = *(ISPCommand *)(param_1 + 1);
  this[0x96] = *(ISPCommand *)(param_1 + 4);
  this[0x97] = *(ISPCommand *)(param_1 + 5);
  this[0x98] = *(ISPCommand *)(param_1 + 6);
  this[0x99] = *(ISPCommand *)(param_1 + 7);
  this[0x9a] = *(ISPCommand *)(param_1 + 8);
  this[0x9b] = *(ISPCommand *)(param_1 + 9);
  this[0x9c] = *(ISPCommand *)(param_1 + 10);
  this[0x9d] = *(ISPCommand *)(param_1 + 0xb);
  uVar5 = (uint)*(ushort *)(param_1 + 6);
  if (uVar5 == 0) {
    uVar5 = 0xb;
    uVar3 = 10;
  }
  else {
    memcpy(this + 0x9e,*(void **)(param_1 + 0xc),uVar5);
    uVar3 = uVar5 + 10;
    uVar5 = uVar5 + 0xb;
  }
  IVar2 = (ISPCommand)0x0;
  uVar1 = 0;
  while( true ) {
    uVar1 = uVar1 + 1 & 0xff;
    IVar2 = (ISPCommand)((byte)IVar2 ^ (byte)IVar4);
    if (uVar3 <= uVar1) break;
    IVar4 = (this + 0x94)[uVar1];
  }
  this[uVar3 + 0x94] = IVar2;
  *(ISPCommand *)(param_1 + 0x10) = IVar2;
  *param_2 = uVar5;
  return 0;
}


// ===== data_xor @ 00404288

/* ISPCommand::data_xor(unsigned char*, unsigned int) */

byte __thiscall ISPCommand::data_xor(ISPCommand *this,uchar *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  bVar1 = 0;
  if (param_2 != 0) {
    uVar2 = 0;
    do {
      pbVar3 = param_1 + uVar2;
      uVar2 = uVar2 + 1 & 0xff;
      bVar1 = bVar1 ^ *pbVar3;
    } while (uVar2 < param_2);
  }
  return bVar1;
}


// ===== master_receive_slave_response @ 004042c0

/* ISPCommand::master_receive_slave_response(master_receive_slave_response&) */

int __thiscall
ISPCommand::master_receive_slave_response(ISPCommand *this,master_receive_slave_response *param_1)

{
  ISPCommand IVar1;
  int iVar2;
  uint uVar3;
  ISPCommand *pIVar4;
  ISPCommand IVar5;
  uint uVar6;
  int *piVar7;
  ISPCommand *__s;
  
  __s = this + 0x94;
  memset(__s,0,0x200);
  iVar2 = Serial::serial_recv((Serial *)this,(uchar *)__s,6);
  if (-1 < iVar2) {
    *param_1 = (master_receive_slave_response)this[0x94];
    *(ISPCommand *)(param_1 + 1) = this[0x95];
    *(ISPCommand *)(param_1 + 4) = this[0x96];
    *(ISPCommand *)(param_1 + 5) = this[0x97];
    *(ISPCommand *)(param_1 + 6) = this[0x98];
    *(ISPCommand *)(param_1 + 7) = this[0x99];
    uVar6 = (uint)*(ushort *)(this + 0x98);
    iVar2 = Serial::serial_recv((Serial *)this,(uchar *)(this + 0x9a),uVar6 + 3);
    IVar5 = (ISPCommand)0x0;
    if (-1 < iVar2) {
      *(ISPCommand **)(param_1 + 8) = this + 0x9a;
      *(ISPCommand *)(param_1 + 0xc) = this[uVar6 + 0x9a];
      uVar3 = 0;
      *(ISPCommand *)(param_1 + 0xd) = this[uVar6 + 0x9b];
      IVar1 = this[uVar6 + 0x9c];
      *(ISPCommand *)(param_1 + 0x10) = IVar1;
      do {
        pIVar4 = __s + uVar3;
        uVar3 = uVar3 + 1 & 0xff;
        IVar5 = (ISPCommand)((byte)IVar5 ^ (byte)*pIVar4);
      } while (uVar3 < uVar6 + 8);
      if (IVar1 == IVar5) {
        return 0;
      }
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"xor error.",10);
      piVar7 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
      if (piVar7 == (int *)0x0) {
        iVar2 = std::__throw_bad_cast();
        return iVar2;
      }
      if ((char)piVar7[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar7 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar7 + 0x18))(piVar7,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      iVar2 = 0;
    }
  }
  return iVar2;
}


// ===== master_send_master_instruction @ 00404490

/* ISPCommand::master_send_master_instruction(unsigned char, unsigned char, unsigned char*, unsigned
   char*, unsigned int) */

void __thiscall
ISPCommand::master_send_master_instruction
          (ISPCommand *this,uchar param_1,uchar param_2,uchar *param_3,uchar *param_4,uint param_5)

{
  undefined2 local_20 [2];
  uchar local_1c;
  uchar local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  uchar local_18;
  uchar local_17;
  uchar local_16;
  uchar local_15;
  uchar *local_14;
  uint local_c;
  
  if (param_3 == (uchar *)0x0) {
    local_15 = '\0';
    local_16 = '\0';
    local_17 = '\0';
    local_18 = '\0';
  }
  else {
    local_18 = *param_3;
    local_17 = param_3[1];
    local_16 = param_3[2];
    local_15 = param_3[3];
  }
  local_1a = (undefined1)param_5;
  local_20[0] = 0x55aa;
  local_19 = (undefined1)(param_5 >> 8);
  local_14 = param_4;
  local_1c = param_1;
  local_1b = param_2;
  packaged_data(this,(master_send_master_instruction *)local_20,&local_c);
  Serial::serial_send((Serial *)this,(uchar *)(this + 0x94),local_c);
  return;
}


// ===== chip_system_reset @ 00404538

/* ISPCommand::chip_system_reset() */

int __thiscall ISPCommand::chip_system_reset(ISPCommand *this)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  master_receive_slave_response amStack_30 [12];
  undefined2 local_24;
  
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"Reset chip ...\n",0xf);
  piVar4 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
  if (piVar4 != (int *)0x0) {
    if ((char)piVar4[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*piVar4 + 0x18) != std::ctype<char>::do_widen) {
        (**(code **)(*piVar4 + 0x18))(piVar4,10);
      }
    }
    std::ostream::put(-0x10);
    std::ostream::flush();
    iVar1 = master_send_master_instruction(this,'P','\0',(uchar *)0x0,(uchar *)0x0,0);
    if (iVar1 < 0) {
      iVar3 = 0x25;
      pcVar2 = "master send master instruction error!";
    }
    else {
      iVar1 = master_receive_slave_response(this,amStack_30);
      if (iVar1 < 0) {
        iVar3 = 0x24;
        pcVar2 = "master receive slave response error!";
      }
      else {
        if (local_24 != 0xa0) {
          printf("\ncr1:%#X cr2:%#X\n",(uint)(byte)local_24,(uint)local_24._1_1_);
          if (local_24 == 0xb0) {
            iVar1 = -1;
          }
          return iVar1;
        }
        iVar3 = 0xb;
        pcVar2 = "Reset chip\n";
      }
    }
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,iVar3);
    piVar4 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar4 != (int *)0x0) {
      if ((char)piVar4[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar4 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar4 + 0x18))(piVar4,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      return iVar1;
    }
  }
  iVar1 = std::__throw_bad_cast();
  return iVar1;
}


// ===== chip_app_go @ 00404724

/* ISPCommand::chip_app_go() */

int __thiscall ISPCommand::chip_app_go(ISPCommand *this)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  master_receive_slave_response amStack_30 [12];
  undefined2 local_24;
  
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"Jump chip ...\n",0xe);
  piVar4 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
  if (piVar4 != (int *)0x0) {
    if ((char)piVar4[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*piVar4 + 0x18) != std::ctype<char>::do_widen) {
        (**(code **)(*piVar4 + 0x18))(piVar4,10);
      }
    }
    std::ostream::put(-0x10);
    std::ostream::flush();
    iVar1 = master_send_master_instruction(this,'Q','\0',(uchar *)0x0,(uchar *)0x0,0);
    if (iVar1 < 0) {
      iVar3 = 0x25;
      pcVar2 = "master send master instruction error!";
    }
    else {
      iVar1 = master_receive_slave_response(this,amStack_30);
      if (iVar1 < 0) {
        iVar3 = 0x24;
        pcVar2 = "master receive slave response error!";
      }
      else {
        if (local_24 != 0xa0) {
          printf("\ncr1:%#X cr2:%#X\n",(uint)(byte)local_24,(uint)local_24._1_1_);
          if (local_24 == 0xb0) {
            iVar1 = -1;
          }
          return iVar1;
        }
        iVar3 = 10;
        pcVar2 = "Jump chip\n";
      }
    }
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,iVar3);
    piVar4 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar4 != (int *)0x0) {
      if ((char)piVar4[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar4 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar4 + 0x18))(piVar4,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      return iVar1;
    }
  }
  iVar1 = std::__throw_bad_cast();
  return iVar1;
}


// ===== get_chip_info @ 00404910

/* ISPCommand::get_chip_info() */

int __thiscall ISPCommand::get_chip_info(ISPCommand *this)

{
  int iVar1;
  ostream *poVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  master_receive_slave_response amStack_38 [8];
  int local_30;
  undefined2 local_2c;
  char local_24;
  char local_23 [3];
  
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)&std::cout,"Get chip information ...",0x18);
  piVar6 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
  if (piVar6 != (int *)0x0) {
    if ((char)piVar6[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
        (**(code **)(*piVar6 + 0x18))(piVar6,10);
      }
    }
    std::ostream::put(-0x10);
    piVar6 = (int *)std::ostream::flush();
    piVar7 = *(int **)((int)piVar6 + *(int *)(*piVar6 + -0xc) + 0x7c);
    if (piVar7 != (int *)0x0) {
      if ((char)piVar7[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar7 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar7 + 0x18))(piVar7,10);
        }
      }
      std::ostream::put((char)piVar6);
      std::ostream::flush();
      iVar1 = master_send_master_instruction(this,'\x10','\0',(uchar *)0x0,(uchar *)0x0,0);
      if (iVar1 < 0) {
        iVar5 = 0x25;
        pcVar4 = "master send master instruction error!";
      }
      else {
        iVar1 = master_receive_slave_response(this,amStack_38);
        if (iVar1 < 0) {
          iVar5 = 0x24;
          pcVar4 = "master receive slave response error!";
        }
        else {
          if (local_2c == 0xa0) {
            iVar5 = 4;
            printf("BOOT Command Version:V:%x\n",(uint)*(byte *)(local_30 + 1));
            printf("BOOT SubVersion:V%x\n",(uint)*(byte *)(local_30 + 2));
            printf("UCID:%#x",(uint)*(byte *)(local_30 + 3));
            do {
              pbVar3 = (byte *)(local_30 + iVar5);
              iVar5 = iVar5 + 1;
              printf("%x",(uint)*pbVar3);
            } while (iVar5 != 0x13);
            iVar5 = 0x14;
            printf("\nUID:%#x",(uint)*(byte *)(local_30 + 0x13));
            do {
              pbVar3 = (byte *)(local_30 + iVar5);
              iVar5 = iVar5 + 1;
              printf("%x",(uint)*pbVar3);
            } while (iVar5 != 0x1f);
            puts("\n");
          }
          else {
            local_23[0] = (char)local_2c;
            *(uint *)(&DAT_004189fc + *(int *)(std::cout + -0xc)) =
                 *(uint *)(&DAT_004189fc + *(int *)(std::cout + -0xc)) & 0xffffffb5 | 8;
            poVar2 = std::__ostream_insert<char,std::char_traits<char>>
                               ((ostream *)&std::cout,local_23,1);
            piVar6 = *(int **)(poVar2 + *(int *)(*(int *)poVar2 + -0xc) + 0x7c);
            if (piVar6 == (int *)0x0) goto LAB_00404d38;
            if ((char)piVar6[7] == '\0') {
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
                (**(code **)(*piVar6 + 0x18))(piVar6,10);
              }
            }
            std::ostream::put((char)poVar2);
            std::ostream::flush();
            local_24 = local_2c._1_1_;
            *(uint *)(&DAT_004189fc + *(int *)(std::cout + -0xc)) =
                 *(uint *)(&DAT_004189fc + *(int *)(std::cout + -0xc)) & 0xffffffb5 | 8;
            poVar2 = std::__ostream_insert<char,std::char_traits<char>>
                               ((ostream *)&std::cout,&local_24,1);
            piVar6 = *(int **)(poVar2 + *(int *)(*(int *)poVar2 + -0xc) + 0x7c);
            if (piVar6 == (int *)0x0) goto LAB_00404d38;
            if ((char)piVar6[7] == '\0') {
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
                (**(code **)(*piVar6 + 0x18))(piVar6,10);
              }
            }
            std::ostream::put((char)poVar2);
            std::ostream::flush();
          }
          iVar5 = 0x15;
          pcVar4 = "Get chip information\n";
        }
      }
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar4,iVar5);
      piVar6 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
      if (piVar6 != (int *)0x0) {
        if ((char)piVar6[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
            (**(code **)(*piVar6 + 0x18))(piVar6,10);
          }
        }
        std::ostream::put(-0x10);
        std::ostream::flush();
        return iVar1;
      }
    }
  }
LAB_00404d38:
  iVar1 = std::__throw_bad_cast();
  return iVar1;
}


// ===== establish_connection @ 00404d40

/* ISPCommand::establish_connection(std::__cxx11::string, unsigned int, unsigned int, char, unsigned
   int) */

undefined4 __thiscall
ISPCommand::establish_connection
          (ISPCommand *this,int *param_2,undefined4 param_3,undefined4 param_4,char param_5,
          undefined4 param_6)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 *local_40 [2];
  undefined1 auStack_38 [16];
  undefined4 local_28;
  
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)&std::cout,"Connect device ...\n",0x13);
  piVar2 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
  if (piVar2 == (int *)0x0) {
    uVar1 = std::__throw_bad_cast();
    return uVar1;
  }
  if ((char)piVar2[7] == '\0') {
    std::ctype<char>::_M_widen_init();
    if (*(code **)(*piVar2 + 0x18) != std::ctype<char>::do_widen) {
      (**(code **)(*piVar2 + 0x18))(piVar2,10);
    }
  }
  std::ostream::put(-0x10);
  std::ostream::flush();
  local_40[0] = auStack_38;
  std::__cxx11::string::_M_construct<char*>(local_40,*param_2,*param_2 + param_2[1]);
                    /* try { // try from 00404e00 to 00404e07 has its CatchHandler @ 00404e7c */
  local_28 = Serial::open_serial((Serial *)this,local_40,param_3,param_4,(int)param_5,param_6);
  if (local_40[0] != auStack_38) {
    operator_delete(local_40[0]);
  }
  return local_28;
}


// ===== chip_establish_connection @ 00404e98

/* ISPCommand::chip_establish_connection(std::__cxx11::string, unsigned int, unsigned int, char,
   unsigned int) */

int __thiscall
ISPCommand::chip_establish_connection
          (ISPCommand *this,int *param_2,undefined4 param_3,undefined4 param_4,char param_5,
          undefined4 param_6)

{
  int iVar1;
  undefined1 *local_30 [2];
  undefined1 auStack_28 [16];
  undefined4 local_18;
  
  local_30[0] = auStack_28;
  local_18 = param_4;
  std::__cxx11::string::_M_construct<char*>(local_30,*param_2,*param_2 + param_2[1]);
                    /* try { // try from 00404ef4 to 00404efb has its CatchHandler @ 00404f2c */
  iVar1 = establish_connection(this,local_30,param_3,local_18,(int)param_5,param_6);
  if (local_30[0] != auStack_28) {
    operator_delete(local_30[0]);
  }
  return iVar1 >> 0x1f;
}


// ===== erase_flash @ 00404f48

/* ISPCommand::erase_flash(unsigned int, unsigned int) */

int __thiscall ISPCommand::erase_flash(ISPCommand *this,uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  master_receive_slave_response amStack_38 [12];
  undefined2 local_2c;
  uchar local_24 [3];
  undefined1 local_21;
  
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)&std::cout,"Erease all pages ...\n",0x15);
  piVar5 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
  if (piVar5 != (int *)0x0) {
    if ((char)piVar5[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*piVar5 + 0x18) != std::ctype<char>::do_widen) {
        (**(code **)(*piVar5 + 0x18))(piVar5,10);
      }
    }
    std::ostream::put(-0x10);
    std::ostream::flush();
    if (param_2 < param_1) {
      return -1;
    }
    if (param_1 < 0x8000000) {
      return -1;
    }
    if (0x8080000 < param_2) {
      return -1;
    }
    uVar1 = (param_2 - (param_1 + 0xf8000000 >> 0xb) >> 0xb) + 1;
    if (0x100 < uVar1) {
      uVar1 = 0x100;
    }
    local_24[0] = '\0';
    local_24[1] = '\0';
    local_24[2] = (uchar)uVar1;
    local_21 = (undefined1)(uVar1 >> 8);
    iVar2 = master_send_master_instruction(this,'0','\0',local_24,(uchar *)0x0,0);
    if (iVar2 < 0) {
      iVar4 = 0x25;
      pcVar3 = "master send master instruction error!";
    }
    else {
      iVar2 = master_receive_slave_response(this,amStack_38);
      if (iVar2 < 0) {
        iVar4 = 0x24;
        pcVar3 = "master receive slave response error!";
      }
      else {
        if (local_2c != 0xa0) {
          printf("\ncr1:%#X cr2:%#X\n",(uint)(byte)local_2c,(uint)local_2c._1_1_);
          if (local_2c._1_1_ == 0x31) {
            iVar2 = 0x21;
            pcVar3 = "Erase FLASH page protected by WRP";
          }
          else if (local_2c._1_1_ < 0x32) {
            if (local_2c._1_1_ == 0) {
              iVar2 = 0xe;
              pcVar3 = "return failure";
            }
            else {
              if (local_2c._1_1_ != 0x30) {
                return -1;
              }
              iVar2 = 0x21;
              pcVar3 = "Erase FLASH page protected by RDP";
            }
          }
          else if (local_2c._1_1_ == 0x37) {
            iVar2 = 0x15;
            pcVar3 = "Failed to erase FLASH";
          }
          else if (local_2c._1_1_ == 0x3f) {
            iVar2 = 0x27;
            pcVar3 = "Failed to update management information";
          }
          else {
            if (local_2c._1_1_ != 0x34) {
              return -1;
            }
            iVar2 = 0x26;
            pcVar3 = "Erase FLASH address range out of range";
          }
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar3,iVar2);
          piVar5 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
          if (piVar5 != (int *)0x0) {
            if ((char)piVar5[7] == '\0') {
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*piVar5 + 0x18) != std::ctype<char>::do_widen) {
                (**(code **)(*piVar5 + 0x18))(piVar5,10);
              }
            }
            std::ostream::put(-0x10);
            std::ostream::flush();
            return -1;
          }
          goto LAB_004052c4;
        }
        iVar4 = 0x11;
        pcVar3 = "Erease all pages\n";
      }
    }
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar3,iVar4);
    piVar5 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar5 != (int *)0x0) {
      if ((char)piVar5[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar5 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar5 + 0x18))(piVar5,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      return iVar2;
    }
  }
LAB_004052c4:
  iVar2 = std::__throw_bad_cast();
  return iVar2;
}


// ===== erase_flash_all @ 004052cc

/* ISPCommand::erase_flash_all() */

void __thiscall ISPCommand::erase_flash_all(ISPCommand *this)

{
  erase_flash(this,0x8000000,0x8080000);
  return;
}


// ===== erase_flash_by_file_size @ 004052d8

/* ISPCommand::erase_flash_by_file_size(std::__cxx11::string) */

undefined4 __thiscall ISPCommand::erase_flash_by_file_size(ISPCommand *this,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ostream *poVar3;
  int *piVar4;
  stat sStack_a0;
  
  iVar1 = access((char *)*param_2,0);
  if (iVar1 < 0) {
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"no find file:",0xd);
    poVar3 = std::__ostream_insert<char,std::char_traits<char>>
                       ((ostream *)&std::cout,(char *)*param_2,param_2[1]);
    piVar4 = *(int **)(poVar3 + *(int *)(*(int *)poVar3 + -0xc) + 0x7c);
    if (piVar4 == (int *)0x0) {
      uVar2 = std::__throw_bad_cast();
      return uVar2;
    }
    if ((char)piVar4[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*piVar4 + 0x18) != std::ctype<char>::do_widen) {
        (**(code **)(*piVar4 + 0x18))(piVar4,10);
      }
    }
    std::ostream::put((char)poVar3);
    std::ostream::flush();
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = __xstat(3,(char *)*param_2,&sStack_a0);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = erase_flash(this,0x8000000,sStack_a0.st_blksize + 0x8000000);
    }
  }
  return uVar2;
}


// ===== flash_download @ 004053ec

/* ISPCommand::flash_download(unsigned int, unsigned char*, unsigned int) */

int __thiscall ISPCommand::flash_download(ISPCommand *this,uint param_1,uchar *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  uchar auStack_130 [16];
  uchar auStack_120 [240];
  master_receive_slave_response amStack_30 [12];
  undefined2 local_24;
  uchar local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  memset(auStack_130,0,0x100);
  local_1c = (uchar)param_1;
  local_1b = (undefined1)(param_1 >> 8);
  local_1a = (undefined1)(param_1 >> 0x10);
  local_19 = (undefined1)(param_1 >> 0x18);
  memcpy(auStack_120,param_2,param_3);
  if ((param_3 & 0xf) != 0) {
    printf("data_len: %d\n",param_3);
    param_3 = (param_3 & 0xfffffff0) + 0x10;
    printf("data_len: %d\n",param_3);
  }
  uVar1 = crc32(this,auStack_120,param_3);
  auStack_120[param_3] = (uchar)uVar1;
  auStack_120[param_3 + 1] = (uchar)((uint)uVar1 >> 8);
  auStack_120[param_3 + 2] = (uchar)((uint)uVar1 >> 0x10);
  auStack_120[param_3 + 3] = (uchar)((uint)uVar1 >> 0x18);
  iVar2 = master_send_master_instruction(this,'1','\0',&local_1c,auStack_130,param_3 + 0x14);
  if (iVar2 < 0) {
    iVar4 = 0x25;
    pcVar3 = "master send master instruction error!";
  }
  else {
    iVar2 = master_receive_slave_response(this,amStack_30);
    if (-1 < iVar2) {
      if (local_24 == 0xa0) {
        return iVar2;
      }
      printf("\ncr1:%#X cr2:%#X\n",(uint)(byte)local_24,(uint)local_24._1_1_);
      switch(local_24._1_1_) {
      case 0:
        iVar2 = 0xe;
        pcVar3 = "return failure";
        break;
      default:
        return -1;
      case 0x30:
        iVar2 = 0x27;
        pcVar3 = "Download FLASH address protected by RDP";
        break;
      case 0x31:
        iVar2 = 0x27;
        pcVar3 = "Download FLASH address protected by WRP";
        break;
      case 0x34:
        iVar2 = 0x29;
        pcVar3 = "Download FLASH address range out of range";
        break;
      case 0x35:
        iVar2 = 0x36;
        pcVar3 = "Download FLASH starting address is not 16-byte aligned";
        break;
      case 0x36:
        iVar2 = 0x32;
        pcVar3 = "Download FLASH data length is not a multiple of 16";
        break;
      case 0x37:
        iVar2 = 0x16;
        pcVar3 = "Program FLASH failure!";
      }
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar3,iVar2);
      piVar5 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
      if (piVar5 != (int *)0x0) {
        if ((char)piVar5[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*piVar5 + 0x18) != std::ctype<char>::do_widen) {
            (**(code **)(*piVar5 + 0x18))(piVar5,10);
          }
        }
        std::ostream::put(-0x10);
        std::ostream::flush();
        return -1;
      }
      goto LAB_0040572c;
    }
    iVar4 = 0x24;
    pcVar3 = "master receive slave response error!";
  }
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar3,iVar4);
  piVar5 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
  if (piVar5 != (int *)0x0) {
    if ((char)piVar5[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*piVar5 + 0x18) != std::ctype<char>::do_widen) {
        (**(code **)(*piVar5 + 0x18))(piVar5,10);
      }
    }
    std::ostream::put(-0x10);
    std::ostream::flush();
    return iVar2;
  }
LAB_0040572c:
  iVar2 = std::__throw_bad_cast();
  return iVar2;
}


// ===== download_file_to_flash @ 00405734

/* ISPCommand::download_file_to_flash(std::__cxx11::string, unsigned int) */

undefined4 __thiscall
ISPCommand::download_file_to_flash(ISPCommand *this,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ostream *poVar4;
  undefined4 uVar5;
  char cVar6;
  int *piVar7;
  uchar auStack_a0 [128];
  
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"Download ...\n",0xd);
  piVar7 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
  if (piVar7 == (int *)0x0) goto LAB_00405b18;
  if ((char)piVar7[7] == '\0') {
    std::ctype<char>::_M_widen_init();
    if (*(code **)(*piVar7 + 0x18) != std::ctype<char>::do_widen) {
      (**(code **)(*piVar7 + 0x18))(piVar7,10);
    }
  }
  std::ostream::put(-0x10);
  std::ostream::flush();
  iVar1 = access((char *)*param_2,0);
  if (iVar1 < 0) {
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"no find file:",0xd);
    poVar4 = std::__ostream_insert<char,std::char_traits<char>>
                       ((ostream *)&std::cout,(char *)*param_2,param_2[1]);
    piVar7 = *(int **)(poVar4 + *(int *)(*(int *)poVar4 + -0xc) + 0x7c);
    if (piVar7 == (int *)0x0) goto LAB_00405b18;
    if ((char)piVar7[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*piVar7 + 0x18) != std::ctype<char>::do_widen) {
        (**(code **)(*piVar7 + 0x18))(piVar7,10);
        cVar6 = (char)poVar4;
        goto LAB_00405a4c;
      }
    }
  }
  else {
    iVar1 = open((char *)*param_2,0);
    if (-1 < iVar1) {
      do {
        memset(auStack_a0,0,0x80);
        uVar3 = read(iVar1,auStack_a0,0x80);
        if ((int)uVar3 < 0) {
          std::__ostream_insert<char,std::char_traits<char>>
                    ((ostream *)&std::cout,"read file error.",0x10);
          piVar7 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
          if (piVar7 != (int *)0x0) {
            if ((char)piVar7[7] == '\0') {
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*piVar7 + 0x18) != std::ctype<char>::do_widen) {
                (**(code **)(*piVar7 + 0x18))(piVar7,10);
              }
            }
            std::ostream::put(-0x10);
            std::ostream::flush();
            close(iVar1);
            return 0xffffffff;
          }
          goto LAB_00405b18;
        }
        if (uVar3 == 0) break;
        iVar2 = flash_download(this,param_3,auStack_a0,uVar3);
        if (iVar2 < 0) {
          close(iVar1);
          return 0xffffffff;
        }
        param_3 = param_3 + uVar3;
      } while (0x7f < (int)uVar3);
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"Download\n",9);
      piVar7 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
      if (piVar7 != (int *)0x0) {
        if ((char)piVar7[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*piVar7 + 0x18) != std::ctype<char>::do_widen) {
            (**(code **)(*piVar7 + 0x18))(piVar7,10);
          }
        }
        std::ostream::put(-0x10);
        std::ostream::flush();
        close(iVar1);
        return 0;
      }
LAB_00405b18:
      uVar5 = std::__throw_bad_cast();
      return uVar5;
    }
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"open ",5);
    poVar4 = std::__ostream_insert<char,std::char_traits<char>>
                       ((ostream *)&std::cout,(char *)*param_2,param_2[1]);
    std::__ostream_insert<char,std::char_traits<char>>(poVar4," error.",7);
    piVar7 = *(int **)(poVar4 + *(int *)(*(int *)poVar4 + -0xc) + 0x7c);
    if (piVar7 == (int *)0x0) goto LAB_00405b18;
    if ((char)piVar7[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      (**(code **)(*piVar7 + 0x18))(piVar7,10);
      cVar6 = (char)poVar4;
      goto LAB_00405a4c;
    }
  }
  cVar6 = (char)poVar4;
LAB_00405a4c:
  std::ostream::put(cVar6);
  std::ostream::flush();
  return 0xffffffff;
}


// ===== data_crc_check @ 00405b20

/* ISPCommand::data_crc_check(unsigned int, unsigned int, unsigned int) */

int __thiscall ISPCommand::data_crc_check(ISPCommand *this,uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  uchar local_48 [17];
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined4 local_30;
  undefined4 local_2c;
  master_receive_slave_response amStack_28 [12];
  undefined2 local_1c;
  uchar local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  
  local_14 = (uchar)param_3;
  local_13 = (undefined1)(param_3 >> 8);
  local_12 = (undefined1)(param_3 >> 0x10);
  local_11 = (undefined1)(param_3 >> 0x18);
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_30 = 0;
  local_2c = 0;
  local_48[0x10] = (uchar)param_1;
  local_37 = (undefined1)(param_1 >> 8);
  local_36 = (undefined1)(param_1 >> 0x10);
  local_35 = (undefined1)(param_1 >> 0x18);
  local_34 = (undefined1)param_2;
  local_33 = (undefined1)(param_2 >> 8);
  local_32 = (undefined1)(param_2 >> 0x10);
  local_31 = (undefined1)(param_2 >> 0x18);
  iVar1 = master_send_master_instruction(this,'2','\0',&local_14,local_48,0x18);
  if (iVar1 < 0) {
    iVar3 = 0x25;
    pcVar2 = "master send master instruction error!";
  }
  else {
    iVar1 = master_receive_slave_response(this,amStack_28);
    if (iVar1 < 0) {
      iVar3 = 0x24;
      pcVar2 = "master receive slave response error!";
    }
    else {
      if (local_1c != 0xa0) {
        printf("\ncr1:%#X cr2:%#X\n",(uint)(byte)local_1c,(uint)local_1c._1_1_);
        if (local_1c._1_1_ == 0x35) {
          iVar1 = 0x2e;
          pcVar2 = "CRC check address is not aligned with 16 bytes";
        }
        else if (local_1c._1_1_ < 0x36) {
          if (local_1c._1_1_ == 0) {
            iVar1 = 0xe;
            pcVar2 = "return failure";
          }
          else {
            if (local_1c._1_1_ != 0x34) {
              return -1;
            }
            iVar1 = 0x2a;
            pcVar2 = "CRC check FLASH address range out of range";
          }
        }
        else if (local_1c._1_1_ == 0x36) {
          iVar1 = 0x4d;
          pcVar2 = "The CRC check length is not a multiple of 16, or the length is less than 2KB ";
        }
        else {
          if (local_1c._1_1_ != 0x38) {
            return -1;
          }
          iVar1 = 0x10;
          pcVar2 = "CRC check failed";
        }
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,iVar1);
        piVar4 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
        if (piVar4 != (int *)0x0) {
          if ((char)piVar4[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*piVar4 + 0x18) != std::ctype<char>::do_widen) {
              (**(code **)(*piVar4 + 0x18))(piVar4,10);
            }
          }
          std::ostream::put(-0x10);
          std::ostream::flush();
          return -1;
        }
        goto LAB_00405e00;
      }
      iVar3 = 0x1c;
      pcVar2 = "Chip verification succeeded\n";
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,iVar3);
  piVar4 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
  if (piVar4 != (int *)0x0) {
    if ((char)piVar4[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*piVar4 + 0x18) != std::ctype<char>::do_widen) {
        (**(code **)(*piVar4 + 0x18))(piVar4,10);
      }
    }
    std::ostream::put(-0x10);
    std::ostream::flush();
    return iVar1;
  }
LAB_00405e00:
  iVar1 = std::__throw_bad_cast();
  return iVar1;
}


// ===== check_download_status @ 00405e08

/* ISPCommand::check_download_status(std::__cxx11::string, unsigned int) */

int __thiscall ISPCommand::check_download_status(ISPCommand *this,undefined4 *param_2,uint param_3)

{
  uchar *__buf;
  int iVar1;
  uchar *__ptr;
  ssize_t sVar2;
  uint uVar3;
  ostream *poVar4;
  char cVar5;
  int *piVar6;
  size_t __nmemb;
  stat sStack_b0;
  
  iVar1 = __xstat(3,(char *)*param_2,&sStack_b0);
  if (-1 < iVar1) {
    __nmemb = sStack_b0.st_blksize;
    if ((sStack_b0.st_blksize & 0xfU) != 0) {
      __nmemb = (sStack_b0.st_blksize & 0xfffffff0U) + 0x10;
    }
    __ptr = calloc(__nmemb,1);
    if (__ptr == (uchar *)0x0) {
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"no memory",9);
      piVar6 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
      if (piVar6 == (int *)0x0) goto LAB_004060a8;
      if ((char)piVar6[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar6 + 0x18))(piVar6,10);
        }
      }
      cVar5 = -0x10;
    }
    else {
      iVar1 = open((char *)*param_2,0);
      __buf = __ptr;
      if (-1 < iVar1) {
        while (sStack_b0.st_blksize != 0) {
          sVar2 = read(iVar1,__buf,sStack_b0.st_blksize);
          if (sVar2 < 0) {
            close(iVar1);
            free(__ptr);
            return -1;
          }
          if (sVar2 == 0) break;
          __buf = __buf + sVar2;
          sStack_b0.st_blksize = sStack_b0.st_blksize - sVar2;
        }
        close(iVar1);
        uVar3 = crc32(this,__ptr,__nmemb);
        iVar1 = data_crc_check(this,param_3,__nmemb,uVar3);
        free(__ptr);
        return iVar1 >> 0x1f;
      }
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"open ",5);
      poVar4 = std::__ostream_insert<char,std::char_traits<char>>
                         ((ostream *)&std::cout,(char *)*param_2,param_2[1]);
      std::__ostream_insert<char,std::char_traits<char>>(poVar4," error.",7);
      piVar6 = *(int **)(poVar4 + *(int *)(*(int *)poVar4 + -0xc) + 0x7c);
      if (piVar6 == (int *)0x0) {
LAB_004060a8:
        iVar1 = std::__throw_bad_cast();
        return iVar1;
      }
      cVar5 = (char)poVar4;
      if ((char)piVar6[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        (**(code **)(*piVar6 + 0x18))(piVar6,10);
      }
    }
    std::ostream::put(cVar5);
    std::ostream::flush();
  }
  return -1;
}


// ===== gpio_export @ 004060b0

/* gpio_export(unsigned int) */

undefined4 gpio_export(uint param_1)

{
  int iVar1;
  char acStack_190 [256];
  char acStack_90 [132];
  
  sprintf(acStack_190,"%s/gpio%u","/sys/class/gpio",param_1);
  iVar1 = access(acStack_190,0);
  if (iVar1 != 0) {
    sprintf(acStack_90,"echo %d > %s/export",param_1,"/sys/class/gpio");
    system(acStack_90);
  }
  return 0;
}


// ===== gpio_unexport @ 0040612c

/* gpio_unexport(unsigned int) */

undefined4 gpio_unexport(uint param_1)

{
  int iVar1;
  char acStack_110 [128];
  char acStack_90 [132];
  
  snprintf(acStack_90,0x80,"%s/gpio%u","/sys/class/gpio",param_1);
  iVar1 = access(acStack_90,0);
  if (iVar1 == 0) {
    sprintf(acStack_110,"echo %u > %s/unexport",param_1,"/sys/class/gpio");
    system(acStack_110);
  }
  return 0;
}


// ===== gpio_set_direction @ 004061ac

/* gpio_set_direction(unsigned int, char const*) */

undefined4 gpio_set_direction(uint param_1,char *param_2)

{
  int iVar1;
  char acStack_90 [132];
  
  iVar1 = strcmp(param_2,"in");
  if ((iVar1 == 0) && (iVar1 = strcmp(param_2,"out"), iVar1 == 0)) {
    return 0xffffffea;
  }
  sprintf(acStack_90,"echo %s > %s/gpio%u/direction",param_2,"/sys/class/gpio",param_1);
  system(acStack_90);
  return 0;
}


// ===== gpio_set_value @ 00406230

/* gpio_set_value(unsigned int, unsigned int) */

undefined4 gpio_set_value(uint param_1,uint param_2)

{
  uchar param2;
  char acStack_88 [132];
  
  param2 = '0';
  if ((param_2 == 0) || (param2 = '1', param_2 < 2)) {
    sprintf(acStack_88,"echo %c > %s/gpio%u/value",param2,"/sys/class/gpio",param_1);
    system(acStack_88);
    return 0;
  }
  return 0xffffffea;
}


// ===== gpio_out @ 0040628c

/* gpio_out(unsigned int, unsigned int) */

undefined4 gpio_out(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  gpio_export(param_1);
  usleep(2000);
  gpio_set_direction(param_1,"out");
  usleep(2000);
  uVar1 = gpio_set_value(param_1,param_2);
  usleep(2000);
  return uVar1;
}


// ===== _M_construct<char*> @ 00406300

/* void std::__cxx11::string::_M_construct<char*>(char*, char*, std::forward_iterator_tag) [clone
   .isra.17] */

void std::__cxx11::string::_M_construct<char*>(uint *param_1,undefined1 *param_2,int param_3)

{
  void *__dest;
  undefined1 *puVar1;
  uint uVar2;
  size_t unaff_s0;
  undefined1 *unaff_s2;
  undefined8 uVar3;
  uint local_18 [2];
  
  if (param_2 == (undefined1 *)0x0) {
    if (param_3 == 0) {
      param_1[1] = 0;
      *(undefined1 *)*param_1 = 0;
      return;
    }
    uVar3 = std::__throw_logic_error("basic_string::_M_construct null not valid");
    param_2 = unaff_s2;
  }
  else {
    unaff_s0 = param_3 - (int)param_2;
    local_18[0] = unaff_s0;
    if (0xf < unaff_s0) {
      __dest = (void *)std::__cxx11::string::_M_create(param_1,(uint)local_18);
      *param_1 = (uint)__dest;
      param_1[2] = local_18[0];
      goto LAB_00406394;
    }
    puVar1 = (undefined1 *)*param_1;
    uVar3 = CONCAT44(puVar1,puVar1);
    if (unaff_s0 == 1) {
      *puVar1 = *param_2;
      uVar2 = *param_1;
      goto LAB_0040634c;
    }
  }
  uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
  __dest = (void *)uVar3;
  if (unaff_s0 == 0) {
LAB_0040634c:
    param_1[1] = local_18[0];
    *(undefined1 *)(uVar2 + local_18[0]) = 0;
    return;
  }
LAB_00406394:
  memcpy(__dest,param_2,unaff_s0);
  param_1[1] = local_18[0];
  *(undefined1 *)(*param_1 + local_18[0]) = 0;
  return;
}


// ===== N32Isp @ 0040641c

/* N32Isp::N32Isp() */

void __thiscall N32Isp::N32Isp(N32Isp *this)

{
  *(N32Isp **)this = this + 8;
  std::__cxx11::string::_M_construct<char_const*>(this,&DAT_004069b4,&DAT_004069be);
  *(undefined4 *)(this + 0x18) = 0x2580;
  *(undefined4 *)(this + 0x1c) = 8;
  *(undefined4 *)(this + 0x20) = 1;
  this[0x24] = (N32Isp)0x6e;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x25] = (N32Isp)0x0;
  return;
}


// ===== ~N32Isp @ 00406424

/* N32Isp::~N32Isp() */

void __thiscall N32Isp::~N32Isp(N32Isp *this)

{
  if (*(N32Isp **)this == this + 8) {
    return;
  }
  operator_delete(*(N32Isp **)this);
  return;
}


// ===== chip_hardware_reset @ 0040642c

/* N32Isp::chip_hardware_reset() */

void N32Isp::chip_hardware_reset(void)

{
  gpio_out(0x31,0);
  usleep(200000);
  gpio_out(0x31,1);
  usleep(200000);
  return;
}


// ===== chip_enter_isp_status @ 00406470

/* N32Isp::chip_enter_isp_status() */

void N32Isp::chip_enter_isp_status(void)

{
  gpio_out(0x32,1);
  chip_hardware_reset();
  return;
}


// ===== serial_port_scan @ 004064a0

/* N32Isp::serial_port_scan() */

undefined4 N32Isp::serial_port_scan(void)

{
  FILE *__stream;
  size_t sVar1;
  int iVar2;
  ostream *poVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  char acStack_d0 [128];
  char *pcStack_50;
  int iStack_4c;
  char acStack_48 [16];
  char *apcStack_38 [2];
  char acStack_30 [20];
  
  apcStack_38[0] = acStack_30;
  std::__cxx11::string::_M_construct<char_const*>(apcStack_38,"/bin/ls /dev/ttyS*","");
  __stream = popen(apcStack_38[0],"r");
  if (__stream == (FILE *)0x0) {
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"popen error.",0xc);
    piVar6 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar6 == (int *)0x0) {
      uVar5 = std::__throw_bad_cast();
      return uVar5;
    }
    if ((char)piVar6[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
        (**(code **)(*piVar6 + 0x18))(piVar6,10);
      }
    }
    std::ostream::put(-0x10);
    std::ostream::flush();
    uVar5 = 0xffffffff;
  }
  else {
    iStack_4c = 0;
    acStack_48[0] = '\0';
    pcStack_50 = acStack_48;
    while (iVar2 = feof(__stream), iVar2 == 0) {
      sVar1 = fread(acStack_d0,1,0x80,__stream);
      iVar2 = ferror(__stream);
      if (iVar2 != 0) {
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"fread error",0xb);
        piVar6 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
        if (piVar6 == (int *)0x0) {
          uVar5 = std::__throw_bad_cast();
          return uVar5;
        }
        goto LAB_00401e38;
      }
      acStack_d0[sVar1] = '\0';
      sVar1 = strlen(acStack_d0);
      if (0x7fffffffU - iStack_4c < sVar1) {
        pcVar4 = "basic_string::append";
        std::__throw_length_error("basic_string::append");
        if (pcStack_50 != acStack_48) {
          operator_delete(pcStack_50);
        }
        if (apcStack_38[0] != acStack_30) {
          operator_delete(apcStack_38[0]);
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(pcVar4);
      }
      std::__cxx11::string::_M_append((char *)&pcStack_50,(uint)acStack_d0);
    }
    pclose(__stream);
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&std::cout,"Enum the COM port...\n",0x15);
    piVar6 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar6 == (int *)0x0) {
      uVar5 = std::__throw_bad_cast();
      return uVar5;
    }
    if ((char)piVar6[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
        (**(code **)(*piVar6 + 0x18))(piVar6,10);
      }
    }
    std::ostream::put(-0x10);
    std::ostream::flush();
    iVar2 = std::__cxx11::string::find((char *)&pcStack_50,0x406a24,0);
    if (iVar2 == -1) {
      poVar3 = std::__ostream_insert<char,std::char_traits<char>>
                         ((ostream *)&std::cout,pcStack_50,iStack_4c);
      piVar6 = *(int **)(poVar3 + *(int *)(*(int *)poVar3 + -0xc) + 0x7c);
      if (piVar6 == (int *)0x0) {
        uVar5 = std::__throw_bad_cast();
        return uVar5;
      }
      if ((char)piVar6[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar6 + 0x18))(piVar6,10);
        }
      }
      std::ostream::put((char)poVar3);
      std::ostream::flush();
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"Enum the COM port\n",0x12);
      piVar6 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
      if (piVar6 == (int *)0x0) {
        uVar5 = std::__throw_bad_cast();
        return uVar5;
      }
      if ((char)piVar6[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar6 + 0x18))(piVar6,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      uVar5 = 0;
    }
    else {
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"No COM port was found.",0x16);
      piVar6 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
      if (piVar6 == (int *)0x0) {
        uVar5 = std::__throw_bad_cast();
        return uVar5;
      }
LAB_00401e38:
      if ((char)piVar6[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar6 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar6 + 0x18))(piVar6,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      uVar5 = 0xffffffff;
    }
    if (pcStack_50 != acStack_48) {
      operator_delete(pcStack_50);
    }
  }
  if (apcStack_38[0] != acStack_30) {
    operator_delete(apcStack_38[0]);
  }
  return uVar5;
}


// ===== chip_software_reset @ 004064a8

/* N32Isp::chip_software_reset() */

int __thiscall N32Isp::chip_software_reset(N32Isp *this)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  master_receive_slave_response amStack_30 [12];
  undefined2 uStack_24;
  
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"Reset chip ...\n",0xf);
  piVar4 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
  if (piVar4 != (int *)0x0) {
    if ((char)piVar4[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*piVar4 + 0x18) != std::ctype<char>::do_widen) {
        (**(code **)(*piVar4 + 0x18))(piVar4,10);
      }
    }
    std::ostream::put(-0x10);
    std::ostream::flush();
    iVar1 = ISPCommand::master_send_master_instruction
                      ((ISPCommand *)this,'P','\0',(uchar *)0x0,(uchar *)0x0,0);
    if (iVar1 < 0) {
      iVar3 = 0x25;
      pcVar2 = "master send master instruction error!";
    }
    else {
      iVar1 = ISPCommand::master_receive_slave_response((ISPCommand *)this,amStack_30);
      if (iVar1 < 0) {
        iVar3 = 0x24;
        pcVar2 = "master receive slave response error!";
      }
      else {
        if (uStack_24 != 0xa0) {
          printf("\ncr1:%#X cr2:%#X\n",(uint)(byte)uStack_24,(uint)uStack_24._1_1_);
          if (uStack_24 == 0xb0) {
            iVar1 = -1;
          }
          return iVar1;
        }
        iVar3 = 0xb;
        pcVar2 = "Reset chip\n";
      }
    }
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,iVar3);
    piVar4 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar4 != (int *)0x0) {
      if ((char)piVar4[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar4 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar4 + 0x18))(piVar4,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      return iVar1;
    }
  }
  iVar1 = std::__throw_bad_cast();
  return iVar1;
}


// ===== erase_flash_all @ 004064b0

/* N32Isp::erase_flash_all() */

void __thiscall N32Isp::erase_flash_all(N32Isp *this)

{
  ISPCommand::erase_flash((ISPCommand *)this,0x8000000,0x8080000);
  return;
}


// ===== erase_flash_by_file_size @ 004064b8

/* N32Isp::erase_flash_by_file_size(std::__cxx11::string) */

undefined4 __thiscall N32Isp::erase_flash_by_file_size(N32Isp *this,int *param_2)

{
  undefined1 *local_30 [2];
  undefined1 auStack_28 [16];
  undefined4 local_18;
  
  local_30[0] = auStack_28;
  std::__cxx11::string::_M_construct<char*>(local_30,*param_2,*param_2 + param_2[1]);
                    /* try { // try from 004064f0 to 004064f7 has its CatchHandler @ 00406524 */
  local_18 = ISPCommand::erase_flash_by_file_size((ISPCommand *)this,local_30);
  if (local_30[0] != auStack_28) {
    operator_delete(local_30[0]);
  }
  return local_18;
}


// ===== download_file_to_flash @ 00406540

/* N32Isp::download_file_to_flash(std::__cxx11::string, unsigned int) */

undefined4 __thiscall N32Isp::download_file_to_flash(N32Isp *this,int *param_2,undefined4 param_3)

{
  undefined1 *local_30 [2];
  undefined1 auStack_28 [16];
  undefined4 local_18;
  
  local_30[0] = auStack_28;
  std::__cxx11::string::_M_construct<char*>(local_30,*param_2,*param_2 + param_2[1]);
                    /* try { // try from 00406584 to 0040658b has its CatchHandler @ 004065bc */
  local_18 = ISPCommand::download_file_to_flash((ISPCommand *)this,local_30,param_3);
  if (local_30[0] != auStack_28) {
    operator_delete(local_30[0]);
  }
  return local_18;
}


// ===== check_download_file @ 004065d8

/* N32Isp::check_download_file(std::__cxx11::string, unsigned int) */

undefined4 __thiscall N32Isp::check_download_file(N32Isp *this,int *param_2,undefined4 param_3)

{
  undefined1 *local_30 [2];
  undefined1 auStack_28 [16];
  undefined4 local_18;
  
  local_30[0] = auStack_28;
  std::__cxx11::string::_M_construct<char*>(local_30,*param_2,*param_2 + param_2[1]);
                    /* try { // try from 0040661c to 00406623 has its CatchHandler @ 00406654 */
  local_18 = ISPCommand::check_download_status((ISPCommand *)this,local_30,param_3);
  if (local_30[0] != auStack_28) {
    operator_delete(local_30[0]);
  }
  return local_18;
}


// ===== chip_system_reset @ 00406670

/* N32Isp::chip_system_reset() */

int __thiscall N32Isp::chip_system_reset(N32Isp *this)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  master_receive_slave_response amStack_30 [12];
  undefined2 uStack_24;
  
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"Reset chip ...\n",0xf);
  piVar4 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
  if (piVar4 != (int *)0x0) {
    if ((char)piVar4[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*piVar4 + 0x18) != std::ctype<char>::do_widen) {
        (**(code **)(*piVar4 + 0x18))(piVar4,10);
      }
    }
    std::ostream::put(-0x10);
    std::ostream::flush();
    iVar1 = ISPCommand::master_send_master_instruction
                      ((ISPCommand *)this,'P','\0',(uchar *)0x0,(uchar *)0x0,0);
    if (iVar1 < 0) {
      iVar3 = 0x25;
      pcVar2 = "master send master instruction error!";
    }
    else {
      iVar1 = ISPCommand::master_receive_slave_response((ISPCommand *)this,amStack_30);
      if (iVar1 < 0) {
        iVar3 = 0x24;
        pcVar2 = "master receive slave response error!";
      }
      else {
        if (uStack_24 != 0xa0) {
          printf("\ncr1:%#X cr2:%#X\n",(uint)(byte)uStack_24,(uint)uStack_24._1_1_);
          if (uStack_24 == 0xb0) {
            iVar1 = -1;
          }
          return iVar1;
        }
        iVar3 = 0xb;
        pcVar2 = "Reset chip\n";
      }
    }
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,iVar3);
    piVar4 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar4 != (int *)0x0) {
      if ((char)piVar4[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar4 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar4 + 0x18))(piVar4,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      return iVar1;
    }
  }
  iVar1 = std::__throw_bad_cast();
  return iVar1;
}


// ===== chip_app_go @ 00406678

/* N32Isp::chip_app_go() */

int __thiscall N32Isp::chip_app_go(N32Isp *this)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  master_receive_slave_response amStack_30 [12];
  undefined2 uStack_24;
  
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"Jump chip ...\n",0xe);
  piVar4 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
  if (piVar4 != (int *)0x0) {
    if ((char)piVar4[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*piVar4 + 0x18) != std::ctype<char>::do_widen) {
        (**(code **)(*piVar4 + 0x18))(piVar4,10);
      }
    }
    std::ostream::put(-0x10);
    std::ostream::flush();
    iVar1 = ISPCommand::master_send_master_instruction
                      ((ISPCommand *)this,'Q','\0',(uchar *)0x0,(uchar *)0x0,0);
    if (iVar1 < 0) {
      iVar3 = 0x25;
      pcVar2 = "master send master instruction error!";
    }
    else {
      iVar1 = ISPCommand::master_receive_slave_response((ISPCommand *)this,amStack_30);
      if (iVar1 < 0) {
        iVar3 = 0x24;
        pcVar2 = "master receive slave response error!";
      }
      else {
        if (uStack_24 != 0xa0) {
          printf("\ncr1:%#X cr2:%#X\n",(uint)(byte)uStack_24,(uint)uStack_24._1_1_);
          if (uStack_24 == 0xb0) {
            iVar1 = -1;
          }
          return iVar1;
        }
        iVar3 = 10;
        pcVar2 = "Jump chip\n";
      }
    }
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,iVar3);
    piVar4 = *(int **)(&DAT_00418a6c + *(int *)(std::cout + -0xc));
    if (piVar4 != (int *)0x0) {
      if ((char)piVar4[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar4 + 0x18) != std::ctype<char>::do_widen) {
          (**(code **)(*piVar4 + 0x18))(piVar4,10);
        }
      }
      std::ostream::put(-0x10);
      std::ostream::flush();
      return iVar1;
    }
  }
  iVar1 = std::__throw_bad_cast();
  return iVar1;
}


// ===== connected_to_N32G45x @ 00406680

/* N32Isp::connected_to_N32G45x(std::__cxx11::string, unsigned int, unsigned int, char, unsigned
   int) */

int __thiscall
N32Isp::connected_to_N32G45x
          (N32Isp *this,int *param_2,undefined1 *param_3,undefined4 param_4,char param_5,
          undefined4 param_6)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined1 *local_68;
  undefined1 *local_64 [9];
  undefined1 auStack_40 [16];
  char *local_30;
  
  local_64[5] = (undefined1 *)0x1c200;
  local_64[6] = (undefined1 *)0x1c200;
  local_64[1] = (undefined1 *)0x4b00;
  local_64[2] = (undefined1 *)0x4b00;
  local_64[3] = (undefined1 *)0x9600;
  local_64[4] = (undefined1 *)0x9600;
  ppuVar2 = &local_68;
  ppuVar3 = local_64 + 7;
  local_30 = "baudrate: %d\n";
  local_68 = param_3;
  local_64[0] = param_3;
  while( true ) {
    gpio_out(0x32,1);
    chip_hardware_reset();
    printf(local_30,param_3);
    local_64[7] = auStack_40;
    std::__cxx11::string::_M_construct<char*>(ppuVar3,*param_2,*param_2 + param_2[1]);
                    /* try { // try from 0040675c to 00406763 has its CatchHandler @ 0040683c */
    iVar1 = ISPCommand::chip_establish_connection
                      ((ISPCommand *)this,ppuVar3,param_3,param_4,(int)param_5,param_6);
    if (local_64[7] != auStack_40) {
      operator_delete(local_64[7]);
    }
    if (iVar1 == 0) break;
    ppuVar2 = ppuVar2 + 1;
    gpio_out(0x32,0);
    ISPCommand::chip_disconnection((ISPCommand *)this);
    sleep(1);
    if (ppuVar3 == ppuVar2) {
      if (iVar1 < 0) {
        return iVar1;
      }
LAB_004067fc:
      iVar1 = ISPCommand::get_chip_info((ISPCommand *)this);
      return iVar1;
    }
    param_3 = *ppuVar2;
  }
  gpio_out(0x32,0);
  printf("Connect the device at baudrate %d\n",(int)param_3);
  goto LAB_004067fc;
}


// ===== disconnected_N32G45X @ 00406858

/* N32Isp::disconnected_N32G45X() */

void __thiscall N32Isp::disconnected_N32G45X(N32Isp *this)

{
  gpio_out(0x32,0);
  ISPCommand::chip_disconnection((ISPCommand *)this);
  return;
}


// ===== __libc_csu_init @ 00406890

void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  _init(param_1);
  iVar3 = (int)PTR___do_global_dtors_aux_fini_array_entry_004189e0 -
          (int)PTR___frame_dummy_init_array_entry_004189dc >> 2;
  iVar2 = 0;
  puVar1 = (undefined4 *)PTR___frame_dummy_init_array_entry_004189dc;
  if (iVar3 != 0) {
    do {
      iVar2 = iVar2 + 1;
      (*(code *)*puVar1)(param_1,param_2,param_3);
      puVar1 = puVar1 + 1;
    } while (iVar3 != iVar2);
  }
  return;
}


// ===== __libc_csu_fini @ 00406934

void __libc_csu_fini(void)

{
  return;
}


// ===== _fini @ 00406940

void _fini(void)

{
  return;
}


// ===== _PROCEDURE_LINKAGE_TABLE_ @ 004084e0

void _PROCEDURE_LINKAGE_TABLE_(void)

{
  (*(code *)__DT_MIPS_PLTGOT)();
  (*(code *)PTR_open_004188b8)();
  return;
}



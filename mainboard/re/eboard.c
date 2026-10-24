// 080101b4

undefined8 FUN_080101b4(undefined4 param_1,undefined4 param_2)

{
  if (DAT_080101c4 != 0) {
    param_1 = DAT_080101cc;
    param_2 = DAT_080101c8;
  }
  return CONCAT44(param_2,param_1);
}


// 080101d0

byte * FUN_080101d0(uint *param_1,uint param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  
  param_2 = param_2 & 0xff;
  if ((int)param_3 < 0x10) {
joined_r0x08010230:
    do {
      if (param_3 == 0) {
        return (byte *)0x0;
      }
      puVar6 = (uint *)((int)param_1 + 1);
      uVar8 = *param_1;
      param_3 = param_3 - 1;
      param_1 = puVar6;
    } while ((byte)uVar8 != param_2);
  }
  else {
    while( true ) {
      if (((uint)param_1 & 7) == 0) {
        uVar8 = param_2 | param_2 << 8;
        uVar8 = uVar8 | uVar8 << 0x10;
        uVar9 = param_3 & 0xfffffff8;
        do {
          puVar6 = param_1 + 2;
          uVar9 = uVar9 - 8;
          uVar10 = *param_1 ^ uVar8;
          uVar11 = param_1[1] ^ uVar8;
          cVar1 = -((char)uVar10 == '\0');
          cVar2 = -((char)(uVar10 >> 8) == '\0');
          cVar3 = -((char)(uVar10 >> 0x10) == '\0');
          cVar4 = -((char)(uVar10 >> 0x18) == '\0');
          uVar10 = CONCAT13(cVar4,CONCAT12(cVar3,CONCAT11(cVar2,cVar1)));
          bVar12 = (char)uVar11 != '\0';
          bVar13 = (char)(uVar11 >> 8) != '\0';
          bVar14 = (char)(uVar11 >> 0x10) != '\0';
          bVar15 = (char)(uVar11 >> 0x18) != '\0';
          uVar11 = CONCAT13(bVar15 * cVar4 - !bVar15,
                            CONCAT12(bVar14 * cVar3 - !bVar14,
                                     CONCAT11(bVar13 * cVar2 - !bVar13,bVar12 * cVar1 - !bVar12)));
          if (uVar11 != 0) {
            if (uVar10 == 0) {
              pbVar7 = (byte *)((int)param_1 + 5);
              uVar10 = uVar11;
            }
            else {
              pbVar7 = (byte *)((int)param_1 + 1);
            }
            if ((uVar10 & 1) == 0) {
              bVar12 = (uVar10 & 0x100) == 0;
              pbVar5 = pbVar7 + 1;
              if (bVar12) {
                pbVar5 = pbVar7 + 2;
              }
              pbVar7 = pbVar5;
              if (bVar12 && (uVar10 & 0x18000) == 0) {
                pbVar7 = pbVar7 + 1;
              }
            }
            return pbVar7 + -1;
          }
          param_1 = puVar6;
        } while (uVar9 != 0);
        param_3 = param_3 & 7;
        goto joined_r0x08010230;
      }
      puVar6 = (uint *)((int)param_1 + 1);
      param_3 = param_3 - 1;
      if ((byte)*param_1 == param_2) break;
      param_1 = puVar6;
      if (param_3 == 0) {
        return (byte *)0x0;
      }
    }
  }
  return (byte *)((int)puVar6 + -1);
}


// 08010270

undefined4 FUN_08010270(undefined4 *param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  *param_1 = unaff_r4;
  param_1[1] = unaff_r5;
  param_1[2] = unaff_r6;
  param_1[3] = unaff_r7;
  param_1[4] = unaff_r8;
  param_1[5] = unaff_r9;
  param_1[6] = unaff_r10;
  param_1[7] = unaff_r11;
  param_1[8] = register0x00000054;
  param_1[9] = unaff_lr;
  return 0;
}


// 0801027c

int FUN_0801027c(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 1;
  }
  return param_2;
}


// 0801028c

int FUN_0801028c(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  
  do {
    uVar2 = (uint)*param_1;
    bVar1 = *param_2;
    bVar3 = uVar2 == 1;
    if (uVar2 != 0) {
      bVar3 = uVar2 == bVar1;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (bVar3);
  return uVar2 - bVar1;
}


// 080102a0

void FUN_080102a0(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  FUN_0801587c(&local_18,*(undefined4 *)(param_1 + 4));
  uVar1 = DAT_080102dc;
  iVar2 = FUN_080106fc(*param_1,DAT_080102d8,0x2c);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  *(undefined4 *)(iVar2 + 0x20) = local_18;
  *(undefined4 *)(iVar2 + 0x24) = uStack_14;
  *(undefined1 *)(iVar2 + 0x2a) = 1;
  return;
}


// 08010450

void FUN_08010450(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_19;
  
  iVar5 = FUN_08012658(DAT_080104dc);
  uVar4 = DAT_080104e8;
  puVar3 = DAT_080104e4;
  uVar2 = DAT_080104e0;
  if (iVar5 != 0) {
    local_19 = 0xff;
LAB_0801046a:
    iVar5 = FUN_08010754(&local_19,uVar2);
    if (iVar5 != 0) {
      while (*(char *)(iVar5 + 0x2a) == *(char *)(iVar5 + 0x2b)) {
        FUN_08016814();
        if (*(char *)(iVar5 + 0x2b) == *(char *)(iVar5 + 0x2a)) {
          uVar7 = *(undefined4 *)(iVar5 + 0x14);
          uVar1 = *(undefined2 *)(iVar5 + 0x18);
          *(char *)(iVar5 + 0x2a) = *(char *)(iVar5 + 0x2b) + '\x01';
          FUN_08016818();
          *puVar3 = uVar1;
          uVar6 = FUN_08014958(uVar4);
          FUN_08010e84(uVar6,local_19,uVar7,uVar1);
          break;
        }
        FUN_08016818();
        iVar5 = FUN_08010754(&local_19,uVar2);
        if (iVar5 == 0) {
          return;
        }
      }
      goto LAB_0801046a;
    }
  }
  return;
}


// 080104ec

void FUN_080104ec(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_11 [5];
  
  uVar1 = DAT_0801053c;
  local_11[0] = 0xff;
  while( true ) {
    iVar2 = FUN_08010754(local_11,uVar1);
    if (iVar2 == 0) break;
    FUN_080159dc(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24));
    if (*(char *)(iVar2 + 0x2b) != '\0') {
      iVar3 = *(int *)(iVar2 + 0x14) + *(int *)(iVar2 + 0xc);
      *(char *)(iVar2 + 0x2a) = *(char *)(iVar2 + 0x2b) + '\x01';
      *(int *)(iVar2 + 0x14) = iVar3;
      *(int *)(iVar2 + 8) = iVar3;
      FUN_08012748(iVar2,0);
    }
  }
  return;
}


// 08010540

void FUN_08010540(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_08010558;
  *DAT_08010554 = 0x2b;
  FUN_080144f4(uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_080126e8();
}


// 0801055c

void FUN_0801055c(void)

{
  int iVar1;
  
  iVar1 = FUN_08016804();
  *DAT_08010570 = iVar1 + 3U & 0xfffffffc;
  return;
}


// 08010574

int FUN_08010574(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = DAT_080105b0;
  iVar4 = *DAT_080105b0;
  uVar3 = FUN_0801680c();
  uVar2 = DAT_080105b8;
  if (uVar3 < (uint)(iVar4 + param_1)) {
    *DAT_080105b4 = 0x28;
    FUN_080144f4(uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  iVar4 = *piVar1;
  *piVar1 = (param_1 + 3U & 0xfffffffc) + iVar4;
  FUN_08016dc4(iVar4,0,param_1);
  return iVar4;
}


// 080105bc

void FUN_080105bc(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_080105c8;
  *param_1 = *DAT_080105c8;
  *puVar1 = param_1;
  return;
}


// 080105cc

undefined4 * FUN_080105cc(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  FUN_0801681c();
  uVar1 = DAT_080105fc;
  puVar2 = (undefined4 *)*DAT_080105f4;
  if (puVar2 == (undefined4 *)0x0) {
    *DAT_080105f8 = 0x2a;
    FUN_080144f4(uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  *DAT_080105f4 = *puVar2;
  FUN_08016824();
  return puVar2;
}


// 08010600

bool FUN_08010600(int *param_1)

{
  return *param_1 == 0;
}


// 0801060c

undefined4 FUN_0801060c(undefined4 *param_1)

{
  return *param_1;
}


// 08010610

undefined4 FUN_08010610(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = 0;
  if (iVar1 == 0) {
    *param_2 = (int)param_1;
    param_2[1] = (int)param_1;
    return 1;
  }
  *(undefined4 **)param_2[1] = param_1;
  param_2[1] = (int)param_1;
  return 0;
}


// 0801062c

undefined4 * FUN_0801062c(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  *param_1 = *puVar1;
  return puVar1;
}


// 08010638

void FUN_08010638(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// 08010640

void FUN_08010640(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  if ((0xff < param_2) || (*DAT_08010664 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_08010540();
  }
  if ((int)(uint)*DAT_08010668 < param_2) {
    *DAT_08010668 = (byte)param_2;
  }
  return;
}


// 0801066c

void FUN_0801066c(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar2 = (uint)*DAT_080106ac;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      puVar4 = (undefined4 *)*DAT_080106b0;
      puVar6 = puVar4;
    }
    else {
      puVar6 = (undefined4 *)*DAT_080106b0;
      bVar1 = *DAT_080106b4;
      iVar3 = 0;
      puVar4 = puVar6;
      do {
        iVar3 = iVar3 + 1;
        puVar5 = (undefined4 *)((int)puVar4 + (uint)bVar1);
        *puVar4 = puVar5;
        puVar4 = puVar5;
      } while (iVar3 != uVar2 - 1);
      puVar4 = (undefined4 *)(iVar3 * (uint)bVar1 + (int)puVar6);
    }
    puVar5 = DAT_080106b8;
    *puVar4 = 0;
    *puVar5 = puVar6;
  }
  return;
}


// 080106bc

undefined4 FUN_080106bc(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_080106f8;
  if ((*DAT_080106ec <= param_1) || (*(int *)(*DAT_080106f0 + param_1 * 8) != param_2)) {
    *DAT_080106f4 = 0x2d;
    FUN_080144f4(uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  return *(undefined4 *)(*DAT_080106f0 + param_1 * 8 + 4);
}


// 080106fc

void FUN_080106fc(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_08010750;
  piVar1 = DAT_08010744;
  if (param_1 < *DAT_08010740) {
    if ((*(int *)(*DAT_08010744 + (short)param_1 * 8) == 0) && (*DAT_08010748 == 0)) {
      *(undefined4 *)(*DAT_08010744 + (short)param_1 * 8) = param_2;
      uVar2 = FUN_08010574(param_3);
      *(undefined4 *)(*piVar1 + param_1 * 8 + 4) = uVar2;
      return;
    }
  }
  *DAT_0801074c = 0x2e;
  FUN_080144f4(uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_080126e8();
}


// 08010754

int FUN_08010754(byte *param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  byte bVar4;
  
  piVar1 = (int *)(*DAT_08010790 + (uint)(byte)(*param_1 + 1) * 8);
  bVar2 = *param_1 + 1;
  do {
    bVar4 = bVar2;
    piVar3 = piVar1;
    if (*DAT_08010794 <= bVar4) {
      return 0;
    }
    piVar1 = piVar3 + 2;
    bVar2 = bVar4 + 1;
  } while (*piVar3 != param_2);
  *param_1 = bVar4;
  return piVar3[1];
}


// 080107d4

void FUN_080107d4(void)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  psVar2 = DAT_0801080c;
  uVar3 = FUN_08014958(DAT_08010810);
  sVar1 = *psVar2;
  uVar5 = *DAT_08010814;
  uVar4 = FUN_08012668();
  FUN_08010e84(uVar3,sVar1 != 0,uVar5,uVar4,*psVar2);
  return;
}


// 08010818

void FUN_08010818(undefined4 *param_1)

{
  short *psVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  
  puVar4 = DAT_080108b4;
  puVar3 = PTR_s_Already_finalized_080108b0;
  psVar1 = DAT_08010898;
  if (*DAT_08010898 != 0) {
    *DAT_080108a8 = 0x2c;
    FUN_080144f4(puVar3);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  uVar11 = (uint)*DAT_0801089c;
  uVar8 = *DAT_080108b4;
  if (uVar11 < 4) {
    uVar11 = 4;
    *DAT_0801089c = 4;
  }
  uVar5 = FUN_0801680c();
  puVar3 = PTR_s_alloc_chunks_failed_080108ac;
  iVar7 = 0;
  do {
    uVar9 = uVar8 + uVar11;
    if (uVar5 < uVar9) {
      if (iVar7 == 0) {
        *DAT_080108a8 = 0x29;
        FUN_080144f4(puVar3);
                    /* WARNING: Subroutine does not return */
        FUN_080126e8();
      }
      sVar10 = (short)iVar7;
      goto LAB_08010850;
    }
    iVar7 = iVar7 + 1;
    uVar8 = uVar9;
  } while (iVar7 != 0x1000);
  sVar10 = 0x1000;
LAB_08010850:
  uVar6 = FUN_08010574(uVar8 - *puVar4);
  puVar2 = DAT_080108a0;
  *psVar1 = sVar10;
  *puVar2 = uVar6;
  FUN_0801066c();
  *DAT_080108a4 = *param_1;
  return;
}


// 080108b8

void FUN_080108b8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_08014958(DAT_080108d4);
  uVar2 = FUN_080168a8();
  FUN_08010e84(uVar1,uVar2);
  return;
}


// 080108d8

void FUN_080108d8(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_080168a8();
  iVar3 = *DAT_08010908;
  if (uVar1 < *DAT_0801090c) {
    iVar3 = iVar3 + 1;
  }
  uVar2 = FUN_08014958(DAT_08010910);
  FUN_08010e84(uVar2,iVar3,uVar1);
  return;
}


// 08010914

void FUN_08010914(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  
  puVar3 = DAT_080109bc;
  piVar2 = DAT_080109b8;
  piVar1 = DAT_080109b4;
  *DAT_080109b4 = *DAT_080109b4 + 1;
  uVar5 = param_2 - param_1;
  *piVar2 = *piVar2 + uVar5;
  if (uVar5 < 0x10000) {
    uVar8 = *puVar3;
    uVar5 = uVar8 + (uVar5 * uVar5 + 0xff >> 8);
  }
  else {
    if (0xfffff < uVar5) {
      uVar5 = 0xffffffff;
      goto LAB_08010948;
    }
    uVar8 = *puVar3;
    uVar5 = uVar5 * (uVar5 + 0xff >> 8) + uVar8;
  }
  if (uVar5 < uVar8) {
    uVar5 = 0xffffffff;
  }
LAB_08010948:
  *puVar3 = uVar5;
  puVar4 = DAT_080109cc;
  iVar6 = FUN_08016898(DAT_080109c0);
  iVar6 = FUN_080168a0(param_2,iVar6 + *puVar4);
  if (iVar6 != 0) {
    return;
  }
  uVar7 = FUN_08014958(DAT_080109c4);
  FUN_08010e84(uVar7,*piVar1,*piVar2,*puVar3);
  if (param_2 < *puVar4) {
    *DAT_080109c8 = *DAT_080109c8 + 1;
  }
  *puVar4 = param_2;
  *puVar3 = 0;
  *piVar2 = 0;
  *piVar1 = 0;
  return;
}


// 08010b18

void FUN_08010b18(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar3 = FUN_080106bc(*param_1,DAT_08010b60);
  uVar2 = DAT_08010b68;
  bVar1 = param_1[4];
  if ((uint)*(byte *)(iVar3 + 0x1e) <= (uint)bVar1) {
    *DAT_08010b64 = 0x26;
    FUN_080144f4(uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  FUN_08015c04(&local_18,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  puVar4 = (undefined4 *)(iVar3 + (bVar1 + 4) * 8);
  *puVar4 = local_18;
  puVar4[1] = uStack_14;
  return;
}


// 08010c28

void FUN_08010c28(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_19 [5];
  
  iVar4 = FUN_08012658(DAT_08010c94);
  uVar3 = DAT_08010c9c;
  uVar2 = DAT_08010c98;
  if (iVar4 != 0) {
    local_19[0] = 0xff;
LAB_08010c3e:
    iVar4 = FUN_08010754(local_19,uVar2);
    if (iVar4 != 0) {
      while (*(char *)(iVar4 + 0x1c) == -1) {
        FUN_08016814();
        cVar1 = *(char *)(iVar4 + 0x12);
        if (cVar1 == '\0') {
          FUN_08016818();
          break;
        }
        *(undefined1 *)(iVar4 + 0x1c) = *(undefined1 *)(iVar4 + 0x1d);
        FUN_08016818();
        uVar5 = FUN_08014958(uVar3);
        FUN_08010e84(uVar5,local_19[0],*(undefined1 *)(iVar4 + 0x1b),cVar1,iVar4 + 0x13);
        iVar4 = FUN_08010754(local_19,uVar2);
        if (iVar4 == 0) {
          return;
        }
      }
      goto LAB_08010c3e;
    }
  }
  return;
}


// 08010ca0

void FUN_08010ca0(void)

{
  return;
}


// 08010ca4

void FUN_08010ca4(byte *param_1,byte *param_2,int param_3,uint *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar5 = *(byte *)(param_3 + 4) - 1;
  if (*(byte *)(param_3 + 4) == 0) {
    return;
  }
  if (param_1 <= param_2) {
    pbVar6 = *(byte **)(param_3 + 8) + 1;
    bVar2 = **(byte **)(param_3 + 8);
    if (4 < bVar2) goto LAB_08010cfc;
    while( true ) {
      pbVar1 = param_1 + 1;
      uVar3 = (uint)*param_1;
      uVar4 = uVar3 & 0x7f;
      param_1 = pbVar1;
      if ((uVar3 & 0x60) == 0x60) {
        uVar4 = uVar4 | 0xffffffe0;
      }
      while ((int)(uVar3 << 0x18) < 0) {
        uVar3 = (uint)*param_1;
        uVar4 = uVar3 & 0x7f | uVar4 << 7;
        param_1 = param_1 + 1;
      }
      *param_4 = uVar4;
      if (iVar5 == 0) {
        return;
      }
      pbVar1 = pbVar6;
      param_4 = param_4 + 1;
      if (param_2 < param_1) break;
      while( true ) {
        pbVar6 = pbVar1 + 1;
        bVar2 = *pbVar1;
        iVar5 = iVar5 + -1;
        if (bVar2 < 5) break;
LAB_08010cfc:
        if (bVar2 != 7) goto LAB_08010d1a;
        pbVar1 = param_1 + 1;
        bVar2 = *param_1;
        param_1 = pbVar1 + bVar2;
        if (param_2 < param_1) goto LAB_08010d1a;
        *param_4 = (uint)bVar2;
        param_4[1] = (uint)pbVar1;
        pbVar1 = pbVar6;
        param_4 = param_4 + 2;
        if (iVar5 == 0) {
          return;
        }
      }
    }
  }
LAB_08010d1a:
  FUN_080144f4(DAT_08010d24);
                    /* WARNING: Subroutine does not return */
  FUN_080126e8();
}


// 08010d28

byte * FUN_08010d28(byte *param_1,ushort *param_2,uint *param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  
  bVar8 = (byte)param_2[1];
  pbVar11 = (byte *)(uint)bVar8;
  if ((byte *)0x5 < pbVar11) {
    pbVar6 = param_1 + 2;
    pbVar13 = pbVar6 + (int)(pbVar11 + -5);
    uVar1 = *param_2;
    bVar8 = *(byte *)((int)param_2 + 3);
    pbVar14 = *(byte **)(param_2 + 2);
    if (0x7f < uVar1) {
      param_1[2] = (byte)(uVar1 >> 7) | 0x80;
      pbVar6 = param_1 + 3;
    }
    pbVar11 = pbVar6 + 1;
    *pbVar6 = (byte)uVar1 & 0x7f;
    if (bVar8 != 0) {
      if (pbVar11 <= pbVar13) {
        pbVar6 = pbVar14;
        do {
          uVar12 = (uint)*pbVar6;
          if (uVar12 == 5) {
            pbVar4 = (byte *)*param_3;
            bVar9 = *pbVar4;
            pbVar5 = pbVar11 + 1;
            bVar10 = 0;
            if (bVar9 != 0) {
              pbVar7 = pbVar5;
              if (pbVar5 < pbVar13) {
                do {
                  pbVar5 = pbVar7 + 1;
                  *pbVar7 = bVar9;
                  pbVar4 = pbVar4 + 1;
                  bVar9 = *pbVar4;
                  if (bVar9 == 0) {
                    bVar10 = ((char)pbVar5 - (char)pbVar11) - 1;
                    goto LAB_08010e54;
                  }
                  pbVar7 = pbVar5;
                } while (pbVar13 != pbVar5);
                bVar10 = ((char)pbVar13 - (char)pbVar11) - 1;
              }
              else {
                bVar10 = 0;
              }
            }
LAB_08010e54:
            *pbVar11 = bVar10;
LAB_08010dbc:
            pbVar11 = pbVar5;
            param_3 = param_3 + 1;
          }
          else {
            if (uVar12 < 6) {
              uVar12 = *param_3;
              if (0x7f < uVar12 + 0x20) {
                pbVar4 = pbVar11;
                if (0x3fff < uVar12 + 0x1000) {
                  if (0x1fffff < uVar12 + 0x80000) {
                    if (0xfffffff < uVar12 + 0x4000000) {
                      pbVar4 = pbVar11 + 1;
                      *pbVar11 = (byte)(uVar12 >> 0x1c) | 0x80;
                    }
                    pbVar11 = pbVar4 + 1;
                    *pbVar4 = (byte)(uVar12 >> 0x15) | 0x80;
                  }
                  pbVar4 = pbVar11 + 1;
                  *pbVar11 = (byte)(uVar12 >> 0xe) | 0x80;
                }
                pbVar11 = pbVar4 + 1;
                *pbVar4 = (byte)(uVar12 >> 7) | 0x80;
              }
              pbVar5 = pbVar11 + 1;
              *pbVar11 = (byte)uVar12 & 0x7f;
              goto LAB_08010dbc;
            }
            if (1 < uVar12 - 6) break;
            uVar12 = (int)pbVar13 - (int)pbVar11;
            if (*param_3 <= (uint)((int)pbVar13 - (int)pbVar11)) {
              uVar12 = *param_3;
            }
            *pbVar11 = (byte)uVar12;
            iVar3 = FUN_08016d74(pbVar11 + 1,param_3[1],uVar12,pbVar11 + 1,param_4);
            pbVar11 = (byte *)(iVar3 + uVar12);
            param_3 = param_3 + 2;
          }
          if (pbVar6 + 1 == pbVar14 + bVar8) goto LAB_08010e00;
          pbVar6 = pbVar6 + 1;
        } while (pbVar11 <= pbVar13);
      }
      FUN_080144f4(DAT_08010e80);
                    /* WARNING: Subroutine does not return */
      FUN_080126e8();
    }
LAB_08010e00:
    pbVar11 = pbVar11 + (3 - (int)param_1);
    bVar8 = (byte)pbVar11;
  }
  pbVar6 = DAT_08010e7c;
  *param_1 = bVar8;
  param_1[1] = *pbVar6;
  uVar2 = FUN_08016a40(param_1,pbVar11 + -3);
  param_1[(int)(pbVar11 + -3)] = (byte)((ushort)uVar2 >> 8);
  param_1[(int)(pbVar11 + -2)] = (byte)uVar2;
  param_1[(int)(pbVar11 + -1)] = 0x7e;
  return pbVar11;
}


// 08010e84

void FUN_08010e84(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = DAT_08010eac;
  if (*DAT_08010eac == '\0') {
    *DAT_08010eac = '\x01';
    FUN_0801676c(param_1);
    *pcVar1 = '\0';
  }
  return;
}


// 08010eb0

void FUN_08010eb0(void)

{
  *DAT_08010eb8 = 0;
  return;
}


// 08010ebc

undefined4 FUN_08010ebc(byte *param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  pbVar4 = DAT_08010f90;
  if (param_2 == 0) {
LAB_08010ec8:
    *param_3 = 0;
    return 0;
  }
  uVar8 = (uint)*DAT_08010f90;
  if (-1 < (int)(uVar8 << 0x1f)) {
    if (param_2 < 5) goto LAB_08010ec8;
    uVar8 = (uint)*param_1;
    if ((uVar8 - 5 < 0x3c) && (bVar2 = param_1[1], (bVar2 & 0xf0) == 0x10)) {
      if (param_2 < uVar8) goto LAB_08010ec8;
      if (param_1[uVar8 - 1] == 0x7e) {
        bVar3 = param_1[uVar8 - 2];
        bVar1 = param_1[uVar8 - 3];
        uVar7 = FUN_08016a40();
        pbVar5 = DAT_08010f98;
        if (CONCAT11(bVar1,bVar3) == uVar7) {
          bVar1 = *pbVar4;
          bVar3 = *DAT_08010f98;
          *param_3 = uVar8;
          *pbVar4 = bVar1 & 0xfd;
          if (bVar3 == bVar2) {
            *pbVar5 = bVar3 + 1 & 0xf | 0x10;
            return 1;
          }
          goto LAB_08010f20;
        }
        uVar8 = (uint)*param_1;
      }
    }
    if (uVar8 == 0x7e) {
      *param_3 = 1;
      return 0xffffffff;
    }
    uVar8 = *pbVar4 | 1;
    *pbVar4 = (byte)uVar8;
  }
  iVar6 = FUN_080101d0(param_1,0x7e,param_2);
  if (iVar6 == 0) {
    *param_3 = param_2;
  }
  else {
    uVar8 = uVar8 & 0xfe;
    *pbVar4 = (byte)uVar8;
    *param_3 = (iVar6 - (int)param_1) + 1;
  }
  if ((int)(uVar8 << 0x1e) < 0) {
    return 0xffffffff;
  }
  *pbVar4 = (byte)uVar8 | 2;
LAB_08010f20:
  FUN_08010e84(DAT_08010f94);
  return 0xffffffff;
}


// 08010f9c

void FUN_08010f9c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 auStack_28 [4];
  int local_24;
  
  iVar2 = DAT_08011048;
  pbVar7 = (byte *)(param_1 + 2);
  pbVar6 = (byte *)(param_1 + param_2 + -3);
  while( true ) {
    if (pbVar6 <= pbVar7) {
      return;
    }
    uVar5 = (uint)*pbVar7;
    if ((char)*pbVar7 < '\0') {
      pbVar3 = pbVar7 + 2;
      uVar5 = (uVar5 & 0x7f) << 7 | (uint)pbVar7[1];
    }
    else {
      pbVar3 = pbVar7 + 1;
    }
    if ((uVar5 == 0) || (*DAT_08011040 <= uVar5)) break;
    local_24 = iVar2 + uVar5 * 0x10;
    iVar1 = -((uint)*(byte *)(local_24 + 2) * 4 + 7 & 0x7f8);
    pbVar7 = (byte *)FUN_08010ca4(pbVar3,pbVar6,local_24,auStack_28 + iVar1);
    iVar4 = FUN_08012668();
    if ((iVar4 == 0) || ((int)((uint)*(byte *)(local_24 + 3) << 0x1f) < 0)) {
      FUN_08016834();
      (**(code **)(uVar5 * 0x10 + iVar2 + 0xc))(auStack_28 + iVar1);
    }
    else {
      FUN_080126a4();
    }
  }
  FUN_080144f4(DAT_08011044);
                    /* WARNING: Subroutine does not return */
  FUN_080126e8();
}


// 0801104c

void FUN_0801104c(void)

{
  FUN_08010e84(DAT_08011054);
  return;
}


// 080110a0

void FUN_080110a0(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  puVar1 = (uint *)FUN_08010ca0(param_1[1]);
  uVar3 = param_1[2];
  FUN_0801681c();
  if ((uVar2 & 0xff) == 1) {
    *(short *)puVar1 = (short)uVar3;
    FUN_08016824();
    return;
  }
  if ((uVar2 & 0xff) == 2) {
    *puVar1 = uVar3;
    FUN_08016824();
    return;
  }
  *(char *)puVar1 = (char)uVar3;
  FUN_08016824();
  return;
}


// 080110e0

void FUN_080110e0(uint *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  uVar1 = FUN_08010ca0(param_1[1]);
  uVar2 = FUN_08014958(DAT_08011104);
  FUN_08010e84(uVar2,uVar3 & 0xff,uVar1);
  return;
}


// 0801110c

void FUN_0801110c(undefined1 *param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_080106fc(*param_1,DAT_0801113c,0x28);
  FUN_08015c04(&local_18,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(iVar1 + 0xc) = local_18;
  *(undefined4 *)(iVar1 + 0x10) = uStack_14;
  return;
}


// 08011304

undefined4 FUN_08011304(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  
  iVar5 = param_1 + 0x28;
  iVar2 = FUN_08010600(iVar5);
  puVar1 = PTR_s_Missed_scheduling_of_next_digita_0801147c;
  if (iVar2 != 0) {
    *DAT_08011474 = 0x1d;
    FUN_080144f4(puVar1);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  iVar2 = FUN_0801062c(iVar5);
  uVar4 = *(uint *)(iVar2 + 8);
  bVar7 = uVar4 != 0;
  uVar6 = (uint)bVar7;
  FUN_08015b84(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),uVar6,
               (undefined4 *)(param_1 + 0x18),param_4);
  FUN_080105bc(iVar2);
  if ((uVar4 == 0) || (*(uint *)(param_1 + 0x24) <= uVar4)) {
    if (((uint)(uVar4 == 0) == -((int)((*(byte *)(param_1 + 0x30) ^ 0x10) << 0x1b) >> 0x1f)) ||
       (*(int *)(param_1 + 0x20) == 0)) {
      iVar2 = FUN_08010600(iVar5);
      if (iVar2 != 0) {
        *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0x10 | bVar7;
        *(undefined4 *)(param_1 + 0x14) = 0;
        return 0;
      }
      uVar6 = 0;
      goto LAB_080113de;
    }
    uVar6 = uVar6 | 4;
    iVar2 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 8);
    iVar3 = FUN_08010600(iVar5);
    if (iVar3 != 0) goto LAB_0801139e;
LAB_08011430:
    bVar7 = (byte)uVar6;
    iVar5 = FUN_0801060c(iVar5);
    iVar3 = *(int *)(iVar5 + 4);
    iVar5 = FUN_080168a0(iVar2,iVar3);
    puVar1 = PTR_s_Scheduled_digital_out_event_will_08011478;
    uVar6 = uVar6 & 2;
    iVar2 = iVar3;
    if (iVar5 != 0) {
      *DAT_08011474 = 0x1e;
      FUN_080144f4(puVar1);
                    /* WARNING: Subroutine does not return */
      FUN_080126e8();
    }
LAB_080113e6:
    *(int *)(param_1 + 0x14) = iVar2;
    *(byte *)(param_1 + 0x30) = bVar7 | 4 | *(byte *)(param_1 + 0x30) & 0x10;
    if (uVar6 == 0) goto LAB_08011400;
  }
  else {
    if (*(int *)(param_1 + 0x20) == 0) {
      bVar7 = bVar7 | 2;
      iVar2 = FUN_08010600(iVar5);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0x10 | bVar7;
        iVar5 = *(int *)(param_1 + 8) + uVar4;
        goto LAB_080113c0;
      }
      uVar6 = 2;
LAB_080113de:
      iVar2 = FUN_0801060c(iVar5);
      iVar2 = *(int *)(iVar2 + 4);
      goto LAB_080113e6;
    }
    uVar6 = uVar6 | 6;
    iVar2 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 8);
    iVar3 = FUN_08010600(iVar5);
    if (iVar3 == 0) goto LAB_08011430;
LAB_0801139e:
    *(int *)(param_1 + 0x14) = iVar2;
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0x10 | (byte)uVar6;
    if (-1 < (int)(uVar6 << 0x1e)) goto LAB_08011400;
  }
  iVar5 = *(int *)(param_1 + 8) + uVar4;
  iVar3 = FUN_080168a0(iVar5,iVar2);
  if (iVar3 != 0) {
LAB_080113c0:
    *(undefined4 *)(param_1 + 4) = DAT_08011470;
    *(int *)(param_1 + 8) = iVar5;
    *(uint *)(param_1 + 0xc) = uVar4;
    *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x24) - uVar4;
    return 1;
  }
LAB_08011400:
  *(int *)(param_1 + 8) = iVar2;
  return 1;
}


// 08011514

void FUN_08011514(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = FUN_080106bc(*param_1,PTR_LAB_080112a8_1_080115a4);
  iVar4 = FUN_080105cc();
  uVar5 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar4 + 4) = uVar5;
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 8);
  FUN_08016814();
  iVar4 = FUN_08010610(iVar4,iVar3 + 0x28);
  if (iVar4 != 0) {
    bVar1 = *(byte *)(iVar3 + 0x30);
    if (((int)((uint)bVar1 << 0x1d) < 0) &&
       (iVar4 = FUN_080168a0(*(undefined4 *)(iVar3 + 0x14),uVar5), uVar2 = DAT_080115b0, iVar4 != 0)
       ) {
      *DAT_080115ac = 0x20;
      FUN_080144f4(uVar2);
                    /* WARNING: Subroutine does not return */
      FUN_080126e8();
    }
    *(byte *)(iVar3 + 0x30) = bVar1 | 4;
    *(undefined4 *)(iVar3 + 0x14) = uVar5;
    if (((int)((uint)bVar1 << 0x1e) < 0) &&
       (iVar4 = FUN_080168a0(*(undefined4 *)(iVar3 + 8),uVar5), iVar4 != 0)) {
      FUN_08016818();
      return;
    }
    FUN_08012530(iVar3);
    *(undefined **)(iVar3 + 4) = PTR_FUN_08011304_1_080115a8;
    *(undefined4 *)(iVar3 + 8) = uVar5;
    FUN_08012748(iVar3,0xf);
  }
  FUN_08016818();
  return;
}


// 080115b4

void FUN_080115b4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_24;
  int iStack_20;
  undefined4 local_1c;
  
  uVar4 = *param_1;
  iVar3 = param_1[1];
  uVar5 = param_1[2];
  iVar1 = FUN_080168a8();
  iVar2 = FUN_08016898(1);
  if ((iVar3 - iVar1) - iVar2 < 0) {
    iVar3 = FUN_08016898(1000);
    iVar3 = iVar3 + iVar1;
  }
  local_24 = uVar4;
  iStack_20 = iVar3;
  local_1c = uVar5;
  FUN_08011514(&local_24);
  return;
}


// 08011694

void FUN_08011694(void)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined1 local_11 [5];
  
  uVar1 = DAT_080116e4;
  local_11[0] = 0xff;
  while( true ) {
    iVar2 = FUN_08010754(local_11,uVar1);
    if (iVar2 == 0) break;
    FUN_08015b84(*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x1c),
                 *(byte *)(iVar2 + 0x30) & 0x10);
    bVar3 = *(byte *)(iVar2 + 0x30) & 0x10;
    if ((*(byte *)(iVar2 + 0x30) & 0x10) != 0) {
      bVar3 = 0x11;
    }
    *(byte *)(iVar2 + 0x30) = bVar3;
    FUN_08010638(iVar2 + 0x28);
  }
  return;
}


// 080116e8

void FUN_080116e8(undefined4 *param_1)

{
  undefined1 auStack_10 [12];
  
  FUN_08015aec(auStack_10,*param_1,param_1[1]);
  return;
}


// 08011710

void FUN_08011710(undefined4 param_1)

{
  FUN_080106bc(param_1,DAT_08011718);
  return;
}


// 0801171c

void FUN_0801171c(undefined1 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  puVar1 = (undefined4 *)FUN_080106bc(*param_1,DAT_08011758);
  FUN_08015f00(&local_18,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),uVar2 & 0x7f);
  *puVar1 = local_18;
  puVar1[1] = uStack_14;
  *(byte *)(puVar1 + 3) = *(byte *)(puVar1 + 3) | 2;
  return;
}


// 08011768

void FUN_08011768(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)FUN_080106bc(*param_1,DAT_080117a4);
  uVar1 = param_1[4];
  uVar3 = FUN_08010ca0(*(undefined4 *)(param_1 + 8));
  if ((int)((uint)*(byte *)(puVar2 + 3) << 0x1f) < 0) {
    FUN_080150f8(puVar2[2],uVar1,uVar3);
    return;
  }
  FUN_08016000(*puVar2,puVar2[1],uVar1);
  return;
}


// 080117a8

void FUN_080117a8(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint auStack_28 [2];
  undefined1 auStack_20 [4];
  
  uVar1 = *param_1;
  puVar4 = (undefined4 *)FUN_080106bc(uVar1,PTR_LAB_08011700_1_08011818);
  uVar2 = param_1[4];
  uVar5 = FUN_08010ca0(*(undefined4 *)(param_1 + 8));
  uVar7 = (uint)(byte)param_1[0xc];
  iVar3 = -(uVar7 + 7 & 0x1f8);
  puVar8 = auStack_20 + iVar3;
  if ((int)((uint)*(byte *)(puVar4 + 3) << 0x1f) < 0) {
    uVar6 = puVar4[2];
    *(undefined1 **)((int)auStack_28 + iVar3) = puVar8;
    FUN_08015124(uVar6,uVar2,uVar5,uVar7);
  }
  else {
    *(uint *)((int)auStack_28 + iVar3) = uVar7;
    *(undefined1 **)((int)auStack_28 + iVar3 + 4) = puVar8;
    FUN_08016060(*puVar4,puVar4[1],uVar2);
  }
  uVar5 = FUN_08014958(PTR_s_i2c_read_response_oid__c_respons_0801181c);
  FUN_08010e84(uVar5,uVar1,uVar7,puVar8);
  return;
}


// 08011820

void FUN_08011820(undefined1 *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  uint uStack_30;
  byte bStack_29;
  undefined4 local_28;
  uint local_24;
  
  puVar5 = (undefined4 *)FUN_080106bc(*param_1,PTR_LAB_08011700_1_08011914);
  uVar8 = (uint)(byte)param_1[4];
  local_28 = FUN_08010ca0(*(undefined4 *)(param_1 + 8));
  if ((int)(*(uint *)(param_1 + 0xc) << 0x1f) < 0) {
    FUN_080144f4(PTR_s_i2c_modify_bits__Odd_number_of_b_08011918);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  uVar11 = (*(uint *)(param_1 + 0xc) & 0x1ff) >> 1;
  uVar15 = uVar8 + uVar11;
  iVar6 = FUN_08010ca0(*(undefined4 *)(param_1 + 0x10));
  local_24 = (uint)*(byte *)(puVar5 + 3);
  iVar3 = -(uVar15 + 7 & 0xfffffff8);
  iVar14 = (int)&local_28 + iVar3;
  FUN_08016d74(iVar14,local_28,uVar8);
  uVar4 = local_28;
  local_24 = local_24 & 1;
  if (local_24 == 0) {
    *(uint *)(&stack0xffffffd4 + iVar3) = iVar14 + uVar8;
    *(uint *)((int)&uStack_30 + iVar3) = uVar11;
    FUN_08016060(*puVar5,puVar5[1],uVar8);
    if (uVar11 == 0) goto LAB_080118f2;
  }
  else {
    uVar7 = puVar5[2];
    *(uint *)((int)&uStack_30 + iVar3) = iVar14 + uVar8;
    FUN_08015124(uVar7,uVar8,uVar4,uVar11);
    if (uVar11 == 0) goto LAB_080118c2;
  }
  pbVar12 = (byte *)((uVar11 - 1) + iVar6);
  pbVar9 = (byte *)((uVar8 - 1) + iVar14);
  pbVar10 = (byte *)(iVar6 + -1);
  pbVar13 = pbVar12;
  do {
    pbVar10 = pbVar10 + 1;
    bVar1 = *pbVar10;
    pbVar9 = pbVar9 + 1;
    bVar2 = *pbVar9;
    *pbVar9 = bVar2 & ~bVar1;
    pbVar13 = pbVar13 + 1;
    *pbVar9 = bVar2 & ~bVar1 | *pbVar13;
  } while (pbVar10 != pbVar12);
  if (local_24 == 0) {
LAB_080118f2:
    FUN_08016000(*puVar5,puVar5[1],uVar15 & 0xff,iVar14);
    return;
  }
LAB_080118c2:
  FUN_080150f8(puVar5[2],uVar15 & 0xff,iVar14);
  return;
}


// 0801191c

void FUN_0801191c(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_18 [8];
  
  iVar3 = *DAT_08011948;
  if (0 < iVar3) {
    iVar1 = 0;
    puVar2 = DAT_0801194c;
    do {
      iVar1 = iVar1 + 1;
      FUN_08015aec(auStack_18,*puVar2,*(byte *)(puVar2 + 1) & 1);
      puVar2 = puVar2 + 2;
    } while (iVar1 != iVar3);
  }
  return;
}


// 08011950

void FUN_08011950(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_08015b60(param_2,param_3);
  if (param_1 << 0x1b < 0) {
    FUN_08015b60(param_4,param_5);
  }
  if (param_1 << 0x1a < 0) {
    FUN_08015b60(param_6,param_7);
  }
  if (param_1 << 0x19 < 0) {
    FUN_08015b60(param_8,param_9);
  }
  if (param_1 << 0x18 < 0) {
    FUN_08015b60(param_10,param_11);
  }
  iVar2 = FUN_080168a8();
  uVar1 = DAT_080119ec;
  uVar3 = FUN_08016898(DAT_080119e8);
  while( true ) {
    uVar4 = FUN_080168a8();
    iVar5 = FUN_080168a0(uVar4,iVar2 + (uint)((ulonglong)uVar1 * (ulonglong)uVar3 >> 0x32));
    if (iVar5 == 0) break;
    FUN_08016834();
  }
  FUN_08015b60(param_2,param_3);
  return;
}


// 080119f0

void FUN_080119f0(int param_1,uint param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint extraout_r2;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_48 = *(undefined4 *)(param_1 + 0x14);
  uStack_44 = *(undefined4 *)(param_1 + 0x18);
  local_40 = *(undefined4 *)(param_1 + 0x1c);
  local_3c = *(undefined4 *)(param_1 + 0x20);
  local_38 = *(undefined4 *)(param_1 + 0x24);
  uStack_34 = *(undefined4 *)(param_1 + 0x28);
  local_6c = *(undefined4 *)(param_1 + 0x2c);
  uStack_68 = *(undefined4 *)(param_1 + 0x30);
  local_64 = *(undefined4 *)(param_1 + 0x34);
  uStack_60 = *(undefined4 *)(param_1 + 0x38);
  local_54 = &local_74;
  local_4c = &local_64;
  local_50 = &local_6c;
  local_30 = local_6c;
  uStack_2c = uStack_68;
  local_28 = local_64;
  uStack_24 = uStack_60;
  local_74 = local_38;
  uStack_70 = uStack_34;
  FUN_08011950(param_2 ^ *(byte *)(param_1 + 8),local_48,uStack_44,local_40,local_3c);
  *(char *)(param_1 + 8) = (char)(param_2 << 4);
  iVar4 = FUN_080168a8();
  uVar7 = FUN_08016898(DAT_08011ae8);
  uVar8 = CONCAT44((int)(uVar7 >> 0x20),DAT_08011aec);
  uVar7 = (ulonglong)DAT_08011aec * (uVar7 & 0xffffffff);
  uVar2 = uVar7 >> 0x32;
  while( true ) {
    uVar5 = FUN_080168a8((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7);
    iVar6 = FUN_080168a0(uVar5,iVar4 + (uint)uVar2);
    uVar5 = uStack_24;
    puVar3 = local_4c;
    if (iVar6 == 0) break;
    uVar8 = FUN_08016834();
    uVar7 = (ulonglong)extraout_r2;
  }
  bVar1 = *(byte *)(param_1 + 8);
  *local_4c = local_28;
  puVar3[1] = uVar5;
  uVar5 = uStack_2c;
  puVar3 = local_50;
  *local_50 = local_30;
  puVar3[1] = uVar5;
  uVar5 = uStack_34;
  puVar3 = local_54;
  *local_54 = local_38;
  puVar3[1] = uVar5;
  FUN_08011950(param_2 ^ bVar1,local_48,uStack_44,local_40,local_3c);
  return;
}


// 08011af0

void FUN_08011af0(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = FUN_080106fc(*param_1,DAT_08011bb8,0x3c);
  FUN_08015aec(&local_20,*(undefined4 *)(param_1 + 4),0);
  *(undefined4 *)(iVar1 + 0xc) = local_20;
  *(undefined4 *)(iVar1 + 0x10) = uStack_1c;
  FUN_08015aec(&local_20,*(undefined4 *)(param_1 + 8),0);
  *(undefined4 *)(iVar1 + 0x14) = local_20;
  *(undefined4 *)(iVar1 + 0x18) = uStack_1c;
  FUN_08015aec(&local_20,*(undefined4 *)(param_1 + 0xc),0);
  *(undefined4 *)(iVar1 + 0x1c) = local_20;
  *(undefined4 *)(iVar1 + 0x20) = uStack_1c;
  FUN_08015aec(&local_20,*(undefined4 *)(param_1 + 0x10),0);
  *(undefined4 *)(iVar1 + 0x24) = local_20;
  *(undefined4 *)(iVar1 + 0x28) = uStack_1c;
  FUN_08015aec(&local_20,*(undefined4 *)(param_1 + 0x14),0);
  *(undefined4 *)(iVar1 + 0x2c) = local_20;
  *(undefined4 *)(iVar1 + 0x30) = uStack_1c;
  FUN_08015aec(&local_20,*(undefined4 *)(param_1 + 0x18),0);
  *(undefined4 *)(iVar1 + 0x34) = local_20;
  *(undefined4 *)(iVar1 + 0x38) = uStack_1c;
  FUN_08016814();
  iVar2 = FUN_080168a8();
  FUN_080119f0(iVar1,0);
  iVar3 = FUN_080168a8();
  FUN_08016818();
  if ((uint)(iVar3 - iVar2) < *(uint *)(param_1 + 0x1c)) {
    *(uint *)(iVar1 + 4) = (*(uint *)(param_1 + 0x1c) + iVar2) - iVar3;
  }
  return;
}


// 08011c8c

void FUN_08011c8c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_11;
  
  uVar1 = DAT_08011d08;
  local_11 = 0xff;
  while( true ) {
    iVar2 = FUN_08010754(&local_11,uVar1);
    if (iVar2 == 0) break;
    FUN_08015b84(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),0);
    FUN_08015b84(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),0);
    FUN_08015b84(*(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20),0);
    FUN_08015b84(*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x28),0);
    FUN_08015b84(*(undefined4 *)(iVar2 + 0x2c),*(undefined4 *)(iVar2 + 0x30),0);
    FUN_08015b84(*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x38),0);
    *(undefined1 *)(iVar2 + 8) = 0;
  }
  return;
}


// 08011d0c

void FUN_08011d0c(int param_1,byte param_2)

{
  ulonglong uVar1;
  byte unaff_10000075;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint extraout_r2;
  uint extraout_r2_00;
  char cVar12;
  ulonglong uVar13;
  
  uVar4 = DAT_08011dc4;
  uVar3 = DAT_08011dc0;
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar10 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  uVar11 = *(undefined4 *)(param_1 + 0x18);
  cVar12 = '\b';
  do {
    if ((int)((uint)param_2 << 0x18) < 0) {
      param_2 = ~unaff_10000075;
      FUN_08015b60(uVar6,uVar11);
    }
    iVar7 = FUN_080168a8();
    uVar13 = FUN_08016898(uVar3);
    uVar1 = (ulonglong)uVar4 * (uVar13 & 0xffffffff);
    uVar2 = uVar1 >> 0x32;
    while( true ) {
      uVar8 = FUN_080168a8((int)uVar13,(int)(uVar13 >> 0x20),(int)uVar1);
      iVar9 = FUN_080168a0(uVar8,iVar7 + (uint)uVar2);
      if (iVar9 == 0) break;
      uVar13 = FUN_08016834();
      uVar1 = (ulonglong)extraout_r2;
    }
    FUN_08015b60(uVar5,uVar10);
    iVar7 = FUN_080168a8();
    uVar13 = FUN_08016898(uVar3);
    uVar1 = (ulonglong)uVar4 * (uVar13 & 0xffffffff);
    uVar2 = uVar1 >> 0x32;
    while( true ) {
      uVar8 = FUN_080168a8((int)uVar13,(int)(uVar13 >> 0x20),(int)uVar1);
      iVar9 = FUN_080168a0(uVar8,iVar7 + (uint)uVar2);
      if (iVar9 == 0) break;
      uVar13 = FUN_08016834();
      uVar1 = (ulonglong)extraout_r2_00;
    }
    cVar12 = cVar12 + -1;
    FUN_08015b60(uVar5,uVar10);
    param_2 = param_2 << 1;
    unaff_10000075 = param_2;
  } while (cVar12 != '\0');
  return;
}


// 08011dc8

void FUN_08011dc8(undefined1 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int iStack_1c;
  
  piVar1 = (int *)FUN_080106fc(*param_1,DAT_08011e60,0x1c);
  FUN_08015aec(&local_20,*(undefined4 *)(param_1 + 8),0);
  piVar1[3] = local_20;
  piVar1[4] = iStack_1c;
  FUN_08015aec(&local_20,*(undefined4 *)(param_1 + 0xc),0);
  piVar1[5] = local_20;
  piVar1[6] = iStack_1c;
  FUN_08015aec(&local_20,*(undefined4 *)(param_1 + 4),1);
  FUN_08011d0c(piVar1,0xf8);
  FUN_08011d0c(piVar1,0x20);
  FUN_08016814();
  iVar2 = FUN_080168a8();
  FUN_08011d0c(piVar1,0);
  iVar3 = FUN_080168a8();
  FUN_08016818();
  *piVar1 = iVar3;
  if ((uint)(iVar3 - iVar2) < *(uint *)(param_1 + 0x10)) {
    piVar1[1] = (*(uint *)(param_1 + 0x10) + iVar2) - iVar3;
  }
  if ((uint)(iVar3 - iVar2) < *(uint *)(param_1 + 0x14)) {
    piVar1[2] = (iVar2 + *(uint *)(param_1 + 0x14)) - iVar3;
  }
  return;
}


// 08011ef0

void FUN_08011ef0(undefined1 *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar9;
  byte *pbVar8;
  
  piVar4 = (int *)FUN_080106bc(*param_1,DAT_08011f20);
  FUN_08011d0c(piVar4,0xf8);
  cVar1 = param_1[4];
  pbVar5 = (byte *)FUN_08010ca0(*(undefined4 *)(param_1 + 8));
  if (cVar1 == '\0') {
    return;
  }
  bVar2 = *pbVar5;
  iVar7 = *piVar4;
  uVar6 = piVar4[1];
  FUN_08011d0c(piVar4,bVar2 & 0xf0);
  while( true ) {
    iVar3 = FUN_080168a8();
    if (uVar6 <= (uint)(iVar3 - iVar7)) break;
    FUN_08016834();
  }
  FUN_08011d0c(piVar4,(bVar2 & 0xf) << 4);
  iVar7 = FUN_080168a8();
  uVar6 = piVar4[2];
  if (cVar1 != '\x01') {
    pbVar9 = pbVar5 + 1;
    do {
      pbVar8 = pbVar9 + 1;
      bVar2 = *pbVar9;
      FUN_08011d0c(piVar4,bVar2 & 0xf0);
      while( true ) {
        iVar3 = FUN_080168a8();
        if (uVar6 <= (uint)(iVar3 - iVar7)) break;
        FUN_08016834();
      }
      FUN_08011d0c(piVar4,(bVar2 & 0xf) << 4);
      iVar7 = FUN_080168a8();
      pbVar9 = pbVar8;
    } while (pbVar8 != pbVar5 + (byte)(cVar1 - 2) + 2);
  }
  *piVar4 = iVar7;
  return;
}


// 08011f24

void FUN_08011f24(undefined1 *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar9;
  byte *pbVar8;
  
  piVar4 = (int *)FUN_080106bc(*param_1,DAT_08011f54);
  FUN_08011d0c(piVar4,0xfa);
  cVar1 = param_1[4];
  pbVar5 = (byte *)FUN_08010ca0(*(undefined4 *)(param_1 + 8));
  if (cVar1 == '\0') {
    return;
  }
  bVar2 = *pbVar5;
  iVar7 = *piVar4;
  uVar6 = piVar4[1];
  FUN_08011d0c(piVar4,bVar2 & 0xf0);
  while( true ) {
    iVar3 = FUN_080168a8();
    if (uVar6 <= (uint)(iVar3 - iVar7)) break;
    FUN_08016834();
  }
  FUN_08011d0c(piVar4,(bVar2 & 0xf) << 4);
  iVar7 = FUN_080168a8();
  uVar6 = piVar4[2];
  if (cVar1 != '\x01') {
    pbVar9 = pbVar5 + 1;
    do {
      pbVar8 = pbVar9 + 1;
      bVar2 = *pbVar9;
      FUN_08011d0c(piVar4,bVar2 & 0xf0);
      while( true ) {
        iVar3 = FUN_080168a8();
        if (uVar6 <= (uint)(iVar3 - iVar7)) break;
        FUN_08016834();
      }
      FUN_08011d0c(piVar4,(bVar2 & 0xf) << 4);
      iVar7 = FUN_080168a8();
      pbVar9 = pbVar8;
    } while (pbVar8 != pbVar5 + (byte)(cVar1 - 2) + 2);
  }
  *piVar4 = iVar7;
  return;
}


// 08011f58

void FUN_08011f58(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_11 [5];
  
  uVar1 = DAT_08011f94;
  local_11[0] = 0xff;
  while( true ) {
    iVar2 = FUN_08010754(local_11,uVar1);
    if (iVar2 == 0) break;
    FUN_08015b84(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),0);
    FUN_08015b84(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),0);
  }
  return;
}


// 08011f98

void FUN_08011f98(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
  FUN_08015aec(&local_18,*(undefined4 *)(param_1 + 4),0);
  uVar2 = DAT_08011ff0;
  uVar4 = *(uint *)(param_1 + 8);
  if ((int)(uVar4 << 0x10) < 0) {
    *DAT_08011fec = 0x1a;
    FUN_080144f4(uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  puVar1 = (undefined4 *)FUN_080106fc(*param_1,DAT_08011fe8,(uVar4 & 0xffff) + 0x18 & 0xffff);
  *puVar1 = local_18;
  puVar1[1] = uStack_14;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(short *)(puVar1 + 5) = (short)uVar4;
  puVar1[2] = uVar2;
  puVar1[4] = uVar3;
  return;
}


// 08011ff4

void FUN_08011ff4(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_080106bc(*param_1,DAT_0801203c);
  iVar5 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 4);
  uVar3 = FUN_08010ca0(*(undefined4 *)(param_1 + 0xc));
  uVar1 = DAT_08012044;
  if ((iVar4 << 0x10 < 0) || ((uint)*(ushort *)(iVar2 + 0x14) < (uint)(iVar4 + iVar5))) {
    *DAT_08012040 = 0x1b;
    FUN_080144f4(uVar1,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  FUN_08016d74(iVar2 + iVar4 + 0x16,uVar3,iVar5);
  return;
}


// 08012048

void FUN_08012048(undefined1 *param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte *local_40;
  
  uVar1 = *param_1;
  puVar3 = (undefined4 *)FUN_080106bc(uVar1,DAT_080121dc);
  iVar12 = puVar3[3];
  uVar11 = puVar3[4];
  iVar4 = FUN_080168a8();
  uVar5 = iVar4 - iVar12;
  while (uVar5 < uVar11) {
    FUN_08016834();
    iVar4 = FUN_080168a8();
    uVar5 = iVar4 - iVar12;
  }
  uVar6 = *puVar3;
  uVar9 = puVar3[1];
  uVar2 = *(ushort *)(puVar3 + 5);
  iVar4 = FUN_080168a8();
  uVar5 = DAT_080121f0;
  uVar11 = puVar3[2];
  local_40 = (byte *)((int)puVar3 + 0x16);
  if (uVar2 != 0) {
    do {
      pbVar10 = local_40 + 1;
      uVar13 = (uint)*local_40;
      iVar14 = 8;
      iVar12 = iVar4;
      do {
        if ((int)(uVar13 << 0x18) < 0) {
          uVar7 = FUN_08016898(DAT_080121e0);
          do {
            iVar4 = FUN_080168a8();
          } while ((uint)(iVar4 - iVar12) < (uint)((ulonglong)uVar5 * (ulonglong)uVar7 >> 0x32));
          FUN_08016814();
          iVar4 = FUN_080168a8();
          FUN_08015b4c(uVar6,uVar9);
          FUN_08016818();
          if (uVar11 <= (uint)(iVar4 - iVar12)) goto LAB_080121ac;
          uVar7 = FUN_08016898(DAT_080121e4);
          do {
            iVar12 = FUN_080168a8();
          } while ((uint)(iVar12 - iVar4) < (uint)((ulonglong)uVar5 * (ulonglong)uVar7 >> 0x32));
          FUN_08016814();
          FUN_08015b4c(uVar6,uVar9);
          FUN_08016818();
          iVar12 = FUN_080168a8();
          uVar7 = FUN_08016898(DAT_080121e8);
          do {
            iVar8 = FUN_080168a8();
          } while ((uint)(iVar8 - iVar12) < (uint)((ulonglong)uVar5 * (ulonglong)uVar7 >> 0x32));
        }
        else {
          uVar7 = FUN_08016898(DAT_080121e0);
          do {
            iVar4 = FUN_080168a8();
          } while ((uint)(iVar4 - iVar12) < (uint)((ulonglong)uVar5 * (ulonglong)uVar7 >> 0x32));
          FUN_08016814();
          iVar4 = FUN_080168a8();
          FUN_08015b4c(uVar6,uVar9);
          uVar7 = FUN_08016898(DAT_080121e8);
          do {
            iVar8 = FUN_080168a8();
          } while ((uint)(iVar8 - iVar4) < (uint)((ulonglong)uVar5 * (ulonglong)uVar7 >> 0x32));
          FUN_08015b4c(uVar6,uVar9);
          FUN_08016818();
          if (uVar11 <= (uint)(iVar4 - iVar12)) {
LAB_080121ac:
            FUN_08015b84(uVar6,uVar9,0);
            uVar6 = FUN_080168a8();
            uVar9 = 0;
            puVar3[3] = uVar6;
            goto LAB_080121c0;
          }
        }
        uVar13 = uVar13 << 1;
        iVar14 = iVar14 + -1;
        iVar12 = iVar4;
      } while (iVar14 != 0);
      local_40 = pbVar10;
    } while (pbVar10 != (byte *)((int)puVar3 + 0x16) + uVar2);
  }
  uVar6 = FUN_080168a8();
  uVar9 = 1;
  puVar3[3] = uVar6;
LAB_080121c0:
  uVar6 = FUN_08014958(DAT_080121ec);
  FUN_08010e84(uVar6,uVar1,uVar9);
  return;
}


// 080121f4

void FUN_080121f4(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar2 = FUN_080106fc(*param_1,DAT_08012228,0x2c);
  FUN_08015c04(&local_18,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  uVar1 = DAT_0801222c;
  *(undefined4 *)(iVar2 + 0x24) = local_18;
  *(undefined4 *)(iVar2 + 0x28) = uStack_14;
  *(undefined4 *)(iVar2 + 4) = uVar1;
  return;
}


// 08012230

undefined4 FUN_08012230(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 8);
  uVar2 = FUN_08015c54(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  if ((uVar4 & 1) != uVar2) {
    *(int *)(param_1 + 0x1c) = iVar5;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  iVar3 = FUN_080168a0(*(undefined4 *)(param_1 + 0x14),iVar5);
  uVar1 = DAT_08012290;
  if (iVar3 == 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc);
    return 1;
  }
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + iVar5;
  FUN_08012648(uVar1);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc);
  return 1;
}


// 080122c4

void FUN_080122c4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_11;
  
  iVar3 = FUN_08012658(DAT_08012338);
  uVar2 = DAT_08012340;
  uVar1 = DAT_0801233c;
  if (iVar3 != 0) {
    local_11 = 0xff;
    while (iVar3 = FUN_08010754(&local_11,uVar1), iVar3 != 0) {
      while ((int)((uint)*(byte *)(iVar3 + 0x20) << 0x1f) < 0) {
        FUN_08016814();
        uVar5 = *(undefined4 *)(iVar3 + 8);
        uVar6 = *(undefined4 *)(iVar3 + 0x18);
        *(byte *)(iVar3 + 0x20) = *(byte *)(iVar3 + 0x20) & 0xfe;
        uVar7 = *(undefined4 *)(iVar3 + 0x1c);
        FUN_08016818();
        uVar4 = FUN_08014958(uVar2);
        FUN_08010e84(uVar4,local_11,uVar5,uVar6,uVar7);
        iVar3 = FUN_08010754(&local_11,uVar1);
        if (iVar3 == 0) {
          return;
        }
      }
    }
  }
  return;
}


// 08012424

void FUN_08012424(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_080106bc(*param_1,PTR_LAB_08012344_1_08012498);
  iVar2 = FUN_080105cc();
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 4);
  *(short *)(iVar2 + 8) = (short)*(undefined4 *)(param_1 + 8);
  FUN_08016814();
  iVar3 = FUN_08010610(iVar2,iVar1 + 0x18);
  FUN_08016818();
  if (iVar3 == 0) {
    return;
  }
  FUN_08012530(iVar1);
  if ((*(undefined **)(iVar1 + 4) == PTR_LAB_08012408_1_0801249c) &&
     (iVar3 = FUN_080168a0(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar2 + 4)),
     uVar4 = DAT_080124a8, iVar3 != 0)) {
    *DAT_080124a4 = 0x19;
    FUN_080144f4(uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  uVar4 = *(undefined4 *)(iVar2 + 4);
  *(undefined **)(iVar1 + 4) = PTR_LAB_08012380_1_080124a0;
  *(undefined4 *)(iVar1 + 8) = uVar4;
  FUN_08012748(iVar1,0x2d);
  return;
}


// 080124ac

void FUN_080124ac(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_11;
  
  uVar2 = DAT_080124e8;
  uVar1 = DAT_080124e4;
  local_11 = 0xff;
  while (iVar3 = FUN_08010754(&local_11,uVar1), iVar3 != 0) {
    FUN_08015e30(*(undefined4 *)(iVar3 + 0xc),*(undefined2 *)(iVar3 + 0x14));
    *(undefined4 *)(iVar3 + 4) = uVar2;
    FUN_08010638(iVar3 + 0x18);
  }
  return;
}


// 08012530

void FUN_08012530(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_0801681c();
  puVar2 = DAT_0801257c;
  piVar1 = DAT_08012574;
  puVar3 = (undefined4 *)*DAT_08012574;
  if ((undefined4 *)*DAT_08012574 == param_1) {
    DAT_0801257c[2] = param_1[2];
    *puVar2 = *param_1;
    *piVar1 = (int)puVar2;
  }
  else {
    do {
      puVar2 = puVar3;
      puVar3 = (undefined4 *)*puVar2;
      if (puVar3 == (undefined4 *)0x0) goto LAB_0801254e;
    } while (puVar3 != param_1);
    *puVar2 = *param_1;
  }
LAB_0801254e:
  if ((undefined4 *)piVar1[1] == param_1) {
    piVar1[1] = DAT_08012578;
  }
  FUN_08016824();
  return;
}


// 08012580

int FUN_08012580(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  
  piVar1 = DAT_080125f8;
  piVar8 = (int *)*DAT_080125f8;
  if ((code *)piVar8[1] == (code *)0x0) {
    iVar2 = FUN_08013914();
    iVar7 = piVar8[2];
    iVar4 = *piVar8;
  }
  else {
    iVar2 = (*(code *)piVar8[1])(piVar8);
    iVar7 = piVar8[2];
    iVar4 = *piVar8;
  }
  if (iVar2 == 0) {
    iVar7 = *(int *)(iVar4 + 8);
    *piVar1 = iVar4;
    if ((int *)piVar1[1] == piVar8) {
      piVar1[1] = iVar4;
    }
  }
  else {
    iVar4 = FUN_080168a0(iVar7,*(undefined4 *)(iVar4 + 8));
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)piVar1[1];
      uVar3 = puVar5[2];
      iVar2 = *(int *)(*piVar8 + 8);
      *piVar1 = *piVar8;
      iVar4 = FUN_080168a0(iVar7,uVar3);
      if (iVar4 != 0) {
        puVar5 = (undefined4 *)*piVar1;
      }
      do {
        puVar6 = puVar5;
        puVar5 = (undefined4 *)*puVar6;
        iVar4 = FUN_080168a0(iVar7,puVar5[2]);
      } while (iVar4 == 0);
      *piVar8 = (int)puVar5;
      piVar1[1] = (int)piVar8;
      *puVar6 = piVar8;
      return iVar2;
    }
  }
  return iVar7;
}


// 080125fc

void FUN_080125fc(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  uVar4 = DAT_08012628;
  puVar3 = DAT_08012624;
  piVar2 = DAT_08012620;
  puVar1 = DAT_0801261c;
  DAT_08012620[2] = DAT_0801261c[2];
  *puVar3 = piVar2;
  puVar3[1] = puVar1;
  *piVar2 = (int)puVar1;
  *puVar1 = uVar4;
  FUN_080168b4();
  return;
}


// 0801262c

void FUN_0801262c(void)

{
  *(undefined1 *)(DAT_08012634 + 8) = 0;
  return;
}


// 08012638

uint FUN_08012638(void)

{
  return (~(uint)*(byte *)(DAT_08012644 + 8) & 0xff) >> 7;
}


// 08012648

void FUN_08012648(undefined1 *param_1)

{
  *(undefined1 *)(DAT_08012654 + 8) = 0;
  *param_1 = 1;
  return;
}


// 08012658

bool FUN_08012658(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    *param_1 = '\0';
  }
  return cVar1 != '\0';
}


// 08012668

bool FUN_08012668(void)

{
  return *(char *)(DAT_08012674 + 9) != '\0';
}


// 08012678

void FUN_08012678(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08014958(DAT_08012694);
  FUN_08010e84(uVar1,*DAT_080126a0,*DAT_0801269c,*DAT_08012698);
  return;
}


// 080126a4

void FUN_080126a4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08014958(DAT_080126d0);
  FUN_08010e84(uVar1,*DAT_080126dc,*DAT_080126d8,*DAT_080126d4);
  uVar1 = FUN_08014958(DAT_080126e0);
  FUN_08010e84(uVar1,*(undefined1 *)(DAT_080126e4 + 10));
  return;
}


// 080126e8

void FUN_080126e8(undefined4 param_1)

{
  FUN_08016814();
  FUN_0801027c(uRam080126fc,param_1);
  FUN_080144f4(DAT_0801270c);
                    /* WARNING: Subroutine does not return */
  FUN_080126e8();
}


// 08012734

void FUN_08012734(void)

{
  if (*(char *)(DAT_08012744 + 9) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  return;
}


// 08012748

void FUN_08012748(undefined4 *param_1,undefined1 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  piVar7 = DAT_080127e4;
  iVar8 = param_1[2];
  uVar3 = FUN_0801681c();
  piVar6 = (int *)*piVar7;
  iVar4 = FUN_080168a0(iVar8,piVar6[2]);
  if (iVar4 == 0) {
    do {
      piVar7 = piVar6;
      piVar6 = (int *)*piVar7;
      iVar4 = FUN_080168a0(iVar8,piVar6[2]);
    } while (iVar4 == 0);
    *param_1 = piVar6;
    *piVar7 = (int)param_1;
  }
  else {
    uVar5 = FUN_080168a8();
    iVar4 = FUN_080168a0(iVar8,uVar5);
    uVar2 = DAT_080127d8;
    if (iVar4 != 0) {
      *DAT_080127d4 = iVar8;
      *DAT_080127dc = uVar5;
      *DAT_080127e0 = param_2;
      FUN_080144f4(uVar2);
      if (*(char *)((int)piVar7 + 9) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_080126e8();
      }
    }
    piVar1 = DAT_080127d0;
    *piVar7 = (int)DAT_080127d0;
    if (piVar6 == piVar1) {
      piVar6 = (int *)*piVar6;
    }
    *param_1 = piVar6;
    piVar1[2] = iVar8;
    *piVar1 = (int)param_1;
    FUN_080168b4();
  }
  FUN_08016824(uVar3);
  return;
}


// 08012938

void FUN_08012938(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_080106bc(*param_1,DAT_0801297c);
  FUN_08012530();
  *(undefined1 *)(iVar1 + 0x14) = 0;
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  *(int *)(iVar1 + 0xc) = *(int *)(param_1 + 4);
  FUN_0801580c(iVar1 + 0x16);
  FUN_08016814();
  iVar2 = FUN_080168a8();
  *(int *)(iVar1 + 8) = iVar2 + *(int *)(iVar1 + 0xc);
  FUN_08012748(iVar1,0);
  FUN_08016818();
  return;
}


// 08012980

void FUN_08012980(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 local_1c;
  
  iVar1 = FUN_080106bc(*param_1,DAT_080129d0);
  local_1c = 0xb9;
  iVar2 = FUN_080168a8();
  FUN_08013518(*(undefined4 *)(iVar1 + 0x10),1,2,&local_1c);
  iVar3 = FUN_080168a8();
  if ((local_1c._1_1_ & 0xffffff7f) < 0x21) {
    FUN_08015848(iVar1 + 0x16,*param_1,iVar2,iVar3 - iVar2,(local_1c._1_1_ & 0xffffff7f) * 5);
  }
  return;
}


// 080129d4

void FUN_080129d4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  byte bVar10;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  byte local_24;
  
  iVar5 = FUN_08012658(DAT_08012b28);
  puVar3 = DAT_08012b30;
  uVar2 = DAT_08012b2c;
  uVar1 = DAT_08012b28;
  if (iVar5 == 0) {
    return;
  }
  local_2d = 0xff;
  do {
    while( true ) {
      do {
        iVar5 = FUN_08010754(&local_2d,uVar2);
        uVar4 = local_2d;
        if (iVar5 == 0) {
          return;
        }
      } while (-1 < (int)((uint)*(byte *)(iVar5 + 0x14) << 0x1f));
      local_2c = *puVar3;
      local_28 = puVar3[1];
      local_24 = (byte)puVar3[2];
      FUN_08013518(*(undefined4 *)(iVar5 + 0x10),1,9,&local_2c);
      uVar6 = (uint)*(byte *)(iVar5 + 0x1a);
      iVar9 = uVar6 + 0x1b + iVar5;
      if (((local_2c & 0xf00000) == 0) || ((local_2c._2_1_ & 0xf0) == 0xf0)) break;
LAB_08012a42:
      *(undefined1 *)(iVar9 + 4) = 0xff;
      *(undefined1 *)(iVar9 + 3) = 0xff;
      *(undefined1 *)(iVar9 + 2) = 0xff;
      *(undefined1 *)(iVar9 + 1) = 0xff;
      *(undefined1 *)(iVar5 + uVar6 + 0x1b) = 0xff;
      bVar7 = *(char *)(iVar5 + 0x1a) + 5;
      *(byte *)(iVar5 + 0x1a) = bVar7;
      if (0x2e < bVar7) {
        FUN_08015818(iVar5 + 0x16,uVar4);
      }
LAB_08012a66:
      *(byte *)(iVar5 + 0x14) = *(byte *)(iVar5 + 0x14) & 0xfe;
      FUN_08016814();
      iVar9 = FUN_080168a8();
      *(int *)(iVar5 + 8) = iVar9 + *(int *)(iVar5 + 0xc);
      FUN_08012748(iVar5,0);
      FUN_08016818();
    }
    if (((local_28 & 0xf0) != 0) && ((local_28 & 0xf0) != 0xf0)) goto LAB_08012a42;
    if ((((local_28 & 0xf00000) != 0) && ((local_28._2_1_ & 0xf0) != 0xf0)) ||
       (local_28._3_1_ != -0x70)) goto LAB_08012a42;
    bVar7 = local_24 & 0x7f;
    bVar10 = local_24 & 0x7f;
    if (0x20 < bVar10) goto LAB_08012a42;
    *(undefined1 *)(uVar6 + iVar5 + 0x1b) = local_2c._1_1_;
    *(undefined1 *)(iVar9 + 1) = local_2c._3_1_;
    *(undefined1 *)(iVar9 + 2) = local_28._1_1_;
    *(byte *)(iVar9 + 3) = local_2c._2_1_ & 0x1f | local_28._2_1_ << 5;
    *(byte *)(iVar9 + 4) = (local_28._2_1_ & 0x18) << 2 | (byte)local_28 & 0x1f;
    bVar8 = *(char *)(iVar5 + 0x1a) + 5;
    *(byte *)(iVar5 + 0x1a) = bVar8;
    if (0x2e < bVar8) {
      FUN_08015818(iVar5 + 0x16,uVar4);
    }
    if (bVar10 < 0x1f) {
      if (1 < bVar7) goto LAB_08012b04;
      goto LAB_08012a66;
    }
    *(short *)(iVar5 + 0x18) = *(short *)(iVar5 + 0x18) + 1;
LAB_08012b04:
    FUN_08012648(uVar1);
  } while( true );
}


// 08012bc4

void FUN_08012bc4(int param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x16);
  uVar2 = param_3 - param_2;
  if (uVar3 != 0) {
    uVar2 = uVar2 + (1 << (uVar3 - 1 & 0xff)) >> uVar3;
  }
  if (uVar2 < 0xff) {
    bVar1 = *(byte *)(param_1 + 0x1c);
    iVar4 = param_1 + (uint)bVar1;
    *(char *)(iVar4 + 0x1d) = (char)uVar2;
    *(char *)(iVar4 + 0x1e) = (char)param_4;
    *(char *)(iVar4 + 0x1f) = (char)((uint)param_4 >> 8);
    *(byte *)(param_1 + 0x1c) = bVar1 + 3;
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x1c);
  iVar4 = param_1 + (uint)bVar1;
  *(undefined1 *)(iVar4 + 0x1e) = 1;
  *(undefined1 *)(iVar4 + 0x1d) = 0xff;
  *(undefined1 *)(iVar4 + 0x1f) = 0;
  *(byte *)(param_1 + 0x1c) = bVar1 + 3;
  return;
}


// 08012c50

void FUN_08012c50(undefined1 *param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 uVar10;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar1 = *param_1;
  iVar3 = FUN_080106bc(uVar1,PTR_LAB_08012b34_1_08012d24);
  uVar10 = param_1[4];
  uVar4 = FUN_08010ca0(*(undefined4 *)(param_1 + 8));
  cVar2 = *(char *)(iVar3 + 0x15);
  if (cVar2 == '\x02') {
    FUN_08013508(&local_28,*(undefined4 *)(iVar3 + 0x10));
    FUN_08015b84(local_28,uStack_24,0);
    iVar6 = FUN_080168a8();
    iVar5 = FUN_08016898(1);
    while( true ) {
      uVar8 = FUN_080168a8();
      iVar9 = FUN_080168a0(iVar6 + iVar5,uVar8);
      if (iVar9 != 0) break;
      FUN_08016834();
    }
    FUN_08016814();
    FUN_08015b84(local_28,uStack_24,1);
    iVar6 = FUN_080168a8();
    FUN_08016818();
    FUN_08013518(*(undefined4 *)(iVar3 + 0x10),1,uVar10,uVar4);
  }
  else {
    iVar5 = FUN_080168a8();
    FUN_08013518(*(undefined4 *)(iVar3 + 0x10),1,uVar10,uVar4);
    iVar6 = FUN_080168a8();
    uVar7 = FUN_08016898(0x32);
    if (uVar7 < (uint)(iVar6 - iVar5)) {
      uVar10 = 0;
    }
    if (cVar2 != '\x01') {
      iVar6 = iVar5;
    }
  }
  uVar8 = FUN_08014958(PTR_s_spi_angle_transfer_response_oid__08012d28);
  FUN_08010e84(uVar8,uVar1,iVar6,uVar10,uVar4);
  return;
}


// 08012d2c

void FUN_08012d2c(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined1 local_35;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  
  iVar3 = FUN_08012658(DAT_08013044);
  uVar2 = DAT_08013048;
  if (iVar3 != 0) {
    local_35 = 0xff;
LAB_08012d46:
    iVar3 = FUN_08010754(&local_35,uVar2);
    if (iVar3 != 0) {
      while ((int)((uint)*(byte *)(iVar3 + 0x14) << 0x1d) < 0) {
        FUN_08016814();
        bVar8 = *(byte *)(iVar3 + 0x17);
        *(undefined1 *)(iVar3 + 0x14) = 0;
        *(undefined1 *)(iVar3 + 0x17) = 0;
        iVar13 = *(int *)(iVar3 + 8);
        FUN_08016818();
        iVar12 = *(int *)(iVar3 + 0xc);
        iVar10 = iVar13 - iVar12;
        for (uVar14 = (uint)bVar8; uVar14 != 0; uVar14 = uVar14 - 1) {
          while( true ) {
            iVar6 = iVar3 + (uint)*(byte *)(iVar3 + 0x1c);
            uVar11 = *(byte *)(iVar3 + 0x1c) + 3;
            *(undefined1 *)(iVar6 + 0x1d) = 0xff;
            *(undefined1 *)(iVar6 + 0x1e) = 0;
            *(undefined1 *)(iVar6 + 0x1f) = 0;
            *(char *)(iVar3 + 0x1c) = (char)uVar11;
            if ((uVar11 & 0xff) < 0x31) break;
            FUN_08015818(iVar3 + 0x18,local_35);
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_08012db2;
          }
        }
LAB_08012db2:
        cVar1 = *(char *)(iVar3 + 0x15);
        if (cVar1 == '\0') {
          local_2c = CONCAT22(local_2c._2_2_,0x32);
          iVar12 = FUN_080168a8();
          FUN_08013518(*(undefined4 *)(iVar3 + 0x10),1,2,&local_2c);
          iVar13 = FUN_080168a8();
          uVar14 = FUN_08016898(0x32);
          if (uVar14 < (uint)(iVar13 - iVar12)) {
            iVar10 = iVar3 + (uint)*(byte *)(iVar3 + 0x1c);
            uVar11 = *(byte *)(iVar3 + 0x1c) + 3;
            *(undefined1 *)(iVar10 + 0x1d) = 0xff;
            uVar14 = uVar11 & 0xff;
            *(undefined1 *)(iVar10 + 0x1f) = 0;
            *(undefined1 *)(iVar10 + 0x1e) = 2;
            *(char *)(iVar3 + 0x1c) = (char)uVar11;
          }
          else if ((char)(byte)local_2c < '\0') {
LAB_08012e42:
            iVar10 = iVar3 + (uint)*(byte *)(iVar3 + 0x1c);
            uVar11 = *(byte *)(iVar3 + 0x1c) + 3;
            *(undefined1 *)(iVar10 + 0x1d) = 0xff;
            uVar14 = uVar11 & 0xff;
            *(undefined1 *)(iVar10 + 0x1f) = 0;
            *(undefined1 *)(iVar10 + 0x1e) = 3;
            *(char *)(iVar3 + 0x1c) = (char)uVar11;
          }
          else {
            FUN_08012bc4(iVar3,iVar10,iVar12,(local_2c & 0xff) << 9 | (local_2c >> 8 & 0xff) << 1);
            uVar14 = (uint)*(byte *)(iVar3 + 0x1c);
          }
        }
        else if (cVar1 == '\x01') {
          local_2c = CONCAT22(local_2c._2_2_,0xfe7f);
          iVar12 = FUN_080168a8();
          FUN_08013518(*(undefined4 *)(iVar3 + 0x10),0,2,&local_2c);
          iVar13 = FUN_080168a8();
          uVar14 = FUN_08016898(0x32);
          if (uVar14 < (uint)(iVar13 - iVar12)) {
            iVar10 = iVar3 + (uint)*(byte *)(iVar3 + 0x1c);
            uVar11 = *(byte *)(iVar3 + 0x1c) + 3;
            *(undefined1 *)(iVar10 + 0x1d) = 0xff;
            uVar14 = uVar11 & 0xff;
            *(undefined1 *)(iVar10 + 0x1f) = 0;
            *(undefined1 *)(iVar10 + 0x1e) = 2;
            *(char *)(iVar3 + 0x1c) = (char)uVar11;
          }
          else {
            local_2c = CONCAT22(local_2c._2_2_,0xc0);
            FUN_08013518(*(undefined4 *)(iVar3 + 0x10),1,2,&local_2c);
            bVar8 = (byte)local_2c ^ local_2c._1_1_ ^ ((byte)local_2c ^ local_2c._1_1_) >> 4;
            bVar8 = bVar8 ^ bVar8 >> 2;
            bVar8 = bVar8 ^ bVar8 >> 1;
            if ((bVar8 & 1) == 0) {
              if ((int)(local_2c << 0x19) < 0) {
                iVar10 = iVar3 + (uint)*(byte *)(iVar3 + 0x1c);
                uVar11 = *(byte *)(iVar3 + 0x1c) + 3;
                *(byte *)(iVar10 + 0x1f) = bVar8 & 1;
                uVar14 = uVar11 & 0xff;
                *(undefined1 *)(iVar10 + 0x1d) = 0xff;
                *(undefined1 *)(iVar10 + 0x1e) = 5;
                *(char *)(iVar3 + 0x1c) = (char)uVar11;
              }
              else {
                FUN_08012bc4(iVar3,iVar10,iVar13,(uint)local_2c._1_1_ << 2 | (local_2c & 0xff) << 10
                            );
                uVar14 = (uint)*(byte *)(iVar3 + 0x1c);
              }
            }
            else {
              iVar10 = iVar3 + (uint)*(byte *)(iVar3 + 0x1c);
              uVar11 = *(byte *)(iVar3 + 0x1c) + 3;
              *(undefined1 *)(iVar10 + 0x1d) = 0xff;
              uVar14 = uVar11 & 0xff;
              *(undefined1 *)(iVar10 + 0x1f) = 0;
              *(undefined1 *)(iVar10 + 0x1e) = 3;
              *(char *)(iVar3 + 0x1c) = (char)uVar11;
            }
          }
        }
        else if (cVar1 == '\x02') {
          FUN_08013508(&local_34,*(undefined4 *)(iVar3 + 0x10));
          FUN_08015b84(local_34,uStack_30,0);
          iVar10 = FUN_080168a8();
          iVar6 = FUN_08016898(1);
          while( true ) {
            uVar4 = FUN_080168a8();
            iVar5 = FUN_080168a0(iVar10 + iVar6,uVar4);
            if (iVar5 != 0) break;
            FUN_08016834();
          }
          FUN_08016814();
          FUN_08015b84(local_34,uStack_30,1);
          iVar10 = FUN_080168a8();
          FUN_08016818();
          local_2c = 0x2384;
          local_24 = 0;
          local_28 = 0;
          FUN_08013518(*(undefined4 *)(iVar3 + 0x10),1,10,&local_2c);
          pbVar7 = (byte *)((int)&local_2c + 1);
          bVar8 = 5;
          do {
            pbVar7 = pbVar7 + 1;
            iVar6 = 8;
            bVar8 = bVar8 ^ *pbVar7;
            do {
              bVar9 = bVar8 << 1;
              bVar15 = (bVar8 & 0x80) == 0;
              if (bVar15) {
                bVar8 = bVar8 << 1;
              }
              bVar9 = bVar9 ^ 0x1d;
              if (bVar15) {
                bVar9 = bVar8;
              }
              bVar8 = bVar9;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          } while ((byte *)((int)&local_28 + 3) != pbVar7);
          if (local_24._1_1_ != (byte)~bVar8) goto LAB_08012e42;
          if ((int)((uint)(byte)local_24 << 0x1b) < 0) {
            if (local_2c._2_1_ < '\0') {
              uVar14 = FUN_08016898(0x555);
              if (uVar14 < (uint)(iVar10 + (iVar12 - iVar13))) {
                iVar10 = iVar3 + (uint)*(byte *)(iVar3 + 0x1c);
                uVar11 = *(byte *)(iVar3 + 0x1c) + 3;
                *(undefined1 *)(iVar10 + 0x1d) = 0xff;
                uVar14 = uVar11 & 0xff;
                *(undefined1 *)(iVar10 + 0x1f) = 0;
                *(undefined1 *)(iVar10 + 0x1e) = 1;
                *(char *)(iVar3 + 0x1c) = (char)uVar11;
              }
              else {
                iVar12 = (local_2c >> 0x18) << 1;
                iVar10 = iVar3 + (uint)*(byte *)(iVar3 + 0x1c);
                uVar11 = *(byte *)(iVar3 + 0x1c) + 3;
                *(char *)(iVar10 + 0x1e) = (char)iVar12;
                uVar14 = uVar11 & 0xff;
                *(char *)(iVar10 + 0x1d) = (char)((local_28 >> 0x10 & 0x7f) >> 1);
                *(byte *)(iVar10 + 0x1f) =
                     (byte)((uint)iVar12 >> 8) | (byte)(((local_2c >> 0x10 & 0xff) << 9) >> 8);
                *(char *)(iVar3 + 0x1c) = (char)uVar11;
              }
            }
            else {
              iVar10 = iVar3 + (uint)*(byte *)(iVar3 + 0x1c);
              uVar11 = *(byte *)(iVar3 + 0x1c) + 3;
              *(undefined1 *)(iVar10 + 0x1d) = 0xff;
              uVar14 = uVar11 & 0xff;
              *(undefined1 *)(iVar10 + 0x1f) = 0;
              *(undefined1 *)(iVar10 + 0x1e) = 4;
              *(char *)(iVar3 + 0x1c) = (char)uVar11;
            }
          }
          else {
            iVar10 = iVar3 + (uint)*(byte *)(iVar3 + 0x1c);
            uVar11 = *(byte *)(iVar3 + 0x1c) + 3;
            *(undefined1 *)(iVar10 + 0x1d) = 0xff;
            uVar14 = uVar11 & 0xff;
            *(undefined1 *)(iVar10 + 0x1f) = 0;
            *(undefined1 *)(iVar10 + 0x1e) = 5;
            *(char *)(iVar3 + 0x1c) = (char)uVar11;
          }
        }
        else {
          uVar14 = (uint)*(byte *)(iVar3 + 0x1c);
        }
        if (uVar14 < 0x31) break;
        FUN_08015818(iVar3 + 0x18,local_35);
        iVar3 = FUN_08010754(&local_35,uVar2);
        if (iVar3 == 0) {
          return;
        }
      }
      goto LAB_08012d46;
    }
  }
  return;
}


// 080130bc

void FUN_080130bc(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_080106bc(*param_1,DAT_08013104);
  FUN_08012530();
  *(undefined1 *)(iVar1 + 0x18) = 0;
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  *(int *)(iVar1 + 0xc) = *(int *)(param_1 + 4);
  FUN_0801580c(iVar1 + 0x1a);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  FUN_08016814();
  iVar2 = FUN_080168a8();
  *(int *)(iVar1 + 8) = iVar2 + *(int *)(iVar1 + 0xc);
  FUN_08012748(iVar1,0);
  FUN_08016818();
  return;
}


// 08013108

void FUN_08013108(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1c [4];
  undefined1 local_18 [3];
  byte local_15;
  byte local_14;
  byte local_13;
  
  iVar1 = FUN_080106bc(*param_1,DAT_08013190);
  local_1c[0] = 0x3a;
  FUN_08016060(**(undefined4 **)(iVar1 + 0x10),(*(undefined4 **)(iVar1 + 0x10))[1],1,local_1c,1,
               &local_15);
  if ((int)((uint)local_15 << 0x1b) < 0) {
    *(short *)(iVar1 + 0x1c) = *(short *)(iVar1 + 0x1c) + 1;
  }
  local_18[0] = 0x72;
  iVar2 = FUN_080168a8();
  FUN_08016060(**(undefined4 **)(iVar1 + 0x10),(*(undefined4 **)(iVar1 + 0x10))[1],1,local_18,2,
               &local_14);
  iVar3 = FUN_080168a8();
  FUN_08015848(iVar1 + 0x1a,*param_1,iVar2,iVar3 - iVar2,(uint)local_13 | (local_14 & 0x1f) << 8);
  return;
}


// 08013194

void FUN_08013194(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  undefined1 local_20 [3];
  undefined1 local_1d;
  byte local_1c;
  byte local_1b;
  
  iVar4 = FUN_08012658(DAT_08013274);
  uVar2 = DAT_08013278;
  uVar1 = DAT_08013274;
  if (iVar4 == 0) {
    return;
  }
  local_1d = 0xff;
  do {
    while( true ) {
      do {
        iVar4 = FUN_08010754(&local_1d,uVar2);
        uVar3 = local_1d;
        if (iVar4 == 0) {
          return;
        }
      } while (-1 < (int)((uint)*(byte *)(iVar4 + 0x18) << 0x1f));
      if (0x2f < *(ushort *)(iVar4 + 0x16)) break;
      local_20[0] = 0x72;
      FUN_08016060(**(undefined4 **)(iVar4 + 0x10),(*(undefined4 **)(iVar4 + 0x10))[1],1,local_20,2,
                   &local_1c);
      uVar6 = (ushort)local_1b | (local_1c & 0x1f) << 8;
      if (*(ushort *)(iVar4 + 0x14) < uVar6) {
        *(ushort *)(iVar4 + 0x14) = uVar6;
      }
      *(ushort *)(iVar4 + 0x16) = uVar6;
      if (0x2f < uVar6) break;
LAB_08013250:
      *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) & 0xfe;
      FUN_08016814();
      iVar5 = FUN_080168a8();
      *(int *)(iVar4 + 8) = iVar5 + *(int *)(iVar4 + 0xc);
      FUN_08012748(iVar4,0);
      FUN_08016818();
    }
    local_1c = 0x74;
    FUN_08016060(**(undefined4 **)(iVar4 + 0x10),(*(undefined4 **)(iVar4 + 0x10))[1],1,&local_1c,
                 0x30,iVar4 + 0x1f);
    *(undefined1 *)(iVar4 + 0x1e) = 0x30;
    *(short *)(iVar4 + 0x16) = *(short *)(iVar4 + 0x16) + -0x30;
    FUN_08015818(iVar4 + 0x1a,uVar3);
    if (*(ushort *)(iVar4 + 0x16) < 0x30) goto LAB_08013250;
    FUN_08012648(uVar1);
  } while( true );
}


// 0801327c

void FUN_0801327c(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar2 = DAT_08013308;
  bVar1 = param_1[0x10];
  if (3 < bVar1) {
    *DAT_08013304 = 0x13;
    FUN_080144f4(uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  piVar3 = (int *)FUN_0801346c(*param_1);
  puVar4 = (undefined4 *)FUN_08010574(0x1c);
  FUN_08015c04(&local_20,*(undefined4 *)(param_1 + 4),1);
  *puVar4 = local_20;
  puVar4[1] = uStack_1c;
  FUN_08015aec(&local_28,*(undefined4 *)(param_1 + 8),0);
  puVar4[2] = local_28;
  puVar4[3] = uStack_24;
  FUN_08015aec(&local_28,*(undefined4 *)(param_1 + 0xc),0);
  puVar4[4] = local_28;
  puVar4[5] = uStack_24;
  *(byte *)(puVar4 + 6) = bVar1;
  uVar2 = DAT_080134fc;
  if ((*(byte *)(piVar3 + 4) & 6) != 0) {
    *DAT_080134f8 = 0x12;
    FUN_080144f4(uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  *(byte *)(piVar3 + 4) = *(byte *)(piVar3 + 4) | 2;
  *piVar3 = (int)puVar4;
  return;
}


// 0801330c

void FUN_0801330c(int param_1)

{
  FUN_08015b84(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
               *(byte *)(param_1 + 0x18) & 2);
  return;
}


// 08013320

void FUN_08013320(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  
  if (param_3 != 0) {
    pbVar6 = (byte *)(param_4 + -1);
    puVar5 = param_1 + 4;
    do {
      pbVar6 = pbVar6 + 1;
      bVar4 = *pbVar6;
      iVar7 = 8;
      uVar3 = 0;
      do {
        while( true ) {
          if ((int)((uint)*(byte *)(param_1 + 6) << 0x1f) < 0) break;
          FUN_08015b84(param_1[2],param_1[3]);
          FUN_08015b60(*puVar5,param_1[5]);
          uVar1 = FUN_08015c54(*param_1,param_1[1]);
          FUN_08015b60(*puVar5,param_1[5]);
          iVar7 = iVar7 + -1;
          bVar4 = bVar4 << 1;
          uVar3 = (uVar3 & 0x7f) << 1 | uVar1 & 0xff;
          bVar2 = (byte)uVar3;
          if (iVar7 == 0) goto LAB_080133c0;
        }
        FUN_08015b60(*puVar5,param_1[5],bVar4 & 0x80);
        FUN_08015b84(param_1[2],param_1[3],bVar4 & 0x80);
        FUN_08015b60(*puVar5,param_1[5]);
        uVar1 = FUN_08015c54(*param_1,param_1[1]);
        iVar7 = iVar7 + -1;
        bVar4 = bVar4 << 1;
        uVar3 = (uVar3 & 0x7f) << 1 | uVar1 & 0xff;
        bVar2 = (byte)uVar3;
      } while (iVar7 != 0);
LAB_080133c0:
      if (param_2 != 0) {
        *pbVar6 = bVar2;
      }
    } while ((byte *)(param_4 + (param_3 - 1U & 0xff)) != pbVar6);
  }
  return;
}


// 080133d4

void FUN_080133d4(undefined1 *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_080106fc(*param_1,DAT_08013418,0x14);
  iVar3 = *(int *)(param_1 + 8);
  FUN_08015aec(&local_18,*(undefined4 *)(param_1 + 4),iVar3 == 0);
  *(undefined4 *)(iVar1 + 8) = local_18;
  *(undefined4 *)(iVar1 + 0xc) = uStack_14;
  if (iVar3 == 0) {
    bVar2 = 1;
  }
  else {
    bVar2 = 9;
  }
  *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) | bVar2;
  return;
}


// 0801346c

void FUN_0801346c(undefined4 param_1)

{
  FUN_080106bc(param_1,DAT_08013474);
  return;
}


// 08013478

void FUN_08013478(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  puVar2 = (undefined4 *)FUN_080106bc(*param_1,DAT_080134c8);
  uVar1 = DAT_080134d0;
  if ((3 < (byte)param_1[8]) || ((*(byte *)(puVar2 + 4) & 6) != 0)) {
    *DAT_080134cc = 0x11;
    FUN_080144f4(uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  FUN_08016124(&local_18,*(undefined4 *)(param_1 + 4),param_1[8],*(undefined4 *)(param_1 + 0xc));
  *puVar2 = local_18;
  puVar2[1] = uStack_14;
  *(byte *)(puVar2 + 4) = *(byte *)(puVar2 + 4) | 4;
  return;
}


// 08013500

byte FUN_08013500(int param_1)

{
  return *(byte *)(param_1 + 0x10) & 1;
}


// 08013508

undefined4 * FUN_08013508(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *param_1 = *(undefined4 *)(param_2 + 8);
  param_1[1] = uVar1;
  return param_1;
}


// 08013518

void FUN_08013518(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  uVar2 = (uint)bVar1;
  if ((bVar1 & 6) == 0) {
    return;
  }
  if ((int)(uVar2 << 0x1e) < 0) {
    FUN_0801330c(*param_1);
    if (-1 < (int)(uVar2 << 0x1f)) {
      FUN_08013320(*param_1,param_2,param_3,param_4);
      return;
    }
    FUN_08015b84(param_1[2],param_1[3],(uVar2 & 0xf) >> 3);
    FUN_08013320(*param_1,param_2,param_3,param_4);
  }
  else {
    FUN_080161c8(*param_1,param_1[1]);
    if (-1 < (int)(uVar2 << 0x1f)) {
      FUN_080161ec(*param_1,param_1[1],param_2,param_3,param_4);
      return;
    }
    FUN_08015b84(param_1[2],param_1[3],(uVar2 & 0xf) >> 3);
    FUN_080161ec(*param_1,param_1[1],param_2,param_3,param_4);
  }
  FUN_08015b84(param_1[2],param_1[3],(bVar1 >> 3 ^ 1) & 1);
  return;
}


// 08013614

void FUN_08013614(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_080106bc(*param_1,DAT_08013640);
  uVar1 = param_1[4];
  uVar3 = FUN_08010ca0(*(undefined4 *)(param_1 + 8));
  FUN_08013518(uVar2,0,uVar1,uVar3);
  return;
}


// 08013644

void FUN_08013644(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_9;
  
  uVar1 = DAT_080136a0;
  local_9 = 0xff;
  while (iVar3 = FUN_08010754(&local_9,uVar1), uVar2 = DAT_080136a4, iVar3 != 0) {
    if ((int)((uint)*(byte *)(iVar3 + 0x10) << 0x1f) < 0) {
      FUN_08015b84(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),
                   ((*(byte *)(iVar3 + 0x10) ^ 8) & 0xf) >> 3);
    }
  }
  local_9 = 0xff;
  while( true ) {
    puVar4 = (undefined4 *)FUN_08010754(&local_9,uVar2);
    if (puVar4 == (undefined4 *)0x0) break;
    FUN_08013518(*puVar4,0,*(undefined1 *)(puVar4 + 1),(int)puVar4 + 5);
  }
  return;
}


// 080136a8

undefined4 FUN_080136a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = FUN_08010600(param_1 + 0x34);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    return 0;
  }
  iVar3 = FUN_0801062c(param_1 + 0x34);
  sVar2 = *(short *)(iVar3 + 8);
  iVar4 = *(int *)(iVar3 + 4);
  *(short *)(param_1 + 0x10) = sVar2;
  *(int *)(param_1 + 0xc) = sVar2 + iVar4;
  if ((int)((uint)*(byte *)(param_1 + 0x44) << 0x1b) < 0) {
    uVar5 = (uint)*(ushort *)(iVar3 + 10);
    *(uint *)(param_1 + 0x14) = uVar5;
    *(int *)(param_1 + 8) = iVar4 + *(int *)(param_1 + 8);
    bVar1 = *(byte *)(iVar3 + 0xc);
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar3 + 10);
    iVar4 = iVar4 + *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar4;
    *(int *)(param_1 + 8) = iVar4;
    *(uint *)(param_1 + 0x14) = uVar5 << 1;
    bVar1 = *(byte *)(iVar3 + 0xc);
  }
  if ((int)((uint)bVar1 << 0x1f) < 0) {
    iVar4 = uVar5 - *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar4;
    FUN_08015b4c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 (undefined4 *)(param_1 + 0x28),iVar4,param_4);
  }
  else {
    *(uint *)(param_1 + 0x30) = uVar5 + *(int *)(param_1 + 0x30);
  }
  FUN_080105bc(iVar3);
  return 1;
}


// 080137b8

void FUN_080137b8(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = FUN_080106fc(*param_1,DAT_08013888,0x48);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 < 1) {
    *(undefined1 *)(iVar1 + 0x44) = 0;
    FUN_08015aec(&local_20,*(undefined4 *)(param_1 + 4),0);
    *(undefined4 *)(iVar1 + 0x20) = local_20;
    *(undefined4 *)(iVar1 + 0x24) = uStack_1c;
    FUN_08015aec(&local_20,*(undefined4 *)(param_1 + 8),0);
    *(undefined4 *)(iVar1 + 0x28) = local_20;
    *(undefined4 *)(iVar1 + 0x2c) = uStack_1c;
    *(undefined4 *)(iVar1 + 0x30) = 0xc0000000;
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
    FUN_08010640(iVar1 + 0x34,0x10);
    if ((*(int *)(iVar1 + 0x1c) == 0) && (iVar2 != 0)) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) | 0x10;
      return;
    }
  }
  else {
    *(undefined1 *)(iVar1 + 0x44) = 4;
    FUN_08015aec(&local_20,*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(iVar1 + 0x20) = local_20;
    *(undefined4 *)(iVar1 + 0x24) = uStack_1c;
    FUN_08015aec(&local_20,*(undefined4 *)(param_1 + 8),0);
    *(undefined4 *)(iVar1 + 0x28) = local_20;
    *(undefined4 *)(iVar1 + 0x2c) = uStack_1c;
    *(undefined4 *)(iVar1 + 0x30) = 0xc0000000;
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
    FUN_08010640(iVar1 + 0x34,0x10);
  }
  *(undefined4 *)(iVar1 + 4) = DAT_0801388c;
  return;
}


// 08013890

void FUN_08013890(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  FUN_08012530(param_1 + -0x3c);
  *(undefined4 *)(param_1 + -0x34) = 0;
  *(undefined4 *)(param_1 + -0x24) = 0;
  uVar2 = *(uint *)(param_1 + -0x28);
  if (-1 < (int)((uint)*(byte *)(param_1 + 8) << 0x1b)) {
    uVar2 = uVar2 >> 1;
  }
  iVar1 = *(int *)(param_1 + -0xc) - uVar2;
  if (0 < iVar1) {
    iVar1 = -iVar1;
  }
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0x14 | 8;
  *(int *)(param_1 + -0xc) = iVar1;
  *(undefined4 *)(param_1 + -0x28) = 0;
  FUN_08015b84(*(undefined4 *)(param_1 + -0x14),*(undefined4 *)(param_1 + -0x10),0,
               (undefined4 *)(param_1 + -0x14),param_4);
  iVar1 = (uint)*(byte *)(param_1 + 8) << 0x1b;
  if (-1 < iVar1) {
    FUN_08015b84(*(undefined4 *)(param_1 + -0x1c),*(undefined4 *)(param_1 + -0x18),
                 *(byte *)(param_1 + 8) & 4,iVar1,param_4);
  }
  while (iVar1 = FUN_08010600(param_1 + -8), iVar1 == 0) {
    FUN_0801062c(param_1 + -8);
    FUN_080105bc();
  }
  return;
}


// 08013914

undefined4 FUN_08013914(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_08015b4c(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  iVar2 = *(int *)(param_1 + 0x14) + -1;
  if (iVar2 == 0) {
    uVar1 = FUN_080136a8(param_1);
    return uVar1;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = (int)*(short *)(param_1 + 0x10) + *(int *)(param_1 + 0xc);
  return 1;
}


// 08013afc

void FUN_08013afc(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_11 [5];
  
  uVar1 = DAT_08013b30;
  local_11[0] = 0xff;
  while( true ) {
    iVar2 = FUN_08010754(local_11,uVar1);
    if (iVar2 == 0) break;
    FUN_08010638(iVar2 + 0x34);
    FUN_08013890(iVar2 + 0x3c,0);
  }
  return;
}


// 08013b34

undefined4 FUN_08013b34(int param_1)

{
  FUN_08012648(DAT_08013b54);
  *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) | 1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc);
  return 1;
}


// 08013bd4

void FUN_08013bd4(void)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 local_25;
  ushort local_24 [2];
  
  iVar6 = FUN_08012658(DAT_08013cd0);
  uVar4 = DAT_08013cdc;
  uVar3 = DAT_08013cd8;
  uVar2 = DAT_08013cd4;
  if (iVar6 != 0) {
    local_25 = 0xff;
switchD_08013c24_default:
    iVar6 = FUN_08010754(&local_25,uVar2);
    if (iVar6 != 0) {
      while ((int)((uint)*(byte *)(iVar6 + 0x1d) << 0x1f) < 0) {
        FUN_08016814();
        uVar9 = *(undefined4 *)(iVar6 + 8);
        *(byte *)(iVar6 + 0x1d) = *(byte *)(iVar6 + 0x1d) & 0xfe;
        FUN_08016818();
        uVar5 = local_25;
        switch(*(undefined1 *)(iVar6 + 0x1c)) {
        case 0:
          uVar7 = FUN_08014958(uVar3);
          FUN_08010e84(uVar7,uVar5,uVar9,0x1400000,0);
          goto switchD_08013c24_default;
        case 1:
          uVar7 = FUN_08014958(uVar3);
          FUN_08010e84(uVar7,uVar5,uVar9,0,0);
          goto switchD_08013c24_default;
        case 2:
          uVar7 = FUN_08014958(uVar3);
          FUN_08010e84(uVar7,uVar5,uVar9,0x402c,0);
          goto switchD_08013c24_default;
        case 3:
          local_24[0] = 0;
          FUN_08013518(*(undefined4 *)(iVar6 + 0x18),1,2,local_24);
          uVar8 = (uint)local_24[0];
          uVar1 = local_24[0] >> 8;
          uVar7 = FUN_08014958(uVar3);
          FUN_08010e84(uVar7,uVar5,uVar9,(uVar8 & 0xff) << 8 | (uint)uVar1,0);
          if (-1 < (int)((uint)uVar1 << 0x1d)) goto switchD_08013c24_default;
          FUN_080144f4(uVar4);
          FUN_08012734();
          iVar6 = FUN_08010754(&local_25,uVar2);
          if (iVar6 == 0) {
            return;
          }
          break;
        default:
          goto switchD_08013c24_default;
        }
      }
      goto switchD_08013c24_default;
    }
  }
  return;
}


// 08013ce0

void FUN_08013ce0(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar2 = FUN_080106fc(*param_1,DAT_08013d54,0x34);
  cVar1 = param_1[8];
  iVar6 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 0xc);
  FUN_08015c04(&local_28,iVar6,cVar1 != '\0');
  *(undefined4 *)(iVar2 + 0x14) = local_28;
  *(undefined4 *)(iVar2 + 0x18) = uStack_24;
  FUN_08015aec(&local_30,iVar5,1);
  puVar4 = (undefined4 *)(iVar2 + 0xc);
  *puVar4 = local_30;
  *(undefined4 *)(iVar2 + 0x10) = uStack_2c;
  if (cVar1 == '\0') {
    puVar4 = (undefined4 *)0x1;
  }
  bVar3 = (byte)puVar4;
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_1 + 0x10);
  if (cVar1 != '\0') {
    bVar3 = 0x11;
  }
  if (iVar6 == iVar5) {
    bVar3 = bVar3 | 0x20;
  }
  *(byte *)(iVar2 + 0x1c) = bVar3;
  return;
}


// 08014078

void FUN_08014078(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_11;
  
  iVar3 = FUN_08012658(DAT_080140dc);
  uVar2 = DAT_080140e4;
  uVar1 = DAT_080140e0;
  if (iVar3 != 0) {
    local_11 = 0xff;
    while (iVar3 = FUN_08010754(&local_11,uVar1), iVar3 != 0) {
      while ((int)((uint)*(byte *)(iVar3 + 0x1c) << 0x1c) < 0) {
        FUN_08016814();
        *(byte *)(iVar3 + 0x1c) = *(byte *)(iVar3 + 0x1c) & 0xf7;
        FUN_08016818();
        uVar4 = FUN_08014958(uVar2);
        FUN_08010e84(uVar4,local_11,*(byte *)(iVar3 + 0x1e) >> 3,iVar3 + 0x28);
        iVar3 = FUN_08010754(&local_11,uVar1);
        if (iVar3 == 0) {
          return;
        }
      }
    }
  }
  return;
}


// 080140e8

void FUN_080140e8(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_11 [5];
  
  uVar1 = DAT_08014134;
  local_11[0] = 0xff;
  while( true ) {
    iVar2 = FUN_08010754(local_11,uVar1);
    if (iVar2 == 0) break;
    if ((int)((uint)*(byte *)(iVar2 + 0x1c) << 0x1a) < 0) {
      FUN_08015a7c(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),1);
    }
    else {
      FUN_08015b84(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),1);
    }
    *(byte *)(iVar2 + 0x1c) = *(byte *)(iVar2 + 0x1c) & 0x30 | 1;
  }
  return;
}


// 08014138

undefined4 FUN_08014138(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0801415c;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 4;
  FUN_08012648(uVar1);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x18);
  return 1;
}


// 08014184

void FUN_08014184(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x20) << 0x1f)) {
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  *(char *)(param_1 + 0x21) = (char)param_2;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfa | 4;
  while (puVar1 != (undefined4 *)0x0) {
    pcVar2 = (code *)puVar1[1];
    *(undefined4 *)(param_1 + 0x1c) = *puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar2)(puVar1,param_2);
    puVar1 = *(undefined4 **)(param_1 + 0x1c);
  }
  FUN_08012648(DAT_080141c8);
  return;
}


// 080141dc

void FUN_080141dc(undefined4 param_1)

{
  FUN_080106bc(param_1,DAT_080141e4);
  return;
}


// 08014294

void FUN_08014294(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_080106bc(*param_1,DAT_080142dc);
  FUN_08016814();
  if ((int)((uint)*(byte *)(iVar1 + 0x20) << 0x1f) < 0) {
    FUN_08012530();
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 4);
    FUN_08012748(iVar1 + 0xc,0x1c);
    FUN_08016818();
    return;
  }
  FUN_08016818();
  return;
}


// 0801433c

void FUN_0801433c(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_19;
  
  iVar6 = FUN_08012658(DAT_080143bc);
  uVar4 = DAT_080143c4;
  uVar3 = DAT_080143c0;
  if (iVar6 != 0) {
    local_19 = 0xff;
    while (iVar6 = FUN_08010754(&local_19,uVar3), iVar6 != 0) {
      while ((int)((uint)*(byte *)(iVar6 + 0x20) << 0x1d) < 0) {
        uVar7 = FUN_080168a8();
        FUN_08016814();
        bVar1 = *(byte *)(iVar6 + 0x20);
        uVar2 = *(undefined1 *)(iVar6 + 0x21);
        *(byte *)(iVar6 + 0x20) = bVar1 & 0xfb;
        FUN_08016818();
        uVar5 = local_19;
        uVar8 = FUN_08014958(uVar4);
        FUN_08010e84(uVar8,uVar5,bVar1 & 1,uVar2,uVar7);
        iVar6 = FUN_08010754(&local_19,uVar3);
        if (iVar6 == 0) {
          return;
        }
      }
    }
  }
  return;
}


// 080143c8

void FUN_080143c8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_11;
  
  uVar2 = DAT_0801441c;
  local_11 = 0xff;
  iVar3 = FUN_08010754(&local_11,DAT_0801441c);
  while (iVar3 != 0) {
    FUN_08012530();
    FUN_08012530(iVar3 + 0xc);
    puVar1 = *(undefined4 **)(iVar3 + 0x1c);
    while (puVar1 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)*puVar1;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar4;
    }
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined1 *)(iVar3 + 0x22) = 0;
    iVar3 = FUN_08010754(&local_11,uVar2);
  }
  return;
}


// 08014420

void FUN_08014420(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_r3;
  
  FUN_0801055c();
  FUN_0801191c();
  FUN_08016240();
  FUN_08016910();
  iVar1 = DAT_08016648;
  FUN_08015a30(DAT_08016648);
  iVar3 = FUN_080162ec(iVar1);
  iVar2 = DAT_08016650;
  *(ushort *)(iVar1 + 8) = (ushort)((ulonglong)DAT_0801664c * (ulonglong)(iVar3 + 0x1c200) >> 0x31);
  *(undefined2 *)(iVar1 + 0xc) = 0x202c;
  *(undefined1 *)(iVar2 + 0x325) = 0;
  *(undefined4 *)(iVar2 + 4) = 0x20;
  FUN_08016314(10,0x72,1);
  FUN_08016314(9,0x72,0,in_r3);
  return;
}


// 0801443c

void FUN_0801443c(void)

{
  FUN_08010eb0();
  FUN_0801066c();
  FUN_08011694();
  FUN_08013afc();
  FUN_080143c8();
  FUN_080104ec();
  FUN_08013644();
  FUN_080124ac();
  FUN_080140e8();
  FUN_08011f58();
  FUN_08011c8c();
  FUN_08016838();
  return;
}


// 08014478

void FUN_08014478(void)

{
  FUN_08016834();
  FUN_0801433c();
  FUN_08016834();
  FUN_08010450();
  FUN_08016834();
  FUN_08010c28();
  FUN_08016834();
  FUN_08014078();
  FUN_08016834();
  FUN_080122c4();
  FUN_08016834();
  FUN_08013bd4();
  FUN_08016834();
  FUN_080129d4();
  FUN_08016834();
  FUN_08012d2c();
  FUN_08016834();
  FUN_08013194();
  FUN_08016834();
  FUN_08015394();
  FUN_08016834();
  FUN_080156b0();
  FUN_08016834();
  FUN_08016230();
  FUN_08016834();
  FUN_08016a18();
  FUN_08016834();
  FUN_080166b4();
  FUN_08016834();
  return;
}


// 080144f4

undefined4 FUN_080144f4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0801028c(param_1,DAT_0801481c);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014820);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014824);
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014828);
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = FUN_0801028c(param_1,DAT_0801482c);
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014830);
  if (iVar1 == 0) {
    return 7;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014834);
  if (iVar1 == 0) {
    return 8;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014838);
  if (iVar1 == 0) {
    return 9;
  }
  iVar1 = FUN_0801028c(param_1,DAT_0801483c);
  if (iVar1 == 0) {
    return 10;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014840);
  if (iVar1 == 0) {
    return 0xb;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014844);
  if (iVar1 == 0) {
    return 0xc;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014848);
  if (iVar1 == 0) {
    return 0xd;
  }
  iVar1 = FUN_0801028c(param_1,DAT_0801484c);
  if (iVar1 == 0) {
    return 0xe;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014850);
  if (iVar1 == 0) {
    return 0xf;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014854);
  if (iVar1 == 0) {
    return 0x10;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014858);
  if (iVar1 == 0) {
    return 0x11;
  }
  iVar1 = FUN_0801028c(param_1,DAT_0801485c);
  if (iVar1 == 0) {
    return 0x12;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014860);
  if (iVar1 == 0) {
    return 0x13;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014864);
  if (iVar1 == 0) {
    return 0x14;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014868);
  if (iVar1 == 0) {
    return 0x15;
  }
  iVar1 = FUN_0801028c(param_1,DAT_0801486c);
  if (iVar1 == 0) {
    return 0x16;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014870);
  if (iVar1 == 0) {
    return 0x17;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014874);
  if (iVar1 == 0) {
    return 0x18;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014878);
  if (iVar1 == 0) {
    return 0x19;
  }
  iVar1 = FUN_0801028c(param_1,DAT_0801487c);
  if (iVar1 == 0) {
    return 0x1a;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014880);
  if (iVar1 == 0) {
    return 0x1b;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014884);
  if (iVar1 == 0) {
    return 0x1c;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014888);
  if (iVar1 == 0) {
    return 0x1d;
  }
  iVar1 = FUN_0801028c(param_1,DAT_0801488c);
  if (iVar1 == 0) {
    return 0x1e;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014890);
  if (iVar1 == 0) {
    return 0x1f;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014894);
  if (iVar1 == 0) {
    return 0x20;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014898);
  if (iVar1 == 0) {
    return 0x21;
  }
  iVar1 = FUN_0801028c(param_1,DAT_0801489c);
  if (iVar1 == 0) {
    return 0x22;
  }
  iVar1 = FUN_0801028c(param_1,DAT_080148a0);
  if (iVar1 == 0) {
    return 0x23;
  }
  iVar1 = FUN_0801028c(param_1,DAT_080148a4);
  if (iVar1 == 0) {
    return 0x24;
  }
  iVar1 = FUN_0801028c(param_1,DAT_080148a8);
  if (iVar1 == 0) {
    return 0x25;
  }
  iVar1 = FUN_0801028c(param_1,DAT_080148ac);
  if (iVar1 == 0) {
    return 0x26;
  }
  iVar1 = FUN_0801028c(param_1,DAT_080148b0);
  if (iVar1 == 0) {
    return 0x27;
  }
  iVar1 = FUN_0801028c(param_1,DAT_080148b4);
  if (iVar1 == 0) {
    return 0x28;
  }
  iVar1 = FUN_0801028c(param_1,DAT_080148b8);
  if (iVar1 == 0) {
    return 0x29;
  }
  iVar1 = FUN_0801028c(param_1,DAT_080148bc);
  if (iVar1 == 0) {
    return 0x2a;
  }
  iVar1 = FUN_0801028c(param_1,DAT_080148c0);
  if (iVar1 == 0) {
    return 0x2b;
  }
  iVar1 = FUN_0801028c(param_1,DAT_080148c4);
  if (iVar1 == 0) {
    return 0x2c;
  }
  iVar1 = FUN_0801028c(param_1,DAT_080148c8);
  if (iVar1 == 0) {
    return 0x2d;
  }
  iVar1 = FUN_0801028c(param_1,DAT_080148cc);
  if (iVar1 == 0) {
    return 0x2e;
  }
  iVar1 = FUN_0801028c(param_1,DAT_080148d0);
  if (iVar1 == 0) {
    return 0x2f;
  }
  iVar1 = FUN_0801028c(param_1,DAT_080148d4);
  if (iVar1 == 0) {
    return 0x30;
  }
  iVar1 = FUN_0801028c(param_1,DAT_080148d8);
  if (iVar1 == 0) {
    return 0x31;
  }
  iVar1 = FUN_0801028c(param_1,DAT_080148dc);
  if (iVar1 == 0) {
    return 0x32;
  }
  iVar1 = FUN_0801028c(param_1,DAT_080148e0);
  if (iVar1 == 0) {
    return 0x33;
  }
  iVar1 = FUN_0801028c(param_1,DAT_080148e4);
  if (iVar1 == 0) {
    uVar2 = 0x34;
  }
  else {
    uVar2 = 0xff;
  }
  return uVar2;
}


// 08014958

undefined4 FUN_08014958(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0801028c(param_1,DAT_08014b0c);
  if (iVar1 == 0) {
    return DAT_08014b7c;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b10);
  if (iVar1 == 0) {
    return DAT_08014b78;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b14);
  if (iVar1 == 0) {
    return DAT_08014b84;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b18);
  if (iVar1 == 0) {
    return DAT_08014b80;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b1c);
  if (iVar1 == 0) {
    return DAT_08014b88;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b20);
  if (iVar1 == 0) {
    return DAT_08014b90;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b24);
  if (iVar1 == 0) {
    return DAT_08014b94;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b28);
  if (iVar1 == 0) {
    return DAT_08014b8c;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b2c);
  if (iVar1 == 0) {
    return DAT_08014b98;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b30);
  if (iVar1 == 0) {
    return DAT_08014b9c;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b34);
  if (iVar1 == 0) {
    return DAT_08014ba0;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b38);
  if (iVar1 == 0) {
    return DAT_08014ba4;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b3c);
  if (iVar1 == 0) {
    return DAT_08014ba8;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b40);
  if (iVar1 == 0) {
    return DAT_08014bac;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b44);
  if (iVar1 == 0) {
    return DAT_08014bb0;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b48);
  if (iVar1 == 0) {
    return DAT_08014bb4;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b4c);
  if (iVar1 == 0) {
    return DAT_08014bb8;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b50);
  if (iVar1 == 0) {
    return DAT_08014bbc;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b54);
  if (iVar1 == 0) {
    return DAT_08014bc0;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b58);
  if (iVar1 == 0) {
    return DAT_08014bc4;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b5c);
  if (iVar1 == 0) {
    return DAT_08014bcc;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b60);
  if (iVar1 == 0) {
    return DAT_08014bc8;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b64);
  if (iVar1 == 0) {
    return DAT_08014bd8;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b68);
  if (iVar1 == 0) {
    return DAT_08014bd4;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b6c);
  if (iVar1 == 0) {
    return DAT_08014bd0;
  }
  iVar1 = FUN_0801028c(param_1,DAT_08014b70);
  uVar2 = DAT_08014b74;
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}


// 08014bdc

void FUN_08014bdc(void)

{
  undefined4 uVar1;
  undefined2 local_c;
  undefined2 local_a;
  
  uVar1 = DAT_08014c14;
  FUN_08016b90(8,1);
  local_c = 0x82;
  local_a = 0x1003;
  FUN_08016ac8(uVar1,&local_c);
  FUN_08016b88(uVar1,0x80);
  FUN_08016b88(uVar1,2);
  return;
}


// 08014c18

void FUN_08014c18(void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  
  uVar3 = DAT_08014d30;
  puVar1 = DAT_08014d2c;
  *(uint *)(DAT_08014d28 + 0x88) = *(uint *)(DAT_08014d28 + 0x88) | 0xf00000;
  *puVar1 = *puVar1 | 1;
  puVar1[1] = uVar3 & puVar1[1];
  *puVar1 = *puVar1 & 0xfef6ffff;
  *puVar1 = *puVar1 & 0xfffbffff;
  puVar1[1] = puVar1[1] & 0xf700ffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[2] = 0x9f0000;
  puVar2 = DAT_08014d38;
  iVar5 = DAT_08014d34;
  puVar1[7] = puVar1[7] | 0x10000000;
  *(uint *)(iVar5 + 0xc) = *(uint *)(iVar5 + 0xc) | 1;
  puVar1[7] = puVar1[7] & 0xefffffff;
  *puVar2 = *puVar2 | 0x90;
  iVar5 = 0xffff;
  *puVar1 = *puVar1 | 0x10000;
  puVar4 = DAT_08014d38;
  puVar2 = DAT_08014d2c;
  do {
    if ((int)(*puVar1 << 0xe) < 0) break;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if ((int)(*DAT_08014d2c << 0xe) < 0) {
    *DAT_08014d38 = *DAT_08014d38 & 0xfffffffc;
    *puVar4 = *puVar4 | 4;
    puVar2[1] = puVar2[1];
    puVar2[1] = puVar2[1] | 0x2000;
    puVar2[1] = puVar2[1] | 0x500;
    puVar2[1] = puVar2[1] & 0xf7c0ffff;
    puVar2[1] = puVar2[1] | 0x81f0000;
    *puVar2 = *puVar2 | 0x1000000;
    puVar1 = DAT_08014d2c;
    do {
    } while (-1 < (int)(*puVar2 << 6));
    puVar2[1] = puVar2[1] & 0xfffffffc;
    puVar2[1] = puVar2[1] | 2;
    do {
    } while ((puVar1[1] & 0xc) != 8);
  }
  else {
    *DAT_08014d40 = DAT_08014d44;
  }
  *(undefined4 *)(DAT_08014d28 + 8) = DAT_08014d3c;
  return;
}


// 08014d48

void vec_45(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar5 = FUN_08016cc0(DAT_08014d98,1,param_3,param_4,param_4);
  if (iVar5 == 0) {
    return;
  }
  FUN_08016cd8(DAT_08014d98,1);
  pbVar4 = DAT_08014dac;
  if (DAT_08014da0 < *DAT_08014d9c + 1) {
    bVar1 = *DAT_08014dac;
    *DAT_08014d9c = 0;
    if ((byte)(bVar1 + 1) < 0x3c) {
      *pbVar4 = bVar1 + 1;
    }
    else {
      *pbVar4 = 0;
    }
  }
  else {
    *DAT_08014d9c = *DAT_08014d9c + 1;
  }
  uVar3 = DAT_08014da8;
  puVar2 = DAT_08014da4;
  *DAT_08014da4 = *DAT_08014da4 + 1;
  if (uVar3 < *puVar2) {
    *puVar2 = 0;
  }
  return;
}


// 08014db0

void vec_2(void)

{
  return;
}


// 08014db4

void vec_3(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 08014db8

void vec_4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 08014dbc

void vec_5(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 08014dc0

void vec_6(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 08014dc4

void vec_11(void)

{
  return;
}


// 08014dc8

void vec_12(void)

{
  return;
}


// 08014e50

void FUN_08014e50(undefined4 *param_1,byte param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  uVar5 = DAT_08014f8c;
  puVar6 = param_1 + 6;
  iVar7 = 8;
  do {
    if ((int)((uint)param_2 << 0x18) < 0) {
      FUN_08015b9c(*puVar6,param_1[7],1);
    }
    else {
      FUN_08015a7c(param_1[2],param_1[3],0);
    }
    iVar8 = param_1[9];
    iVar2 = FUN_080168a8();
    uVar3 = FUN_08016898(iVar8 * 1000);
    param_2 = param_2 << 1;
    do {
      uVar4 = FUN_080168a8();
    } while (uVar4 < iVar2 + (uint)((ulonglong)uVar5 * (ulonglong)uVar3 >> 0x32));
    FUN_08015b9c(param_1[4],param_1[5],1);
    iVar8 = param_1[9];
    iVar2 = FUN_080168a8();
    uVar3 = FUN_08016898(iVar8 * 1000);
    do {
      uVar4 = FUN_080168a8();
    } while (uVar4 < iVar2 + (uint)((ulonglong)uVar5 * (ulonglong)uVar3 >> 0x32));
    FUN_08015a7c(*param_1,param_1[1],0);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  FUN_08015b9c(*puVar6,param_1[7],1);
  iVar2 = param_1[9];
  iVar7 = FUN_080168a8();
  uVar5 = FUN_08016898(iVar2 * 1000);
  uVar1 = (ulonglong)DAT_08014f8c;
  do {
    uVar3 = FUN_080168a8();
  } while (uVar3 < iVar7 + (uint)(uVar1 * uVar5 >> 0x32));
  FUN_08015b9c(param_1[4],param_1[5],1);
  iVar7 = FUN_08015c54(*puVar6,param_1[7]);
  iVar8 = param_1[9];
  iVar2 = FUN_080168a8();
  uVar5 = FUN_08016898(iVar8 * 1000);
  uVar1 = (ulonglong)DAT_08014f8c;
  do {
    uVar3 = FUN_080168a8();
  } while (uVar3 < iVar2 + (uint)(uVar1 * uVar5 >> 0x32));
  FUN_08015a7c(*param_1,param_1[1],0);
  FUN_08015b9c(*puVar6,param_1[7],1);
  if (iVar7 != 0) {
    FUN_080144f4(DAT_08014f90);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  return;
}


// 08014f94

void FUN_08014f94(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1[9];
  iVar2 = FUN_080168a8();
  uVar3 = FUN_08016898(iVar5 * 1000);
  uVar1 = (ulonglong)DAT_08015054;
  do {
    uVar4 = FUN_080168a8();
  } while (uVar4 < iVar2 + (uint)(uVar1 * uVar3 >> 0x32));
  FUN_08015b9c(param_1[6],param_1[7],1);
  FUN_08015b9c(param_1[4],param_1[5],1);
  iVar5 = param_1[9];
  iVar2 = FUN_080168a8();
  uVar3 = FUN_08016898(iVar5 * 1000);
  uVar1 = (ulonglong)DAT_08015054;
  do {
    uVar4 = FUN_080168a8();
  } while (uVar4 < iVar2 + (uint)(uVar1 * uVar3 >> 0x32));
  FUN_08015a7c(param_1[2],param_1[3],0);
  iVar5 = param_1[9];
  iVar2 = FUN_080168a8();
  uVar3 = FUN_08016898(iVar5 * 1000);
  uVar1 = (ulonglong)DAT_08015054;
  do {
    uVar4 = FUN_080168a8();
  } while (uVar4 < iVar2 + (uint)(uVar1 * uVar3 >> 0x32));
  FUN_08015a7c(*param_1,param_1[1],0);
  FUN_08014e50(param_1,param_2);
  return;
}


// 08015058

void FUN_08015058(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar2 = FUN_08011710(*param_1);
  puVar3 = (undefined4 *)FUN_08010574(0x2c);
  *(char *)(puVar3 + 8) = (char)(*(int *)(param_1 + 0x10) << 1);
  puVar1 = DAT_080150ec;
  puVar3[9] = 5000;
  uVar4 = *(undefined4 *)(param_1 + 4);
  *puVar1 = *(undefined4 *)(param_1 + 0x14);
  FUN_08015c04(&local_20,uVar4,1);
  puVar3[4] = local_20;
  puVar3[5] = uStack_1c;
  FUN_08015aec(&local_28,*(undefined4 *)(param_1 + 4),1);
  *puVar3 = local_28;
  puVar3[1] = uStack_24;
  FUN_08015c04(&local_20,*(undefined4 *)(param_1 + 8),1);
  puVar3[6] = local_20;
  puVar3[7] = uStack_1c;
  FUN_08015aec(&local_28,*(undefined4 *)(param_1 + 8),1);
  puVar3[2] = local_28;
  puVar3[3] = uStack_24;
  *(undefined4 **)(iVar2 + 8) = puVar3;
  *(byte *)(iVar2 + 0xc) = *(byte *)(iVar2 + 0xc) | 1;
  return;
}


// 080150f8

void FUN_080150f8(int param_1,int param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined1 *puVar6;
  undefined1 *puVar5;
  int iVar7;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  FUN_08014f94(param_1,*(undefined1 *)(param_1 + 0x20));
  if (param_2 != 0) {
    puVar6 = param_3;
    do {
      puVar5 = puVar6 + 1;
      FUN_08014e50(param_1,*puVar6);
      puVar6 = puVar5;
    } while (puVar5 != param_3 + param_2);
  }
  FUN_08015a7c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),0,
               (undefined4 *)(param_1 + 8),unaff_r4,unaff_r5,unaff_r6,unaff_lr);
  iVar7 = *(int *)(param_1 + 0x24);
  iVar2 = FUN_080168a8();
  uVar3 = FUN_08016898(iVar7 * 1000);
  uVar1 = (ulonglong)DAT_08014e4c;
  do {
    uVar4 = FUN_080168a8();
  } while (uVar4 < iVar2 + (uint)(uVar1 * uVar3 >> 0x32));
  FUN_08015b9c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),1);
  iVar7 = *(int *)(param_1 + 0x24);
  iVar2 = FUN_080168a8();
  uVar3 = FUN_08016898(iVar7 * 1000);
  uVar1 = (ulonglong)DAT_08014e4c;
  do {
    uVar4 = FUN_080168a8();
  } while (uVar4 < iVar2 + (uint)(uVar1 * uVar3 >> 0x32));
  FUN_08015b9c(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),1);
  return;
}


// 08015124

void FUN_08015124(undefined4 *param_1,int param_2,undefined1 *param_3,int param_4,byte *param_5)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 unaff_r4;
  undefined1 *puVar9;
  undefined1 *puVar8;
  byte bVar10;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar11;
  int iVar12;
  undefined4 unaff_lr;
  uint local_28;
  byte *local_24;
  
  bVar10 = *(byte *)(param_1 + 8);
  local_24 = param_5;
  if (param_2 != 0) {
    FUN_08014f94(param_1,bVar10);
    puVar9 = param_3;
    do {
      puVar8 = puVar9 + 1;
      FUN_08014e50(param_1,*puVar9);
      puVar9 = puVar8;
    } while (param_3 + param_2 != puVar8);
  }
  FUN_08014f94(param_1,bVar10 | 1);
  uVar3 = DAT_080152b0;
  local_28 = param_4 - 1U & 0xff;
  if (param_4 != 0) {
    puVar7 = param_1 + 6;
    do {
      FUN_08015b9c(*puVar7,param_1[7],1);
      iVar11 = 8;
      bVar10 = 0;
      do {
        iVar12 = param_1[9];
        iVar4 = FUN_080168a8();
        uVar5 = FUN_08016898(iVar12 * 1000);
        do {
          uVar6 = FUN_080168a8();
        } while (uVar6 < iVar4 + (uint)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x32));
        FUN_08015b9c(param_1[4],param_1[5],1);
        iVar12 = param_1[9];
        iVar4 = FUN_080168a8();
        uVar5 = FUN_08016898(iVar12 * 1000);
        do {
          uVar6 = FUN_080168a8();
        } while (uVar6 < iVar4 + (uint)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x32));
        bVar2 = FUN_08015c54(*puVar7,param_1[7]);
        bVar10 = bVar10 << 1 | bVar2;
        FUN_08015a7c(*param_1,param_1[1],0);
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      FUN_08015b9c(*puVar7,param_1[7],1);
      if (local_28 == 0) {
        FUN_08015b9c(*puVar7,param_1[7],1);
      }
      else {
        FUN_08015a7c(param_1[2],param_1[3],0);
      }
      iVar4 = param_1[9];
      iVar11 = FUN_080168a8();
      uVar5 = FUN_08016898(iVar4 * 1000);
      do {
        uVar6 = FUN_080168a8();
      } while (uVar6 < iVar11 + (uint)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x32));
      FUN_08015b9c(param_1[4],param_1[5],1);
      iVar4 = param_1[9];
      iVar11 = FUN_080168a8();
      uVar5 = FUN_08016898(iVar4 * 1000);
      do {
        uVar6 = FUN_080168a8();
      } while (uVar6 < iVar11 + (uint)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x32));
      FUN_08015a7c(*param_1,param_1[1],0);
      local_28 = local_28 - 1 & 0xff;
      *local_24 = bVar10;
      local_24 = local_24 + 1;
    } while (local_28 != 0xff);
  }
  FUN_08015a7c(param_1[2],param_1[3],0,param_1 + 2,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
  iVar4 = param_1[9];
  iVar11 = FUN_080168a8();
  uVar3 = FUN_08016898(iVar4 * 1000);
  uVar1 = (ulonglong)DAT_08014e4c;
  do {
    uVar5 = FUN_080168a8();
  } while (uVar5 < iVar11 + (uint)(uVar1 * uVar3 >> 0x32));
  FUN_08015b9c(param_1[4],param_1[5],1);
  iVar4 = param_1[9];
  iVar11 = FUN_080168a8();
  uVar3 = FUN_08016898(iVar4 * 1000);
  uVar1 = (ulonglong)DAT_08014e4c;
  do {
    uVar5 = FUN_080168a8();
  } while (uVar5 < iVar11 + (uint)(uVar1 * uVar3 >> 0x32));
  FUN_08015b9c(param_1[6],param_1[7],1);
  return;
}


// 080152f8

void FUN_080152f8(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_080106bc(*param_1,DAT_0801533c);
  FUN_08012530();
  *(undefined1 *)(iVar1 + 0x14) = 0;
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  *(int *)(iVar1 + 0xc) = *(int *)(param_1 + 4);
  FUN_0801580c(iVar1 + 0x16);
  FUN_08016814();
  iVar2 = FUN_080168a8();
  *(int *)(iVar1 + 8) = iVar2 + *(int *)(iVar1 + 0xc);
  FUN_08012748(iVar1,0);
  FUN_08016818();
  return;
}


// 08015340

void FUN_08015340(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 local_14;
  
  iVar1 = FUN_080106bc(*param_1,DAT_08015390);
  local_14 = 0xaf;
  iVar2 = FUN_080168a8();
  FUN_08013518(*(undefined4 *)(iVar1 + 0x10),1,2,&local_14);
  iVar3 = FUN_080168a8();
  FUN_08015848(iVar1 + 0x16,*param_1,iVar2,iVar3 - iVar2,(local_14._1_1_ & 0x1f) * '\x06');
  return;
}


// 08015394

void FUN_08015394(void)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  undefined1 local_2d;
  ushort local_2c [2];
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  iVar6 = FUN_08012658(DAT_08015494);
  uVar3 = DAT_08015498;
  uVar2 = DAT_08015494;
  if (iVar6 != 0) {
    local_2d = 0xff;
    while (iVar6 = FUN_08010754(&local_2d,uVar3), uVar4 = local_2d, iVar6 != 0) {
      if ((int)((uint)*(byte *)(iVar6 + 0x14) << 0x1f) < 0) {
        bVar7 = *(byte *)(iVar6 + 0x1a);
        local_2c[0] = 0xaf;
        local_22 = 0;
        local_24 = 0;
        local_28 = 0xa8;
        FUN_08013518(*(undefined4 *)(iVar6 + 0x10),1,7,&local_28);
        FUN_08013518(*(undefined4 *)(iVar6 + 0x10),1,2,local_2c);
        uVar5 = local_2c[0];
        iVar8 = bVar7 + 0x1b + iVar6;
        *(undefined1 *)((uint)bVar7 + iVar6 + 0x1b) = local_28._1_1_;
        *(undefined1 *)(iVar8 + 1) = local_28._2_1_;
        *(undefined1 *)(iVar8 + 2) = local_28._3_1_;
        *(undefined1 *)(iVar8 + 3) = (undefined1)local_24;
        *(undefined1 *)(iVar8 + 4) = local_24._1_1_;
        *(undefined1 *)(iVar8 + 5) = local_22;
        bVar7 = *(char *)(iVar6 + 0x1a) + 6;
        *(byte *)(iVar6 + 0x1a) = bVar7;
        uVar1 = local_2c[0] & 0x3f00;
        if (0x2d < bVar7) {
          FUN_08015818(iVar6 + 0x16,uVar4);
        }
        if ((uVar5 & 0x4000) != 0) {
          *(short *)(iVar6 + 0x18) = *(short *)(iVar6 + 0x18) + 1;
        }
        if (uVar1 == 0) {
          FUN_08012648();
        }
        else {
          *(byte *)(iVar6 + 0x14) = *(byte *)(iVar6 + 0x14) & 0xfe;
          FUN_08016814(uVar2);
          iVar8 = FUN_080168a8();
          *(int *)(iVar6 + 8) = iVar8 + *(int *)(iVar6 + 0xc);
          FUN_08012748(iVar6,0);
          FUN_08016818();
        }
      }
    }
  }
  return;
}


// 08015594

void FUN_08015594(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_080106bc(*(undefined1 *)param_1,PTR_LAB_0801549c_1_080155bc);
  uVar2 = FUN_08014958(PTR_s_ldc1612_home_state_oid__c_homing_080155c0);
  FUN_08010e84(uVar2,*param_1,(*(byte *)(iVar1 + 0x5c) & 7) >> 2,*(undefined4 *)(iVar1 + 100));
  return;
}


// 08015610

void FUN_08015610(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_1d;
  ushort local_1c [4];
  
  iVar1 = FUN_080106bc(*param_1,DAT_080156ac);
  if (-1 < (int)((uint)*(byte *)(iVar1 + 0x14) << 0x1e)) {
    iVar2 = FUN_080168a8();
    local_1d = 0x18;
    FUN_08016060(**(undefined4 **)(iVar1 + 0x10),(*(undefined4 **)(iVar1 + 0x10))[1],1,&local_1d,2,
                 local_1c);
    iVar3 = FUN_080168a8();
    FUN_08015848(iVar1 + 0x16,*param_1,iVar2,iVar3 - iVar2,
                 (int)((local_1c[0] & 0xff) << 8 | (uint)(local_1c[0] >> 8)) >> 1 & 4);
    return;
  }
  FUN_08016814();
  uVar4 = FUN_080168a8();
  iVar2 = FUN_08015c54(*(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(iVar1 + 0x54));
  FUN_08016818();
  if (iVar2 == 0) {
    uVar5 = 4;
  }
  else {
    uVar5 = 0;
  }
  FUN_08015848(iVar1 + 0x16,*param_1,uVar4,0,uVar5);
  return;
}


// 080156b0

void FUN_080156b0(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  undefined1 local_26;
  undefined1 local_25;
  ushort local_24 [2];
  
  iVar5 = FUN_08012658(DAT_08015804);
  uVar2 = DAT_08015808;
  if (iVar5 != 0) {
    local_26 = 0xff;
LAB_080156ca:
    iVar5 = FUN_08010754(&local_26,uVar2);
    if (iVar5 != 0) {
      while (uVar3 = local_26, (int)((uint)*(byte *)(iVar5 + 0x14) << 0x1f) < 0) {
        local_25 = 0x18;
        FUN_08016060(**(undefined4 **)(iVar5 + 0x10),(*(undefined4 **)(iVar5 + 0x10))[1],1,&local_25
                     ,2,local_24);
        uVar4 = local_24[0];
        FUN_08016814();
        *(byte *)(iVar5 + 0x14) = *(byte *)(iVar5 + 0x14) & 0xfe;
        FUN_08016818();
        if (-1 < (int)((uint)(uVar4 >> 8) << 0x1c)) break;
        bVar1 = *(byte *)(iVar5 + 0x1a);
        iVar9 = bVar1 + 0x1b + iVar5;
        local_24[0] = local_24[0] & 0xff00;
        FUN_08016060(**(undefined4 **)(iVar5 + 0x10),(*(undefined4 **)(iVar5 + 0x10))[1],1,local_24,
                     2,iVar9);
        local_24[0] = CONCAT11(local_24[0]._1_1_,1);
        FUN_08016060(**(undefined4 **)(iVar5 + 0x10),(*(undefined4 **)(iVar5 + 0x10))[1],1,local_24,
                     2,iVar9 + 2);
        bVar11 = *(byte *)(iVar5 + 0x5c);
        bVar7 = *(char *)(iVar5 + 0x1a) + 4;
        *(byte *)(iVar5 + 0x1a) = bVar7;
        if ((int)((uint)bVar11 << 0x1d) < 0) {
          uVar10 = (uint)*(byte *)(iVar9 + 3) | (uint)*(byte *)((uint)bVar1 + iVar5 + 0x1b) << 0x18
                   | (uint)*(byte *)(iVar9 + 1) << 0x10 | (uint)*(byte *)(iVar9 + 2) << 8;
          if (uVar10 < 0x10000000) {
            uVar6 = FUN_080168a8();
            if ((int)((uint)bVar11 << 0x1e) < 0) {
              iVar9 = FUN_080168a0(uVar6,*(undefined4 *)(iVar5 + 100));
              if (iVar9 == 0) {
                uVar8 = *(uint *)(iVar5 + 0x60);
                goto joined_r0x080157f0;
              }
            }
            else {
              uVar8 = *(uint *)(iVar5 + 0x60);
joined_r0x080157f0:
              if (uVar8 < uVar10) {
                *(undefined4 *)(iVar5 + 100) = uVar6;
                FUN_08014184(*(undefined4 *)(iVar5 + 0x58),*(undefined1 *)(iVar5 + 0x5d));
                bVar11 = 0;
              }
              else {
                bVar11 = bVar11 & 0xfd;
              }
              *(byte *)(iVar5 + 0x5c) = bVar11;
            }
            bVar7 = *(byte *)(iVar5 + 0x1a);
          }
          else {
            *(undefined1 *)(iVar5 + 0x5c) = 0;
            FUN_08014184(*(undefined4 *)(iVar5 + 0x58),*(undefined1 *)(iVar5 + 0x5e));
            bVar7 = *(byte *)(iVar5 + 0x1a);
          }
        }
        if (bVar7 < 0x30) break;
        FUN_08015818(iVar5 + 0x16,uVar3);
        iVar5 = FUN_08010754(&local_26,uVar2);
        if (iVar5 == 0) {
          return;
        }
      }
      goto LAB_080156ca;
    }
  }
  return;
}


// 0801580c

void FUN_0801580c(undefined2 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


// 08015818

void FUN_08015818(short *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08014958(DAT_08015844);
  FUN_08010e84(uVar1,param_2,*param_1,(char)param_1[2],(int)param_1 + 5);
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = *param_1 + 1;
  return;
}


// 08015848

void FUN_08015848(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08014958(DAT_08015878);
  FUN_08010e84(uVar1,param_2,param_3,param_4,*param_1,(uint)*(byte *)(param_1 + 2) + param_5,
               param_1[1]);
  return;
}


// 0801587c

int * FUN_0801587c(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar2 = DAT_08015948;
  iVar1 = DAT_08015944;
  uVar4 = 4;
  iVar5 = 0;
  pbVar3 = DAT_0801593c;
  while( true ) {
    if (uVar4 == param_2) {
      *(uint *)(DAT_08015944 + 0x14) = *(uint *)(DAT_08015944 + 0x14) | 0xf000;
      *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) & 0xfffffe00 | 7;
      local_30 = 0;
      uStack_2c = 0;
      local_28 = 0;
      uStack_24 = 0xe0000;
      local_20 = 0;
      local_1c = 1;
      FUN_08016bc0(iVar2,&local_30);
      *(undefined4 *)(iVar2 + 8) = 1;
      do {
      } while (-1 < *(int *)(iVar2 + 0x58) << 0x1a);
      *(uint *)(iVar2 + 0x58) = *(uint *)(iVar2 + 0x58) & 0xffffff7f;
      FUN_080168cc(10);
      *(undefined4 *)(iVar2 + 8) = 5;
      iVar1 = DAT_0801594c;
      do {
      } while ((*(uint *)(DAT_08015948 + 8) & 4) != 0);
      if (param_2 == 0xfe) {
        *(uint *)(DAT_08015948 + 8) = *(uint *)(DAT_08015948 + 8) | 0x800000;
        *(uint *)(iVar1 + 0x820) = *(uint *)(iVar1 + 0x820) | 0x400;
      }
      else {
        FUN_08016314(param_2,3);
      }
      *param_1 = DAT_08015948;
      param_1[1] = iVar5;
      return param_1;
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 0xf) break;
    pbVar3 = pbVar3 + 1;
    uVar4 = (uint)*pbVar3;
  }
  FUN_080144f4(DAT_08015940);
                    /* WARNING: Subroutine does not return */
  FUN_080126e8();
}


// 08015950

undefined4 FUN_08015950(int *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (-1 < *param_1 << 0x1b) {
    FUN_08016c0c(param_1,param_2 & 0xff,1,4,param_1,param_2);
    param_1[2] = param_1[2] | 1;
    param_1[2] = param_1[2] | 0x500000;
    uVar1 = FUN_08016898(0x14);
    return uVar1;
  }
  if ((*param_1 << 0x1e < 0) && (param_1[0xd] == param_2)) {
    return 0;
  }
  uVar1 = FUN_08016898(0x14);
  return uVar1;
}


// 080159a4

uint FUN_080159a4(uint *param_1,int param_2)

{
  *param_1 = *param_1 & 0xfffffffd;
  *param_1 = *param_1 & 0xffffffef;
  param_1[2] = param_1[2] & 0xffafffff;
  if (param_2 != 0) {
    *(short *)(DAT_080159d8 + param_2 * 2) = (short)param_1[0x13];
  }
  return param_1[0x13] & 0xffff;
}


// 080159dc

void FUN_080159dc(uint *param_1,int param_2)

{
  FUN_0801681c();
  if (-1 < (int)(*param_1 << 0x1b)) {
    FUN_08016824();
    return;
  }
  *param_1 = *param_1 & 0xfffffffd;
  *param_1 = *param_1 & 0xffffffef;
  param_1[2] = param_1[2] & 0xffafffff;
  if (param_2 != 0) {
    *(short *)(DAT_08015a2c + param_2 * 2) = (short)param_1[0x13];
  }
  FUN_08016824();
  return;
}


// 08015a30

void FUN_08015a30(undefined4 param_1)

{
  uint *local_1c;
  uint *puStack_18;
  uint uStack_14;
  
  FUN_08016264(&local_1c,param_1);
  FUN_0801681c();
  *local_1c = *local_1c | uStack_14;
  if (puStack_18 != (uint *)0x0) {
    *puStack_18 = uStack_14;
    *puStack_18 = 0;
  }
  FUN_08016824();
  return;
}


// 08015a60

uint FUN_08015a60(undefined4 param_1)

{
  uint *local_14 [2];
  uint local_c;
  
  FUN_08016264(local_14,param_1);
  return *local_14[0] & local_c;
}


// 08015a7c

void FUN_08015a7c(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = 0;
  piVar3 = DAT_08015ae4;
  iVar4 = DAT_08015ae8;
  while (param_1 != iVar4) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 7) {
      iVar1 = 0;
      goto LAB_08015aa6;
    }
    iVar4 = *piVar3;
    piVar3 = piVar3 + 1;
  }
  iVar1 = iVar1 * 0x10;
  uVar5 = 0;
  do {
    if ((1 << (uVar5 & 0xff) & param_2) != 0) {
      iVar1 = iVar1 + uVar5;
      break;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x10);
LAB_08015aa6:
  uVar2 = FUN_0801681c();
  if (param_3 == 0) {
    param_2 = param_2 << 0x10;
  }
  *(uint *)(param_1 + 0x10) = param_2;
  FUN_08016314(iVar1,1,0);
  FUN_08016824(uVar2);
  return;
}


// 08015aec

int * FUN_08015aec(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_08015b48;
  if (param_2 < 0x70) {
    iVar3 = *(int *)(DAT_08015b40 + (param_2 >> 4) * 4);
    if (iVar3 != 0) {
      FUN_080162f4(iVar3);
      iVar2 = 1 << (param_2 & 0xf);
      FUN_08015a7c(iVar3,iVar2,param_3);
      *param_1 = iVar3;
      param_1[1] = iVar2;
      return param_1;
    }
  }
  *DAT_08015b44 = 0xb;
  FUN_080144f4(uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_080126e8();
}


// 08015b4c

void FUN_08015b4c(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) ^ param_2;
  return;
}


// 08015b60

void FUN_08015b60(int param_1,uint param_2)

{
  FUN_0801681c();
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) ^ param_2;
  FUN_08016824();
  return;
}


// 08015b84

void FUN_08015b84(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = param_2 << 0x10;
  }
  *(int *)(param_1 + 0x10) = param_2;
  return;
}


// 08015b9c

void FUN_08015b9c(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = 0;
  piVar3 = DAT_08015bfc;
  iVar4 = DAT_08015c00;
  while (param_1 != iVar4) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 7) {
      iVar1 = 0;
      goto LAB_08015bc2;
    }
    iVar4 = *piVar3;
    piVar3 = piVar3 + 1;
  }
  iVar1 = iVar1 * 0x10;
  uVar5 = 0;
  do {
    if ((1 << (uVar5 & 0xff) & param_2) != 0) {
      iVar1 = iVar1 + uVar5;
      break;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x10);
LAB_08015bc2:
  uVar2 = FUN_0801681c();
  FUN_08016314(iVar1,0,param_3);
  FUN_08016824(uVar2);
  return;
}


// 08015c04

int * FUN_08015c04(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_08015c50;
  if ((0x6f < param_2) || (iVar3 = *(int *)(DAT_08015c48 + (param_2 >> 4) * 4), iVar3 == 0)) {
    *DAT_08015c4c = 0xc;
    FUN_080144f4(uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  iVar2 = 1 << (param_2 & 0xf);
  FUN_08015b9c(iVar3,iVar2);
  *param_1 = iVar3;
  param_1[1] = iVar2;
  return param_1;
}


// 08015c54

bool FUN_08015c54(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 8) & param_2) != 0;
}


// 08015c6c

uint * FUN_08015c6c(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  
  uVar1 = DAT_08015e24;
  uVar3 = 0;
  puVar6 = DAT_08015e18;
  while (param_1 != uVar3) {
    if (puVar6 + 2 == DAT_08015e18 + 0x30) {
      *DAT_08015e20 = 8;
      FUN_080144f4(uVar1);
                    /* WARNING: Subroutine does not return */
      FUN_080126e8();
    }
    uVar3 = (uint)*(byte *)(puVar6 + 3);
    puVar6 = puVar6 + 2;
  }
  uVar3 = FUN_080162ec(*puVar6);
  uVar3 = DAT_08015e1c / uVar3;
  if (1 < uVar3) {
    uVar3 = uVar3 >> 1;
  }
  uVar4 = param_2 / (uVar3 * 0xfe);
  if (param_2 < uVar3 * 0xfe) {
    uVar3 = 0xffff;
    if (uVar4 < 0x10000) {
      uVar3 = uVar4;
    }
  }
  else {
    uVar3 = uVar4 - 1;
  }
  FUN_08016314(*(undefined1 *)(puVar6 + 1),*(undefined1 *)((int)puVar6 + 6),0);
  iVar2 = FUN_08015a60(*puVar6);
  if (iVar2 == 0) {
    FUN_08015a30(*puVar6);
  }
  uVar1 = DAT_08015e28;
  puVar5 = (uint *)*puVar6;
  if ((int)(*puVar5 << 0x1f) < 0) {
    if ((uint)(ushort)puVar5[10] != (uVar3 & 0xffff)) {
      *DAT_08015e20 = 9;
      FUN_080144f4(uVar1);
                    /* WARNING: Subroutine does not return */
      FUN_080126e8();
    }
  }
  else {
    *(short *)(puVar5 + 10) = (short)uVar3;
    *(undefined2 *)(puVar5 + 0xb) = 0xfe;
    *(ushort *)(puVar5 + 5) = (ushort)puVar5[5] | 1;
  }
  uVar1 = DAT_08015e2c;
  switch(*(undefined1 *)((int)puVar6 + 5)) {
  case 1:
    puVar5[8] = puVar5[8] & 0xfffffffe;
    *(ushort *)(puVar5 + 6) = (ushort)puVar5[6] & 0xff8c;
    *(ushort *)(puVar5 + 6) = (ushort)puVar5[6] | 0x6c;
    puVar5[0xd] = param_3;
    puVar5[8] = puVar5[8] | 1;
    *puVar5 = *puVar5 | 1;
    return puVar5 + 0xd;
  case 2:
    puVar5[8] = puVar5[8] & 0xffffffef;
    *(ushort *)(puVar5 + 6) = (ushort)puVar5[6] & 0x8cff;
    *(ushort *)(puVar5 + 6) = (ushort)puVar5[6] | 0x6c00;
    puVar5[0xe] = param_3;
    puVar5[8] = puVar5[8] | 0x10;
    *puVar5 = *puVar5 | 1;
    return puVar5 + 0xe;
  case 3:
    puVar5[8] = puVar5[8] & 0xfffffeff;
    *(ushort *)(puVar5 + 7) = (ushort)puVar5[7] & 0xff8c;
    *(ushort *)(puVar5 + 7) = (ushort)puVar5[7] | 0x6c;
    puVar5[0xf] = param_3;
    puVar5[8] = puVar5[8] | 0x100;
    *puVar5 = *puVar5 | 1;
    return puVar5 + 0xf;
  case 4:
    puVar5[8] = puVar5[8] & 0xffffefff;
    *(ushort *)(puVar5 + 7) = (ushort)puVar5[7] & 0x8cff;
    *(ushort *)(puVar5 + 7) = (ushort)puVar5[7] | 0x6c00;
    puVar5[0x10] = param_3;
    puVar5[8] = puVar5[8] | 0x1000;
    *puVar5 = *puVar5 | 1;
    return puVar5 + 0x10;
  default:
    *DAT_08015e20 = 10;
    FUN_080144f4(uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
}


// 08015e30

void FUN_08015e30(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


// 08015e34

void FUN_08015e34(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  while( true ) {
    if (((param_2 & ~(uint)*(ushort *)(param_1 + 0x14)) == 0) &&
       ((*(ushort *)(param_1 + 0x14) & param_3) == 0)) break;
    uVar1 = FUN_080168a8();
    iVar2 = FUN_080168a0(uVar1,param_4);
    uVar1 = DAT_08015e78;
    if (iVar2 == 0) {
      *DAT_08015e74 = 6;
      FUN_080144f4(uVar1);
                    /* WARNING: Subroutine does not return */
      FUN_080126e8();
    }
  }
  return;
}


// 08015e7c

void FUN_08015e7c(ushort *param_1,ushort param_2,int param_3,undefined4 param_4)

{
  ushort extraout_r3;
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *param_1 = 0x101;
  uVar3 = param_4;
  FUN_08015e34(param_1,1,0,param_4,param_4);
  param_1[8] = param_2;
  if ((param_2 & 1) == 0) {
    FUN_08015e34(param_1,2,0,param_4,uVar3);
    FUN_0801681c();
    uVar2 = (uint)param_1[0xc];
  }
  else {
    *param_1 = *param_1 | 0x400;
    FUN_08015e34(param_1,2,0,param_4,uVar3);
    FUN_0801681c();
    uVar1 = extraout_r3;
    if (param_3 == 1) {
      uVar1 = 0x201;
    }
    uVar2 = (uint)param_1[0xc];
    if (param_3 == 1) {
      *param_1 = uVar1;
    }
  }
  FUN_08016824();
  uVar3 = DAT_08015efc;
  if (-1 < (int)(uVar2 << 0x1f)) {
    *DAT_08015ef8 = 7;
    FUN_080144f4(uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  return;
}


// 08015f00

undefined4 * FUN_08015f00(undefined4 *param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  undefined2 *puVar10;
  
  puVar7 = PTR_DAT_08015ffc;
  puVar6 = PTR_s_Unsupported_i2c_bus_08015ff8;
  if (2 < param_2) {
    *DAT_08015ff4 = 5;
    FUN_080144f4(puVar6);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  puVar10 = *(undefined2 **)(PTR_DAT_08015ffc + param_2 * 8);
  iVar8 = FUN_08015a60(puVar10);
  if (iVar8 == 0) {
    FUN_08015a30(puVar10);
    uVar2 = puVar7[param_2 * 8 + 4];
    uVar1 = puVar7[param_2 * 8 + 5];
    FUN_08016314(uVar2,0x101,1);
    FUN_08016314(uVar1,0x101,1);
    FUN_08016314(uVar1,0x101,0xffffffff);
    FUN_08016314(uVar2,0x101,0xffffffff);
    FUN_08016314(uVar2,0x101,1);
    FUN_08016314(uVar1,0x101,1);
    FUN_08016314(uVar2,0x142,1);
    FUN_08016314(uVar1,0x142,1);
    *puVar10 = 0x8000;
    *puVar10 = 0;
    uVar9 = FUN_080162ec(puVar10);
    uVar5 = DAT_08015fec;
    *param_1 = puVar10;
    uVar3 = (ulonglong)DAT_08015ff0;
    uVar4 = (ushort)((ulonglong)uVar5 * (ulonglong)uVar9 >> 0x30);
    puVar10[2] = uVar4 >> 2;
    *(char *)(param_1 + 1) = (char)(param_4 << 1);
    puVar10[0xe] = (short)(uVar3 * (uVar9 >> 6) >> 0x26);
    puVar10[0x10] = (uVar4 >> 2) + 1;
    *puVar10 = 1;
    return param_1;
  }
  *(char *)(param_1 + 1) = (char)(param_4 << 1);
  *param_1 = puVar10;
  return param_1;
}


// 08016000

void FUN_08016000(undefined2 *param_1,undefined1 param_2,int param_3,byte *param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar4;
  byte *pbVar3;
  undefined2 *puVar5;
  
  puVar5 = param_1;
  iVar1 = FUN_080168a8();
  iVar2 = FUN_08016898(5000);
  iVar1 = iVar1 + iVar2;
  FUN_08015e7c(param_1,param_2,param_3,iVar1,puVar5);
  if (param_3 != 0) {
    pbVar4 = param_4;
    do {
      pbVar3 = pbVar4 + 1;
      param_1[8] = (ushort)*pbVar4;
      FUN_08015e34(param_1,0x80,0,iVar1);
      pbVar4 = pbVar3;
    } while (pbVar3 != param_4 + param_3);
  }
  *param_1 = 0x201;
  FUN_08015e34(param_1,0,0x80,iVar1);
  return;
}


// 08016060

void FUN_08016060(undefined2 *param_1,byte param_2,int param_3,byte *param_4,char param_5,
                 undefined1 *param_6)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar6;
  byte *pbVar5;
  char cVar7;
  
  iVar3 = FUN_080168a8();
  iVar4 = FUN_08016898(5000);
  iVar3 = iVar3 + iVar4;
  if (param_3 != 0) {
    FUN_08015e7c(param_1,param_2,param_3,iVar3);
    pbVar6 = param_4;
    do {
      pbVar5 = pbVar6 + 1;
      param_1[8] = (ushort)*pbVar6;
      FUN_08015e34(param_1,0x80,0,iVar3);
      pbVar6 = pbVar5;
    } while (pbVar5 != param_4 + param_3);
  }
  FUN_08015e7c(param_1,param_2 | 1,param_5,iVar3);
  cVar7 = param_5 + -1;
  if (param_5 == '\0') {
LAB_080160ec:
    FUN_08015e34(param_1,0,0x40,iVar3);
    return;
  }
  do {
    FUN_08015e34(param_1,0x40,0,iVar3);
    FUN_0801681c();
    uVar2 = param_1[8];
    if (cVar7 == '\x01') {
      *param_1 = 0x201;
      FUN_08016824();
      *param_6 = (char)uVar2;
      cVar7 = '\0';
    }
    else {
      FUN_08016824();
      *param_6 = (char)uVar2;
      bVar1 = cVar7 == '\0';
      cVar7 = cVar7 + -1;
      if (bVar1) goto LAB_080160ec;
    }
    param_6 = param_6 + 1;
  } while( true );
}


// 08016124

undefined4 * FUN_08016124(undefined4 *param_1,uint param_2,uint param_3,uint param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  puVar3 = PTR_DAT_080161c4;
  puVar2 = PTR_s_Invalid_spi_bus_080161c0;
  if (4 < param_2) {
    *DAT_080161bc = 4;
    FUN_080144f4(puVar2);
                    /* WARNING: Subroutine does not return */
    FUN_080126e8();
  }
  uVar8 = *(undefined4 *)(PTR_DAT_080161c4 + param_2 * 8);
  iVar4 = FUN_08015a60(uVar8);
  if (iVar4 == 0) {
    FUN_08015a30(uVar8);
    uVar1 = puVar3[param_2 * 8 + 7];
    FUN_08016314(puVar3[param_2 * 8 + 4],uVar1,1);
    FUN_08016314(puVar3[param_2 * 8 + 5],uVar1,0);
    FUN_08016314(puVar3[param_2 * 8 + 6],uVar1,0);
  }
  uVar5 = FUN_080162ec(uVar8);
  uVar7 = 0;
  do {
    uVar6 = uVar7 + 1;
    if (uVar5 >> (uVar6 & 0xff) <= param_4) {
      uVar7 = uVar7 << 3;
      goto LAB_08016162;
    }
    uVar7 = uVar6;
  } while (uVar6 != 8);
  uVar7 = 0x38;
LAB_08016162:
  *param_1 = uVar8;
  param_1[1] = uVar7 | param_3 | 0x344;
  return param_1;
}


// 080161c8

void FUN_080161c8(ushort *param_1,uint param_2)

{
  if (param_2 != *param_1) {
    *param_1 = *param_1 & 0xffbf;
    *param_1 = (ushort)param_2;
  }
  return;
}


// 080161ec

void FUN_080161ec(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    puVar1 = (undefined1 *)(param_5 + -1);
    do {
      puVar1 = puVar1 + 1;
      *(undefined1 *)(param_1 + 0xc) = *puVar1;
      do {
      } while (-1 < (int)((uint)*(ushort *)(param_1 + 8) << 0x1f));
      if (param_3 != 0) {
        *puVar1 = *(undefined1 *)(param_1 + 0xc);
      }
    } while (puVar1 != (undefined1 *)((param_4 - 1U & 0xff) + param_5));
  }
  do {
  } while ((*(ushort *)(param_1 + 8) & 0x82) != 2);
  return;
}


// 08016230

void FUN_08016230(void)

{
  *DAT_0801623c = 0xaaaa;
  return;
}


// 08016240

void FUN_08016240(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_08016260;
  *DAT_08016260 = 0x5555;
  puVar1[1] = 0;
  puVar1[2] = 0xfff;
  *puVar1 = 0xcccc;
  return;
}


// 08016264

void FUN_08016264(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_080162e4;
  uVar1 = DAT_080162dc;
  if (DAT_080162d0 <= param_2) {
    *param_1 = DAT_080162e8;
    param_1[1] = 0;
    param_1[2] = 1 << (param_2 + 0xbffe8000 >> 10 & 0xff);
    return;
  }
  if (DAT_080162d4 < param_2) {
    *param_1 = DAT_080162e0;
    param_1[1] = uVar2;
    param_1[2] = 1 << (param_2 + 0xbfff0000 >> 10 & 0xff);
    return;
  }
  *param_1 = DAT_080162d8;
  param_1[1] = uVar1;
  param_1[2] = 1 << (param_2 + 0xc0000000 >> 10 & 0xff);
  return;
}


// 080162ec

undefined4 FUN_080162ec(void)

{
  return DAT_080162f0;
}


// 080162f4

void FUN_080162f4(int param_1)

{
  *(uint *)(DAT_08016310 + 0x18) =
       1 << (param_1 + 0xbfff0000U >> 10 & 0xff) | *(uint *)(DAT_08016310 + 0x18);
  return;
}


// 08016314

void FUN_08016314(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = *(uint **)(DAT_08016550 + (param_1 >> 4) * 4);
  *(uint *)(DAT_08016554 + 0x18) =
       1 << ((uint)(puVar4 + -0x10004000) >> 10 & 0xff) | *(uint *)(DAT_08016554 + 0x18);
  iVar1 = (param_1 & 7) << 2;
  if (param_2 == 0) {
    if (param_3 != 0) {
LAB_08016350:
      uVar2 = 8 << iVar1;
      goto LAB_08016356;
    }
    uVar2 = 4 << iVar1;
    if (-1 < (int)(param_1 << 0x1c)) goto LAB_080163a6;
LAB_0801635a:
    puVar4[1] = uVar2 | puVar4[1] & ~(0xf << iVar1);
    if (param_3 < 1) goto LAB_080163b4;
LAB_08016368:
    puVar4[4] = 1 << (param_1 & 0xf);
    iVar1 = DAT_0801655c;
  }
  else {
    if (param_2 == 1) {
      uVar2 = 1 << iVar1;
    }
    else if (param_2 == 0x101) {
      uVar2 = 5 << iVar1;
    }
    else if (param_2 == 3) {
      uVar2 = 0;
    }
    else if ((int)(param_2 << 0x17) < 0) {
      uVar2 = 0xd << iVar1;
    }
    else {
      if (0 < param_3) goto LAB_08016350;
      uVar2 = 9 << iVar1;
    }
LAB_08016356:
    if ((int)(param_1 << 0x1c) < 0) goto LAB_0801635a;
LAB_080163a6:
    *puVar4 = uVar2 | *puVar4 & ~(0xf << iVar1);
    if (0 < param_3) goto LAB_08016368;
LAB_080163b4:
    iVar1 = DAT_0801655c;
    if (param_3 != 0) {
      puVar4[4] = 1 << (param_1 & 0xf) + 0x10;
      iVar1 = DAT_0801655c;
    }
  }
  DAT_0801655c = iVar1;
  if (param_1 - 0xd < 2) {
    uVar2 = (param_2 & 0xff) >> 4;
    uVar3 = *DAT_08016558 & 0xf8ffffff | 0x4000000;
    *DAT_08016558 = uVar3;
    *(uint *)(iVar1 + 4) = uVar3;
    if (uVar2 == 1) {
      return;
    }
    if (uVar2 == 2) goto LAB_080163ea;
  }
  else {
    uVar2 = (param_2 & 0xff) >> 4;
    if (uVar2 == 1) {
      if ((param_1 == 0xf) || (param_1 == 0x13)) {
        uVar2 = *DAT_08016558 & 0xfffffcff | 0x100;
        *DAT_08016558 = uVar2;
        *(uint *)(iVar1 + 4) = uVar2;
        return;
      }
      if (param_1 - 0x1a < 2) {
        uVar2 = *DAT_08016558 & 0xfffffcff | 0x200;
        *DAT_08016558 = uVar2;
        *(uint *)(iVar1 + 4) = uVar2;
        return;
      }
      return;
    }
    if (uVar2 == 2) {
      if (param_1 - 0x14 < 2) {
        uVar2 = *DAT_08016558 & 0xfffff3ff | 0x800;
        *DAT_08016558 = uVar2;
        *(uint *)(iVar1 + 4) = uVar2;
        return;
      }
LAB_080163ea:
      iVar1 = DAT_0801655c;
      if (param_1 - 0x26 < 4) {
        uVar2 = *DAT_08016558;
        *DAT_08016558 = uVar2 | 0xc00;
        *(uint *)(iVar1 + 4) = uVar2 | 0xc00;
        return;
      }
      if (param_1 - 0x3c < 4) {
        uVar2 = *DAT_08016558;
        *DAT_08016558 = uVar2 | 0x1000;
        *(uint *)(iVar1 + 4) = uVar2 | 0x1000;
        return;
      }
      return;
    }
  }
  iVar1 = DAT_0801655c;
  if (uVar2 == 4) {
    if (param_1 - 0x18 < 2) {
      uVar2 = *DAT_08016558;
      *DAT_08016558 = uVar2 | 2;
      *(uint *)(iVar1 + 4) = uVar2 | 2;
      return;
    }
  }
  else if (uVar2 == 5) {
    if (param_1 - 0x13 < 3) {
      uVar2 = *DAT_08016558;
      *DAT_08016558 = uVar2 | 1;
      *(uint *)(iVar1 + 4) = uVar2 | 1;
      return;
    }
  }
  else if (uVar2 == 7) {
    if (param_1 - 0x16 < 2) {
      uVar2 = *DAT_08016558;
      *DAT_08016558 = uVar2 | 4;
      *(uint *)(iVar1 + 4) = uVar2 | 4;
      return;
    }
    if (param_1 - 0x35 < 2) {
      uVar2 = *DAT_08016558;
      *DAT_08016558 = uVar2 | 8;
      *(uint *)(iVar1 + 4) = uVar2 | 8;
      return;
    }
    if (param_1 - 0x38 < 2) {
      uVar2 = *DAT_08016558;
      *DAT_08016558 = uVar2 | 0x30;
      *(uint *)(iVar1 + 4) = uVar2 | 0x30;
      return;
    }
  }
  else if (uVar2 == 9) {
    if (param_1 - 0x18 < 2) {
      uVar2 = *DAT_08016558 & 0xffff9fff | 0x4000;
      *DAT_08016558 = uVar2;
      *(uint *)(iVar1 + 4) = uVar2;
      return;
    }
    if (param_1 - 0x30 < 2) {
      uVar2 = *DAT_08016558;
      *DAT_08016558 = uVar2 | 0x6000;
      *(uint *)(iVar1 + 4) = uVar2 | 0x6000;
      return;
    }
  }
  return;
}


// 08016560

void FUN_08016560(void)

{
  return;
}


// 08016564

void FUN_08016564(void)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  
  FUN_08014c18();
  iVar5 = DAT_08016598;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    enableIRQinterrupts(0);
  }
  enableIRQinterrupts();
  *(undefined4 *)(DAT_0801659c + 8) = DAT_080165a0;
  FUN_08015a30(iVar5);
  uVar11 = *DAT_080165a4 & 0xf8ffffff | 0x2000000;
  *DAT_080165a4 = uVar11;
  *(uint *)(iVar5 + 4) = uVar11;
  FUN_08014420();
  FUN_08014bdc();
  FUN_08014958(DAT_080128d8);
  FUN_08010e84();
  FUN_08016814();
  iVar5 = FUN_08010270(DAT_080128dc);
  if (iVar5 != 0) {
    FUN_08016814();
    uVar9 = FUN_080168a8();
    if (*(char *)(DAT_080128e0 + 9) == '\0') {
      *(char *)(DAT_080128e0 + 10) = (char)iVar5;
    }
    iVar5 = DAT_080128e0;
    *(undefined1 *)(DAT_080128e0 + 9) = 2;
    FUN_080125fc();
    FUN_0801443c();
    *(undefined1 *)(iVar5 + 9) = 1;
    FUN_08016818();
    FUN_08012678();
    uVar10 = FUN_08014958(DAT_080128ec);
    FUN_08010e84(uVar10,uVar9,*(undefined1 *)(iVar5 + 10));
  }
  FUN_08016818();
  iVar6 = FUN_080168a8();
  uVar9 = DAT_080128f0;
  pcVar4 = DAT_080128e8;
  puVar3 = DAT_080128e4;
  iVar5 = DAT_080128e0;
  do {
    FUN_08016834();
    if (*(char *)(iVar5 + 8) != '\0') {
      iVar7 = FUN_080168a8();
      FUN_08016814();
      if (*(char *)(iVar5 + 8) != '\0') {
        *(undefined1 *)(iVar5 + 8) = 0xff;
        do {
          FUN_0801682c();
        } while (*(char *)(iVar5 + 8) != '\0');
      }
      FUN_08016818();
      iVar8 = FUN_080168a8();
      iVar6 = (iVar6 - iVar7) + iVar8;
    }
    *(undefined1 *)(iVar5 + 8) = 1;
    FUN_08014478();
    iVar7 = FUN_080168a8();
    FUN_08010914(iVar6,iVar7);
    uVar11 = *puVar3;
    *puVar3 = uVar11 + 1;
    if ((0x13 < uVar11 + 1) && (cVar1 = *pcVar4, *puVar3 = 0, cVar1 != '\0')) {
      *pcVar4 = '\0';
      FUN_08016b8c(uVar9,0x80);
    }
    iVar6 = iVar7;
  } while( true );
}


// 080165a8

void FUN_080165a8(void)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  byte local_9;
  
  uVar1 = *DAT_080165ec;
  if ((uVar1 & 0x28) != 0) {
    FUN_08016654(DAT_080165ec[2]);
  }
  puVar2 = DAT_080165ec;
  if ((int)((uint)uVar1 << 0x18) < 0) {
    if ((int)((uint)DAT_080165ec[6] << 0x18) < 0) {
      iVar3 = FUN_0801667c(&local_9);
      if (iVar3 == 0) {
        puVar2[2] = (ushort)local_9;
      }
      else {
        puVar2[6] = 0x202c;
      }
    }
  }
  return;
}


// 080165f0

void FUN_080165f0(void)

{
  *(undefined2 *)(DAT_080165fc + 0xc) = 0x20ac;
  return;
}


// 08016654

void FUN_08016654(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  if (param_1 == 0x7e) {
    FUN_0801262c();
  }
  pbVar2 = DAT_08016674;
  bVar1 = *DAT_08016674;
  if (bVar1 < 0xc0) {
    *(char *)(DAT_08016678 + (uint)bVar1) = (char)param_1;
    *pbVar2 = bVar1 + 1;
  }
  return;
}


// 0801667c

undefined4 FUN_0801667c(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  bVar1 = *DAT_080166ac;
  if ((uint)bVar1 < (uint)*DAT_080166a8) {
    uVar2 = *(undefined1 *)(DAT_080166b0 + (uint)bVar1);
    *DAT_080166ac = bVar1 + 1;
    uVar3 = 0;
    *param_1 = uVar2;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


// 080166b4

void FUN_080166b4(void)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_24;
  
  iVar4 = DAT_08016764;
  pbVar3 = DAT_08016760;
  iVar5 = FUN_08010ebc(DAT_08016764,*DAT_08016760,&local_24);
  iVar7 = local_24;
  if (iVar5 < 1) {
    if (iVar5 == 0) {
      return;
    }
    if ((local_24 == 0x20) && (iVar6 = FUN_08016d54(iVar4,DAT_08016768,0x20), iVar6 == 0)) {
      FUN_08016560();
      iVar7 = local_24;
    }
  }
  else {
    FUN_08010f9c(iVar4,local_24);
    iVar7 = local_24;
  }
  iVar6 = 0;
  while( true ) {
    bVar1 = *pbVar3;
    iVar8 = (uint)bVar1 - iVar7;
    if (iVar8 == 0) {
      FUN_0801681c();
      bVar2 = *pbVar3;
    }
    else {
      FUN_08016d90(iVar4 + iVar6,iVar7 + iVar6 + iVar4,iVar8 - iVar6);
      FUN_0801262c();
      FUN_0801681c();
      bVar2 = *pbVar3;
      iVar6 = iVar8;
    }
    if ((uint)bVar1 == (uint)bVar2) break;
    FUN_08016824();
  }
  *pbVar3 = (byte)iVar8;
  FUN_08016824();
  if (iVar5 < 1) {
    return;
  }
  FUN_0801104c();
  return;
}


// 0801676c

void FUN_0801676c(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  pbVar2 = DAT_080167fc;
  pbVar1 = DAT_080167f8;
  uVar4 = (uint)*DAT_080167f8;
  uVar5 = (uint)*DAT_080167fc;
  if (uVar5 <= uVar4) {
    uVar5 = 0;
    *DAT_080167fc = 0;
    *pbVar1 = 0;
    uVar4 = 0;
  }
  uVar7 = *(byte *)(param_1 + 2) + uVar5;
  if (uVar7 < 0x61) {
    uVar4 = uVar5;
    iVar6 = DAT_08016800;
  }
  else {
    if (0x60 < uVar7 - uVar4) {
      return;
    }
    *pbVar2 = 0;
    iVar6 = DAT_08016800;
    uVar5 = uVar5 - *pbVar1;
    FUN_08016d90(DAT_08016800,(uint)*pbVar1 + DAT_08016800,uVar5);
    *pbVar1 = 0;
    *pbVar2 = (byte)uVar5;
    FUN_080165f0();
    uVar4 = uVar5 & 0xff;
  }
  cVar3 = FUN_08010d28(iVar6 + uVar5,param_1,param_2);
  *pbVar2 = cVar3 + (char)uVar4;
  FUN_080165f0();
  return;
}


// 08016804

undefined4 FUN_08016804(void)

{
  return DAT_08016808;
}


// 0801680c

undefined4 FUN_0801680c(void)

{
  return DAT_08016810;
}


// 08016814

void FUN_08016814(void)

{
  disableIRQinterrupts();
  return;
}


// 08016818

void FUN_08016818(void)

{
  enableIRQinterrupts();
  return;
}


// 0801681c

undefined4 FUN_0801681c(void)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  return uVar2;
}


// 08016824

void FUN_08016824(uint param_1)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((param_1 & 1) == 1);
  }
  return;
}


// 0801682c

void FUN_0801682c(void)

{
  enableIRQinterrupts();
  disableIRQinterrupts();
  return;
}


// 08016834

void FUN_08016834(void)

{
  return;
}


// 08016838

/* WARNING: Control flow encountered bad instruction data */

void FUN_08016838(void)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1ff;
  }
  if (uVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// 08016898

int FUN_08016898(int param_1)

{
  return param_1 * 0x90;
}


// 080168a0

uint FUN_080168a0(int param_1,int param_2)

{
  return (uint)(param_1 - param_2) >> 0x1f;
}


// 080168a8

undefined4 FUN_080168a8(void)

{
  return *(undefined4 *)(DAT_080168b0 + 4);
}


// 080168b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080168b4(void)

{
  _DAT_e000e014 = 0;
  _DAT_e000e018 = 0;
  *(undefined4 *)(DAT_080168c8 + 4) = 0x4000000;
  return;
}


// 080168cc

void FUN_080168cc(int param_1)

{
  uint *puVar1;
  
  puVar1 = DAT_08016908;
  if (-1 < *(int *)(DAT_08016904 + 0xfc) << 7) {
    *(uint *)(DAT_08016904 + 0xfc) = *(uint *)(DAT_08016904 + 0xfc) | 0x1000000;
    *puVar1 = *puVar1 | 1;
  }
  do {
  } while ((int)(DAT_08016908[1] - (DAT_08016908[1] + param_1 * 0x90)) < 0);
  return;
}


// 08016910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08016910(void)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = DAT_08016958;
  iVar1 = DAT_08016954;
  *(uint *)(DAT_08016954 + 0xfc) = *(uint *)(DAT_08016954 + 0xfc) | 0x1000000;
  *puVar2 = *puVar2 | 1;
  puVar2[1] = 0;
  FUN_0801681c();
  *(undefined1 *)(iVar1 + 0x23) = 0x20;
  _DAT_e000e010 = 7;
  _DAT_e000e014 = 0;
  _DAT_e000e018 = 0;
  *(undefined4 *)(iVar1 + 4) = 0x4000000;
  FUN_08016824();
  return;
}


// 08016960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void vec_15(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = DAT_08016a14;
  iVar3 = DAT_08016a10;
  piVar2 = DAT_08016a0c;
  iVar1 = DAT_08016a08;
  FUN_08016814();
  iVar8 = *piVar2;
  do {
    iVar5 = FUN_08012580();
    iVar6 = *(int *)(iVar1 + 4);
    iVar7 = iVar5 - iVar6;
    if (0x120 < iVar7) {
LAB_080169e2:
      _DAT_e000e018 = 0;
      _DAT_e000e014 = 0;
      FUN_08016818();
      return;
    }
    if (iVar8 - iVar6 < 0) {
      if (iVar7 < iVar3) {
        FUN_080144f4(uVar4);
        FUN_08012734();
      }
      iVar8 = FUN_08012638();
      if (iVar8 != 0) {
        *piVar2 = iVar6 + 0x3840;
        goto LAB_080169e2;
      }
      iVar8 = iVar6 + 72000;
      *piVar2 = iVar8;
      FUN_08016818();
    }
    else {
      FUN_08016818();
    }
    while ((0 < iVar7 && (0 < iVar5 - *(int *)(iVar1 + 4)))) {
      iVar7 = iVar5 - *(int *)(iVar1 + 4);
    }
    FUN_08016814();
  } while( true );
}


// 08016a18

void FUN_08016a18(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_08016a38 + 4);
  FUN_08016814();
  if (*DAT_08016a3c - iVar1 < 0) {
    *DAT_08016a3c = iVar1;
  }
  FUN_08016818();
  return;
}


// 08016a40

uint FUN_08016a40(byte *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar4;
  byte *pbVar3;
  
  if (param_2 == 0) {
    return 0xffff;
  }
  uVar1 = 0xffff;
  pbVar4 = param_1;
  do {
    pbVar3 = pbVar4 + 1;
    uVar2 = (*pbVar4 ^ uVar1 ^ (*pbVar4 ^ uVar1) << 4) & 0xff;
    uVar1 = (uVar1 >> 8 | uVar2 << 8) ^ uVar2 << 3 ^ uVar2 >> 4;
    pbVar4 = pbVar3;
  } while (pbVar3 != param_1 + param_2);
  return uVar1;
}


// 08016a7c

void Reset_Handler(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  for (iVar1 = 0; (uint)(DAT_08016ab4 + iVar1) < DAT_08016ab8; iVar1 = iVar1 + 4) {
    *(undefined4 *)(DAT_08016ab4 + iVar1) = *(undefined4 *)(DAT_08016ab0 + iVar1);
  }
  for (puVar2 = DAT_08016abc; puVar2 < DAT_08016ac0; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  FUN_08014c18();
  FUN_08016d0c();
  FUN_08016564();
  return;
}


// 08016ac4

void vec_14(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 08016ac8

void FUN_08016ac8(uint *param_1,ushort *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar7 = (uint)*(byte *)((int)param_2 + 3);
  bVar8 = (*(byte *)((int)param_2 + 3) & 0x10) != 0;
  if (bVar8) {
    param_4 = (uint)(byte)param_2[1];
  }
  uVar1 = (uint)*param_2;
  uVar5 = uVar7 & 0xf;
  if (bVar8) {
    uVar5 = uVar5 | param_4;
  }
  if ((char)*param_2 != '\0') {
    uVar6 = *param_1;
    uVar3 = 0;
LAB_08016af8:
    do {
      uVar2 = 1 << (uVar3 & 0xff);
      if ((uVar2 & ~uVar1) == 0) {
        uVar6 = uVar5 << (uVar3 << 2 & 0xff) | uVar6 & ~(0xf << (uVar3 << 2 & 0xff));
        if (uVar7 != 0x28) {
          uVar3 = uVar3 + 1;
          if (uVar7 == 0x48) {
            param_1[4] = uVar2;
          }
          if (uVar3 == 8) break;
          goto LAB_08016af8;
        }
        param_1[5] = uVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 8);
    *param_1 = uVar6;
  }
  if (0xff < uVar1) {
    uVar3 = param_1[1];
    iVar4 = 0;
LAB_08016b42:
    do {
      uVar6 = 1 << (iVar4 + 8U & 0xff);
      if ((uVar6 & ~uVar1) == 0) {
        uVar3 = uVar5 << (iVar4 << 2 & 0xffU) | uVar3 & ~(0xf << (iVar4 << 2 & 0xffU));
        if (uVar7 != 0x28) {
          iVar4 = iVar4 + 1;
          if (uVar7 == 0x48) {
            param_1[4] = uVar6;
          }
          if (iVar4 == 8) break;
          goto LAB_08016b42;
        }
        param_1[5] = uVar6;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    param_1[1] = uVar3;
  }
  return;
}


// 08016b88

void FUN_08016b88(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


// 08016b8c

void FUN_08016b8c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// 08016b90

void FUN_08016b90(uint param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(DAT_08016ba4 + 0x18) = *(uint *)(DAT_08016ba4 + 0x18) & ~param_1;
    return;
  }
  *(uint *)(DAT_08016ba4 + 0x18) = param_1 | *(uint *)(DAT_08016ba4 + 0x18);
  return;
}


// 08016bc0

void FUN_08016bc0(int param_1,uint *param_2)

{
  *(uint *)(param_1 + 4) = *param_2 | param_2[1] << 8 | *(uint *)(param_1 + 4) & 0xfff0feff;
  *(uint *)(param_1 + 8) =
       param_2[4] | param_2[3] | param_2[2] << 1 | DAT_08016c08 & *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 0x2c) =
       *(uint *)(param_1 + 0x2c) & 0xff0fffff | (uint)(byte)((char)param_2[5] - 1) << 0x14;
  return;
}


// 08016c0c

void FUN_08016c0c(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if (param_2 == 0x12) {
    *(uint *)(param_1 + 0x5c) = param_4 | *(uint *)(param_1 + 0x5c) & 0xfffffff8;
  }
  else if (param_2 < 10) {
    *(uint *)(param_1 + 0x10) =
         param_4 << (param_2 * 3 & 0xff) | *(uint *)(param_1 + 0x10) & ~(7 << (param_2 * 3 & 0xff));
  }
  else {
    uVar1 = (param_2 - 10) * 3;
    *(uint *)(param_1 + 0xc) =
         param_4 << (uVar1 & 0xff) | *(uint *)(param_1 + 0xc) & ~(7 << (uVar1 & 0xff));
  }
  if (param_3 < 7) {
    uVar1 = (param_3 - 1) * 5;
    *(uint *)(param_1 + 0x34) =
         param_2 << (uVar1 & 0xff) | *(uint *)(param_1 + 0x34) & ~(0x1f << (uVar1 & 0xff));
    return;
  }
  if (param_3 < 0xd) {
    uVar1 = (param_3 - 7) * 5;
    *(uint *)(param_1 + 0x30) =
         param_2 << (uVar1 & 0xff) | *(uint *)(param_1 + 0x30) & ~(0x1f << (uVar1 & 0xff));
    return;
  }
  uVar1 = (param_3 - 0xd) * 5;
  *(uint *)(param_1 + 0x2c) =
       param_2 << (uVar1 & 0xff) | *(uint *)(param_1 + 0x2c) & ~(0x1f << (uVar1 & 0xff));
  return;
}


// 08016cc0

undefined4 FUN_08016cc0(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x10) & param_2) != 0) {
    if ((*(ushort *)(param_1 + 0xc) & param_2) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// 08016cd8

void FUN_08016cd8(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & ~param_2;
  return;
}


// 08016d0c

void FUN_08016d0c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = DAT_08016d48 - (int)DAT_08016d44;
  puVar4 = DAT_08016d44;
  for (iVar5 = 0; iVar2 = DAT_08016d50, puVar1 = DAT_08016d4c, iVar5 != iVar3 >> 2;
      iVar5 = iVar5 + 1) {
    (*(code *)*puVar4)();
    puVar4 = puVar4 + 1;
  }
  FUN_08016dd4();
  puVar4 = puVar1;
  for (iVar3 = 0; iVar3 != iVar2 - (int)puVar1 >> 2; iVar3 = iVar3 + 1) {
    (*(code *)*puVar4)();
    puVar4 = puVar4 + 1;
  }
  return;
}


// 08016d54

int FUN_08016d54(byte *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)(param_2 + -1);
  pbVar2 = param_1 + param_3;
  while( true ) {
    if (param_1 == pbVar2) {
      return 0;
    }
    pbVar1 = pbVar1 + 1;
    if ((uint)*param_1 != (uint)*pbVar1) break;
    param_1 = param_1 + 1;
  }
  return (uint)*param_1 - (uint)*pbVar1;
}


// 08016d74

void FUN_08016d74(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = param_2 + param_3;
  puVar3 = (undefined1 *)(param_1 + -1);
  if (param_2 == puVar2) {
    return;
  }
  do {
    puVar1 = param_2 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *param_2;
    param_2 = puVar1;
  } while (puVar1 != puVar2);
  return;
}


// 08016d90

void FUN_08016d90(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = param_2 + param_3;
  if ((param_2 < param_1) && (param_1 < puVar2)) {
    puVar1 = param_1 + param_3;
    while (puVar1 != param_1) {
      puVar2 = puVar2 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *puVar2;
    }
  }
  else {
    param_1 = param_1 + -1;
    for (; param_2 != puVar2; param_2 = param_2 + 1) {
      param_1 = param_1 + 1;
      *param_1 = *param_2;
    }
  }
  return;
}


// 08016dc4

void FUN_08016dc4(undefined1 *param_1,undefined1 param_2,int param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1 + param_3;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    *param_1 = param_2;
  }
  return;
}


// 08016dd4

void FUN_08016dd4(void)

{
  return;
}


// 08016de0

void FUN_08016de0(void)

{
  return;
}



// 080001b4

undefined8 FUN_080001b4(undefined4 param_1,undefined4 param_2)

{
  if (DAT_080001c4 != 0) {
    param_1 = DAT_080001cc;
    param_2 = DAT_080001c8;
  }
  return CONCAT44(param_2,param_1);
}


// 080001d0

byte * FUN_080001d0(uint *param_1,uint param_2,uint param_3)

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
joined_r0x08000230:
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
        goto joined_r0x08000230;
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


// 08000270

undefined4 FUN_08000270(undefined4 *param_1)

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


// 0800027c

int FUN_0800027c(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 1;
  }
  return param_2;
}


// 0800028c

int FUN_0800028c(byte *param_1,byte *param_2)

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


// 080002a0

void FUN_080002a0(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  FUN_08005b14(&local_18,*(undefined4 *)(param_1 + 4));
  uVar1 = DAT_080002dc;
  iVar2 = FUN_08000694(*param_1,DAT_080002d8,0x2c);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  *(undefined4 *)(iVar2 + 0x20) = local_18;
  *(undefined4 *)(iVar2 + 0x24) = uStack_14;
  *(undefined1 *)(iVar2 + 0x2a) = 1;
  return;
}


// 080003e8

void FUN_080003e8(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_19;
  
  iVar5 = FUN_08001fa8(DAT_08000474);
  uVar4 = DAT_08000480;
  puVar3 = DAT_0800047c;
  uVar2 = DAT_08000478;
  if (iVar5 != 0) {
    local_19 = 0xff;
LAB_08000402:
    iVar5 = FUN_080006ec(&local_19,uVar2);
    if (iVar5 != 0) {
      while (*(char *)(iVar5 + 0x2a) == *(char *)(iVar5 + 0x2b)) {
        FUN_08006b78();
        if (*(char *)(iVar5 + 0x2b) == *(char *)(iVar5 + 0x2a)) {
          uVar7 = *(undefined4 *)(iVar5 + 0x14);
          uVar1 = *(undefined2 *)(iVar5 + 0x18);
          *(char *)(iVar5 + 0x2a) = *(char *)(iVar5 + 0x2b) + '\x01';
          FUN_08006b7c();
          *puVar3 = uVar1;
          uVar6 = FUN_080043bc(uVar4);
          FUN_08000e1c(uVar6,local_19,uVar7,uVar1);
          break;
        }
        FUN_08006b7c();
        iVar5 = FUN_080006ec(&local_19,uVar2);
        if (iVar5 == 0) {
          return;
        }
      }
      goto LAB_08000402;
    }
  }
  return;
}


// 08000484

void FUN_08000484(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_11 [5];
  
  uVar1 = DAT_080004d4;
  local_11[0] = 0xff;
  while( true ) {
    iVar2 = FUN_080006ec(local_11,uVar1);
    if (iVar2 == 0) break;
    FUN_08005c74(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24));
    if (*(char *)(iVar2 + 0x2b) != '\0') {
      iVar3 = *(int *)(iVar2 + 0x14) + *(int *)(iVar2 + 0xc);
      *(char *)(iVar2 + 0x2a) = *(char *)(iVar2 + 0x2b) + '\x01';
      *(int *)(iVar2 + 0x14) = iVar3;
      *(int *)(iVar2 + 8) = iVar3;
      FUN_080020a4(iVar2,0);
    }
  }
  return;
}


// 080004d8

void FUN_080004d8(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_080004f0;
  *DAT_080004ec = 0x2b;
  FUN_08003f58(uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_08002038();
}


// 080004f4

void FUN_080004f4(void)

{
  int iVar1;
  
  iVar1 = FUN_08006b68();
  *DAT_08000508 = iVar1 + 3U & 0xfffffffc;
  return;
}


// 0800050c

int FUN_0800050c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = DAT_08000548;
  iVar4 = *DAT_08000548;
  uVar3 = FUN_08006b70();
  uVar2 = DAT_08000550;
  if (uVar3 < (uint)(iVar4 + param_1)) {
    *DAT_0800054c = 0x28;
    FUN_08003f58(uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  iVar4 = *piVar1;
  *piVar1 = (param_1 + 3U & 0xfffffffc) + iVar4;
  FUN_08007370(iVar4,0,param_1);
  return iVar4;
}


// 08000554

void FUN_08000554(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_08000560;
  *param_1 = *DAT_08000560;
  *puVar1 = param_1;
  return;
}


// 08000564

undefined4 * FUN_08000564(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  FUN_08006b80();
  uVar1 = DAT_08000594;
  puVar2 = (undefined4 *)*DAT_0800058c;
  if (puVar2 == (undefined4 *)0x0) {
    *DAT_08000590 = 0x2a;
    FUN_08003f58(uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  *DAT_0800058c = *puVar2;
  FUN_08006b88();
  return puVar2;
}


// 08000598

bool FUN_08000598(int *param_1)

{
  return *param_1 == 0;
}


// 080005a4

undefined4 FUN_080005a4(undefined4 *param_1)

{
  return *param_1;
}


// 080005a8

undefined4 FUN_080005a8(undefined4 *param_1,int *param_2)

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


// 080005c4

undefined4 * FUN_080005c4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  *param_1 = *puVar1;
  return puVar1;
}


// 080005d0

void FUN_080005d0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// 080005d8

void FUN_080005d8(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  if ((0xff < param_2) || (*DAT_080005fc != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_080004d8();
  }
  if ((int)(uint)*DAT_08000600 < param_2) {
    *DAT_08000600 = (byte)param_2;
  }
  return;
}


// 08000604

void FUN_08000604(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar2 = (uint)*DAT_08000644;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      puVar4 = (undefined4 *)*DAT_08000648;
      puVar6 = puVar4;
    }
    else {
      puVar6 = (undefined4 *)*DAT_08000648;
      bVar1 = *DAT_0800064c;
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
    puVar5 = DAT_08000650;
    *puVar4 = 0;
    *puVar5 = puVar6;
  }
  return;
}


// 08000654

undefined4 FUN_08000654(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_08000690;
  if ((*DAT_08000684 <= param_1) || (*(int *)(*DAT_08000688 + param_1 * 8) != param_2)) {
    *DAT_0800068c = 0x2d;
    FUN_08003f58(uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  return *(undefined4 *)(*DAT_08000688 + param_1 * 8 + 4);
}


// 08000694

void FUN_08000694(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_080006e8;
  piVar1 = DAT_080006dc;
  if (param_1 < *DAT_080006d8) {
    if ((*(int *)(*DAT_080006dc + (short)param_1 * 8) == 0) && (*DAT_080006e0 == 0)) {
      *(undefined4 *)(*DAT_080006dc + (short)param_1 * 8) = param_2;
      uVar2 = FUN_0800050c(param_3);
      *(undefined4 *)(*piVar1 + param_1 * 8 + 4) = uVar2;
      return;
    }
  }
  *DAT_080006e4 = 0x2e;
  FUN_08003f58(uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_08002038();
}


// 080006ec

int FUN_080006ec(byte *param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  byte bVar4;
  
  piVar1 = (int *)(*DAT_08000728 + (uint)(byte)(*param_1 + 1) * 8);
  bVar2 = *param_1 + 1;
  do {
    bVar4 = bVar2;
    piVar3 = piVar1;
    if (*DAT_0800072c <= bVar4) {
      return 0;
    }
    piVar1 = piVar3 + 2;
    bVar2 = bVar4 + 1;
  } while (*piVar3 != param_2);
  *param_1 = bVar4;
  return piVar3[1];
}


// 0800076c

void FUN_0800076c(void)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  psVar2 = DAT_080007a4;
  uVar3 = FUN_080043bc(DAT_080007a8);
  sVar1 = *psVar2;
  uVar5 = *DAT_080007ac;
  uVar4 = FUN_08001fb8();
  FUN_08000e1c(uVar3,sVar1 != 0,uVar5,uVar4,*psVar2);
  return;
}


// 080007b0

void FUN_080007b0(undefined4 *param_1)

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
  
  puVar4 = DAT_0800084c;
  puVar3 = PTR_s_Already_finalized_08000848;
  psVar1 = DAT_08000830;
  if (*DAT_08000830 != 0) {
    *DAT_08000840 = 0x2c;
    FUN_08003f58(puVar3);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  uVar11 = (uint)*DAT_08000834;
  uVar8 = *DAT_0800084c;
  if (uVar11 < 4) {
    uVar11 = 4;
    *DAT_08000834 = 4;
  }
  uVar5 = FUN_08006b70();
  puVar3 = PTR_s_alloc_chunks_failed_08000844;
  iVar7 = 0;
  do {
    uVar9 = uVar8 + uVar11;
    if (uVar5 < uVar9) {
      if (iVar7 == 0) {
        *DAT_08000840 = 0x29;
        FUN_08003f58(puVar3);
                    /* WARNING: Subroutine does not return */
        FUN_08002038();
      }
      sVar10 = (short)iVar7;
      goto LAB_080007e8;
    }
    iVar7 = iVar7 + 1;
    uVar8 = uVar9;
  } while (iVar7 != 0x1000);
  sVar10 = 0x1000;
LAB_080007e8:
  uVar6 = FUN_0800050c(uVar8 - *puVar4);
  puVar2 = DAT_08000838;
  *psVar1 = sVar10;
  *puVar2 = uVar6;
  FUN_08000604();
  *DAT_0800083c = *param_1;
  return;
}


// 08000850

void FUN_08000850(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_080043bc(DAT_0800086c);
  uVar2 = FUN_08006c0c();
  FUN_08000e1c(uVar1,uVar2);
  return;
}


// 08000870

void FUN_08000870(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_08006c0c();
  iVar3 = *DAT_080008a0;
  if (uVar1 < *DAT_080008a4) {
    iVar3 = iVar3 + 1;
  }
  uVar2 = FUN_080043bc(DAT_080008a8);
  FUN_08000e1c(uVar2,iVar3,uVar1);
  return;
}


// 080008ac

void FUN_080008ac(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  
  puVar3 = DAT_08000954;
  piVar2 = DAT_08000950;
  piVar1 = DAT_0800094c;
  *DAT_0800094c = *DAT_0800094c + 1;
  uVar5 = param_2 - param_1;
  *piVar2 = *piVar2 + uVar5;
  if (uVar5 < 0x10000) {
    uVar8 = *puVar3;
    uVar5 = uVar8 + (uVar5 * uVar5 + 0xff >> 8);
  }
  else {
    if (0xfffff < uVar5) {
      uVar5 = 0xffffffff;
      goto LAB_080008e0;
    }
    uVar8 = *puVar3;
    uVar5 = uVar5 * (uVar5 + 0xff >> 8) + uVar8;
  }
  if (uVar5 < uVar8) {
    uVar5 = 0xffffffff;
  }
LAB_080008e0:
  *puVar3 = uVar5;
  puVar4 = DAT_08000964;
  iVar6 = FUN_08006bfc(DAT_08000958);
  iVar6 = FUN_08006c04(param_2,iVar6 + *puVar4);
  if (iVar6 != 0) {
    return;
  }
  uVar7 = FUN_080043bc(DAT_0800095c);
  FUN_08000e1c(uVar7,*piVar1,*piVar2,*puVar3);
  if (param_2 < *puVar4) {
    *DAT_08000960 = *DAT_08000960 + 1;
  }
  *puVar4 = param_2;
  *puVar3 = 0;
  *piVar2 = 0;
  *piVar1 = 0;
  return;
}


// 08000ab0

void FUN_08000ab0(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar3 = FUN_08000654(*param_1,DAT_08000af8);
  uVar2 = DAT_08000b00;
  bVar1 = param_1[4];
  if ((uint)*(byte *)(iVar3 + 0x1e) <= (uint)bVar1) {
    *DAT_08000afc = 0x26;
    FUN_08003f58(uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  FUN_08005f68(&local_18,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  puVar4 = (undefined4 *)(iVar3 + (bVar1 + 4) * 8);
  *puVar4 = local_18;
  puVar4[1] = uStack_14;
  return;
}


// 08000bc0

void FUN_08000bc0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_19 [5];
  
  iVar4 = FUN_08001fa8(DAT_08000c2c);
  uVar3 = DAT_08000c34;
  uVar2 = DAT_08000c30;
  if (iVar4 != 0) {
    local_19[0] = 0xff;
LAB_08000bd6:
    iVar4 = FUN_080006ec(local_19,uVar2);
    if (iVar4 != 0) {
      while (*(char *)(iVar4 + 0x1c) == -1) {
        FUN_08006b78();
        cVar1 = *(char *)(iVar4 + 0x12);
        if (cVar1 == '\0') {
          FUN_08006b7c();
          break;
        }
        *(undefined1 *)(iVar4 + 0x1c) = *(undefined1 *)(iVar4 + 0x1d);
        FUN_08006b7c();
        uVar5 = FUN_080043bc(uVar3);
        FUN_08000e1c(uVar5,local_19[0],*(undefined1 *)(iVar4 + 0x1b),cVar1,iVar4 + 0x13);
        iVar4 = FUN_080006ec(local_19,uVar2);
        if (iVar4 == 0) {
          return;
        }
      }
      goto LAB_08000bd6;
    }
  }
  return;
}


// 08000c38

void FUN_08000c38(void)

{
  return;
}


// 08000c3c

void FUN_08000c3c(byte *param_1,byte *param_2,int param_3,uint *param_4)

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
    if (4 < bVar2) goto LAB_08000c94;
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
LAB_08000c94:
        if (bVar2 != 7) goto LAB_08000cb2;
        pbVar1 = param_1 + 1;
        bVar2 = *param_1;
        param_1 = pbVar1 + bVar2;
        if (param_2 < param_1) goto LAB_08000cb2;
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
LAB_08000cb2:
  FUN_08003f58(DAT_08000cbc);
                    /* WARNING: Subroutine does not return */
  FUN_08002038();
}


// 08000cc0

byte * FUN_08000cc0(byte *param_1,ushort *param_2,uint *param_3,undefined4 param_4)

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
                    goto LAB_08000dec;
                  }
                  pbVar7 = pbVar5;
                } while (pbVar13 != pbVar5);
                bVar10 = ((char)pbVar13 - (char)pbVar11) - 1;
              }
              else {
                bVar10 = 0;
              }
            }
LAB_08000dec:
            *pbVar11 = bVar10;
LAB_08000d54:
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
              goto LAB_08000d54;
            }
            if (1 < uVar12 - 6) break;
            uVar12 = (int)pbVar13 - (int)pbVar11;
            if (*param_3 <= (uint)((int)pbVar13 - (int)pbVar11)) {
              uVar12 = *param_3;
            }
            *pbVar11 = (byte)uVar12;
            iVar3 = FUN_08007320(pbVar11 + 1,param_3[1],uVar12,pbVar11 + 1,param_4);
            pbVar11 = (byte *)(iVar3 + uVar12);
            param_3 = param_3 + 2;
          }
          if (pbVar6 + 1 == pbVar14 + bVar8) goto LAB_08000d98;
          pbVar6 = pbVar6 + 1;
        } while (pbVar11 <= pbVar13);
      }
      FUN_08003f58(DAT_08000e18);
                    /* WARNING: Subroutine does not return */
      FUN_08002038();
    }
LAB_08000d98:
    pbVar11 = pbVar11 + (3 - (int)param_1);
    bVar8 = (byte)pbVar11;
  }
  pbVar6 = DAT_08000e14;
  *param_1 = bVar8;
  param_1[1] = *pbVar6;
  uVar2 = FUN_08006da0(param_1,pbVar11 + -3);
  param_1[(int)(pbVar11 + -3)] = (byte)((ushort)uVar2 >> 8);
  param_1[(int)(pbVar11 + -2)] = (byte)uVar2;
  param_1[(int)(pbVar11 + -1)] = 0x7e;
  return pbVar11;
}


// 08000e1c

void FUN_08000e1c(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = DAT_08000e44;
  if (*DAT_08000e44 == '\0') {
    *DAT_08000e44 = '\x01';
    FUN_08006ad0(param_1);
    *pcVar1 = '\0';
  }
  return;
}


// 08000e48

void FUN_08000e48(void)

{
  *DAT_08000e50 = 0;
  return;
}


// 08000e54

undefined4 FUN_08000e54(byte *param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  pbVar4 = DAT_08000f28;
  if (param_2 == 0) {
LAB_08000e60:
    *param_3 = 0;
    return 0;
  }
  uVar8 = (uint)*DAT_08000f28;
  if (-1 < (int)(uVar8 << 0x1f)) {
    if (param_2 < 5) goto LAB_08000e60;
    uVar8 = (uint)*param_1;
    if ((uVar8 - 5 < 0x3c) && (bVar2 = param_1[1], (bVar2 & 0xf0) == 0x10)) {
      if (param_2 < uVar8) goto LAB_08000e60;
      if (param_1[uVar8 - 1] == 0x7e) {
        bVar3 = param_1[uVar8 - 2];
        bVar1 = param_1[uVar8 - 3];
        uVar7 = FUN_08006da0();
        pbVar5 = DAT_08000f30;
        if (CONCAT11(bVar1,bVar3) == uVar7) {
          bVar1 = *pbVar4;
          bVar3 = *DAT_08000f30;
          *param_3 = uVar8;
          *pbVar4 = bVar1 & 0xfd;
          if (bVar3 == bVar2) {
            *pbVar5 = bVar3 + 1 & 0xf | 0x10;
            return 1;
          }
          goto LAB_08000eb8;
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
  iVar6 = FUN_080001d0(param_1,0x7e,param_2);
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
LAB_08000eb8:
  FUN_08000e1c(DAT_08000f2c);
  return 0xffffffff;
}


// 08000f34

void FUN_08000f34(int param_1,int param_2)

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
  
  iVar2 = DAT_08000fe0;
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
    if ((uVar5 == 0) || (*DAT_08000fd8 <= uVar5)) break;
    local_24 = iVar2 + uVar5 * 0x10;
    iVar1 = -((uint)*(byte *)(local_24 + 2) * 4 + 7 & 0x7f8);
    pbVar7 = (byte *)FUN_08000c3c(pbVar3,pbVar6,local_24,auStack_28 + iVar1);
    iVar4 = FUN_08001fb8();
    if ((iVar4 == 0) || ((int)((uint)*(byte *)(local_24 + 3) << 0x1f) < 0)) {
      FUN_08006b98();
      (**(code **)(uVar5 * 0x10 + iVar2 + 0xc))(auStack_28 + iVar1);
    }
    else {
      FUN_08001ff4();
    }
  }
  FUN_08003f58(DAT_08000fdc);
                    /* WARNING: Subroutine does not return */
  FUN_08002038();
}


// 08000fe4

void FUN_08000fe4(void)

{
  FUN_08000e1c(DAT_08000fec);
  return;
}


// 08001038

void FUN_08001038(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  puVar1 = (uint *)FUN_08000c38(param_1[1]);
  uVar3 = param_1[2];
  FUN_08006b80();
  if ((uVar2 & 0xff) == 1) {
    *(short *)puVar1 = (short)uVar3;
    FUN_08006b88();
    return;
  }
  if ((uVar2 & 0xff) == 2) {
    *puVar1 = uVar3;
    FUN_08006b88();
    return;
  }
  *(char *)puVar1 = (char)uVar3;
  FUN_08006b88();
  return;
}


// 08001078

void FUN_08001078(uint *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  uVar1 = FUN_08000c38(param_1[1]);
  uVar2 = FUN_080043bc(DAT_0800109c);
  FUN_08000e1c(uVar2,uVar3 & 0xff,uVar1);
  return;
}


// 080010a4

void FUN_080010a4(undefined1 *param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_08000694(*param_1,DAT_080010d4,0x28);
  FUN_08005f68(&local_18,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(iVar1 + 0xc) = local_18;
  *(undefined4 *)(iVar1 + 0x10) = uStack_14;
  return;
}


// 0800129c

undefined4 FUN_0800129c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  
  iVar5 = param_1 + 0x28;
  iVar2 = FUN_08000598(iVar5);
  puVar1 = PTR_s_Missed_scheduling_of_next_digita_08001414;
  if (iVar2 != 0) {
    *DAT_0800140c = 0x1d;
    FUN_08003f58(puVar1);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  iVar2 = FUN_080005c4(iVar5);
  uVar4 = *(uint *)(iVar2 + 8);
  bVar7 = uVar4 != 0;
  uVar6 = (uint)bVar7;
  FUN_08005ee8(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),uVar6,
               (undefined4 *)(param_1 + 0x18),param_4);
  FUN_08000554(iVar2);
  if ((uVar4 == 0) || (*(uint *)(param_1 + 0x24) <= uVar4)) {
    if (((uint)(uVar4 == 0) == -((int)((*(byte *)(param_1 + 0x30) ^ 0x10) << 0x1b) >> 0x1f)) ||
       (*(int *)(param_1 + 0x20) == 0)) {
      iVar2 = FUN_08000598(iVar5);
      if (iVar2 != 0) {
        *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0x10 | bVar7;
        *(undefined4 *)(param_1 + 0x14) = 0;
        return 0;
      }
      uVar6 = 0;
      goto LAB_08001376;
    }
    uVar6 = uVar6 | 4;
    iVar2 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 8);
    iVar3 = FUN_08000598(iVar5);
    if (iVar3 != 0) goto LAB_08001336;
LAB_080013c8:
    bVar7 = (byte)uVar6;
    iVar5 = FUN_080005a4(iVar5);
    iVar3 = *(int *)(iVar5 + 4);
    iVar5 = FUN_08006c04(iVar2,iVar3);
    puVar1 = PTR_s_Scheduled_digital_out_event_will_08001410;
    uVar6 = uVar6 & 2;
    iVar2 = iVar3;
    if (iVar5 != 0) {
      *DAT_0800140c = 0x1e;
      FUN_08003f58(puVar1);
                    /* WARNING: Subroutine does not return */
      FUN_08002038();
    }
LAB_0800137e:
    *(int *)(param_1 + 0x14) = iVar2;
    *(byte *)(param_1 + 0x30) = bVar7 | 4 | *(byte *)(param_1 + 0x30) & 0x10;
    if (uVar6 == 0) goto LAB_08001398;
  }
  else {
    if (*(int *)(param_1 + 0x20) == 0) {
      bVar7 = bVar7 | 2;
      iVar2 = FUN_08000598(iVar5);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0x10 | bVar7;
        iVar5 = *(int *)(param_1 + 8) + uVar4;
        goto LAB_08001358;
      }
      uVar6 = 2;
LAB_08001376:
      iVar2 = FUN_080005a4(iVar5);
      iVar2 = *(int *)(iVar2 + 4);
      goto LAB_0800137e;
    }
    uVar6 = uVar6 | 6;
    iVar2 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 8);
    iVar3 = FUN_08000598(iVar5);
    if (iVar3 == 0) goto LAB_080013c8;
LAB_08001336:
    *(int *)(param_1 + 0x14) = iVar2;
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0x10 | (byte)uVar6;
    if (-1 < (int)(uVar6 << 0x1e)) goto LAB_08001398;
  }
  iVar5 = *(int *)(param_1 + 8) + uVar4;
  iVar3 = FUN_08006c04(iVar5,iVar2);
  if (iVar3 != 0) {
LAB_08001358:
    *(undefined4 *)(param_1 + 4) = DAT_08001408;
    *(int *)(param_1 + 8) = iVar5;
    *(uint *)(param_1 + 0xc) = uVar4;
    *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x24) - uVar4;
    return 1;
  }
LAB_08001398:
  *(int *)(param_1 + 8) = iVar2;
  return 1;
}


// 080014ac

void FUN_080014ac(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = FUN_08000654(*param_1,PTR_LAB_08001240_1_0800153c);
  iVar4 = FUN_08000564();
  uVar5 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar4 + 4) = uVar5;
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 8);
  FUN_08006b78();
  iVar4 = FUN_080005a8(iVar4,iVar3 + 0x28);
  if (iVar4 != 0) {
    bVar1 = *(byte *)(iVar3 + 0x30);
    if (((int)((uint)bVar1 << 0x1d) < 0) &&
       (iVar4 = FUN_08006c04(*(undefined4 *)(iVar3 + 0x14),uVar5), uVar2 = DAT_08001548, iVar4 != 0)
       ) {
      *DAT_08001544 = 0x20;
      FUN_08003f58(uVar2);
                    /* WARNING: Subroutine does not return */
      FUN_08002038();
    }
    *(byte *)(iVar3 + 0x30) = bVar1 | 4;
    *(undefined4 *)(iVar3 + 0x14) = uVar5;
    if (((int)((uint)bVar1 << 0x1e) < 0) &&
       (iVar4 = FUN_08006c04(*(undefined4 *)(iVar3 + 8),uVar5), iVar4 != 0)) {
      FUN_08006b7c();
      return;
    }
    FUN_08001e80(iVar3);
    *(undefined **)(iVar3 + 4) = PTR_FUN_0800129c_1_08001540;
    *(undefined4 *)(iVar3 + 8) = uVar5;
    FUN_080020a4(iVar3,0xf);
  }
  FUN_08006b7c();
  return;
}


// 0800154c

void FUN_0800154c(undefined4 *param_1)

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
  iVar1 = FUN_08006c0c();
  iVar2 = FUN_08006bfc(1);
  if ((iVar3 - iVar1) - iVar2 < 0) {
    iVar3 = FUN_08006bfc(1000);
    iVar3 = iVar3 + iVar1;
  }
  local_24 = uVar4;
  iStack_20 = iVar3;
  local_1c = uVar5;
  FUN_080014ac(&local_24);
  return;
}


// 0800162c

void FUN_0800162c(void)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined1 local_11 [5];
  
  uVar1 = DAT_0800167c;
  local_11[0] = 0xff;
  while( true ) {
    iVar2 = FUN_080006ec(local_11,uVar1);
    if (iVar2 == 0) break;
    FUN_08005ee8(*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x1c),
                 *(byte *)(iVar2 + 0x30) & 0x10);
    bVar3 = *(byte *)(iVar2 + 0x30) & 0x10;
    if ((*(byte *)(iVar2 + 0x30) & 0x10) != 0) {
      bVar3 = 0x11;
    }
    *(byte *)(iVar2 + 0x30) = bVar3;
    FUN_080005d0(iVar2 + 0x28);
  }
  return;
}


// 08001680

void FUN_08001680(undefined4 *param_1)

{
  undefined1 auStack_10 [12];
  
  FUN_08005e50(auStack_10,*param_1,param_1[1]);
  return;
}


// 080016a8

void FUN_080016a8(undefined4 param_1)

{
  FUN_08000654(param_1,DAT_080016b0);
  return;
}


// 080016b4

void FUN_080016b4(undefined1 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  puVar1 = (undefined4 *)FUN_08000654(*param_1,DAT_080016f0);
  FUN_08006264(&local_18,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),uVar2 & 0x7f);
  *puVar1 = local_18;
  puVar1[1] = uStack_14;
  *(byte *)(puVar1 + 3) = *(byte *)(puVar1 + 3) | 2;
  return;
}


// 08001700

void FUN_08001700(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)FUN_08000654(*param_1,DAT_0800173c);
  uVar1 = param_1[4];
  uVar3 = FUN_08000c38(*(undefined4 *)(param_1 + 8));
  if ((int)((uint)*(byte *)(puVar2 + 3) << 0x1f) < 0) {
    FUN_08004d48(puVar2[2],uVar1,uVar3);
    return;
  }
  FUN_08006364(*puVar2,puVar2[1],uVar1);
  return;
}


// 08001740

void FUN_08001740(undefined1 *param_1)

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
  puVar4 = (undefined4 *)FUN_08000654(uVar1,PTR_LAB_08001698_1_080017b0);
  uVar2 = param_1[4];
  uVar5 = FUN_08000c38(*(undefined4 *)(param_1 + 8));
  uVar7 = (uint)(byte)param_1[0xc];
  iVar3 = -(uVar7 + 7 & 0x1f8);
  puVar8 = auStack_20 + iVar3;
  if ((int)((uint)*(byte *)(puVar4 + 3) << 0x1f) < 0) {
    uVar6 = puVar4[2];
    *(undefined1 **)((int)auStack_28 + iVar3) = puVar8;
    FUN_08004d74(uVar6,uVar2,uVar5,uVar7);
  }
  else {
    *(uint *)((int)auStack_28 + iVar3) = uVar7;
    *(undefined1 **)((int)auStack_28 + iVar3 + 4) = puVar8;
    FUN_080063c4(*puVar4,puVar4[1],uVar2);
  }
  uVar5 = FUN_080043bc(PTR_s_i2c_read_response_oid__c_respons_080017b4);
  FUN_08000e1c(uVar5,uVar1,uVar7,puVar8);
  return;
}


// 080017b8

void FUN_080017b8(undefined1 *param_1)

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
  
  puVar5 = (undefined4 *)FUN_08000654(*param_1,PTR_LAB_08001698_1_080018ac);
  uVar8 = (uint)(byte)param_1[4];
  local_28 = FUN_08000c38(*(undefined4 *)(param_1 + 8));
  if ((int)(*(uint *)(param_1 + 0xc) << 0x1f) < 0) {
    FUN_08003f58(PTR_s_i2c_modify_bits__Odd_number_of_b_080018b0);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  uVar11 = (*(uint *)(param_1 + 0xc) & 0x1ff) >> 1;
  uVar15 = uVar8 + uVar11;
  iVar6 = FUN_08000c38(*(undefined4 *)(param_1 + 0x10));
  local_24 = (uint)*(byte *)(puVar5 + 3);
  iVar3 = -(uVar15 + 7 & 0xfffffff8);
  iVar14 = (int)&local_28 + iVar3;
  FUN_08007320(iVar14,local_28,uVar8);
  uVar4 = local_28;
  local_24 = local_24 & 1;
  if (local_24 == 0) {
    *(uint *)(&stack0xffffffd4 + iVar3) = iVar14 + uVar8;
    *(uint *)((int)&uStack_30 + iVar3) = uVar11;
    FUN_080063c4(*puVar5,puVar5[1],uVar8);
    if (uVar11 == 0) goto LAB_0800188a;
  }
  else {
    uVar7 = puVar5[2];
    *(uint *)((int)&uStack_30 + iVar3) = iVar14 + uVar8;
    FUN_08004d74(uVar7,uVar8,uVar4,uVar11);
    if (uVar11 == 0) goto LAB_0800185a;
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
LAB_0800188a:
    FUN_08006364(*puVar5,puVar5[1],uVar15 & 0xff,iVar14);
    return;
  }
LAB_0800185a:
  FUN_08004d48(puVar5[2],uVar15 & 0xff,iVar14);
  return;
}


// 080018b4

void FUN_080018b4(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_18 [8];
  
  iVar3 = *DAT_080018e0;
  if (0 < iVar3) {
    iVar1 = 0;
    puVar2 = DAT_080018e4;
    do {
      iVar1 = iVar1 + 1;
      FUN_08005e50(auStack_18,*puVar2,*(byte *)(puVar2 + 1) & 1);
      puVar2 = puVar2 + 2;
    } while (iVar1 != iVar3);
  }
  return;
}


// 080018e8

void FUN_080018e8(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
  FUN_08005e50(&local_18,*(undefined4 *)(param_1 + 4),0);
  uVar2 = DAT_08001940;
  uVar4 = *(uint *)(param_1 + 8);
  if ((int)(uVar4 << 0x10) < 0) {
    *DAT_0800193c = 0x1a;
    FUN_08003f58(uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  puVar1 = (undefined4 *)FUN_08000694(*param_1,DAT_08001938,(uVar4 & 0xffff) + 0x18 & 0xffff);
  *puVar1 = local_18;
  puVar1[1] = uStack_14;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(short *)(puVar1 + 5) = (short)uVar4;
  puVar1[2] = uVar2;
  puVar1[4] = uVar3;
  return;
}


// 08001944

void FUN_08001944(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_08000654(*param_1,DAT_0800198c);
  iVar5 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 4);
  uVar3 = FUN_08000c38(*(undefined4 *)(param_1 + 0xc));
  uVar1 = DAT_08001994;
  if ((iVar4 << 0x10 < 0) || ((uint)*(ushort *)(iVar2 + 0x14) < (uint)(iVar4 + iVar5))) {
    *DAT_08001990 = 0x1b;
    FUN_08003f58(uVar1,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  FUN_08007320(iVar2 + iVar4 + 0x16,uVar3,iVar5);
  return;
}


// 08001998

void FUN_08001998(undefined1 *param_1)

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
  puVar3 = (undefined4 *)FUN_08000654(uVar1,DAT_08001b2c);
  iVar12 = puVar3[3];
  uVar11 = puVar3[4];
  iVar4 = FUN_08006c0c();
  uVar5 = iVar4 - iVar12;
  while (uVar5 < uVar11) {
    FUN_08006b98();
    iVar4 = FUN_08006c0c();
    uVar5 = iVar4 - iVar12;
  }
  uVar6 = *puVar3;
  uVar9 = puVar3[1];
  uVar2 = *(ushort *)(puVar3 + 5);
  iVar4 = FUN_08006c0c();
  uVar5 = DAT_08001b40;
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
          uVar7 = FUN_08006bfc(DAT_08001b30);
          do {
            iVar4 = FUN_08006c0c();
          } while ((uint)(iVar4 - iVar12) < (uint)((ulonglong)uVar5 * (ulonglong)uVar7 >> 0x32));
          FUN_08006b78();
          iVar4 = FUN_08006c0c();
          FUN_08005eb0(uVar6,uVar9);
          FUN_08006b7c();
          if (uVar11 <= (uint)(iVar4 - iVar12)) goto LAB_08001afc;
          uVar7 = FUN_08006bfc(DAT_08001b34);
          do {
            iVar12 = FUN_08006c0c();
          } while ((uint)(iVar12 - iVar4) < (uint)((ulonglong)uVar5 * (ulonglong)uVar7 >> 0x32));
          FUN_08006b78();
          FUN_08005eb0(uVar6,uVar9);
          FUN_08006b7c();
          iVar12 = FUN_08006c0c();
          uVar7 = FUN_08006bfc(DAT_08001b38);
          do {
            iVar8 = FUN_08006c0c();
          } while ((uint)(iVar8 - iVar12) < (uint)((ulonglong)uVar5 * (ulonglong)uVar7 >> 0x32));
        }
        else {
          uVar7 = FUN_08006bfc(DAT_08001b30);
          do {
            iVar4 = FUN_08006c0c();
          } while ((uint)(iVar4 - iVar12) < (uint)((ulonglong)uVar5 * (ulonglong)uVar7 >> 0x32));
          FUN_08006b78();
          iVar4 = FUN_08006c0c();
          FUN_08005eb0(uVar6,uVar9);
          uVar7 = FUN_08006bfc(DAT_08001b38);
          do {
            iVar8 = FUN_08006c0c();
          } while ((uint)(iVar8 - iVar4) < (uint)((ulonglong)uVar5 * (ulonglong)uVar7 >> 0x32));
          FUN_08005eb0(uVar6,uVar9);
          FUN_08006b7c();
          if (uVar11 <= (uint)(iVar4 - iVar12)) {
LAB_08001afc:
            FUN_08005ee8(uVar6,uVar9,0);
            uVar6 = FUN_08006c0c();
            uVar9 = 0;
            puVar3[3] = uVar6;
            goto LAB_08001b10;
          }
        }
        uVar13 = uVar13 << 1;
        iVar14 = iVar14 + -1;
        iVar12 = iVar4;
      } while (iVar14 != 0);
      local_40 = pbVar10;
    } while (pbVar10 != (byte *)((int)puVar3 + 0x16) + uVar2);
  }
  uVar6 = FUN_08006c0c();
  uVar9 = 1;
  puVar3[3] = uVar6;
LAB_08001b10:
  uVar6 = FUN_080043bc(DAT_08001b3c);
  FUN_08000e1c(uVar6,uVar1,uVar9);
  return;
}


// 08001b44

void FUN_08001b44(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar2 = FUN_08000694(*param_1,DAT_08001b78,0x2c);
  FUN_08005f68(&local_18,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  uVar1 = DAT_08001b7c;
  *(undefined4 *)(iVar2 + 0x24) = local_18;
  *(undefined4 *)(iVar2 + 0x28) = uStack_14;
  *(undefined4 *)(iVar2 + 4) = uVar1;
  return;
}


// 08001b80

undefined4 FUN_08001b80(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 8);
  uVar2 = FUN_08005fb8(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  if ((uVar4 & 1) != uVar2) {
    *(int *)(param_1 + 0x1c) = iVar5;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  iVar3 = FUN_08006c04(*(undefined4 *)(param_1 + 0x14),iVar5);
  uVar1 = DAT_08001be0;
  if (iVar3 == 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc);
    return 1;
  }
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + iVar5;
  FUN_08001f98(uVar1);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc);
  return 1;
}


// 08001c14

void FUN_08001c14(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_11;
  
  iVar3 = FUN_08001fa8(DAT_08001c88);
  uVar2 = DAT_08001c90;
  uVar1 = DAT_08001c8c;
  if (iVar3 != 0) {
    local_11 = 0xff;
    while (iVar3 = FUN_080006ec(&local_11,uVar1), iVar3 != 0) {
      while ((int)((uint)*(byte *)(iVar3 + 0x20) << 0x1f) < 0) {
        FUN_08006b78();
        uVar5 = *(undefined4 *)(iVar3 + 8);
        uVar6 = *(undefined4 *)(iVar3 + 0x18);
        *(byte *)(iVar3 + 0x20) = *(byte *)(iVar3 + 0x20) & 0xfe;
        uVar7 = *(undefined4 *)(iVar3 + 0x1c);
        FUN_08006b7c();
        uVar4 = FUN_080043bc(uVar2);
        FUN_08000e1c(uVar4,local_11,uVar5,uVar6,uVar7);
        iVar3 = FUN_080006ec(&local_11,uVar1);
        if (iVar3 == 0) {
          return;
        }
      }
    }
  }
  return;
}


// 08001d74

void FUN_08001d74(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_08000654(*param_1,PTR_LAB_08001c94_1_08001de8);
  iVar2 = FUN_08000564();
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 4);
  *(short *)(iVar2 + 8) = (short)*(undefined4 *)(param_1 + 8);
  FUN_08006b78();
  iVar3 = FUN_080005a8(iVar2,iVar1 + 0x18);
  FUN_08006b7c();
  if (iVar3 == 0) {
    return;
  }
  FUN_08001e80(iVar1);
  if ((*(undefined **)(iVar1 + 4) == PTR_LAB_08001d58_1_08001dec) &&
     (iVar3 = FUN_08006c04(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar2 + 4)),
     uVar4 = DAT_08001df8, iVar3 != 0)) {
    *DAT_08001df4 = 0x19;
    FUN_08003f58(uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  uVar4 = *(undefined4 *)(iVar2 + 4);
  *(undefined **)(iVar1 + 4) = PTR_LAB_08001cd0_1_08001df0;
  *(undefined4 *)(iVar1 + 8) = uVar4;
  FUN_080020a4(iVar1,0x2d);
  return;
}


// 08001dfc

void FUN_08001dfc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_11;
  
  uVar2 = DAT_08001e38;
  uVar1 = DAT_08001e34;
  local_11 = 0xff;
  while (iVar3 = FUN_080006ec(&local_11,uVar1), iVar3 != 0) {
    FUN_08006194(*(undefined4 *)(iVar3 + 0xc),*(undefined2 *)(iVar3 + 0x14));
    *(undefined4 *)(iVar3 + 4) = uVar2;
    FUN_080005d0(iVar3 + 0x18);
  }
  return;
}


// 08001e80

void FUN_08001e80(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_08006b80();
  puVar2 = DAT_08001ecc;
  piVar1 = DAT_08001ec4;
  puVar3 = (undefined4 *)*DAT_08001ec4;
  if ((undefined4 *)*DAT_08001ec4 == param_1) {
    DAT_08001ecc[2] = param_1[2];
    *puVar2 = *param_1;
    *piVar1 = (int)puVar2;
  }
  else {
    do {
      puVar2 = puVar3;
      puVar3 = (undefined4 *)*puVar2;
      if (puVar3 == (undefined4 *)0x0) goto LAB_08001e9e;
    } while (puVar3 != param_1);
    *puVar2 = *param_1;
  }
LAB_08001e9e:
  if ((undefined4 *)piVar1[1] == param_1) {
    piVar1[1] = DAT_08001ec8;
  }
  FUN_08006b88();
  return;
}


// 08001ed0

int FUN_08001ed0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  
  piVar1 = DAT_08001f48;
  piVar8 = (int *)*DAT_08001f48;
  if ((code *)piVar8[1] == (code *)0x0) {
    iVar2 = thunk_FUN_08003254();
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
    iVar4 = FUN_08006c04(iVar7,*(undefined4 *)(iVar4 + 8));
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)piVar1[1];
      uVar3 = puVar5[2];
      iVar2 = *(int *)(*piVar8 + 8);
      *piVar1 = *piVar8;
      iVar4 = FUN_08006c04(iVar7,uVar3);
      if (iVar4 != 0) {
        puVar5 = (undefined4 *)*piVar1;
      }
      do {
        puVar6 = puVar5;
        puVar5 = (undefined4 *)*puVar6;
        iVar4 = FUN_08006c04(iVar7,puVar5[2]);
      } while (iVar4 == 0);
      *piVar8 = (int)puVar5;
      piVar1[1] = (int)piVar8;
      *puVar6 = piVar8;
      return iVar2;
    }
  }
  return iVar7;
}


// 08001f4c

void FUN_08001f4c(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  uVar4 = DAT_08001f78;
  puVar3 = DAT_08001f74;
  piVar2 = DAT_08001f70;
  puVar1 = DAT_08001f6c;
  DAT_08001f70[2] = DAT_08001f6c[2];
  *puVar3 = piVar2;
  puVar3[1] = puVar1;
  *piVar2 = (int)puVar1;
  *puVar1 = uVar4;
  FUN_08006c18();
  return;
}


// 08001f7c

void FUN_08001f7c(void)

{
  *(undefined1 *)(DAT_08001f84 + 8) = 0;
  return;
}


// 08001f88

uint FUN_08001f88(void)

{
  return (~(uint)*(byte *)(DAT_08001f94 + 8) & 0xff) >> 7;
}


// 08001f98

void FUN_08001f98(undefined1 *param_1)

{
  *(undefined1 *)(DAT_08001fa4 + 8) = 0;
  *param_1 = 1;
  return;
}


// 08001fa8

bool FUN_08001fa8(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    *param_1 = '\0';
  }
  return cVar1 != '\0';
}


// 08001fb8

bool FUN_08001fb8(void)

{
  return *(char *)(DAT_08001fc4 + 9) != '\0';
}


// 08001fc8

void FUN_08001fc8(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_080043bc(DAT_08001fe4);
  FUN_08000e1c(uVar1,*DAT_08001ff0,*DAT_08001fec,*DAT_08001fe8);
  return;
}


// 08001ff4

void FUN_08001ff4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_080043bc(DAT_08002020);
  FUN_08000e1c(uVar1,*DAT_0800202c,*DAT_08002028,*DAT_08002024);
  uVar1 = FUN_080043bc(DAT_08002030);
  FUN_08000e1c(uVar1,*(undefined1 *)(DAT_08002034 + 10));
  return;
}


// 08002038

void FUN_08002038(undefined4 param_1)

{
  FUN_08006b78();
  FUN_0800027c(uRam0800204c,param_1);
  FUN_08003f58(DAT_0800205c);
                    /* WARNING: Subroutine does not return */
  FUN_08002038();
}


// 08002090

void FUN_08002090(void)

{
  if (*(char *)(DAT_080020a0 + 9) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  return;
}


// 080020a4

void FUN_080020a4(undefined4 *param_1,undefined1 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  piVar7 = DAT_08002140;
  iVar8 = param_1[2];
  uVar3 = FUN_08006b80();
  piVar6 = (int *)*piVar7;
  iVar4 = FUN_08006c04(iVar8,piVar6[2]);
  if (iVar4 == 0) {
    do {
      piVar7 = piVar6;
      piVar6 = (int *)*piVar7;
      iVar4 = FUN_08006c04(iVar8,piVar6[2]);
    } while (iVar4 == 0);
    *param_1 = piVar6;
    *piVar7 = (int)param_1;
  }
  else {
    uVar5 = FUN_08006c0c();
    iVar4 = FUN_08006c04(iVar8,uVar5);
    uVar2 = DAT_08002134;
    if (iVar4 != 0) {
      *DAT_08002130 = iVar8;
      *DAT_08002138 = uVar5;
      *DAT_0800213c = param_2;
      FUN_08003f58(uVar2);
      if (*(char *)((int)piVar7 + 9) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_08002038();
      }
    }
    piVar1 = DAT_0800212c;
    *piVar7 = (int)DAT_0800212c;
    if (piVar6 == piVar1) {
      piVar6 = (int *)*piVar6;
    }
    *param_1 = piVar6;
    piVar1[2] = iVar8;
    *piVar1 = (int)param_1;
    FUN_08006c18();
  }
  FUN_08006b88(uVar3);
  return;
}


// 08002278

void FUN_08002278(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08000654(*param_1,DAT_080022bc);
  FUN_08001e80();
  *(undefined1 *)(iVar1 + 0x14) = 0;
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  *(int *)(iVar1 + 0xc) = *(int *)(param_1 + 4);
  FUN_0800545c(iVar1 + 0x16);
  FUN_08006b78();
  iVar2 = FUN_08006c0c();
  *(int *)(iVar1 + 8) = iVar2 + *(int *)(iVar1 + 0xc);
  FUN_080020a4(iVar1,0);
  FUN_08006b7c();
  return;
}


// 080022c0

void FUN_080022c0(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 local_1c;
  
  iVar1 = FUN_08000654(*param_1,DAT_08002310);
  local_1c = 0xb9;
  iVar2 = FUN_08006c0c();
  FUN_08002e58(*(undefined4 *)(iVar1 + 0x10),1,2,&local_1c);
  iVar3 = FUN_08006c0c();
  if ((local_1c._1_1_ & 0xffffff7f) < 0x21) {
    FUN_08005498(iVar1 + 0x16,*param_1,iVar2,iVar3 - iVar2,(local_1c._1_1_ & 0xffffff7f) * 5);
  }
  return;
}


// 08002314

void FUN_08002314(void)

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
  
  iVar5 = FUN_08001fa8(DAT_08002468);
  puVar3 = DAT_08002470;
  uVar2 = DAT_0800246c;
  uVar1 = DAT_08002468;
  if (iVar5 == 0) {
    return;
  }
  local_2d = 0xff;
  do {
    while( true ) {
      do {
        iVar5 = FUN_080006ec(&local_2d,uVar2);
        uVar4 = local_2d;
        if (iVar5 == 0) {
          return;
        }
      } while (-1 < (int)((uint)*(byte *)(iVar5 + 0x14) << 0x1f));
      local_2c = *puVar3;
      local_28 = puVar3[1];
      local_24 = (byte)puVar3[2];
      FUN_08002e58(*(undefined4 *)(iVar5 + 0x10),1,9,&local_2c);
      uVar6 = (uint)*(byte *)(iVar5 + 0x1a);
      iVar9 = uVar6 + 0x1b + iVar5;
      if (((local_2c & 0xf00000) == 0) || ((local_2c._2_1_ & 0xf0) == 0xf0)) break;
LAB_08002382:
      *(undefined1 *)(iVar9 + 4) = 0xff;
      *(undefined1 *)(iVar9 + 3) = 0xff;
      *(undefined1 *)(iVar9 + 2) = 0xff;
      *(undefined1 *)(iVar9 + 1) = 0xff;
      *(undefined1 *)(iVar5 + uVar6 + 0x1b) = 0xff;
      bVar7 = *(char *)(iVar5 + 0x1a) + 5;
      *(byte *)(iVar5 + 0x1a) = bVar7;
      if (0x2e < bVar7) {
        FUN_08005468(iVar5 + 0x16,uVar4);
      }
LAB_080023a6:
      *(byte *)(iVar5 + 0x14) = *(byte *)(iVar5 + 0x14) & 0xfe;
      FUN_08006b78();
      iVar9 = FUN_08006c0c();
      *(int *)(iVar5 + 8) = iVar9 + *(int *)(iVar5 + 0xc);
      FUN_080020a4(iVar5,0);
      FUN_08006b7c();
    }
    if (((local_28 & 0xf0) != 0) && ((local_28 & 0xf0) != 0xf0)) goto LAB_08002382;
    if ((((local_28 & 0xf00000) != 0) && ((local_28._2_1_ & 0xf0) != 0xf0)) ||
       (local_28._3_1_ != -0x70)) goto LAB_08002382;
    bVar7 = local_24 & 0x7f;
    bVar10 = local_24 & 0x7f;
    if (0x20 < bVar10) goto LAB_08002382;
    *(undefined1 *)(uVar6 + iVar5 + 0x1b) = local_2c._1_1_;
    *(undefined1 *)(iVar9 + 1) = local_2c._3_1_;
    *(undefined1 *)(iVar9 + 2) = local_28._1_1_;
    *(byte *)(iVar9 + 3) = local_2c._2_1_ & 0x1f | local_28._2_1_ << 5;
    *(byte *)(iVar9 + 4) = (local_28._2_1_ & 0x18) << 2 | (byte)local_28 & 0x1f;
    bVar8 = *(char *)(iVar5 + 0x1a) + 5;
    *(byte *)(iVar5 + 0x1a) = bVar8;
    if (0x2e < bVar8) {
      FUN_08005468(iVar5 + 0x16,uVar4);
    }
    if (bVar10 < 0x1f) {
      if (1 < bVar7) goto LAB_08002444;
      goto LAB_080023a6;
    }
    *(short *)(iVar5 + 0x18) = *(short *)(iVar5 + 0x18) + 1;
LAB_08002444:
    FUN_08001f98(uVar1);
  } while( true );
}


// 08002504

void FUN_08002504(int param_1,int param_2,int param_3,undefined4 param_4)

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


// 08002590

void FUN_08002590(undefined1 *param_1)

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
  iVar3 = FUN_08000654(uVar1,PTR_LAB_08002474_1_08002664);
  uVar10 = param_1[4];
  uVar4 = FUN_08000c38(*(undefined4 *)(param_1 + 8));
  cVar2 = *(char *)(iVar3 + 0x15);
  if (cVar2 == '\x02') {
    FUN_08002e48(&local_28,*(undefined4 *)(iVar3 + 0x10));
    FUN_08005ee8(local_28,uStack_24,0);
    iVar6 = FUN_08006c0c();
    iVar5 = FUN_08006bfc(1);
    while( true ) {
      uVar8 = FUN_08006c0c();
      iVar9 = FUN_08006c04(iVar6 + iVar5,uVar8);
      if (iVar9 != 0) break;
      FUN_08006b98();
    }
    FUN_08006b78();
    FUN_08005ee8(local_28,uStack_24,1);
    iVar6 = FUN_08006c0c();
    FUN_08006b7c();
    FUN_08002e58(*(undefined4 *)(iVar3 + 0x10),1,uVar10,uVar4);
  }
  else {
    iVar5 = FUN_08006c0c();
    FUN_08002e58(*(undefined4 *)(iVar3 + 0x10),1,uVar10,uVar4);
    iVar6 = FUN_08006c0c();
    uVar7 = FUN_08006bfc(0x32);
    if (uVar7 < (uint)(iVar6 - iVar5)) {
      uVar10 = 0;
    }
    if (cVar2 != '\x01') {
      iVar6 = iVar5;
    }
  }
  uVar8 = FUN_080043bc(PTR_s_spi_angle_transfer_response_oid__08002668);
  FUN_08000e1c(uVar8,uVar1,iVar6,uVar10,uVar4);
  return;
}


// 0800266c

void FUN_0800266c(void)

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
  
  iVar3 = FUN_08001fa8(DAT_08002984);
  uVar2 = DAT_08002988;
  if (iVar3 != 0) {
    local_35 = 0xff;
LAB_08002686:
    iVar3 = FUN_080006ec(&local_35,uVar2);
    if (iVar3 != 0) {
      while ((int)((uint)*(byte *)(iVar3 + 0x14) << 0x1d) < 0) {
        FUN_08006b78();
        bVar8 = *(byte *)(iVar3 + 0x17);
        *(undefined1 *)(iVar3 + 0x14) = 0;
        *(undefined1 *)(iVar3 + 0x17) = 0;
        iVar13 = *(int *)(iVar3 + 8);
        FUN_08006b7c();
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
            FUN_08005468(iVar3 + 0x18,local_35);
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_080026f2;
          }
        }
LAB_080026f2:
        cVar1 = *(char *)(iVar3 + 0x15);
        if (cVar1 == '\0') {
          local_2c = CONCAT22(local_2c._2_2_,0x32);
          iVar12 = FUN_08006c0c();
          FUN_08002e58(*(undefined4 *)(iVar3 + 0x10),1,2,&local_2c);
          iVar13 = FUN_08006c0c();
          uVar14 = FUN_08006bfc(0x32);
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
LAB_08002782:
            iVar10 = iVar3 + (uint)*(byte *)(iVar3 + 0x1c);
            uVar11 = *(byte *)(iVar3 + 0x1c) + 3;
            *(undefined1 *)(iVar10 + 0x1d) = 0xff;
            uVar14 = uVar11 & 0xff;
            *(undefined1 *)(iVar10 + 0x1f) = 0;
            *(undefined1 *)(iVar10 + 0x1e) = 3;
            *(char *)(iVar3 + 0x1c) = (char)uVar11;
          }
          else {
            FUN_08002504(iVar3,iVar10,iVar12,(local_2c & 0xff) << 9 | (local_2c >> 8 & 0xff) << 1);
            uVar14 = (uint)*(byte *)(iVar3 + 0x1c);
          }
        }
        else if (cVar1 == '\x01') {
          local_2c = CONCAT22(local_2c._2_2_,0xfe7f);
          iVar12 = FUN_08006c0c();
          FUN_08002e58(*(undefined4 *)(iVar3 + 0x10),0,2,&local_2c);
          iVar13 = FUN_08006c0c();
          uVar14 = FUN_08006bfc(0x32);
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
            FUN_08002e58(*(undefined4 *)(iVar3 + 0x10),1,2,&local_2c);
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
                FUN_08002504(iVar3,iVar10,iVar13,(uint)local_2c._1_1_ << 2 | (local_2c & 0xff) << 10
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
          FUN_08002e48(&local_34,*(undefined4 *)(iVar3 + 0x10));
          FUN_08005ee8(local_34,uStack_30,0);
          iVar10 = FUN_08006c0c();
          iVar6 = FUN_08006bfc(1);
          while( true ) {
            uVar4 = FUN_08006c0c();
            iVar5 = FUN_08006c04(iVar10 + iVar6,uVar4);
            if (iVar5 != 0) break;
            FUN_08006b98();
          }
          FUN_08006b78();
          FUN_08005ee8(local_34,uStack_30,1);
          iVar10 = FUN_08006c0c();
          FUN_08006b7c();
          local_2c = 0x2384;
          local_24 = 0;
          local_28 = 0;
          FUN_08002e58(*(undefined4 *)(iVar3 + 0x10),1,10,&local_2c);
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
          if (local_24._1_1_ != (byte)~bVar8) goto LAB_08002782;
          if ((int)((uint)(byte)local_24 << 0x1b) < 0) {
            if (local_2c._2_1_ < '\0') {
              uVar14 = FUN_08006bfc(0x555);
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
        FUN_08005468(iVar3 + 0x18,local_35);
        iVar3 = FUN_080006ec(&local_35,uVar2);
        if (iVar3 == 0) {
          return;
        }
      }
      goto LAB_08002686;
    }
  }
  return;
}


// 080029fc

void FUN_080029fc(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08000654(*param_1,DAT_08002a44);
  FUN_08001e80();
  *(undefined1 *)(iVar1 + 0x18) = 0;
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  *(int *)(iVar1 + 0xc) = *(int *)(param_1 + 4);
  FUN_0800545c(iVar1 + 0x1a);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  FUN_08006b78();
  iVar2 = FUN_08006c0c();
  *(int *)(iVar1 + 8) = iVar2 + *(int *)(iVar1 + 0xc);
  FUN_080020a4(iVar1,0);
  FUN_08006b7c();
  return;
}


// 08002a48

void FUN_08002a48(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1c [4];
  undefined1 local_18 [3];
  byte local_15;
  byte local_14;
  byte local_13;
  
  iVar1 = FUN_08000654(*param_1,DAT_08002ad0);
  local_1c[0] = 0x3a;
  FUN_080063c4(**(undefined4 **)(iVar1 + 0x10),(*(undefined4 **)(iVar1 + 0x10))[1],1,local_1c,1,
               &local_15);
  if ((int)((uint)local_15 << 0x1b) < 0) {
    *(short *)(iVar1 + 0x1c) = *(short *)(iVar1 + 0x1c) + 1;
  }
  local_18[0] = 0x72;
  iVar2 = FUN_08006c0c();
  FUN_080063c4(**(undefined4 **)(iVar1 + 0x10),(*(undefined4 **)(iVar1 + 0x10))[1],1,local_18,2,
               &local_14);
  iVar3 = FUN_08006c0c();
  FUN_08005498(iVar1 + 0x1a,*param_1,iVar2,iVar3 - iVar2,(uint)local_13 | (local_14 & 0x1f) << 8);
  return;
}


// 08002ad4

void FUN_08002ad4(void)

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
  
  iVar4 = FUN_08001fa8(DAT_08002bb4);
  uVar2 = DAT_08002bb8;
  uVar1 = DAT_08002bb4;
  if (iVar4 == 0) {
    return;
  }
  local_1d = 0xff;
  do {
    while( true ) {
      do {
        iVar4 = FUN_080006ec(&local_1d,uVar2);
        uVar3 = local_1d;
        if (iVar4 == 0) {
          return;
        }
      } while (-1 < (int)((uint)*(byte *)(iVar4 + 0x18) << 0x1f));
      if (0x2f < *(ushort *)(iVar4 + 0x16)) break;
      local_20[0] = 0x72;
      FUN_080063c4(**(undefined4 **)(iVar4 + 0x10),(*(undefined4 **)(iVar4 + 0x10))[1],1,local_20,2,
                   &local_1c);
      uVar6 = (ushort)local_1b | (local_1c & 0x1f) << 8;
      if (*(ushort *)(iVar4 + 0x14) < uVar6) {
        *(ushort *)(iVar4 + 0x14) = uVar6;
      }
      *(ushort *)(iVar4 + 0x16) = uVar6;
      if (0x2f < uVar6) break;
LAB_08002b90:
      *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) & 0xfe;
      FUN_08006b78();
      iVar5 = FUN_08006c0c();
      *(int *)(iVar4 + 8) = iVar5 + *(int *)(iVar4 + 0xc);
      FUN_080020a4(iVar4,0);
      FUN_08006b7c();
    }
    local_1c = 0x74;
    FUN_080063c4(**(undefined4 **)(iVar4 + 0x10),(*(undefined4 **)(iVar4 + 0x10))[1],1,&local_1c,
                 0x30,iVar4 + 0x1f);
    *(undefined1 *)(iVar4 + 0x1e) = 0x30;
    *(short *)(iVar4 + 0x16) = *(short *)(iVar4 + 0x16) + -0x30;
    FUN_08005468(iVar4 + 0x1a,uVar3);
    if (*(ushort *)(iVar4 + 0x16) < 0x30) goto LAB_08002b90;
    FUN_08001f98(uVar1);
  } while( true );
}


// 08002bbc

void FUN_08002bbc(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar2 = DAT_08002c48;
  bVar1 = param_1[0x10];
  if (3 < bVar1) {
    *DAT_08002c44 = 0x13;
    FUN_08003f58(uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  piVar3 = (int *)FUN_08002dac(*param_1);
  puVar4 = (undefined4 *)FUN_0800050c(0x1c);
  FUN_08005f68(&local_20,*(undefined4 *)(param_1 + 4),1);
  *puVar4 = local_20;
  puVar4[1] = uStack_1c;
  FUN_08005e50(&local_28,*(undefined4 *)(param_1 + 8),0);
  puVar4[2] = local_28;
  puVar4[3] = uStack_24;
  FUN_08005e50(&local_28,*(undefined4 *)(param_1 + 0xc),0);
  puVar4[4] = local_28;
  puVar4[5] = uStack_24;
  *(byte *)(puVar4 + 6) = bVar1;
  uVar2 = DAT_08002e3c;
  if ((*(byte *)(piVar3 + 4) & 6) != 0) {
    *DAT_08002e38 = 0x12;
    FUN_08003f58(uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  *(byte *)(piVar3 + 4) = *(byte *)(piVar3 + 4) | 2;
  *piVar3 = (int)puVar4;
  return;
}


// 08002c4c

void FUN_08002c4c(int param_1)

{
  FUN_08005ee8(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
               *(byte *)(param_1 + 0x18) & 2);
  return;
}


// 08002c60

void FUN_08002c60(undefined4 *param_1,int param_2,int param_3,int param_4)

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
          FUN_08005ee8(param_1[2],param_1[3]);
          FUN_08005ec4(*puVar5,param_1[5]);
          uVar1 = FUN_08005fb8(*param_1,param_1[1]);
          FUN_08005ec4(*puVar5,param_1[5]);
          iVar7 = iVar7 + -1;
          bVar4 = bVar4 << 1;
          uVar3 = (uVar3 & 0x7f) << 1 | uVar1 & 0xff;
          bVar2 = (byte)uVar3;
          if (iVar7 == 0) goto LAB_08002d00;
        }
        FUN_08005ec4(*puVar5,param_1[5],bVar4 & 0x80);
        FUN_08005ee8(param_1[2],param_1[3],bVar4 & 0x80);
        FUN_08005ec4(*puVar5,param_1[5]);
        uVar1 = FUN_08005fb8(*param_1,param_1[1]);
        iVar7 = iVar7 + -1;
        bVar4 = bVar4 << 1;
        uVar3 = (uVar3 & 0x7f) << 1 | uVar1 & 0xff;
        bVar2 = (byte)uVar3;
      } while (iVar7 != 0);
LAB_08002d00:
      if (param_2 != 0) {
        *pbVar6 = bVar2;
      }
    } while ((byte *)(param_4 + (param_3 - 1U & 0xff)) != pbVar6);
  }
  return;
}


// 08002d14

void FUN_08002d14(undefined1 *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_08000694(*param_1,DAT_08002d58,0x14);
  iVar3 = *(int *)(param_1 + 8);
  FUN_08005e50(&local_18,*(undefined4 *)(param_1 + 4),iVar3 == 0);
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


// 08002dac

void FUN_08002dac(undefined4 param_1)

{
  FUN_08000654(param_1,DAT_08002db4);
  return;
}


// 08002db8

void FUN_08002db8(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  puVar2 = (undefined4 *)FUN_08000654(*param_1,DAT_08002e08);
  uVar1 = DAT_08002e10;
  if ((3 < (byte)param_1[8]) || ((*(byte *)(puVar2 + 4) & 6) != 0)) {
    *DAT_08002e0c = 0x11;
    FUN_08003f58(uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  FUN_08006488(&local_18,*(undefined4 *)(param_1 + 4),param_1[8],*(undefined4 *)(param_1 + 0xc));
  *puVar2 = local_18;
  puVar2[1] = uStack_14;
  *(byte *)(puVar2 + 4) = *(byte *)(puVar2 + 4) | 4;
  return;
}


// 08002e40

byte FUN_08002e40(int param_1)

{
  return *(byte *)(param_1 + 0x10) & 1;
}


// 08002e48

undefined4 * FUN_08002e48(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *param_1 = *(undefined4 *)(param_2 + 8);
  param_1[1] = uVar1;
  return param_1;
}


// 08002e58

void FUN_08002e58(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  uVar2 = (uint)bVar1;
  if ((bVar1 & 6) == 0) {
    return;
  }
  if ((int)(uVar2 << 0x1e) < 0) {
    FUN_08002c4c(*param_1);
    if (-1 < (int)(uVar2 << 0x1f)) {
      FUN_08002c60(*param_1,param_2,param_3,param_4);
      return;
    }
    FUN_08005ee8(param_1[2],param_1[3],(uVar2 & 0xf) >> 3);
    FUN_08002c60(*param_1,param_2,param_3,param_4);
  }
  else {
    FUN_0800652c(*param_1,param_1[1]);
    if (-1 < (int)(uVar2 << 0x1f)) {
      FUN_08006550(*param_1,param_1[1],param_2,param_3,param_4);
      return;
    }
    FUN_08005ee8(param_1[2],param_1[3],(uVar2 & 0xf) >> 3);
    FUN_08006550(*param_1,param_1[1],param_2,param_3,param_4);
  }
  FUN_08005ee8(param_1[2],param_1[3],(bVar1 >> 3 ^ 1) & 1);
  return;
}


// 08002f54

void FUN_08002f54(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_08000654(*param_1,DAT_08002f80);
  uVar1 = param_1[4];
  uVar3 = FUN_08000c38(*(undefined4 *)(param_1 + 8));
  FUN_08002e58(uVar2,0,uVar1,uVar3);
  return;
}


// 08002f84

void FUN_08002f84(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_9;
  
  uVar1 = DAT_08002fe0;
  local_9 = 0xff;
  while (iVar3 = FUN_080006ec(&local_9,uVar1), uVar2 = DAT_08002fe4, iVar3 != 0) {
    if ((int)((uint)*(byte *)(iVar3 + 0x10) << 0x1f) < 0) {
      FUN_08005ee8(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),
                   ((*(byte *)(iVar3 + 0x10) ^ 8) & 0xf) >> 3);
    }
  }
  local_9 = 0xff;
  while( true ) {
    puVar4 = (undefined4 *)FUN_080006ec(&local_9,uVar2);
    if (puVar4 == (undefined4 *)0x0) break;
    FUN_08002e58(*puVar4,0,*(undefined1 *)(puVar4 + 1),(int)puVar4 + 5);
  }
  return;
}


// 08002fe8

undefined4 FUN_08002fe8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = FUN_08000598(param_1 + 0x34);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    return 0;
  }
  iVar3 = FUN_080005c4(param_1 + 0x34);
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
    FUN_08005eb0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 (undefined4 *)(param_1 + 0x28),iVar4,param_4);
  }
  else {
    *(uint *)(param_1 + 0x30) = uVar5 + *(int *)(param_1 + 0x30);
  }
  FUN_08000554(iVar3);
  return 1;
}


// 080030f8

void FUN_080030f8(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = FUN_08000694(*param_1,DAT_080031c8,0x48);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 < 1) {
    *(undefined1 *)(iVar1 + 0x44) = 0;
    FUN_08005e50(&local_20,*(undefined4 *)(param_1 + 4),0);
    *(undefined4 *)(iVar1 + 0x20) = local_20;
    *(undefined4 *)(iVar1 + 0x24) = uStack_1c;
    FUN_08005e50(&local_20,*(undefined4 *)(param_1 + 8),0);
    *(undefined4 *)(iVar1 + 0x28) = local_20;
    *(undefined4 *)(iVar1 + 0x2c) = uStack_1c;
    *(undefined4 *)(iVar1 + 0x30) = 0xc0000000;
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
    FUN_080005d8(iVar1 + 0x34,0x10);
    if ((*(int *)(iVar1 + 0x1c) == 0) && (iVar2 != 0)) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) | 0x10;
      return;
    }
  }
  else {
    *(undefined1 *)(iVar1 + 0x44) = 4;
    FUN_08005e50(&local_20,*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(iVar1 + 0x20) = local_20;
    *(undefined4 *)(iVar1 + 0x24) = uStack_1c;
    FUN_08005e50(&local_20,*(undefined4 *)(param_1 + 8),0);
    *(undefined4 *)(iVar1 + 0x28) = local_20;
    *(undefined4 *)(iVar1 + 0x2c) = uStack_1c;
    *(undefined4 *)(iVar1 + 0x30) = 0xc0000000;
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
    FUN_080005d8(iVar1 + 0x34,0x10);
  }
  *(undefined4 *)(iVar1 + 4) = DAT_080031cc;
  return;
}


// 080031d0

void FUN_080031d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  FUN_08001e80(param_1 + -0x3c);
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
  FUN_08005ee8(*(undefined4 *)(param_1 + -0x14),*(undefined4 *)(param_1 + -0x10),0,
               (undefined4 *)(param_1 + -0x14),param_4);
  iVar1 = (uint)*(byte *)(param_1 + 8) << 0x1b;
  if (-1 < iVar1) {
    FUN_08005ee8(*(undefined4 *)(param_1 + -0x1c),*(undefined4 *)(param_1 + -0x18),
                 *(byte *)(param_1 + 8) & 4,iVar1,param_4);
  }
  while (iVar1 = FUN_08000598(param_1 + -8), iVar1 == 0) {
    FUN_080005c4(param_1 + -8);
    FUN_08000554();
  }
  return;
}


// 08003254

undefined4 FUN_08003254(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x24) == 0x10) {
    FUN_08005eb0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    iVar3 = *(int *)(param_1 + 0x14);
    puVar1 = DAT_080032f0;
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0x80) {
      FUN_08005eb0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
      iVar3 = *(int *)(param_1 + 0x14) + -1;
      if (iVar3 != 0) {
        *(int *)(param_1 + 0x14) = iVar3;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc);
        *(int *)(param_1 + 0xc) = (int)*(short *)(param_1 + 0x10) + *(int *)(param_1 + 0xc);
        return 1;
      }
      goto LAB_080032d6;
    }
    FUN_08005eb0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    iVar3 = *(int *)(param_1 + 0x14);
    puVar1 = DAT_080032f0;
  }
  DAT_080032f0 = puVar1;
  if (iVar3 + -1 != 0) {
    uVar4 = *DAT_080032ec + 1;
    *DAT_080032ec = uVar4;
    if ((uVar4 == *puVar1 * (uVar4 / *puVar1)) && (*puVar1 != 0)) {
      FUN_08005eb0(*DAT_080032f4,DAT_080032f4[1]);
    }
    *(int *)(param_1 + 0x14) = iVar3 + -1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = (int)*(short *)(param_1 + 0x10) + *(int *)(param_1 + 0xc);
    return 1;
  }
LAB_080032d6:
  uVar2 = FUN_08002fe8(param_1);
  return uVar2;
}


// 080032f8

undefined4 thunk_FUN_08003254(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x24) == 0x10) {
    FUN_08005eb0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    iVar3 = *(int *)(param_1 + 0x14);
    puVar1 = DAT_080032f0;
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0x80) {
      FUN_08005eb0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
      iVar3 = *(int *)(param_1 + 0x14) + -1;
      if (iVar3 != 0) {
        *(int *)(param_1 + 0x14) = iVar3;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc);
        *(int *)(param_1 + 0xc) = (int)*(short *)(param_1 + 0x10) + *(int *)(param_1 + 0xc);
        return 1;
      }
      goto LAB_080032d6;
    }
    FUN_08005eb0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    iVar3 = *(int *)(param_1 + 0x14);
    puVar1 = DAT_080032f0;
  }
  DAT_080032f0 = puVar1;
  if (iVar3 + -1 != 0) {
    uVar4 = *DAT_080032ec + 1;
    *DAT_080032ec = uVar4;
    if ((uVar4 == *puVar1 * (uVar4 / *puVar1)) && (*puVar1 != 0)) {
      FUN_08005eb0(*DAT_080032f4,DAT_080032f4[1]);
    }
    *(int *)(param_1 + 0x14) = iVar3 + -1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = (int)*(short *)(param_1 + 0x10) + *(int *)(param_1 + 0xc);
    return 1;
  }
LAB_080032d6:
  uVar2 = FUN_08002fe8(param_1);
  return uVar2;
}


// 080032fc

void FUN_080032fc(undefined1 *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = FUN_08000654(*param_1,DAT_080033a4);
  iVar4 = FUN_08000564();
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 4);
  sVar1 = *(short *)(param_1 + 8);
  *(short *)(iVar4 + 10) = sVar1;
  uVar2 = DAT_080033ac;
  if (sVar1 == 0) {
    *DAT_080033a8 = 0xf;
    FUN_08003f58(uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  *(short *)(iVar4 + 8) = (short)*(undefined4 *)(param_1 + 0xc);
  *(undefined1 *)(iVar4 + 0xc) = 0;
  FUN_08006b78();
  uVar5 = (uint)*(byte *)(iVar3 + 0x44);
  if ((uVar5 & 1) != -((int)(uVar5 << 0x1e) >> 0x1f)) {
    uVar5 = uVar5 ^ 1;
    *(byte *)(iVar4 + 0xc) = *(byte *)(iVar4 + 0xc) | 1;
  }
  if (*(int *)(iVar3 + 0x14) != 0) {
    *(char *)(iVar3 + 0x44) = (char)uVar5;
    FUN_080005a8(iVar4,iVar3 + 0x34);
    FUN_08006b7c();
    return;
  }
  if ((int)(uVar5 << 0x1c) < 0) {
    FUN_08000554(iVar4);
    FUN_08006b7c();
    return;
  }
  *(char *)(iVar3 + 0x44) = (char)uVar5;
  FUN_080005a8(iVar4,iVar3 + 0x34);
  FUN_08002fe8(iVar3);
  FUN_080020a4(iVar3,0x16);
  FUN_08006b7c();
  return;
}


// 080034ac

void FUN_080034ac(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_11 [5];
  
  uVar1 = DAT_080034e0;
  local_11[0] = 0xff;
  while( true ) {
    iVar2 = FUN_080006ec(local_11,uVar1);
    if (iVar2 == 0) break;
    FUN_080005d0(iVar2 + 0x34);
    FUN_080031d0(iVar2 + 0x3c,0);
  }
  return;
}


// 080034e4

undefined4 FUN_080034e4(int param_1)

{
  FUN_08001f98(DAT_08003504);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) | 1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc);
  return 1;
}


// 08003508

void FUN_08003508(int param_1,undefined4 param_2,uint param_3,int param_4,undefined1 param_5)

{
  undefined4 uVar1;
  byte bVar2;
  
  uVar1 = FUN_080043bc(DAT_08003564);
  FUN_08000e1c(uVar1,param_5,param_2,param_3,param_4);
  if (((param_4 != 0) || (param_3 < *(uint *)(param_1 + 0x10))) ||
     (*(uint *)(param_1 + 0x14) < param_3)) {
    bVar2 = *(char *)(param_1 + 0x1d) + 1;
    *(byte *)(param_1 + 0x1d) = bVar2;
    if (bVar2 < *(byte *)(param_1 + 0x1c)) {
      return;
    }
    FUN_08003f58(DAT_08003568);
    FUN_08002090();
  }
  *(undefined1 *)(param_1 + 0x1d) = 0;
  return;
}


// 080035e8

void FUN_080035e8(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 local_25;
  undefined4 local_24;
  
  iVar5 = FUN_08001fa8(DAT_0800373c);
  uVar2 = DAT_08003740;
  if (iVar5 != 0) {
    local_25 = 0xff;
switchD_0800362e_default:
    iVar5 = FUN_080006ec(&local_25,uVar2);
    if (iVar5 != 0) {
      while ((int)((uint)*(byte *)(iVar5 + 0x1f) << 0x1f) < 0) {
        FUN_08006b78();
        uVar6 = *(undefined4 *)(iVar5 + 8);
        *(byte *)(iVar5 + 0x1f) = *(byte *)(iVar5 + 0x1f) & 0xfe;
        FUN_08006b7c();
        uVar3 = local_25;
        switch(*(undefined1 *)(iVar5 + 0x1e)) {
        case 0:
          local_24 = 0;
          FUN_08002e58(*(undefined4 *)(iVar5 + 0x18),1,4,&local_24);
          FUN_08003508(iVar5,uVar6,
                       local_24 << 0x18 | (local_24 >> 8 & 0xff) << 0x10 |
                       (local_24 >> 0x10 & 0xff) << 8 | local_24 >> 0x18,local_24 >> 0x18 & 7,uVar3)
          ;
          goto switchD_0800362e_default;
        case 1:
          local_24 = 0xc;
          FUN_08002e58(*(undefined4 *)(iVar5 + 0x18),1,4,&local_24);
          uVar1 = local_24;
          local_24._1_3_ = (uint3)(local_24 >> 8) & 0xffff00;
          local_24 = CONCAT31(local_24._1_3_,0xf);
          FUN_08002e58(*(undefined4 *)(iVar5 + 0x18),1,2,&local_24);
          FUN_08003508(iVar5,uVar6,
                       (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18,
                       local_24._1_1_,uVar3);
          goto switchD_0800362e_default;
        case 2:
          local_24 = 1;
          FUN_08002e58(*(undefined4 *)(iVar5 + 0x18),1,3,&local_24);
          uVar4 = local_24;
          local_24._1_3_ = (uint3)(local_24 >> 8) & 0xffff00;
          uVar1 = (uVar4 >> 0x10 & 0xff) << 8;
          local_24 = CONCAT31(local_24._1_3_,7);
          FUN_08002e58(*(undefined4 *)(iVar5 + 0x18),1,2,&local_24);
          FUN_08003508(iVar5,uVar6,((uVar4 >> 8 & 0xff) << 0x10 | uVar1) >> 8,
                       local_24 >> 8 & 0xfc | (uVar1 & 0x100) >> 8,uVar3);
          goto switchD_0800362e_default;
        case 3:
          local_24 = local_24 & 0xffff0000;
          FUN_08002e58(*(undefined4 *)(iVar5 + 0x18),1,2,&local_24);
          FUN_08003508(iVar5,uVar6,(local_24 & 0xff) << 8 | local_24 >> 8 & 0xff,local_24 >> 8 & 6,
                       uVar3);
          iVar5 = FUN_080006ec(&local_25,uVar2);
          if (iVar5 == 0) {
            return;
          }
          break;
        default:
          goto switchD_0800362e_default;
        }
      }
      goto switchD_0800362e_default;
    }
  }
  return;
}


// 08003744

void FUN_08003744(undefined1 *param_1)

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
  
  iVar2 = FUN_08000694(*param_1,DAT_080037b8,0x34);
  cVar1 = param_1[8];
  iVar6 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 0xc);
  FUN_08005f68(&local_28,iVar6,cVar1 != '\0');
  *(undefined4 *)(iVar2 + 0x14) = local_28;
  *(undefined4 *)(iVar2 + 0x18) = uStack_24;
  FUN_08005e50(&local_30,iVar5,1);
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


// 08003adc

void FUN_08003adc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_11;
  
  iVar3 = FUN_08001fa8(DAT_08003b40);
  uVar2 = DAT_08003b48;
  uVar1 = DAT_08003b44;
  if (iVar3 != 0) {
    local_11 = 0xff;
    while (iVar3 = FUN_080006ec(&local_11,uVar1), iVar3 != 0) {
      while ((int)((uint)*(byte *)(iVar3 + 0x1c) << 0x1c) < 0) {
        FUN_08006b78();
        *(byte *)(iVar3 + 0x1c) = *(byte *)(iVar3 + 0x1c) & 0xf7;
        FUN_08006b7c();
        uVar4 = FUN_080043bc(uVar2);
        FUN_08000e1c(uVar4,local_11,*(byte *)(iVar3 + 0x1e) >> 3,iVar3 + 0x28);
        iVar3 = FUN_080006ec(&local_11,uVar1);
        if (iVar3 == 0) {
          return;
        }
      }
    }
  }
  return;
}


// 08003b4c

void FUN_08003b4c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_11 [5];
  
  uVar1 = DAT_08003b98;
  local_11[0] = 0xff;
  while( true ) {
    iVar2 = FUN_080006ec(local_11,uVar1);
    if (iVar2 == 0) break;
    if ((int)((uint)*(byte *)(iVar2 + 0x1c) << 0x1a) < 0) {
      FUN_08005de0(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),1);
    }
    else {
      FUN_08005ee8(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),1);
    }
    *(byte *)(iVar2 + 0x1c) = *(byte *)(iVar2 + 0x1c) & 0x30 | 1;
  }
  return;
}


// 08003b9c

undefined4 FUN_08003b9c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_08003bc0;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 4;
  FUN_08001f98(uVar1);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x18);
  return 1;
}


// 08003be8

void FUN_08003be8(int param_1,undefined4 param_2)

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
  FUN_08001f98(DAT_08003c2c);
  return;
}


// 08003c40

void FUN_08003c40(undefined4 param_1)

{
  FUN_08000654(param_1,DAT_08003c48);
  return;
}


// 08003cf8

void FUN_08003cf8(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_08000654(*param_1,DAT_08003d40);
  FUN_08006b78();
  if ((int)((uint)*(byte *)(iVar1 + 0x20) << 0x1f) < 0) {
    FUN_08001e80();
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 4);
    FUN_080020a4(iVar1 + 0xc,0x1c);
    FUN_08006b7c();
    return;
  }
  FUN_08006b7c();
  return;
}


// 08003da0

void FUN_08003da0(void)

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
  
  iVar6 = FUN_08001fa8(DAT_08003e20);
  uVar4 = DAT_08003e28;
  uVar3 = DAT_08003e24;
  if (iVar6 != 0) {
    local_19 = 0xff;
    while (iVar6 = FUN_080006ec(&local_19,uVar3), iVar6 != 0) {
      while ((int)((uint)*(byte *)(iVar6 + 0x20) << 0x1d) < 0) {
        uVar7 = FUN_08006c0c();
        FUN_08006b78();
        bVar1 = *(byte *)(iVar6 + 0x20);
        uVar2 = *(undefined1 *)(iVar6 + 0x21);
        *(byte *)(iVar6 + 0x20) = bVar1 & 0xfb;
        FUN_08006b7c();
        uVar5 = local_19;
        uVar8 = FUN_080043bc(uVar4);
        FUN_08000e1c(uVar8,uVar5,bVar1 & 1,uVar2,uVar7);
        iVar6 = FUN_080006ec(&local_19,uVar3);
        if (iVar6 == 0) {
          return;
        }
      }
    }
  }
  return;
}


// 08003e2c

void FUN_08003e2c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_11;
  
  uVar2 = DAT_08003e80;
  local_11 = 0xff;
  iVar3 = FUN_080006ec(&local_11,DAT_08003e80);
  while (iVar3 != 0) {
    FUN_08001e80();
    FUN_08001e80(iVar3 + 0xc);
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
    iVar3 = FUN_080006ec(&local_11,uVar2);
  }
  return;
}


// 08003e84

void FUN_08003e84(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_r3;
  
  FUN_080004f4();
  FUN_080018b4();
  FUN_080065a4();
  FUN_08006c74();
  iVar1 = DAT_080069ac;
  FUN_08005d94(DAT_080069ac);
  iVar3 = FUN_08006650(iVar1);
  iVar2 = DAT_080069b4;
  *(ushort *)(iVar1 + 8) = (ushort)((ulonglong)DAT_080069b0 * (ulonglong)(iVar3 + 0x1c200) >> 0x31);
  *(undefined2 *)(iVar1 + 0xc) = 0x202c;
  *(undefined1 *)(iVar2 + 0x325) = 0;
  *(undefined4 *)(iVar2 + 4) = 0x20;
  FUN_08006678(10,0x72,1);
  FUN_08006678(9,0x72,0,in_r3);
  return;
}


// 08003ea0

void FUN_08003ea0(void)

{
  FUN_08000e48();
  FUN_08000604();
  FUN_0800162c();
  FUN_080034ac();
  FUN_08003e2c();
  FUN_08000484();
  FUN_08002f84();
  FUN_08001dfc();
  FUN_08003b4c();
  FUN_08005718();
  FUN_08005a94();
  FUN_08006b9c();
  return;
}


// 08003edc

void FUN_08003edc(void)

{
  FUN_08006b98();
  FUN_08003da0();
  FUN_08006b98();
  FUN_080003e8();
  FUN_08006b98();
  FUN_08000bc0();
  FUN_08006b98();
  FUN_08003adc();
  FUN_08006b98();
  FUN_08001c14();
  FUN_08006b98();
  FUN_080035e8();
  FUN_08006b98();
  FUN_08002314();
  FUN_08006b98();
  FUN_0800266c();
  FUN_08006b98();
  FUN_08002ad4();
  FUN_08006b98();
  FUN_08004fe4();
  FUN_08006b98();
  FUN_08005300();
  FUN_08006b98();
  FUN_08006594();
  FUN_08006b98();
  FUN_08006d78();
  FUN_08006b98();
  FUN_08006a18();
  FUN_08006b98();
  return;
}


// 08003f58

undefined4 FUN_08003f58(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0800028c(param_1,DAT_08004280);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004284);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004288);
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = FUN_0800028c(param_1,DAT_0800428c);
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004290);
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004294);
  if (iVar1 == 0) {
    return 7;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004298);
  if (iVar1 == 0) {
    return 8;
  }
  iVar1 = FUN_0800028c(param_1,DAT_0800429c);
  if (iVar1 == 0) {
    return 9;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042a0);
  if (iVar1 == 0) {
    return 10;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042a4);
  if (iVar1 == 0) {
    return 0xb;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042a8);
  if (iVar1 == 0) {
    return 0xc;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042ac);
  if (iVar1 == 0) {
    return 0xd;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042b0);
  if (iVar1 == 0) {
    return 0xe;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042b4);
  if (iVar1 == 0) {
    return 0xf;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042b8);
  if (iVar1 == 0) {
    return 0x10;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042bc);
  if (iVar1 == 0) {
    return 0x11;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042c0);
  if (iVar1 == 0) {
    return 0x12;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042c4);
  if (iVar1 == 0) {
    return 0x13;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042c8);
  if (iVar1 == 0) {
    return 0x14;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042cc);
  if (iVar1 == 0) {
    return 0x15;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042d0);
  if (iVar1 == 0) {
    return 0x16;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042d4);
  if (iVar1 == 0) {
    return 0x17;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042d8);
  if (iVar1 == 0) {
    return 0x18;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042dc);
  if (iVar1 == 0) {
    return 0x19;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042e0);
  if (iVar1 == 0) {
    return 0x1a;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042e4);
  if (iVar1 == 0) {
    return 0x1b;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042e8);
  if (iVar1 == 0) {
    return 0x1c;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042ec);
  if (iVar1 == 0) {
    return 0x1d;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042f0);
  if (iVar1 == 0) {
    return 0x1e;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042f4);
  if (iVar1 == 0) {
    return 0x1f;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042f8);
  if (iVar1 == 0) {
    return 0x20;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080042fc);
  if (iVar1 == 0) {
    return 0x21;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004300);
  if (iVar1 == 0) {
    return 0x22;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004304);
  if (iVar1 == 0) {
    return 0x23;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004308);
  if (iVar1 == 0) {
    return 0x24;
  }
  iVar1 = FUN_0800028c(param_1,DAT_0800430c);
  if (iVar1 == 0) {
    return 0x25;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004310);
  if (iVar1 == 0) {
    return 0x26;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004314);
  if (iVar1 == 0) {
    return 0x27;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004318);
  if (iVar1 == 0) {
    return 0x28;
  }
  iVar1 = FUN_0800028c(param_1,DAT_0800431c);
  if (iVar1 == 0) {
    return 0x29;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004320);
  if (iVar1 == 0) {
    return 0x2a;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004324);
  if (iVar1 == 0) {
    return 0x2b;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004328);
  if (iVar1 == 0) {
    return 0x2c;
  }
  iVar1 = FUN_0800028c(param_1,DAT_0800432c);
  if (iVar1 == 0) {
    return 0x2d;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004330);
  if (iVar1 == 0) {
    return 0x2e;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004334);
  if (iVar1 == 0) {
    return 0x2f;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004338);
  if (iVar1 == 0) {
    return 0x30;
  }
  iVar1 = FUN_0800028c(param_1,DAT_0800433c);
  if (iVar1 == 0) {
    return 0x31;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004340);
  if (iVar1 == 0) {
    return 0x32;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004344);
  if (iVar1 == 0) {
    return 0x33;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004348);
  if (iVar1 == 0) {
    uVar2 = 0x34;
  }
  else {
    uVar2 = 0xff;
  }
  return uVar2;
}


// 080043bc

undefined4 FUN_080043bc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0800028c(param_1,DAT_08004570);
  if (iVar1 == 0) {
    return DAT_080045e0;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004574);
  if (iVar1 == 0) {
    return DAT_080045dc;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004578);
  if (iVar1 == 0) {
    return DAT_080045e8;
  }
  iVar1 = FUN_0800028c(param_1,DAT_0800457c);
  if (iVar1 == 0) {
    return DAT_080045e4;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004580);
  if (iVar1 == 0) {
    return DAT_080045ec;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004584);
  if (iVar1 == 0) {
    return DAT_080045f4;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004588);
  if (iVar1 == 0) {
    return DAT_080045f8;
  }
  iVar1 = FUN_0800028c(param_1,DAT_0800458c);
  if (iVar1 == 0) {
    return DAT_080045f0;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004590);
  if (iVar1 == 0) {
    return DAT_080045fc;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004594);
  if (iVar1 == 0) {
    return DAT_08004600;
  }
  iVar1 = FUN_0800028c(param_1,DAT_08004598);
  if (iVar1 == 0) {
    return DAT_08004604;
  }
  iVar1 = FUN_0800028c(param_1,DAT_0800459c);
  if (iVar1 == 0) {
    return DAT_08004608;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080045a0);
  if (iVar1 == 0) {
    return DAT_0800460c;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080045a4);
  if (iVar1 == 0) {
    return DAT_08004610;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080045a8);
  if (iVar1 == 0) {
    return DAT_08004614;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080045ac);
  if (iVar1 == 0) {
    return DAT_08004618;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080045b0);
  if (iVar1 == 0) {
    return DAT_0800461c;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080045b4);
  if (iVar1 == 0) {
    return DAT_08004620;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080045b8);
  if (iVar1 == 0) {
    return DAT_08004624;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080045bc);
  if (iVar1 == 0) {
    return DAT_08004628;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080045c0);
  if (iVar1 == 0) {
    return DAT_08004630;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080045c4);
  if (iVar1 == 0) {
    return DAT_0800462c;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080045c8);
  if (iVar1 == 0) {
    return DAT_0800463c;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080045cc);
  if (iVar1 == 0) {
    return DAT_08004638;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080045d0);
  if (iVar1 == 0) {
    return DAT_08004634;
  }
  iVar1 = FUN_0800028c(param_1,DAT_080045d4);
  uVar2 = DAT_080045d8;
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}


// 08004640

void FUN_08004640(void)

{
  undefined4 uVar1;
  undefined2 local_14;
  undefined2 local_12;
  
  uVar1 = DAT_08004670;
  FUN_08006ef0(0x10,1);
  local_12 = 0x1003;
  local_14 = 1;
  FUN_08006e28(uVar1,&local_14);
  FUN_08006eec(uVar1,1);
  return;
}


// 08004674

void FUN_08004674(void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  
  uVar3 = DAT_0800478c;
  puVar1 = DAT_08004788;
  *(uint *)(DAT_08004784 + 0x88) = *(uint *)(DAT_08004784 + 0x88) | 0xf00000;
  *puVar1 = *puVar1 | 1;
  puVar1[1] = uVar3 & puVar1[1];
  *puVar1 = *puVar1 & 0xfef6ffff;
  *puVar1 = *puVar1 & 0xfffbffff;
  puVar1[1] = puVar1[1] & 0xf700ffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[2] = 0x9f0000;
  puVar2 = DAT_08004794;
  iVar5 = DAT_08004790;
  puVar1[7] = puVar1[7] | 0x10000000;
  *(uint *)(iVar5 + 0xc) = *(uint *)(iVar5 + 0xc) | 1;
  puVar1[7] = puVar1[7] & 0xefffffff;
  *puVar2 = *puVar2 | 0x90;
  iVar5 = 0xffff;
  *puVar1 = *puVar1 | 0x10000;
  puVar4 = DAT_08004794;
  puVar2 = DAT_08004788;
  do {
    if ((int)(*puVar1 << 0xe) < 0) break;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if ((int)(*DAT_08004788 << 0xe) < 0) {
    *DAT_08004794 = *DAT_08004794 & 0xfffffffc;
    *puVar4 = *puVar4 | 4;
    puVar2[1] = puVar2[1];
    puVar2[1] = puVar2[1] | 0x2000;
    puVar2[1] = puVar2[1] | 0x500;
    puVar2[1] = puVar2[1] & 0xf7c0ffff;
    puVar2[1] = puVar2[1] | 0x81f0000;
    *puVar2 = *puVar2 | 0x1000000;
    puVar1 = DAT_08004788;
    do {
    } while (-1 < (int)(*puVar2 << 6));
    puVar2[1] = puVar2[1] & 0xfffffffc;
    puVar2[1] = puVar2[1] | 2;
    do {
    } while ((puVar1[1] & 0xc) != 8);
  }
  else {
    *DAT_08004798 = DAT_0800479c;
  }
  *(undefined4 *)(DAT_08004784 + 8) = 0x8000000;
  return;
}


// 080047a0

void FUN_080047a0(void)

{
  uint *puVar1;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  
  puVar1 = DAT_08004804;
  local_20 = 0x21e;
  local_1e = 0x102;
  FUN_08006f20(&local_20);
  FUN_08006f08(4,1);
  local_1c = 9;
  local_1a = 0;
  local_1e = 0;
  local_20 = 0x47;
  FUN_08007090(puVar1,&local_20);
  FUN_08007258(puVar1,1,1);
  FUN_08007244(puVar1,1);
  *puVar1 = *puVar1 | 1;
  return;
}


// 0800484c

void vec_46(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint *puVar2;
  char *pcVar3;
  byte *pbVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  
  iVar8 = FUN_0800726c(DAT_08004908,1,param_3,param_4,param_4);
  if (iVar8 == 0) {
    return;
  }
  FUN_08007284(DAT_08004908,1);
  pbVar4 = DAT_08004918;
  if (DAT_08004910 < *DAT_0800490c + 1) {
    bVar9 = *DAT_08004918 + 1;
    *DAT_0800490c = 0;
    puVar2 = DAT_08004914;
    if (bVar9 < 0x3c) {
      *pbVar4 = bVar9;
    }
    uVar10 = *puVar2;
    pcVar3 = DAT_0800491c;
    if (0x3b < bVar9) {
      *pbVar4 = 0;
      pcVar3 = DAT_0800491c;
    }
  }
  else {
    *DAT_0800490c = *DAT_0800490c + 1;
    uVar10 = *DAT_08004914;
    puVar2 = DAT_08004914;
    pcVar3 = DAT_0800491c;
  }
  DAT_0800491c = pcVar3;
  if (uVar10 + 1 < 100) {
    *puVar2 = uVar10 + 1;
  }
  else {
    cVar1 = *pcVar3;
    *puVar2 = 0;
    puVar6 = DAT_08004928;
    puVar5 = DAT_08004924;
    puVar2 = DAT_08004920;
    if (((cVar1 != '\0') && (*DAT_08004920 != 0)) && (*DAT_08004924 != 0)) {
      uVar11 = *DAT_08004924;
      uVar10 = *DAT_08004928 + 1;
      *DAT_08004928 = uVar10;
      puVar7 = DAT_0800492c;
      if (uVar11 < uVar10) {
        if (*puVar5 * 2 < uVar10) {
          uVar11 = *puVar2;
          uVar10 = *DAT_0800492c;
          *DAT_0800492c = uVar10 + 1;
          if (uVar11 <= uVar10 + 1) {
            *puVar2 = 0;
            *pcVar3 = '\0';
            *puVar7 = 0;
            *puVar5 = 0;
          }
          *puVar6 = 0;
        }
        else {
          FUN_08006eec(DAT_08004930,1);
        }
      }
      else {
        FUN_08006ee8(DAT_08004930,1);
      }
    }
  }
  if (*DAT_08004834 != '\0') {
    uVar10 = *DAT_08004838 + 1;
    if (DAT_0800483c < *DAT_08004838 + 1) {
      uVar10 = DAT_08004840;
    }
    *DAT_08004838 = uVar10;
  }
  uVar10 = DAT_08004848;
  puVar2 = DAT_08004844;
  *DAT_08004844 = *DAT_08004844 + 1;
  if (uVar10 < *puVar2) {
    *puVar2 = 0;
  }
  return;
}


// 08004934

void vec_2(void)

{
  return;
}


// 08004938

void vec_3(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 0800493c

void vec_4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 08004940

void vec_5(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 08004944

void vec_6(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 08004948

void vec_11(void)

{
  return;
}


// 0800494c

void vec_12(void)

{
  return;
}


// 0800496c

char FUN_0800496c(char *param_1)

{
  char cVar1;
  
  cVar1 = param_1[1];
  if ((((*param_1 != '\0') && (cVar1 == '\0')) && (param_1[2] == '\0')) &&
     (*(uint *)(param_1 + 8) <= (uint)(*DAT_08004998 - *(int *)(param_1 + 4)))) {
    param_1[0] = '\0';
    param_1[1] = '\x01';
    cVar1 = *param_1;
  }
  return cVar1;
}


// 0800499c

void FUN_0800499c(void)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  
  puVar2 = DAT_080049b0;
  *DAT_080049ac = 0;
  puVar1 = DAT_08004968;
  *puVar2 = 1;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined4 *)(puVar2 + 4) = 30000;
  *(undefined4 *)(puVar2 + 6) = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  *puVar1 = 0;
  return;
}


// 080049b4

void FUN_080049b4(void)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  
  iVar3 = FUN_0800496c(DAT_080049d4);
  if (iVar3 == 0) {
    return;
  }
  FUN_08005cc8();
  puVar2 = DAT_080049d4;
  puVar1 = DAT_08004968;
  *DAT_080049d4 = 1;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined4 *)(puVar2 + 4) = 30000;
  *(undefined4 *)(puVar2 + 6) = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  *puVar1 = 0;
  return;
}


// 08004a5c

void FUN_08004a5c(undefined4 *param_1,byte param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  uVar5 = DAT_08004b98;
  puVar6 = param_1 + 6;
  iVar7 = 8;
  do {
    if ((int)((uint)param_2 << 0x18) < 0) {
      FUN_08005f00(*puVar6,param_1[7],1);
    }
    else {
      FUN_08005de0(param_1[2],param_1[3],0);
    }
    iVar8 = param_1[9];
    iVar2 = FUN_08006c0c();
    uVar3 = FUN_08006bfc(iVar8 * 1000);
    param_2 = param_2 << 1;
    do {
      uVar4 = FUN_08006c0c();
    } while (uVar4 < iVar2 + (uint)((ulonglong)uVar5 * (ulonglong)uVar3 >> 0x32));
    FUN_08005f00(param_1[4],param_1[5],1);
    iVar8 = param_1[9];
    iVar2 = FUN_08006c0c();
    uVar3 = FUN_08006bfc(iVar8 * 1000);
    do {
      uVar4 = FUN_08006c0c();
    } while (uVar4 < iVar2 + (uint)((ulonglong)uVar5 * (ulonglong)uVar3 >> 0x32));
    FUN_08005de0(*param_1,param_1[1],0);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  FUN_08005f00(*puVar6,param_1[7],1);
  iVar2 = param_1[9];
  iVar7 = FUN_08006c0c();
  uVar5 = FUN_08006bfc(iVar2 * 1000);
  uVar1 = (ulonglong)DAT_08004b98;
  do {
    uVar3 = FUN_08006c0c();
  } while (uVar3 < iVar7 + (uint)(uVar1 * uVar5 >> 0x32));
  FUN_08005f00(param_1[4],param_1[5],1);
  iVar7 = FUN_08005fb8(*puVar6,param_1[7]);
  iVar8 = param_1[9];
  iVar2 = FUN_08006c0c();
  uVar5 = FUN_08006bfc(iVar8 * 1000);
  uVar1 = (ulonglong)DAT_08004b98;
  do {
    uVar3 = FUN_08006c0c();
  } while (uVar3 < iVar2 + (uint)(uVar1 * uVar5 >> 0x32));
  FUN_08005de0(*param_1,param_1[1],0);
  FUN_08005f00(*puVar6,param_1[7],1);
  if (iVar7 != 0) {
    FUN_08003f58(DAT_08004b9c);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  return;
}


// 08004ba0

void FUN_08004ba0(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1[9];
  iVar2 = FUN_08006c0c();
  uVar3 = FUN_08006bfc(iVar5 * 1000);
  uVar1 = (ulonglong)DAT_08004c60;
  do {
    uVar4 = FUN_08006c0c();
  } while (uVar4 < iVar2 + (uint)(uVar1 * uVar3 >> 0x32));
  FUN_08005f00(param_1[6],param_1[7],1);
  FUN_08005f00(param_1[4],param_1[5],1);
  iVar5 = param_1[9];
  iVar2 = FUN_08006c0c();
  uVar3 = FUN_08006bfc(iVar5 * 1000);
  uVar1 = (ulonglong)DAT_08004c60;
  do {
    uVar4 = FUN_08006c0c();
  } while (uVar4 < iVar2 + (uint)(uVar1 * uVar3 >> 0x32));
  FUN_08005de0(param_1[2],param_1[3],0);
  iVar5 = param_1[9];
  iVar2 = FUN_08006c0c();
  uVar3 = FUN_08006bfc(iVar5 * 1000);
  uVar1 = (ulonglong)DAT_08004c60;
  do {
    uVar4 = FUN_08006c0c();
  } while (uVar4 < iVar2 + (uint)(uVar1 * uVar3 >> 0x32));
  FUN_08005de0(*param_1,param_1[1],0);
  FUN_08004a5c(param_1,param_2);
  return;
}


// 08004c64

void FUN_08004c64(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar2 = FUN_080016a8(*param_1);
  puVar3 = (undefined4 *)FUN_0800050c(0x2c);
  *(char *)(puVar3 + 8) = (char)(*(int *)(param_1 + 0x10) << 1);
  puVar1 = DAT_08004cf8;
  puVar3[9] = 5000;
  uVar4 = *(undefined4 *)(param_1 + 4);
  *puVar1 = *(undefined4 *)(param_1 + 0x14);
  FUN_08005f68(&local_20,uVar4,1);
  puVar3[4] = local_20;
  puVar3[5] = uStack_1c;
  FUN_08005e50(&local_28,*(undefined4 *)(param_1 + 4),1);
  *puVar3 = local_28;
  puVar3[1] = uStack_24;
  FUN_08005f68(&local_20,*(undefined4 *)(param_1 + 8),1);
  puVar3[6] = local_20;
  puVar3[7] = uStack_1c;
  FUN_08005e50(&local_28,*(undefined4 *)(param_1 + 8),1);
  puVar3[2] = local_28;
  puVar3[3] = uStack_24;
  *(undefined4 **)(iVar2 + 8) = puVar3;
  *(byte *)(iVar2 + 0xc) = *(byte *)(iVar2 + 0xc) | 1;
  return;
}


// 08004cfc

void FUN_08004cfc(int param_1)

{
  undefined1 auStack_10 [8];
  
  *DAT_08004d14 = *(undefined4 *)(param_1 + 4);
  FUN_08005e50(auStack_10,0x20,0);
  return;
}


// 08004d48

void FUN_08004d48(int param_1,int param_2,undefined1 *param_3)

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
  
  FUN_08004ba0(param_1,*(undefined1 *)(param_1 + 0x20));
  if (param_2 != 0) {
    puVar6 = param_3;
    do {
      puVar5 = puVar6 + 1;
      FUN_08004a5c(param_1,*puVar6);
      puVar6 = puVar5;
    } while (puVar5 != param_3 + param_2);
  }
  FUN_08005de0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),0,
               (undefined4 *)(param_1 + 8),unaff_r4,unaff_r5,unaff_r6,unaff_lr);
  iVar7 = *(int *)(param_1 + 0x24);
  iVar2 = FUN_08006c0c();
  uVar3 = FUN_08006bfc(iVar7 * 1000);
  uVar1 = (ulonglong)DAT_08004a58;
  do {
    uVar4 = FUN_08006c0c();
  } while (uVar4 < iVar2 + (uint)(uVar1 * uVar3 >> 0x32));
  FUN_08005f00(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),1);
  iVar7 = *(int *)(param_1 + 0x24);
  iVar2 = FUN_08006c0c();
  uVar3 = FUN_08006bfc(iVar7 * 1000);
  uVar1 = (ulonglong)DAT_08004a58;
  do {
    uVar4 = FUN_08006c0c();
  } while (uVar4 < iVar2 + (uint)(uVar1 * uVar3 >> 0x32));
  FUN_08005f00(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),1);
  return;
}


// 08004d74

void FUN_08004d74(undefined4 *param_1,int param_2,undefined1 *param_3,int param_4,byte *param_5)

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
    FUN_08004ba0(param_1,bVar10);
    puVar9 = param_3;
    do {
      puVar8 = puVar9 + 1;
      FUN_08004a5c(param_1,*puVar9);
      puVar9 = puVar8;
    } while (param_3 + param_2 != puVar8);
  }
  FUN_08004ba0(param_1,bVar10 | 1);
  uVar3 = DAT_08004f00;
  local_28 = param_4 - 1U & 0xff;
  if (param_4 != 0) {
    puVar7 = param_1 + 6;
    do {
      FUN_08005f00(*puVar7,param_1[7],1);
      iVar11 = 8;
      bVar10 = 0;
      do {
        iVar12 = param_1[9];
        iVar4 = FUN_08006c0c();
        uVar5 = FUN_08006bfc(iVar12 * 1000);
        do {
          uVar6 = FUN_08006c0c();
        } while (uVar6 < iVar4 + (uint)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x32));
        FUN_08005f00(param_1[4],param_1[5],1);
        iVar12 = param_1[9];
        iVar4 = FUN_08006c0c();
        uVar5 = FUN_08006bfc(iVar12 * 1000);
        do {
          uVar6 = FUN_08006c0c();
        } while (uVar6 < iVar4 + (uint)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x32));
        bVar2 = FUN_08005fb8(*puVar7,param_1[7]);
        bVar10 = bVar10 << 1 | bVar2;
        FUN_08005de0(*param_1,param_1[1],0);
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      FUN_08005f00(*puVar7,param_1[7],1);
      if (local_28 == 0) {
        FUN_08005f00(*puVar7,param_1[7],1);
      }
      else {
        FUN_08005de0(param_1[2],param_1[3],0);
      }
      iVar4 = param_1[9];
      iVar11 = FUN_08006c0c();
      uVar5 = FUN_08006bfc(iVar4 * 1000);
      do {
        uVar6 = FUN_08006c0c();
      } while (uVar6 < iVar11 + (uint)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x32));
      FUN_08005f00(param_1[4],param_1[5],1);
      iVar4 = param_1[9];
      iVar11 = FUN_08006c0c();
      uVar5 = FUN_08006bfc(iVar4 * 1000);
      do {
        uVar6 = FUN_08006c0c();
      } while (uVar6 < iVar11 + (uint)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x32));
      FUN_08005de0(*param_1,param_1[1],0);
      local_28 = local_28 - 1 & 0xff;
      *local_24 = bVar10;
      local_24 = local_24 + 1;
    } while (local_28 != 0xff);
  }
  FUN_08005de0(param_1[2],param_1[3],0,param_1 + 2,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
  iVar4 = param_1[9];
  iVar11 = FUN_08006c0c();
  uVar3 = FUN_08006bfc(iVar4 * 1000);
  uVar1 = (ulonglong)DAT_08004a58;
  do {
    uVar5 = FUN_08006c0c();
  } while (uVar5 < iVar11 + (uint)(uVar1 * uVar3 >> 0x32));
  FUN_08005f00(param_1[4],param_1[5],1);
  iVar4 = param_1[9];
  iVar11 = FUN_08006c0c();
  uVar3 = FUN_08006bfc(iVar4 * 1000);
  uVar1 = (ulonglong)DAT_08004a58;
  do {
    uVar5 = FUN_08006c0c();
  } while (uVar5 < iVar11 + (uint)(uVar1 * uVar3 >> 0x32));
  FUN_08005f00(param_1[6],param_1[7],1);
  return;
}


// 08004f48

void FUN_08004f48(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08000654(*param_1,DAT_08004f8c);
  FUN_08001e80();
  *(undefined1 *)(iVar1 + 0x14) = 0;
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  *(int *)(iVar1 + 0xc) = *(int *)(param_1 + 4);
  FUN_0800545c(iVar1 + 0x16);
  FUN_08006b78();
  iVar2 = FUN_08006c0c();
  *(int *)(iVar1 + 8) = iVar2 + *(int *)(iVar1 + 0xc);
  FUN_080020a4(iVar1,0);
  FUN_08006b7c();
  return;
}


// 08004f90

void FUN_08004f90(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 local_14;
  
  iVar1 = FUN_08000654(*param_1,DAT_08004fe0);
  local_14 = 0xaf;
  iVar2 = FUN_08006c0c();
  FUN_08002e58(*(undefined4 *)(iVar1 + 0x10),1,2,&local_14);
  iVar3 = FUN_08006c0c();
  FUN_08005498(iVar1 + 0x16,*param_1,iVar2,iVar3 - iVar2,(local_14._1_1_ & 0x1f) * '\x06');
  return;
}


// 08004fe4

void FUN_08004fe4(void)

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
  
  iVar6 = FUN_08001fa8(DAT_080050e4);
  uVar3 = DAT_080050e8;
  uVar2 = DAT_080050e4;
  if (iVar6 != 0) {
    local_2d = 0xff;
    while (iVar6 = FUN_080006ec(&local_2d,uVar3), uVar4 = local_2d, iVar6 != 0) {
      if ((int)((uint)*(byte *)(iVar6 + 0x14) << 0x1f) < 0) {
        bVar7 = *(byte *)(iVar6 + 0x1a);
        local_2c[0] = 0xaf;
        local_22 = 0;
        local_24 = 0;
        local_28 = 0xa8;
        FUN_08002e58(*(undefined4 *)(iVar6 + 0x10),1,7,&local_28);
        FUN_08002e58(*(undefined4 *)(iVar6 + 0x10),1,2,local_2c);
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
          FUN_08005468(iVar6 + 0x16,uVar4);
        }
        if ((uVar5 & 0x4000) != 0) {
          *(short *)(iVar6 + 0x18) = *(short *)(iVar6 + 0x18) + 1;
        }
        if (uVar1 == 0) {
          FUN_08001f98();
        }
        else {
          *(byte *)(iVar6 + 0x14) = *(byte *)(iVar6 + 0x14) & 0xfe;
          FUN_08006b78(uVar2);
          iVar8 = FUN_08006c0c();
          *(int *)(iVar6 + 8) = iVar8 + *(int *)(iVar6 + 0xc);
          FUN_080020a4(iVar6,0);
          FUN_08006b7c();
        }
      }
    }
  }
  return;
}


// 080051e4

void FUN_080051e4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08000654(*(undefined1 *)param_1,PTR_LAB_080050ec_1_0800520c);
  uVar2 = FUN_080043bc(PTR_s_ldc1612_home_state_oid__c_homing_08005210);
  FUN_08000e1c(uVar2,*param_1,(*(byte *)(iVar1 + 0x5c) & 7) >> 2,*(undefined4 *)(iVar1 + 100));
  return;
}


// 08005260

void FUN_08005260(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_1d;
  ushort local_1c [4];
  
  iVar1 = FUN_08000654(*param_1,DAT_080052fc);
  if (-1 < (int)((uint)*(byte *)(iVar1 + 0x14) << 0x1e)) {
    iVar2 = FUN_08006c0c();
    local_1d = 0x18;
    FUN_080063c4(**(undefined4 **)(iVar1 + 0x10),(*(undefined4 **)(iVar1 + 0x10))[1],1,&local_1d,2,
                 local_1c);
    iVar3 = FUN_08006c0c();
    FUN_08005498(iVar1 + 0x16,*param_1,iVar2,iVar3 - iVar2,
                 (int)((local_1c[0] & 0xff) << 8 | (uint)(local_1c[0] >> 8)) >> 1 & 4);
    return;
  }
  FUN_08006b78();
  uVar4 = FUN_08006c0c();
  iVar2 = FUN_08005fb8(*(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(iVar1 + 0x54));
  FUN_08006b7c();
  if (iVar2 == 0) {
    uVar5 = 4;
  }
  else {
    uVar5 = 0;
  }
  FUN_08005498(iVar1 + 0x16,*param_1,uVar4,0,uVar5);
  return;
}


// 08005300

void FUN_08005300(void)

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
  
  iVar5 = FUN_08001fa8(DAT_08005454);
  uVar2 = DAT_08005458;
  if (iVar5 != 0) {
    local_26 = 0xff;
LAB_0800531a:
    iVar5 = FUN_080006ec(&local_26,uVar2);
    if (iVar5 != 0) {
      while (uVar3 = local_26, (int)((uint)*(byte *)(iVar5 + 0x14) << 0x1f) < 0) {
        local_25 = 0x18;
        FUN_080063c4(**(undefined4 **)(iVar5 + 0x10),(*(undefined4 **)(iVar5 + 0x10))[1],1,&local_25
                     ,2,local_24);
        uVar4 = local_24[0];
        FUN_08006b78();
        *(byte *)(iVar5 + 0x14) = *(byte *)(iVar5 + 0x14) & 0xfe;
        FUN_08006b7c();
        if (-1 < (int)((uint)(uVar4 >> 8) << 0x1c)) break;
        bVar1 = *(byte *)(iVar5 + 0x1a);
        iVar9 = bVar1 + 0x1b + iVar5;
        local_24[0] = local_24[0] & 0xff00;
        FUN_080063c4(**(undefined4 **)(iVar5 + 0x10),(*(undefined4 **)(iVar5 + 0x10))[1],1,local_24,
                     2,iVar9);
        local_24[0] = CONCAT11(local_24[0]._1_1_,1);
        FUN_080063c4(**(undefined4 **)(iVar5 + 0x10),(*(undefined4 **)(iVar5 + 0x10))[1],1,local_24,
                     2,iVar9 + 2);
        bVar11 = *(byte *)(iVar5 + 0x5c);
        bVar7 = *(char *)(iVar5 + 0x1a) + 4;
        *(byte *)(iVar5 + 0x1a) = bVar7;
        if ((int)((uint)bVar11 << 0x1d) < 0) {
          uVar10 = (uint)*(byte *)(iVar9 + 3) | (uint)*(byte *)((uint)bVar1 + iVar5 + 0x1b) << 0x18
                   | (uint)*(byte *)(iVar9 + 1) << 0x10 | (uint)*(byte *)(iVar9 + 2) << 8;
          if (uVar10 < 0x10000000) {
            uVar6 = FUN_08006c0c();
            if ((int)((uint)bVar11 << 0x1e) < 0) {
              iVar9 = FUN_08006c04(uVar6,*(undefined4 *)(iVar5 + 100));
              if (iVar9 == 0) {
                uVar8 = *(uint *)(iVar5 + 0x60);
                goto joined_r0x08005440;
              }
            }
            else {
              uVar8 = *(uint *)(iVar5 + 0x60);
joined_r0x08005440:
              if (uVar8 < uVar10) {
                *(undefined4 *)(iVar5 + 100) = uVar6;
                FUN_08003be8(*(undefined4 *)(iVar5 + 0x58),*(undefined1 *)(iVar5 + 0x5d));
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
            FUN_08003be8(*(undefined4 *)(iVar5 + 0x58),*(undefined1 *)(iVar5 + 0x5e));
            bVar7 = *(byte *)(iVar5 + 0x1a);
          }
        }
        if (bVar7 < 0x30) break;
        FUN_08005468(iVar5 + 0x16,uVar3);
        iVar5 = FUN_080006ec(&local_26,uVar2);
        if (iVar5 == 0) {
          return;
        }
      }
      goto LAB_0800531a;
    }
  }
  return;
}


// 0800545c

void FUN_0800545c(undefined2 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


// 08005468

void FUN_08005468(short *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_080043bc(DAT_08005494);
  FUN_08000e1c(uVar1,param_2,*param_1,(char)param_1[2],(int)param_1 + 5);
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = *param_1 + 1;
  return;
}


// 08005498

void FUN_08005498(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_080043bc(DAT_080054c8);
  FUN_08000e1c(uVar1,param_2,param_3,param_4,*param_1,(uint)*(byte *)(param_1 + 2) + param_5,
               param_1[1]);
  return;
}


// 080054cc

void FUN_080054cc(int param_1,byte param_2)

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
  
  uVar4 = DAT_08005584;
  uVar3 = DAT_08005580;
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar10 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  uVar11 = *(undefined4 *)(param_1 + 0x18);
  cVar12 = '\b';
  do {
    if ((int)((uint)param_2 << 0x18) < 0) {
      param_2 = ~unaff_10000075;
      FUN_08005ec4(uVar6,uVar11);
    }
    iVar7 = FUN_08006c0c();
    uVar13 = FUN_08006bfc(uVar3);
    uVar1 = (ulonglong)uVar4 * (uVar13 & 0xffffffff);
    uVar2 = uVar1 >> 0x32;
    while( true ) {
      uVar8 = FUN_08006c0c((int)uVar13,(int)(uVar13 >> 0x20),(int)uVar1);
      iVar9 = FUN_08006c04(uVar8,iVar7 + (uint)uVar2);
      if (iVar9 == 0) break;
      uVar13 = FUN_08006b98();
      uVar1 = (ulonglong)extraout_r2;
    }
    FUN_08005ec4(uVar5,uVar10);
    iVar7 = FUN_08006c0c();
    uVar13 = FUN_08006bfc(uVar3);
    uVar1 = (ulonglong)uVar4 * (uVar13 & 0xffffffff);
    uVar2 = uVar1 >> 0x32;
    while( true ) {
      uVar8 = FUN_08006c0c((int)uVar13,(int)(uVar13 >> 0x20),(int)uVar1);
      iVar9 = FUN_08006c04(uVar8,iVar7 + (uint)uVar2);
      if (iVar9 == 0) break;
      uVar13 = FUN_08006b98();
      uVar1 = (ulonglong)extraout_r2_00;
    }
    cVar12 = cVar12 + -1;
    FUN_08005ec4(uVar5,uVar10);
    param_2 = param_2 << 1;
    unaff_10000075 = param_2;
  } while (cVar12 != '\0');
  return;
}


// 08005588

void FUN_08005588(undefined1 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int iStack_1c;
  
  piVar1 = (int *)FUN_08000694(*param_1,DAT_08005620,0x1c);
  FUN_08005e50(&local_20,*(undefined4 *)(param_1 + 8),0);
  piVar1[3] = local_20;
  piVar1[4] = iStack_1c;
  FUN_08005e50(&local_20,*(undefined4 *)(param_1 + 0xc),0);
  piVar1[5] = local_20;
  piVar1[6] = iStack_1c;
  FUN_08005e50(&local_20,*(undefined4 *)(param_1 + 4),1);
  FUN_080054cc(piVar1,0xf8);
  FUN_080054cc(piVar1,0x20);
  FUN_08006b78();
  iVar2 = FUN_08006c0c();
  FUN_080054cc(piVar1,0);
  iVar3 = FUN_08006c0c();
  FUN_08006b7c();
  *piVar1 = iVar3;
  if ((uint)(iVar3 - iVar2) < *(uint *)(param_1 + 0x10)) {
    piVar1[1] = (*(uint *)(param_1 + 0x10) + iVar2) - iVar3;
  }
  if ((uint)(iVar3 - iVar2) < *(uint *)(param_1 + 0x14)) {
    piVar1[2] = (iVar2 + *(uint *)(param_1 + 0x14)) - iVar3;
  }
  return;
}


// 080056b0

void FUN_080056b0(undefined1 *param_1)

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
  
  piVar4 = (int *)FUN_08000654(*param_1,DAT_080056e0);
  FUN_080054cc(piVar4,0xf8);
  cVar1 = param_1[4];
  pbVar5 = (byte *)FUN_08000c38(*(undefined4 *)(param_1 + 8));
  if (cVar1 == '\0') {
    return;
  }
  bVar2 = *pbVar5;
  iVar7 = *piVar4;
  uVar6 = piVar4[1];
  FUN_080054cc(piVar4,bVar2 & 0xf0);
  while( true ) {
    iVar3 = FUN_08006c0c();
    if (uVar6 <= (uint)(iVar3 - iVar7)) break;
    FUN_08006b98();
  }
  FUN_080054cc(piVar4,(bVar2 & 0xf) << 4);
  iVar7 = FUN_08006c0c();
  uVar6 = piVar4[2];
  if (cVar1 != '\x01') {
    pbVar9 = pbVar5 + 1;
    do {
      pbVar8 = pbVar9 + 1;
      bVar2 = *pbVar9;
      FUN_080054cc(piVar4,bVar2 & 0xf0);
      while( true ) {
        iVar3 = FUN_08006c0c();
        if (uVar6 <= (uint)(iVar3 - iVar7)) break;
        FUN_08006b98();
      }
      FUN_080054cc(piVar4,(bVar2 & 0xf) << 4);
      iVar7 = FUN_08006c0c();
      pbVar9 = pbVar8;
    } while (pbVar8 != pbVar5 + (byte)(cVar1 - 2) + 2);
  }
  *piVar4 = iVar7;
  return;
}


// 080056e4

void FUN_080056e4(undefined1 *param_1)

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
  
  piVar4 = (int *)FUN_08000654(*param_1,DAT_08005714);
  FUN_080054cc(piVar4,0xfa);
  cVar1 = param_1[4];
  pbVar5 = (byte *)FUN_08000c38(*(undefined4 *)(param_1 + 8));
  if (cVar1 == '\0') {
    return;
  }
  bVar2 = *pbVar5;
  iVar7 = *piVar4;
  uVar6 = piVar4[1];
  FUN_080054cc(piVar4,bVar2 & 0xf0);
  while( true ) {
    iVar3 = FUN_08006c0c();
    if (uVar6 <= (uint)(iVar3 - iVar7)) break;
    FUN_08006b98();
  }
  FUN_080054cc(piVar4,(bVar2 & 0xf) << 4);
  iVar7 = FUN_08006c0c();
  uVar6 = piVar4[2];
  if (cVar1 != '\x01') {
    pbVar9 = pbVar5 + 1;
    do {
      pbVar8 = pbVar9 + 1;
      bVar2 = *pbVar9;
      FUN_080054cc(piVar4,bVar2 & 0xf0);
      while( true ) {
        iVar3 = FUN_08006c0c();
        if (uVar6 <= (uint)(iVar3 - iVar7)) break;
        FUN_08006b98();
      }
      FUN_080054cc(piVar4,(bVar2 & 0xf) << 4);
      iVar7 = FUN_08006c0c();
      pbVar9 = pbVar8;
    } while (pbVar8 != pbVar5 + (byte)(cVar1 - 2) + 2);
  }
  *piVar4 = iVar7;
  return;
}


// 08005718

void FUN_08005718(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_11 [5];
  
  uVar1 = DAT_08005754;
  local_11[0] = 0xff;
  while( true ) {
    iVar2 = FUN_080006ec(local_11,uVar1);
    if (iVar2 == 0) break;
    FUN_08005ee8(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),0);
    FUN_08005ee8(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),0);
  }
  return;
}


// 08005758

void FUN_08005758(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_08005ec4(param_2,param_3);
  if (param_1 << 0x1b < 0) {
    FUN_08005ec4(param_4,param_5);
  }
  if (param_1 << 0x1a < 0) {
    FUN_08005ec4(param_6,param_7);
  }
  if (param_1 << 0x19 < 0) {
    FUN_08005ec4(param_8,param_9);
  }
  if (param_1 << 0x18 < 0) {
    FUN_08005ec4(param_10,param_11);
  }
  iVar2 = FUN_08006c0c();
  uVar1 = DAT_080057f4;
  uVar3 = FUN_08006bfc(DAT_080057f0);
  while( true ) {
    uVar4 = FUN_08006c0c();
    iVar5 = FUN_08006c04(uVar4,iVar2 + (uint)((ulonglong)uVar1 * (ulonglong)uVar3 >> 0x32));
    if (iVar5 == 0) break;
    FUN_08006b98();
  }
  FUN_08005ec4(param_2,param_3);
  return;
}


// 080057f8

void FUN_080057f8(int param_1,uint param_2)

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
  FUN_08005758(param_2 ^ *(byte *)(param_1 + 8),local_48,uStack_44,local_40,local_3c);
  *(char *)(param_1 + 8) = (char)(param_2 << 4);
  iVar4 = FUN_08006c0c();
  uVar7 = FUN_08006bfc(DAT_080058f0);
  uVar8 = CONCAT44((int)(uVar7 >> 0x20),DAT_080058f4);
  uVar7 = (ulonglong)DAT_080058f4 * (uVar7 & 0xffffffff);
  uVar2 = uVar7 >> 0x32;
  while( true ) {
    uVar5 = FUN_08006c0c((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7);
    iVar6 = FUN_08006c04(uVar5,iVar4 + (uint)uVar2);
    uVar5 = uStack_24;
    puVar3 = local_4c;
    if (iVar6 == 0) break;
    uVar8 = FUN_08006b98();
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
  FUN_08005758(param_2 ^ bVar1,local_48,uStack_44,local_40,local_3c);
  return;
}


// 080058f8

void FUN_080058f8(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = FUN_08000694(*param_1,DAT_080059c0,0x3c);
  FUN_08005e50(&local_20,*(undefined4 *)(param_1 + 4),0);
  *(undefined4 *)(iVar1 + 0xc) = local_20;
  *(undefined4 *)(iVar1 + 0x10) = uStack_1c;
  FUN_08005e50(&local_20,*(undefined4 *)(param_1 + 8),0);
  *(undefined4 *)(iVar1 + 0x14) = local_20;
  *(undefined4 *)(iVar1 + 0x18) = uStack_1c;
  FUN_08005e50(&local_20,*(undefined4 *)(param_1 + 0xc),0);
  *(undefined4 *)(iVar1 + 0x1c) = local_20;
  *(undefined4 *)(iVar1 + 0x20) = uStack_1c;
  FUN_08005e50(&local_20,*(undefined4 *)(param_1 + 0x10),0);
  *(undefined4 *)(iVar1 + 0x24) = local_20;
  *(undefined4 *)(iVar1 + 0x28) = uStack_1c;
  FUN_08005e50(&local_20,*(undefined4 *)(param_1 + 0x14),0);
  *(undefined4 *)(iVar1 + 0x2c) = local_20;
  *(undefined4 *)(iVar1 + 0x30) = uStack_1c;
  FUN_08005e50(&local_20,*(undefined4 *)(param_1 + 0x18),0);
  *(undefined4 *)(iVar1 + 0x34) = local_20;
  *(undefined4 *)(iVar1 + 0x38) = uStack_1c;
  FUN_08006b78();
  iVar2 = FUN_08006c0c();
  FUN_080057f8(iVar1,0);
  iVar3 = FUN_08006c0c();
  FUN_08006b7c();
  if ((uint)(iVar3 - iVar2) < *(uint *)(param_1 + 0x1c)) {
    *(uint *)(iVar1 + 4) = (*(uint *)(param_1 + 0x1c) + iVar2) - iVar3;
  }
  return;
}


// 08005a94

void FUN_08005a94(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_11;
  
  uVar1 = DAT_08005b10;
  local_11 = 0xff;
  while( true ) {
    iVar2 = FUN_080006ec(&local_11,uVar1);
    if (iVar2 == 0) break;
    FUN_08005ee8(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),0);
    FUN_08005ee8(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),0);
    FUN_08005ee8(*(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20),0);
    FUN_08005ee8(*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x28),0);
    FUN_08005ee8(*(undefined4 *)(iVar2 + 0x2c),*(undefined4 *)(iVar2 + 0x30),0);
    FUN_08005ee8(*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x38),0);
    *(undefined1 *)(iVar2 + 8) = 0;
  }
  return;
}


// 08005b14

int * FUN_08005b14(int *param_1,uint param_2)

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
  
  iVar2 = DAT_08005be0;
  iVar1 = DAT_08005bdc;
  uVar4 = 4;
  iVar5 = 0;
  pbVar3 = DAT_08005bd4;
  while( true ) {
    if (uVar4 == param_2) {
      *(uint *)(DAT_08005bdc + 0x14) = *(uint *)(DAT_08005bdc + 0x14) | 0xf000;
      *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) & 0xfffffe00 | 7;
      local_30 = 0;
      uStack_2c = 0;
      local_28 = 0;
      uStack_24 = 0xe0000;
      local_20 = 0;
      local_1c = 1;
      FUN_08006f90(iVar2,&local_30);
      *(undefined4 *)(iVar2 + 8) = 1;
      do {
      } while (-1 < *(int *)(iVar2 + 0x58) << 0x1a);
      *(uint *)(iVar2 + 0x58) = *(uint *)(iVar2 + 0x58) & 0xffffff7f;
      FUN_08006c30(10);
      *(undefined4 *)(iVar2 + 8) = 5;
      iVar1 = DAT_08005be4;
      do {
      } while ((*(uint *)(DAT_08005be0 + 8) & 4) != 0);
      if (param_2 == 0xfe) {
        *(uint *)(DAT_08005be0 + 8) = *(uint *)(DAT_08005be0 + 8) | 0x800000;
        *(uint *)(iVar1 + 0x820) = *(uint *)(iVar1 + 0x820) | 0x400;
      }
      else {
        FUN_08006678(param_2,3);
      }
      *param_1 = DAT_08005be0;
      param_1[1] = iVar5;
      return param_1;
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 0xf) break;
    pbVar3 = pbVar3 + 1;
    uVar4 = (uint)*pbVar3;
  }
  FUN_08003f58(DAT_08005bd8);
                    /* WARNING: Subroutine does not return */
  FUN_08002038();
}


// 08005be8

undefined4 FUN_08005be8(int *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (-1 < *param_1 << 0x1b) {
    FUN_08006fdc(param_1,param_2 & 0xff,1,4,param_1,param_2);
    param_1[2] = param_1[2] | 1;
    param_1[2] = param_1[2] | 0x500000;
    uVar1 = FUN_08006bfc(0x14);
    return uVar1;
  }
  if ((*param_1 << 0x1e < 0) && (param_1[0xd] == param_2)) {
    return 0;
  }
  uVar1 = FUN_08006bfc(0x14);
  return uVar1;
}


// 08005c3c

uint FUN_08005c3c(uint *param_1,int param_2)

{
  *param_1 = *param_1 & 0xfffffffd;
  *param_1 = *param_1 & 0xffffffef;
  param_1[2] = param_1[2] & 0xffafffff;
  if (param_2 != 0) {
    *(short *)(DAT_08005c70 + param_2 * 2) = (short)param_1[0x13];
  }
  return param_1[0x13] & 0xffff;
}


// 08005c74

void FUN_08005c74(uint *param_1,int param_2)

{
  FUN_08006b80();
  if (-1 < (int)(*param_1 << 0x1b)) {
    FUN_08006b88();
    return;
  }
  *param_1 = *param_1 & 0xfffffffd;
  *param_1 = *param_1 & 0xffffffef;
  param_1[2] = param_1[2] & 0xffafffff;
  if (param_2 != 0) {
    *(short *)(DAT_08005cc4 + param_2 * 2) = (short)param_1[0x13];
  }
  FUN_08006b88();
  return;
}


// 08005cc8

void FUN_08005cc8(void)

{
  ushort uVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined1 auStack_18 [8];
  
  piVar3 = DAT_08005d7c;
  pcVar2 = DAT_08005d78;
  cVar7 = *DAT_08005d78;
  if (cVar7 == '\0') {
    iVar6 = *DAT_08005d7c + 1;
    uVar1 = *(ushort *)(DAT_08005d84 + *(int *)(DAT_08005d80 + 4) * 2);
    *DAT_08005d7c = iVar6;
    piVar4 = DAT_08005d88;
    if (iVar6 < 0x5a) {
      return;
    }
    iVar5 = (uVar1 & 0xfff) + *DAT_08005d88;
    *DAT_08005d88 = iVar5;
    if (iVar6 < 100) {
      return;
    }
    *pcVar2 = '\x01';
    *piVar3 = 0;
    *piVar4 = iVar5 / 10;
    FUN_08005e50(auStack_18,0x23,0);
    FUN_08005e50(auStack_18,0x22,0);
    cVar7 = *pcVar2;
  }
  if (cVar7 != '\x01') {
    return;
  }
  if (*DAT_08005d88 - 0x231U < 0x342) {
    FUN_08005ee8(*DAT_08005d8c,DAT_08005d8c[1],1);
    FUN_08005ee8(*DAT_08005d90,DAT_08005d90[1],1);
    return;
  }
  FUN_08005ee8(*DAT_08005d8c,DAT_08005d8c[1],0);
  FUN_08005ee8(*DAT_08005d90,DAT_08005d90[1],0);
  return;
}


// 08005d94

void FUN_08005d94(undefined4 param_1)

{
  uint *local_1c;
  uint *puStack_18;
  uint uStack_14;
  
  FUN_080065c8(&local_1c,param_1);
  FUN_08006b80();
  *local_1c = *local_1c | uStack_14;
  if (puStack_18 != (uint *)0x0) {
    *puStack_18 = uStack_14;
    *puStack_18 = 0;
  }
  FUN_08006b88();
  return;
}


// 08005dc4

uint FUN_08005dc4(undefined4 param_1)

{
  uint *local_14 [2];
  uint local_c;
  
  FUN_080065c8(local_14,param_1);
  return *local_14[0] & local_c;
}


// 08005de0

void FUN_08005de0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = 0;
  piVar3 = DAT_08005e48;
  iVar4 = DAT_08005e4c;
  while (param_1 != iVar4) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 7) {
      iVar1 = 0;
      goto LAB_08005e0a;
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
LAB_08005e0a:
  uVar2 = FUN_08006b80();
  if (param_3 == 0) {
    param_2 = param_2 << 0x10;
  }
  *(uint *)(param_1 + 0x10) = param_2;
  FUN_08006678(iVar1,1,0);
  FUN_08006b88(uVar2);
  return;
}


// 08005e50

int * FUN_08005e50(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_08005eac;
  if (param_2 < 0x70) {
    iVar3 = *(int *)(DAT_08005ea4 + (param_2 >> 4) * 4);
    if (iVar3 != 0) {
      FUN_08006658(iVar3);
      iVar2 = 1 << (param_2 & 0xf);
      FUN_08005de0(iVar3,iVar2,param_3);
      *param_1 = iVar3;
      param_1[1] = iVar2;
      return param_1;
    }
  }
  *DAT_08005ea8 = 0xb;
  FUN_08003f58(uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_08002038();
}


// 08005eb0

void FUN_08005eb0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) ^ param_2;
  return;
}


// 08005ec4

void FUN_08005ec4(int param_1,uint param_2)

{
  FUN_08006b80();
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) ^ param_2;
  FUN_08006b88();
  return;
}


// 08005ee8

void FUN_08005ee8(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = param_2 << 0x10;
  }
  *(int *)(param_1 + 0x10) = param_2;
  return;
}


// 08005f00

void FUN_08005f00(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = 0;
  piVar3 = DAT_08005f60;
  iVar4 = DAT_08005f64;
  while (param_1 != iVar4) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 7) {
      iVar1 = 0;
      goto LAB_08005f26;
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
LAB_08005f26:
  uVar2 = FUN_08006b80();
  FUN_08006678(iVar1,0,param_3);
  FUN_08006b88(uVar2);
  return;
}


// 08005f68

int * FUN_08005f68(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_08005fb4;
  if ((0x6f < param_2) || (iVar3 = *(int *)(DAT_08005fac + (param_2 >> 4) * 4), iVar3 == 0)) {
    *DAT_08005fb0 = 0xc;
    FUN_08003f58(uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  iVar2 = 1 << (param_2 & 0xf);
  FUN_08005f00(iVar3,iVar2);
  *param_1 = iVar3;
  param_1[1] = iVar2;
  return param_1;
}


// 08005fb8

bool FUN_08005fb8(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 8) & param_2) != 0;
}


// 08005fd0

uint * FUN_08005fd0(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  
  uVar1 = DAT_08006188;
  uVar3 = 0;
  puVar6 = DAT_0800617c;
  while (param_1 != uVar3) {
    if (puVar6 + 2 == DAT_0800617c + 0x30) {
      *DAT_08006184 = 8;
      FUN_08003f58(uVar1);
                    /* WARNING: Subroutine does not return */
      FUN_08002038();
    }
    uVar3 = (uint)*(byte *)(puVar6 + 3);
    puVar6 = puVar6 + 2;
  }
  uVar3 = FUN_08006650(*puVar6);
  uVar3 = DAT_08006180 / uVar3;
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
  FUN_08006678(*(undefined1 *)(puVar6 + 1),*(undefined1 *)((int)puVar6 + 6),0);
  iVar2 = FUN_08005dc4(*puVar6);
  if (iVar2 == 0) {
    FUN_08005d94(*puVar6);
  }
  uVar1 = DAT_0800618c;
  puVar5 = (uint *)*puVar6;
  if ((int)(*puVar5 << 0x1f) < 0) {
    if ((uint)(ushort)puVar5[10] != (uVar3 & 0xffff)) {
      *DAT_08006184 = 9;
      FUN_08003f58(uVar1);
                    /* WARNING: Subroutine does not return */
      FUN_08002038();
    }
  }
  else {
    *(short *)(puVar5 + 10) = (short)uVar3;
    *(undefined2 *)(puVar5 + 0xb) = 0xfe;
    *(ushort *)(puVar5 + 5) = (ushort)puVar5[5] | 1;
  }
  uVar1 = DAT_08006190;
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
    *DAT_08006184 = 10;
    FUN_08003f58(uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
}


// 08006194

void FUN_08006194(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


// 08006198

void FUN_08006198(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  while( true ) {
    if (((param_2 & ~(uint)*(ushort *)(param_1 + 0x14)) == 0) &&
       ((*(ushort *)(param_1 + 0x14) & param_3) == 0)) break;
    uVar1 = FUN_08006c0c();
    iVar2 = FUN_08006c04(uVar1,param_4);
    uVar1 = DAT_080061dc;
    if (iVar2 == 0) {
      *DAT_080061d8 = 6;
      FUN_08003f58(uVar1);
                    /* WARNING: Subroutine does not return */
      FUN_08002038();
    }
  }
  return;
}


// 080061e0

void FUN_080061e0(ushort *param_1,ushort param_2,int param_3,undefined4 param_4)

{
  ushort extraout_r3;
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *param_1 = 0x101;
  uVar3 = param_4;
  FUN_08006198(param_1,1,0,param_4,param_4);
  param_1[8] = param_2;
  if ((param_2 & 1) == 0) {
    FUN_08006198(param_1,2,0,param_4,uVar3);
    FUN_08006b80();
    uVar2 = (uint)param_1[0xc];
  }
  else {
    *param_1 = *param_1 | 0x400;
    FUN_08006198(param_1,2,0,param_4,uVar3);
    FUN_08006b80();
    uVar1 = extraout_r3;
    if (param_3 == 1) {
      uVar1 = 0x201;
    }
    uVar2 = (uint)param_1[0xc];
    if (param_3 == 1) {
      *param_1 = uVar1;
    }
  }
  FUN_08006b88();
  uVar3 = DAT_08006260;
  if (-1 < (int)(uVar2 << 0x1f)) {
    *DAT_0800625c = 7;
    FUN_08003f58(uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  return;
}


// 08006264

undefined4 * FUN_08006264(undefined4 *param_1,uint param_2,undefined4 param_3,int param_4)

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
  
  puVar7 = PTR_DAT_08006360;
  puVar6 = PTR_s_Unsupported_i2c_bus_0800635c;
  if (2 < param_2) {
    *DAT_08006358 = 5;
    FUN_08003f58(puVar6);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  puVar10 = *(undefined2 **)(PTR_DAT_08006360 + param_2 * 8);
  iVar8 = FUN_08005dc4(puVar10);
  if (iVar8 == 0) {
    FUN_08005d94(puVar10);
    uVar2 = puVar7[param_2 * 8 + 4];
    uVar1 = puVar7[param_2 * 8 + 5];
    FUN_08006678(uVar2,0x101,1);
    FUN_08006678(uVar1,0x101,1);
    FUN_08006678(uVar1,0x101,0xffffffff);
    FUN_08006678(uVar2,0x101,0xffffffff);
    FUN_08006678(uVar2,0x101,1);
    FUN_08006678(uVar1,0x101,1);
    FUN_08006678(uVar2,0x142,1);
    FUN_08006678(uVar1,0x142,1);
    *puVar10 = 0x8000;
    *puVar10 = 0;
    uVar9 = FUN_08006650(puVar10);
    uVar5 = DAT_08006350;
    *param_1 = puVar10;
    uVar3 = (ulonglong)DAT_08006354;
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


// 08006364

void FUN_08006364(undefined2 *param_1,undefined1 param_2,int param_3,byte *param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar4;
  byte *pbVar3;
  undefined2 *puVar5;
  
  puVar5 = param_1;
  iVar1 = FUN_08006c0c();
  iVar2 = FUN_08006bfc(5000);
  iVar1 = iVar1 + iVar2;
  FUN_080061e0(param_1,param_2,param_3,iVar1,puVar5);
  if (param_3 != 0) {
    pbVar4 = param_4;
    do {
      pbVar3 = pbVar4 + 1;
      param_1[8] = (ushort)*pbVar4;
      FUN_08006198(param_1,0x80,0,iVar1);
      pbVar4 = pbVar3;
    } while (pbVar3 != param_4 + param_3);
  }
  *param_1 = 0x201;
  FUN_08006198(param_1,0,0x80,iVar1);
  return;
}


// 080063c4

void FUN_080063c4(undefined2 *param_1,byte param_2,int param_3,byte *param_4,char param_5,
                 undefined1 *param_6)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar6;
  byte *pbVar5;
  char cVar7;
  
  iVar3 = FUN_08006c0c();
  iVar4 = FUN_08006bfc(5000);
  iVar3 = iVar3 + iVar4;
  if (param_3 != 0) {
    FUN_080061e0(param_1,param_2,param_3,iVar3);
    pbVar6 = param_4;
    do {
      pbVar5 = pbVar6 + 1;
      param_1[8] = (ushort)*pbVar6;
      FUN_08006198(param_1,0x80,0,iVar3);
      pbVar6 = pbVar5;
    } while (pbVar5 != param_4 + param_3);
  }
  FUN_080061e0(param_1,param_2 | 1,param_5,iVar3);
  cVar7 = param_5 + -1;
  if (param_5 == '\0') {
LAB_08006450:
    FUN_08006198(param_1,0,0x40,iVar3);
    return;
  }
  do {
    FUN_08006198(param_1,0x40,0,iVar3);
    FUN_08006b80();
    uVar2 = param_1[8];
    if (cVar7 == '\x01') {
      *param_1 = 0x201;
      FUN_08006b88();
      *param_6 = (char)uVar2;
      cVar7 = '\0';
    }
    else {
      FUN_08006b88();
      *param_6 = (char)uVar2;
      bVar1 = cVar7 == '\0';
      cVar7 = cVar7 + -1;
      if (bVar1) goto LAB_08006450;
    }
    param_6 = param_6 + 1;
  } while( true );
}


// 08006488

undefined4 * FUN_08006488(undefined4 *param_1,uint param_2,uint param_3,uint param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  puVar3 = PTR_DAT_08006528;
  puVar2 = PTR_s_Invalid_spi_bus_08006524;
  if (4 < param_2) {
    *DAT_08006520 = 4;
    FUN_08003f58(puVar2);
                    /* WARNING: Subroutine does not return */
    FUN_08002038();
  }
  uVar8 = *(undefined4 *)(PTR_DAT_08006528 + param_2 * 8);
  iVar4 = FUN_08005dc4(uVar8);
  if (iVar4 == 0) {
    FUN_08005d94(uVar8);
    uVar1 = puVar3[param_2 * 8 + 7];
    FUN_08006678(puVar3[param_2 * 8 + 4],uVar1,1);
    FUN_08006678(puVar3[param_2 * 8 + 5],uVar1,0);
    FUN_08006678(puVar3[param_2 * 8 + 6],uVar1,0);
  }
  uVar5 = FUN_08006650(uVar8);
  uVar7 = 0;
  do {
    uVar6 = uVar7 + 1;
    if (uVar5 >> (uVar6 & 0xff) <= param_4) {
      uVar7 = uVar7 << 3;
      goto LAB_080064c6;
    }
    uVar7 = uVar6;
  } while (uVar6 != 8);
  uVar7 = 0x38;
LAB_080064c6:
  *param_1 = uVar8;
  param_1[1] = uVar7 | param_3 | 0x344;
  return param_1;
}


// 0800652c

void FUN_0800652c(ushort *param_1,uint param_2)

{
  if (param_2 != *param_1) {
    *param_1 = *param_1 & 0xffbf;
    *param_1 = (ushort)param_2;
  }
  return;
}


// 08006550

void FUN_08006550(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

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


// 08006594

void FUN_08006594(void)

{
  *DAT_080065a0 = 0xaaaa;
  return;
}


// 080065a4

void FUN_080065a4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_080065c4;
  *DAT_080065c4 = 0x5555;
  puVar1[1] = 0;
  puVar1[2] = 0xfff;
  *puVar1 = 0xcccc;
  return;
}


// 080065c8

void FUN_080065c8(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_08006648;
  uVar1 = DAT_08006640;
  if (DAT_08006634 <= param_2) {
    *param_1 = DAT_0800664c;
    param_1[1] = 0;
    param_1[2] = 1 << (param_2 + 0xbffe8000 >> 10 & 0xff);
    return;
  }
  if (DAT_08006638 < param_2) {
    *param_1 = DAT_08006644;
    param_1[1] = uVar2;
    param_1[2] = 1 << (param_2 + 0xbfff0000 >> 10 & 0xff);
    return;
  }
  *param_1 = DAT_0800663c;
  param_1[1] = uVar1;
  param_1[2] = 1 << (param_2 + 0xc0000000 >> 10 & 0xff);
  return;
}


// 08006650

undefined4 FUN_08006650(void)

{
  return DAT_08006654;
}


// 08006658

void FUN_08006658(int param_1)

{
  *(uint *)(DAT_08006674 + 0x18) =
       1 << (param_1 + 0xbfff0000U >> 10 & 0xff) | *(uint *)(DAT_08006674 + 0x18);
  return;
}


// 08006678

void FUN_08006678(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = *(uint **)(DAT_080068b4 + (param_1 >> 4) * 4);
  *(uint *)(DAT_080068b8 + 0x18) =
       1 << ((uint)(puVar4 + -0x10004000) >> 10 & 0xff) | *(uint *)(DAT_080068b8 + 0x18);
  iVar1 = (param_1 & 7) << 2;
  if (param_2 == 0) {
    if (param_3 != 0) {
LAB_080066b4:
      uVar2 = 8 << iVar1;
      goto LAB_080066ba;
    }
    uVar2 = 4 << iVar1;
    if (-1 < (int)(param_1 << 0x1c)) goto LAB_0800670a;
LAB_080066be:
    puVar4[1] = uVar2 | puVar4[1] & ~(0xf << iVar1);
    if (param_3 < 1) goto LAB_08006718;
LAB_080066cc:
    puVar4[4] = 1 << (param_1 & 0xf);
    iVar1 = DAT_080068c0;
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
      if (0 < param_3) goto LAB_080066b4;
      uVar2 = 9 << iVar1;
    }
LAB_080066ba:
    if ((int)(param_1 << 0x1c) < 0) goto LAB_080066be;
LAB_0800670a:
    *puVar4 = uVar2 | *puVar4 & ~(0xf << iVar1);
    if (0 < param_3) goto LAB_080066cc;
LAB_08006718:
    iVar1 = DAT_080068c0;
    if (param_3 != 0) {
      puVar4[4] = 1 << (param_1 & 0xf) + 0x10;
      iVar1 = DAT_080068c0;
    }
  }
  DAT_080068c0 = iVar1;
  if (param_1 - 0xd < 2) {
    uVar2 = (param_2 & 0xff) >> 4;
    uVar3 = *DAT_080068bc & 0xf8ffffff | 0x4000000;
    *DAT_080068bc = uVar3;
    *(uint *)(iVar1 + 4) = uVar3;
    if (uVar2 == 1) {
      return;
    }
    if (uVar2 == 2) goto LAB_0800674e;
  }
  else {
    uVar2 = (param_2 & 0xff) >> 4;
    if (uVar2 == 1) {
      if ((param_1 == 0xf) || (param_1 == 0x13)) {
        uVar2 = *DAT_080068bc & 0xfffffcff | 0x100;
        *DAT_080068bc = uVar2;
        *(uint *)(iVar1 + 4) = uVar2;
        return;
      }
      if (param_1 - 0x1a < 2) {
        uVar2 = *DAT_080068bc & 0xfffffcff | 0x200;
        *DAT_080068bc = uVar2;
        *(uint *)(iVar1 + 4) = uVar2;
        return;
      }
      return;
    }
    if (uVar2 == 2) {
      if (param_1 - 0x14 < 2) {
        uVar2 = *DAT_080068bc & 0xfffff3ff | 0x800;
        *DAT_080068bc = uVar2;
        *(uint *)(iVar1 + 4) = uVar2;
        return;
      }
LAB_0800674e:
      iVar1 = DAT_080068c0;
      if (param_1 - 0x26 < 4) {
        uVar2 = *DAT_080068bc;
        *DAT_080068bc = uVar2 | 0xc00;
        *(uint *)(iVar1 + 4) = uVar2 | 0xc00;
        return;
      }
      if (param_1 - 0x3c < 4) {
        uVar2 = *DAT_080068bc;
        *DAT_080068bc = uVar2 | 0x1000;
        *(uint *)(iVar1 + 4) = uVar2 | 0x1000;
        return;
      }
      return;
    }
  }
  iVar1 = DAT_080068c0;
  if (uVar2 == 4) {
    if (param_1 - 0x18 < 2) {
      uVar2 = *DAT_080068bc;
      *DAT_080068bc = uVar2 | 2;
      *(uint *)(iVar1 + 4) = uVar2 | 2;
      return;
    }
  }
  else if (uVar2 == 5) {
    if (param_1 - 0x13 < 3) {
      uVar2 = *DAT_080068bc;
      *DAT_080068bc = uVar2 | 1;
      *(uint *)(iVar1 + 4) = uVar2 | 1;
      return;
    }
  }
  else if (uVar2 == 7) {
    if (param_1 - 0x16 < 2) {
      uVar2 = *DAT_080068bc;
      *DAT_080068bc = uVar2 | 4;
      *(uint *)(iVar1 + 4) = uVar2 | 4;
      return;
    }
    if (param_1 - 0x35 < 2) {
      uVar2 = *DAT_080068bc;
      *DAT_080068bc = uVar2 | 8;
      *(uint *)(iVar1 + 4) = uVar2 | 8;
      return;
    }
    if (param_1 - 0x38 < 2) {
      uVar2 = *DAT_080068bc;
      *DAT_080068bc = uVar2 | 0x30;
      *(uint *)(iVar1 + 4) = uVar2 | 0x30;
      return;
    }
  }
  else if (uVar2 == 9) {
    if (param_1 - 0x18 < 2) {
      uVar2 = *DAT_080068bc & 0xffff9fff | 0x4000;
      *DAT_080068bc = uVar2;
      *(uint *)(iVar1 + 4) = uVar2;
      return;
    }
    if (param_1 - 0x30 < 2) {
      uVar2 = *DAT_080068bc;
      *DAT_080068bc = uVar2 | 0x6000;
      *(uint *)(iVar1 + 4) = uVar2 | 0x6000;
      return;
    }
  }
  return;
}


// 080068c4

void FUN_080068c4(void)

{
  return;
}


// 080068c8

void FUN_080068c8(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  FUN_08004674();
  iVar3 = DAT_08006900;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(0);
  }
  enableIRQinterrupts();
  *(undefined4 *)(DAT_08006904 + 8) = 0x8000000;
  FUN_08005d94(iVar3);
  uVar7 = *DAT_08006908 & 0xf8ffffff | 0x2000000;
  *DAT_08006908 = uVar7;
  *(uint *)(iVar3 + 4) = uVar7;
  FUN_08003e84();
  FUN_08004640();
  FUN_0800499c();
  FUN_080047a0();
  FUN_080043bc(DAT_08002220);
  FUN_08000e1c();
  FUN_08006b78();
  iVar3 = FUN_08000270(DAT_08002224);
  if (iVar3 != 0) {
    FUN_08006b78();
    uVar5 = FUN_08006c0c();
    if (*(char *)(DAT_0800222c + 9) == '\0') {
      *(char *)(DAT_0800222c + 10) = (char)iVar3;
    }
    iVar3 = DAT_0800222c;
    *(undefined1 *)(DAT_0800222c + 9) = 2;
    FUN_08001f4c();
    FUN_08003ea0();
    *(undefined1 *)(iVar3 + 9) = 1;
    FUN_08006b7c();
    FUN_08001fc8();
    uVar6 = FUN_080043bc(DAT_08002230);
    FUN_08000e1c(uVar6,uVar5,*(undefined1 *)(iVar3 + 10));
  }
  FUN_08006b7c();
  iVar4 = FUN_08006c0c();
  iVar3 = DAT_0800222c;
  piVar2 = DAT_08002228;
  *DAT_08002228 = iVar4;
  do {
    FUN_08006b98();
    if (*(char *)(iVar3 + 8) != '\0') {
      iVar4 = FUN_08006c0c();
      *piVar2 = *piVar2 - iVar4;
      FUN_08006b78();
      if (*(char *)(iVar3 + 8) != '\0') {
        *(undefined1 *)(iVar3 + 8) = 0xff;
        do {
          FUN_08006b90();
        } while (*(char *)(iVar3 + 8) != '\0');
      }
      FUN_08006b7c();
      iVar4 = FUN_08006c0c();
      *piVar2 = iVar4 + *piVar2;
    }
    *(undefined1 *)(iVar3 + 8) = 1;
    FUN_08003edc();
    iVar4 = FUN_08006c0c();
    FUN_080008ac(*piVar2,iVar4);
    *piVar2 = iVar4;
    FUN_080049b4();
  } while( true );
}


// 0800690c

void FUN_0800690c(void)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  byte local_9;
  
  uVar1 = *DAT_08006950;
  if ((uVar1 & 0x28) != 0) {
    FUN_080069b8(DAT_08006950[2]);
  }
  puVar2 = DAT_08006950;
  if ((int)((uint)uVar1 << 0x18) < 0) {
    if ((int)((uint)DAT_08006950[6] << 0x18) < 0) {
      iVar3 = FUN_080069e0(&local_9);
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


// 08006954

void FUN_08006954(void)

{
  *(undefined2 *)(DAT_08006960 + 0xc) = 0x20ac;
  return;
}


// 080069b8

void FUN_080069b8(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  if (param_1 == 0x7e) {
    FUN_08001f7c();
  }
  pbVar2 = DAT_080069d8;
  bVar1 = *DAT_080069d8;
  if (bVar1 < 0xc0) {
    *(char *)(DAT_080069dc + (uint)bVar1) = (char)param_1;
    *pbVar2 = bVar1 + 1;
  }
  return;
}


// 080069e0

undefined4 FUN_080069e0(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  bVar1 = *DAT_08006a10;
  if ((uint)bVar1 < (uint)*DAT_08006a0c) {
    uVar2 = *(undefined1 *)(DAT_08006a14 + (uint)bVar1);
    *DAT_08006a10 = bVar1 + 1;
    uVar3 = 0;
    *param_1 = uVar2;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


// 08006a18

void FUN_08006a18(void)

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
  
  iVar4 = DAT_08006ac8;
  pbVar3 = DAT_08006ac4;
  iVar5 = FUN_08000e54(DAT_08006ac8,*DAT_08006ac4,&local_24);
  iVar7 = local_24;
  if (iVar5 < 1) {
    if (iVar5 == 0) {
      return;
    }
    if ((local_24 == 0x20) && (iVar6 = FUN_08007300(iVar4,DAT_08006acc,0x20), iVar6 == 0)) {
      FUN_080068c4();
      iVar7 = local_24;
    }
  }
  else {
    FUN_08000f34(iVar4,local_24);
    iVar7 = local_24;
  }
  iVar6 = 0;
  while( true ) {
    bVar1 = *pbVar3;
    iVar8 = (uint)bVar1 - iVar7;
    if (iVar8 == 0) {
      FUN_08006b80();
      bVar2 = *pbVar3;
    }
    else {
      FUN_0800733c(iVar4 + iVar6,iVar7 + iVar6 + iVar4,iVar8 - iVar6);
      FUN_08001f7c();
      FUN_08006b80();
      bVar2 = *pbVar3;
      iVar6 = iVar8;
    }
    if ((uint)bVar1 == (uint)bVar2) break;
    FUN_08006b88();
  }
  *pbVar3 = (byte)iVar8;
  FUN_08006b88();
  if (iVar5 < 1) {
    return;
  }
  FUN_08000fe4();
  return;
}


// 08006ad0

void FUN_08006ad0(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  pbVar2 = DAT_08006b60;
  pbVar1 = DAT_08006b5c;
  uVar4 = (uint)*DAT_08006b5c;
  uVar5 = (uint)*DAT_08006b60;
  if (uVar5 <= uVar4) {
    uVar5 = 0;
    *DAT_08006b60 = 0;
    *pbVar1 = 0;
    uVar4 = 0;
  }
  uVar7 = *(byte *)(param_1 + 2) + uVar5;
  if (uVar7 < 0x61) {
    uVar4 = uVar5;
    iVar6 = DAT_08006b64;
  }
  else {
    if (0x60 < uVar7 - uVar4) {
      return;
    }
    *pbVar2 = 0;
    iVar6 = DAT_08006b64;
    uVar5 = uVar5 - *pbVar1;
    FUN_0800733c(DAT_08006b64,(uint)*pbVar1 + DAT_08006b64,uVar5);
    *pbVar1 = 0;
    *pbVar2 = (byte)uVar5;
    FUN_08006954();
    uVar4 = uVar5 & 0xff;
  }
  cVar3 = FUN_08000cc0(iVar6 + uVar5,param_1,param_2);
  *pbVar2 = cVar3 + (char)uVar4;
  FUN_08006954();
  return;
}


// 08006b68

undefined4 FUN_08006b68(void)

{
  return DAT_08006b6c;
}


// 08006b70

undefined4 FUN_08006b70(void)

{
  return DAT_08006b74;
}


// 08006b78

void FUN_08006b78(void)

{
  disableIRQinterrupts();
  return;
}


// 08006b7c

void FUN_08006b7c(void)

{
  enableIRQinterrupts();
  return;
}


// 08006b80

undefined4 FUN_08006b80(void)

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


// 08006b88

void FUN_08006b88(uint param_1)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((param_1 & 1) == 1);
  }
  return;
}


// 08006b90

void FUN_08006b90(void)

{
  enableIRQinterrupts();
  disableIRQinterrupts();
  return;
}


// 08006b98

void FUN_08006b98(void)

{
  return;
}


// 08006b9c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08006b9c(void)

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


// 08006bfc

int FUN_08006bfc(int param_1)

{
  return param_1 * 0x90;
}


// 08006c04

uint FUN_08006c04(int param_1,int param_2)

{
  return (uint)(param_1 - param_2) >> 0x1f;
}


// 08006c0c

undefined4 FUN_08006c0c(void)

{
  return *(undefined4 *)(DAT_08006c14 + 4);
}


// 08006c18

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08006c18(void)

{
  _DAT_e000e014 = 0;
  _DAT_e000e018 = 0;
  *(undefined4 *)(DAT_08006c2c + 4) = 0x4000000;
  return;
}


// 08006c30

void FUN_08006c30(int param_1)

{
  uint *puVar1;
  
  puVar1 = DAT_08006c6c;
  if (-1 < *(int *)(DAT_08006c68 + 0xfc) << 7) {
    *(uint *)(DAT_08006c68 + 0xfc) = *(uint *)(DAT_08006c68 + 0xfc) | 0x1000000;
    *puVar1 = *puVar1 | 1;
  }
  do {
  } while ((int)(DAT_08006c6c[1] - (DAT_08006c6c[1] + param_1 * 0x90)) < 0);
  return;
}


// 08006c74

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08006c74(void)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = DAT_08006cbc;
  iVar1 = DAT_08006cb8;
  *(uint *)(DAT_08006cb8 + 0xfc) = *(uint *)(DAT_08006cb8 + 0xfc) | 0x1000000;
  *puVar2 = *puVar2 | 1;
  puVar2[1] = 0;
  FUN_08006b80();
  *(undefined1 *)(iVar1 + 0x23) = 0x20;
  _DAT_e000e010 = 7;
  _DAT_e000e014 = 0;
  _DAT_e000e018 = 0;
  *(undefined4 *)(iVar1 + 4) = 0x4000000;
  FUN_08006b88();
  return;
}


// 08006cc0

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
  
  uVar4 = DAT_08006d74;
  iVar3 = DAT_08006d70;
  piVar2 = DAT_08006d6c;
  iVar1 = DAT_08006d68;
  FUN_08006b78();
  iVar8 = *piVar2;
  do {
    iVar5 = FUN_08001ed0();
    iVar6 = *(int *)(iVar1 + 4);
    iVar7 = iVar5 - iVar6;
    if (0x120 < iVar7) {
LAB_08006d42:
      _DAT_e000e018 = 0;
      _DAT_e000e014 = 0;
      FUN_08006b7c();
      return;
    }
    if (iVar8 - iVar6 < 0) {
      if (iVar7 < iVar3) {
        FUN_08003f58(uVar4);
        FUN_08002090();
      }
      iVar8 = FUN_08001f88();
      if (iVar8 != 0) {
        *piVar2 = iVar6 + 0x3840;
        goto LAB_08006d42;
      }
      iVar8 = iVar6 + 72000;
      *piVar2 = iVar8;
      FUN_08006b7c();
    }
    else {
      FUN_08006b7c();
    }
    while ((0 < iVar7 && (0 < iVar5 - *(int *)(iVar1 + 4)))) {
      iVar7 = iVar5 - *(int *)(iVar1 + 4);
    }
    FUN_08006b78();
  } while( true );
}


// 08006d78

void FUN_08006d78(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_08006d98 + 4);
  FUN_08006b78();
  if (*DAT_08006d9c - iVar1 < 0) {
    *DAT_08006d9c = iVar1;
  }
  FUN_08006b7c();
  return;
}


// 08006da0

uint FUN_08006da0(byte *param_1,int param_2)

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


// 08006ddc

void Reset_Handler(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  for (iVar1 = 0; (uint)(DAT_08006e14 + iVar1) < DAT_08006e18; iVar1 = iVar1 + 4) {
    *(undefined4 *)(DAT_08006e14 + iVar1) = *(undefined4 *)(DAT_08006e10 + iVar1);
  }
  for (puVar2 = DAT_08006e1c; puVar2 < DAT_08006e20; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  FUN_08004674();
  FUN_080072b8();
  FUN_080068c8();
  return;
}


// 08006e24

void vec_14(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 08006e28

void FUN_08006e28(uint *param_1,ushort *param_2,undefined4 param_3,uint param_4)

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
LAB_08006e58:
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
          goto LAB_08006e58;
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
LAB_08006ea2:
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
          goto LAB_08006ea2;
        }
        param_1[5] = uVar6;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    param_1[1] = uVar3;
  }
  return;
}


// 08006ee8

void FUN_08006ee8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


// 08006eec

void FUN_08006eec(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// 08006ef0

void FUN_08006ef0(uint param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(DAT_08006f04 + 0x18) = *(uint *)(DAT_08006f04 + 0x18) & ~param_1;
    return;
  }
  *(uint *)(DAT_08006f04 + 0x18) = param_1 | *(uint *)(DAT_08006f04 + 0x18);
  return;
}


// 08006f08

void FUN_08006f08(uint param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(DAT_08006f1c + 0x1c) = *(uint *)(DAT_08006f1c + 0x1c) & ~param_1;
    return;
  }
  *(uint *)(DAT_08006f1c + 0x1c) = param_1 | *(uint *)(DAT_08006f1c + 0x1c);
  return;
}


// 08006f20

void FUN_08006f20(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_08006f8c;
  if (param_1[3] == 0) {
    *(int *)(DAT_08006f8c + ((*param_1 >> 5) + 0x20) * 4) = 1 << (*param_1 & 0x1f);
    return;
  }
  bVar1 = *param_1;
  uVar3 = (~*(uint *)(DAT_08006f88 + 0xc) & 0x7ff) >> 8;
  *(char *)(DAT_08006f8c + (uint)bVar1 + 0x300) =
       (char)((0xfU >> uVar3 & (uint)param_1[2] | (uint)param_1[1] << (4 - uVar3 & 0xff)) << 4);
  *(int *)(iVar2 + (uint)(bVar1 >> 5) * 4) = 1 << (bVar1 & 0x1f);
  return;
}


// 08006f90

void FUN_08006f90(int param_1,uint *param_2)

{
  *(uint *)(param_1 + 4) = *param_2 | param_2[1] << 8 | *(uint *)(param_1 + 4) & 0xfff0feff;
  *(uint *)(param_1 + 8) =
       param_2[4] | param_2[3] | param_2[2] << 1 | DAT_08006fd8 & *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 0x2c) =
       *(uint *)(param_1 + 0x2c) & 0xff0fffff | (uint)(byte)((char)param_2[5] - 1) << 0x14;
  return;
}


// 08006fdc

void FUN_08006fdc(int param_1,uint param_2,uint param_3,uint param_4)

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


// 08007090

void FUN_08007090(uint *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar3 = DAT_08007230;
  uVar4 = *param_1;
  if (((((param_1 == DAT_08007230) || (param_1 == DAT_08007230 + 0x200)) ||
       (param_1 == (uint *)&DAT_40000000)) ||
      ((param_1 == DAT_08007230 + -0x4a00 || (param_1 == DAT_08007230 + -0x4900)))) ||
     (param_1 == DAT_08007230 + -0x4800)) {
    uVar4 = uVar4 & 0xffffff8f | (uint)(ushort)param_2[1];
  }
  if (param_1 == DAT_08007234) {
    uVar1 = param_2[2];
    *param_1 = uVar4;
    *(undefined2 *)(param_1 + 0xb) = uVar1;
    *(undefined2 *)(param_1 + 10) = *param_2;
    *(undefined2 *)(param_1 + 5) = 1;
    uVar4 = *param_1;
    goto joined_r0x080071b6;
  }
  if (param_1 == DAT_08007234 + 0x100) {
    uVar1 = param_2[2];
    *param_1 = uVar4;
    *(undefined2 *)(param_1 + 0xb) = uVar1;
    *(undefined2 *)(param_1 + 10) = *param_2;
LAB_08007160:
    *(undefined2 *)(param_1 + 5) = 1;
    uVar4 = *param_1;
    if ((param_1 != (uint *)&DAT_40000000) &&
       (((param_1 != DAT_08007238 && (param_1 != DAT_08007238 + 0x100)) &&
        (param_1 != DAT_08007238 + 0x200)))) goto joined_r0x080071b6;
  }
  else {
    uVar2 = param_2[2];
    *param_1 = uVar4 & 0xfffffcff | (uint)(ushort)param_2[3];
    uVar1 = *param_2;
    *(undefined2 *)(param_1 + 0xb) = uVar2;
    *(undefined2 *)(param_1 + 10) = uVar1;
    if ((param_1 != puVar3) && (param_1 != DAT_08007240)) goto LAB_08007160;
    *(ushort *)(param_1 + 0xc) = (ushort)*(byte *)(param_2 + 4);
    *(undefined2 *)(param_1 + 5) = 1;
    uVar4 = *param_1;
  }
  if (*(char *)((int)param_2 + 9) == '\0') {
    uVar4 = uVar4 & 0xfffff7ff;
  }
  else {
    uVar4 = uVar4 | 0x800;
  }
  if (((param_1 == (uint *)&DAT_40000000) || (param_1 == DAT_08007238)) ||
     ((param_1 == DAT_08007238 + 0x100 || (param_1 == DAT_08007238 + 0x200)))) {
    if (*(char *)(param_2 + 5) == '\0') {
      uVar4 = uVar4 & 0xffffefff;
    }
    else {
      uVar4 = uVar4 | 0x1000;
    }
    if (*(char *)((int)param_2 + 0xb) == '\0') {
      uVar4 = uVar4 & 0xffffdfff;
    }
    else {
      uVar4 = uVar4 | 0x2000;
    }
    if (((param_1 == (uint *)&DAT_40000000) || (param_1 == DAT_08007238)) ||
       (param_1 == DAT_08007238 + 0x100)) {
      if (*(char *)(param_2 + 6) == '\0') {
        uVar4 = uVar4 & 0xffffbfff;
      }
      else {
        uVar4 = uVar4 | 0x4000;
      }
    }
  }
joined_r0x080071b6:
  if ((((param_1 != DAT_08007230) && (param_1 != DAT_08007230 + 0x200)) &&
      (param_1 != (uint *)&DAT_40000000)) &&
     ((param_1 != DAT_08007230 + -0x4a00 && (param_1 != DAT_08007230 + -0x4900)))) {
    *param_1 = uVar4;
    param_1[1] = param_1[1];
    return;
  }
  if (*(char *)((int)param_2 + 0xd) == '\0') {
    uVar4 = uVar4 & 0xffff7fff;
  }
  else {
    uVar4 = uVar4 | 0x8000;
  }
  *param_1 = uVar4;
  uVar4 = param_1[1];
  if ((param_1 != (uint *)&DAT_40000000) && (param_1 != DAT_0800723c)) {
    param_1[1] = uVar4;
    return;
  }
  if (*(char *)(param_2 + 7) == '\0') {
    param_1[1] = uVar4 & 0xfffffeff;
    return;
  }
  param_1[1] = uVar4 | 0x100;
  return;
}


// 08007244

void FUN_08007244(uint *param_1,int param_2)

{
  if (param_2 == 0) {
    *param_1 = *param_1 & 0xfffffffe;
    return;
  }
  *param_1 = *param_1 | 1;
  return;
}


// 08007258

void FUN_08007258(int param_1,ushort param_2,int param_3)

{
  if (param_3 == 0) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & ~param_2;
    return;
  }
  *(ushort *)(param_1 + 0xc) = param_2 | *(ushort *)(param_1 + 0xc);
  return;
}


// 0800726c

undefined4 FUN_0800726c(int param_1,uint param_2)

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


// 08007284

void FUN_08007284(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & ~param_2;
  return;
}


// 080072b8

void FUN_080072b8(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = DAT_080072f4 - (int)DAT_080072f0;
  puVar4 = DAT_080072f0;
  for (iVar5 = 0; iVar2 = DAT_080072fc, puVar1 = DAT_080072f8, iVar5 != iVar3 >> 2;
      iVar5 = iVar5 + 1) {
    (*(code *)*puVar4)();
    puVar4 = puVar4 + 1;
  }
  FUN_08007380();
  puVar4 = puVar1;
  for (iVar3 = 0; iVar3 != iVar2 - (int)puVar1 >> 2; iVar3 = iVar3 + 1) {
    (*(code *)*puVar4)();
    puVar4 = puVar4 + 1;
  }
  return;
}


// 08007300

int FUN_08007300(byte *param_1,int param_2,int param_3)

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


// 08007320

void FUN_08007320(int param_1,undefined1 *param_2,int param_3)

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


// 0800733c

void FUN_0800733c(undefined1 *param_1,undefined1 *param_2,int param_3)

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


// 08007370

void FUN_08007370(undefined1 *param_1,undefined1 param_2,int param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1 + param_3;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    *param_1 = param_2;
  }
  return;
}


// 08007380

void FUN_08007380(void)

{
  return;
}


// 0800738c

void FUN_0800738c(void)

{
  return;
}



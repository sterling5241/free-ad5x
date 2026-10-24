// 080101a0

void thunk_FUN_08015ea0(void)

{
  (*DAT_080101a4)();
  return;
}


// 080101ac

void Reset_Handler(void)

{
  (*DAT_080101c8)();
                    /* WARNING: Could not recover jumptable at 0x080101b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_080101cc)();
  return;
}


// 080101c2

void vec_14(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 080101c6

void vec_16(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 080101d0

void FUN_080101d0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    for (; 3 < param_3; param_3 = param_3 - 4) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    }
  }
  while (bVar2 = param_3 != 0, param_3 = param_3 - 1, bVar2) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    param_1 = (undefined4 *)((int)param_1 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return;
}


// 080101f4

void FUN_080101f4(undefined1 *param_1,int param_2,undefined1 param_3)

{
  bool bVar1;
  
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    *param_1 = param_3;
    param_1 = param_1 + 1;
  }
  return;
}


// 08010202

void FUN_08010202(undefined4 param_1,undefined4 param_2)

{
  FUN_080101f4(param_1,param_2,0);
  return;
}


// 08010206

undefined4 FUN_08010206(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_080101f4(param_1,param_3,param_2);
  return param_1;
}


// 08010218

char * FUN_08010218(int param_1,char param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + -1);
  do {
    pcVar1 = pcVar1 + 1;
    if (param_2 == *pcVar1) {
      return pcVar1;
    }
  } while (*pcVar1 != '\0');
  return (char *)0x0;
}


// 0801022c

int FUN_0801022c(char *param_1)

{
  char cVar1;
  char *pcVar3;
  char *pcVar2;
  
  pcVar3 = param_1;
  do {
    pcVar2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
  return (int)pcVar2 - (int)(param_1 + 1);
}


// 0801023a

uint FUN_0801023a(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  iVar1 = (int)(param_2 ^ param_4) >> 0x1f;
  uVar2 = -iVar1;
  uVar6 = param_3;
  uVar9 = param_4;
  if ((param_2 & 0x7fffffff) <= (param_4 & 0x7fffffff) &&
      (uint)(param_3 <= param_1) <= (param_2 & 0x7fffffff) - (param_4 & 0x7fffffff)) {
    uVar6 = param_1;
    uVar9 = param_2;
    param_2 = param_4;
    param_1 = param_3;
  }
  if ((uVar9 & 0x7fffffff) == 0 && uVar6 == 0) {
    return param_1;
  }
  uVar8 = param_2 >> 0x14;
  uVar3 = uVar8 & 0x7ff;
  iVar4 = uVar3 - ((uVar9 & 0x7fffffff) >> 0x14);
  if (iVar4 < 0x40) {
    uVar9 = uVar9 & 0xfffff | 0x100000;
    if (uVar2 != 0) {
      bVar10 = uVar6 != 0;
      uVar6 = -uVar6;
      uVar9 = -(uint)bVar10 - uVar9;
    }
    uVar11 = FUN_08010722(uVar6,uVar9,0x40 - iVar4);
    uVar7 = (uint)(uVar11 >> 0x20);
    uVar5 = (uint)uVar11;
    lVar12 = FUN_08010760(uVar6,uVar9,iVar4);
    lVar12 = lVar12 + CONCAT44(param_2,param_1);
    uVar6 = (uint)lVar12;
    uVar9 = (uint)((ulonglong)lVar12 >> 0x20);
    if ((param_2 ^ uVar9) >> 0x14 != 0) {
      if (uVar2 == 0) {
        uVar11 = CONCAT44(uVar7 >> 1 | uVar6 * -0x80000000,
                          (uint)((uVar11 & 0x100000000) != 0) << 0x1f | uVar5 >> 1);
        uVar9 = uVar9 + uVar8 * -0x100000 + 0x100000;
        lVar12 = CONCAT44((uVar9 >> 1) + uVar8 * 0x100000,
                          (uint)((uVar9 & 1) != 0) << 0x1f | uVar6 >> 1);
      }
      else {
        if (iVar4 < 2) {
          uVar6 = FUN_080108c8(uVar6,uVar9 + uVar8 * -0x100000 + 0x100000,uVar5,uVar7,0,
                               (uVar8 & 0x800) << 0x14,uVar3);
          return uVar6;
        }
        lVar12 = CONCAT44(uVar8 * -0x100000 + uVar9 * 2 + (uint)CARRY4(uVar6,uVar6),
                          uVar6 * 2 | uVar7 >> 0x1f);
        uVar11 = CONCAT44(uVar7 * 2 + (uint)CARRY4(uVar5,uVar5),uVar5 * 2);
      }
    }
  }
  else {
    uVar11 = CONCAT44(-(uint)(1 < (uint)(iVar1 * -2)),iVar1 * 2 + 1);
    lVar12 = CONCAT44(param_2 - (param_1 < uVar2),param_1 + iVar1);
  }
  uVar6 = FUN_080108aa((int)lVar12,(int)((ulonglong)lVar12 >> 0x20),(int)uVar11,
                       (int)(uVar11 >> 0x20));
  return uVar6;
}


// 0801037c

void FUN_0801037c(void)

{
  FUN_0801023a();
  return;
}


// 08010382

void FUN_08010382(undefined4 param_1,uint param_2)

{
  FUN_0801023a(param_1,param_2 ^ 0x80000000);
  return;
}


// 08010388

void FUN_08010388(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_1 != 0 || (param_2 & 0x7fffffff) != 0) && (param_3 != 0 || (param_4 & 0x7fffffff) != 0)
     ) {
    uVar6 = (uint)((ulonglong)param_1 * (ulonglong)param_3);
    uVar2 = param_2 & 0xfffff | 0x100000;
    uVar3 = param_4 & 0xfffff | 0x100000;
    uVar4 = param_1 >> 10 | param_2 << 0x16;
    uVar8 = param_3 >> 10 | param_4 << 0x16;
    lVar1 = (ulonglong)uVar4 * (ulonglong)uVar8;
    uVar7 = (uint)lVar1;
    iVar5 = uVar4 * (uVar3 >> 10) + (uVar2 >> 10) * uVar8 + (int)((ulonglong)lVar1 >> 0x20);
    uVar8 = ((param_1 * uVar3 +
             uVar2 * param_3 + (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20)) -
            (iVar5 * 0x100000 | uVar7 >> 0xc)) - (uint)(uVar6 < uVar7 * 0x100000);
    uVar4 = param_1 >> 0x1a | uVar2 << 6;
    uVar2 = param_3 >> 0x1a | uVar3 << 6;
    uVar3 = uVar6 + uVar7 * -0x100000 >> 0x14 | uVar8 * 0x1000;
    lVar1 = (ulonglong)uVar4 * (ulonglong)uVar2 +
            (ulonglong)((iVar5 - uVar4 * uVar2) + (uVar8 >> 0x14) + (uint)CARRY4(uVar3,uVar7));
    FUN_080108c8((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),uVar6 * 0x1000,uVar3 + uVar7,0,
                 (param_2 ^ param_4) & 0x80000000,
                 ((param_4 & 0x7fffffff) >> 0x14) + ((param_2 & 0x7fffffff) >> 0x14) + -0x3ff);
  }
  return;
}


// 0801046c

void FUN_0801046c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  if ((param_1 != 0 || (param_2 & 0x7fffffff) != 0) && (param_3 != 0 || (param_4 & 0x7fffffff) != 0)
     ) {
    uVar5 = param_4 & 0xfffff | 0x100000;
    uVar4 = param_2 & 0xfffff | 0x100000;
    iVar7 = ((param_2 & 0x7fffffff) >> 0x14) - ((param_4 & 0x7fffffff) >> 0x14);
    iVar8 = iVar7 + 0x3fd;
    if (uVar5 < uVar4 || uVar4 - uVar5 < (uint)(param_3 <= param_1)) {
      iVar8 = iVar7 + 0x3fe;
    }
    else {
      bVar10 = CARRY4(param_1,param_1);
      param_1 = param_1 * 2;
      uVar4 = uVar4 * 2 + (uint)bVar10;
    }
    if (-1 < iVar8) {
      uVar3 = 0x100000;
      uVar6 = 0;
      uVar9 = 0;
      for (uVar2 = 0; uVar2 != 0 || uVar3 != 0; uVar2 = (uint)(uVar1 != 0) << 0x1f | uVar2 >> 1) {
        if (uVar5 < uVar4 || uVar4 - uVar5 < (uint)(param_3 <= param_1)) {
          bVar10 = param_1 < param_3;
          param_1 = param_1 - param_3;
          uVar4 = (uVar4 - uVar5) - (uint)bVar10;
          uVar6 = uVar6 | uVar2;
          uVar9 = uVar9 | uVar3;
        }
        uVar1 = uVar3 & 1;
        uVar3 = uVar3 >> 1;
        bVar10 = CARRY4(param_1,param_1);
        param_1 = param_1 * 2;
        uVar4 = uVar4 * 2 + (uint)bVar10;
      }
      if (param_1 != 0 || uVar4 != 0) {
        if (param_1 == param_3 && uVar4 == uVar5) {
          param_1 = 0;
          uVar4 = 0x80000000;
        }
        else if (uVar5 < uVar4 || uVar4 - uVar5 < (uint)(param_3 <= param_1)) {
          param_1 = 0xfffffffe;
          uVar4 = 0xffffffff;
        }
        else {
          param_1 = 1;
          uVar4 = 0;
        }
      }
      FUN_080108aa(uVar6,uVar9 + iVar8 * 0x100000 + ((param_2 ^ param_4) & 0x80000000),param_1,uVar4
                  );
      return;
    }
  }
  return;
}


// 0801054a

void FUN_0801054a(undefined4 param_1)

{
  FUN_080108c8(param_1,0,0,0,0,0,0x433);
  return;
}


// 08010564

int FUN_08010564(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0x7fffffff) >> 0x14;
  if (uVar1 < 0x3ff) {
    param_1 = 0;
  }
  else {
    if (uVar1 < 0x434) {
      param_1 = FUN_08010740(param_1,param_2 & 0xfffff | 0x100000,-(uVar1 - 0x433));
    }
    else {
      param_1 = param_1 << (uVar1 - 0x433 & 0xff);
    }
    if ((param_2 & 0x80000000) != 0) {
      return -param_1;
    }
  }
  return param_1;
}


// 080105a2

int FUN_080105a2(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_2 & 0x7fffffff) >> 0x14;
  if (uVar2 < 0x3ff) {
    return 0;
  }
  if (uVar2 < 0x434) {
    iVar1 = FUN_08010740(param_1,param_2 & 0xfffff | 0x100000,-(uVar2 - 0x433));
    return iVar1;
  }
  return param_1 << (uVar2 - 0x433 & 0xff);
}


// 080105d4

undefined8 FUN_080105d4(uint param_1)

{
  if ((param_1 & 0x7fffffff) == 0) {
    return 0;
  }
  return CONCAT44(param_1 & 0x80000000 | (((param_1 & 0x7fffffff) >> 0x17) + 0x380) * 0x100000 |
                  (param_1 & 0x7fffff) >> 3,param_1 << 0x1d);
}


// 080105fc

int FUN_080105fc(int param_1,int param_2)

{
  if (-1 < param_2) {
    param_1 = -param_1;
  }
  return param_1;
}


// 0801062c

int FUN_0801062c(int param_1,int param_2)

{
  if (-1 < param_2) {
    param_1 = -param_1;
  }
  return param_1;
}


// 0801065c

undefined4 FUN_0801065c(uint param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) {
    iVar2 = ((param_2 & 0x7fffffff) >> 0x14) - 0x380;
    if (0 < iVar2) {
      uVar1 = FUN_0801083c((param_1 >> 0x1d | (param_2 & 0xfffff) << 3) + (param_2 & 0x80000000) +
                           iVar2 * 0x800000,param_1 << 3);
      return uVar1;
    }
  }
  return 0;
}


// 08010694

int FUN_08010694(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  uVar2 = 0x20;
  while (uVar3 = uVar2 - 1, 0 < (int)uVar2) {
    uVar2 = uVar3;
    if (param_2 <= param_1 >> (uVar3 & 0xff)) {
      param_1 = param_1 - (param_2 << (uVar3 & 0xff));
      iVar1 = iVar1 + (1 << (uVar3 & 0xff));
    }
  }
  return iVar1;
}


// 080106c0

longlong FUN_080106c0(uint param_1,int param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar1 = 0;
  iVar3 = 0x40;
  while (iVar4 = iVar3 + -1, 0 < iVar3) {
    uVar6 = FUN_08010740(param_1,param_2,iVar4);
    uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
    iVar3 = iVar4;
    if (param_4 < uVar2 || uVar2 - param_4 < (uint)(param_3 <= (uint)uVar6)) {
      uVar6 = FUN_08010722(param_3,param_4,iVar4);
      bVar5 = param_1 < (uint)uVar6;
      param_1 = param_1 - (uint)uVar6;
      param_2 = (param_2 - (int)((ulonglong)uVar6 >> 0x20)) - (uint)bVar5;
      lVar7 = FUN_08010722(1,0,iVar4);
      lVar1 = lVar7 + lVar1;
    }
  }
  return lVar1;
}


// 08010722

longlong FUN_08010722(uint param_1,int param_2,uint param_3)

{
  if ((int)param_3 < 0x20) {
    return CONCAT44(param_2 << (param_3 & 0xff) | param_1 >> (0x20 - param_3 & 0xff),
                    param_1 << (param_3 & 0xff));
  }
  return (ulonglong)(param_1 << (param_3 - 0x20 & 0xff)) << 0x20;
}


// 08010740

ulonglong FUN_08010740(uint param_1,uint param_2,uint param_3)

{
  if ((int)param_3 < 0x20) {
    return CONCAT44(param_2 >> (param_3 & 0xff),
                    param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff));
  }
  return (ulonglong)(param_2 >> (param_3 - 0x20 & 0xff));
}


// 08010760

undefined8 FUN_08010760(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((int)param_3 < 0x20) {
    iVar2 = (int)param_2 >> (param_3 & 0xff);
    uVar1 = param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff);
  }
  else {
    uVar1 = (int)param_2 >> (param_3 - 0x20 & 0xff);
    iVar2 = (int)(param_2 | uVar1) >> 0x1f;
  }
  return CONCAT44(iVar2,uVar1);
}


// 08010784

undefined4 FUN_08010784(void)

{
  return DAT_08010788;
}


// 0801078c

byte FUN_0801078c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_08010784();
  return *(byte *)(*piVar1 + param_1) & 1;
}


// 080107a0

void FUN_080107a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_38 = &uStack_8;
  *(undefined4 *)(param_2 + 0xc) = 0;
  local_20 = DAT_08010830;
  local_1c = DAT_08010834;
  local_34 = 4;
  uStack_30 = 0x7fffffff;
  local_18 = DAT_08010838;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_08010cb4(0,param_2,param_1,&local_38);
  return;
}


// 080107d6

void FUN_080107d6(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int local_28;
  int local_24;
  int iStack_20;
  int local_18 [2];
  
  local_24 = 0xffffffff;
  local_18[0] = 0;
  local_28 = param_2;
  iStack_20 = param_2;
  iVar1 = FUN_080107a0(local_18,&local_28,param_1);
  local_24 = param_2 + local_18[0];
  if (param_3 != (int *)0x0) {
    if (local_18[0] == 0) {
      iVar2 = param_2;
    }
    else {
      iVar2 = local_24;
    }
    *param_3 = iVar2;
  }
  if ((local_18[0] != 0) && ((iVar1 < 1 || (local_28 != local_24)))) {
    local_24 = local_24 - param_2;
    local_28 = param_2;
    iStack_20 = param_2;
    FUN_080107a0(local_18,&local_28,param_1);
  }
  return;
}


// 0801083c

uint FUN_0801083c(uint param_1,uint param_2)

{
  if (-1 < (int)param_2) {
    return param_1;
  }
  param_1 = param_1 + 1;
  if ((param_2 & 0x7fffffff) == 0) {
    param_1 = param_1 & 0xfffffffe;
  }
  return param_1;
}


// 0801084e

uint FUN_0801084e(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = LZCOUNT(param_1);
  uVar1 = param_1 << iVar3;
  if (uVar1 == 0 && param_2 == 0) {
    return uVar1;
  }
  if (param_2 != 0) {
    uVar1 = uVar1 | (uint)(param_2 << iVar3 != 0) | param_2 >> (0x20U - iVar3 & 0xff);
  }
  iVar3 = (param_4 - iVar3) + 7;
  if (iVar3 < 0) {
    return 0;
  }
  uVar2 = (uVar1 >> 8) + iVar3 * 0x800000 + param_3;
  if (-1 < (int)(uVar1 * 0x1000000)) {
    return uVar2;
  }
  uVar2 = uVar2 + 1;
  if ((uVar1 & 0x7f) == 0) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  return uVar2;
}


// 080108aa

undefined8 FUN_080108aa(uint param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  
  if (param_4 < 0) {
    bVar1 = 0xfffffffe < param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + (uint)bVar1;
    if ((param_3 & 0x7fffffff) == 0 && param_4 * 2 + (uint)CARRY4(param_3,param_3) == 0) {
      param_1 = param_1 & 0xfffffffe;
    }
  }
  return CONCAT44(param_2,param_1);
}


// 080108c8

ulonglong FUN_080108c8(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5,
                      int param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    iVar1 = LZCOUNT(param_1) + 0x20;
  }
  else {
    iVar1 = LZCOUNT(param_2);
  }
  uVar3 = FUN_08010722();
  uVar2 = (uint)(uVar3 >> 0x20);
  if (((uint)uVar3 != 0 || param_3 != 0) || (uVar2 != 0 || param_4 != 0)) {
    if (param_3 != 0 || param_4 != 0) {
      uVar4 = FUN_08010740(param_3,param_4,0x40 - iVar1);
      lVar5 = FUN_08010722(param_3,param_4,iVar1);
      uVar3 = CONCAT44(uVar2 | (uint)((ulonglong)uVar4 >> 0x20),
                       (uint)uVar3 | (uint)uVar4 | (uint)(lVar5 != 0));
    }
    uVar2 = (uint)(uVar3 >> 0xb);
    iVar1 = (param_7 - iVar1) + 10;
    if (-1 < iVar1) {
      uVar3 = FUN_080108aa(uVar2 + param_5,
                           iVar1 * 0x100000 + (int)((uVar3 >> 0xb) >> 0x20) + param_6 +
                           (uint)CARRY4(uVar2,param_5),0,(int)uVar3 << 0x15);
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}


// 08010964

void FUN_08010964(uint param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  longlong lVar12;
  
  uVar6 = -param_1;
  if ((int)(-(uint)(param_1 != 0) - param_2) < 0 ==
      (SBORROW4(0,param_2) != SBORROW4(-param_2,(uint)(param_1 != 0)))) {
    return;
  }
  uVar4 = (param_2 & 0x7fffffff) >> 0x14;
  uVar8 = param_2 & 0xfffff | 0x100000;
  if ((uVar4 & 1) == 0) {
    bVar11 = CARRY4(param_1,param_1);
    param_1 = param_1 * 2;
    uVar8 = uVar8 * 2 + (uint)bVar11;
    uVar4 = uVar4 - 1;
  }
  lVar2 = 0;
  iVar10 = 0;
  do {
    lVar12 = FUN_08010740(0,0x100000,iVar10,uVar6);
    lVar1 = lVar12 + lVar2 + lVar2;
    uVar6 = (uint)lVar1;
    uVar3 = (uint)((ulonglong)lVar1 >> 0x20);
    if (uVar3 < uVar8 || uVar8 - uVar3 < (uint)(uVar6 <= param_1)) {
      bVar11 = param_1 < uVar6;
      param_1 = param_1 - uVar6;
      uVar8 = (uVar8 - uVar3) - (uint)bVar11;
      lVar2 = lVar12 + lVar2;
    }
    iVar9 = (int)((ulonglong)lVar2 >> 0x20);
    uVar3 = (uint)lVar2;
    bVar11 = CARRY4(param_1,param_1);
    param_1 = param_1 * 2;
    iVar10 = iVar10 + 1;
    uVar8 = uVar8 * 2 + (uint)bVar11;
  } while (iVar10 < 0x35);
  uVar6 = iVar9 * 2 + (uint)CARRY4(uVar3,uVar3);
  if (uVar8 < uVar6 || uVar6 - uVar8 < (uint)(param_1 <= uVar3 * 2)) {
    uVar5 = 0;
    uVar7 = 0;
  }
  else {
    uVar5 = 0xffffffff;
    uVar7 = 0xffffffff;
  }
  FUN_080108aa(uVar3,iVar9 + (((int)uVar4 >> 1) + 0x1ff) * 0x100000,uVar5,uVar7);
  return;
}


// 08010a08

undefined8 FUN_08010a08(uint param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((!((param_2 & 0x7fffffff) == 0 && param_1 == 0)) &&
     (uVar1 = (param_2 & 0x7fffffff) >> 0x14, uVar1 < 0x434)) {
    if (0x3fe < uVar1) {
      uVar2 = FUN_08010722(param_1,param_2,uVar1 - 0x3f3);
      uVar3 = FUN_08010740(param_1,param_2,-(uVar1 - 0x433));
      uVar2 = FUN_080108aa((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar2,
                           (int)((ulonglong)uVar2 >> 0x20));
      uVar2 = FUN_08010722((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),-(uVar1 - 0x433));
      return uVar2;
    }
    if ((uVar1 < 0x3fe) ||
       (((param_2 & 0xfffff) == 0 && param_1 >> 0x14 == 0) && (param_1 & 0xfffff) == 0)) {
      param_1 = 0;
      param_2 = 0;
    }
    else {
      param_2 = param_2 & 0x80000000 | DAT_08010a8c;
      param_1 = 0;
    }
  }
  return CONCAT44(param_2,param_1);
}


// 08010a90

void FUN_08010a90(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_2 & 0x7fffffff) >> 0x14;
  uVar1 = param_2 & 0xfffff | 0x100000;
  if (uVar2 < 0x3ff) {
    return;
  }
  if (uVar2 < 0x434) {
    FUN_08010740(param_1,uVar1,-(uVar2 - 0x433));
    return;
  }
  FUN_08010722(param_1,uVar1);
  return;
}


// 08010b68

void FUN_08010b68(void)

{
  byte bVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  byte *extraout_r2;
  int extraout_r3;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  
  puVar3 = puRam08010b88;
  for (puVar6 = puRam08010b84; puVar6 < puVar3; puVar6 = puVar6 + 4) {
    (*(code *)puVar6[3])(*puVar6,puVar6[1],puVar6[2]);
  }
  thunk_FUN_08015ea0();
  if (MasterStackPointer == -1) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    for (pbVar5 = (byte *)0x1; *pbVar5 != 0xff; pbVar5 = pbVar5 + 1) {
      iVar4 = (uint)*pbVar5 + iVar4 * 10;
    }
    if (MasterStackPointer == '-') {
      iVar4 = -iVar4;
    }
  }
  uVar2 = 0;
  if ((*extraout_r2 == 0x2d) || (pbVar5 = extraout_r2, *extraout_r2 == 0x2b)) {
    pbVar5 = extraout_r2 + 1;
  }
  while( true ) {
    bVar1 = *pbVar5;
    if (bVar1 == 0xff) break;
    pbVar5 = pbVar5 + 1;
    uVar2 = (uVar2 & 0xffffffff) * 10 + CONCAT44((int)(uVar2 >> 0x20) * 10,(uint)bVar1);
  }
  uVar11 = extraout_r3 + iVar4;
  if ((uVar2 != 0) && (-0x191 < (int)uVar11)) {
    lVar14 = (ulonglong)DAT_08010ee0 << 0x20;
    lVar13 = (ulonglong)DAT_08010ee4 << 0x20;
    uVar12 = FUN_08010f2c((int)uVar2);
    if ((int)uVar11 < 0) {
      uVar7 = -uVar11;
    }
    else {
      uVar7 = uVar11;
    }
    iVar4 = DAT_08010ee4 + uVar7 * 0x100000;
    while( true ) {
      uVar8 = (undefined4)((ulonglong)lVar14 >> 0x20);
      uVar10 = (undefined4)((ulonglong)lVar13 >> 0x20);
      uVar9 = (undefined4)lVar13;
      if (uVar7 == 0) break;
      if ((uVar7 & 1) != 0) {
        lVar13 = FUN_08010388(uVar9,uVar10,(int)lVar14,uVar8);
      }
      lVar14 = FUN_08010388((int)lVar14,uVar8);
      uVar7 = (int)uVar7 >> 1;
    }
    if ((int)uVar11 < 0) {
      uVar12 = FUN_0801046c();
      FUN_0801046c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),uVar9,uVar10);
    }
    else {
      uVar12 = FUN_08010388((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,iVar4);
      FUN_08010388((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),uVar9,uVar10);
    }
  }
  return;
}


// 08010b8c

void FUN_08010b8c(undefined4 *param_1,byte *param_2,byte *param_3,int param_4)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  iVar8 = DAT_08010ee4;
  uVar6 = DAT_08010ee0;
  bVar1 = *param_2;
  if (bVar1 == 0xff) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    while( true ) {
      param_2 = param_2 + 1;
      if (*param_2 == 0xff) break;
      iVar3 = (uint)*param_2 + iVar3 * 10;
    }
    if (bVar1 == 0x2d) {
      iVar3 = -iVar3;
    }
  }
  bVar10 = false;
  bVar1 = *param_3;
  uVar2 = 0;
  if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
    param_3 = param_3 + 1;
    bVar10 = bVar1 == 0x2d;
  }
  while( true ) {
    bVar1 = *param_3;
    if (bVar1 == 0xff) break;
    param_3 = param_3 + 1;
    uVar2 = (uVar2 & 0xffffffff) * 10 + CONCAT44((int)(uVar2 >> 0x20) * 10,(uint)bVar1);
  }
  uVar9 = param_4 + iVar3;
  if ((uVar2 == 0) || ((int)uVar9 < -400)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar5 = 0;
    uVar7 = 0;
    uVar11 = FUN_08010f2c((int)uVar2);
    if ((int)uVar9 < 0) {
      uVar4 = -uVar9;
    }
    else {
      uVar4 = uVar9;
    }
    iVar3 = DAT_08010ee4 + uVar4 * 0x100000;
    for (; uVar12 = CONCAT44(iVar8,uVar7), uVar4 != 0; uVar4 = (int)uVar4 >> 1) {
      if ((uVar4 & 1) != 0) {
        uVar12 = FUN_08010388(uVar7,iVar8,uVar5,uVar6);
      }
      iVar8 = (int)((ulonglong)uVar12 >> 0x20);
      uVar7 = (undefined4)uVar12;
      uVar12 = FUN_08010388(uVar5,uVar6);
      uVar6 = (undefined4)((ulonglong)uVar12 >> 0x20);
      uVar5 = (undefined4)uVar12;
    }
    if ((int)uVar9 < 0) {
      uVar11 = FUN_0801046c();
      uVar11 = FUN_0801046c((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar7,iVar8);
    }
    else {
      uVar11 = FUN_08010388((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,iVar3);
      uVar11 = FUN_08010388((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar7,iVar8);
    }
    uVar9 = (uint)((ulonglong)uVar11 >> 0x20);
    if (bVar10) {
      uVar9 = uVar9 ^ 0x80000000;
    }
    *param_1 = (int)uVar11;
    param_1[1] = uVar9;
  }
  return;
}


// 08010cb4

int FUN_08010cb4(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  undefined1 local_68;
  char local_67 [23];
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [12];
  undefined1 *local_3c;
  undefined4 uStack_34;
  undefined4 local_30;
  int *local_2c;
  int *piStack_28;
  
  uVar7 = param_4[1];
  iVar10 = param_4[2];
  iVar13 = 0;
  local_3c = (undefined1 *)0x2e;
  iVar9 = -1;
  uStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  piStack_28 = param_4;
  do {
    iVar3 = iVar9;
    iVar9 = iVar3 + 1;
    puVar1 = (undefined1 *)(*(code *)param_4[6])(local_30);
    iVar2 = (*(code *)param_4[8])();
  } while (iVar2 != 0);
  if (puVar1 == (undefined1 *)0xffffffff) {
    return -1;
  }
  uVar7 = uVar7 & 0xfffff97f;
  if (0 < iVar10) {
    if (puVar1 != (undefined1 *)0x2b) {
      if (puVar1 != &DAT_0000002d) goto LAB_08010d12;
      uVar7 = uVar7 | 0x400;
    }
    iVar9 = iVar3 + 2;
    puVar1 = (undefined1 *)(*(code *)param_4[6])(local_30);
    iVar10 = iVar10 + -1;
  }
LAB_08010d12:
  if ((int)(uVar7 << 0x15) < 0) {
    local_68 = 0x2d;
  }
  else {
    local_68 = 0x2b;
  }
  pcVar15 = local_67;
  puVar12 = local_48;
  while ((0 < iVar10 && (puVar1 == &Reserved5))) {
    iVar9 = iVar9 + 1;
    puVar1 = (undefined1 *)(*(code *)param_4[6])(local_30);
    uVar7 = uVar7 | 0x200;
    iVar10 = iVar10 + -1;
    *local_2c = iVar9;
  }
  if (puVar1 == local_3c) {
    uVar7 = uVar7 | 0x80;
    iVar2 = iVar9;
    while( true ) {
      iVar9 = iVar2 + 1;
      iVar10 = iVar10 + -1;
      puVar1 = (undefined1 *)(*(code *)param_4[6])(local_30);
      if (puVar1 != &Reserved5) break;
      iVar13 = iVar13 + -1;
      uVar7 = uVar7 | 0x200;
      *local_2c = iVar2 + 2;
      iVar2 = iVar9;
    }
  }
  do {
    if (iVar10 < 1) {
LAB_08010e7c:
      (*(code *)param_4[7])(local_30);
      *pcVar15 = -1;
      *puVar12 = 0xff;
      local_50 = 0;
      local_4c = 0;
      FUN_08010b8c(&local_50,local_48,&local_68,iVar13);
      if (-1 < (int)(uVar7 << 0x16)) {
        return -2;
      }
      if ((uVar7 & 0x24) == 0) {
        uVar6 = FUN_0801065c(local_50,local_4c);
        if ((uVar7 & 1) == 0) {
          puVar5 = (undefined4 *)*param_4;
          *param_4 = (int)(puVar5 + 1);
          *(undefined4 *)*puVar5 = uVar6;
        }
      }
      else if ((uVar7 & 1) == 0) {
        piVar4 = (int *)*param_4;
        *param_4 = (int)(piVar4 + 1);
        puVar5 = (undefined4 *)*piVar4;
        *puVar5 = local_50;
        puVar5[1] = local_4c;
      }
      return iVar9;
    }
    if ((puVar1 == local_3c) && (-1 < (int)(uVar7 << 0x18))) {
      uVar8 = uVar7 | 0x80;
    }
    else {
      iVar2 = FUN_08014b5c(puVar1);
      if (iVar2 == 0) {
        if ((0 < iVar10) &&
           (((puVar1 == (undefined1 *)0x65 || (puVar1 == (undefined1 *)0x45)) &&
            ((int)(uVar7 << 0x16) < 0)))) {
          uVar7 = uVar7 & 0xfffffcff;
          iVar11 = iVar10 + -1;
          iVar3 = (*(code *)param_4[6])(local_30);
          iVar2 = iVar9 + 1;
          if (0 < iVar11) {
            if (iVar3 != 0x2b) {
              if (iVar3 != 0x2d) goto LAB_08010e16;
              uVar7 = uVar7 | 0x100;
            }
            iVar3 = (*(code *)param_4[6])(local_30);
            iVar11 = iVar10 + -2;
            iVar2 = iVar9 + 2;
          }
LAB_08010e16:
          iVar9 = iVar2;
          if ((int)(uVar7 << 0x17) < 0) {
            local_48[0] = 0x2d;
          }
          else {
            local_48[0] = 0x2b;
          }
          puVar12 = local_48 + 1;
          local_3c = puVar12;
          while ((0 < iVar11 && (iVar10 = FUN_08014b5c(iVar3), iVar10 != 0))) {
            iVar11 = iVar11 + -1;
            if (puVar12 < local_48 + 9) {
              *puVar12 = (char)(iVar3 - 0x30U);
              if (((iVar3 - 0x30U & 0xff) != 0) || (local_3c < puVar12)) {
                puVar12 = puVar12 + 1;
              }
            }
            else if ((int)(uVar7 << 0x17) < 0) {
              iVar13 = DAT_08010ee8;
            }
            else {
              iVar13 = 9999;
            }
            iVar9 = iVar9 + 1;
            iVar3 = (*(code *)param_4[6])(local_30);
            *local_2c = iVar9;
            uVar7 = uVar7 | 0x200;
          }
        }
        goto LAB_08010e7c;
      }
      uVar8 = uVar7 | 0x200;
      if (pcVar15 < local_67 + 0x12) {
        pcVar14 = pcVar15 + 1;
        *pcVar15 = (char)puVar1 + -0x30;
        pcVar15 = pcVar14;
        if ((int)(uVar7 << 0x18) < 0) {
          iVar13 = iVar13 + -1;
        }
      }
      else if (-1 < (int)(uVar7 << 0x18)) {
        iVar13 = iVar13 + 1;
      }
    }
    iVar10 = iVar10 + -1;
    if ((int)(uVar8 << 0x16) < 0) {
      *local_2c = iVar9 + 1;
    }
    iVar9 = iVar9 + 1;
    puVar1 = (undefined1 *)(*(code *)param_4[6])(local_30);
    uVar7 = uVar8;
  } while( true );
}


// 08010f2c

void FUN_08010f2c(void)

{
  FUN_080108c8();
  return;
}


// 08010f44

undefined4 FUN_08010f44(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  
  pbVar5 = param_2 + param_3;
  do {
    uVar6 = (uint)*param_1;
    uVar4 = uVar6 & 7;
    pbVar1 = param_1 + 1;
    if ((*param_1 & 7) == 0) {
      pbVar1 = param_1 + 2;
      uVar4 = (uint)param_1[1];
    }
    uVar2 = (int)uVar6 >> 4;
    if (uVar2 == 0) {
      uVar2 = (uint)*pbVar1;
      pbVar1 = pbVar1 + 1;
    }
    while (uVar4 = uVar4 - 1, uVar4 != 0) {
      *param_2 = *pbVar1;
      pbVar1 = pbVar1 + 1;
      param_2 = param_2 + 1;
    }
    if ((int)(uVar6 << 0x1c) < 0) {
      param_1 = pbVar1 + 1;
      iVar3 = uVar2 + 2;
      pbVar1 = param_2 + -(uint)*pbVar1;
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        *param_2 = *pbVar1;
        param_2 = param_2 + 1;
        pbVar1 = pbVar1 + 1;
      }
    }
    else {
      while (uVar2 = uVar2 - 1, param_1 = pbVar1, -1 < (int)uVar2) {
        *param_2 = 0;
        param_2 = param_2 + 1;
      }
    }
  } while (param_2 < pbVar5);
  return 0;
}


// 08010f9a

void FUN_08010f9a(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & ~param_2;
  return;
}


// 08010fa2

void FUN_08010fa2(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    FUN_08011e48(0x100,0);
    FUN_08011e30(param_2);
  }
  else {
    FUN_08011e48(param_2,1);
    FUN_08011e30(0);
  }
  return;
}


// 08010fcc

void FUN_08010fcc(int param_1,int param_2,int param_3,uint param_4)

{
  if (param_2 == 0x12) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xfffffff8 | param_4;
  }
  else if (param_2 < 10) {
    *(uint *)(param_1 + 0x10) =
         *(uint *)(param_1 + 0x10) & ~(7 << (param_2 * 3 & 0xffU)) |
         param_4 << (param_2 * 3 & 0xffU);
  }
  else {
    *(uint *)(param_1 + 0xc) =
         *(uint *)(param_1 + 0xc) & ~(7 << ((param_2 + -10) * 3 & 0xffU)) |
         param_4 << ((param_2 + -10) * 3 & 0xffU);
  }
  if (param_3 < 7) {
    *(uint *)(param_1 + 0x34) =
         *(uint *)(param_1 + 0x34) & ~(0x1f << ((param_3 + -1) * 5 & 0xffU)) |
         param_2 << ((param_3 + -1) * 5 & 0xffU);
  }
  else if (param_3 < 0xd) {
    *(uint *)(param_1 + 0x30) =
         *(uint *)(param_1 + 0x30) & ~(0x1f << ((param_3 + -7) * 5 & 0xffU)) |
         param_2 << ((param_3 + -7) * 5 & 0xffU);
  }
  else {
    *(uint *)(param_1 + 0x2c) =
         *(uint *)(param_1 + 0x2c) & ~(0x1f << ((param_3 + -0xd) * 5 & 0xffU)) |
         param_2 << ((param_3 + -0xd) * 5 & 0xffU);
  }
  return;
}


// 08011094

void FUN_08011094(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  }
  else {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  }
  return;
}


// 080110aa

void FUN_080110aa(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffafffff;
  }
  else {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x500000;
  }
  return;
}


// 080110c0

bool FUN_080110c0(int param_1)

{
  return (*(uint *)(param_1 + 8) & 4) != 0;
}


// 080110d4

uint FUN_080110d4(int param_1)

{
  return *(uint *)(param_1 + 0x4c) & 0xffff;
}


// 080110dc

undefined4 FUN_080110dc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_08010fcc(param_1,param_2,1,7);
  FUN_080110aa(param_1,1);
  do {
    iVar1 = FUN_08011120(param_1,2);
  } while (iVar1 == 0);
  FUN_08010f9a(param_1,2);
  FUN_08010f9a(param_1,0x10);
  uVar2 = FUN_080110d4(param_1);
  return uVar2;
}


// 08011120

bool FUN_08011120(uint *param_1,uint param_2)

{
  return (*param_1 & param_2) != 0;
}


// 08011132

bool FUN_08011132(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x58) & param_2) != 0;
}


// 08011144

void FUN_08011144(int param_1,uint *param_2)

{
  *(uint *)(param_1 + 4) =
       *(uint *)(param_1 + 4) & DAT_0801118c | *param_2 | (uint)(byte)param_2[1] << 8;
  *(uint *)(param_1 + 8) =
       *(uint *)(param_1 + 8) & DAT_08011190 |
       param_2[3] | param_2[2] | (uint)*(byte *)((int)param_2 + 5) << 1;
  *(uint *)(param_1 + 0x2c) =
       *(uint *)(param_1 + 0x2c) & 0xff0fffff | (uint)(byte)((char)param_2[4] - 1) << 0x14;
  return;
}


// 08011194

void FUN_08011194(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
  return;
}


// 080111a0

void FUN_080111a0(void)

{
  FUN_08011e00(0x700);
  FUN_080142a8();
  FUN_08017b30();
  FUN_08011a2c();
  FUN_080143e4();
  FUN_08012be4();
  FUN_08011bc8(DAT_080111dc);
  FUN_08011bc8(DAT_080111e0);
  FUN_08011b48();
  *DAT_080111e4 = 0;
  FUN_08015e60();
  return;
}


// 080111e8

void thunk_FUN_080111ea(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 080111ea

void FUN_080111ea(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 080111ec

void vec_30(void)

{
  FUN_08011220(0x2000,DAT_08011214);
  FUN_080113ec(DAT_08011214 + 0x44,0);
  *DAT_08011218 = 0;
  FUN_08011980(DAT_0801121c,0x800);
  return;
}


// 08011220

void FUN_08011220(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = param_1;
  return;
}


// 08011224

void FUN_08011224(uint *param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = *param_1 & ~param_2;
  }
  else {
    *param_1 = *param_1 | param_2;
  }
  return;
}


// 08011238

void FUN_08011238(uint *param_1)

{
  *param_1 = *param_1 & 0xfffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1 == DAT_080113e4) {
    DAT_080113e4[-1] = DAT_080113e4[-1] | 0xf;
  }
  else if (param_1 == DAT_080113e4 + 5) {
    DAT_080113e4[-1] = DAT_080113e4[-1] | 0xf0;
  }
  else if (param_1 == DAT_080113e4 + 10) {
    DAT_080113e4[-1] = DAT_080113e4[-1] | 0xf00;
  }
  else if (param_1 == DAT_080113e4 + 0xf) {
    DAT_080113e4[-1] = DAT_080113e4[-1] | 0xf000;
  }
  else if (param_1 == DAT_080113e4 + 0x14) {
    DAT_080113e4[-1] = DAT_080113e4[-1] | 0xf0000;
  }
  else if (param_1 == DAT_080113e4 + 0x19) {
    DAT_080113e4[-1] = DAT_080113e4[-1] | 0xf00000;
  }
  else if (param_1 == DAT_080113e4 + 0x1e) {
    DAT_080113e4[-1] = DAT_080113e4[-1] | 0xf000000;
  }
  else if (param_1 == DAT_080113e4 + 0x23) {
    DAT_080113e4[-1] = DAT_080113e4[-1] | 0xf0000000;
  }
  else if (param_1 == DAT_080113e8) {
    param_1[-1] = param_1[-1] | 0xf;
  }
  else if (param_1 == DAT_080113e8 + 5) {
    DAT_080113e8[-1] = DAT_080113e8[-1] | 0xf0;
  }
  else if (param_1 == DAT_080113e8 + 10) {
    DAT_080113e8[-1] = DAT_080113e8[-1] | 0xf00;
  }
  else if (param_1 == DAT_080113e8 + 0xf) {
    DAT_080113e8[-1] = DAT_080113e8[-1] | 0xf000;
  }
  else if (param_1 == DAT_080113e8 + 0x14) {
    DAT_080113e8[-1] = DAT_080113e8[-1] | 0xf0000;
  }
  else if (param_1 == DAT_080113e8 + 0x19) {
    DAT_080113e8[-1] = DAT_080113e8[-1] | 0xf00000;
  }
  else if (param_1 == DAT_080113e8 + 0x1e) {
    DAT_080113e8[-1] = DAT_080113e8[-1] | 0xf000000;
  }
  else if (param_1 == DAT_080113e8 + 0x23) {
    DAT_080113e8[-1] = DAT_080113e8[-1] | 0xf0000000;
  }
  return;
}


// 080113ec

void FUN_080113ec(uint *param_1,int param_2)

{
  if (param_2 == 0) {
    *param_1 = *param_1 & 0xfffe;
  }
  else {
    *param_1 = *param_1 | 1;
  }
  return;
}


// 08011404

uint FUN_08011404(int param_1)

{
  return *(uint *)(param_1 + 4) & 0xffff;
}


// 0801140c

void FUN_0801140c(uint *param_1,uint *param_2)

{
  *param_1 = *param_1 & 0xffff800f |
             param_2[2] | param_2[8] | param_2[4] | param_2[5] | param_2[6] | param_2[7] |
             param_2[9] | param_2[10];
  param_1[1] = param_2[3];
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  return;
}


// 08011448

void FUN_08011448(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


// 0801144c

void vec_12(void)

{
  return;
}


// 08011450

void vec_56(void)

{
  int iVar1;
  
  iVar1 = FUN_0801147c(0x800);
  if (iVar1 != 0) {
    FUN_08011470(0x800);
    *DAT_0801146c = 1;
  }
  return;
}


// 08011470

void FUN_08011470(undefined4 param_1)

{
  *DAT_08011478 = param_1;
  return;
}


// 0801147c

undefined4 FUN_0801147c(uint param_1)

{
  undefined4 uVar1;
  
  if (((DAT_080114a0[5] & param_1) == 0) || ((*DAT_080114a0 & param_1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 080114a4

void FUN_080114a4(uint param_1)

{
  *(uint *)(DAT_080114b0 + 0xc) = *(uint *)(DAT_080114b0 + 0xc) | param_1;
  return;
}


// 080114b4

int FUN_080114b4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_080114a4(0x7c);
  iVar2 = FUN_080115e0(0xb0000);
  iVar1 = DAT_08011504;
  if (iVar2 == 6) {
    *(uint *)(DAT_08011504 + 0x10) = *(uint *)(DAT_08011504 + 0x10) | 2;
    *(undefined4 *)(iVar1 + 0x14) = param_1;
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x40;
    iVar2 = FUN_080115e0(0xb0000);
    *(uint *)(DAT_08011504 + 0x10) = *(uint *)(DAT_08011504 + 0x10) & 0x3ffd;
  }
  return iVar2;
}


// 08011508

undefined4 FUN_08011508(void)

{
  undefined4 uVar1;
  
  if ((*(uint *)(DAT_08011554 + 0xc) & 1) == 0) {
    if ((*(uint *)(DAT_08011554 + 0xc) & 4) == 0) {
      if ((*(uint *)(DAT_08011554 + 0xc) & 8) == 0) {
        if ((*(uint *)(DAT_08011554 + 0xc) & 0x10) == 0) {
          if ((*(uint *)(DAT_08011554 + 0xc) & 0x40) == 0) {
            uVar1 = 6;
          }
          else {
            uVar1 = 7;
          }
        }
        else {
          uVar1 = 5;
        }
      }
      else {
        uVar1 = 4;
      }
    }
    else {
      uVar1 = 3;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 08011558

void FUN_08011558(void)

{
  *(uint *)(DAT_08011568 + 0x10) = *(uint *)(DAT_08011568 + 0x10) | 0x80;
  return;
}


// 0801156c

int FUN_0801156c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (((uint)param_1 & 3) == 0) {
    FUN_080114a4(0x7c);
    iVar1 = FUN_080115e0(0x2000);
    if (iVar1 == 6) {
      *(uint *)(DAT_080115c4 + 0x10) = *(uint *)(DAT_080115c4 + 0x10) | 1;
      *param_1 = param_2;
      iVar1 = FUN_080115e0(0x2000);
      *(uint *)(DAT_080115c4 + 0x10) = *(uint *)(DAT_080115c4 + 0x10) & 0x3ffe;
    }
  }
  else {
    iVar1 = 9;
  }
  return iVar1;
}


// 080115c8

void FUN_080115c8(void)

{
  int iVar1;
  
  iVar1 = DAT_080115d8;
  *(undefined4 *)(DAT_080115d8 + 4) = DAT_080115d4;
  *(undefined4 *)(iVar1 + 4) = DAT_080115dc;
  return;
}


// 080115e0

int FUN_080115e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_r2;
  int extraout_r2_00;
  int iVar2;
  
  iVar1 = FUN_08011508(param_1,param_2,param_1,6);
  iVar2 = extraout_r2;
  while ((iVar1 == 1 && (iVar2 != 0))) {
    iVar1 = FUN_08011508();
    iVar2 = extraout_r2_00 + -1;
  }
  if (iVar2 == 0) {
    iVar1 = 10;
  }
  return iVar1;
}


// 08011608

void FUN_08011608(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 & 0x80000000) == 0x80000000) {
    uVar1 = *(uint *)(DAT_08011850 + 0x1c);
  }
  else if ((param_1 & 0x40000000) == 0x40000000) {
    uVar1 = *(uint *)(DAT_08011850 + 0x20);
  }
  else if ((param_1 & 0x20000000) == 0x20000000) {
    uVar1 = *(uint *)(DAT_08011850 + 0x24);
  }
  else if ((param_1 & 0x10000000) == 0x10000000) {
    uVar1 = *(uint *)(DAT_08011850 + 0x28);
  }
  else {
    uVar1 = *(uint *)(DAT_08011850 + 4);
  }
  uVar3 = (param_1 & 0xfffff) >> 0x10;
  uVar2 = param_1 & 0xffff;
  if ((DAT_08011854 & param_1) == 0x300000) {
    uVar1 = uVar1 & 0xf0ffffff;
    *(uint *)(DAT_08011850 + 4) = *(uint *)(DAT_08011850 + 4) & 0xf0ffffff;
  }
  else if ((param_1 & 0x100000) == 0x100000) {
    if ((param_1 & 0x200000) == 0x200000) {
      uVar3 = (3 << uVar3) << 0x10;
    }
    else {
      uVar3 = 3 << uVar3;
    }
    uVar1 = uVar1 & ~uVar3;
    if ((param_1 & 0x70000000) == 0) {
      uVar1 = uVar1 | 0xf000000;
    }
  }
  else if ((param_1 & 0x1000000) == 0x1000000) {
    if ((param_1 & 4) == 4) {
      if ((param_1 & 0x2000000) == 0x2000000) {
        uVar1 = uVar1 & ~(uVar2 << (((param_1 & 0x3fffff) >> 0x15) << 4));
        if (param_2 == 0) {
          *(uint *)(DAT_08011850 + 4) = *(uint *)(DAT_08011850 + 4) & 0xfffffffe | 0xf000000;
        }
        else {
          *(uint *)(DAT_08011850 + 4) = *(uint *)(DAT_08011850 + 4) | 0xf000001;
        }
      }
      else {
        uVar1 = uVar1 & ~(uVar2 << (((param_1 & 0x3fffff) >> 0x15) << 4));
        *(uint *)(DAT_08011850 + 4) = *(uint *)(DAT_08011850 + 4) & 0xfffffffe | 0xf000000;
      }
    }
    else {
      uVar1 = uVar1 & ~((uVar2 | 4) << (((param_1 & 0x3fffff) >> 0x15) << 4));
      if (param_2 == 0) {
        *(uint *)(DAT_08011850 + 4) = *(uint *)(DAT_08011850 + 4) & 0xfffffffe | 0xf000000;
      }
      else {
        *(uint *)(DAT_08011850 + 4) = *(uint *)(DAT_08011850 + 4) | 0xf000001;
      }
    }
  }
  else if ((param_1 & 0x4000000) == 0x4000000) {
    if ((param_1 & 8) == 8) {
      if ((param_1 & 0x2000000) == 0x2000000) {
        uVar1 = uVar1 & ~(uVar2 << (((param_1 & 0x3fffff) >> 0x15) << 4));
        if (param_2 == 0) {
          *(uint *)(DAT_08011850 + 4) = *(uint *)(DAT_08011850 + 4) & 0xfffffff7 | 0xf000000;
        }
        else {
          *(uint *)(DAT_08011850 + 4) = *(uint *)(DAT_08011850 + 4) | 0xf000008;
        }
      }
      else {
        uVar1 = uVar1 & ~(uVar2 << (((param_1 & 0x3fffff) >> 0x15) << 4));
        *(uint *)(DAT_08011850 + 4) = *(uint *)(DAT_08011850 + 4) & 0xfffffff7 | 0xf000000;
      }
    }
    else {
      uVar1 = uVar1 & ~((uVar2 | 8) << (((param_1 & 0x3fffff) >> 0x15) << 4));
      if (param_2 == 0) {
        *(uint *)(DAT_08011850 + 4) = *(uint *)(DAT_08011850 + 4) & 0xfffffff7 | 0xf000000;
      }
      else {
        *(uint *)(DAT_08011850 + 4) = *(uint *)(DAT_08011850 + 4) | 0xf000008;
      }
    }
  }
  else {
    uVar1 = uVar1 & ~(uVar2 << (((param_1 & 0x3fffff) >> 0x15) << 4));
    if ((param_1 & 0x70000000) == 0) {
      uVar1 = uVar1 | 0xf000000;
    }
  }
  if (param_2 != 0) {
    uVar1 = uVar1 | uVar2 << (((param_1 & 0x3fffff) >> 0x15) << 4);
  }
  if ((param_1 & 0x80000000) == 0x80000000) {
    *(uint *)(DAT_08011850 + 0x1c) = uVar1;
  }
  else if ((param_1 & 0x40000000) == 0x40000000) {
    *(uint *)(DAT_08011850 + 0x20) = uVar1;
  }
  else if ((param_1 & 0x20000000) == 0x20000000) {
    *(uint *)(DAT_08011850 + 0x24) = uVar1;
  }
  else if ((param_1 & 0x10000000) == 0x10000000) {
    *(uint *)(DAT_08011850 + 0x28) = uVar1;
  }
  else {
    *(uint *)(DAT_08011850 + 4) = uVar1;
  }
  return;
}


// 08011858

uint FUN_08011858(uint *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = 0;
  uVar4 = *(byte *)((int)param_2 + 3) & 0xf;
  if ((*(byte *)((int)param_2 + 3) & 0x10) != 0) {
    uVar4 = (byte)param_2[1] | uVar4;
  }
  if ((char)*param_2 != '\0') {
    uVar3 = *param_1;
    for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1) {
      uVar2 = 1 << (uVar1 & 0xff);
      if ((*param_2 & uVar2) == uVar2) {
        uVar3 = uVar4 << (uVar1 << 2 & 0xff) | uVar3 & ~(0xf << (uVar1 << 2 & 0xff));
        if (*(char *)((int)param_2 + 3) == '(') {
          param_1[5] = 1 << (uVar1 & 0xff);
        }
        else if (*(char *)((int)param_2 + 3) == 'H') {
          param_1[4] = 1 << (uVar1 & 0xff);
        }
      }
    }
    *param_1 = uVar3;
  }
  if (0xff < *param_2) {
    uVar3 = param_1[1];
    for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1) {
      uVar2 = 1 << (uVar1 + 8 & 0xff);
      if ((*param_2 & uVar2) == uVar2) {
        uVar3 = uVar4 << (uVar1 << 2 & 0xff) | uVar3 & ~(0xf << (uVar1 << 2 & 0xff));
        if (*(char *)((int)param_2 + 3) == '(') {
          param_1[5] = 1 << (uVar1 + 8 & 0xff);
        }
        if (*(char *)((int)param_2 + 3) == 'H') {
          param_1[4] = 1 << (uVar1 + 8 & 0xff);
        }
      }
    }
    param_1[1] = uVar3;
  }
  return uVar1;
}


// 0801196e

bool FUN_0801196e(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 8) & param_2) != 0;
}


// 08011980

void FUN_08011980(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// 08011984

void FUN_08011984(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


// 08011988

void FUN_08011988(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  FUN_080126cc(param_1,param_2 & 0xffff);
  uVar1 = FUN_0801254c(param_1);
  if (param_2 < uVar1) {
    FUN_08012548(param_1,1);
  }
  return;
}


// 080119ac

void FUN_080119ac(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08011eac(4,1);
  local_8 = 0x10030020;
  FUN_08011858(DAT_08011a28,&local_8);
  FUN_08011984(DAT_08011a28,0x20);
  FUN_08011eac(4,1);
  local_8 = 0x10030002;
  FUN_08011858(DAT_08011a28,&local_8);
  FUN_08011980(DAT_08011a28,2);
  FUN_08011eac(4,1);
  local_8 = 0x10030001;
  FUN_08011858(DAT_08011a28,&local_8);
  return;
}


// 08011a2c

void FUN_08011a2c(void)

{
  int iVar1;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined2 local_8;
  undefined1 local_5;
  
  FUN_08011eac(0x18,1);
  FUN_08011e6c(0xe000,1);
  FUN_08010fa2(0,7);
  FUN_08011e14(0x20000,0x3800);
  local_8 = 0xf000;
  local_5 = 0;
  FUN_08011858(DAT_08011b30,&local_8);
  local_8 = 0xf;
  local_5 = 0;
  FUN_08011858(DAT_08011b34,&local_8);
  local_1c = 0;
  local_18 = 0;
  local_17 = 0;
  local_14 = 0xe0000;
  local_10 = 0;
  local_c = 1;
  FUN_08011144(DAT_08011b38,&local_1c);
  FUN_08011144(DAT_08011b3c,&local_1c);
  FUN_08011144(DAT_08011b40,&local_1c);
  FUN_08011094(DAT_08011b38,1);
  do {
    iVar1 = FUN_08011132(DAT_08011b38,0x20);
  } while (iVar1 == 0);
  FUN_08011194(DAT_08011b38);
  do {
    iVar1 = FUN_080110c0(DAT_08011b38);
  } while (iVar1 != 0);
  FUN_08011094(DAT_08011b3c,1);
  do {
    iVar1 = FUN_08011132(DAT_08011b3c,0x20);
  } while (iVar1 == 0);
  FUN_08011194(DAT_08011b3c);
  do {
    iVar1 = FUN_080110c0(DAT_08011b3c);
  } while (iVar1 != 0);
  FUN_08011094(DAT_08011b40,1);
  do {
    iVar1 = FUN_08011132(DAT_08011b40,0x20);
  } while (iVar1 == 0);
  FUN_08011194(DAT_08011b40);
  do {
    iVar1 = FUN_080110c0(DAT_08011b40);
  } while (iVar1 != 0);
  return;
}


// 08011b44

void thunk_FUN_08011b46(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 08011b46

void FUN_08011b46(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 08011b48

void FUN_08011b48(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08011eac(8,1);
  local_8 = 0x10030020;
  FUN_08011858(DAT_08011ba0,&local_8);
  FUN_08011eac(8,1);
  local_8 = 0x10030040;
  FUN_08011858(DAT_08011ba0,&local_8);
  FUN_08011984(DAT_08011ba0,0x20);
  FUN_08011980(DAT_08011ba0,0x40);
  return;
}


// 08011ba4

void FUN_08011ba4(void)

{
  FUN_08011bb4(0x8000000);
  return;
}


// 08011bb4

void FUN_08011bb4(uint param_1,uint param_2)

{
  *DAT_08011bc4 = DAT_08011bc0 & param_2 | param_1;
  return;
}


// 08011bc8

void FUN_08011bc8(int param_1)

{
  if (param_1 == DAT_08011c4c) {
    FUN_08019d1e(param_1,0,0x1dc);
  }
  else if (param_1 == DAT_08011c50) {
    FUN_08019d1e(param_1,0,0x1dc);
  }
  if (param_1 == DAT_08011c4c) {
    FUN_08019d1e(param_1,0x10,DAT_08011c54);
  }
  else if (param_1 == DAT_08011c50) {
    FUN_08019d1e(param_1,0x10,DAT_08011c54);
  }
  FUN_08019d1e(param_1,0x11,0x80);
  if (param_1 == DAT_08011c4c) {
    FUN_08019d1e(param_1,0x6c,DAT_08011c58);
  }
  else if (param_1 == DAT_08011c50) {
    FUN_08019d1e(param_1,0x6c,DAT_08011c58);
  }
  FUN_08019d1e(param_1,0x70,DAT_08011c5c);
  return;
}


// 08011c60

void FUN_08011c60(void)

{
  FUN_080164b4();
  FUN_08015ae0();
  FUN_08010202(DAT_08011c78,0x780);
  return;
}


// 08011c7c

void FUN_08011c7c(void)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0; uVar2 < 5; uVar2 = uVar2 + 1 & 0xff) {
    *(undefined1 *)(DAT_08011d14 + uVar2) = 0;
    *(undefined1 *)(DAT_08011d18 + uVar2) = 0;
    iVar1 = DAT_08011d1c;
    *(bool *)(DAT_08011d1c + uVar2 * 0x30 + 0x20) = 2 < uVar2;
    *(undefined4 *)(iVar1 + uVar2 * 0x30 + 0x24) = 0;
    *(undefined1 *)(iVar1 + uVar2 * 0x30 + 0x21) = 1;
    *(undefined1 *)(iVar1 + uVar2 * 0x30 + 0x22) = 0;
    *(undefined1 *)(iVar1 + uVar2 * 0x30 + 0x18) = 0;
    *(undefined4 *)(iVar1 + uVar2 * 0x30 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + uVar2 * 0x30 + 0x28) = 0;
    *(undefined4 *)(iVar1 + uVar2 * 0x30 + 0x2c) = 0;
  }
  for (uVar2 = 0; uVar2 < 2; uVar2 = uVar2 + 1 & 0xff) {
    *(undefined2 *)(DAT_08011d20 + uVar2 * 2) = 0;
  }
  return;
}


// 08011d24

void thunk_FUN_08011d26(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 08011d26

void FUN_08011d26(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 08011d28

void FUN_08011d28(void)

{
  FUN_080120ec();
  FUN_080119ac();
  return;
}


// 08011d34

uint FUN_08011d34(uint param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)param_1 * (ulonglong)param_2 + 0x800000;
  return (int)((ulonglong)lVar1 >> 0x20) * 0x100 | (uint)lVar1 >> 0x18;
}


// 08011d4e

void vec_2(void)

{
  return;
}


// 08011d50

void FUN_08011d50(void)

{
  undefined4 local_8;
  
  local_8 = 0x1040032;
  FUN_08011d90(&local_8);
  local_8 = 0x1050036;
  FUN_08011d90(&local_8);
  return;
}


// 08011d90

void FUN_08011d90(byte *param_1)

{
  uint uVar1;
  
  if (param_1[3] == 0) {
    *(int *)(DAT_08011dfc + ((int)(uint)*param_1 >> 5) * 4) = 1 << (*param_1 & 0x1f);
  }
  else {
    uVar1 = 0x700 - (*DAT_08011df4 & 0x700) >> 8;
    *(char *)(DAT_08011df8 + (uint)*param_1) =
         (char)(((uint)param_1[1] << (4 - uVar1 & 0xff) | (uint)param_1[2] & 0xfU >> (uVar1 & 0xff))
               << 4);
    *(int *)(((int)(uint)*param_1 >> 5) * 4 + -0x1fff1f00) = 1 << (*param_1 & 0x1f);
  }
  return;
}


// 08011e00

void FUN_08011e00(uint param_1)

{
  *DAT_08011e10 = DAT_08011e0c | param_1;
  return;
}


// 08011e14

void FUN_08011e14(uint param_1,uint param_2)

{
  *(uint *)(DAT_08011e2c + 0x2c) = *(uint *)(DAT_08011e2c + 0x2c) & 0xffff03ff | param_1 | param_2;
  return;
}


// 08011e30

void FUN_08011e30(uint param_1)

{
  *(uint *)(DAT_08011e44 + 0x2c) = *(uint *)(DAT_08011e44 + 0x2c) & 0xfffffff0 | param_1;
  return;
}


// 08011e48

void FUN_08011e48(uint param_1,int param_2)

{
  if (param_2 == 0) {
    param_1 = param_1 & 0xfffffeff;
  }
  *(uint *)(DAT_08011e68 + 0x2c) = *(uint *)(DAT_08011e68 + 0x2c) & 0xfffffe0f | param_1;
  return;
}


// 08011e6c

void FUN_08011e6c(uint param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(DAT_08011e88 + 0x14) = *(uint *)(DAT_08011e88 + 0x14) & ~param_1;
  }
  else {
    *(uint *)(DAT_08011e88 + 0x14) = *(uint *)(DAT_08011e88 + 0x14) | param_1;
  }
  return;
}


// 08011e8c

void FUN_08011e8c(uint param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(DAT_08011ea8 + 0x1c) = *(uint *)(DAT_08011ea8 + 0x1c) & ~param_1;
  }
  else {
    *(uint *)(DAT_08011ea8 + 0x1c) = *(uint *)(DAT_08011ea8 + 0x1c) | param_1;
  }
  return;
}


// 08011eac

void FUN_08011eac(uint param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(DAT_08011ec8 + 0x18) = *(uint *)(DAT_08011ec8 + 0x18) & ~param_1;
  }
  else {
    *(uint *)(DAT_08011ec8 + 0x18) = *(uint *)(DAT_08011ec8 + 0x18) | param_1;
  }
  return;
}


// 08011ecc

void FUN_08011ecc(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(DAT_08011fbc + 4) & DAT_08011fc0;
  if ((uVar2 & 0x8000000) == 0) {
    iVar3 = (uVar2 >> 0x12) + 2;
  }
  else {
    iVar3 = (uVar2 >> 0x12) - 0x1ef;
  }
  if ((*(uint *)(DAT_08011fbc + 4) & 0x10000) == 0) {
    uVar2 = iVar3 * DAT_08011fc4;
  }
  else if ((*(uint *)(DAT_08011fbc + 4) & 0x20000) == 0) {
    uVar2 = iVar3 * DAT_08011fcc;
  }
  else {
    uVar2 = iVar3 * DAT_08011fc8;
  }
  uVar1 = *(uint *)(DAT_08011fbc + 4) & 0xc;
  if (uVar1 == 0) {
    *param_1 = DAT_08011fd0;
  }
  else if (uVar1 == 4) {
    *param_1 = DAT_08011fcc;
  }
  else if (uVar1 == 8) {
    *param_1 = uVar2;
  }
  else {
    *param_1 = DAT_08011fd0;
  }
  param_1[1] = *param_1 >> *(sbyte *)(DAT_08011fd4 + ((*(uint *)(DAT_08011fbc + 4) & 0xf0) >> 4));
  param_1[2] = param_1[1] >> *(sbyte *)(DAT_08011fd4 + ((*(uint *)(DAT_08011fbc + 4) & 0x700) >> 8))
  ;
  param_1[3] = param_1[1] >>
               *(sbyte *)(DAT_08011fd4 + ((*(uint *)(DAT_08011fbc + 4) & 0x3800) >> 0xb));
  param_1[5] = param_1[1] / (uint)*(byte *)(DAT_08011fd8 + (*(uint *)(DAT_08011fbc + 0x2c) & 0xf));
  param_1[4] = uVar2 / *(ushort *)
                        (DAT_08011fdc + ((*(uint *)(DAT_08011fbc + 0x2c) & 0x1f0) >> 4 & 0xf) * 2);
  return;
}


// 08011fe0

void FUN_08011fe0(undefined4 param_1,undefined4 param_2)

{
  FUN_080115c8();
  FUN_080114a4(0x35);
  FUN_080114b4(param_1);
  FUN_0801156c(param_1,param_2);
  FUN_08011558();
  return;
}


// 08012004

void vec_11(void)

{
  return;
}


// 08012008

uint FUN_08012008(void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 0;
  *DAT_080120d4 = *DAT_080120d4 | 0x10000;
  puVar1 = DAT_080120e0;
  do {
    iVar4 = iVar4 + 1;
    if ((int)(*DAT_080120d4 << 0xe) < 0) break;
  } while (iVar4 != 0xffff);
  if ((int)(*DAT_080120d4 << 0xe) < 0) {
    *DAT_080120e0 = *DAT_080120e0 & 0xfffffffc;
    *puVar1 = *puVar1 | 4;
    puVar1 = DAT_080120d4;
    DAT_080120d4[1] = DAT_080120d4[1];
    puVar1[1] = puVar1[1] | 0x2000;
    puVar1[1] = puVar1[1] | 0x500;
    puVar2 = DAT_080120d4;
    DAT_080120d4[1] = puVar1[1] & DAT_080120e4;
    uVar3 = puVar2[1] | 0x30000 | DAT_080120e8;
    puVar2[1] = uVar3;
    *puVar2 = *puVar2 | 0x1000000;
    puVar1 = DAT_080120d4;
    do {
    } while ((*DAT_080120d4 & 0x2000000) == 0);
    DAT_080120d4[1] = DAT_080120d4[1] & 0xfffffffc;
    puVar1[1] = puVar1[1] | 2;
    do {
    } while ((DAT_080120d4[1] & 0xc) != 8);
  }
  else {
    *DAT_080120dc = DAT_080120d8;
  }
  return uVar3;
}


// 080120ec

void FUN_080120ec(void)

{
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  FUN_08011eac(8,1);
  local_8 = 0x48030200;
  FUN_08011858(DAT_08012194,&local_8);
  FUN_08011eac(8,1);
  local_8 = 0x10030002;
  FUN_08011858(DAT_08012194,&local_8);
  FUN_08011eac(4,1);
  local_8 = 0x10030080;
  FUN_08011858(DAT_08012198,&local_8);
  FUN_08011eac(4,1);
  local_8 = 0x10030040;
  FUN_08011858(DAT_08012198,&local_8);
  FUN_08011984(DAT_08012194,2);
  FUN_08011980(DAT_08012198,0x80);
  FUN_08011980(DAT_08012198,0x40);
  return;
}


// 0801219c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801219c(int param_1)

{
  if (param_1 == 4) {
    _DAT_e000e010 = _DAT_e000e010 | 4;
  }
  return;
}


// 080121b2

void vec_15(void)

{
  FUN_080121bc();
  return;
}


// 080121bc

void FUN_080121bc(void)

{
  ushort *puVar1;
  uint *puVar2;
  int iVar3;
  
  puVar1 = DAT_08012410;
  if (*DAT_08012408 < 0x32) {
    DAT_08012410[*DAT_08012408] = *DAT_0801240c;
    if ((int)((uint)puVar1[*DAT_08012408] - (uint)*puVar1) < 1) {
      iVar3 = (uint)*DAT_08012410 - (uint)DAT_08012410[*DAT_08012408];
    }
    else {
      iVar3 = (uint)puVar1[*DAT_08012408] - (uint)*puVar1;
    }
    if (iVar3 < 0xf) {
      if (*DAT_08012408 == 0x31) {
        *DAT_08012414 = 0;
      }
    }
    else {
      *DAT_08012414 = 1;
      puVar2 = DAT_08012418;
      *DAT_08012418 = *DAT_08012418 + 1;
      if (0xffffffef < *puVar2) {
        *puVar2 = 0;
      }
      *DAT_08012408 = 0x31;
    }
    *DAT_08012408 = *DAT_08012408 + 1;
  }
  else {
    *DAT_08012408 = 0;
  }
  puVar1 = DAT_0801241c;
  if (DAT_08012408[1] < 0x32) {
    DAT_0801241c[DAT_08012408[1]] = DAT_0801240c[1];
    if ((int)((uint)puVar1[DAT_08012408[1]] - (uint)*puVar1) < 1) {
      iVar3 = (uint)*DAT_0801241c - (uint)DAT_0801241c[DAT_08012408[1]];
    }
    else {
      iVar3 = (uint)puVar1[DAT_08012408[1]] - (uint)*puVar1;
    }
    if (iVar3 < 0xf) {
      if (DAT_08012408[1] == 0x31) {
        DAT_08012414[1] = 0;
      }
    }
    else {
      DAT_08012414[1] = 1;
      puVar2 = DAT_08012418;
      DAT_08012418[1] = DAT_08012418[1] + 1;
      if (0xffffffef < puVar2[1]) {
        puVar2[1] = 0;
      }
      DAT_08012408[1] = 0x31;
    }
    DAT_08012408[1] = DAT_08012408[1] + 1;
  }
  else {
    DAT_08012408[1] = 0;
  }
  puVar1 = DAT_08012420;
  if (DAT_08012408[2] < 0x32) {
    DAT_08012420[DAT_08012408[2]] = DAT_0801240c[2];
    if ((int)((uint)puVar1[DAT_08012408[2]] - (uint)*puVar1) < 1) {
      iVar3 = (uint)*DAT_08012420 - (uint)DAT_08012420[DAT_08012408[2]];
    }
    else {
      iVar3 = (uint)puVar1[DAT_08012408[2]] - (uint)*puVar1;
    }
    if (iVar3 < 0xf) {
      if (DAT_08012408[2] == 0x31) {
        DAT_08012414[2] = 0;
      }
    }
    else {
      DAT_08012414[2] = 1;
      puVar2 = DAT_08012418;
      DAT_08012418[2] = DAT_08012418[2] + 1;
      if (0xffffffef < puVar2[2]) {
        puVar2[2] = 0;
      }
      DAT_08012408[2] = 0x31;
    }
    DAT_08012408[2] = DAT_08012408[2] + 1;
  }
  else {
    DAT_08012408[2] = 0;
  }
  puVar1 = DAT_08012424;
  if (DAT_08012408[3] < 0x32) {
    DAT_08012424[DAT_08012408[3]] = DAT_0801240c[3];
    if ((int)((uint)puVar1[DAT_08012408[3]] - (uint)*puVar1) < 1) {
      iVar3 = (uint)*DAT_08012424 - (uint)DAT_08012424[DAT_08012408[3]];
    }
    else {
      iVar3 = (uint)puVar1[DAT_08012408[3]] - (uint)*puVar1;
    }
    if (iVar3 < 0xf) {
      if (DAT_08012408[3] == 0x31) {
        DAT_08012414[3] = 0;
      }
    }
    else {
      DAT_08012414[3] = 1;
      puVar2 = DAT_08012418;
      DAT_08012418[3] = DAT_08012418[3] + 1;
      if (0xffffffef < puVar2[3]) {
        puVar2[3] = 0;
      }
      DAT_08012408[3] = 0x31;
    }
    DAT_08012408[3] = DAT_08012408[3] + 1;
  }
  else {
    DAT_08012408[3] = 0;
  }
  return;
}


// 08012428

void FUN_08012428(void)

{
  uint *puVar1;
  uint *puVar2;
  
  *DAT_080124bc = *DAT_080124bc | 0xf00000;
  puVar1 = DAT_080124c0;
  *DAT_080124c0 = *DAT_080124c0 | 1;
  puVar2 = DAT_080124c0;
  DAT_080124c0[1] = puVar1[1] & DAT_080124c4;
  puVar1 = DAT_080124c0;
  *DAT_080124c0 = *puVar2 & DAT_080124c8;
  *puVar1 = *puVar1 & 0xfffbffff;
  puVar2 = DAT_080124c0;
  DAT_080124c0[1] = puVar1[1] & DAT_080124cc;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[2] = 0x9f0000;
  puVar2[7] = puVar2[7] | 0x10000000;
  *(uint *)(DAT_080124d0 + 0xc) = *(uint *)(DAT_080124d0 + 0xc) | 1;
  DAT_080124c0[7] = DAT_080124c0[7] & 0xefffffff;
  *DAT_080124d4 = *DAT_080124d4 | 0x90;
  FUN_08012008();
  DAT_080124bc[-0x20] = 0x8000000;
  return;
}


// 080124d8

void vec_66(void)

{
  int iVar1;
  
  iVar1 = FUN_08012552(DAT_080124f4,1);
  if (iVar1 != 0) {
    FUN_08012518(DAT_080124f4,1);
    FUN_08015ba4();
  }
  return;
}


// 080124f8

void vec_70(void)

{
  int iVar1;
  
  iVar1 = FUN_08012552(DAT_08012514,1);
  if (iVar1 != 0) {
    FUN_08012518(DAT_08012514,1);
    FUN_0801900c();
  }
  return;
}


// 08012518

void FUN_08012518(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & ~param_2;
  return;
}


// 08012520

void FUN_08012520(int param_1,ushort param_2,int param_3)

{
  if (param_3 == 0) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & ~param_2;
  }
  else {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | param_2;
  }
  return;
}


// 08012532

void FUN_08012532(uint *param_1,int param_2)

{
  if (param_2 == 0) {
    *param_1 = *param_1 & 0xfffffffe;
  }
  else {
    *param_1 = *param_1 | 1;
  }
  return;
}


// 08012548

void FUN_08012548(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x14) = param_2;
  return;
}


// 0801254c

undefined2 FUN_0801254c(int param_1)

{
  return *(undefined2 *)(param_1 + 0x24);
}


// 08012552

undefined4 FUN_08012552(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (((*(uint *)(param_1 + 0x10) & param_2) == 0) || ((*(ushort *)(param_1 + 0xc) & param_2) == 0))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 08012574

void FUN_08012574(uint *param_1,undefined2 *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (((((param_1 == DAT_080126b0) || (param_1 == DAT_080126b4)) || (param_1 == (uint *)0x40000000))
      || ((param_1 == DAT_080126b8 || (param_1 == DAT_080126bc)))) || (param_1 == DAT_080126c0)) {
    uVar1 = uVar1 & 0xffffff8f | (uint)(ushort)param_2[1];
  }
  if ((param_1 != DAT_080126c4) && (param_1 != DAT_080126c8)) {
    uVar1 = uVar1 & 0xfffffcff | (uint)(ushort)param_2[3];
  }
  *param_1 = uVar1;
  *(undefined2 *)(param_1 + 0xb) = param_2[2];
  *(undefined2 *)(param_1 + 10) = *param_2;
  if ((param_1 == DAT_080126b0) || (param_1 == DAT_080126b4)) {
    *(ushort *)(param_1 + 0xc) = (ushort)*(byte *)(param_2 + 4);
  }
  *(undefined2 *)(param_1 + 5) = 1;
  uVar1 = *param_1;
  if ((((param_1 == DAT_080126b0) || (param_1 == DAT_080126b4)) || (param_1 == (uint *)0x40000000))
     || (((param_1 == DAT_080126b8 || (param_1 == DAT_080126bc)) || (param_1 == DAT_080126c0)))) {
    if (*(char *)((int)param_2 + 9) == '\0') {
      uVar1 = uVar1 & 0xfffff7ff;
    }
    else {
      uVar1 = uVar1 | 0x800;
    }
  }
  if (((param_1 == (uint *)0x40000000) || (param_1 == DAT_080126b8)) ||
     ((param_1 == DAT_080126bc || (param_1 == DAT_080126c0)))) {
    if (*(char *)(param_2 + 5) == '\0') {
      uVar1 = uVar1 & 0xffffefff;
    }
    else {
      uVar1 = uVar1 | 0x1000;
    }
    if (*(char *)((int)param_2 + 0xb) == '\0') {
      uVar1 = uVar1 & 0xffffdfff;
    }
    else {
      uVar1 = uVar1 | 0x2000;
    }
  }
  if (((param_1 == (uint *)0x40000000) || (param_1 == DAT_080126b8)) || (param_1 == DAT_080126bc)) {
    if (*(char *)(param_2 + 6) == '\0') {
      uVar1 = uVar1 & 0xffffbfff;
    }
    else {
      uVar1 = uVar1 | 0x4000;
    }
  }
  if (((param_1 == DAT_080126b0) || (param_1 == DAT_080126b4)) ||
     ((param_1 == (uint *)0x40000000 || ((param_1 == DAT_080126b8 || (param_1 == DAT_080126bc))))))
  {
    if (*(char *)((int)param_2 + 0xd) == '\0') {
      uVar1 = uVar1 & 0xffff7fff;
    }
    else {
      uVar1 = uVar1 | 0x8000;
    }
  }
  *param_1 = uVar1;
  uVar1 = param_1[1];
  if ((param_1 == (uint *)0x40000000) || (param_1 == DAT_080126bc)) {
    if (*(char *)(param_2 + 7) == '\0') {
      uVar1 = uVar1 & 0xfffffeff;
    }
    else {
      uVar1 = uVar1 | 0x100;
    }
  }
  param_1[1] = uVar1;
  return;
}


// 080126cc

void FUN_080126cc(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x2c) = param_2;
  return;
}


// 080126d0

void FUN_080126d0(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 0;
  iVar6 = FUN_08012ac8(DAT_080127fc,0x424);
  if (iVar6 != 0) {
    FUN_080113ec(DAT_08012800,0);
    iVar6 = FUN_08011404(DAT_08012800);
    uVar8 = 0x14U - iVar6 & 0xff;
    if (uVar8 != 0) {
      *(undefined1 *)(DAT_08012804 + 6) = 0xff;
      for (; puVar5 = DAT_08012820, puVar4 = DAT_0801281c, puVar3 = DAT_08012818,
          puVar2 = DAT_08012814, puVar1 = DAT_0801280c, uVar7 < uVar8; uVar7 = uVar7 + 1 & 0xff) {
        *(undefined1 *)(DAT_08012804 + uVar7) = *(undefined1 *)(DAT_08012808 + uVar7);
      }
      if (*(char *)(DAT_08012804 + 6) == '\0') {
        *DAT_0801280c = *(undefined1 *)(DAT_08012804 + 7);
        puVar1[1] = *(undefined1 *)(DAT_08012804 + 8);
        puVar1[2] = *(undefined1 *)(DAT_08012804 + 9);
        puVar1[3] = *(undefined1 *)(DAT_08012804 + 10);
        if (puVar1[3] != -0x24) {
          *DAT_08012810 = 1;
        }
      }
      else if (*(char *)(DAT_08012804 + 6) == '\x01') {
        *DAT_08012814 = *(undefined1 *)(DAT_08012804 + 7);
        puVar2[1] = *(undefined1 *)(DAT_08012804 + 8);
        puVar2[2] = *(undefined1 *)(DAT_08012804 + 9);
        puVar2[3] = *(undefined1 *)(DAT_08012804 + 10);
      }
      else if (*(char *)(DAT_08012804 + 6) == 'l') {
        *DAT_08012818 = *(undefined1 *)(DAT_08012804 + 7);
        puVar3[1] = *(undefined1 *)(DAT_08012804 + 8);
        puVar3[2] = *(undefined1 *)(DAT_08012804 + 9);
        puVar3[3] = *(undefined1 *)(DAT_08012804 + 10);
      }
      else if (*(char *)(DAT_08012804 + 6) == 'p') {
        *DAT_0801281c = *(undefined1 *)(DAT_08012804 + 7);
        puVar4[1] = *(undefined1 *)(DAT_08012804 + 8);
        puVar4[2] = *(undefined1 *)(DAT_08012804 + 9);
        puVar4[3] = *(undefined1 *)(DAT_08012804 + 10);
      }
      else if (*(char *)(DAT_08012804 + 6) == 'o') {
        *DAT_08012820 = *(undefined1 *)(DAT_08012804 + 7);
        puVar5[1] = *(undefined1 *)(DAT_08012804 + 8);
        puVar5[2] = *(undefined1 *)(DAT_08012804 + 9);
        puVar5[3] = *(undefined1 *)(DAT_08012804 + 10);
      }
      FUN_08010202(DAT_08012808,0x14);
    }
    FUN_08011448(DAT_08012800,0x14);
    FUN_080113ec(DAT_08012800,1);
  }
  return;
}


// 08012824

void vec_53(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  iVar1 = FUN_08012ac8(DAT_08012898,0x424);
  if (iVar1 != 0) {
    FUN_080113ec(DAT_0801289c,0);
    iVar1 = FUN_08011404(DAT_0801289c);
    uVar3 = 200U - iVar1 & 0xff;
    if (uVar3 < 3) {
      FUN_08010202(DAT_080128a0,200);
    }
    else {
      for (; uVar2 < uVar3; uVar2 = uVar2 + 1 & 0xff) {
        FUN_080149b0(DAT_080128a4,*(undefined1 *)(DAT_080128a0 + uVar2));
      }
      FUN_08010202(DAT_080128a0,200);
    }
    FUN_08011448(DAT_0801289c,200);
    FUN_080113ec(DAT_0801289c,1);
  }
  return;
}


// 080128a8

void vec_54(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 0;
  iVar6 = FUN_08012ac8(DAT_080129d4,0x424);
  if (iVar6 != 0) {
    FUN_080113ec(DAT_080129d8,0);
    iVar6 = FUN_08011404(DAT_080129d8);
    uVar8 = 0x14U - iVar6 & 0xff;
    if (uVar8 != 0) {
      *(undefined1 *)(DAT_080129dc + 6) = 0xff;
      for (; puVar5 = DAT_080129f8, puVar4 = DAT_080129f4, puVar3 = DAT_080129f0,
          puVar2 = DAT_080129ec, puVar1 = DAT_080129e4, uVar7 < uVar8; uVar7 = uVar7 + 1 & 0xff) {
        *(undefined1 *)(DAT_080129dc + uVar7) = *(undefined1 *)(DAT_080129e0 + uVar7);
      }
      if (*(char *)(DAT_080129dc + 6) == '\0') {
        *DAT_080129e4 = *(undefined1 *)(DAT_080129dc + 7);
        puVar1[1] = *(undefined1 *)(DAT_080129dc + 8);
        puVar1[2] = *(undefined1 *)(DAT_080129dc + 9);
        puVar1[3] = *(undefined1 *)(DAT_080129dc + 10);
        if (puVar1[3] != -0x24) {
          *DAT_080129e8 = 1;
        }
      }
      else if (*(char *)(DAT_080129dc + 6) == '\x01') {
        *DAT_080129ec = *(undefined1 *)(DAT_080129dc + 7);
        puVar2[1] = *(undefined1 *)(DAT_080129dc + 8);
        puVar2[2] = *(undefined1 *)(DAT_080129dc + 9);
        puVar2[3] = *(undefined1 *)(DAT_080129dc + 10);
      }
      else if (*(char *)(DAT_080129dc + 6) == 'l') {
        *DAT_080129f0 = *(undefined1 *)(DAT_080129dc + 7);
        puVar3[1] = *(undefined1 *)(DAT_080129dc + 8);
        puVar3[2] = *(undefined1 *)(DAT_080129dc + 9);
        puVar3[3] = *(undefined1 *)(DAT_080129dc + 10);
      }
      else if (*(char *)(DAT_080129dc + 6) == 'p') {
        *DAT_080129f4 = *(undefined1 *)(DAT_080129dc + 7);
        puVar4[1] = *(undefined1 *)(DAT_080129dc + 8);
        puVar4[2] = *(undefined1 *)(DAT_080129dc + 9);
        puVar4[3] = *(undefined1 *)(DAT_080129dc + 10);
      }
      else if (*(char *)(DAT_080129dc + 6) == 'o') {
        *DAT_080129f8 = *(undefined1 *)(DAT_080129dc + 7);
        puVar5[1] = *(undefined1 *)(DAT_080129dc + 8);
        puVar5[2] = *(undefined1 *)(DAT_080129dc + 9);
        puVar5[3] = *(undefined1 *)(DAT_080129dc + 10);
      }
      FUN_08010202(DAT_080129e0,0x14);
    }
    FUN_08011448(DAT_080129d8,0x14);
    FUN_080113ec(DAT_080129d8,1);
  }
  return;
}


// 080129fc

void vec_55(void)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_08012ac8(DAT_08012a1c,0x525);
  if (iVar2 != 0) {
    uVar1 = FUN_08012bd0(DAT_08012a1c);
    *DAT_08012a20 = uVar1;
    *DAT_08012a24 = 1;
  }
  return;
}


// 08012a28

void FUN_08012a28(ushort *param_1,ushort param_2)

{
  *param_1 = ~param_2;
  return;
}


// 08012a3a

void FUN_08012a3a(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (param_2 & 0xff) >> 5;
  uVar3 = 1 << (param_2 & 0x1f);
  if (uVar2 == 1) {
    puVar1 = (uint *)(param_1 + 0xc);
  }
  else if (uVar2 == 2) {
    puVar1 = (uint *)(param_1 + 0x10);
  }
  else {
    puVar1 = (uint *)(param_1 + 0x14);
  }
  if (param_3 == 0) {
    *puVar1 = *puVar1 & ~uVar3;
  }
  else {
    *puVar1 = *puVar1 | uVar3;
  }
  return;
}


// 08012a84

void FUN_08012a84(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xdfff;
  }
  else {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x2000;
  }
  return;
}


// 08012a9c

void FUN_08012a9c(int param_1,ushort param_2,int param_3)

{
  if (param_3 == 0) {
    *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) & ~param_2;
  }
  else {
    *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) | param_2;
  }
  return;
}


// 08012aae

bool FUN_08012aae(ushort *param_1,ushort param_2)

{
  return (*param_1 & param_2) != 0;
}


// 08012ac8

undefined4 FUN_08012ac8(ushort *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_2 & 0xff) >> 5;
  uVar2 = 1 << (param_2 & 0x1f);
  if (uVar3 == 1) {
    uVar2 = uVar2 & param_1[6];
  }
  else if (uVar3 == 2) {
    uVar2 = uVar2 & param_1[8];
  }
  else {
    uVar2 = uVar2 & param_1[10];
  }
  if ((uVar2 == 0) || ((1 << ((int)param_2 >> 8 & 0xffU) & (uint)*param_1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 08012b1c

void FUN_08012b1c(int param_1,int *param_2)

{
  uint uVar1;
  undefined1 auStack_38 [8];
  int local_30;
  int local_2c;
  
  *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xcfff | *(ushort *)((int)param_2 + 6)
  ;
  *(ushort *)(param_1 + 0xc) =
       *(ushort *)(param_1 + 0xc) & 0xe9f3 |
       *(ushort *)(param_2 + 1) | *(ushort *)(param_2 + 2) | *(ushort *)((int)param_2 + 10);
  *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) & 0xfcff | *(ushort *)(param_2 + 3);
  FUN_08011ecc(auStack_38);
  if (((param_1 != DAT_08012bc4) && (param_1 != DAT_08012bc8)) && (param_1 != DAT_08012bcc)) {
    local_2c = local_30;
  }
  uVar1 = (uint)(local_2c * 0x19) / (uint)(*param_2 << 2);
  *(ushort *)(param_1 + 8) =
       (ushort)(uVar1 / 100 << 4) | (ushort)(((uVar1 % 100) * 0x10 + 0x32) / 100) & 0xf;
  return;
}


// 08012bd0

ushort FUN_08012bd0(int param_1)

{
  return *(ushort *)(param_1 + 4) & 0x1ff;
}


// 08012bda

void FUN_08012bda(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 4) = param_2 & 0x1ff;
  return;
}


// 08012be4

void FUN_08012be4(void)

{
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_c;
  undefined1 local_a;
  undefined1 local_9;
  
  FUN_08011eac(0x40000);
  FUN_08011eac(0x10,1);
  FUN_08011eac(1);
  local_c = 0x10;
  local_9 = 0x18;
  local_a = 3;
  FUN_08011858(DAT_08012d0c,&local_c);
  local_c = 0x20;
  local_9 = 0x48;
  FUN_08011858(DAT_08012d0c,&local_c);
  local_1c = 0x2580;
  local_18 = 0;
  local_16 = 0;
  local_14 = 0;
  local_10 = 0;
  local_12 = 0xc;
  FUN_08012b1c(DAT_08012d10,&local_1c);
  FUN_08012a3a(DAT_08012d10,0x626,0);
  FUN_08012a3a(DAT_08012d10,0x525,0);
  FUN_08012a3a(DAT_08012d10,0x727,0);
  FUN_08012a3a(DAT_08012d10,0x424,1);
  FUN_08012a84(DAT_08012d10,1);
  FUN_08012a28(DAT_08012d10,0x40);
  local_20 = 0x4b;
  local_1f = 0;
  local_1e = 4;
  local_1d = 1;
  FUN_08011d90(&local_20);
  FUN_08011e6c(2,1);
  FUN_08011238(DAT_08012d14);
  local_4c = DAT_08012d10 + 4;
  local_48 = DAT_08012d18;
  local_44 = 0;
  local_40 = 0x14;
  local_3c = 0;
  local_38 = 0x80;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x20;
  local_28 = 0x2000;
  local_24 = 0;
  FUN_0801140c(DAT_08012d14,&local_4c);
  FUN_08012a9c(DAT_08012d10,0x40,1);
  FUN_080113ec(DAT_08012d14,1);
  return;
}


// 08012d1c

void thunk_FUN_08012d1e(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 08012d1e

void FUN_08012d1e(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 08012d20

void FUN_08012d20(void)

{
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_08011e6c(1);
  FUN_08011238(DAT_08012dd8);
  local_30 = DAT_08012ddc;
  local_2c = DAT_08012de0;
  local_28 = 0x10;
  local_24 = 200;
  local_20 = 0;
  local_1c = 0x80;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x2000;
  local_8 = 0;
  FUN_0801140c(DAT_08012dd8,&local_30);
  FUN_08011224(DAT_08012dd8,2,1);
  FUN_08012a9c(DAT_08012ddc + -4,0x80,1);
  FUN_080113ec(DAT_08012dd8,0);
  FUN_08011238(DAT_08012dd8 + 0x14);
  local_30 = DAT_08012ddc;
  local_2c = DAT_08012de4;
  local_28 = 0;
  local_24 = 200;
  local_20 = 0;
  local_1c = 0x80;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x20;
  local_c = 0x2000;
  local_8 = 0;
  FUN_0801140c(DAT_08012dd8 + 0x14,&local_30);
  FUN_08012a9c(DAT_08012ddc + -4,0x40,1);
  FUN_080113ec(DAT_08012dd8 + 0x14,1);
  return;
}


// 08012de8

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08012de8(void)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined1 auStack_a4 [160];
  
  iVar5 = FUN_08010218(DAT_080131e0,0x46);
  if (iVar5 == 0) {
    return 1;
  }
  iVar5 = FUN_08010218(DAT_080131e0,0x46);
  piVar1 = DAT_080131e4;
  *DAT_080131e4 = iVar5;
  uVar8 = FUN_08014908(*piVar1 + 1,0);
  iVar5 = FUN_08010564(uVar8,extraout_s1);
  if (iVar5 == 0x28) {
    FUN_0801451c(auStack_a4,s_F40_ok_stall_count__C1___d_C2____08013ec3 + 1,*_DAT_08013ec0,
                 _DAT_08013ec0[1],_DAT_08013ec0[2],_DAT_08013ec0[3]);
    FUN_08019e50(auStack_a4);
    return 1;
  }
  if (iVar5 < 0x29) {
    uVar6 = iVar5 - 10;
    bVar7 = 0x1d < uVar6;
  }
  else {
    if (iVar5 == 0x35) {
      FUN_08019c18(DAT_08013ef8,0x6f);
      FUN_0801451c(auStack_a4,s_F53_ok_DRV_STATUS___02x_02x_02x__08014038,*_DAT_08013f70,
                   _DAT_08013f70[1],_DAT_08013f70[2],_DAT_08013f70[3]);
      FUN_08019e50(auStack_a4);
      return 1;
    }
    if (0x35 < iVar5) {
      if (iVar5 == 0x3e) {
        FUN_08019c18(DAT_080141d0,0x6c);
        FUN_0801451c(auStack_a4,s_F62_ok_CHOPCONF___02x_02x_02x_02_080141ff + 1,*_DAT_080141fc,
                     _DAT_080141fc[1],_DAT_080141fc[2],_DAT_080141fc[3]);
        FUN_08019e50(auStack_a4);
        return 1;
      }
      if (iVar5 < 0x3f) {
        if (iVar5 == 0x36) {
          FUN_08019c18(DAT_08013ef8,0x70);
          FUN_0801451c(auStack_a4,s_F54_ok_PWMCONF___02x_02x_02x_02x_08014063 + 1,*_DAT_08014060,
                       _DAT_08014060[1],_DAT_08014060[2],_DAT_08014060[3]);
          FUN_08019e50(auStack_a4);
          return 1;
        }
        if (iVar5 == 0x3c) {
          FUN_08019c18(_DAT_08013f2c,0);
          FUN_0801451c(auStack_a4,s_F60_ok_GCONF___02x_02x_02x_02x_080141ac,*DAT_08014088,
                       DAT_08014088[1],DAT_08014088[2],DAT_08014088[3]);
          FUN_08019e50(auStack_a4);
          return 1;
        }
        bVar7 = iVar5 == 0x3d;
      }
      else {
        if (iVar5 == 0x3f) {
          FUN_08019c18(DAT_080141d0,0x6f);
          FUN_0801451c(auStack_a4,s_F63_ok_DRV_STATUS___02x_02x_02x__0801422b + 1,*_DAT_08014228,
                       _DAT_08014228[1],_DAT_08014228[2],_DAT_08014228[3]);
          FUN_08019e50(auStack_a4);
          return 1;
        }
        if (iVar5 == 0x40) {
          FUN_08019c18(DAT_080141d0,0x70);
          FUN_0801451c(auStack_a4,s_F64_ok_PWMCONF___02x_02x_02x_02x_08014257 + 1,*_DAT_08014254,
                       _DAT_08014254[1],_DAT_08014254[2],_DAT_08014254[3]);
          FUN_08019e50(auStack_a4);
          return 1;
        }
        bVar7 = false;
        if (iVar5 == 0x70) {
          if (*DAT_0801427c == '\0') {
            FUN_08015d28();
            *_DAT_08014280 = 5;
            FUN_0801451c(auStack_a4,s_F112_ok__yes__08014283 + 1);
          }
          else {
            FUN_0801451c(auStack_a4,s_F112_ok__error__08014294);
          }
          FUN_08019e50(auStack_a4);
          return 1;
        }
      }
      if (bVar7) {
        FUN_08019c18(DAT_080141d0,1);
        FUN_0801451c(auStack_a4,s_F61_ok_GSTAT___02x_02x_02x_02x_080141d7 + 1,*_DAT_080141d4,
                     _DAT_080141d4[1],_DAT_080141d4[2],_DAT_080141d4[3]);
        FUN_08019e50(auStack_a4);
        return 1;
      }
      return 1;
    }
    uVar6 = iVar5 - 0x29;
    bVar7 = true;
    switch(uVar6) {
    case 0:
      FUN_08019c18(DAT_08013ef8,0);
      FUN_0801451c(auStack_a4,s_F41_ok_GCONF___02x_02x_02x_02x_08013eff + 1,*_DAT_08013efc,
                   _DAT_08013efc[1],_DAT_08013efc[2],_DAT_08013efc[3]);
      FUN_08019e50(auStack_a4);
      return 1;
    case 1:
      iVar5 = FUN_08010218(DAT_08013ddc,0x54);
      piVar1 = DAT_08013de0;
      *DAT_08013de0 = iVar5;
      if (*piVar1 != 0) {
        uVar8 = FUN_08014908(*piVar1 + 1,0);
        cVar3 = FUN_08010564(uVar8,extraout_s1_00);
        *DAT_08013f24 = cVar3;
      }
      iVar5 = FUN_08010218(DAT_08013ddc,0x49);
      piVar1 = DAT_08013de0;
      *DAT_08013de0 = iVar5;
      if (*piVar1 != 0) {
        uVar8 = FUN_08014908(*piVar1 + 1,0);
        bVar4 = FUN_08010564(uVar8,extraout_s1_01);
        pbVar2 = DAT_08013f28;
        *DAT_08013f28 = bVar4;
        if (*pbVar2 == 0) {
          *pbVar2 = 0;
        }
        else if (0x1e < *DAT_08013f28) {
          *DAT_08013f28 = 0x1f;
        }
        if (*DAT_08013f24 == '\x01') {
          FUN_08019d1e(DAT_08013ef8,0x10,(uint)*DAT_08013f28 << 8 | 0xa0000);
        }
        else if (*DAT_08013f24 == '\x02') {
          FUN_08019d1e(_DAT_08013f2c,0x10,(uint)*DAT_08013f28 << 8 | 0xa0000);
        }
      }
      FUN_0801451c(auStack_a4,s__F42_ok_stepper_motor___d_steppe_08013f2f + 1,*DAT_08013f24,
                   *DAT_08013f28);
      FUN_08019e50(auStack_a4);
      return 1;
    case 2:
      FUN_08011bc8(DAT_08013ef8);
      FUN_08011bc8(_DAT_08013f2c);
      FUN_08019e50(s_F43_ok__08013f64);
      return 1;
    case 3:
      FUN_08019c18(DAT_08013ef8,0x6f);
      FUN_0801451c(auStack_a4,s_F44_ok_DRV_STATUS___02x_02x_02x__08013f73 + 1,*_DAT_08013f70,
                   _DAT_08013f70[1],_DAT_08013f70[2],_DAT_08013f70[3]);
      FUN_08019e50(auStack_a4);
      return 1;
    case 4:
      FUN_08019c18(DAT_08013ef8,1);
      FUN_0801451c(auStack_a4,s_F45_ok_GSTAT___02x_02x_02x_02x_08013f9f + 1,*_DAT_08013f9c,
                   _DAT_08013f9c[1],_DAT_08013f9c[2],_DAT_08013f9c[3]);
      FUN_08019e50(auStack_a4);
      return 1;
    case 5:
    case 6:
    case 7:
    case 8:
      return 1;
    case 9:
      FUN_08019c18(DAT_08013ef8,0);
      FUN_0801451c(auStack_a4,s_F50_ok_GCONF___02x_02x_02x_02x_08013fc4,*_DAT_08013efc,
                   _DAT_08013efc[1],_DAT_08013efc[2],_DAT_08013efc[3]);
      FUN_08019e50(auStack_a4);
      return 1;
    case 10:
      FUN_08019c18(DAT_08013ef8,1);
      FUN_0801451c(auStack_a4,s_F51_ok_GSTAT___02x_02x_02x_02x_08013fe8,*_DAT_08013f9c,
                   _DAT_08013f9c[1],_DAT_08013f9c[2],_DAT_08013f9c[3]);
      FUN_08019e50(auStack_a4);
      return 1;
    case 0xb:
      FUN_08019c18(DAT_08013ef8,0x6c);
      FUN_0801451c(auStack_a4,s_F52_ok_CHOPCONF___02x_02x_02x_02_0801400f + 1,*_DAT_0801400c,
                   _DAT_0801400c[1],_DAT_0801400c[2],_DAT_0801400c[3]);
      FUN_08019e50(auStack_a4);
      return 1;
    }
  }
  if (bVar7) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x08012e3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (*(code *)(&DAT_08012e3e + (uint)*(ushort *)(&DAT_08012e3e + uVar6 * 2) * 2))();
  return uVar8;
}


// 080142a8

void FUN_080142a8(void)

{
  FUN_080142b4();
  FUN_08012d20();
  return;
}


// 080142b4

void FUN_080142b4(void)

{
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_8;
  undefined1 local_6;
  undefined1 local_5;
  
  FUN_08011eac(0x4000);
  FUN_08011eac(4,1);
  FUN_08011eac(4,1);
  local_8 = 0x400;
  local_6 = 3;
  local_5 = 0x48;
  FUN_08011858(DAT_080143dc,&local_8);
  local_8 = 0x200;
  local_6 = 3;
  local_5 = 0x18;
  FUN_08011858(DAT_080143dc,&local_8);
  FUN_08011eac(4,1);
  local_8 = 0x800;
  local_6 = 3;
  local_5 = 0x10;
  FUN_08011858(DAT_080143dc,&local_8);
  FUN_08011980(DAT_080143dc,0x800);
  local_18 = 0x1c200;
  local_14 = 0;
  local_12 = 0;
  local_10 = 0;
  local_c = 0;
  local_e = 0xc;
  FUN_08012b1c(DAT_080143e0,&local_18);
  FUN_08012a3a(DAT_080143e0,0x626,0);
  FUN_08012a3a(DAT_080143e0,0x525,0);
  FUN_08012a3a(DAT_080143e0,0x727,0);
  FUN_08012a3a(DAT_080143e0,0x424,1);
  FUN_08012a84(DAT_080143e0,1);
  FUN_08012a28(DAT_080143e0,0x40);
  local_1c = 0x25;
  local_1b = 0;
  local_1a = 1;
  local_19 = 1;
  FUN_08011d90(&local_1c);
  local_1c = 0xe;
  local_1b = 0;
  local_1a = 2;
  local_19 = 1;
  FUN_08011d90(&local_1c);
  return;
}


// 080143e4

void FUN_080143e4(void)

{
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_c;
  undefined1 local_a;
  undefined1 local_9;
  
  FUN_08011e8c(0x20000);
  FUN_08011eac(4,1);
  FUN_08011eac(1);
  local_c = 4;
  local_9 = 0x18;
  local_a = 3;
  FUN_08011858(DAT_0801450c,&local_c);
  local_c = 8;
  local_9 = 0x48;
  FUN_08011858(DAT_0801450c,&local_c);
  local_1c = 0x2580;
  local_18 = 0;
  local_16 = 0;
  local_14 = 0;
  local_10 = 0;
  local_12 = 0xc;
  FUN_08012b1c(DAT_08014510,&local_1c);
  FUN_08012a3a(DAT_08014510,0x626,0);
  FUN_08012a3a(DAT_08014510,0x525,0);
  FUN_08012a3a(DAT_08014510,0x727,0);
  FUN_08012a3a(DAT_08014510,0x424,1);
  FUN_08012a84(DAT_08014510,1);
  FUN_08012a28(DAT_08014510,0x40);
  local_20 = 0x26;
  local_1f = 0;
  local_1e = 3;
  local_1d = 1;
  FUN_08011d90(&local_20);
  FUN_08011e6c(1);
  FUN_08011238(DAT_08014514);
  local_4c = DAT_08014510 + 4;
  local_48 = DAT_08014518;
  local_44 = 0;
  local_40 = 0x14;
  local_3c = 0;
  local_38 = 0x80;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x20;
  local_28 = 0x2000;
  local_24 = 0;
  FUN_0801140c(DAT_08014514,&local_4c);
  FUN_08012a9c(DAT_08014510,0x40,1);
  FUN_080113ec(DAT_08014514,1);
  return;
}


// 0801451c

undefined4 FUN_0801451c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_10 = param_1;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  uVar1 = FUN_08014b6c(param_2,&uStack_8,&uStack_10,DAT_08014540);
  FUN_0801529a(0,&uStack_10);
  return uVar1;
}


// 08014548

uint FUN_08014548(void)

{
  uint uVar1;
  undefined4 uVar3;
  undefined4 uVar2;
  uint uVar4;
  char cVar5;
  undefined4 uVar6;
  longlong in_d0;
  undefined4 uVar7;
  undefined8 uVar8;
  uint local_20;
  uint uStack_1c;
  
  local_20 = (uint)in_d0;
  uStack_1c = (uint)((ulonglong)in_d0 >> 0x20);
  uVar1 = (uStack_1c & 0x7fffffff) >> 0x14;
  uVar4 = uVar1 - 0x3ff;
  uVar6 = (undefined4)DAT_08014648;
  uVar2 = (undefined4)((ulonglong)DAT_08014648 >> 0x20);
  uVar7 = (undefined4)DAT_08014650;
  uVar3 = (undefined4)((ulonglong)DAT_08014650 >> 0x20);
  if (0x13 < (int)uVar4) {
    cVar5 = 0x32 < uVar4;
    if (0x33 < (int)uVar4) {
      return local_20;
    }
    uVar1 = 0xffffffff >> (uVar1 - 0x413 & 0xff);
    if ((local_20 & uVar1) == 0) {
      return local_20;
    }
    uVar8 = FUN_08010382(local_20,uStack_1c,uVar6,uVar2);
    FUN_0801062c((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar7,uVar3);
    if (cVar5 != '\0') {
      return local_20;
    }
    if ((0 < (int)uStack_1c) && (uVar4 != 0x14)) {
      local_20 = (1 << (0x34 - uVar4 & 0xff)) + local_20;
    }
    return local_20 & ~uVar1;
  }
  cVar5 = '\x01';
  if ((int)uVar4 < 0) {
    uVar8 = FUN_0801023a(local_20,uStack_1c,uVar6,uVar2);
    FUN_0801062c((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar7,uVar3);
    if (cVar5 != '\0') {
      return local_20;
    }
    if (in_d0 < 0) {
      return 0;
    }
    if (uStack_1c == 0 && local_20 == 0) {
      return local_20;
    }
  }
  else {
    if ((uStack_1c & DAT_0801465c >> (uVar4 & 0xff)) == 0 && local_20 == 0) {
      return local_20;
    }
    uVar8 = FUN_0801023a(local_20,uStack_1c,uVar6,uVar2);
    FUN_0801062c((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar7,uVar3);
    if (cVar5 != '\0') {
      return local_20;
    }
  }
  return 0;
}


// 08014660

float FUN_08014660(float param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = ((uint)ABS(param_1) >> 0x17) - 0x7f;
  if (0x16 < (int)uVar1) {
    return param_1;
  }
  if ((int)uVar1 < 0) {
    if (0.0 < param_1 + DAT_080146c4) {
      bVar3 = (int)param_1 < 0;
      if (0 < (int)param_1) {
        param_1 = 1.0;
      }
      if (bVar3) {
        param_1 = -0.0;
      }
    }
  }
  else {
    uVar2 = DAT_080146c8 >> (uVar1 & 0xff);
    if (((uint)param_1 & uVar2) == 0) {
      return param_1;
    }
    if (0.0 < param_1 + DAT_080146c4) {
      if (0 < (int)param_1) {
        param_1 = (float)((int)param_1 + (0x800000U >> (uVar1 & 0xff)));
      }
      param_1 = (float)((uint)param_1 & ~uVar2);
    }
  }
  return param_1;
}


// 080146cc

undefined4 FUN_080146cc(undefined4 param_1)

{
  return param_1;
}


// 080146e0

float FUN_080146e0(float param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((uint)ABS(param_1) >> 0x17) - 0x7f;
  if (0x16 < (int)uVar1) {
    return param_1;
  }
  if ((int)uVar1 < 0) {
    if (0.0 < param_1 + DAT_08014744) {
      if ((int)param_1 < 0) {
        if (param_1 != -0.0) {
          param_1 = DAT_08014748;
        }
      }
      else {
        param_1 = 0.0;
      }
    }
  }
  else {
    uVar2 = DAT_0801474c >> (uVar1 & 0xff);
    if (((uint)param_1 & uVar2) == 0) {
      return param_1;
    }
    if (0.0 < param_1 + DAT_08014744) {
      if ((int)param_1 < 0) {
        param_1 = (float)((int)param_1 + (0x800000U >> (uVar1 & 0xff)));
      }
      param_1 = (float)((uint)param_1 & ~uVar2);
    }
  }
  return param_1;
}


// 08014750

int FUN_08014750(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar10;
  undefined4 uVar9;
  uint uVar11;
  undefined1 uVar12;
  char cVar13;
  ulonglong in_d0;
  undefined4 uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  
  uVar4 = (undefined4)(in_d0 >> 0x20);
  uVar17 = FUN_08010a08((int)in_d0,uVar4);
  uVar5 = (undefined4)(uVar17 >> 0x20);
  uVar1 = (undefined4)uVar17;
  uVar18 = FUN_0801037c((int)in_d0,uVar4,uVar1,uVar5);
  uVar6 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar4 = (undefined4)uVar18;
  uVar12 = (in_d0 & 0x8000000000000000) == 0;
  cVar13 = true;
  uVar8 = (undefined4)((ulonglong)DAT_08014838 >> 0x20);
  uVar15 = (undefined4)DAT_08014830;
  uVar9 = (undefined4)((ulonglong)DAT_08014830 >> 0x20);
  uVar14 = (undefined4)DAT_08014828;
  uVar10 = (undefined4)((ulonglong)DAT_08014828 >> 0x20);
  if ((bool)uVar12) {
    FUN_080105fc(uVar4,uVar6,(int)DAT_08014838,uVar8);
    if (cVar13 == '\0') goto LAB_080147bc;
    FUN_0801062c(uVar4,uVar6,uVar15,uVar9);
    if (!(bool)cVar13 || (bool)uVar12) goto LAB_080147d8;
  }
  else {
    FUN_080105fc(uVar4,uVar6,(int)DAT_08014838,uVar8);
    if (!(bool)cVar13 || (bool)uVar12) {
LAB_080147bc:
      uVar17 = FUN_0801037c(uVar1,uVar5,uVar14,uVar10);
    }
    else {
      FUN_0801062c(uVar4,uVar6,uVar15,uVar9);
      if (cVar13 == '\0') {
LAB_080147d8:
        uVar17 = FUN_0801023a(uVar1,uVar5,uVar14,uVar10);
      }
    }
  }
  uVar7 = (uint)(uVar17 >> 0x20);
  iVar2 = (int)uVar17;
  FUN_0801062c(iVar2,uVar7,(int)DAT_08014840,(int)((ulonglong)DAT_08014840 >> 0x20));
  if ((cVar13 == '\0') ||
     (FUN_080105fc(iVar2,uVar7,(int)DAT_08014848,(int)((ulonglong)DAT_08014848 >> 0x20)),
     cVar13 == '\0')) {
    FUN_08014960(1);
  }
  uVar11 = (uVar7 & 0x7fffffff) >> 0x14;
  uVar7 = uVar7 & 0xfffff | 0x100000;
  if (uVar11 < 0x3ff) {
    if (uVar11 < 0x3fd) {
      uVar11 = 0x3fd;
    }
    uVar18 = FUN_08010740(iVar2,uVar7);
    uVar16 = FUN_08010722((uint)uVar18,(int)((ulonglong)uVar18 >> 0x20),-(uVar11 - 0x413));
    uVar3 = (uint)uVar18 | (uint)(uVar16 != (uVar17 & 0xfffffffffffff | 0x10000000000000));
    uVar1 = 0;
  }
  else {
    if (0x433 < uVar11) {
      iVar2 = iVar2 << (uVar11 - 0x433 & 0xff);
      goto LAB_08010b5c;
    }
    uVar18 = FUN_08010722(iVar2,uVar7,uVar11 - 0x3f3);
    uVar3 = (uint)((int)uVar18 != 0) | (uint)((ulonglong)uVar18 >> 0x20);
    uVar1 = FUN_08010740(iVar2,uVar7,-(uVar11 - 0x433));
  }
  iVar2 = FUN_0801083c(uVar1,uVar3);
LAB_08010b5c:
  if ((uVar17 & 0x8000000000000000) != 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}


// 08014850

undefined8 FUN_08014850(int param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_08010964(param_1,param_2);
  if (((int)(0x7ff00000 - ((uint)((int)uVar1 != 0) | (uint)((ulonglong)uVar1 >> 0x20) & 0x7fffffff))
       < 0) && (-1 < (int)(0x7ff00000 - (param_2 & 0x7fffffff | (uint)(param_1 != 0))))) {
    FUN_08014960(1);
  }
  return uVar1;
}


// 080148ca

float FUN_080148ca(float param_1)

{
  if ((0x7f800000 - (int)ABS(SQRT(param_1)) < 0) && (-1 < 0x7f800000 - (int)ABS(param_1))) {
    FUN_08014960(1);
  }
  return SQRT(param_1);
}


// 08014908

undefined4 FUN_08014908(undefined4 param_1,undefined4 param_2)

{
  undefined8 local_10;
  
  local_10 = DAT_08014928;
  FUN_080107d6(&local_10,param_1,param_2);
  return (int)local_10;
}


// 0801494e

void FUN_0801494e(uint param_1)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((param_1 & 1) == 1);
  }
  return;
}


// 08014954

void FUN_08014954(uint param_1)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((param_1 & 1) == 1);
  }
  return;
}


// 0801495a

void FUN_0801495a(uint param_1)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((param_1 & 1) == 1);
  }
  return;
}


// 08014960

void FUN_08014960(undefined4 param_1)

{
  *DAT_08014968 = param_1;
  return;
}


// 0801496c

int FUN_0801496c(int *param_1)

{
  int iVar1;
  
  iVar1 = ((uint)*(ushort *)(param_1 + 3) + *param_1) - param_1[1];
  return iVar1 - (uint)*(ushort *)(param_1 + 3) * (iVar1 / (int)(uint)*(ushort *)(param_1 + 3));
}


// 08014984

bool FUN_08014984(int *param_1,undefined1 *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  iVar4 = param_1[1];
  if (iVar2 != iVar4) {
    iVar3 = param_1[1];
    uVar1 = *(ushort *)(param_1 + 3);
    *param_2 = *(undefined1 *)(param_1[2] + param_1[1]);
    param_1[1] = (iVar3 + 1) - (uint)uVar1 * ((iVar3 + 1) / (int)(uint)uVar1);
  }
  return iVar2 != iVar4;
}


// 080149b0

bool FUN_080149b0(int *param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*param_1 + 1) -
          (uint)*(ushort *)(param_1 + 3) * ((*param_1 + 1) / (int)(uint)*(ushort *)(param_1 + 3));
  iVar1 = param_1[1];
  if (iVar1 != iVar2) {
    *(undefined1 *)(param_1[2] + *param_1) = param_2;
    *param_1 = iVar2;
  }
  return iVar1 != iVar2;
}


// 080149d8

void FUN_080149d8(int *param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  char extraout_r2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined1 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  uVar2 = 0;
  if (param_3 == 0 && param_4 == 0) {
    if (param_6 == 1) {
      uVar2 = ~param_5;
    }
    *param_1 = (int)&DAT_08014b50;
    param_1[1] = uVar2;
    param_1[2] = 1;
    param_1[3] = param_6;
  }
  else {
    iVar5 = (int)(((param_4 >> 0x14) - 0x3ff) * 0x4d10) >> 0x10;
    do {
      while( true ) {
        if (param_6 == 1) {
          uVar2 = -param_5;
        }
        else {
          uVar2 = (iVar5 - param_5) + 1;
        }
        lVar11 = (ulonglong)DAT_08014b48 << 0x20;
        lVar13 = (ulonglong)DAT_08014b4c << 0x20;
        if ((int)uVar2 < 0) {
          uVar4 = -uVar2;
        }
        else {
          uVar4 = uVar2;
        }
        iVar1 = DAT_08014b4c + uVar4 * 0x100000;
        while( true ) {
          uVar6 = (undefined4)((ulonglong)lVar11 >> 0x20);
          uVar8 = (undefined4)((ulonglong)lVar13 >> 0x20);
          uVar7 = (undefined4)lVar13;
          if (uVar4 == 0) break;
          if ((uVar4 & 1) != 0) {
            lVar13 = FUN_08010388(uVar7,uVar8,(int)lVar11,uVar6);
          }
          lVar11 = FUN_08010388((int)lVar11,uVar6);
          uVar4 = (int)uVar4 >> 1;
        }
        uVar10 = 1;
        if ((int)uVar2 < 0) {
          uVar12 = FUN_08010388();
          uVar12 = FUN_08010388((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),uVar7,uVar8);
        }
        else {
          uVar12 = FUN_0801046c(param_3,param_4,0,iVar1);
          uVar12 = FUN_0801046c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),uVar7,uVar8);
        }
        bVar9 = true;
        FUN_0801062c();
        if ((bool)uVar10 && !bVar9) {
          FUN_0801023a((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,DAT_08014b58);
          lVar13 = FUN_08010a90();
        }
        else {
          lVar13 = -1;
        }
        iVar1 = 0x10;
        while( true ) {
          if ((lVar13 == 0) || (iVar1 < 0)) break;
          lVar13 = FUN_080106c0((int)lVar13,(int)((ulonglong)lVar13 >> 0x20),10,0);
          *(char *)(param_2 + iVar1) = extraout_r2 + '0';
          iVar1 = iVar1 + -1;
        }
        iVar3 = 0x11 - (iVar1 + 1);
        if (param_6 != 1) break;
        if (lVar13 == 0) {
          iVar5 = (iVar3 - param_5) + -1;
          goto LAB_08014b38;
        }
        param_5 = 0x11;
        param_6 = 0;
      }
      bVar9 = true;
      if ((lVar13 == 0) && (iVar3 <= (int)param_5)) {
        if (iVar3 < (int)param_5) {
          bVar9 = false;
          iVar5 = iVar5 + -1;
        }
      }
      else {
        bVar9 = false;
        iVar5 = iVar5 + 1;
      }
    } while (!bVar9);
LAB_08014b38:
    param_1[2] = iVar3;
    param_1[3] = param_6;
    *param_1 = iVar1 + 1 + param_2;
    param_1[1] = iVar5;
  }
  return;
}


// 08014b5c

undefined4 FUN_08014b5c(int param_1)

{
  if (param_1 - 0x30U < 10) {
    return 1;
  }
  return 0;
}


// 08014b6c

int FUN_08014b6c(byte *param_1,uint *param_2,undefined4 param_3,code *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char extraout_r1;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 uVar9;
  uint *puVar10;
  int extraout_r2;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  char *pcVar16;
  byte *pbVar17;
  uint *puVar18;
  char **unaff_r10;
  uint uVar19;
  undefined4 *puVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  longlong lVar24;
  char *local_88;
  undefined4 local_84;
  char **local_80;
  char *local_7c;
  char **local_78;
  uint local_74;
  undefined1 auStack_70 [32];
  char *local_50;
  char **local_4c;
  char *pcStack_48;
  int local_44;
  byte local_3b [3];
  char *local_38;
  byte *pbStack_34;
  uint *puStack_30;
  undefined4 local_2c;
  code *pcStack_28;
  
  pcStack_28 = param_4;
  local_2c = param_3;
  puStack_30 = param_2;
  pbStack_34 = param_1;
  iVar14 = 0;
LAB_08014f9c:
  uVar4 = (uint)*param_1;
  if (uVar4 == 0) {
    return iVar14;
  }
  if (uVar4 == 0x25) {
    uVar13 = 0;
    pcVar16 = (char *)0x0;
    local_74 = 0;
    while( true ) {
      pbVar15 = param_1 + 1;
      uVar4 = 1 << (*pbVar15 - 0x20 & 0xff);
      if ((uVar4 & DAT_08014f68) == 0) break;
      uVar13 = uVar13 | uVar4;
      param_1 = pbVar15;
    }
    if (*pbVar15 == 0x2a) {
      puVar10 = param_2 + 1;
      local_74 = *param_2;
      if ((int)local_74 < 0) {
        uVar13 = uVar13 | 0x2000;
        local_74 = -local_74;
      }
      uVar13 = uVar13 | 2;
      pbVar15 = param_1 + 2;
    }
    else {
      while( true ) {
        puVar10 = param_2;
        if (9 < *pbVar15 - 0x30) break;
        uVar13 = uVar13 | 2;
        local_74 = (uint)*pbVar15 + local_74 * 10 + -0x30;
        pbVar15 = pbVar15 + 1;
      }
    }
    param_1 = pbVar15;
    puVar18 = puVar10;
    if (*pbVar15 == 0x2e) {
      param_1 = pbVar15 + 1;
      uVar13 = uVar13 | 4;
      if (*param_1 == 0x2a) {
        puVar18 = puVar10 + 1;
        pcVar16 = (char *)*puVar10;
        param_1 = pbVar15 + 2;
      }
      else {
        for (; *param_1 - 0x30 < 10; param_1 = param_1 + 1) {
          pcVar16 = (char *)((uint)*param_1 + (int)pcVar16 * 10 + -0x30);
        }
      }
    }
    bVar1 = *param_1;
    if (bVar1 == 0x6c) {
      uVar13 = uVar13 | 0x100000;
LAB_08014c42:
      if (param_1[1] == bVar1) {
        uVar13 = uVar13 + 0x100000;
        param_1 = param_1 + 1;
      }
    }
    else if (bVar1 < 0x6d) {
      if (bVar1 != 0x4c) {
        if (bVar1 == 0x68) {
          uVar13 = uVar13 | 0x300000;
          goto LAB_08014c42;
        }
        if (bVar1 != 0x6a) goto LAB_08014c50;
        uVar13 = uVar13 | 0x200000;
      }
    }
    else if ((bVar1 != 0x74) && (bVar1 != 0x7a)) goto LAB_08014c50;
    param_1 = param_1 + 1;
LAB_08014c50:
    uVar4 = (uint)*param_1;
    bVar23 = SBORROW4(uVar4,0x66);
    bVar21 = (int)(uVar4 - 0x66) < 0;
    bVar22 = uVar4 == 0x66;
LAB_08014c54:
    while (!bVar22) {
      param_2 = puVar18;
      if (bVar21 == bVar23) {
        if (uVar4 == 0x70) {
          uVar13 = uVar13 | 4;
          pcVar16 = &NMI;
          local_88 = (char *)0x10;
        }
        else if (uVar4 < 0x71) {
          if (uVar4 == 0x67) break;
          if (uVar4 == 0x69) goto LAB_08014d6e;
          if (uVar4 == 0x6e) {
            uVar4 = (uVar13 & 0x7fffff) >> 0x14;
            if (uVar4 == 2) {
              piVar6 = (int *)*puVar18;
              *piVar6 = iVar14;
              piVar6[1] = iVar14 >> 0x1f;
            }
            else if (uVar4 == 3) {
              *(short *)*puVar18 = (short)iVar14;
            }
            else if (uVar4 == 4) {
              *(char *)*puVar18 = (char)iVar14;
            }
            else {
              *(int *)*puVar18 = iVar14;
            }
            param_2 = puVar18 + 1;
            goto LAB_08014f9a;
          }
          if (uVar4 != 0x6f) goto LAB_08014ca4;
          local_88 = (char *)0x8;
        }
        else {
          if (uVar4 == 0x73) {
            unaff_r10 = (char **)*puVar18;
            iVar5 = -1;
            goto LAB_08014cfe;
          }
          if (uVar4 == 0x75) {
            local_88 = (char *)0xa;
          }
          else {
            if (uVar4 != 0x78) goto LAB_08014ca4;
            local_88 = (char *)0x10;
          }
        }
LAB_08014e0c:
        uVar12 = (uVar13 & 0x7fffff) >> 0x14;
        if (uVar12 == 2) {
          puVar10 = (uint *)((uint)((int)puVar18 + 7) & 0xfffffff8);
          param_2 = puVar10 + 2;
          uVar19 = *puVar10;
          uVar7 = puVar10[1];
        }
        else {
          param_2 = puVar18 + 1;
          uVar19 = *puVar18;
          uVar7 = 0;
          if (uVar12 == 3) {
            uVar19 = uVar19 & 0xffff;
          }
          if (uVar12 == 4) {
            uVar19 = uVar19 & 0xff;
          }
        }
        iVar5 = 0;
        if ((int)(uVar13 << 0x1c) < 0) {
          if (uVar4 == 0x70) {
            local_84 = (char *)CONCAT31(local_84._1_3_,0x40);
            iVar5 = 1;
          }
          else if ((local_88 == (char *)0x10) && (uVar19 != 0 || uVar7 != 0)) {
            local_84._0_2_ = CONCAT11(*param_1,0x30);
            iVar5 = 2;
          }
          if ((local_88 == (char *)0x8) &&
             ((uVar19 != 0 || uVar7 != 0 || ((int)(uVar13 << 0x1d) < 0)))) {
            local_84 = (char *)CONCAT31(local_84._1_3_,0x30);
            iVar5 = 1;
            pcVar16 = pcVar16 + -1;
          }
        }
LAB_08014e96:
        lVar24 = CONCAT44(uVar7,uVar19);
        if (uVar4 == 0x58) {
          local_7c = s_0123456789ABCDEF_08014f80;
        }
        else {
          local_7c = s_0123456789abcdef_08014f6c;
        }
        local_80 = &local_50;
        while( true ) {
          if (lVar24 == 0) break;
          lVar24 = FUN_080106c0((int)lVar24,(int)((ulonglong)lVar24 >> 0x20),local_88,0);
          local_80 = (char **)((int)local_80 + -1);
          *(char *)local_80 = local_7c[extraout_r2];
        }
        pcVar8 = auStack_70 + (0x20 - (int)local_80);
        if ((int)(uVar13 << 0x1d) < 0) {
          uVar13 = uVar13 & 0xfffeffff;
        }
        else {
          pcVar16 = (char *)0x1;
        }
        if ((int)pcVar8 < (int)pcVar16) {
          local_88 = pcVar16 + -(int)pcVar8;
        }
        else {
          local_88 = (char *)0x0;
        }
        local_74 = local_74 - (int)(pcVar8 + (int)(local_88 + iVar5));
        if (-1 < (int)(uVar13 << 0xf)) {
          iVar3 = FUN_0801526c(local_74,uVar13,local_2c,param_4);
          iVar14 = iVar14 + iVar3;
        }
        for (iVar3 = 0; iVar3 < iVar5; iVar3 = iVar3 + 1) {
          (*param_4)(auStack_70[iVar3 + -0x14],local_2c);
          iVar14 = iVar14 + 1;
        }
        if ((int)(uVar13 << 0xf) < 0) {
          iVar5 = FUN_0801526c(local_74,uVar13,local_2c,param_4);
          iVar14 = iVar14 + iVar5;
        }
        while (pcVar16 = local_88 + -1, bVar22 = 0 < (int)local_88, local_88 = pcVar16, bVar22) {
          (*param_4)(0x30,local_2c);
          iVar14 = iVar14 + 1;
        }
        while (unaff_r10 = (char **)(pcVar8 + -1), 0 < (int)pcVar8) {
          cVar2 = *(char *)local_80;
          local_80 = (char **)((int)local_80 + 1);
          (*param_4)(cVar2,local_2c);
          iVar14 = iVar14 + 1;
          pcVar8 = (char *)unaff_r10;
        }
        goto LAB_08015232;
      }
      if (uVar4 == 0x58) {
        local_88 = (char *)0x10;
        goto LAB_08014e0c;
      }
      if (0x58 < uVar4) {
        if (uVar4 == 99) {
          local_88._0_2_ = (ushort)(byte)*puVar18;
          iVar5 = 1;
          unaff_r10 = &local_88;
LAB_08014cfe:
          param_2 = puVar18 + 1;
          iVar3 = 0;
          if ((int)(uVar13 << 0x1d) < 0) {
            for (; (iVar3 < (int)pcVar16 &&
                   ((iVar3 < iVar5 || (*(char *)((int)unaff_r10 + iVar3) != '\0'))));
                iVar3 = iVar3 + 1) {
            }
          }
          else {
            for (; (iVar3 < iVar5 || (*(char *)((int)unaff_r10 + iVar3) != '\0')); iVar3 = iVar3 + 1
                ) {
            }
          }
          uVar4 = local_74 - iVar3;
          iVar5 = FUN_0801526c(uVar4,uVar13,local_2c,param_4);
          iVar14 = iVar5 + iVar14 + iVar3;
          while (bVar22 = iVar3 != 0, iVar3 = iVar3 + -1, bVar22) {
            (*param_4)(*(char *)unaff_r10,local_2c);
            unaff_r10 = (char **)((int)unaff_r10 + 1);
          }
          goto LAB_08014f94;
        }
        if (uVar4 == 100) {
LAB_08014d6e:
          local_88 = (char *)0xa;
          uVar12 = (uVar13 & 0x7fffff) >> 0x14;
          if (uVar12 == 2) {
            puVar10 = (uint *)((uint)((int)puVar18 + 7) & 0xfffffff8);
            param_2 = puVar10 + 2;
            uVar19 = *puVar10;
            uVar7 = puVar10[1];
          }
          else {
            param_2 = puVar18 + 1;
            uVar19 = *puVar18;
            if (uVar12 == 3) {
              uVar19 = (uint)(short)uVar19;
            }
            uVar7 = (int)uVar19 >> 0x1f;
            if (uVar12 == 4) {
              uVar19 = (uint)(char)uVar19;
              uVar7 = (int)uVar19 >> 0x1f;
            }
          }
          if ((int)uVar7 < 0) {
            bVar22 = uVar19 != 0;
            uVar19 = -uVar19;
            uVar7 = -(uint)bVar22 - uVar7;
            uVar9 = 0x2d;
LAB_08014dce:
            local_84 = (char *)CONCAT31(local_84._1_3_,uVar9);
            iVar5 = 1;
          }
          else {
            if ((int)(uVar13 << 0x14) < 0) {
              uVar9 = 0x2b;
              goto LAB_08014dce;
            }
            iVar5 = 0;
            if ((uVar13 & 1) != 0) {
              uVar9 = 0x20;
              goto LAB_08014dce;
            }
          }
          goto LAB_08014e96;
        }
        if (uVar4 != 0x65) goto LAB_08014ca4;
        break;
      }
      if (uVar4 == 0) {
        return iVar14;
      }
      bVar23 = SBORROW4(uVar4,0x45);
      bVar21 = (int)(uVar4 - 0x45) < 0;
      bVar22 = uVar4 == 0x45;
      if (!bVar22) goto code_r0x08014c66;
    }
    goto LAB_08014fac;
  }
  goto LAB_08014ca4;
code_r0x08014c66:
  bVar23 = SBORROW4(uVar4,0x46);
  bVar21 = (int)(uVar4 - 0x46) < 0;
  bVar22 = uVar4 == 0x46;
  if (!bVar22) goto code_r0x08014c6a;
  goto LAB_08014c54;
code_r0x08014c6a:
  if (uVar4 != 0x47) {
LAB_08014ca4:
    (*param_4)(uVar4,local_2c);
    iVar14 = iVar14 + 1;
    goto LAB_08014f9a;
  }
LAB_08014fac:
  if (-1 < (int)(uVar13 << 0x1d)) {
    pcVar16 = (char *)0x6;
  }
  puVar20 = (undefined4 *)((uint)((int)puVar18 + 7) & 0xfffffff8);
  param_2 = puVar20 + 2;
  uVar11 = *puVar20;
  if ((puVar20[1] & 0x80000000) == 0) {
    if ((int)(uVar13 << 0x14) < 0) {
      local_38 = &DAT_08015240;
    }
    else if ((uVar13 & 1) == 0) {
      local_38 = s_0123456789abcdef_08014f6c + 0x10;
    }
    else {
      local_38 = &DAT_08015244;
    }
  }
  else {
    local_38 = &DAT_0801523c;
  }
  uVar12 = puVar20[1] & 0x7fffffff;
  if (uVar4 == 0x65) {
LAB_08015016:
    if ((int)pcVar16 < 0x11) {
      local_88 = pcVar16 + 1;
    }
    else {
      local_88 = (char *)0x11;
    }
    local_84 = (char *)0x0;
    FUN_080149d8(&local_50,auStack_70,uVar11,uVar12);
    local_7c = pcStack_48;
    local_88 = local_50;
    unaff_r10 = (char **)(pcVar16 + 1);
    local_78 = (char **)0x0;
LAB_080150de:
    local_78 = (char **)0x0;
    local_84 = (char *)0x1;
    local_80 = local_4c;
    local_88 = local_50;
    local_7c = pcStack_48;
  }
  else {
    if (uVar4 < 0x66) {
      if (uVar4 == 0x45) goto LAB_08015016;
      if (uVar4 != 0x46) {
        if (uVar4 == 0x47) goto LAB_08015088;
        goto LAB_08015112;
      }
    }
    else if (uVar4 != 0x66) {
      if (uVar4 != 0x67) goto LAB_08015112;
LAB_08015088:
      if ((int)pcVar16 < 1) {
        pcVar16 = (char *)0x1;
      }
      if ((int)pcVar16 < 0x12) {
        local_88 = pcVar16;
      }
      else {
        local_88 = (char *)0x11;
      }
      local_84 = (char *)0x0;
      FUN_080149d8(&local_50,auStack_70,uVar11,uVar12);
      local_7c = pcStack_48;
      local_78 = (char **)0x0;
      local_88 = local_50;
      unaff_r10 = (char **)pcVar16;
      if (-1 < (int)(uVar13 << 0x1c)) {
        pcVar8 = pcStack_48;
        if ((int)pcVar16 <= (int)pcStack_48) goto LAB_080150c2;
        while( true ) {
          unaff_r10 = (char **)pcVar8;
LAB_080150c2:
          if (((int)unaff_r10 < 2) || (*(char *)((int)unaff_r10 + (int)(local_50 + -1)) != '0'))
          break;
          pcVar8 = (char *)((int)unaff_r10 + -1);
        }
      }
      if (((int)pcVar16 <= (int)local_4c) || ((int)local_4c < -4)) goto LAB_080150de;
      if ((int)local_4c < 1) {
        local_78 = local_4c;
        pcVar16 = (char *)((int)unaff_r10 + -(int)local_4c);
LAB_08015102:
        unaff_r10 = (char **)pcVar16;
      }
      else {
        pcVar16 = (char *)((int)local_4c + 1);
        if ((int)unaff_r10 < (int)pcVar16) goto LAB_08015102;
      }
      local_84 = (char *)((int)local_4c + (1 - (int)local_78));
      local_80 = (char **)0x80000000;
      goto LAB_08015112;
    }
    local_84 = (char *)0x1;
    local_80 = (char **)0x80000000;
    local_88 = pcVar16;
    FUN_080149d8(&local_50,auStack_70,uVar11,uVar12);
    local_7c = pcStack_48;
    local_88 = local_50;
    local_78 = (char **)0x0;
    unaff_r10 = (char **)pcStack_48;
    if (local_44 == 0) {
      unaff_r10 = (char **)((int)local_4c + (int)(pcVar16 + 1));
    }
    iVar5 = (int)pcVar16 - (int)unaff_r10;
    if (-1 < iVar5) {
      unaff_r10 = (char **)(pcVar16 + 1);
      local_78 = (char **)(-1 - iVar5);
    }
    local_84 = (char *)((int)unaff_r10 + -(int)pcVar16);
  }
LAB_08015112:
  if ((-1 < (int)(uVar13 << 0x1c)) && ((int)unaff_r10 <= (int)local_84)) {
    local_84 = (char *)0xffffffff;
  }
  local_3b[2] = 0;
  pbVar15 = local_3b + 2;
  if (local_80 != (char **)0x80000000) {
    local_50 = (char *)0x2b;
    iVar5 = 2;
    if ((int)local_80 < 0) {
      local_80 = (char **)-(int)local_80;
      local_50 = (char *)0x2d;
    }
    while ((0 < iVar5 || (local_80 != (char **)0x0))) {
      local_80 = (char **)FUN_08010694(local_80,10);
      pbVar15 = pbVar15 + -1;
      *pbVar15 = extraout_r1 + 0x30;
      iVar5 = iVar5 + -1;
    }
    pbVar15[-1] = (byte)local_50;
    pbVar15 = pbVar15 + -2;
    *pbVar15 = *param_1 & 0x20 | 0x45;
  }
  pbVar17 = local_3b + (2 - (int)pbVar15);
  local_74 = (local_74 -
             (int)((int)unaff_r10 +
                  (int)(pbVar17 + ((int)local_84 >> 0x1f) + (uint)(*local_38 != '\0')))) - 1;
  if (-1 < (int)(uVar13 << 0xf)) {
    iVar5 = FUN_0801526c(local_74,uVar13,local_2c,param_4);
    iVar14 = iVar14 + iVar5;
  }
  if (*local_38 != '\0') {
    (*param_4)(*local_38,local_2c);
    iVar14 = iVar14 + 1;
  }
  iVar5 = iVar14;
  pcVar16 = (char *)unaff_r10;
  if ((int)(uVar13 << 0xf) < 0) {
    iVar5 = FUN_0801526c(local_74,uVar13,local_2c,param_4);
    iVar5 = iVar14 + iVar5;
  }
  while( true ) {
    iVar14 = iVar5;
    unaff_r10 = (char **)(pcVar16 + -1);
    if ((int)pcVar16 < 1) break;
    if (((int)local_78 < 0) || ((int)local_7c <= (int)local_78)) {
      cVar2 = '0';
    }
    else {
      cVar2 = local_88[(int)local_78];
    }
    (*param_4)(cVar2,local_2c);
    local_78 = (char **)((int)local_78 + 1);
    local_84 = local_84 + -1;
    iVar5 = iVar14 + 1;
    pcVar16 = (char *)unaff_r10;
    if (local_84 == (char *)0x0) {
      (*param_4)(0x2e,local_2c);
      iVar5 = iVar14 + 2;
    }
  }
  for (; 0 < (int)pbVar17; pbVar17 = pbVar17 + -1) {
    (*param_4)(*pbVar15,local_2c);
    iVar14 = iVar14 + 1;
    pbVar15 = pbVar15 + 1;
  }
LAB_08015232:
  uVar4 = local_74;
LAB_08014f94:
  iVar5 = FUN_08015248(uVar4,uVar13,local_2c,param_4);
  iVar14 = iVar14 + iVar5;
LAB_08014f9a:
  param_1 = param_1 + 1;
  goto LAB_08014f9c;
}


// 08015248

int FUN_08015248(int param_1,int param_2,undefined4 param_3,code *param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 << 0x12 < 0) {
    while (param_1 = param_1 + -1, -1 < param_1) {
      (*param_4)(0x20,param_3);
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


// 0801526c

int FUN_0801526c(int param_1,int param_2,undefined4 param_3,code *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (param_2 << 0xf < 0) {
    uVar2 = 0x30;
  }
  else {
    uVar2 = 0x20;
  }
  if (-1 < param_2 << 0x12) {
    while (param_1 = param_1 + -1, -1 < param_1) {
      (*param_4)(uVar2,param_3);
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


// 0801529a

void FUN_0801529a(undefined1 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  *param_2 = puVar1 + 1;
  *puVar1 = param_1;
  return;
}


// 080152a4

uint FUN_080152a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  char *pcVar3;
  ushort uVar4;
  int iVar5;
  byte bVar6;
  undefined2 uVar7;
  uint uVar8;
  
  uVar8 = 2000;
  *DAT_08015694 = 0;
  if (*DAT_08015698 != 0) {
    if (*DAT_0801569c < *(uint *)(*DAT_08015698 + 0x18)) {
      if (*(uint *)(*DAT_08015698 + 0x30) < *DAT_0801569c) {
        if (*(uint *)(*DAT_08015698 + 0x34) < *DAT_0801569c) {
          uVar8 = FUN_08011d34(*DAT_080156bc,*(undefined4 *)(*DAT_08015698 + 0x38),param_3,param_4,
                               param_4);
          if (uVar8 < *DAT_080156a4) {
            uVar8 = *DAT_080156a4 - uVar8;
            if (uVar8 < *(uint *)(*DAT_08015698 + 0x70)) {
              uVar8 = *(uint *)(*DAT_08015698 + 0x70);
            }
            uVar7 = (undefined2)uVar8;
          }
          else {
            uVar7 = (undefined2)*(undefined4 *)(*DAT_08015698 + 0x70);
          }
          uVar8 = FUN_080158b4(uVar7);
          *DAT_080156bc = *DAT_080156bc + uVar8;
          if (*DAT_080156ac == '\0') {
            if (*DAT_080156b0 != '\0') {
              *DAT_080156b8 = 0;
            }
          }
          else if ((*DAT_0801569c <= *(uint *)(*DAT_08015698 + 0x34)) ||
                  ((*DAT_080156b0 != '\0' &&
                   ((uint)*(ushort *)(*DAT_08015698 + 0x40) != *DAT_080156b4)))) {
            *DAT_080156b8 = 0;
            *DAT_080156b4 = (uint)*(ushort *)(*DAT_08015698 + 0x40);
          }
        }
        else {
          if ((*DAT_080156b0 != '\0') && ((uint)*(ushort *)(*DAT_08015698 + 0x40) != *DAT_080156b4))
          {
            *DAT_080156b8 = 0;
          }
          uVar8 = (uint)*DAT_080156c0;
          *DAT_080156c8 = *DAT_080156c4;
        }
      }
      else {
        iVar5 = FUN_08011d34(*DAT_080156a0,*(undefined4 *)(*DAT_08015698 + 0x38),param_3,param_4,
                             param_4);
        puVar2 = DAT_080156a4;
        *DAT_080156a4 = iVar5 + *(int *)(*DAT_08015698 + 0x6c);
        if (*(uint *)(*DAT_08015698 + 100) < *puVar2) {
          *DAT_080156a4 = *(uint *)(*DAT_08015698 + 100);
        }
        if (*DAT_080156a8 < *DAT_080156a4) {
          *DAT_080156a8 = *DAT_080156a4;
        }
        uVar8 = FUN_080158b4((short)*DAT_080156a4);
        *DAT_080156a0 = *DAT_080156a0 + uVar8;
        if (*DAT_080156ac == '\0') {
          if (*DAT_080156b0 != '\0') {
            *DAT_080156b8 = 0;
          }
        }
        else if ((*DAT_080156b0 != '\0') &&
                ((uint)*(ushort *)(*DAT_08015698 + 0x40) != *DAT_080156b4)) {
          *DAT_080156b8 = 0;
        }
      }
    }
    else {
      *DAT_08015698 = 0;
      FUN_08017120();
      *DAT_08015694 = 1;
    }
  }
  if (*DAT_08015698 == 0) {
    iVar5 = FUN_08017150();
    piVar1 = DAT_08015698;
    *DAT_08015698 = iVar5;
    if (*piVar1 == 0) {
      if ((*DAT_08015760 == 0) && (DAT_08015760[1] == 0)) {
        FUN_0801874c(*DAT_08015764);
      }
    }
    else {
      do {
        if ((*(byte *)*DAT_08015698 & 0x20) == 0) {
          *DAT_080156d4 = *(int *)(*DAT_08015698 + 0x20) + *(int *)(*DAT_08015698 + 0x1c);
          piVar1 = DAT_080156d4;
          DAT_080156d4[1] = *(int *)(*DAT_08015698 + 0x1c) - *(int *)(*DAT_08015698 + 0x20);
          piVar1[2] = *(int *)(*DAT_08015698 + 0x24);
          piVar1[3] = *(int *)(*DAT_08015698 + 0x28);
          piVar1[4] = *(int *)(*DAT_08015698 + 0x2c);
          *DAT_080156d8 = *(undefined1 *)(*DAT_08015698 + 0x3e);
          pcVar3 = DAT_080156ac;
          *DAT_080156ac = *(char *)(*DAT_08015698 + 0x3f);
          if (*pcVar3 == '\0') {
            *DAT_080156b4 = 0xffffffff;
          }
          else {
            *DAT_080156dc = *(undefined2 *)(*DAT_08015698 + 0x44);
            *DAT_080156e0 = *(undefined2 *)(*DAT_08015698 + 0x42);
            *DAT_080156b8 = 0;
            *DAT_080156b4 = (uint)*(ushort *)(*DAT_08015698 + 0x40);
          }
          *DAT_080156bc = 0;
          *DAT_080156a0 = 0;
          uVar4 = FUN_080158b4(*(undefined2 *)(*DAT_08015698 + 100));
          *DAT_080156c0 = uVar4;
          *DAT_080156c4 = *DAT_080156c8;
          *DAT_080156a4 = *(uint *)(*DAT_08015698 + 0x6c);
          uVar8 = FUN_080158b4(*(undefined2 *)(*DAT_08015698 + 0x6c));
          *DAT_080156e4 = *(byte *)(*DAT_08015698 + 0x3c);
          bVar6 = *(byte *)(*DAT_08015698 + 0x7c);
          if ((*DAT_080156cc != 0) || (*DAT_080156e8 != '\0')) {
            bVar6 = bVar6 | 8;
          }
          if ((DAT_080156cc[1] != 0) || (DAT_080156e8[1] != '\0')) {
            bVar6 = bVar6 | 0x10;
          }
          FUN_0801874c(bVar6);
          FUN_080187f0(0,*(char *)(*DAT_08015698 + 0x7b) == '\0',
                       *(undefined4 *)(*DAT_08015698 + 0x18),*DAT_080156e4 & 1,
                       *(undefined4 *)(*DAT_08015698 + 4));
          FUN_080187f0(1,*(char *)(*DAT_08015698 + 0x7b) == '\x01',
                       *(undefined4 *)(*DAT_08015698 + 0x18),(*DAT_080156e4 & 3) >> 1,
                       *(undefined4 *)(*DAT_08015698 + 8));
          FUN_080187f0(2,*(char *)(*DAT_08015698 + 0x7b) == '\x02',
                       *(undefined4 *)(*DAT_08015698 + 0x18),(*DAT_080156e4 & 7) >> 2,
                       *(undefined4 *)(*DAT_08015698 + 0xc));
          FUN_080187f0(3,*(char *)(*DAT_08015698 + 0x7b) == '\x03',
                       *(undefined4 *)(*DAT_08015698 + 0x18),(*DAT_080156e4 & 0xf) >> 3,
                       *(undefined4 *)(*DAT_08015698 + 0x10));
          FUN_080187f0(4,*(char *)(*DAT_08015698 + 0x7b) == '\x04',
                       *(undefined4 *)(*DAT_08015698 + 0x18),(*DAT_08015748 & 0x1f) >> 4,
                       *(undefined4 *)(*DAT_08015698 + 0x14));
          *DAT_08015750 = -*(int *)(*DAT_0801574c + 0x18);
          *DAT_08015754 = *(int *)(*DAT_0801574c + 0x10) << 1;
          *DAT_08015758 = *(int *)(*DAT_0801574c + 0x18) << 1;
          *DAT_0801575c = 0;
          goto LAB_08015498;
        }
        *DAT_08015698 = 0;
        FUN_08017120();
        iVar5 = FUN_08017150();
        piVar1 = DAT_08015698;
        *DAT_08015698 = iVar5;
      } while (*piVar1 != 0);
      if ((*DAT_080156cc == 0) && (DAT_080156cc[1] == 0)) {
        FUN_0801874c(*DAT_080156d0);
      }
    }
  }
LAB_08015498:
  return uVar8;
}


// 08015768

undefined8 FUN_08015768(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_14 = (undefined2)param_2;
  local_12 = (undefined2)((uint)param_2 >> 0x10);
  local_18 = (short)param_1;
  local_16 = (undefined2)((uint)param_1 >> 0x10);
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_08011d50();
  FUN_08011e8c(8,1);
  local_18 = (short)(*DAT_0801581c / DAT_08015820) + -1;
  local_14 = 1999;
  local_12 = 0;
  local_16 = 0;
  FUN_08012574(DAT_08015824,&local_18);
  FUN_08012520(DAT_08015824,1);
  FUN_08012532(DAT_08015824,1);
  *DAT_08015824 = *DAT_08015824 | 1;
  FUN_08011e8c(0x10,1);
  local_18 = (short)(*DAT_0801581c / DAT_08015828) + -1;
  local_14 = 0x9b;
  local_12 = 0;
  local_16 = 0;
  FUN_08012574(DAT_0801582c,&local_18);
  FUN_08012520(DAT_0801582c,1);
  FUN_08012532(DAT_0801582c,1);
  *DAT_0801582c = *DAT_0801582c | 1;
  FUN_08011d28();
  *DAT_08015830 = 1;
  return CONCAT26(local_12,CONCAT24(local_14,CONCAT22(local_16,local_18)));
}


// 08015834

/* WARNING: Removing unreachable block (ram,0x0801587a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08015834(void)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0; iVar1 = DAT_080158a4, uVar2 < 4; uVar2 = uVar2 + 1 & 0xff) {
    *(undefined4 *)(DAT_080158a4 + uVar2 * 8) = 0;
    *(undefined1 *)(iVar1 + uVar2 * 8 + 4) = 0;
  }
  FUN_0801219c(4);
  if (*DAT_080158a8 / 0x32 - 1 < 0x1000000) {
    _DAT_e000e014 = *DAT_080158a8 / 0x32 - 1;
    *(undefined1 *)(DAT_080158b0 + 0xb) = 0xf0;
    _DAT_e000e018 = 0;
    _DAT_e000e010 = 7;
  }
  return;
}


// 080158b4

uint FUN_080158b4(uint param_1)

{
  *DAT_080158c8 = 1;
  return DAT_080158cc / param_1 & 0xffff;
}


// 080158d0

void FUN_080158d0(float param_1,float param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  
  FUN_08014954(1);
  fVar4 = (float)VectorUnsignedToFloat(*(undefined4 *)(param_3 + 100),(byte)(in_fpscr >> 0x16) & 3);
  uVar14 = FUN_080105d4(fVar4 * param_1);
  uVar14 = FUN_08014548((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  uVar1 = FUN_080105a2((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  fVar4 = (float)VectorUnsignedToFloat(*(undefined4 *)(param_3 + 100),(byte)(in_fpscr >> 0x16) & 3);
  uVar14 = FUN_080105d4(fVar4 * param_2);
  uVar14 = FUN_08014548((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  uVar2 = FUN_080105a2((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  if (uVar1 < 0x78) {
    uVar1 = 0x78;
  }
  if (uVar2 < 0x78) {
    uVar2 = 0x78;
  }
  iVar3 = *(int *)(param_3 + 0x74);
  uVar5 = VectorUnsignedToFloat(*(undefined4 *)(param_3 + 100),(byte)(in_fpscr >> 0x16) & 3);
  uVar11 = VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  uVar6 = VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  FUN_08015bf0(uVar6,uVar5,uVar11);
  uVar5 = FUN_08014660();
  iVar7 = VectorFloatToUnsigned(uVar5,3);
  uVar5 = VectorUnsignedToFloat(*(undefined4 *)(param_3 + 100),(byte)(in_fpscr >> 0x16) & 3);
  uVar11 = VectorSignedToFloat(-iVar3,(byte)(in_fpscr >> 0x16) & 3);
  uVar6 = VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  FUN_08015bf0(uVar5,uVar6,uVar11);
  uVar5 = FUN_080146e0();
  iVar8 = VectorFloatToUnsigned(uVar5,3);
  iVar8 = (*(int *)(param_3 + 0x18) - iVar7) - iVar8;
  if (iVar8 < 0) {
    fVar10 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar4 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    fVar13 = (float)VectorUnsignedToFloat
                              (*(undefined4 *)(param_3 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
    if (fVar4 == 0.0) {
      fVar4 = DAT_08015aa4;
    }
    else {
      fVar4 = ((fVar4 * 2.0 * fVar13 - fVar10 * fVar10) + fVar12 * fVar12) / (fVar4 * 4.0);
    }
    fVar4 = (float)FUN_08014660(fVar4);
    if (fVar4 <= 0.0) {
      fVar10 = DAT_08015aa4;
    }
    else {
      fVar10 = fVar4;
    }
    uVar9 = VectorFloatToUnsigned(fVar10,3);
    if (uVar9 < *(uint *)(param_3 + 0x18)) {
      if (fVar4 <= 0.0) {
        fVar4 = DAT_08015aa4;
      }
      else {
      }
      iVar7 = VectorFloatToUnsigned(fVar4,3);
    }
    else {
      iVar7 = *(int *)(param_3 + 0x18);
    }
    iVar8 = 0;
  }
  FUN_08014954(1);
  *(int *)(param_3 + 0x30) = iVar7;
  *(int *)(param_3 + 0x34) = iVar7 + iVar8;
  *(uint *)(param_3 + 0x6c) = uVar1;
  *(uint *)(param_3 + 0x70) = uVar2;
  FUN_08014954(0);
  return;
}


// 08015aa8

void FUN_08015aa8(byte param_1)

{
  byte *pbVar1;
  
  pbVar1 = DAT_08015ad0;
  *DAT_08015ad0 = param_1;
  if (1 < *pbVar1) {
    *DAT_08015ad0 = 0;
  }
  if (*DAT_08015ad0 == 1) {
    *DAT_08015ad8 = DAT_08015ad4;
  }
  else {
    *DAT_08015ad8 = DAT_08015adc;
  }
  return;
}


// 08015ae0

void FUN_08015ae0(void)

{
  *DAT_08015af8 = 0;
  *DAT_08015afc = 0;
  *DAT_08015b00 = 0;
  *DAT_08015b04 = 0;
  *DAT_08015b08 = 0;
  return;
}


// 08015b0c

void FUN_08015b0c(int param_1,int param_2)

{
  uint uVar1;
  int local_28 [5];
  
  for (uVar1 = 0; uVar1 < 5; uVar1 = uVar1 + 1 & 0xff) {
    *(undefined1 *)(DAT_08015b78 + uVar1 * 0x30 + 0xd) = 1;
    if (param_2 == 0) {
      local_28[uVar1] = *(int *)(param_1 + uVar1 * 4) + *(int *)(*DAT_08015b7c + uVar1 * 4);
    }
    else {
      local_28[uVar1] = *(int *)(param_1 + uVar1 * 4);
    }
  }
  FUN_080172b0(local_28[0],local_28[1],local_28[2],local_28[3],local_28[4]);
  for (uVar1 = 0; uVar1 < 5; uVar1 = uVar1 + 1 & 0xff) {
    *(int *)(DAT_08015b80 + uVar1 * 4) = local_28[uVar1];
  }
  return;
}


// 08015b84

void FUN_08015b84(int param_1)

{
  undefined4 uVar1;
  
  if ((*DAT_08015ba0 == '\0') || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_0801810c(uVar1);
  return;
}


// 08015ba4

void FUN_08015ba4(void)

{
  FUN_0801813c();
  return;
}


// 08015bac

void FUN_08015bac(undefined4 param_1,undefined4 param_2)

{
  *DAT_08015be4 = 1;
  FUN_08010202(DAT_08015be8,200);
  FUN_080101d0(DAT_08015be8,param_1,param_2);
  FUN_080113ec(DAT_08015bec,0);
  FUN_08011448(DAT_08015bec,param_2);
  FUN_080113ec(DAT_08015bec,1);
  return;
}


// 08015bf0

float FUN_08015bf0(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  if (param_3 == 0.0) {
    fVar1 = DAT_08015c20;
  }
  else {
    fVar1 = (param_2 * param_2 - param_1 * param_1) / (param_3 * 2.0);
  }
  return fVar1;
}


// 08015c24

undefined4 FUN_08015c24(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0801496c(param_1);
  return uVar1;
}


// 08015c34

undefined4 FUN_08015c34(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08014984(param_1,param_2);
  return uVar1;
}


// 08015c48

void FUN_08015c48(undefined4 *param_1,undefined4 param_2,undefined2 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  *(undefined2 *)(param_1 + 3) = param_3;
  return;
}


// 08015c54

void FUN_08015c54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_3;
  uStack_c = param_4;
  while( true ) {
    iVar3 = FUN_08017b60();
    if (iVar3 == 0) {
      return;
    }
    if (*DAT_08015d24 != '\0') break;
    cVar2 = FUN_08017b48();
    pcVar1 = DAT_08015d14;
    *DAT_08015d14 = cVar2;
    if (((*pcVar1 == '\n') || (*pcVar1 == '\r')) || (0x5e < *DAT_08015d18)) {
      if (*DAT_08015d18 == 0) {
        if (*DAT_08015d1c != '\0') {
          *DAT_08015d1c = '\0';
        }
        return;
      }
      *(undefined1 *)(DAT_08015d20 + *DAT_08015d18) = 0;
      for (uVar4 = 0; (uVar4 < 4 && (*(char *)(DAT_08015d20 + uVar4 + 1) != ' '));
          uVar4 = uVar4 + 1 & 0xff) {
        *(undefined1 *)((int)&local_10 + uVar4) = *(undefined1 *)(DAT_08015d20 + uVar4 + 1);
      }
      *(undefined1 *)((int)&local_10 + uVar4) = 0;
      if (*DAT_08015d1c == '\0') {
        *DAT_08015d1c = '\0';
        *DAT_08015d24 = '\x01';
      }
      *DAT_08015d18 = 0;
    }
    else {
      if (*DAT_08015d14 == ';') {
        *DAT_08015d1c = '\x01';
      }
      if (*DAT_08015d1c == '\0') {
        cVar2 = *DAT_08015d14;
        iVar3 = *DAT_08015d18;
        *DAT_08015d18 = *DAT_08015d18 + 1;
        *(char *)(DAT_08015d20 + iVar3) = cVar2;
      }
    }
  }
  return;
}


// 08015d28

void FUN_08015d28(void)

{
  FUN_080164b4();
  FUN_08015ae0();
  FUN_08011984(DAT_08015d44,0x20);
  FUN_08011984(DAT_08015d48,2);
  return;
}


// 08015d4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08015d4c(void)

{
  undefined4 uVar1;
  undefined4 extraout_r3;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_a0 [92];
  
  FUN_08015ae0();
  FUN_08010202(DAT_08015e18,0x780);
  uVar1 = DAT_08015e20;
  uVar2 = *DAT_08015e1c;
  uVar3 = FUN_080105d4(DAT_08015e1c[4]);
  uVar4 = FUN_080105d4(DAT_08015e1c[3]);
  uVar5 = FUN_080105d4(DAT_08015e1c[2]);
  uVar6 = FUN_080105d4(DAT_08015e1c[1]);
  uVar7 = FUN_080105d4(uVar1);
  uVar8 = FUN_080105d4(uVar2);
  uVar9 = FUN_080105d4(*DAT_08015e24);
  FUN_0801451c(auStack_a0,s_M38_ok_L__u_F__g_X1__g_X2__g_Y___08015e2b + 1,*_DAT_08015e28,extraout_r3
               ,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3);
  FUN_08017b70(auStack_a0);
  return;
}


// 08015e60

void FUN_08015e60(void)

{
  FUN_08015768();
  FUN_08015834();
  return;
}


// 08015e6c

void FUN_08015e6c(void)

{
  uint uVar1;
  
  FUN_0801495a(1);
  for (uVar1 = 0; uVar1 < 5; uVar1 = uVar1 + 1 & 0xff) {
    *(undefined4 *)(DAT_08015e98 + uVar1 * 4) = 0;
    *(undefined4 *)(DAT_08015e9c + uVar1 * 4) = 0;
  }
  FUN_0801495a(0);
  return;
}


// 08015ea0

void FUN_08015ea0(void)

{
  ushort *puVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  uVar5 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  uStack_14 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_28 = 0;
  FUN_08011ba4();
  FUN_080111a0();
  FUN_080164a4();
  do {
    uVar5 = uVar5 + 1;
    if (1000 < uVar5) {
      uVar5 = 0;
      uVar4 = FUN_080110dc(DAT_080162c4,6);
      puVar1 = DAT_080162c8;
      *DAT_080162c8 = uVar4;
      bVar3 = (byte)uStack_14 + 1;
      uStack_14 = CONCAT31(uStack_14._1_3_,bVar3);
      if (bVar3 < 0x15) {
        uStack_10 = uStack_10 + *puVar1;
      }
      else {
        *DAT_080162cc = (ushort)(uStack_10 / 0x14);
        uStack_10 = 0;
        uStack_14 = (uint)uStack_14._1_3_ << 8;
      }
      iVar2 = uStack_14;
      if ((*DAT_080162cc < 0x3e9) || (2999 < *DAT_080162cc)) {
        if ((*DAT_080162cc < 900) || (0xc1c < *DAT_080162cc)) {
          if (*DAT_080162d0 == '\0') {
            *DAT_080162d4 = *DAT_080162d4 | 1;
          }
          *DAT_080162d0 = '\x01';
        }
      }
      else {
        *DAT_080162d0 = '\0';
        *DAT_080162d4 = *DAT_080162d4 & 0xfe;
      }
      uVar4 = FUN_080110dc(DAT_080162c4,8);
      puVar1 = DAT_080162c8;
      DAT_080162c8[1] = uVar4;
      bVar3 = uStack_14._1_1_ + 1;
      uStack_14._0_2_ = CONCAT11(bVar3,(byte)uStack_14);
      if (bVar3 < 0x15) {
        uStack_c = uStack_c + puVar1[1];
      }
      else {
        DAT_080162cc[1] = (ushort)(uStack_c / 0x14);
        uStack_c = 0;
        uStack_14._0_2_ = (ushort)(byte)uStack_14;
      }
      if ((DAT_080162cc[1] < 0x3e9) || (2999 < DAT_080162cc[1])) {
        if ((DAT_080162cc[1] < 900) || (0xc1c < DAT_080162cc[1])) {
          if (DAT_080162d0[1] == '\0') {
            *DAT_080162d4 = *DAT_080162d4 | 2;
          }
          DAT_080162d0[1] = '\x01';
        }
      }
      else {
        DAT_080162d0[1] = '\0';
        *DAT_080162d4 = *DAT_080162d4 & 0xfd;
      }
      uVar4 = FUN_080110dc(DAT_080162d8,3);
      puVar1 = DAT_080162c8;
      DAT_080162c8[2] = uVar4;
      uStack_14._2_1_ = SUB41(iVar2,2);
      bVar3 = uStack_14._2_1_ + 1;
      uStack_14._3_1_ = SUB41(iVar2,3);
      uStack_14._0_3_ = CONCAT12(bVar3,(ushort)uStack_14);
      if (bVar3 < 0x15) {
        uStack_8 = uStack_8 + puVar1[2];
      }
      else {
        DAT_080162cc[2] = (ushort)(uStack_8 / 0x14);
        uStack_8 = 0;
        uStack_14._0_3_ = (uint3)(ushort)uStack_14;
      }
      if ((DAT_080162cc[2] < 0x3e9) || (2999 < DAT_080162cc[2])) {
        if ((DAT_080162cc[2] < 900) || (0xc1c < DAT_080162cc[2])) {
          if (DAT_080162d0[2] == '\0') {
            *DAT_080162d4 = *DAT_080162d4 | 4;
          }
          DAT_080162d0[2] = '\x01';
        }
      }
      else {
        DAT_080162d0[2] = '\0';
        *DAT_080162d4 = *DAT_080162d4 & 0xfb;
      }
      uVar4 = FUN_080110dc(DAT_080162d8,4);
      puVar1 = DAT_080162c8;
      DAT_080162c8[3] = uVar4;
      bVar3 = uStack_14._3_1_ + 1;
      uStack_14 = CONCAT13(bVar3,(uint3)uStack_14);
      if (bVar3 < 0x15) {
        uStack_4 = uStack_4 + puVar1[3];
      }
      else {
        DAT_080162cc[3] = (ushort)(uStack_4 / 0x14);
        uStack_4 = 0;
        uStack_14 = (uint)(uint3)uStack_14;
      }
      if ((DAT_080162cc[3] < 0x3e9) || (2999 < DAT_080162cc[3])) {
        if ((DAT_080162cc[3] < 900) || (0xc1c < DAT_080162cc[3])) {
          if (DAT_080162d0[3] == '\0') {
            *DAT_080162d4 = *DAT_080162d4 | 8;
          }
          DAT_080162d0[3] = '\x01';
        }
      }
      else {
        DAT_080162d0[3] = '\0';
        *DAT_080162d4 = *DAT_080162d4 & 0xf7;
      }
      uVar4 = FUN_080110dc(DAT_080162c4,7);
      puVar1 = DAT_080162dc;
      *DAT_080162dc = uVar4;
      bVar3 = (byte)uStack_28 + 1;
      uStack_28 = CONCAT31(uStack_28._1_3_,bVar3);
      if (bVar3 < 0x15) {
        uStack_24 = uStack_24 + *puVar1;
      }
      else {
        *DAT_080162e0 = (ushort)(uStack_24 / 0x14);
        uStack_24 = 0;
        uStack_28 = (uint)uStack_28._1_3_ << 8;
      }
      iVar2 = uStack_28;
      if ((*DAT_080162e0 < 0x575) || (0xa4c < *DAT_080162e0)) {
        if ((*DAT_080162e0 < 0x4b0) || (0xaf0 < *DAT_080162e0)) {
          if (*DAT_080162e4 == '\0') {
            *DAT_080162e8 = 1;
          }
          *DAT_080162e4 = '\x01';
        }
      }
      else {
        *DAT_080162e4 = '\0';
      }
      uVar4 = FUN_080110dc(DAT_080162c4,9);
      puVar1 = DAT_080162dc;
      DAT_080162dc[1] = uVar4;
      bVar3 = uStack_28._1_1_ + 1;
      uStack_28._0_2_ = CONCAT11(bVar3,(byte)uStack_28);
      if (bVar3 < 0x15) {
        uStack_20 = uStack_20 + puVar1[1];
      }
      else {
        DAT_080162e0[1] = (ushort)(uStack_20 / 0x14);
        uStack_20 = 0;
        uStack_28._0_2_ = (ushort)(byte)uStack_28;
      }
      if ((DAT_080162e0[1] < 0x575) || (0xa4c < DAT_080162e0[1])) {
        if ((DAT_080162e0[1] < 0x4b0) || (0xaf0 < DAT_080162e0[1])) {
          if (DAT_080162e4[1] == '\0') {
            DAT_080162e8[1] = 1;
          }
          DAT_080162e4[1] = '\x01';
        }
      }
      else {
        DAT_080162e4[1] = '\0';
      }
      uVar4 = FUN_080110dc(DAT_080162ec,5);
      puVar1 = DAT_080162dc;
      DAT_080162dc[2] = uVar4;
      uStack_28._2_1_ = SUB41(iVar2,2);
      bVar3 = uStack_28._2_1_ + 1;
      uStack_28._3_1_ = SUB41(iVar2,3);
      uStack_28._0_3_ = CONCAT12(bVar3,(ushort)uStack_28);
      if (bVar3 < 0x15) {
        uStack_1c = uStack_1c + puVar1[2];
      }
      else {
        DAT_080162e0[2] = (ushort)(uStack_1c / 0x14);
        uStack_1c = 0;
        uStack_28._0_3_ = (uint3)(ushort)uStack_28;
      }
      if ((DAT_080162e0[2] < 0x575) || (0xa4c < DAT_080162e0[2])) {
        if ((DAT_080162e0[2] < 0x4b0) || (0xaf0 < DAT_080162e0[2])) {
          if (DAT_080162e4[2] == '\0') {
            DAT_080162e8[2] = 1;
          }
          DAT_080162e4[2] = '\x01';
        }
      }
      else {
        DAT_080162e4[2] = '\0';
      }
      uVar4 = FUN_080110dc(DAT_080162d8,5);
      puVar1 = DAT_080162dc;
      DAT_080162dc[3] = uVar4;
      bVar3 = uStack_28._3_1_ + 1;
      uStack_28 = CONCAT13(bVar3,(uint3)uStack_28);
      if (bVar3 < 0x15) {
        uStack_18 = uStack_18 + puVar1[3];
      }
      else {
        *(short *)(DAT_08016350 + 6) = (short)(uStack_18 / 0x14);
        uStack_18 = 0;
        uStack_28 = (uint)(uint3)uStack_28;
      }
      if ((*(ushort *)(DAT_08016350 + 6) < 0x575) || (0xa4c < *(ushort *)(DAT_08016350 + 6))) {
        if ((*(ushort *)(DAT_08016350 + 6) < 0x4b0) || (0xaf0 < *(ushort *)(DAT_08016350 + 6))) {
          if (*(char *)(DAT_08016354 + 3) == '\0') {
            *(undefined1 *)(DAT_08016358 + 3) = 1;
          }
          *(undefined1 *)(DAT_08016354 + 3) = 1;
        }
      }
      else {
        *(undefined1 *)(DAT_08016354 + 3) = 0;
      }
    }
    FUN_08017ad4();
  } while( true );
}


// 0801635c

float FUN_0801635c(float param_1,float param_2,float param_3)

{
  return param_2 - param_1 * 2.0 * param_3;
}


// 08016374

byte FUN_08016374(void)

{
  return *DAT_08016384 - *DAT_08016388 & 0x7f;
}


// 0801638c

byte FUN_0801638c(void)

{
  return *DAT_0801639c - *DAT_080163a0 & 0x7f;
}


// 080163a4

byte FUN_080163a4(void)

{
  return *DAT_080163b4 - *DAT_080163b8 & 0x7f;
}


// 080163bc

void FUN_080163bc(undefined4 param_1,float param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 auStack_2c [20];
  
  *DAT_08016484 = 0;
  *DAT_08016488 = 0;
  FUN_08010202(auStack_2c,0x14);
  *DAT_0801648c = 1;
  puVar1 = DAT_08016494;
  *DAT_08016494 = DAT_08016490;
  puVar1[1] = DAT_08016490;
  puVar1[2] = DAT_08016490;
  puVar1[3] = DAT_08016490;
  puVar1[4] = DAT_08016490;
  FUN_08015b0c(auStack_2c,0);
  *DAT_08016498 = param_1;
  FUN_08017b80(param_2 / DAT_0801649c);
  for (uVar2 = 0; uVar2 < 5; uVar2 = uVar2 + 1 & 0xff) {
    if (*DAT_080164a0 == '\0') {
      DAT_08016494[uVar2] = DAT_08016498[uVar2];
    }
    else {
      DAT_08016494[uVar2] = (float)DAT_08016494[uVar2] + (float)DAT_08016498[uVar2];
    }
  }
  return;
}


// 080164a4

void FUN_080164a4(void)

{
  FUN_08018da0();
  FUN_08018d70();
  FUN_08018dbc();
  return;
}


// 080164b4

void FUN_080164b4(void)

{
  FUN_08017968();
  *DAT_080164d8 = 0;
  *DAT_080164dc = 0;
  FUN_08011c7c();
  FUN_08017b74(*DAT_080164e0);
  FUN_08015b84(1);
  return;
}


// 080164e4

undefined4 FUN_080164e4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; (int)uVar1 < 8; uVar1 = uVar1 + 1) {
    param_1 = FUN_0801650e(param_1,param_2,param_3,uVar1 & 0xff);
  }
  return param_1;
}


// 0801650e

uint FUN_0801650e(uint param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if ((param_1 & 0x80) == (param_2 << (7U - param_4 & 0xff) & 0x80U)) {
    uVar1 = (param_1 & 0x7f) << 1;
  }
  else {
    uVar1 = (param_3 ^ param_1 << 1) & 0xff;
  }
  return uVar1;
}


// 08016536

uint FUN_08016536(int param_1)

{
  return param_1 + 1U & 0x7f;
}


// 08016540

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0801707c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_08016540(float param_1,float param_2,undefined4 param_3,byte param_4,byte param_5,
                 byte param_6)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  char cVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float fVar18;
  float extraout_s1_02;
  undefined8 unaff_d11;
  float fVar19;
  undefined8 uVar20;
  float local_98 [5];
  int local_84;
  undefined4 local_80;
  
  fVar7 = DAT_0801694c;
  fVar19 = (float)((ulonglong)unaff_d11 >> 0x20);
  if ((*DAT_08016950 != 0) && (*DAT_08016954 == *DAT_08016958)) {
    *DAT_0801695c = '\x01';
  }
  local_80 = FUN_08016536(*DAT_08016954);
  pbVar8 = (byte *)(DAT_08016960 + (uint)*DAT_08016954 * 0x8c);
  *pbVar8 = 0;
  pbVar8[0x7a] = 0;
  pbVar8[0x78] = param_5;
  pbVar8[0x3e] = param_6;
  *(undefined4 *)(pbVar8 + 0x80) = *DAT_08016964;
  *(float *)(pbVar8 + 0x84) = param_1 * DAT_08016968;
  pbVar8[0x88] = *DAT_0801696c;
  *DAT_08016970 = 0;
  FUN_08014954(1);
  for (uVar9 = 0; uVar9 < 5; uVar9 = uVar9 + 1 & 0xff) {
    *(undefined4 *)(pbVar8 + uVar9 * 4 + 0x1c) = *(undefined4 *)(DAT_08016974 + uVar9 * 4);
  }
  FUN_08014954(0);
  iVar4 = *DAT_08016978 + DAT_08016978[1];
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  *(int *)(pbVar8 + 4) = iVar4;
  iVar4 = *DAT_08016978 - DAT_08016978[1];
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  *(int *)(pbVar8 + 8) = iVar4;
  iVar4 = DAT_0801697c;
  *(undefined4 *)(pbVar8 + 0xc) = *(undefined4 *)(DAT_0801697c + 8);
  *(undefined4 *)(pbVar8 + 0x10) = *(undefined4 *)(iVar4 + 0xc);
  *(undefined4 *)(pbVar8 + 0x14) = *(undefined4 *)(iVar4 + 0x10);
  *(undefined4 *)(pbVar8 + 0x18) = *DAT_08016980;
  pbVar8[0x7b] = *DAT_08016984;
  local_84 = 0;
  if ((((*(int *)(pbVar8 + 4) == 0) && (*(int *)(pbVar8 + 8) == 0)) && (*(int *)(pbVar8 + 0xc) == 0)
      ) && ((*(int *)(pbVar8 + 0x10) != 0 || (*(int *)(pbVar8 + 0x14) != 0)))) {
    local_84 = 1;
  }
  pbVar8[0x3c] = 0;
  if (DAT_08016978[1] + *DAT_08016978 < 0) {
    pbVar8[0x3c] = pbVar8[0x3c] | 1;
  }
  if (*DAT_08016978 - DAT_08016978[1] < 0) {
    pbVar8[0x3c] = pbVar8[0x3c] | 2;
  }
  if (*(int *)(DAT_08016988 + 8) < *(int *)(DAT_08016974 + 8)) {
    pbVar8[0x3c] = pbVar8[0x3c] | 4;
  }
  if (*(int *)(DAT_08016988 + 0xc) < *(int *)(DAT_08016974 + 0xc)) {
    pbVar8[0x3c] = pbVar8[0x3c] | 8;
  }
  if (*(int *)(DAT_08016988 + 0x10) < *(int *)(DAT_08016974 + 0x10)) {
    pbVar8[0x3c] = pbVar8[0x3c] | 0x10;
  }
  if ((*(int *)(pbVar8 + 0x10) == 0) || (*(int *)(pbVar8 + 0x14) == 0)) {
    if (*(int *)(pbVar8 + 0x10) == 0) {
      if (*(int *)(pbVar8 + 0x14) == 0) {
        pbVar8[0x3d] = param_4;
      }
      else {
        pbVar8[0x3d] = 1;
      }
    }
    else {
      pbVar8[0x3d] = 0;
    }
  }
  else {
    pbVar8[0x3d] = param_4;
  }
  if (*(int *)(DAT_08016988 + 0xc) == *(int *)(DAT_08016974 + 0xc)) {
    if (*(int *)(DAT_08016988 + 0x10) == *(int *)(DAT_08016974 + 0x10)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(DAT_08016988 + 0x10) - *(int *)(DAT_08016974 + 0x10);
    }
  }
  else {
    iVar4 = *(int *)(DAT_08016988 + 0xc) - *(int *)(DAT_08016974 + 0xc);
  }
  if (*(int *)(pbVar8 + 4) != 0) {
    FUN_08018678(0,1);
  }
  if (*(int *)(pbVar8 + 8) != 0) {
    FUN_08018678(1);
  }
  if (*(int *)(pbVar8 + 0xc) != 0) {
    FUN_08018678(2,1);
  }
  if (*(int *)(pbVar8 + 0x10) != 0) {
    FUN_08018678(3,1);
  }
  if (*(int *)(pbVar8 + 0x14) != 0) {
    FUN_08018678(4,1);
  }
  pbVar8[0x7c] = *DAT_0801698c;
  if (*DAT_08016990 == '\0') {
    if (*(int *)(pbVar8 + 0xc) == 0) {
      pbVar8[0x7c] = pbVar8[0x7c] & 0xfb;
    }
  }
  else {
    pbVar8[0x7c] = pbVar8[0x7c] | 4;
  }
  iVar5 = FUN_0801638c();
  if (iVar5 == 0) {
    for (uVar9 = 0; uVar9 < 5; uVar9 = uVar9 + 1 & 0xff) {
      *(float *)(DAT_08016994 + uVar9 * 4) = DAT_0801694c;
    }
  }
  *(undefined4 *)(pbVar8 + 100) = param_3;
  if (*DAT_08016950 != 0) {
    if ((*DAT_0801695c != '\0') && (*DAT_08016950 <= iVar5)) {
      *DAT_0801695c = '\0';
    }
    if (((iVar5 < *DAT_08016950) && (*DAT_0801695c == '\0')) && (1 < iVar5)) {
      fVar17 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
      fVar15 = (float)VectorSignedToFloat(*DAT_08016950,(byte)(in_fpscr >> 0x16) & 3);
      param_1 = param_1 * (fVar17 / fVar15);
      fVar16 = (float)VectorSignedToFloat(*(undefined4 *)(pbVar8 + 100),(byte)(in_fpscr >> 0x16) & 3
                                         );
      *(int *)(pbVar8 + 100) = (int)(fVar16 * (fVar17 / fVar15));
    }
  }
  uVar9 = in_fpscr & 0xfffffff | (uint)(param_1 == 0.0) << 0x1e;
  if ((byte)(uVar9 >> 0x1e) == 0) {
    if (local_84 == 0) {
      *(undefined4 *)(pbVar8 + 0x58) = *DAT_0801699c;
    }
    else {
      uVar6 = FUN_080105d4(*(undefined4 *)(DAT_08016998 + (pbVar8[0x3d] + 3) * 4));
      uVar6 = FUN_080146cc(uVar6);
      uVar6 = FUN_0801065c(uVar6,extraout_s1);
      *(undefined4 *)(pbVar8 + 0x58) = uVar6;
      param_2 = extraout_s1;
    }
    uVar20 = FUN_080105d4(*(undefined4 *)(pbVar8 + 0x58));
    FUN_0801046c((int)DAT_080169a0,(int)((ulonglong)DAT_080169a0 >> 0x20),(int)uVar20,
                 (int)((ulonglong)uVar20 >> 0x20));
    fVar7 = (float)FUN_0801065c();
    fVar19 = param_1 * fVar7;
    *(float *)(pbVar8 + 0x4c) =
         *(float *)(pbVar8 + 0x58) * fVar19 * *(float *)(pbVar8 + 0x58) * fVar19;
    fVar15 = (float)VectorUnsignedToFloat(*(undefined4 *)(pbVar8 + 0x18),(byte)(uVar9 >> 0x16) & 3);
    uVar6 = FUN_08014660(fVar15 * fVar19);
    uVar6 = VectorFloatToUnsigned(uVar6,3);
    *(undefined4 *)(pbVar8 + 100) = uVar6;
  }
  fVar15 = 1.0;
  FUN_08014954(1);
  for (uVar10 = 0; cVar14 = 4 < uVar10, uVar10 < 5; uVar10 = uVar10 + 1 & 0xff) {
    local_98[uVar10] = *(float *)(DAT_08016998 + uVar10 * 4) * fVar19;
    uVar6 = FUN_080105d4(local_98[uVar10]);
    uVar6 = FUN_080146cc(uVar6);
    fVar16 = (float)FUN_0801065c(uVar6,extraout_s1_00);
    uVar11 = uVar9 & 0xfffffff;
    uVar9 = uVar11 | (uint)(fVar16 <= *(float *)(DAT_080169a8 + uVar10 * 0x30 + 8)) << 0x1d;
    if (((byte)(uVar9 >> 0x1d) == 0) &&
       (uVar9 = uVar11 | (uint)(fVar15 <= *(float *)(DAT_080169a8 + uVar10 * 0x30 + 8) / fVar16) <<
                         0x1d, (byte)(uVar9 >> 0x1d) == 0)) {
      fVar15 = *(float *)(DAT_080169a8 + uVar10 * 0x30 + 8) / fVar16;
    }
    param_2 = extraout_s1_00;
  }
  FUN_08014954(0);
  uVar20 = FUN_080105d4(fVar15);
  FUN_080105fc((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)DAT_080169a0,
               (int)((ulonglong)DAT_080169a0 >> 0x20));
  if (cVar14 == '\0') {
    FUN_08014954(1);
    for (uVar10 = 0; uVar10 < 5; uVar10 = uVar10 + 1 & 0xff) {
      local_98[uVar10] = local_98[uVar10] * fVar15;
    }
    fVar19 = (float)VectorUnsignedToFloat(*(undefined4 *)(pbVar8 + 100),(byte)(uVar9 >> 0x16) & 3);
    uVar6 = VectorFloatToUnsigned(fVar19 * fVar15,3);
    *(undefined4 *)(pbVar8 + 100) = uVar6;
    *(float *)(pbVar8 + 0x4c) = *(float *)(pbVar8 + 0x4c) * fVar15 * fVar15;
    FUN_08014954(0);
  }
  if (*(int *)(DAT_08016e50 + 0xc) == 0) {
    if (*(int *)(DAT_08016e50 + 0x10) == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(DAT_08016e50 + 0x10);
    }
  }
  else {
    iVar12 = *(int *)(DAT_08016e50 + 0xc);
  }
  fVar19 = (float)VectorUnsignedToFloat(*(undefined4 *)(pbVar8 + 0x18),(byte)(uVar9 >> 0x16) & 3);
  fVar19 = fVar19 * fVar7;
  if (((*(int *)(pbVar8 + 4) == 0) && (*(int *)(pbVar8 + 8) == 0)) && (*(int *)(pbVar8 + 0xc) == 0))
  {
    uVar6 = FUN_08014660(fVar19 * DAT_08016e54);
    uVar10 = VectorFloatToUnsigned(uVar6,3);
    pbVar8[0x3f] = 0;
  }
  else {
    fVar7 = (float)VectorSignedToFloat(500,(byte)(uVar9 >> 0x16) & 3);
    uVar6 = FUN_080105d4(fVar7 * fVar19);
    uVar6 = FUN_08014548(uVar6);
    uVar10 = FUN_080105a2(uVar6,extraout_s1_01);
    if (((iVar12 == 0) ||
        (uVar9 = uVar9 & 0xfffffff |
                 (uint)(*(float *)(DAT_08016e58 + (uint)pbVar8[0x3d] * 4) == 0.0) << 0x1e,
        (byte)(uVar9 >> 0x1e) != 0)) || (iVar4 < 1)) {
      bVar3 = 0;
    }
    else {
      bVar3 = 1;
    }
    pbVar8[0x3f] = bVar3;
    if (pbVar8[0x3f] != 0) {
      fVar7 = (float)VectorSignedToFloat(*DAT_08016e5c - *DAT_08016e60,(byte)(uVar9 >> 0x16) & 3);
      fVar7 = fVar7 / *(float *)(DAT_08016e64 + 4);
      fVar15 = (float)VectorSignedToFloat(DAT_08016e5c[1] - DAT_08016e60[1],
                                          (byte)(uVar9 >> 0x16) & 3);
      fVar15 = fVar15 / *(float *)(DAT_08016e64 + 0x34);
      fVar16 = (float)VectorSignedToFloat(DAT_08016e5c[2] - DAT_08016e60[2],
                                          (byte)(uVar9 >> 0x16) & 3);
      fVar16 = fVar16 / *(float *)(DAT_08016e64 + 100);
      fVar17 = (float)VectorSignedToFloat(DAT_08016e5c[3] - DAT_08016e60[3],
                                          (byte)(uVar9 >> 0x16) & 3);
      fVar18 = *(float *)(DAT_08016e64 + 0x94);
      fVar7 = (float)FUN_080148ca(fVar7 * fVar7 + fVar15 * fVar15 + fVar16 * fVar16);
      *(float *)(pbVar8 + 0x48) = (fVar17 / fVar18) / fVar7;
      fVar7 = *(float *)(pbVar8 + 0x48);
      uVar11 = uVar9 & 0xfffffff | (uint)(fVar7 < 3.0) << 0x1f | (uint)(fVar7 == 3.0) << 0x1e;
      uVar9 = uVar11 | (uint)NAN(fVar7) << 0x1c;
      bVar3 = (byte)(uVar11 >> 0x18);
      if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar9 >> 0x1c) & 1)) {
        uVar11 = VectorFloatToUnsigned
                           ((*(float *)(DAT_08016e68 + 0xc) /
                            (*(float *)(DAT_08016e58 + (uint)pbVar8[0x3d] * 4) *
                            *(float *)(pbVar8 + 0x48))) * fVar19,3);
        if (uVar11 < uVar10) {
          uVar10 = uVar11;
        }
      }
      else {
        pbVar8[0x3f] = 0;
      }
    }
    uVar13 = 1;
    FUN_08014954(1);
    for (uVar11 = 0; uVar11 < 5; uVar11 = uVar11 + 1 & 0xff) {
      fVar15 = *(float *)(DAT_08016e6c + uVar11 * 4);
      fVar7 = (float)VectorUnsignedToFloat(uVar13,(byte)(uVar9 >> 0x16) & 3);
      uVar1 = uVar9 & 0xfffffff | (uint)(fVar15 < fVar7) << 0x1f | (uint)(fVar15 == fVar7) << 0x1e;
      uVar9 = uVar1 | (uint)(NAN(fVar15) || NAN(fVar7)) << 0x1c;
      bVar3 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar9 >> 0x1c) & 1)) {
        uVar13 = VectorFloatToUnsigned(*(undefined4 *)(DAT_08016e6c + uVar11 * 4),3);
      }
    }
    *DAT_08016e70 = (uint)(0xffffffff / (ulonglong)uVar13);
    FUN_08014954(0);
    param_2 = extraout_s1_01;
    if (*DAT_08016e70 < *(uint *)(pbVar8 + 0x18)) {
      FUN_08014954(1);
      for (uVar11 = 0; uVar11 < 4; uVar11 = uVar11 + 1 & 0xff) {
        if (*(int *)(pbVar8 + uVar11 * 4 + 4) != 0) {
          fVar7 = (float)VectorUnsignedToFloat(uVar10,(byte)(uVar9 >> 0x16) & 3);
          uVar13 = uVar9 & 0xfffffff;
          uVar9 = uVar13 | (uint)(fVar7 <= *(float *)(DAT_08016e6c + uVar11 * 4)) << 0x1d;
          if ((byte)(uVar9 >> 0x1d) == 0) {
            fVar7 = (float)VectorUnsignedToFloat
                                     (*(undefined4 *)(pbVar8 + 0x18),(byte)(uVar9 >> 0x16) & 3);
            fVar15 = (float)VectorUnsignedToFloat
                                      (*(undefined4 *)(pbVar8 + uVar11 * 4 + 4),
                                       (byte)(uVar9 >> 0x16) & 3);
            fVar15 = (*(float *)(DAT_08016e6c + uVar11 * 4) * fVar7) / fVar15;
            fVar7 = (float)VectorUnsignedToFloat(uVar10,(byte)(uVar9 >> 0x16) & 3);
            uVar13 = uVar13 | (uint)(fVar7 < fVar15) << 0x1f | (uint)(fVar7 == fVar15) << 0x1e;
            uVar9 = uVar13 | (uint)(NAN(fVar7) || NAN(fVar15)) << 0x1c;
            bVar3 = (byte)(uVar13 >> 0x18);
            if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar9 >> 0x1c) & 1)) {
              uVar10 = VectorFloatToUnsigned(fVar15,3);
            }
          }
        }
      }
      FUN_08014954(0);
    }
    else {
      FUN_08014954(1);
      for (uVar11 = 0; uVar11 < 4; uVar11 = uVar11 + 1 & 0xff) {
        if (*(int *)(pbVar8 + uVar11 * 4 + 4) != 0) {
          fVar7 = (float)VectorUnsignedToFloat(uVar10,(byte)(uVar9 >> 0x16) & 3);
          uVar9 = uVar9 & 0xfffffff | (uint)(fVar7 <= *(float *)(DAT_08016e6c + uVar11 * 4)) << 0x1d
          ;
          if ((byte)(uVar9 >> 0x1d) == 0) {
            fVar7 = (float)VectorUnsignedToFloat
                                     (*(undefined4 *)(pbVar8 + 0x18),(byte)(uVar9 >> 0x16) & 3);
            fVar15 = (float)VectorUnsignedToFloat
                                      (*(undefined4 *)(pbVar8 + uVar11 * 4 + 4),
                                       (byte)(uVar9 >> 0x16) & 3);
            uVar13 = VectorFloatToUnsigned
                               ((*(float *)(DAT_08016e6c + uVar11 * 4) * fVar7) / fVar15,3);
            if (uVar13 < uVar10) {
              uVar10 = uVar13;
            }
          }
        }
      }
      FUN_08014954(0);
    }
  }
  *(uint *)(pbVar8 + 0x74) = uVar10;
  fVar7 = (float)VectorUnsignedToFloat(uVar10,(byte)(uVar9 >> 0x16) & 3);
  *(float *)(pbVar8 + 0x5c) = fVar7 / fVar19;
  uVar20 = FUN_0801054a(uVar10);
  FUN_08010388((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)DAT_08016e74,
               (int)((ulonglong)DAT_08016e74 >> 0x20));
  uVar6 = FUN_08010564();
  *(undefined4 *)(pbVar8 + 0x38) = uVar6;
  if (pbVar8[0x3f] != 0) {
    uVar6 = VectorFloatToUnsigned
                      (DAT_08016e7c /
                       (*(float *)(DAT_08016e58 + (uint)pbVar8[0x3d] * 4) *
                        *(float *)(pbVar8 + 0x48) * *(float *)(pbVar8 + 0x5c) *
                       *(float *)(DAT_08016e64 + 0x94)),3);
    *(short *)(pbVar8 + 0x40) = (short)uVar6;
  }
  fVar19 = (float)FUN_080148ca(*(undefined4 *)(pbVar8 + 0x4c));
  bVar2 = false;
  FUN_08014954(1);
  fVar7 = fVar19;
  for (uVar9 = 0; uVar9 < 5; uVar9 = uVar9 + 1 & 0xff) {
    uVar6 = FUN_080105d4(local_98[uVar9]);
    uVar6 = FUN_080146cc(uVar6);
    fVar15 = (float)FUN_0801065c(uVar6,extraout_s1_02);
    fVar16 = *(float *)(DAT_08016e68 + uVar9 * 4);
    if (fVar16 < fVar15) {
      if (bVar2) {
        if (fVar19 * fVar16 < fVar15 * fVar7) {
          fVar7 = (fVar19 * fVar16) / fVar15;
        }
      }
      else {
        fVar7 = (fVar16 / fVar15) * fVar7;
        bVar2 = true;
      }
    }
    param_2 = extraout_s1_02;
  }
  FUN_08014954(0);
  if ((iVar5 == 0) || (*DAT_080170f8 < DAT_080170fc)) {
    fVar15 = fVar7;
  }
  else {
    cVar14 = '\0';
    fVar15 = (float)FUN_080148ca(*DAT_080170f8);
    fVar17 = 1.0;
    fVar16 = 1.0;
    if (fVar19 < fVar15) {
      fVar16 = fVar19 / fVar15;
      fVar15 = fVar19;
    }
    FUN_08014954(1);
    for (uVar9 = 0; uVar9 < 5; uVar9 = uVar9 + 1 & 0xff) {
      fVar19 = *(float *)(DAT_08017100 + uVar9 * 4) * fVar16;
      param_2 = local_98[uVar9];
      if (cVar14 != '\0') {
        fVar19 = fVar19 * fVar17;
        param_2 = param_2 * fVar17;
      }
      if (fVar19 <= param_2) {
        if ((param_2 < 0.0) || (0.0 < fVar19)) {
          fVar19 = param_2 - fVar19;
        }
        else if (-fVar19 <= param_2) {
          fVar19 = param_2;
        }
        else {
          fVar19 = -fVar19;
        }
      }
      else if ((0.0 < param_2) || (fVar19 < 0.0)) {
        fVar19 = fVar19 - param_2;
      }
      else if (fVar19 <= -param_2) {
        fVar19 = -param_2;
      }
      else {
      }
      if (*(float *)(DAT_08017104 + uVar9 * 4) < fVar19) {
        fVar17 = (*(float *)(DAT_08017104 + uVar9 * 4) / fVar19) * fVar17;
        cVar14 = cVar14 + '\x01';
      }
    }
    FUN_08014954(0);
    if (cVar14 != '\0') {
      fVar15 = fVar15 * fVar17;
    }
    if ((fVar15 * DAT_08017108 < *DAT_0801710c) && (fVar15 * DAT_08017108 < fVar7)) {
      fVar15 = fVar7;
    }
  }
  *DAT_0801710c = fVar7;
  *(float *)(pbVar8 + 0x54) = fVar15 * fVar15;
  fVar7 = (float)FUN_0801635c(-*(float *)(pbVar8 + 0x5c),param_2,*(undefined4 *)(pbVar8 + 0x58));
  *(undefined4 *)(pbVar8 + 0x50) = DAT_08017110;
  if (fVar7 < *(float *)(pbVar8 + 0x4c)) {
    bVar3 = 1;
  }
  else {
    bVar3 = 3;
  }
  *pbVar8 = *pbVar8 | bVar3;
  FUN_080101d0(DAT_08017100,local_98,0x14);
  *DAT_080170f8 = *(float *)(pbVar8 + 0x4c);
  *DAT_08017114 = (char)local_80;
  FUN_08014954(1);
  for (uVar9 = 0; uVar9 < 5; uVar9 = uVar9 + 1 & 0xff) {
    *(undefined4 *)(DAT_0801711c + uVar9 * 4) = *(undefined4 *)(DAT_08017118 + uVar9 * 4);
  }
  FUN_08014954(0);
  FUN_08017404();
  return;
}


// 08017120

void FUN_08017120(void)

{
  if (*DAT_08017144 != *DAT_08017148) {
    *DAT_08017148 = *DAT_08017148 + 1 & 0x7f;
  }
  *DAT_0801714c = 1;
  return;
}


// 08017150

byte * FUN_08017150(void)

{
  byte bVar1;
  byte *pbVar2;
  
  if ((*DAT_080171ac - *DAT_080171b0 & 0x7f) == 0) {
    pbVar2 = (byte *)0x0;
  }
  else {
    pbVar2 = (byte *)(DAT_080171b4 + (uint)*DAT_080171b0 * 0x8c);
    if ((*pbVar2 & 1) == 0) {
      bVar1 = FUN_08016536(*DAT_080171b0);
      *DAT_080171b8 = bVar1;
      if (*DAT_080171b0 == *DAT_080171bc) {
        *DAT_080171bc = *DAT_080171b8;
      }
    }
    else {
      pbVar2 = (byte *)0x0;
    }
  }
  return pbVar2;
}


// 080171c0

void FUN_080171c0(undefined1 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  
  *DAT_08017274 = 0;
  *DAT_08017278 = 0;
  *DAT_08017280 = DAT_0801727c;
  for (uVar3 = 0; puVar2 = DAT_08017290, uVar1 = DAT_0801728c, uVar3 < 5; uVar3 = uVar3 + 1 & 0xff)
  {
    *(undefined4 *)(DAT_08017284 + uVar3 * 4) = DAT_0801727c;
    *(undefined4 *)(DAT_08017288 + uVar3 * 4) = 0;
  }
  DAT_08017290[1] = DAT_0801728c;
  *puVar2 = uVar1;
  *DAT_08017294 = param_1;
  *DAT_08017298 = 1;
  puVar2 = DAT_0801729c;
  *DAT_0801729c = 0x41200000;
  puVar2[1] = 0x41200000;
  puVar2[2] = DAT_080172a0;
  puVar2[3] = 0x41a00000;
  puVar2[4] = 0x41a00000;
  for (uVar3 = 0; uVar3 < 5; uVar3 = uVar3 + 1 & 0xff) {
    fVar4 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(DAT_080172a4 + uVar3 * 4),(byte)(in_fpscr >> 0x16) & 3
                             );
    *(float *)(DAT_080172ac + uVar3 * 4) = fVar4 * *(float *)(DAT_080172a8 + uVar3 * 0x30 + 4);
  }
  return;
}


// 080172b0

void FUN_080172b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_08014954(1);
  puVar1 = DAT_08017304;
  *DAT_08017304 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = param_5;
  iVar2 = FUN_0801638c();
  if (iVar2 == 0) {
    FUN_080181fc(*DAT_08017304,DAT_08017304[1],DAT_08017304[2],DAT_08017304[3],DAT_08017304[4]);
  }
  FUN_08014954(0);
  return;
}


// 08017308

void FUN_08017308(void)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)0x0;
  for (uVar2 = (uint)*DAT_08017350; uVar2 != *DAT_08017358; uVar2 = FUN_08016536(uVar2)) {
    pbVar3 = (byte *)(DAT_08017354 + uVar2 * 0x8c);
    if ((*pbVar3 & 0x20) == 0) {
      if ((pbVar4 == (byte *)0x0) || (iVar1 = FUN_08018d58(pbVar4), iVar1 == 0)) {
        FUN_0801735c(pbVar4,pbVar3,uVar2);
      }
      pbVar4 = pbVar3;
    }
  }
  return;
}


// 0801735c

void FUN_0801735c(byte *param_1,byte *param_2,undefined1 param_3)

{
  int iVar1;
  float fVar2;
  undefined4 extraout_s5;
  
  FUN_08014954(1);
  if (param_1 != (byte *)0x0) {
    if ((((*param_1 & 2) == 0) && (*(float *)(param_1 + 0x50) < *(float *)(param_2 + 0x50))) &&
       (fVar2 = (float)FUN_0801635c(-*(float *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x50),
                                    *(undefined4 *)(param_1 + 0x58)),
       fVar2 < *(float *)(param_2 + 0x50))) {
      *param_2 = *param_2 | 1;
      iVar1 = FUN_08018d58(param_2);
      if (iVar1 == 0) {
        *(undefined4 *)(param_2 + 0x50) = extraout_s5;
        *DAT_08017400 = param_3;
      }
      else {
        *param_2 = *param_2 & 0xfe;
      }
    }
    if (*(float *)(param_2 + 0x50) == *(float *)(param_2 + 0x54)) {
      *DAT_08017400 = param_3;
    }
  }
  FUN_08014954(0);
  return;
}


// 08017404

void FUN_08017404(void)

{
  uint uVar1;
  
  uVar1 = FUN_0801779c(*DAT_08017428);
  if (uVar1 != *DAT_0801742c) {
    FUN_08017648();
    FUN_08017308();
  }
  FUN_08017430();
  return;
}


// 08017430

void FUN_08017430(void)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  
  uVar6 = (uint)*DAT_08017624;
  uVar7 = (uint)*DAT_08017628;
  while ((uVar7 != uVar6 &&
         (uVar2 = FUN_0801779c(uVar7), (*(byte *)(DAT_0801762c + uVar2 * 0x8c) & 0x20) != 0))) {
    uVar7 = uVar2;
  }
  pbVar5 = (byte *)0x0;
  pbVar4 = (byte *)0x0;
  fVar10 = DAT_08017630;
  fVar9 = DAT_08017630;
  for (; uVar6 != uVar7; uVar6 = FUN_08016536(uVar6)) {
    pbVar4 = (byte *)(DAT_0801762c + uVar6 * 0x8c);
    if ((*pbVar4 & 0x20) == 0) {
      fVar10 = (float)FUN_080148ca(*(undefined4 *)(pbVar4 + 0x50));
      if ((pbVar5 != (byte *)0x0) && (((*pbVar5 & 1) != 0 || ((*pbVar4 & 1) != 0)))) {
        *pbVar5 = *pbVar5 | 1;
        iVar3 = FUN_08018d58(pbVar5);
        if (iVar3 == 0) {
          fVar8 = (float)FUN_080148ca(*(undefined4 *)(pbVar5 + 0x4c));
          FUN_080158d0(fVar9 * (1.0 / fVar8),pbVar5);
          if (pbVar5[0x3f] != 0) {
            fVar9 = *(float *)(pbVar5 + 0x48) * *(float *)(DAT_08017634 + (uint)pbVar5[0x3d] * 4) *
                    *(float *)(DAT_08017638 + 0x94);
            uVar11 = VectorFloatToUnsigned(fVar8 * fVar9,3);
            *(short *)(pbVar5 + 0x42) = (short)uVar11;
            uVar11 = VectorFloatToUnsigned(fVar10 * fVar9,3);
            *(short *)(pbVar5 + 0x44) = (short)uVar11;
          }
        }
        *pbVar5 = *pbVar5 & 0xfe;
      }
      pbVar5 = pbVar4;
      fVar9 = fVar10;
    }
  }
  if (pbVar4 != (byte *)0x0) {
    *pbVar4 = *pbVar4 | 1;
    iVar3 = FUN_08018d58(pbVar5);
    if (iVar3 == 0) {
      fVar9 = (float)FUN_080148ca(*(undefined4 *)(pbVar4 + 0x4c));
      FUN_080158d0(fVar10 * (1.0 / fVar9),pbVar4);
      if (pbVar4[0x3f] != 0) {
        fVar10 = *(float *)(pbVar4 + 0x48) * *(float *)(DAT_08017634 + (uint)pbVar4[0x3d] * 4) *
                 *(float *)(DAT_08017638 + 0x94);
        uVar11 = VectorFloatToUnsigned(fVar9 * fVar10,3);
        *(short *)(pbVar4 + 0x42) = (short)uVar11;
        uVar12 = FUN_080105d4(fVar10);
        FUN_08010388((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)DAT_08017640,
                     (int)((ulonglong)DAT_08017640 >> 0x20));
        uVar1 = FUN_080105a2();
        *(undefined2 *)(pbVar4 + 0x44) = uVar1;
      }
    }
    *pbVar4 = *pbVar4 & 0xfe;
  }
  return;
}


// 08017648

void FUN_08017648(void)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  uVar1 = FUN_0801779c(*DAT_080176b4);
  uVar2 = (uint)*DAT_080176b8;
  if (uVar2 != *DAT_080176b4) {
    pbVar4 = (byte *)0x0;
    while (uVar1 != uVar2) {
      pbVar3 = (byte *)(DAT_080176bc + uVar1 * 0x8c);
      if ((*pbVar3 & 0x20) == 0) {
        FUN_080176c0(pbVar3,pbVar4);
        pbVar4 = pbVar3;
      }
      uVar1 = FUN_0801779c(uVar1);
      for (; uVar2 != *DAT_080176b8; uVar2 = FUN_08016536(uVar2)) {
        if (uVar1 == uVar2) {
          return;
        }
      }
    }
  }
  return;
}


// 080176c0

void FUN_080176c0(byte *param_1,byte *param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float extraout_s5;
  undefined4 extraout_s6;
  
  FUN_08014954(1);
  if ((param_1 != (byte *)0x0) &&
     ((fVar2 = *(float *)(param_1 + 0x54), *(float *)(param_1 + 0x50) != fVar2 ||
      ((param_2 != (byte *)0x0 && ((*param_2 & 1) != 0)))))) {
    if ((*param_1 & 2) == 0) {
      if (param_2 == (byte *)0x0) {
        uVar3 = DAT_08017798;
      }
      else {
        uVar3 = *(undefined4 *)(param_2 + 0x50);
      }
      fVar2 = (float)FUN_0801635c(-*(float *)(param_1 + 0x5c),uVar3,*(undefined4 *)(param_1 + 0x58))
      ;
      if (fVar2 <= extraout_s5) {
        if (param_2 == (byte *)0x0) {
          uVar3 = DAT_08017798;
        }
        else {
          uVar3 = *(undefined4 *)(param_2 + 0x50);
        }
        fVar2 = (float)FUN_0801635c(-*(float *)(param_1 + 0x5c),uVar3,
                                    *(undefined4 *)(param_1 + 0x58));
      }
      else {
        fVar2 = extraout_s5;
      }
    }
    if (*(float *)(param_1 + 0x50) != fVar2) {
      *param_1 = *param_1 | 1;
      iVar1 = FUN_08018d58(param_1);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x50) = extraout_s6;
      }
      else {
        *param_1 = *param_1 & 0xfe;
      }
    }
  }
  FUN_08014954(0);
  return;
}


// 0801779c

uint FUN_0801779c(int param_1)

{
  return param_1 - 1U & 0x7f;
}


// 080177a8

void FUN_080177a8(void)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  
  bVar4 = *DAT_08017928 == '\0';
  do {
    if (bVar4) goto LAB_080178d6;
    *DAT_08017928 = '\0';
    bVar4 = true;
  } while (*DAT_0801792c == 0);
  *DAT_08017930 = *(undefined4 *)(*DAT_0801792c + 0x80);
  *DAT_08017934 = *(undefined4 *)(*DAT_0801792c + 0x84);
  *DAT_0801792c = 0;
  if (*DAT_08017938 != *DAT_0801793c) {
    cVar2 = FUN_08016536(*DAT_0801793c);
    *DAT_0801793c = cVar2;
  }
  *DAT_08017940 = 0;
  *DAT_08017944 = 0xffffffff;
  *DAT_08017948 = 0;
  *DAT_0801794c = 0;
  FUN_0801494e(1);
  *DAT_08017954 = *DAT_08017950 + DAT_08017950[1] >> 1;
  piVar1 = DAT_08017954;
  DAT_08017954[1] = *DAT_08017950 - DAT_08017950[1] >> 1;
  piVar1[2] = DAT_08017950[2];
  piVar1[3] = DAT_08017950[3];
  piVar1[4] = DAT_08017950[4];
  fVar5 = (float)VectorSignedToFloat(*piVar1,(byte)(in_fpscr >> 0x16) & 3);
  *DAT_0801795c = fVar5 / *(float *)(DAT_08017958 + 4);
  fVar5 = (float)VectorSignedToFloat(piVar1[1],(byte)(in_fpscr >> 0x16) & 3);
  DAT_0801795c[1] = fVar5 / *(float *)(DAT_08017958 + 0x34);
  fVar5 = (float)VectorSignedToFloat(piVar1[2],(byte)(in_fpscr >> 0x16) & 3);
  DAT_0801795c[2] = fVar5 / *(float *)(DAT_08017958 + 100);
  fVar5 = (float)VectorSignedToFloat(piVar1[3],(byte)(in_fpscr >> 0x16) & 3);
  DAT_0801795c[3] = fVar5 / *(float *)(DAT_08017958 + 0x94);
  fVar5 = (float)VectorSignedToFloat(piVar1[4],(byte)(in_fpscr >> 0x16) & 3);
  DAT_0801795c[4] = fVar5 / *(float *)(DAT_08017958 + 0xc4);
  FUN_0801494e(0);
  FUN_08015d4c();
LAB_080178d6:
  if (*DAT_0801792c != 0) {
    if (*(int *)(*DAT_0801792c + 0x80) != 0) {
      *DAT_08017930 = *(undefined4 *)(*DAT_0801792c + 0x80);
      *DAT_08017934 = *(undefined4 *)(*DAT_0801792c + 0x84);
    }
    for (bVar3 = 0; bVar3 < *DAT_08017964; bVar3 = bVar3 + 1) {
      FUN_080188bc(0);
      *DAT_08017960 = *DAT_08017960 + 1;
    }
  }
  return;
}


// 08017968

void FUN_08017968(void)

{
  char cVar1;
  int *piVar2;
  uint in_fpscr;
  float fVar3;
  
  FUN_08012520(DAT_08017aa0,1,0);
  if ((*DAT_08017aa4 != 0) && (*DAT_08017aa8 == '\0')) {
    *DAT_08017aa8 = '\x01';
    *DAT_08017aac = *(undefined4 *)(*DAT_08017aa4 + 0x80);
    *DAT_08017ab0 = *(undefined4 *)(*DAT_08017aa4 + 0x84);
  }
  cVar1 = *DAT_08017ab4;
  *DAT_08017ab8 = cVar1;
  *DAT_08017abc = cVar1;
  *DAT_08017ac0 = cVar1;
  while (*DAT_08017ab8 != *DAT_08017ab4) {
    FUN_08017120();
  }
  *DAT_08017aa4 = 0;
  FUN_0801494e(1);
  *DAT_08017ac8 = *DAT_08017ac4 + DAT_08017ac4[1] >> 1;
  piVar2 = DAT_08017ac8;
  DAT_08017ac8[1] = *DAT_08017ac4 - DAT_08017ac4[1] >> 1;
  piVar2[2] = DAT_08017ac4[2];
  piVar2[3] = DAT_08017ac4[3];
  piVar2[4] = DAT_08017ac4[4];
  fVar3 = (float)VectorSignedToFloat(*piVar2,(byte)(in_fpscr >> 0x16) & 3);
  *DAT_08017ad0 = fVar3 / *(float *)(DAT_08017acc + 4);
  fVar3 = (float)VectorSignedToFloat(piVar2[1],(byte)(in_fpscr >> 0x16) & 3);
  DAT_08017ad0[1] = fVar3 / *(float *)(DAT_08017acc + 0x34);
  fVar3 = (float)VectorSignedToFloat(piVar2[2],(byte)(in_fpscr >> 0x16) & 3);
  DAT_08017ad0[2] = fVar3 / *(float *)(DAT_08017acc + 100);
  fVar3 = (float)VectorSignedToFloat(piVar2[3],(byte)(in_fpscr >> 0x16) & 3);
  DAT_08017ad0[3] = fVar3 / *(float *)(DAT_08017acc + 0x94);
  fVar3 = (float)VectorSignedToFloat(piVar2[4],(byte)(in_fpscr >> 0x16) & 3);
  DAT_08017ad0[4] = fVar3 / *(float *)(DAT_08017acc + 0xc4);
  FUN_0801494e(0);
  FUN_08012520(DAT_08017aa0,1);
  return;
}


// 08017ad4

void FUN_08017ad4(void)

{
  int iVar1;
  
  FUN_08015c54();
  if ((*DAT_08017b18 != '\0') && (iVar1 = FUN_08012de8(), iVar1 != 0)) {
    *DAT_08017b18 = '\0';
  }
  if (*DAT_08017b1c == '\x01') {
    FUN_08015d28();
    FUN_08011bc8(DAT_08017b20);
    FUN_08011bc8(DAT_08017b24);
    *DAT_08017b28 = 1;
    *DAT_08017b2c = 1;
    *DAT_08017b1c = '\0';
  }
  return;
}


// 08017b30

void FUN_08017b30(void)

{
  FUN_08015c48(DAT_08017b44,DAT_08017b40,200);
  return;
}


// 08017b48

uint FUN_08017b48(void)

{
  uint local_8;
  
  local_8 = 0;
  FUN_08015c34(DAT_08017b5c,&local_8);
  return local_8 & 0xff;
}


// 08017b60

void FUN_08017b60(void)

{
  FUN_08015c24(DAT_08017b6c);
  return;
}


// 08017b70

void FUN_08017b70(void)

{
  return;
}


// 08017b74

void FUN_08017b74(undefined1 param_1)

{
  *DAT_08017b7c = param_1;
  return;
}


// 08017b80

void FUN_08017b80(float param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  uint in_fpscr;
  undefined4 uVar11;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  undefined4 extraout_s1_06;
  undefined4 extraout_s1_07;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_6c [5];
  
  iVar7 = 0;
  for (uVar5 = 0; uVar5 < 5; uVar5 = uVar5 + 1 & 0xff) {
    uVar3 = FUN_080105d4(*(float *)(param_2 + uVar5 * 4) *
                         *(float *)(DAT_08017f9c + uVar5 * 0x30 + 4));
    iVar8 = FUN_08014750(uVar3);
    local_6c[uVar5] = iVar8;
    if ((1 << uVar5 & (uint)*DAT_08017fa0) == 0) {
      *(int *)(DAT_08017fa8 + uVar5 * 4) = local_6c[uVar5] + *(int *)(*DAT_08017fac + uVar5 * 4);
    }
    else {
      *(int *)(DAT_08017fa8 + uVar5 * 4) = *(int *)(DAT_08017fa4 + uVar5 * 4) + local_6c[uVar5];
    }
  }
  *DAT_08017fb0 = 0;
  for (uVar5 = 0; iVar8 = DAT_08017fb4, uVar5 < 5; uVar5 = uVar5 + 1 & 0xff) {
    *(int *)(DAT_08017fb4 + uVar5 * 4) =
         *(int *)(DAT_08017fa8 + uVar5 * 4) - *(int *)(DAT_08017fa4 + uVar5 * 4);
    DAT_08017fb8[uVar5] = *(int *)(iVar8 + uVar5 * 4);
    iVar8 = *(int *)(DAT_08017fb4 + uVar5 * 4);
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    if (iVar8 < 0x8000) {
      fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(DAT_08017fb4 + uVar5 * 4),
                                         (byte)(in_fpscr >> 0x16) & 3);
      DAT_08017fc0[uVar5] = fVar4 * *(float *)(DAT_08017fbc + uVar5 * 4);
    }
    else {
      fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(DAT_08017fb4 + uVar5 * 4),
                                         (byte)(in_fpscr >> 0x16) & 3);
      DAT_08017fc0[uVar5] = fVar4 * *(float *)(DAT_08017fbc + uVar5 * 4);
    }
    iVar1 = DAT_08017fb4;
    *(int *)(DAT_08017fb4 + uVar5 * 4) = iVar8;
    if (iVar7 < *(int *)(iVar1 + uVar5 * 4)) {
      *DAT_08017fb0 = (byte)uVar5;
      iVar7 = *(int *)(DAT_08017fb4 + uVar5 * 4);
    }
  }
  iVar8 = 0;
  iVar7 = *DAT_08017fb8 + DAT_08017fb8[1];
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  *DAT_08017fc4 = iVar7;
  iVar7 = *DAT_08017fb8 - DAT_08017fb8[1];
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  DAT_08017fc4[1] = iVar7;
  iVar7 = DAT_08017fb8[2];
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  DAT_08017fc4[2] = iVar7;
  iVar7 = DAT_08017fb8[3];
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  DAT_08017fc4[3] = iVar7;
  iVar7 = DAT_08017fb8[4];
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  DAT_08017fc4[4] = iVar7;
  for (uVar5 = 0; uVar5 < 5; uVar5 = uVar5 + 1 & 0xff) {
    if (iVar8 < DAT_08017fc4[uVar5]) {
      *DAT_08017fb0 = (byte)uVar5;
      iVar8 = DAT_08017fc4[uVar5];
    }
  }
  *DAT_08017fc8 = iVar8;
  uVar3 = FUN_080105d4(*DAT_08017fc0 * *DAT_08017fc0 + DAT_08017fc0[1] * DAT_08017fc0[1] +
                       DAT_08017fc0[2] * DAT_08017fc0[2]);
  uVar3 = FUN_08014850(uVar3);
  fVar4 = (float)FUN_0801065c(uVar3,extraout_s1);
  uVar6 = in_fpscr & 0xfffffff | (uint)(fVar4 == 0.0) << 0x1e;
  uVar5 = uVar6 | (uint)(0.0 <= fVar4) << 0x1d;
  bVar9 = (byte)(uVar6 >> 0x1e);
  bVar10 = (byte)(uVar5 >> 0x1d) & 1;
  if (bVar9 != 0) {
    uVar3 = FUN_080105d4(DAT_08017fc0[4]);
    uVar11 = FUN_080146cc(uVar3);
    uVar3 = FUN_080105d4(DAT_08017fc0[3]);
    uVar3 = FUN_080146cc(uVar3);
    FUN_0801062c(uVar3,extraout_s1_01,uVar11,extraout_s1_00);
    if (bVar10 == 0) {
      uVar3 = FUN_080105d4(DAT_08017fc0[3]);
      uVar11 = FUN_080146cc(uVar3);
      uVar3 = extraout_s1_02;
    }
    else {
      uVar3 = FUN_080105d4(DAT_08017fc0[4]);
      uVar11 = FUN_080146cc(uVar3);
      uVar3 = extraout_s1_03;
    }
    fVar4 = (float)FUN_0801065c(uVar11,uVar3);
  }
  if (*DAT_08017fc8 != 0) {
    uVar12 = FUN_080105d4(fVar4);
    FUN_080105fc((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)DAT_08017fcc,
                 (int)((ulonglong)DAT_08017fcc >> 0x20));
    if (bVar9 == 0) {
      *DAT_08017fd4 = fVar4;
      *DAT_08017fdc = param_1 * *DAT_08017fd8;
      for (uVar6 = 0; uVar6 < 5; uVar6 = uVar6 + 1 & 0xff) {
        uVar12 = FUN_080105d4(*DAT_08017fd4);
        uVar3 = FUN_080105d4(DAT_08017fc0[uVar6]);
        uVar3 = FUN_080146cc(uVar3);
        uVar13 = FUN_080105d4(param_1);
        uVar13 = FUN_08010388((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),uVar3,extraout_s1_04);
        FUN_0801046c((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,
                     (int)((ulonglong)uVar12 >> 0x20));
        fVar4 = (float)FUN_0801065c();
        uVar5 = uVar5 & 0xfffffff;
        if (*(float *)(DAT_08017f9c + uVar6 * 0x30 + 8) < fVar4) {
          uVar3 = FUN_080105d4(DAT_08017fc0[uVar6]);
          uVar3 = FUN_080146cc(uVar3);
          uVar12 = FUN_080105d4(*(float *)(DAT_08017f9c + uVar6 * 0x30 + 8) * *DAT_08017fd4);
          FUN_0801046c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),uVar3,extraout_s1_05);
          fVar4 = (float)FUN_0801065c();
          *DAT_08017fdc = fVar4;
        }
      }
      uVar3 = FUN_080105d4(DAT_08017fc0[*DAT_08017fb0]);
      uVar3 = FUN_080146cc(uVar3);
      fVar4 = (float)FUN_0801065c(uVar3,extraout_s1_06);
      pfVar2 = DAT_080180e0;
      *DAT_080180e0 = fVar4;
      *DAT_080180ec = (*DAT_080180e4 * *pfVar2) / *DAT_080180e8;
      uVar3 = FUN_080105d4(*(float *)(DAT_080180f4 + (uint)*DAT_080180f0 * 0x30 + 4) * *DAT_080180ec
                          );
      uVar3 = FUN_08014548(uVar3);
      iVar7 = FUN_08010564(uVar3,extraout_s1_07);
      if ((*DAT_080180f8 & 0x80) != 0) {
        *DAT_080180e4 = *DAT_080180e4 * *DAT_080180fc;
        fVar4 = (float)VectorSignedToFloat(iVar7,(byte)(uVar5 >> 0x16) & 3);
        iVar7 = (int)(fVar4 * *DAT_080180fc);
      }
      FUN_08016540(*DAT_080180e4,iVar7,*DAT_08018100,1,*DAT_08018100);
      iVar7 = FUN_080163a4();
      if (iVar7 < (int)(uint)*DAT_08018104) {
        *DAT_08018108 = 0;
      }
      else {
        *DAT_08018108 = 1;
      }
    }
  }
  return;
}


// 0801810c

void FUN_0801810c(undefined1 param_1)

{
  uint uVar1;
  
  *DAT_08018128 = param_1;
  for (uVar1 = 0; uVar1 < 2; uVar1 = uVar1 + 1 & 0xff) {
    *(undefined1 *)(DAT_0801812c + uVar1) = 1;
  }
  return;
}


// 08018130

void FUN_08018130(void)

{
  *DAT_08018138 = 0;
  return;
}


// 0801813c

char FUN_0801813c(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_0801494e(1);
  FUN_08011988(DAT_080181e8,0xffff);
  uVar4 = 0;
  cVar1 = '\n';
  do {
    FUN_0801494e(0);
    if (*DAT_080181ec == 0) {
      FUN_080177a8();
    }
    if (*DAT_080181ec == 0) {
      uVar2 = FUN_080152a4();
      *DAT_080181ec = uVar2;
      if (*DAT_080181f0 != '\0') {
        *DAT_080181f4 = 0;
      }
    }
    if (*DAT_080181f8 < *DAT_080181ec) {
      uVar2 = *DAT_080181f8;
    }
    else {
      uVar2 = *DAT_080181ec;
    }
    if (0xffff < uVar2) {
      uVar2 = 0xffff;
    }
    *DAT_080181ec = *DAT_080181ec - uVar2;
    FUN_0801494e(1);
    iVar3 = FUN_0801254c(DAT_080181e8);
    cVar1 = cVar1 + -1;
    uVar4 = uVar4 + uVar2;
    if (cVar1 == '\0') {
      uVar4 = iVar3 + 2U;
    }
  } while (uVar4 < iVar3 + 2U);
  FUN_08011988(DAT_080181e8,uVar4);
  FUN_0801494e(0);
  return *DAT_080181f0;
}


// 080181fc

void FUN_080181fc(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  
  FUN_0801494e(1);
  piVar1 = DAT_08018250;
  *DAT_08018250 = param_1 + param_2;
  piVar1[1] = param_1 - param_2;
  piVar1[2] = param_3;
  piVar1[3] = param_4;
  piVar1[4] = param_5;
  if ((*DAT_08018254 == '\0') && (*DAT_08018258 == '\x01')) {
    *DAT_0801825c = *piVar1;
  }
  else {
    *DAT_08018260 = *DAT_08018250;
  }
  FUN_0801494e(0);
  return;
}


// 08018264

void FUN_08018264(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint in_fpscr;
  undefined4 uVar7;
  float fVar8;
  int iVar9;
  undefined8 uVar10;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  
  uVar6 = 0;
  FUN_08011eac(4,1);
  FUN_08011eac(1);
  FUN_08011608(DAT_0801852c,1);
  if (param_1 != 0) {
    uVar6 = 0x9f;
  }
  for (uVar3 = 0; uVar3 < 5; uVar3 = uVar3 + 1 & 0xff) {
    if (param_1 != 0) {
      if (((int)(uVar6 << 0x18) < 0) && ((1 << uVar3 & uVar6) == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *(undefined1 *)(DAT_08018530 + uVar3 * 0x30) = uVar2;
      *(bool *)(DAT_08018530 + uVar3 * 0x30 + 1) = (1 << uVar3 & (uint)(param_1 != 0)) != 0;
      uVar7 = VectorUnsignedToFloat
                        (*(undefined4 *)(DAT_08018534 + uVar3 * 4),(byte)(in_fpscr >> 0x16) & 3);
      uVar10 = FUN_080105d4(uVar7);
      FUN_0801046c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)DAT_08018538,
                   (int)((ulonglong)DAT_08018538 >> 0x20));
      uVar7 = FUN_0801065c();
      *(undefined4 *)(DAT_08018530 + uVar3 * 0x30 + 4) = uVar7;
      uVar7 = VectorUnsignedToFloat
                        (*(undefined4 *)(DAT_08018540 + uVar3 * 4),(byte)(in_fpscr >> 0x16) & 3);
      uVar10 = FUN_080105d4(uVar7);
      FUN_0801046c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)DAT_08018544,
                   (int)((ulonglong)DAT_08018544 >> 0x20));
      uVar7 = FUN_0801065c();
      iVar1 = DAT_08018530;
      *(undefined4 *)(DAT_08018530 + uVar3 * 0x30 + 8) = uVar7;
      fVar8 = (float)VectorUnsignedToFloat
                               (*(undefined4 *)(DAT_0801854c + uVar3 * 4),
                                (byte)(in_fpscr >> 0x16) & 3);
      iVar9 = (int)(fVar8 * *(float *)(iVar1 + uVar3 * 0x30 + 4));
      piVar5 = (int *)(iVar1 + uVar3 * 0x30 + 0x10);
      piVar4 = (int *)(iVar1 + uVar3 * 0x30 + 0x14);
      switch(uVar3) {
      case 0:
      case 1:
        *piVar4 = iVar9 / 2;
        *piVar5 = -*piVar4;
        break;
      case 2:
        *piVar4 = iVar9;
        *piVar5 = 0;
        break;
      case 3:
      case 4:
        *piVar4 = iVar9;
        *piVar5 = -iVar9;
      }
      local_35 = 0x10;
      local_36 = 3;
      local_38 = *(undefined2 *)(DAT_08018550 + uVar3 * 0x28 + 4);
      FUN_08011858(*(undefined4 *)(DAT_08018550 + uVar3 * 0x28),&local_38);
      local_38 = *(undefined2 *)(DAT_08018550 + uVar3 * 0x28 + 0xc);
      FUN_08011858(*(undefined4 *)(DAT_08018550 + uVar3 * 0x28 + 8),&local_38);
      local_38 = *(undefined2 *)(DAT_08018550 + uVar3 * 0x28 + 0x14);
      FUN_08011858(*(undefined4 *)(DAT_08018550 + uVar3 * 0x28 + 0x10),&local_38);
      FUN_08011984(*(undefined4 *)(DAT_08018550 + uVar3 * 0x28 + 0x10),
                   *(undefined2 *)(DAT_08018550 + uVar3 * 0x28 + 0x14));
      *(undefined4 *)(DAT_08018554 + uVar3 * 4) = 0;
      iVar1 = DAT_08018530;
      *(undefined1 *)(DAT_08018530 + uVar3 * 0x30 + 0xc) = 0;
      *(undefined1 *)(iVar1 + uVar3 * 0x30 + 0xd) = 0;
    }
    *(undefined1 *)(DAT_08018558 + uVar3) = 0;
    *(undefined1 *)(DAT_0801855c + uVar3) = 0;
    iVar1 = DAT_08018530;
    *(bool *)(DAT_08018530 + uVar3 * 0x30 + 0x20) = 2 < uVar3;
    *(undefined4 *)(iVar1 + uVar3 * 0x30 + 0x24) = 0;
    *(undefined1 *)(iVar1 + uVar3 * 0x30 + 0x21) = 1;
    *(undefined1 *)(iVar1 + uVar3 * 0x30 + 0x22) = 0;
    *(undefined1 *)(iVar1 + uVar3 * 0x30 + 0x18) = 0;
    *(undefined4 *)(iVar1 + uVar3 * 0x30 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + uVar3 * 0x30 + 0x28) = 0;
    *(undefined4 *)(iVar1 + uVar3 * 0x30 + 0x2c) = 0;
  }
  if (param_1 != 0) {
    *DAT_08018560 = 0;
    *DAT_08018564 = 0;
  }
  for (uVar6 = 0; uVar6 < 2; uVar6 = uVar6 + 1 & 0xff) {
    *(undefined2 *)(DAT_08018568 + uVar6 * 2) = 0;
  }
  return;
}


// 0801856c

void FUN_0801856c(int param_1,uint param_2)

{
  if (param_1 == 0) {
    if (*(char *)(DAT_08018670 + 1) == '\0') {
      param_2 = param_2 ^ 1;
    }
    if (param_2 == 0) {
      FUN_08011980(*(undefined4 *)(DAT_08018674 + 8),*(undefined2 *)(DAT_08018674 + 0xc));
    }
    else {
      FUN_08011984(*(undefined4 *)(DAT_08018674 + 8),*(undefined2 *)(DAT_08018674 + 0xc));
    }
  }
  else if (param_1 == 1) {
    if (*(char *)(DAT_08018670 + 0x31) == '\0') {
      param_2 = param_2 ^ 1;
    }
    if (param_2 == 0) {
      FUN_08011980(*(undefined4 *)(DAT_08018674 + 0x30),*(undefined2 *)(DAT_08018674 + 0x34));
    }
    else {
      FUN_08011984(*(undefined4 *)(DAT_08018674 + 0x30),*(undefined2 *)(DAT_08018674 + 0x34));
    }
  }
  else {
    if (*(char *)(DAT_08018670 + param_1 * 0x30 + 1) == '\0') {
      param_2 = param_2 ^ 1;
    }
    if (param_2 == 0) {
      FUN_08011980(*(undefined4 *)(DAT_08018674 + param_1 * 0x28 + 8),
                   *(undefined2 *)(DAT_08018674 + param_1 * 0x28 + 0xc));
    }
    else {
      FUN_08011984(*(undefined4 *)(DAT_08018674 + param_1 * 0x28 + 8),
                   *(undefined2 *)(DAT_08018674 + param_1 * 0x28 + 0xc));
    }
  }
  return;
}


// 08018678

void FUN_08018678(uint param_1,int param_2)

{
  if (param_2 == 0) {
    *DAT_0801869c = *DAT_0801869c & ~(byte)(1 << (param_1 & 0xff));
  }
  else {
    *DAT_0801869c = (byte)(1 << (param_1 & 0xff)) | *DAT_0801869c;
  }
  return;
}


// 080186a0

void FUN_080186a0(uint param_1,int param_2)

{
  if (param_2 == 0) {
    *DAT_08018744 = *DAT_08018744 & ~(byte)(1 << (param_1 & 0xff));
  }
  else {
    *DAT_08018744 = (byte)(1 << (param_1 & 0xff)) | *DAT_08018744;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    if (param_2 == 0) {
      FUN_08011984(*(undefined4 *)(DAT_08018748 + 0x10),*(undefined2 *)(DAT_08018748 + 0x14));
      FUN_08011984(*(undefined4 *)(DAT_08018748 + 0x38),*(undefined2 *)(DAT_08018748 + 0x3c));
    }
    else {
      FUN_08011980(*(undefined4 *)(DAT_08018748 + 0x10),*(undefined2 *)(DAT_08018748 + 0x14));
      FUN_08011980(*(undefined4 *)(DAT_08018748 + 0x38),*(undefined2 *)(DAT_08018748 + 0x3c));
    }
  }
  else if (param_2 == 0) {
    FUN_08011984(*(undefined4 *)(DAT_08018748 + param_1 * 0x28 + 0x10),
                 *(undefined2 *)(DAT_08018748 + param_1 * 0x28 + 0x14));
  }
  else {
    FUN_08011980(*(undefined4 *)(DAT_08018748 + param_1 * 0x28 + 0x10),
                 *(undefined2 *)(DAT_08018748 + param_1 * 0x28 + 0x14));
  }
  return;
}


// 0801874c

void FUN_0801874c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 != *DAT_08018794) {
    for (uVar1 = 0; uVar1 < 5; uVar1 = uVar1 + 1 & 0xff) {
      uVar2 = 1 << uVar1 & 0xff;
      if ((param_1 & uVar2) != (*DAT_08018794 & uVar2)) {
        FUN_080186a0(uVar1,(param_1 & uVar2) != 0);
      }
    }
  }
  return;
}


// 08018798

void FUN_08018798(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_08011980(*(undefined4 *)(DAT_080187d8 + param_1 * 0x28),
                 *(undefined2 *)(DAT_080187d8 + param_1 * 0x28 + 4));
  }
  else {
    FUN_08011984(*(undefined4 *)(DAT_080187d8 + param_1 * 0x28),
                 *(undefined2 *)(DAT_080187d8 + param_1 * 0x28 + 4));
  }
  return;
}


// 080187dc

undefined4 FUN_080187dc(int param_1)

{
  return *(undefined4 *)(DAT_080187ec + param_1 * 0x30 + 4);
}


// 080187f0

void FUN_080187f0(int param_1,undefined1 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 uVar2;
  
  *(bool *)(DAT_080188b8 + param_1 * 0x30 + 0x23) = param_5 != 0;
  iVar1 = DAT_080188b8;
  if (*(char *)(DAT_080188b8 + param_1 * 0x30 + 0x23) != '\0') {
    *(int *)(DAT_080188b8 + param_1 * 0x30 + 0x24) = param_3 >> 1;
    *(int *)(iVar1 + param_1 * 0x30 + 0x24) = -*(int *)(iVar1 + param_1 * 0x30 + 0x24);
    *(undefined1 *)(iVar1 + param_1 * 0x30 + 0x18) = param_2;
    *(int *)(iVar1 + param_1 * 0x30 + 0x1c) = param_3;
    *(int *)(iVar1 + param_1 * 0x30 + 0x2c) = param_5;
    iVar1 = DAT_080188b8;
    if (param_4 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0xff;
    }
    *(undefined1 *)(DAT_080188b8 + param_1 * 0x30 + 0x21) = uVar2;
    *(byte *)(iVar1 + param_1 * 0x30 + 0x22) = (byte)param_4 ^ 1;
    *(undefined4 *)(iVar1 + param_1 * 0x30 + 0x28) = 0;
  }
  return;
}


// 080188bc

void FUN_080188bc(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_08018cc0;
  if (((*(char *)(DAT_08018cc0 + param_1 * 0x30 + 0x23) != '\0') &&
      (*(int *)(DAT_08018cc0 + param_1 * 0x30 + 0x24) =
            *(int *)(DAT_08018cc0 + param_1 * 0x30 + 0x24) +
            *(int *)(DAT_08018cc0 + param_1 * 0x30 + 0x2c),
      0 < *(int *)(iVar2 + param_1 * 0x30 + 0x24))) &&
     (*(int *)(iVar2 + param_1 * 0x30 + 0x28) < *(int *)(iVar2 + param_1 * 0x30 + 0x2c))) {
    *(int *)(iVar2 + param_1 * 0x30 + 0x24) =
         *(int *)(iVar2 + param_1 * 0x30 + 0x24) - *(int *)(iVar2 + param_1 * 0x30 + 0x1c);
    if (*(char *)(iVar2 + param_1 * 0x30 + 0x20) == '\0') {
      FUN_0801856c(param_1,*(undefined1 *)(DAT_08018cc0 + param_1 * 0x30 + 0x22));
      piVar1 = DAT_08018cf8;
      if (param_1 == 0) {
        if ((*DAT_08018ce4 == '\x01') && (*DAT_08018ce8 == '\x01')) {
          if (((*(char *)(DAT_08018cc0 + 0x22) == '\0') ||
              ((*DAT_08018cec != '\0' && (*DAT_08018cf0 != '\0')))) &&
             (*(char *)(DAT_08018cc0 + 0x22) != '\0')) {
            *DAT_08018cd0 = 0;
          }
          else if (((*DAT_08018cf0 == '\0') && (*(char *)(DAT_08018cc0 + 0x22) != '\0')) ||
                  (*(char *)(DAT_08018cc0 + 0x22) == '\0')) {
            if (*DAT_08018cf4 == '\x01') {
              if (*(char *)(DAT_08018cc0 + 0x21) == '\x01') {
                iVar2 = -1;
              }
              else {
                iVar2 = 1;
              }
              *DAT_08018cf8 = iVar2 + *DAT_08018cf8;
            }
            else {
              if (*DAT_08018cfc == '\x01') {
                if (*(char *)(DAT_08018cc0 + 0x21) == '\x01') {
                  iVar2 = -1;
                }
                else {
                  iVar2 = 1;
                }
                *DAT_08018cf8 = iVar2 + *DAT_08018cf8;
              }
              if (*DAT_08018cfc == '\x02') {
                if (*(char *)(DAT_08018cc0 + 0x21) == '\x01') {
                  iVar2 = 1;
                }
                else {
                  iVar2 = -1;
                }
                *DAT_08018cf8 = iVar2 + *DAT_08018cf8;
              }
            }
          }
        }
        else if ((*DAT_08018ce4 == '\0') && (*DAT_08018ce8 == '\x01')) {
          if (((*DAT_08018cf0 == '\0') && (*(char *)(DAT_08018cc0 + 0x22) == '\0')) ||
             (*(char *)(DAT_08018cc0 + 0x22) != '\0')) {
            if (*(char *)(DAT_08018cc0 + 0x21) == '\x01') {
              iVar2 = 1;
            }
            else {
              iVar2 = -1;
            }
            *DAT_08018cf8 = iVar2 + *DAT_08018cf8;
            *DAT_08018ccc = *piVar1;
          }
        }
        else if (((*DAT_08018cec == '\0') && (*(char *)(DAT_08018cc0 + 0x22) != '\0')) ||
                (*(char *)(DAT_08018cc0 + 0x22) == '\0')) {
          FUN_08018798(0,1);
          FUN_08018798(0,0);
          if (*(char *)(DAT_08018d48 + 0x21) == '\x01') {
            iVar2 = 1;
          }
          else {
            iVar2 = -1;
          }
          *DAT_08018d4c = iVar2 + *DAT_08018ccc;
        }
        else {
          *DAT_08018d50 = 0;
          *DAT_08018d54 = 0;
        }
      }
      else if (param_1 == 2) {
        if (*(char *)(DAT_08018cc0 + 0x82) == '\0') {
          if (*DAT_08018cd8 == '\x01') {
            if (*DAT_08018cdc == '\x01') {
              FUN_08011c60();
            }
            else {
              FUN_08018798(2,1);
              FUN_08018798(2,0);
              if (*(char *)(DAT_08018cc0 + 0x81) == '\x01') {
                iVar2 = 1;
              }
              else {
                iVar2 = -1;
              }
              DAT_08018ccc[2] = iVar2 + DAT_08018ccc[2];
            }
          }
          else {
            FUN_08018798(2,1);
            FUN_08018798(2,0);
            if (*(char *)(DAT_08018cc0 + 0x81) == '\x01') {
              iVar2 = 1;
            }
            else {
              iVar2 = -1;
            }
            DAT_08018ccc[2] = iVar2 + DAT_08018ccc[2];
          }
        }
        else if (*DAT_08018cc8 == '\0') {
          FUN_08018798(2,1);
          FUN_08018798(2,0);
          if (*(char *)(DAT_08018cc0 + 0x81) == '\x01') {
            iVar2 = 1;
          }
          else {
            iVar2 = -1;
          }
          DAT_08018ccc[2] = iVar2 + DAT_08018ccc[2];
        }
        else {
          DAT_08018cd0[2] = 0;
          *(undefined1 *)(DAT_08018cd4 + 2) = 0;
        }
      }
      else if (param_1 == 1) {
        if (((*DAT_08018ce0 == '\0') && (*(char *)(DAT_08018cc0 + 0x52) == '\0')) ||
           (*(char *)(DAT_08018cc0 + 0x52) != '\0')) {
          FUN_08018798(1,1);
          FUN_08018798(1,0);
          if (*(char *)(DAT_08018cc0 + 0x51) == '\x01') {
            iVar2 = 1;
          }
          else {
            iVar2 = -1;
          }
          DAT_08018ccc[1] = iVar2 + DAT_08018ccc[1];
        }
        else {
          DAT_08018cd0[1] = 0;
          *(undefined1 *)(DAT_08018cd4 + 1) = 0;
        }
      }
    }
    else if (*(char *)(iVar2 + param_1 * 0x30 + 0x21) == '\x01') {
      *(char *)(DAT_08018cc4 + param_1 + -3) = *(char *)(DAT_08018cc4 + param_1 + -3) + '\x01';
    }
    else {
      *(char *)(DAT_08018cc4 + param_1 + -3) = *(char *)(DAT_08018cc4 + param_1 + -3) + -1;
    }
    *(int *)(DAT_08018d48 + param_1 * 0x30 + 0x28) =
         *(int *)(DAT_08018d48 + param_1 * 0x30 + 0x28) + 1;
  }
  return;
}


// 08018d58

bool FUN_08018d58(int param_1)

{
  return param_1 == *DAT_08018d6c;
}


// 08018d70

void FUN_08018d70(void)

{
  FUN_08017968();
  *DAT_08018d94 = 0;
  *DAT_08018d98 = 0;
  FUN_08018264();
  FUN_08017b74(*DAT_08018d9c);
  FUN_08015b84(1);
  return;
}


// 08018da0

void FUN_08018da0(void)

{
  *DAT_08018db4 = 0;
  *DAT_08018db8 = 0;
  FUN_08018264(1);
  return;
}


// 08018dbc

void FUN_08018dbc(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  undefined2 *puVar5;
  int *piVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  
  FUN_08015e6c();
  FUN_08015aa8(0);
  puVar1 = DAT_08018fa4;
  *DAT_08018fa4 = 1;
  FUN_08017b74(*puVar1);
  FUN_08015b84(1);
  for (uVar7 = 0; puVar2 = DAT_08018fb4, uVar7 < 5; uVar7 = uVar7 + 1 & 0xff) {
    uVar10 = FUN_080187dc(uVar7);
    uVar12 = FUN_080105d4(uVar10);
    FUN_0801046c((int)DAT_08018fa8,(int)((ulonglong)DAT_08018fa8 >> 0x20),(int)uVar12,
                 (int)((ulonglong)uVar12 >> 0x20));
    uVar10 = FUN_0801065c();
    *(undefined4 *)(DAT_08018fb0 + uVar7 * 4) = uVar10;
  }
  *DAT_08018fb4 = 500;
  puVar2[1] = 500;
  puVar2[2] = 0x32;
  puVar2[3] = 500;
  puVar2[4] = 500;
  for (uVar7 = 0; puVar4 = DAT_08018fc4, uVar7 < 5; uVar7 = uVar7 + 1 & 0xff) {
    fVar8 = (float)FUN_080187dc(uVar7);
    uVar9 = VectorFloatToUnsigned(DAT_08018fb8 / fVar8,3);
    if (uVar9 < (uint)DAT_08018fb4[uVar7]) {
      fVar8 = (float)FUN_080187dc(uVar7);
      uVar10 = VectorFloatToUnsigned(DAT_08018fb8 / fVar8,3);
      DAT_08018fb4[uVar7] = uVar10;
    }
    fVar8 = (float)FUN_080187dc(uVar7);
    iVar3 = DAT_08018fbc;
    fVar11 = (float)VectorUnsignedToFloat(DAT_08018fb4[uVar7],(byte)(in_fpscr >> 0x16) & 3);
    uVar10 = VectorFloatToUnsigned(fVar8 * fVar11,3);
    *(undefined4 *)(DAT_08018fbc + uVar7 * 4) = uVar10;
    *(int *)(DAT_08018fc0 + uVar7 * 4) = (int)(0xffffffff / (ulonglong)*(uint *)(iVar3 + uVar7 * 4))
    ;
  }
  *DAT_08018fc4 = 500;
  if (10000 < *puVar4) {
    *DAT_08018fc4 = 10000;
  }
  puVar4 = DAT_08018fc8;
  *DAT_08018fc8 = 500;
  if (10000 < *puVar4) {
    *DAT_08018fc8 = 10000;
  }
  puVar5 = DAT_08018fcc;
  *DAT_08018fcc = 0x10;
  puVar5[1] = 0x10;
  puVar2 = DAT_08018fd0;
  *DAT_08018fd0 = 0x41200000;
  puVar2[1] = 0x41200000;
  puVar2[2] = 0x41200000;
  puVar2[3] = 0x41f00000;
  puVar2[4] = 0x41f00000;
  uVar10 = DAT_08018fd4;
  *DAT_08018fe0 = DAT_08018fdc;
  *DAT_08018fe4 = 0x40000000;
  piVar6 = DAT_08018fe8;
  *DAT_08018fe8 = 4;
  if (0x40 < *piVar6) {
    *piVar6 = 0;
  }
  puVar1 = DAT_08018fec;
  *DAT_08018fec = 1;
  puVar1[1] = 1;
  *DAT_08018ff4 = *(undefined4 *)(DAT_08018ff0 + 0x98);
  DAT_08018ff4[1] = *(undefined4 *)(DAT_08018ff0 + 200);
  puVar1 = DAT_08018ff8;
  *DAT_08018ff8 = 1;
  puVar1[1] = *puVar1;
  *DAT_08018ffc = 0x7f;
  *DAT_08019000 = 0;
  *DAT_08019004 = 0x3f800000;
  FUN_080171c0(uVar10,*DAT_08019008);
  FUN_08018130();
  return;
}


// 0801900c

void FUN_0801900c(void)

{
  int iVar1;
  
  switch(*DAT_080193f8) {
  case 0:
    goto switchD_08019020_caseD_0;
  case 1:
    iVar1 = FUN_0801196e(DAT_080193fc,0x200);
    if (iVar1 == 0) {
      FUN_08011980(DAT_08019400,0x40);
      *DAT_08019404 = 0;
      *DAT_08019408 = 0;
      *DAT_080193f8 = 2;
      FUN_08011980(DAT_080193fc,2);
    }
    else {
      FUN_08011984(DAT_08019400,0x40);
      *DAT_08019404 = 1;
      *DAT_08019408 = 0;
      *DAT_080193f8 = 3;
      FUN_08011980(DAT_080193fc,2);
    }
    goto switchD_08019020_caseD_0;
  case 2:
    if (*DAT_0801940c == '\0') {
      FUN_08011980(DAT_08019400,0x80);
      *DAT_0801940c = '\x01';
      if (0xfff < *DAT_08019408) {
        *DAT_08019408 = 0;
        iVar1 = FUN_0801196e(DAT_080193fc,0x200);
        if (iVar1 == 0) {
          *DAT_080193f8 = 0x7e;
        }
        else {
          FUN_08011984(DAT_08019400,0x40);
          *DAT_08019404 = 1;
          *DAT_080193f8 = 3;
        }
      }
    }
    else {
      FUN_08011984(DAT_08019400,0x80);
      *DAT_0801940c = '\0';
      *DAT_08019408 = *DAT_08019408 + 1;
    }
    goto switchD_08019020_caseD_0;
  case 3:
    if (*DAT_0801940c == '\0') {
      FUN_08011980(DAT_08019400,0x80);
      *DAT_0801940c = '\x01';
      if ((0x3fff < *DAT_08019408) || (iVar1 = FUN_0801196e(DAT_080193fc,0x200), iVar1 == 0)) {
        if (*DAT_08019408 < 0x4000) {
          *DAT_080193f8 = 4;
        }
        else {
          *DAT_080193f8 = 0x7e;
        }
        *DAT_08019408 = 0;
      }
    }
    else {
      FUN_08011984(DAT_08019400,0x80);
      *DAT_0801940c = '\0';
      *DAT_08019408 = *DAT_08019408 + 1;
    }
switchD_08019020_caseD_0:
    break;
  case 4:
    *DAT_08019410 = 0;
    FUN_08011984(DAT_080193fc,2);
    *DAT_08019408 = 0;
    if (*DAT_08019414 == '\x01') {
      FUN_08011984(DAT_080193fc,2);
      *DAT_080193f8 = 0x7f;
      *DAT_08019414 = '\0';
    }
    else {
      switch(*DAT_08019418) {
      case 0:
        *DAT_080193f8 = 0xc;
        break;
      case 1:
        *DAT_08019418 = 0;
        *DAT_080193f8 = 7;
        break;
      case 2:
        *DAT_08019418 = 0;
        *DAT_080193f8 = 0x12;
        break;
      case 3:
        *DAT_08019418 = 0;
        *DAT_080193f8 = 0x1d;
        break;
      case 4:
        *DAT_08019418 = 0;
        *DAT_080193f8 = 0x28;
      }
    }
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    FUN_08011980(DAT_0801980c,2);
    if (*DAT_08019810 == 0) {
      FUN_08011984(DAT_0801980c,2);
      *DAT_08019814 = 8;
    }
    else if (*DAT_08019818 == '\0') {
      FUN_08011980(DAT_0801981c,0x80);
      *DAT_08019818 = '\x01';
    }
    else {
      FUN_08011984(DAT_0801981c,0x80);
      *DAT_08019818 = '\0';
      if (*DAT_08019810 < 0) {
        FUN_08011984(DAT_0801981c,0x40);
        *DAT_08019820 = 1;
        *DAT_08019810 = *DAT_08019810 + 1;
      }
      else {
        FUN_08011980(DAT_0801981c,0x40);
        *DAT_08019820 = 0;
        *DAT_08019810 = *DAT_08019810 + -1;
      }
    }
    break;
  case 8:
    *DAT_08019814 = 9;
    break;
  case 9:
    *DAT_08019814 = 5;
    break;
  case 10:
    *DAT_08019824 = 0;
    FUN_080163bc(*DAT_0801982c,*DAT_08019828);
    *DAT_08019830 = 0;
    *DAT_08019814 = 0xb;
    break;
  case 0xb:
    iVar1 = FUN_08016374();
    if (iVar1 == 0) {
      *DAT_08019814 = 0xd;
    }
    break;
  case 0xc:
    FUN_08011980(DAT_0801980c,2);
    if (*DAT_08019810 == 0x800) {
      FUN_08011984(DAT_0801980c,2);
      *DAT_08019834 = 0;
      *DAT_08019814 = 0xd;
    }
    else if (*DAT_08019818 == '\0') {
      FUN_08011980(DAT_0801981c,0x80);
      *DAT_08019818 = '\x01';
    }
    else {
      FUN_08011984(DAT_0801981c,0x80);
      *DAT_08019818 = '\0';
      if (*DAT_08019810 < 0x800) {
        FUN_08011984(DAT_0801981c,0x40);
        *DAT_08019820 = 1;
        *DAT_08019810 = *DAT_08019810 + 1;
      }
      else {
        FUN_08011980(DAT_0801981c,0x40);
        *DAT_08019820 = 0;
        *DAT_08019810 = *DAT_08019810 + -1;
      }
    }
    break;
  case 0xd:
    *DAT_08019814 = 5;
    break;
  case 0xe:
    *DAT_08019824 = 0;
    FUN_080163bc(*DAT_0801983c,*DAT_08019838);
    *DAT_08019834 = 0;
    *DAT_08019814 = 0xf;
    break;
  case 0xf:
    iVar1 = FUN_08016374();
    if (iVar1 == 0) {
      *DAT_08019814 = 0x10;
    }
    break;
  case 0x10:
    FUN_08015d28();
    *DAT_08019814 = 5;
    break;
  case 0x12:
    FUN_08011980(DAT_0801980c,2);
    if (*DAT_08019810 == 0x1000) {
      FUN_08011984(DAT_0801980c,2);
      *DAT_08019814 = 0x13;
    }
    else if (*DAT_08019818 == '\0') {
      FUN_08011980(DAT_0801981c,0x80);
      *DAT_08019818 = '\x01';
    }
    else {
      FUN_08011984(DAT_0801981c,0x80);
      *DAT_08019818 = '\0';
      if (*DAT_08019810 < 0x1000) {
        FUN_08011984(DAT_0801981c,0x40);
        *DAT_08019820 = 1;
        *DAT_08019810 = *DAT_08019810 + 1;
      }
      else {
        FUN_08011980(DAT_0801981c,0x40);
        *DAT_08019820 = 0;
        *DAT_08019810 = *DAT_08019810 + -1;
      }
    }
    break;
  case 0x13:
    *DAT_08019814 = 0x14;
    break;
  case 0x14:
    *DAT_08019814 = 5;
    break;
  case 0x15:
    DAT_08019824[1] = 0;
    FUN_080163bc(*DAT_0801982c,*DAT_08019828);
    *DAT_08019830 = 0;
    *DAT_08019814 = 0x16;
    break;
  case 0x16:
    iVar1 = FUN_08016374();
    if (iVar1 == 0) {
      *DAT_08019814 = 0x18;
    }
    break;
  case 0x17:
    FUN_08011980(DAT_0801980c,2);
    if (*DAT_08019810 == 0x1800) {
      FUN_08011984(DAT_0801980c,2);
      *DAT_08019834 = 0;
      *DAT_08019814 = 0x18;
    }
    else if (*DAT_08019818 == '\0') {
      FUN_08011980(DAT_0801981c,0x80);
      *DAT_08019818 = '\x01';
    }
    else {
      FUN_08011984(DAT_0801981c,0x80);
      *DAT_08019818 = '\0';
      if (*DAT_08019810 < 0x1800) {
        FUN_08011984(DAT_0801981c,0x40);
        *DAT_08019820 = 1;
        *DAT_08019810 = *DAT_08019810 + 1;
      }
      else {
        FUN_08011980(DAT_0801981c,0x40);
        *DAT_08019820 = 0;
        *DAT_08019810 = *DAT_08019810 + -1;
      }
    }
    break;
  case 0x18:
    *DAT_08019814 = 5;
    break;
  case 0x19:
    DAT_08019824[1] = 0;
    FUN_080163bc(*DAT_0801983c,*DAT_08019838);
    *DAT_08019834 = 0;
    *DAT_08019814 = 0x1a;
    break;
  case 0x1a:
    iVar1 = FUN_08016374();
    if (iVar1 == 0) {
      *DAT_08019814 = 0x1b;
    }
    break;
  case 0x1b:
    FUN_08015d28();
    *DAT_08019814 = 5;
    break;
  case 0x1d:
    FUN_08011980(DAT_0801980c,2);
    if (*DAT_08019810 == 0x2000) {
      FUN_08011984(DAT_0801980c,2);
      *DAT_08019814 = 0x1e;
    }
    else if (*DAT_08019818 == '\0') {
      FUN_08011980(DAT_0801981c,0x80);
      *DAT_08019818 = '\x01';
    }
    else {
      FUN_08011984(DAT_0801981c,0x80);
      *DAT_08019818 = '\0';
      if (*DAT_08019810 < 0x2000) {
        FUN_08011984(DAT_0801981c,0x40);
        *DAT_08019820 = 1;
        *DAT_08019810 = *DAT_08019810 + 1;
      }
      else {
        FUN_08011980(DAT_0801981c,0x40);
        *DAT_08019820 = 0;
        *DAT_08019810 = *DAT_08019810 + -1;
      }
    }
    break;
  case 0x1e:
    *DAT_08019814 = 0x1f;
    break;
  case 0x1f:
    *DAT_08019814 = 5;
    break;
  case 0x20:
    DAT_08019824[2] = 0;
    FUN_080163bc(*DAT_0801982c,*DAT_08019828);
    *DAT_08019830 = 0;
    *DAT_08019814 = 0x21;
    break;
  case 0x21:
    iVar1 = FUN_08016374();
    if (iVar1 == 0) {
      *DAT_08019bdc = 0x23;
    }
    break;
  case 0x22:
    FUN_08011980(DAT_08019be0,2);
    if (*DAT_08019be4 == 0x2800) {
      FUN_08011984(DAT_08019be0,2);
      *DAT_08019be8 = 0;
      *DAT_08019bdc = 0x23;
    }
    else if (*DAT_08019bec == '\0') {
      FUN_08011980(DAT_08019bf0,0x80);
      *DAT_08019bec = '\x01';
    }
    else {
      FUN_08011984(DAT_08019bf0,0x80);
      *DAT_08019bec = '\0';
      if (*DAT_08019be4 < 0x2800) {
        FUN_08011984(DAT_08019bf0,0x40);
        *DAT_08019bf4 = 1;
        *DAT_08019be4 = *DAT_08019be4 + 1;
      }
      else {
        FUN_08011980(DAT_08019bf0,0x40);
        *DAT_08019bf4 = 0;
        *DAT_08019be4 = *DAT_08019be4 + -1;
      }
    }
    break;
  case 0x23:
    *DAT_08019bdc = 5;
    break;
  case 0x24:
    *(undefined4 *)(DAT_08019bf8 + 8) = 0;
    FUN_080163bc(*DAT_08019c00,*DAT_08019bfc);
    *DAT_08019be8 = 0;
    *DAT_08019bdc = 0x25;
    break;
  case 0x25:
    iVar1 = FUN_08016374();
    if (iVar1 == 0) {
      *DAT_08019bdc = 0x26;
    }
    break;
  case 0x26:
    FUN_08015d28();
    *DAT_08019bdc = 5;
    break;
  case 0x28:
    FUN_08011980(DAT_08019be0,2);
    if (*DAT_08019be4 == 0x3000) {
      FUN_08011984(DAT_08019be0,2);
      *DAT_08019bdc = 0x29;
    }
    else if (*DAT_08019bec == '\0') {
      FUN_08011980(DAT_08019bf0,0x80);
      *DAT_08019bec = '\x01';
    }
    else {
      FUN_08011984(DAT_08019bf0,0x80);
      *DAT_08019bec = '\0';
      if (*DAT_08019be4 < 0x3000) {
        FUN_08011984(DAT_08019bf0,0x40);
        *DAT_08019bf4 = 1;
        *DAT_08019be4 = *DAT_08019be4 + 1;
      }
      else {
        FUN_08011980(DAT_08019bf0,0x40);
        *DAT_08019bf4 = 0;
        *DAT_08019be4 = *DAT_08019be4 + -1;
      }
    }
    break;
  case 0x29:
    *DAT_08019bdc = 0x2a;
    break;
  case 0x2a:
    *DAT_08019bdc = 5;
    break;
  case 0x2b:
    *(undefined4 *)(DAT_08019bf8 + 0xc) = 0;
    FUN_080163bc(*DAT_08019c08,*DAT_08019c04);
    *DAT_08019c0c = 0;
    *DAT_08019bdc = 0x2c;
    break;
  case 0x2c:
    iVar1 = FUN_08016374();
    if (iVar1 == 0) {
      *DAT_08019bdc = 0x2e;
    }
    break;
  case 0x2d:
    FUN_08011980(DAT_08019be0,2);
    if (*DAT_08019be4 == 0x3800) {
      FUN_08011984(DAT_08019be0,2);
      *DAT_08019be8 = 0;
      *DAT_08019bdc = 0x2e;
    }
    else if (*DAT_08019bec == '\0') {
      FUN_08011980(DAT_08019bf0,0x80);
      *DAT_08019bec = '\x01';
    }
    else {
      FUN_08011984(DAT_08019bf0,0x80);
      *DAT_08019bec = '\0';
      if (*DAT_08019be4 < 0x3800) {
        FUN_08011984(DAT_08019bf0,0x40);
        *DAT_08019bf4 = 1;
        *DAT_08019be4 = *DAT_08019be4 + 1;
      }
      else {
        FUN_08011980(DAT_08019bf0,0x40);
        *DAT_08019bf4 = 0;
        *DAT_08019be4 = *DAT_08019be4 + -1;
      }
    }
    break;
  case 0x2e:
    *DAT_08019bdc = 5;
    break;
  case 0x2f:
    *(undefined4 *)(DAT_08019bf8 + 0xc) = 0;
    FUN_080163bc(*DAT_08019c00,*DAT_08019bfc);
    *DAT_08019be8 = 0;
    *DAT_08019bdc = 0x30;
    break;
  case 0x30:
    iVar1 = FUN_08016374();
    if (iVar1 == 0) {
      *DAT_08019bdc = 0x31;
    }
    break;
  case 0x31:
    FUN_08015d28();
    *DAT_08019bdc = 5;
    break;
  case 0x65:
    *DAT_08019c10 = 1;
    break;
  case 0x66:
    DAT_08019c10[1] = 1;
    break;
  case 0x67:
    DAT_08019c10[2] = 1;
    break;
  case 0x68:
    DAT_08019c10[3] = 1;
    break;
  case 0x69:
    *DAT_08019c10 = 1;
    break;
  case 0x6a:
    DAT_08019c10[1] = 1;
    break;
  case 0x6b:
    DAT_08019c10[2] = 1;
    break;
  case 0x6c:
    DAT_08019c10[3] = 1;
    break;
  case 0x6d:
    break;
  case 0x6e:
    break;
  case 0x6f:
    break;
  case 0x70:
    break;
  case 0x71:
    *DAT_08019c10 = 1;
    break;
  case 0x72:
    DAT_08019c10[1] = 1;
    break;
  case 0x73:
    DAT_08019c10[2] = 1;
    break;
  case 0x74:
    DAT_08019c10[3] = 1;
    break;
  case 0x75:
    *DAT_08019c10 = 1;
    break;
  case 0x76:
    DAT_08019c10[1] = 1;
    break;
  case 0x77:
    DAT_08019c10[2] = 1;
    break;
  case 0x78:
    DAT_08019c10[3] = 1;
    break;
  case 0x79:
    break;
  case 0x7a:
    break;
  case 0x7b:
    break;
  case 0x7c:
    break;
  case 0x7d:
    break;
  case 0x7e:
    FUN_08011984(DAT_080193fc,2);
    FUN_08011984(DAT_080193fc,0x40);
    FUN_08011980(DAT_080193fc,0x20);
    break;
  case 0x7f:
    *DAT_08019808 = 0;
    break;
  case 0x80:
    FUN_08011980(DAT_08019be0,2);
    *DAT_08019bdc = 0x81;
    break;
  case 0x81:
    if (*DAT_08019be4 == *DAT_08019c14) {
      FUN_08011984(DAT_08019be0,2);
    }
    else if (*DAT_08019bec == '\0') {
      FUN_08011980(DAT_08019bf0,0x80);
      *DAT_08019bec = '\x01';
    }
    else {
      FUN_08011984(DAT_08019bf0,0x80);
      *DAT_08019bec = '\0';
      if (*DAT_08019be4 < *DAT_08019c14) {
        FUN_08011984(DAT_08019bf0,0x40);
        *DAT_08019bf4 = 1;
        *DAT_08019be4 = *DAT_08019be4 + 1;
      }
      else {
        FUN_08011980(DAT_08019bf0,0x40);
        *DAT_08019bf4 = 0;
        *DAT_08019be4 = *DAT_08019be4 + -1;
      }
    }
    break;
  case 0x82:
    break;
  case 0x83:
  }
  return;
}


// 08019c18

void FUN_08019c18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  if (param_1 == DAT_08019c7c) {
    FUN_08011eac(4,1);
    local_10 = 0x18030004;
    FUN_08011858(DAT_08019c80,&local_10);
  }
  else if (param_1 == DAT_08019c84) {
    FUN_08011eac(0x10,1);
    local_10 = 0x18030010;
    FUN_08011858(DAT_08019c88,&local_10);
  }
  FUN_08019c8c(param_1,param_2);
  return;
}


// 08019c8c

void FUN_08019c8c(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_080164e4(0,5,7);
  uVar1 = FUN_080164e4(uVar1,0,7);
  uVar1 = FUN_080164e4(uVar1,param_2 & 0x7f,7);
  FUN_08012a28(param_1,0x40);
  FUN_08012bda(param_1,5);
  do {
    iVar2 = FUN_08012aae(param_1,0x40);
  } while (iVar2 == 0);
  FUN_08012bda(param_1,0);
  do {
    iVar2 = FUN_08012aae(param_1,0x40);
  } while (iVar2 == 0);
  FUN_08012bda(param_1,param_2 & 0x7f);
  do {
    iVar2 = FUN_08012aae(param_1,0x40);
  } while (iVar2 == 0);
  FUN_08012bda(param_1,uVar1);
  do {
    iVar2 = FUN_08012aae(param_1,0x40);
  } while (iVar2 == 0);
  return;
}


// 08019d1e

void FUN_08019d1e(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_080164e4(0,5,7);
  uVar1 = FUN_080164e4(uVar1,0,7);
  uVar1 = FUN_080164e4(uVar1,param_2 | 0x80,7);
  uVar1 = FUN_080164e4(uVar1,param_3 >> 0x18,7);
  uVar1 = FUN_080164e4(uVar1,(param_3 & 0xffffff) >> 0x10,7);
  uVar1 = FUN_080164e4(uVar1,(param_3 & 0xffff) >> 8,7);
  uVar1 = FUN_080164e4(uVar1,param_3 & 0xff,7);
  FUN_08012a28(param_1,0x40);
  FUN_08012bda(param_1,5);
  do {
    iVar2 = FUN_08012aae(param_1,0x40);
  } while (iVar2 == 0);
  FUN_08012bda(param_1,0);
  do {
    iVar2 = FUN_08012aae(param_1,0x40);
  } while (iVar2 == 0);
  FUN_08012bda(param_1,param_2 | 0x80);
  do {
    iVar2 = FUN_08012aae(param_1,0x40);
  } while (iVar2 == 0);
  FUN_08012bda(param_1,(int)param_3 >> 0x18 & 0xffff);
  do {
    iVar2 = FUN_08012aae(param_1,0x40);
  } while (iVar2 == 0);
  FUN_08012bda(param_1,(int)param_3 >> 0x10 & 0xffff);
  do {
    iVar2 = FUN_08012aae(param_1,0x40);
  } while (iVar2 == 0);
  FUN_08012bda(param_1,(param_3 & 0xffffff) >> 8);
  do {
    iVar2 = FUN_08012aae(param_1,0x40);
  } while (iVar2 == 0);
  FUN_08012bda(param_1,param_3 & 0xff);
  do {
    iVar2 = FUN_08012aae(param_1,0x40);
  } while (iVar2 == 0);
  FUN_08012bda(param_1,uVar1);
  do {
    iVar2 = FUN_08012aae(param_1,0x40);
  } while (iVar2 == 0);
  return;
}


// 08019e50

void FUN_08019e50(undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*DAT_08019e90 == '\0') {
    FUN_08011984(DAT_08019e94,0x800);
    FUN_0801451c(DAT_08019e9c,&DAT_08019e98,param_1);
    uVar2 = FUN_0801022c(DAT_08019e9c);
    puVar1 = DAT_08019ea0;
    *DAT_08019ea0 = uVar2;
    FUN_08015bac(DAT_08019e9c,*puVar1 & 0xff);
    *DAT_08019ea0 = 0;
  }
  return;
}



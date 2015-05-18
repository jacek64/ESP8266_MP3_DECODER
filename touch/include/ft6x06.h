#ifndef FT6X06_H
#define FT6X06_H

#include "esp_common.h"


#define FT6206_ADDR				0x38
#define FT6206_G_FT5201ID		0xA8
#define FT6206_REG_NUMTOUCHES	0x02

#define FT6206_NUM_X			0x33
#define FT6206_NUM_Y			0x34

#define FT6206_REG_MODE			0x00
#define FT6206_REG_CALIBRATE	0x02
#define FT6206_REG_TD_STATUS	0x02
#define FT6206_REG_P1_XH		0x03
#define FT6206_REG_P1_XL		0x04
#define FT6206_REG_P1_YH		0x05
#define FT6206_REG_P1_YL		0x06
#define FT6206_REG_P2_XH		0x09
#define FT6206_REG_P2_XL		0x0A
#define FT6206_REG_P2_YH		0x0B
#define FT6206_REG_P2_YL		0x0C

#define FT6206_REG_WORKMODE		0x00
#define FT6206_REG_FACTORYMODE	0x40
#define FT6206_REG_TH_GROUP		0x80
#define FT6206_REG_POINTRATE	0x88
#define FT6206_REG_FIRMVERS		0xA6
#define FT6206_REG_CHIPID		0xA3
#define FT6206_REG_VENDID		0xA8

#define FT6206_DEFAULT_THRESHOLD 128

int ICACHE_FLASH_ATTR ft6x06Init();
void ICACHE_FLASH_ATTR ft6x06SetSens(int sens);
int ICACHE_FLASH_ATTR ft6x06GetTouch(int *x, int *y);

#endif
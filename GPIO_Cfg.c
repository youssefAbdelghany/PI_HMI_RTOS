#include "GPIO.h"
#include "GPIO_Cfg.h"
const GPIO_CfgType GPIO_ConfigParam [GPIO_GROUPS_NUMBER] =
{
	{
		0x00,1<<0,
		0xff,0,0,
		0x00,
		0x00,0x00,0x00,
		0x00,0x00,0x00,
		0xff,
		0
	},
    {
        0x00,1<<1,
        0xff,0,0,
        0xff,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xff,
        0
    },
    {
        0x01,1<<0,
        0xff,0,0,
        0x00,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xff,
        0
    },
    {
        0x01,1<<1,
        0xff,0,0,
        0xff,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xff,
        0
    },
    {
        0x03,1<<6,
        0xff,0,0,
        0x00,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xff,
        0
    },
    {
        0x03,1<<7,
        0xff,0,0,
        0xff,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xff,
        0
    },
    {
        0x02,1<<6,
        0xff,0,0,
        0x00,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xff,
        0
    },
    {
        0x02,1<<7,
        0xff,0,0,
        0xff,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xff,
        0
    },
    {
        0x02,1<<4,
        0xff,0,0,
        0x00,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xff,
        0
    },
    {
        0x02,1<<5,
        0xff,0,0,
        0xff,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xff,
        0
    },
    {
        0x04,1<<4,
        0xff,0,0,
        0x00,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xff,
        0
    },
    {
        0x04,1<<5,
        0xff,0,0,
        0xff,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xff,
        0
    },
    {
        0x03,1<<4,
        0xff,0,0,
        0x00,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xff,
        0
    },
    {
        0x03,1<<5,
        0xff,0,0,
        0xff,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xff,
        0
    },
    {
        0x04,1<<0,
        0xff,0,0,
        0x00,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xff,
        0
    },
    {
        0x04,1<<1,
        0xff,0,0,
        0xff,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xff,
        0
    },
    {
        0x05,1<<0,
        0x00,0,0,
        0x00,
        0xFF,0x00,0x00,
        0x00,0x00,0x00,
        0xFF,
        0
    },
    {
        0x05,1<<4,
        0x00,0,0,
        0x00,
        0xFF,0x00,0x00,
        0x00,0x00,0x00,
        0xFF,
        0
    },
    {
        0x05,1<<1,
        0x00,0,0,
        0xFF,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xFF,
        0
    },
    {
        0x05,1<<2,
        0x00,0,0,
        0xFF,
        0x00,0x00,0x00,
        0x00,0x00,0x00,
        0xFF,
        0
    }
};

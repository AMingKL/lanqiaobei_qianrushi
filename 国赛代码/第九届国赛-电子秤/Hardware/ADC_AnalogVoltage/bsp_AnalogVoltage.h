/**
  *************************************************************************************************************************
  * @file    xxxx.h
  * @author  LiuHongMing
  * @version V1.0
  * @date    2022-01-20
  * @brief   蓝桥杯嵌入式xx板xx模块头文件配置
  *************************************************************************************************************************
  * @attention
  * 
  * 
  * 
  *************************************************************************************************************************
  */


/* Define to prevent recursive inclusion --------------------------------------------------------------------------------*/
#ifndef __BSP_ANALOGVOLTAGE_H
#define	__BSP_ANALOGVOLTAGE_H

/* Includes -------------------------------------------------------------------------------------------------------------*/
#include "stm32f10x.h"
#include "bsp_adc.h" 
/* 定义 -----------------------------------------------------------------------------------------------------------------*/
#define VRP5 0
#define VRP6 1

/* 提供给其他C文件调用的函数 --------------------------------------------------------------------------------------------*/
extern uint16_t Get_AnalogVoltage(uint8_t VRPx);
#endif /* __BSP_ANALOGVOLTAGE_H */

/*****************************************************END OF FILE*********************************************************/	

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
#ifndef __BSP_DS18B20_H_
#define	__BSP_DS18B20_H_

/* Includes -------------------------------------------------------------------------------------------------------------*/
#include "stm32f10x.h"

/* 定义 -----------------------------------------------------------------------------------------------------------------*/
#define OW_DIR_OUT() 	mode_output1()
#define OW_DIR_IN() 	mode_input1()
#define OW_OUT_LOW() 	(GPIO_ResetBits(GPIOA,GPIO_Pin_6))
#define OW_GET_IN()  	(GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_6))

#define OW_SKIP_ROM 		  0xCC
#define DS18B20_CONVERT   0x44
#define DS18B20_READ 		  0xBE

/* 提供给其他C文件调用的函数 --------------------------------------------------------------------------------------------*/
void  DS18B20_Init(void);
float DS18B20_Read(void);

#endif /* __BSP_DS18B20_H_ */

/*****************************************************END OF FILE*********************************************************/	


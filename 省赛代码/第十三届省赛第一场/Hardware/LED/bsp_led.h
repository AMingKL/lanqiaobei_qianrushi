/**
  *************************************************************************************************************************
  * @file    led.h
  * @author  刘洪明
  * @version V1.0
  * @date    2021-12-28
  * @brief   蓝桥嵌入式开发板LED配置
  *************************************************************************************************************************
  * @attention
  * 
  *	LED接口说明：
	*        LED1--PC8 
	*        LED2--PC9 
	*        LED3--PC10 
	*        LED4--PC11 
	*        LED5--PC12 
	*        LED6--PC13 
	*        LED7--PC14 
	*        LED8--PC15 
	* 573控制端LE--PD2  (573锁存引脚LE(PD2)为高电平时，LED对应IO口低电平点亮)   
	*
  * 
  *************************************************************************************************************************
  */

/* Define to prevent recursive inclusion --------------------------------------------------------------------------------*/
#ifndef _BSP_LED_H
#define _BSP_LED_H

/* Includes -------------------------------------------------------------------------------------------------------------*/
#include "stm32f10x.h"

/* 定义 -----------------------------------------------------------------------------------------------------------------*/
/* LED_GPIO端口 */

#define LED_ALL (GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11|GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15)

#define LED1 GPIO_Pin_8
#define LED2 GPIO_Pin_9
#define LED3 GPIO_Pin_10
#define LED4 GPIO_Pin_11
#define LED5 GPIO_Pin_12
#define LED6 GPIO_Pin_13
#define LED7 GPIO_Pin_14
#define LED8 GPIO_Pin_15

/* LED亮灭宏定义 */
#define ON  1
#define OFF 0

#define BEEP_ON()	GPIO_ResetBits(GPIOB,GPIO_Pin_4)
#define BEEP_OFF()  GPIO_SetBits(GPIOB,GPIO_Pin_4)

/* 提供给其他C文件调用的函数 --------------------------------------------------------------------------------------------*/
void LED_Init(void);                  /* LED初始化函数 */
void LED_Control(u16 led, u8 state);  /*  LED控制函数  */  
void LED_Toggle(uint8_t LEDx);
void LED_ALL_OFF(void);             	/*  LED全灭函数  */

void Buzzer_Init(void);

#endif   /*_BSP_LED_H*/

/*****************************************************END OF FILE*********************************************************/	

#ifndef __OLED_H
#define __OLED_H			  	 
//#include "sys.h"
#include "stm32f1xx_hal.h"
  /**************************************************************************
���ߣ�ƽ��С��֮��
�ҵ��Ա�С�꣺http://shop114407458.taobao.com/
**************************************************************************/
//-----------------OLED�˿ڶ���----------------
#define OLED_RST_Clr() HAL_GPIO_WritePin(GPIOC, GPIO_PIN_10, GPIO_PIN_RESET)   //RST
#define OLED_RST_Set() HAL_GPIO_WritePin(GPIOC, GPIO_PIN_10, GPIO_PIN_SET)   //RST

#define OLED_RS_Clr() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_RESET)    //DC
#define OLED_RS_Set() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET)    //DC

#define OLED_SCLK_Clr()  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, GPIO_PIN_RESET)  //SCL
#define OLED_SCLK_Set()  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, GPIO_PIN_SET)   //SCL

#define OLED_SDIN_Clr()  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, GPIO_PIN_RESET)   //SDA
#define OLED_SDIN_Set()  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, GPIO_PIN_SET)   //SDA

#define OLED_CMD  0	//д����
#define OLED_DATA 1	//д����
//OLED�����ú���
void OLED_WR_Byte(uint8_t dat,uint8_t cmd);	    
void OLED_Display_On(void);
void OLED_Display_Off(void);
void OLED_Refresh_Gram(void);		   				   		    
void OLED_Init(void);
void OLED_Clear(void);
void OLED_DrawPoint(uint8_t x,uint8_t y,uint8_t t);
void OLED_ShowChar(uint8_t x,uint8_t y,uint8_t chr,uint8_t size,uint8_t mode);
void OLED_ShowNumber(uint8_t x,uint8_t y,uint32_t num,uint8_t len,uint8_t size);
void OLED_ShowString(uint8_t x,uint8_t y,const uint8_t	*p);


#endif  


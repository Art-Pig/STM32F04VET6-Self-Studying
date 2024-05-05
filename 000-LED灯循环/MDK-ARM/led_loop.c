#include "led_loop.h" 



void led_loop(void){
	
	char num = 0;

	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11
                          |GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15, GPIO_PIN_SET);
	
		
		
	switch(num){
		
		case 0:HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, GPIO_PIN_RESET),HAL_Delay(250),num++;
		
		case 1:HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, GPIO_PIN_RESET),HAL_Delay(250),num++;
		
		case 2:HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, GPIO_PIN_RESET),HAL_Delay(250),num++;
		
		case 3:HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, GPIO_PIN_RESET),HAL_Delay(250),num++;
		
		case 4:HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, GPIO_PIN_RESET),HAL_Delay(250),num++;
		
		case 5:HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_RESET),HAL_Delay(250),num++;
		
		case 6:HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, GPIO_PIN_RESET),HAL_Delay(250),num++;
		
		case 7:HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_RESET),HAL_Delay(250),num++;
		
		case 8:HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11
                          |GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15, GPIO_PIN_SET),HAL_Delay(250),num=0;break;
		
		default:break;
		
	}

}


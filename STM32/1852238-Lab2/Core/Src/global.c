/*
 * global.c
 *
 *  Created on: Nov 5, 2022
 *      Author: ASUS
 */

#include "global.h"

int state = 0;
//Display number on LED SEG
void display7SEG0(int num) {
	  switch(num) {
	  case 0:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		  break;
	  case 1:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		  break;
	  case 3:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		  break;
	  case 4:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		  break;
	  case 5:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		  break;
	  case 6:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		  break;
	  case 7:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		  break;
	  case 8:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		  break;
	  case 9:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		  break;
	  }
 }


//INIT Clock variables
const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1,2,0,3};
int hour = 0;
int min = 0;
int sec = 0;
//Update Clock Buffer  = Update clock array
void updateClockBuffer() {
	led_buffer[0] = hour/10;
	led_buffer[1] = hour%10;
	led_buffer[2] = min/10;
	led_buffer[3] = min%10;
}
//Update LED SEG
void update7SEG(int index) {
	switch (index) {
	case 0: //Display led_buffer[0] on SEG0
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		display7SEG0(led_buffer[0]);
		break;
	case 1: //Display led_buffer[1] on EN1
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		display7SEG0(led_buffer[1]);
		break;
	case 2: //Display led_buffer[2] on EN2
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		display7SEG0(led_buffer[2]);
		break;
	case 3: //Display led_buffer[3] on EN3
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		display7SEG0(led_buffer[3]);
		break;
	}
}

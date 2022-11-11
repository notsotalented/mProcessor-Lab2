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


//Display LED Matrix
const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;

void updateCOLMatrix(int col_buffer[8]) {
	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, col_buffer[0]);
	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, col_buffer[1]);
	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, col_buffer[2]);
	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, col_buffer[3]);
	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, col_buffer[4]);
	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, col_buffer[5]);
	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, col_buffer[6]);
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, col_buffer[7]);
}

void updateROWMatrix(int row_buffer[8]) {
	HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, row_buffer[0]);
	HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, row_buffer[1]);
	HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, row_buffer[2]);
	HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, row_buffer[3]);
	HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, row_buffer[4]);
	HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, row_buffer[5]);
	HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, row_buffer[6]);
	HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, row_buffer[7]);
}

void updateLEDMatrix(int index, int incre) {
	switch (index) {
	case 0: {
		int col_buffer[8] = {1,1,1,1,1,1,1,1}; //COLUM--->ASC
		col_buffer[index+incre] = 0;
		int row_buffer[8] = {1,1,1,1,1,1,1,1}; //ROW \/ ASC
		updateCOLMatrix(col_buffer);
		updateROWMatrix(row_buffer);
		break;
	}
	case 1: {
		int col_buffer[8] = {1,1,1,1,1,1,1,1}; //COLUM--->ASC
		col_buffer[index+incre] = 0;
		int row_buffer[8] = {1,1,0,0,0,1,1,1}; //ROW \/ ASC
		updateCOLMatrix(col_buffer);
		updateROWMatrix(row_buffer);
		break;
	}
	case 2: {
		int col_buffer[8] = {1,1,1,1,1,1,1,1}; //COLUM--->ASC
		col_buffer[index+incre] = 0;
		int row_buffer[8] = {1,0,0,0,0,0,1,1}; //ROW \/ ASC
		updateCOLMatrix(col_buffer);
		updateROWMatrix(row_buffer);
		break;
	}
	case 3: {
		int col_buffer[8] = {1,1,1,1,1,1,1,1}; //COLUM--->ASC
		col_buffer[index+incre] = 0;
		int row_buffer[8] = {1,1,0,0,0,0,0,1}; //ROW \/ ASC
		updateCOLMatrix(col_buffer);
		updateROWMatrix(row_buffer);
		break;
	}
	case 4: {
		int col_buffer[8] = {1,1,1,1,1,1,1,1}; //COLUM--->ASC
		col_buffer[index+incre] = 0;
		int row_buffer[8] = {1,1,0,0,0,0,0,1}; //ROW \/ ASC
		updateCOLMatrix(col_buffer);
		updateROWMatrix(row_buffer);
		break;
	}
	case 5: {
		int col_buffer[8] = {1,1,1,1,1,1,1,1}; //COLUM--->ASC
		col_buffer[index+incre] = 0;
		int row_buffer[8] = {1,0,0,0,0,0,1,1}; //ROW \/ ASC
		updateCOLMatrix(col_buffer);
		updateROWMatrix(row_buffer);
		break;
	}
	case 6: {
		int col_buffer[8] = {1,1,1,1,1,1,1,1}; //COLUM--->ASC
		col_buffer[index+incre] = 0;
		int row_buffer[8] = {1,1,0,0,0,1,1,1}; //ROW \/ ASC
		updateCOLMatrix(col_buffer);
		updateROWMatrix(row_buffer);
		break;
	}
	case 7: {
		int col_buffer[8] = {1,1,1,1,1,1,1,1}; //COLUM--->ASC
		col_buffer[index+incre] = 0;
		int row_buffer[8] = {1,1,1,1,1,1,1,1}; //ROW \/ ASC
		updateCOLMatrix(col_buffer);
		updateROWMatrix(row_buffer);
		break;
	}
	default: {
		int col_buffer[8] = {1,1,1,1,1,1,1,1}; //COLUM--->ASC
		int row_buffer[8] = {1,1,1,1,1,1,1,1}; //ROW \/ ASC
		updateCOLMatrix(col_buffer);
		updateROWMatrix(row_buffer);
		break;
	}
	}
}

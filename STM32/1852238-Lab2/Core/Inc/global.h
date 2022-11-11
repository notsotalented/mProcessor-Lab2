/*
 * global.h
 *
 *  Created on: Nov 5, 2022
 *      Author: ASUS
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "main.h"

//INIT time variables
extern int hour;
extern int min;
extern int sec;

//Display function
void display7SEG0(int num);

void update7SEG(int index);

void updateClockBuffer();

void updateCOLMatrix(int col_buffer[8]);

void updateROWMatrix(int row_buffer[8]);

void updateLEDMatrix(int index, int incre);

#endif /* INC_GLOBAL_H_ */

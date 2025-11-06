/*
 * timer.h
 *
 *  Created on: Oct 16, 2025
 *      Author: anhch
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_
#include <button.h>
#include "main.h"
#include "display.h"


extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void timerRun();
void HAL_TIM_PeriodElapsedCallback (TIM_HandleTypeDef *htim);


#endif /* INC_TIMER_H_ */

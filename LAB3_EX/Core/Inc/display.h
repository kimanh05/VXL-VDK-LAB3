#ifndef INC_DISPLAY_H_
#define INC_DISPLAY_H_

#include "main.h"
#include "stm32f1xx_hal.h"

void display_init(void);
void display_update(int);
void display_setNumber(int num1, int num2);

#endif /* INC_DISPLAY_H_ */

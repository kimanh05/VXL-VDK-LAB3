#ifndef INC_FSM_H_
#define INC_FSM_H_

#include <button.h>
#include "main.h"
#include "timer.h"
#include "display.h"

#define INIT           0
#define AUTO_R1_G2     1
#define AUTO_R1_Y2     2
#define AUTO_G1_R2     3
#define AUTO_Y1_R2     4

#define MODE_1         0
#define MODE_2         1
#define MODE_3         2
#define MODE_4		   3

extern int status;
extern int mode;

void fsm_auto_2way_run(void);

#endif /* INC_FSM_H_ */

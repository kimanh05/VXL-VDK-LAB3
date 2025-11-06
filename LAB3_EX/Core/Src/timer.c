#include "timer.h"
#define TICK 10

int timer1_flag = 0;
int timer2_flag = 0;
static int timer1_counter = 0;
static int timer2_counter = 0;
void setTimer1(int duration_ms) {
	timer1_counter = duration_ms / TICK;
	timer1_flag = 0;
}

void setTimer2(int duration_ms) {
	timer2_counter = duration_ms / TICK;
	timer2_flag = 0;
}

void timerRun(void) {
	if (timer1_counter > 0) {
		timer1_counter--;
		if (timer1_counter <= 0) {
			timer1_flag = 1;
		}
	}
	if (timer2_counter > 0) {
		timer2_counter--;
		if (timer2_counter <= 0) {
			timer2_flag = 1;
		}
	}
}

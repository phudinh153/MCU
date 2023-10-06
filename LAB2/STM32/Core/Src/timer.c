#include "timer.h"

extern int timer0_counter;
extern int timer0_flag;
extern int TIMER_CYCLE;

void setTimer0 ( int duration ){
	timer0_counter = duration / TIMER_CYCLE ;
}


void timer_run (){
	if( timer0_counter > 0){
		timer0_counter --;
		if( timer0_counter == 0) timer0_flag = 1;
	}
}

int checkFlag0(){
	if (timer0_flag == 1) {
		timer0_flag = 0;
		return 1;
	}
	return 0;
}

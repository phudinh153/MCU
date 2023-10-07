#include "timer.h"

extern int timer0_counter;
extern int timer0_flag;
extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer1_counter;
extern int timer2_counter;
extern int timer3_counter;
extern int TIMER_CYCLE;

void setTimer0 ( int duration ){
	timer0_counter = duration / TIMER_CYCLE ;
}

void setTimer1 ( int duration ) {
	timer1_counter = duration / TIMER_CYCLE ;
	timer1_flag = 0;
}

void setTimer2 ( int duration ) {
	timer2_counter = duration / TIMER_CYCLE ;
	timer2_flag = 0;
}

void setTimer3 ( int duration ) {
	timer3_counter = duration / TIMER_CYCLE ;
	timer3_flag = 0;
}

void timer_run (){
	if( timer0_counter > 0){
		timer0_counter --;
		if( timer0_counter == 0) timer0_flag = 1;
	}
	if ( timer1_counter > 0) {
			timer1_counter--;
			if ( timer1_counter == 0) timer1_flag = 1;
		}

	if ( timer2_counter > 0) {
		timer2_counter--;
		if ( timer2_counter == 0) timer2_flag = 1;
	}

	if ( timer3_counter > 0) {
		timer3_counter--;
		if ( timer3_counter == 0) timer3_flag = 1;
	}
}

int checkFlag0(){
	if (timer0_flag == 1) {
		timer0_flag = 0;
		return 1;
	}
	return 0;
}

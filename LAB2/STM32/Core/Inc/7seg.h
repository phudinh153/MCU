#include "main.h"
#ifndef INC_7SEG_H_
#define INC_7SEG_H_

void Display7Seg(int num);
void Display7SegS(int num);
typedef enum State {One, Two, Three, Four} EState;
void tswitch (EState state);
void update7SEG ( int index );
void updateClockBuffer(int hour, int minute);

#endif /* INC_7SEG_H_ */

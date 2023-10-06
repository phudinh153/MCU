#include "7seg.h"

void Display7Seg(int num){
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, RESET);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, SET);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, SET);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, SET);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, SET);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, RESET);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, SET);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, SET);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, SET);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, SET);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, SET);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, SET);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, SET);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, SET);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, RESET);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, SET);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, SET);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, SET);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, RESET);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, SET);
		HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
		HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
		break;
	default:
		break;
	}
}

void tswitch (EState state) {
	if (state == One) {
		HAL_GPIO_WritePin(EN_0_GPIO_Port,EN_0_Pin, 0);
		HAL_GPIO_WritePin(EN_1_GPIO_Port, EN_1_Pin, 1);
		HAL_GPIO_WritePin(EN_2_GPIO_Port, EN_2_Pin, 1);
		HAL_GPIO_WritePin(EN_3_GPIO_Port, EN_3_Pin, 1);
	}
	if (state == Two){
		HAL_GPIO_WritePin(EN_0_GPIO_Port, EN_0_Pin, 1);
		HAL_GPIO_WritePin(EN_1_GPIO_Port, EN_1_Pin, 0);
		HAL_GPIO_WritePin(EN_2_GPIO_Port, EN_2_Pin, 1);
		HAL_GPIO_WritePin(EN_3_GPIO_Port, EN_3_Pin, 1);
	}
	if (state == Three){
			HAL_GPIO_WritePin(EN_0_GPIO_Port, EN_0_Pin, 1);
			HAL_GPIO_WritePin(EN_1_GPIO_Port, EN_1_Pin, 1);
			HAL_GPIO_WritePin(EN_2_GPIO_Port, EN_2_Pin, 0);
			HAL_GPIO_WritePin(EN_3_GPIO_Port, EN_3_Pin, 1);
		}
	if (state == Four){
			HAL_GPIO_WritePin(EN_0_GPIO_Port, EN_0_Pin, 1);
			HAL_GPIO_WritePin(EN_1_GPIO_Port, EN_1_Pin, 1);
			HAL_GPIO_WritePin(EN_2_GPIO_Port, EN_2_Pin, 1);
			HAL_GPIO_WritePin(EN_3_GPIO_Port, EN_3_Pin, 0);
		}
}

const int MAX_LED = 4;
int led_buffer [4] = {1, 2, 3, 4};
void update7SEG ( int index ){
	int flag = index%4;
	switch (flag){
	case 0:
		tswitch(One);
		Display7Seg(led_buffer[flag]);
		flag = 1;
		break;
	 case 1:
		tswitch(Two);
		Display7Seg(led_buffer[flag]);
		flag = 2;
		break ;
	 case 2:
		tswitch(Three);
		Display7Seg(led_buffer[flag]);
		flag = 3;
		break ;
	 case 3:
		tswitch(Four);
		Display7Seg(led_buffer[flag]);
		flag = 4;
		break ;
	 default :
		tswitch(One);
		Display7Seg(led_buffer[index]);
		break ;
	}
}

void updateClockBuffer(int hour, int minute){
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;
	led_buffer[2] = minute / 10;
	led_buffer[3] = minute % 10;
}

/*
 * RGBState.c
 *
 *  Created on: Jun 3, 2020
 *      Author: Tan
 */

#ifndef RGBSTATE_RGBSTATE_C_
#define RGBSTATE_RGBSTATE_C_
#include "RGBState.h"
uint16_t RGB_TimerCount=0;
static RGB_t RGBState;
void RGBControl(enum ledState GREEN,enum ledState BLUE,enum ledState RED){
	ledControl(LEDGREEN,GREEN);
	ledControl(LEDBLUE,BLUE);
	ledControl(LEDRED,RED);
}
void initRGBState(void){
	RGBState=S_GREEN;
	RGBControl(OFF,OFF,OFF);
}
void RGBMachineUpdate(void){
	switch (RGBState){
		case S_GREEN:
			RGB_TimerCount=15000;
			RGBState=S_GREEN_WAIT;
			break;
		case S_GREEN_WAIT:
			if(RGB_TimerCount==0) RGBState=S_BLUE;
			break;
		case S_BLUE:
			RGB_TimerCount=3000;
			RGBState=S_BLUE_WAIT;
			break;
		case S_BLUE_WAIT:
			if(RGB_TimerCount==0) RGBState=S_RED;
			break;
		case S_RED:
			RGB_TimerCount=15000;
			RGBState=S_RED_WAIT;
			break;
		case S_RED_WAIT:
			if(RGB_TimerCount==0) RGBState=S_GREEN;
			break;
	}
	switch(RGBState){
		case S_GREEN:
		case S_GREEN_WAIT:
			 RGBControl(ON,OFF,OFF);
			 break;
		case S_BLUE:
		case S_BLUE_WAIT:
			 RGBControl(OFF,ON,OFF);
			 break;
		case S_RED:
		case S_RED_WAIT:
			 RGBControl(OFF,OFF,ON);
			 break;

	}
}
#endif /* RGBSTATE_RGBSTATE_C_ */

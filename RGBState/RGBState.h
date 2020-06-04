/*
 * RGBState.h
 *
 *  Created on: Jun 3, 2020
 *      Author: Tan
 */

#ifndef RGBSTATE_RGBSTATE_H_
#define RGBSTATE_RGBSTATE_H_
#include "../includes.h"
typedef enum
{
	S_GREEN,
	S_GREEN_WAIT,
	S_BLUE,
	S_BLUE_WAIT,
	S_RED,
	S_RED_WAIT
} RGB_t;
void RGBControl(enum ledState GREEN,enum ledState BLUE,enum ledState RED);
void RGBMachineUpdate(void);
void SysTickIntHandler(void);
void initRGBState(void);



#endif /* RGBSTATE_RGBSTATE_H_ */

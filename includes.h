/*
 * includes.h
 *
 *  Created on: May 29, 2020
 *      Author: Tan
 */

#ifndef INCLUDES_H_
#define INCLUDES_H_

//thu vien ho tro ve bool, int, string va toan hoc math
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

//thu vien driver API
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"
#include "driverlib/pin_map.h"
#include "driverlib/timer.h"
#include "driverlib/interrupt.h"
#include "driverlib/uart.h"
#include "driverlib/systick.h"
#include "utils/scheduler.h"

//thu vien ho tro phan cung
#include "inc/hw_ints.h"
#include "inc/hw_gpio.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"


//Thu vien tu dinh nghia
#include"LED/LED.h"
#include"SWITCH/SWITCH.h"
#include "RGBState/RGBState.h"
#include "TASK/Task1.h"
#include "TASK/Task2.h"
#include "TASK/Task3.h"
#include "Scheduler/scheduler.h"
extern uint16_t RGB_TimerCount;


#endif /* INCLUDES_H_ */

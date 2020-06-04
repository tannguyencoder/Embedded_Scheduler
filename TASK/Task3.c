/*
 * Task3.c
 *
 *  Created on: Jun 4, 2020
 *      Author: Tan
 */

#ifndef TASK_TASK3_C_
#define TASK_TASK3_C_
#include "../includes.h"
#include "Task3.h"

void Task3(void *myobject){
	Task3Update();
}
void Task3Update(void){
	if(switchState(3)==PRESSED){
		RGB_TimerCount+=500;
	}
}


#endif /* TASK_TASK3_C_ */

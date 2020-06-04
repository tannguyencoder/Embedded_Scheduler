/*
 * Task2.c
 *
 *  Created on: Jun 4, 2020
 *      Author: Tan
 */

#include "../includes.h"
#include "Task2.h"

void Task2(void *myobject)
{
	Task2Update();
}
void Task2Update(void)
{
	if(switchState(1) == PRESSED)
	{
		RGB_TimerCount = 0;
	}

}



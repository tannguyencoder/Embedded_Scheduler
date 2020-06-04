/*
 * Task.c
 *
 *  Created on: Jun 4, 2020
 *      Author: Tan
 */

#include "../includes.h"
tSchedulerTask     g_psSchedulerTable[3] = {{Task1,0,50,0,1},{Task2,(void*)0,50,1,1},{Task3,(void*)0,50,2,1}};
uint32_t g_ui32SchedulerNumTasks = 3;

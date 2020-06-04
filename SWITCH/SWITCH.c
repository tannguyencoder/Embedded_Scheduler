/*
 * SWITCH.c
 *
 *  Created on: Jun 2, 2020
 *      Author: Tan
 */

#ifndef SWITCH_SWITCH_C_
#define SWITCH_SWITCH_C_
#include "../includes.h"
#include "SWITCH.h"
void        switchInit(void)
{
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    HWREG(GPIO_PORTF_BASE + GPIO_O_LOCK) = GPIO_LOCK_KEY;
    HWREG(GPIO_PORTF_BASE + GPIO_O_CR) |= 0x01;
    HWREG(GPIO_PORTF_BASE + GPIO_O_LOCK) = 0;
    GPIOPinTypeGPIOInput(SW_GPIO_BASE,SW1|SW2);
    GPIOPadConfigSet(SW_GPIO_BASE,SW1|SW2,GPIO_STRENGTH_8MA,GPIO_PIN_TYPE_STD_WPU);
}
sw_t  switchState(int SWnumber)
{
    switch    (SWnumber)
        {
            case 1:
                if (GPIOPinRead(SW_GPIO_BASE, SW1) == 0){
                	while(GPIOPinRead(SW_GPIO_BASE, SW1) == 0){}
                	return PRESSED;
                }
                else return RELEASED;

            case 2:
                if (GPIOPinRead(SW_GPIO_BASE, SW2) == 0){
                	while(GPIOPinRead(SW_GPIO_BASE, SW1) == 0){}
                	return PRESSED;
                }
                else return RELEASED;

        }
}



#endif /* SWITCH_SWITCH_C_ */

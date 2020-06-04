/*
 * LED.h
 *
 *  Created on: Jun 2, 2020
 *      Author: Tan
 */

#ifndef LED_LED_H_
#define LED_LED_H_

#define LED_GPIO_BASE       GPIO_PORTF_BASE


enum ledNumber {LEDRED = 0, LEDBLUE, LEDGREEN};
enum ledState  {OFF=0,ON=1};
void ledInit(void);
void ledControl(enum ledNumber led, enum ledState State);

#endif /* LED_LED_H_ */

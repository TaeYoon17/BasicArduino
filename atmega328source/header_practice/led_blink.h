/*
 * led_blink.h
 *
 * Created: 2025-02-04 오후 11:23:03
 *  Author: USER
 */ 


#ifndef LED_BLINK_H_
#define LED_BLINK_H_

#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>

#define LED_DELAY_TIME 100

void led_blink();



#endif /* LED_BLINK_H_ */
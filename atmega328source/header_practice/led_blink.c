/*
 * led_blink.c
 *
 * Created: 2025-02-04 오후 11:23:30
 *  Author: USER
 */ 
#include "led_blink.h"

void led_blink(){
	PORTB |= 0b00100000;
	_delay_ms(LED_DELAY_TIME);
	PORTB = ~PORTB & 0b00100000;
	_delay_ms(LED_DELAY_TIME);
}
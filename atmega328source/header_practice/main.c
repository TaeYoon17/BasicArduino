/*
 * header_practice.c
 *
 * Created: 2025-02-04 오후 11:06:37
 * Author : USER
 */ 

#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "led_blink.h"

#define LED_DELAY_TIME 100

#define sbi(reg,n) (reg |= (1<<n))
#define cbi(reg,n) (reg &= ~(1<<n))

int main(void)
{
	// DDRB -> B 계층 핀들 입,출력 결정
	// PORTB -> B 계층 핀들 디지털 0,1 결정
	
	DDRB = 0xFF; // 모든게 출력임
	PORTB = 0x00; // 현재 0번 포트
	sei();
    /* Replace with your application code */
    while (1) 
    {
		// PB5
		led_blink();
    }
}


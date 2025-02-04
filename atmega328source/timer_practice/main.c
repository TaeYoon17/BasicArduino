#define F_CPU 800000UL

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#define PB5 PINB5

ISR(TIMER0_OVF_vect) {
	// TCNT0 = 0x00;  // Not necessary, it is done by hardware
	//PORTC = ~(1<<PINC4);
	PORTB &= ~(1<<PB5);
}

int main(void) {
	//define inputs and outputs
	//DDRC = (1<<PINC4);
	DDRB |= (1<<PB5);
	
	// TCNT0 = 0x00;    // Autoset to zero after initialisation
	// TCCR0A = 0x00;   // Autoset at startup
	
	// Timer 0
	// Mode: Overflow, Interrupt
	// Prescaler: /64
	// 타이머 레지스터를 등록한 것인가?
	TCCR0B = (1<<CS01) | (1<<CS00);
	TIMSK0 = (1<<TOIE0);
	
	sei(); // set global interrupts
	
	while (1) {
		// PORTC |= (1<<PINC4); // is done in interrupt
		PORTB |= (1<<PB5);
	}
}

#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>

#define LED_DELAY_TIME	(100) //ms
int OUTPUT = 1,INPUT = 0,HIGH=1,LOW=0;
void pinMode(int a,int b){ }
void digitalWrite(int a,int b){}

void arduino_setup(){
	
	pinMode(2,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
	
	pinMode(5,INPUT);
	pinMode(6,INPUT);
}
void arduino_loop(){
	digitalWrite(2,HIGH);
	digitalWrite(3,LOW);
	digitalWrite(4,HIGH);
}

void convertToAtmega(){
	DDRB = 0x1C; // 0b00011100;
	PORTB = 0x00;
	while(1){
		// PORTB = 0X14;
		PORTB |= 0x02;
		PORTB = (~PORTB) & 0x03;
		PORTB |= 0x10;
	}
}
int main(void) {
	
	DDRB = 0xFF; // PB[7:0]을 모두 출력으로 설정한다. pinMode(1,OUTPUT);
	PORTB = 0x00; // PB[7:0]에 모두 0을 출력한다. (=LED가 꺼진다) digitalWrite(1,LOW);
	while (1) {
		PORTB= 0xFF; // PB[7:0]에 모두 1을 출력한다. (=LED가 켜진다)
		_delay_ms(LED_DELAY_TIME); // LED_DELAY_TIME 만큼 기다린다.

		PORTB= 0x00; // PB[7:0]에 모두 0을 출력한다. (=LED가 꺼진다)
		_delay_ms(LED_DELAY_TIME); // LED_DELAY_TIME 만큼 기다린다.
		// 무한 루프로 계속 반복한다.
	}
	return (0);
}
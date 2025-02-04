#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>

#define sbi(REG, n) (REG |=  (1<<n))
#define cbi(REG, n) (REG &= ~(1<<n))

#define LED_DIR_PORT  (DDRB)
#define LED_OUT_PORT  (PORTB)

#define LED_1_PIN (PINB5)

#define KEY_DIR_PORT	(DDRB)
#define KEY_IN_PORT		(PINB)

#define KEY_PRESSED		(0)
#define KEY_RELEASED	(1)

#define KEY_1_PIN		(PINB7)


int main(void) {
	PINB = 0x20; // led 포트 설정
	PORTB = 0x00;
	cbi(KEY_DIR_PORT, KEY_1_PIN); // KEY는 PB7 입력 설정
	
	sbi(LED_DIR_PORT, LED_1_PIN); // LED는 PB5 출력 설정
	cbi(LED_OUT_PORT, LED_1_PIN); // LED 꺼놓고..
	
	uint8_t key_1_val= 0; // 키값을 받을 변수 하나 만들어 놓고
	uint8_t key_val = PINB & 0x80; 
	while(1) {
		//key_1_val= (KEY_IN_PORT & (1<< KEY_1_PIN)) >> KEY_1_PIN;
		key_1_val= (KEY_IN_PORT >> KEY_1_PIN);
		// 꼭 쉬프트 시켜줘야 0,1이 들어온다.
		// 그렇지 않으면 0x8?, 0x?? 값이 들어올수 있다.
		// ??는 PINB의 각 핀 상태에 따라서 달라지기 때문에 꼭 0이라고 말할수 없다.
		switch(key_1_val) {
			case KEY_PRESSED: // 0 1이 아니라 0이다. Pull-up 회로이기 때문에
			sbi(LED_OUT_PORT, LED_1_PIN);
			break;
			
			case KEY_RELEASED: // 1
			cbi(LED_OUT_PORT, LED_1_PIN);
			break;
		}
	}
	return (0);
}
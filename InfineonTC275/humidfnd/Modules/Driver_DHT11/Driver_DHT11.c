/*
 * Driver_DHT11.c
 *
 *  Created on: 2025. 2. 18.
 *      Author: USER
 */


#include "Driver_DHT11.h"
#include "Bsp.h"

// waitTime(clock 계수) -> MicroSecond * clock 계수 => 기다리는 시간
// waitTime(500) => Wait for 5 us
// fs < ps < ns < us < ms < s < m < h
void delay(uint32_t us){ waitTime(us * 100); }

void DHT11_Start(){
    IfxPort_setPinModeOutput(DHT11_PIN.port, DHT11_PIN.pinIndex, IfxPort_OutputMode_pushPull,IfxPort_OutputIdx_general);
    IfxPort_setPinLow(DHT11_PIN.port, DHT11_PIN.pinIndex);
    // wait for 18ms
    delay(18000);
    IfxPort_setPinModeInput(DHT11_PIN.port, DHT11_PIN.pinIndex, IfxPort_InputMode_noPullDevice);
}

boolean DHT11_Check_Response(){
    delay(40);
    boolean Response;
    if(!(IfxPort_getPinState(DHT11_PIN.port, DHT11_PIN.pinIndex))){
        delay(80);
        if(IfxPort_getPinState(DHT11_PIN.port, DHT11_PIN.pinIndex)) Response=TRUE;
        else Response = FALSE;
    }
    while((IfxPort_getPinState(DHT11_PIN.port, DHT11_PIN.pinIndex)));
    return Response;
}
// 8비트짜리 값 -> 1바이트
uint8_t DHT11_Read(){
    uint8_t i,j;
    for(j=0; j<8; j++){
        while(!(IfxPort_getPinState(DHT11_PIN.port, DHT11_PIN.pinIndex)));
        delay(40);
        if(!(IfxPort_getPinState(DHT11_PIN.port, DHT11_PIN.pinIndex))){
            i &= ~(1<<(7-j));
        }else{
            i |= (1<<(7-j));
        }
        while((IfxPort_getPinState(DHT11_PIN.port, DHT11_PIN.pinIndex)));
    }
    return i;
}

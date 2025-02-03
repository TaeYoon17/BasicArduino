#include <DHT11.h>
#define DHT11_PIN 4

DHT11 dht11(DHT11_PIN);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

uint8_t tmp_cnt=0,err_code=0;
int temp = 0.0f,humi = 0.0f;

void dht11_read(){
  err_code = dht11.readTemperatureHumidity(humi,temp);
  delay(DHT11::TIMEOUT_DURATION);
}

void dht11_display(){
    if(err_code != DHT11::ERROR_CHECKSUM ) {
        Serial.println("["+String(++tmp_cnt)+"] dht11(temp,humi)=("+String(temp)+","+String(humi)+")");
    }
    else {
        Serial.println("\nError No :"+String(err_code));
    }   
}

void loop() {
  // put your main code here, to run repeatedly:
  dht11_read();
  dht11_display();
}

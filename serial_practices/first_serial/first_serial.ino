void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.print("Hello Arduino\n");
  // Serial.print("안녕 아두이노..\n");
  // Serial.write(97); // a가 나온다...
  // Serial.write(0x61 + 1); // a가 나온다... -> ASCII 코드
  Serial.print("Hello ");
  Serial.write(0x75);
  Serial.write(0x84);
  Serial.write(0x89);
  
  delay(1000);
}

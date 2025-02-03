#define LED_PIN 9

uint8_t i = 0;
void setup() {
  // put your setup code here, to run once:

}
// 255 -> 5v  i / 255 * 5
void loop() {
  // put your main code here, to run repeatedly:
  for(i=0; i<255; i++){
    analogWrite(LED_PIN,i);
    Serial.print("Now Volt: " + i * 5 / 255);
    delay(10 * i);
  }
  for(i=255; i>=0; i--){
    analogWrite(LED_PIN, i);
    delay(10);
  }
}

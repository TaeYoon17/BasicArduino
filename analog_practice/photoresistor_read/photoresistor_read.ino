#define PHOTORESISTOR_PIN A1
#define LED_PIN 9
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
uint8_t val,pwm_val;
void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(PHOTORESISTOR_PIN);
  pwm_val = map(val,0,1023,0,255);
  Serial.println(pwm_val);
  analogWrite(LED_PIN,pwm_val);
}

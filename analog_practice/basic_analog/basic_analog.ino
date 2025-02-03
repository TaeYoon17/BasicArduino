
#define VR_PIN A0
#define LED_PIN 9

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}
int adc_val = 0;
int tmp_cnt = 0;
int pwm_val = 0;
void loop() {
  // put your main code here, to run repeatedly:
  adc_val = analogRead(VR_PIN);
  Serial.println("[" + String(++tmp_cnt) + "]" + String(adc_val));
  
  pwm_val = map(adc_val,0,1023,0,255);
  Serial.println("[" + String(++tmp_cnt) + "] (abc,pwm)=(" + String(adc_val) + "," + String(pwm_val) + ")");
  analogWrite(LED_PIN,pwm_val);
  

  delay(100);
}

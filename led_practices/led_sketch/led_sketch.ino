#define LED_PIN1 (3)
#define LED_PIN2 (4)
#define LED_PIN3 (5)
#define LED_PIN4 (6)
#define LED_PIN5 (7)
#define LED_DELAY_TIME (400)


uint8_t i = 0,j=0,pins[] = {LED_PIN1,LED_PIN2,LED_PIN3,LED_PIN4,LED_PIN5};
uint8_t prev1 = -1,prev2 = -1;
void setup() {
  // put your setup code here, to run once:
  for(i=0; i<5;i++){
    pinMode(pins[i],OUTPUT);
    digitalWrite(pins[i],LOW);
  }
}

void loop() {
  // 5/2 -> 2
  // 5/2 - 1 = 1
  // 5/2 - 2 = 0
  // put your main code here, to run repeatedly:
  
  for(i=0; i<=5/2; i++){
    digitalWrite(pins[5/2 - i], HIGH);
    digitalWrite(pins[4 - (5/2 - i)], HIGH);
    if(prev1!=-1) digitalWrite(prev1, LOW);
    if(prev2!=-1) digitalWrite(prev2, LOW);
    prev1 = pins[5/2 - i];prev2=pins[4 - (5/2 - i)];
    delay(LED_DELAY_TIME * (i+1) * 0.95);
  }
}

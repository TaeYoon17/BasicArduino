#define HIGH_PIN 8
#define LOW_PIN 9
void setup() {
  // put your setup code here, to run once:
  pinMode(LOW_PIN,OUTPUT);
  pinMode(HIGH_PIN,OUTPUT);
  digitalWrite(LOW_PIN,LOW);
  digitalWrite(HIGH_PIN,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
}

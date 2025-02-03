#define RED_PIN 9
#define BLUE_PIN 11
#define GREEN_PIN 10

#define KEY1 0x31
#define KEY2 0X32
#define KEY3 0x33
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RED_PIN,OUTPUT);
  pinMode(BLUE_PIN,OUTPUT);
  pinMode(GREEN_PIN,OUTPUT);
  digitalWrite(RED_PIN,LOW);
  digitalWrite(BLUE_PIN,LOW);
  digitalWrite(GREEN_PIN,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  char c = 0;
  if(Serial.available()){
    c = Serial.read();
  }
  switch(c){
    case KEY1:
      Serial.println("Red HIGH");
      digitalWrite(RED_PIN,HIGH);
      digitalWrite(BLUE_PIN,LOW);
      digitalWrite(GREEN_PIN,LOW);
      break;
    case KEY2:
    Serial.println("Blue HIGH");
      digitalWrite(RED_PIN,LOW);
      digitalWrite(BLUE_PIN,HIGH);
      digitalWrite(GREEN_PIN,LOW);
      break;
    case KEY3:
      Serial.println("Green HIGH");
      digitalWrite(RED_PIN,LOW);
      digitalWrite(BLUE_PIN,LOW);
      digitalWrite(GREEN_PIN,HIGH);
      break;
    default: break;
  }
}

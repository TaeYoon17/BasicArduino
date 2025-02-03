#define LED_PIN1 (2)
#define LED_PIN2 (3)
#define LED_PIN3 (4)
#define LED_PIN_MAX (3)
uint8_t led_pins[LED_PIN_MAX] = {LED_PIN1,LED_PIN2,LED_PIN3};
uint8_t num = 0,flag = 0;
#define KEY_1_PIN 13
#define KEY_2_PIN 12
#define KEY_PIN_MAX (2)
int key_pins[KEY_PIN_MAX] = {KEY_1_PIN,KEY_2_PIN};
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN1,OUTPUT);
  pinMode(LED_PIN2,OUTPUT);
  pinMode(LED_PIN3,OUTPUT);

  digitalWrite(LED_PIN1, LOW);
  digitalWrite(LED_PIN2, LOW);

  pinMode(KEY_1_PIN,INPUT);
  pinMode(KEY_2_PIN,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  char keys[KEY_PIN_MAX] = {0,0};
  for(int i = 0; i<KEY_PIN_MAX; i++){
    keys[i] = digitalRead(key_pins[i]);
  }
  if(keys[0] == LOW){ 
    flag = 1;
  }else if(keys[0] == HIGH && flag== 1){
    if(num < LED_PIN_MAX) digitalWrite(led_pins[num++],HIGH);
    else num++;
    flag = 0;
  }
  
  if(num % (LED_PIN_MAX+1) == 0) {
    for(int i = 0; i<LED_PIN_MAX; i++){
      digitalWrite(led_pins[i], LOW);
    }
    num = 0;
  }
  if(keys[1] == LOW){

  }

  for(int i = 0; i< LED_PIN_MAX; i++){
    
  }
}

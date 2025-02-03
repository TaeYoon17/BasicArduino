#define LED_BLUE 13
#define LED_RED 12
#define LED_INTERVAL 200

#define KEY_PIN1 (2)
#define KEY_PIN2 (3)

uint8_t key_flag1 = 0,key_flag2 = 0;
#define RGB_SIZE 3
uint8_t rgb_led[RGB_SIZE] = {9,10,11};
uint8_t cnt = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BLUE,OUTPUT);
  pinMode(LED_RED,OUTPUT);
  for(int i = 0; i<RGB_SIZE; i++) pinMode(rgb_led[i],OUTPUT);
  pinMode(KEY_PIN1,INPUT);
  pinMode(KEY_PIN2,INPUT);
  Serial.begin(9600);
}

void loop() {
  // fullColorBit();
  uint8_t key1 = digitalRead(KEY_PIN1);
  uint8_t key2 = digitalRead(KEY_PIN2);
  Serial.println(+key1,+key2);
  if(key1 == LOW){
    key_flag1 = 1;
  } else if(key1 == LOW && key_flag1){
    digitalWrite(LED_RED,LOW);
    
    digitalWrite(LED_BLUE,HIGH);
    Serial.println("RED LOW BLUE HIGH");
    key_flag1 = 0;
    
  }
  if(key2 == LOW){
    key_flag2 = 1;
  } else if(key2 == LOW && key_flag2){
    digitalWrite(LED_RED,HIGH);
    digitalWrite(LED_BLUE,LOW);
    Serial.println("RED HIGH BLUE LOW");
    key_flag2 = 0;
  }
  delay(500);
}

void fullColorBit(){
  for(int i = 0; i<RGB_SIZE; i++) digitalWrite(rgb_led[i],i == cnt ? HIGH : LOW);
  cnt = (cnt + 1) % RGB_SIZE;
  delay(1000);
}

void policeLED(){
  digitalWrite(LED_BLUE,LOW); digitalWrite(LED_RED,HIGH); delay(LED_INTERVAL);
  digitalWrite(LED_BLUE,HIGH); digitalWrite(LED_RED,LOW); delay(LED_INTERVAL);
}
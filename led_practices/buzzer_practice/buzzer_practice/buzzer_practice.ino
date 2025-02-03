#define BUZ_PIN (5)
#define INTERVAL 1000
#define DELAY_TIME (500)

#define KEY_PIN 3

#define C4_PERIOD   (1911)
#define D4_PERIOD   (1703)
#define E4_PERIOD   (1517)
#define F4_PERIOD   (1432)
#define G4_PERIOD   (1276)
#define A4_PERIOD   (1136)
#define B4_PERIOD   (1012)
#define C5_PERIOD   (956)

void setup() {
  // put your setup code here, to run once:
  pinMode(BUZ_PIN,OUTPUT);
  pinMode(KEY_PIN, INPUT);
}
// 10Hz -> 0.1sec
// 2sec -> 0.5Hz
// freq = 1 / t
void defaultLoop(){
  // put your main code here, to run repeatedly:
  digitalWrite(BUZ_PIN,HIGH); 
  delayMicroseconds(INTERVAL); // 1000microsecond = 1 millisecond = 0.01 second
  digitalWrite(BUZ_PIN,LOW);
  delayMicroseconds(INTERVAL); // 0.01 sec
  // 0.02 sec -> 50 Hz
}
bool buz_enable = false;
void loop() {
  int key_val = 0;
  while(1){
    key_val = digitalRead(KEY_PIN);
    if(key_val==LOW) {
      buz_enable = true;
    }
    else {
      buz_enable = false;
    }

    if(buz_enable == true){
      for(int i = 0; i<200; i++){
        digitalWrite(BUZ_PIN, HIGH); delayMicroseconds(C4_PERIOD);
        digitalWrite(BUZ_PIN, LOW); delayMicroseconds(C4_PERIOD);
      }

      for(int i= 0; i<200; i++) {
        digitalWrite(BUZ_PIN, HIGH); delayMicroseconds(D4_PERIOD);
        digitalWrite(BUZ_PIN, LOW); delayMicroseconds(D4_PERIOD);
      }

      for(int i= 0; i<200; i++) {
        digitalWrite(BUZ_PIN, HIGH); delayMicroseconds(E4_PERIOD);
        digitalWrite(BUZ_PIN, LOW); delayMicroseconds(E4_PERIOD);
      }            
            
      for(int i= 0; i<200; i++) {
        digitalWrite(BUZ_PIN, HIGH); delayMicroseconds(F4_PERIOD);
        digitalWrite(BUZ_PIN, LOW); delayMicroseconds(F4_PERIOD);
      }
    }
  }
}

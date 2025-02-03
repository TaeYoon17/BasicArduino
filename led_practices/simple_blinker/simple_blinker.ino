#define E_BLINK_RED 12
#define E_BLINK_BLUE 13
#define E_BLINK_YELLOW 7
#define U_BLINK_RED 9
#define U_BLINK_BLUE (10)
#define U_BLINK_YELLOW 11
#define ES 3
#define US 2
typedef struct Light{
  uint8_t r,b,y;
} Light;
typedef enum Dir{
  right = 1,up
}Dir;
Light eblink = {E_BLINK_RED, E_BLINK_BLUE , E_BLINK_YELLOW};
Light ublink = {U_BLINK_RED, U_BLINK_BLUE ,U_BLINK_YELLOW};
class Blink{
  private:
    uint8_t r,b,y;
  public:
    Blink(uint8_t r,uint8_t b, uint8_t y):r(r),b(b),y(y) { }

    void turnRed(){
      digitalWrite(r,HIGH);
      digitalWrite(y,LOW);
      digitalWrite(b,LOW);
    }
    void turnBlue(){ }
    void turnYellow() {

    }
};
void setPinMode(){
  pinMode(E_BLINK_RED,OUTPUT);
  pinMode(E_BLINK_BLUE,OUTPUT);
  pinMode(E_BLINK_YELLOW,OUTPUT);
  pinMode(U_BLINK_RED,OUTPUT);
  pinMode(U_BLINK_BLUE,OUTPUT);
  pinMode(U_BLINK_YELLOW,OUTPUT);
  pinMode(ES, INPUT);
  pinMode(US, INPUT);
}
void turnRed(Light li){
  digitalWrite(li.r,HIGH);
  digitalWrite(li.y,LOW);
  digitalWrite(li.b,LOW);
}
void turnYellow(Light li){
  digitalWrite(li.r,LOW);
  digitalWrite(li.y,HIGH);
  digitalWrite(li.b,LOW);
}
void turnBlue(Light li){
  digitalWrite(li.r,LOW);
  digitalWrite(li.y,LOW);
  digitalWrite(li.b,HIGH);
}
volatile void turnToStop(Light li){
  turnYellow(li);
  delay(1000);
  turnRed(li);
}
void turnToGo(Light li){
  turnBlue(li);
}
void changeLight(Dir dir){
  switch(dir){
    case up:
    turnToStop(eblink);
    turnToGo(ublink);
    break;
    case right:
    turnToStop(ublink);
    turnToGo(eblink);
    break;
  }
}
Dir now;
void setDefaultMode(){
  turnRed(ublink);
  turnBlue(eblink);
  now = right;
}

void setup() {
  // put your setup code here, to run once:
  setPinMode();
  setDefaultMode();
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  while(1){
  int eval = digitalRead(ES);
  int uval = digitalRead(US);
  Serial.print("eval: " + String(eval) + " uval: " + String(uval) + "\n");
  if(uval == LOW && now == right){
    now = up;
    changeLight(now);
    delay(1000);
  } else if(eval == LOW && now == up){
    now = right;
    changeLight(now);
    delay(1000);
  }
  }
}

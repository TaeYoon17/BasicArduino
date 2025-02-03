#include "SimpleTimer.h"
#define TASK_1 (2000)
#define TASK_2 (3000)
#define TASK_3 (5000)
#define LED_1_PIN (13)
#define TIMER_SEC_INTERVAL (1000)
SimpleTimer timer;
int sec=0;
void task_1(){
  Serial.print("task1 ");
}
void task_2(){
  Serial.print("task2 ");
}
void task_3(){
  Serial.print("task3 ");
}
void oneSecCallback(){
  Serial.print("[" + String(sec+1) + "]");
  sec++;
  if(sec % (TASK_1/TIMER_SEC_INTERVAL) == 0 ){
    task_1();
  }
  if(sec % (TASK_2 / TIMER_SEC_INTERVAL) == 0){
    task_2();
  }
  if(sec %(TASK_3/ TIMER_SEC_INTERVAL) == 0){
    task_3();
  }
  Serial.println();
}



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_1_PIN,OUTPUT);
  timer.setInterval(TIMER_SEC_INTERVAL, oneSecCallback);
}
void loop() {
  // put your main code here, to run repeatedly:
  timer.run();
}

#include "DualVNH5019MotorShield.h"

DualVNH5019MotorShield motor;
//ponteh_loop() recebe dois inteiros que definem as velocidades

void ponteh_setup(){
  Serial.println("Iniciando PonteH");
  motor.init();
}

void forward(){
  velocity1 = 200;
  velocity2 = 200;
  Serial.println('f');
}

void left(){
  velocity1 = -200;
  velocity2 = 200;
  Serial.println('l');
}

void right(){
  velocity1 = 200;
  velocity2 = -200;
  Serial.println('r');
}

void backwards(){
  velocity1 = -200;
  velocity2 = -200;
  Serial.println('r');
}

void stop(){
  velocity1 = 0;
  velocity2 = 0;
  Serial.println('s');
}

void ponteh_loop(){
  motor1(velocity1);
  motor2(velocity2);
}

void motor1(int value){
  motor.setM1Speed(value);
}

void motor2(int value){
  motor.setM2Speed(value);
}

int get_current_m1(){
  return motor.getM2CurrentMilliamps();
}

int get_current_m2(){
  return motor.getM2CurrentMilliamps();
}

void test_ponteh(){
  motor1(200);
  motor2(200);
  delay(3000);
  motor1(-200);
  motor2(-200);
  delay(3000);
}

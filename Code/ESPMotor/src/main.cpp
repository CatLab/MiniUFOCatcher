#include <Arduino.h>
#include<AccelStepper.h>
#include"CalcSpeed.h"

MotorCalc calc;

void setup() {
  // put your setup code here, to run once:
  calc.speedX=1;
  calc.speedY=2;
 printf("%d", calc.CalcSpeedA());
}

void loop() {
  // put your main code here, to run repeatedly:111111111111122222
}
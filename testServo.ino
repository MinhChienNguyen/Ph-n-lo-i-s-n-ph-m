#include <Servo.h>

Servo myServo;

void setup() {   
  myServo.attach(9);
}

void loop() {

  myServo.write(0);
  //   for (int i = 0; i < 61; i++) {
  //   myServo.write(i);
  //   delay(10);
  // }
}


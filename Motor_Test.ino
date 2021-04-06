#include <Servo.h>
Servo ESC;

void setup() {
  // put your setup code here, to run once:
  ESC.attach(13);
  ESC.writeMicroseconds(1511);
  delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:
  drive();
  delay(2000);
  brake();
  delay(2000);
  //reverse();
  //delay(5000);
}

void brake()
{
  ESC.writeMicroseconds(1000);
}

void drive()
{
  ESC.writeMicroseconds(1558);
}

void reverse()
{
  ESC.writeMicroseconds(1000);
  delay(10000);
  ESC.writeMicroseconds(1500);
}

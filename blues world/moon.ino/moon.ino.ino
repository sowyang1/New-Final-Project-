#include<Servo.h>
Servo servoLeft;
Servo servoRight;


void setup() {
  //circle



  servoLeft.attach(13);                      // Attach left signal to pin 13
  servoRight.attach(12);                     // Attach right signal to pin 12
  servoLeft.writeMicroseconds(1300);        // Calibrate left servo
  servoRight.writeMicroseconds(1500);
  delay(900);

  
  servoLeft.writeMicroseconds(1700);   // Left wheel counterclockwise
  servoRight.writeMicroseconds(1700); // Right wheel counterclockwise
  delay(1110);
  
  servoLeft.writeMicroseconds(1500);   // Left wheel counterclockwise
  servoRight.writeMicroseconds(1500); // Right wheel counterclockwise

 
}





void loop() {
}

 

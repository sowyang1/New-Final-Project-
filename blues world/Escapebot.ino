
#include <Servo.h>

 int leftWhisker = 5;
 int rightWhisker = 7;
 Servo servoLeft;
 Servo servoRight;



void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

pinMode(leftWhisker,INPUT);
pinMode(rightWhisker,INPUT);

servoLeft.attach(13);                      // Attach left signal to pin 13
  servoRight.attach(12);                     // Attach right signal to pin 12
  servoLeft.writeMicroseconds(1500);        // Calibrate left servo
  servoRight.writeMicroseconds(1500);

}

void Forward(){
  servoLeft.writeMicroseconds(1300);        
  servoRight.writeMicroseconds(1700);
  }

void Backwards(){
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
}

void Left(){
  servoLeft.writeMicroseconds(1300);   // Left wheel clockwise
  servoRight.writeMicroseconds(1300);  // Right wheel clockwise
}

void Right(){
  servoLeft.writeMicroseconds(1700);   // Left wheel counterclockwise
  servoRight.writeMicroseconds(1700); // Right wheel counterclockwise
}




void loop() {
  // put your main code here, to run repeatedly:

 
 int leftWhiskerValue = digitalRead(leftWhisker);
int rightWhiskerValue = digitalRead(rightWhisker);



 if(leftWhiskerValue == 0 && rightWhiskerValue == 0){
  Serial.println("Left and right are pressed!!");
 Backwards();
 delay(350);
 Left();
 delay(300);
  }
  
  
  
  
  else if(leftWhiskerValue == 0){
    Serial.println("Left is pressed");
    Backwards();
    delay(350);
    Right();
    delay(200);
   
    
    }
  else if(rightWhiskerValue == 0){
    Serial.println("Right is pressed");
    Backwards();
    delay(350);
    Left();
    delay(200);
    
    }
   else{
    Serial.println("No whiskers pressed:(");
    Forward();
    delay (400);
    }
  }
  

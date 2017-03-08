#include <Servo.h>

Servo servo1; // base rotator servo
Servo servo2; // top tower servo/motor
Servo servo3; // elbow servo
Servo servo4; // wrist servo
Servo servo5; // wrist rotator servo
Servo servo6; // penny servo

int potPin1 = 0;
int potPin2 = 1;
int potPin3 = 2;    // select the input pin for the potentiometer
int potPin4 = 3;
int potPin5 = 4;
int potPin6 = 5;

int valA, oldValA = 0;       // variable to store the value coming from the sensor
int valB, oldValB = 0;
int valC, oldValC = 0;
int valD, oldValD = 0;
int valE, oldValE = 0;
int valF, oldValF = 0;

void setup() {
  servo1.attach(2);           // setup the pin the servo data signal is on
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
  servo6.attach(7);     
}

void loop() {
  valA = analogRead(potPin1);
  valA = map(valA, 0, 1023, 0, 180);
  servo1.write(valA);

  valB = analogRead(potPin2);
  valB = map(valB, 0, 1023, 0, 180);
  servo2.write(valB);
  
  valC = analogRead(potPin3);
  valC = map(valC, 0, 1023, 0, 180);
  servo3.write(valC);
  
  valD = analogRead(potPin4);
  valD = map(valD, 0, 1023, 0, 180);
  servo4.write(valD);

  valE = analogRead(potPin5);
  valE = map(valE, 0, 1023, 0, 180);
  servo5.write(valE);
  
  delay(15);                        // delay of 15 ms for the servo to catch up

  Serial.println("Servo 1: " + String(valA) + ", Servo 2: " + String(valB) + ", Servo 3: " + String(valC) + ", Servo 4: " + String(valD) + ", Servo 5: " + String(valE));
}
// 06/22/2021
// Mark Mitri (markmitri.com)
// Guilloche Drawing Machine
// Program runs 3 stepper motors at different speeds at the same time
// Edited from ConstantSpeed.pde from the AccelStepper library

// Include the AccelStepper Library
#include <AccelStepper.h>

// Setup the steppers as an object with the correct pins
AccelStepper stepperX(AccelStepper::FULL2WIRE,2,5);
AccelStepper stepperY(AccelStepper::FULL2WIRE,3,6);
AccelStepper stepperZ(AccelStepper::FULL2WIRE,4,7);

// Max RPM of my motors
int maxRPM = 300;

// Change the speed of the motors
int xSpeed = 300;
int ySpeed = 300;
int zSpeed = 150;

void setup(){
  // Sets the Serial library at 9600 baud
  Serial.begin(9600);
  // Setial Print Title
  Serial.println(" ");
  Serial.println("Guilloche Drawing Machine");
  // Serial Print Speed of the motors
  Serial.print("X-Speed: ");
  Serial.print(xSpeed);
  Serial.println(" ");
  Serial.print("Y-Speed: ");
  Serial.print(ySpeed);
  Serial.println(" ");
  Serial.print("Z-Speed: ");
  Serial.print(zSpeed);
  // Set the max speed of the steppers  
  stepperX.setMaxSpeed(maxRPM);
  stepperY.setMaxSpeed(maxRPM);
  stepperZ.setMaxSpeed(maxRPM);
  // Set the speed of the steppers according to the variables
  stepperX.setSpeed(xSpeed);
  stepperY.setSpeed(ySpeed);
  stepperZ.setSpeed(zSpeed);
}

void loop(){
  // Run the steppers at the speed initialized at the same time
//  stepperX.runSpeed();
//  stepperY.runSpeed();
//  stepperZ.runSpeed();
}

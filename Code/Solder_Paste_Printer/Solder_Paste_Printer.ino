//
// Orical Industries Solder Paste Printer
//
// (c) 2016 John Reichard
//

#include <Stepper.h>

const int ysteps = 200; // how many steps to travle end to end.
const int cstepsout = 200; // how many steps to have the board exit the machine.
const int cstepsin = 5;
Stepper ystepper(ysteps, 8, 9, 10, 11);
Stepper cstepperin(cstepsin, 2, 3, 4, 5);
Stepper cstepperout(cstepsout, 2, 3, 4, 5);
int inPin = 7;   // input pin for start button
int val = 0;     // variable for reading the pin status
int val2 = 0;
int inPin2 = 6;
int var = 0;
int varpin = 3;
void setup() {
 ystepper.setSpeed(100);
 cstepperin.setSpeed(100);
 cstepperout.setSpeed(100);
 Serial.begin(9600);
}

void loop() {
  Serial.println("Idle");
val = digitalRead(inPin);  // read input value
val2 = digitalRead(inPin2); 
var = analogRead(varpin);
if (val == HIGH) {         // check if the input is LOW
  Serial.println("Starting Print");
  if(val== HIGH){
    while(var == LOW){
cstepperin.step(cstepsin);
}
delay(1000);
ystepper.step(ysteps);
  }
}
else { Serial.println("timeout"); }


 
}



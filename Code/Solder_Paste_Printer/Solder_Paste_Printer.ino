// (c) 2016 John Reichard


#include <Stepper.h>

const int ysteps = 200; // how many steps to travle end to end.
const int zsteps = 200; // how many steps to travle end to end.
Stepper ystepper(ysteps, 8, 9, 10, 11);
Stepper zstepper(zsteps, 2, 3, 4, 5);
int inPin = 7;   // input pin for start button
int val = 0;     // variable for reading the pin status
int val2 = 0;
int inPin2 = 6;
int val3 = 0;
int inPin3 = 3;
void setup() {
 ystepper.setSpeed(100);
 zstepper.setSpeed(100);
 Serial.begin(9600);
}

void loop() {
val = digitalRead(inPin);  // read input value
val2 = digitalRead(inPin2); 
val3 = analogRead(inPin3); 
if (val == LOW) {         // check if the input is LOW
  Serial.println("Starting Print");
zstepper.step(zsteps);
delay(2000);
if (val2 == LOW); {
ystepper.step(ysteps);
if (val3 == LOW);
{ 
 zstepper.step(-zsteps);
 delay(1000);
 ystepper.step(-ysteps);
 delay(1000);
  if (val3 == LOW);
{ 
zstepper.step(-zsteps);
 delay(1000);
 ystepper.step(-ysteps);
 delay(1000);
if (val3 == LOW); {
  zstepper.step(-zsteps);
 delay(1000);
 ystepper.step(-ysteps);
 delay(1000);
  }
  Serial.println("timeout");
  }
  }
  }
  }



 
}



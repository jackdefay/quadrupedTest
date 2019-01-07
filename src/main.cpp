#include <Arduino.h>
#include <Servo.h>

Servo horizShoulder;
Servo vertShoulder;
Servo elbow;

int horizShoulderPos;
int vertShoulderPos;
int elbowPos;

byte horizShoulderPin = 5;
byte vertShoulderPin = 6;
byte elbowPin = 10;

void setup() {
    horizShoulder.attach(horizShoulderPin);
    vertShoulder.attach(vertShoulderPin);
    elbow.attach(elbowPin);
}

void loop() {
    horizShoulderPos = 120;
    horizShoulder.write(horizShoulderPos);
    delay(500);
}

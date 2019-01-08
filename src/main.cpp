#include <Arduino.h>
#include <Servo.h>

Servo horizShoulder;
Servo vertShoulder;
Servo elbow;

int horizShoulderPos;
int vertShoulderPos;
int elbowPos;

byte horizShoulderPin = 2;
byte vertShoulderPin = 3;
byte elbowPin = 4;

void writeServos(int horizShoulderPos, int vertShoulderPos, int elbowPos);

void setup() {
    pinMode(horizShoulderPin, OUTPUT);
    pinMode(vertShoulderPin, OUTPUT);
    pinMode(elbowPin, OUTPUT);

    horizShoulder.attach(horizShoulderPin);
    vertShoulder.attach(vertShoulderPin);
    elbow.attach(elbowPin);
}

void loop() {
    horizShoulderPos = 90;
    vertShoulderPos = 90;
    elbowPos = 90;
    writeServos(horizShoulderPos, vertShoulderPos, elbowPos);
    delay(500);
}

void writeServos(int horizShoulderPos, int vertShoulderPos, int elbowPos){
    horizShoulder.write(horizShoulderPos);
    vertShoulder.write(vertShoulderPos);
    elbow.write(elbowPos);
}

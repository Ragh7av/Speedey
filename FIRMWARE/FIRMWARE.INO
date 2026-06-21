*/

#include <SoftwareSerial.h>

SoftwareSerial bluetoothSerial(14, 15);  // RX, TX

char command;
int speed = 180;
int speedReduced;
int speedHighPWM;
int speedLowPWM;
int speedFactorHighPWM;
int speedFactorLowPWM;
int speed_reducing_factor = 2;

int in1 = 7;
int in2 = 6;
int in3 = 5;
int in4 = 4;

void setup() {
  bluetoothSerial.begin(9600);  //Set the baud rate for the Bluetooth module.
  Serial.begin(9600);

  // Set all the motor control pins to outputs
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);


  // Turn off motors - Initial state
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}


void loop() {
  if (bluetoothSerial.available() > 0) {
    command = bluetoothSerial.read();
    Serial.println(command);
    //Stop();  //initialize with motors stopped

    if (command == 'F') Forward();  // check string then call a function or set a value
    else if (command == 'B') Backward();
    else if (command == 'R') TurnRight();
    else if (command == 'L') TurnLeft();
    else if (command == 'G') ForwardLeft();
    else if (command == 'H') BackwardLeft();
    else if (command == 'I') ForwardRight();
    else if (command == 'J') BackwardRight();
    else if (command == 'S') Stop();
    else if (command == '0') speed = 120;
    else if (command == '1') speed = 150;
    else if (command == '2') speed = 150;
    else if (command == '3') speed = 175;
    else if (command == '4') speed = 175;
    else if (command == '5') speed = 200;
    else if (command == '6') speed = 200;
    else if (command == '7') speed = 220;
    else if (command == '8') speed = 220;
    else if (command == '9') speed = 255;
    else if (command == 'q') speed = 255;
  }
  speedHighPWM = speed;
  speedLowPWM = map(speed, 0, 255, 255, 0);
  speedReduced = (speed / speed_reducing_factor);
  speedFactorHighPWM = speedReduced;
  speedFactorLowPWM = map(speedReduced, 0, 255, 255, 0);
}


void Forward() {
  digitalWrite(in1, HIGH);
  analogWrite(in2, speedLowPWM);
  analogWrite(in3, speedLowPWM);
  digitalWrite(in4, HIGH);
}

void Backward() {
  digitalWrite(in1, LOW);
  analogWrite(in2, speedHighPWM);
  analogWrite(in3, speedHighPWM);
  digitalWrite(in4, LOW);
}

void TurnLeft() {
  digitalWrite(in1, HIGH);
  analogWrite(in2, speedLowPWM);
  analogWrite(in3, speedHighPWM);
  digitalWrite(in4, LOW);
}

void TurnRight() {
  digitalWrite(in1, LOW);
  analogWrite(in2, speedHighPWM);
  analogWrite(in3, speedLowPWM);
  digitalWrite(in4, HIGH);
}

void ForwardLeft() {
  digitalWrite(in1, HIGH);
  analogWrite(in2, speedLowPWM);
  analogWrite(in3, speedFactorLowPWM);
  digitalWrite(in4, HIGH);
}

void ForwardRight() {
  digitalWrite(in1, HIGH);
  analogWrite(in2, speedFactorLowPWM);
  analogWrite(in3, speedLowPWM);
  digitalWrite(in4, HIGH);
}

void BackwardLeft() {
  digitalWrite(in1, LOW);
  analogWrite(in2, speedHighPWM);
  analogWrite(in3, speedFactorHighPWM);
  digitalWrite(in4, LOW);
}

void BackwardRight() {
  digitalWrite(in1, LOW);
  analogWrite(in2, speedFactorHighPWM);
  analogWrite(in3, speedHighPWM);
  digitalWrite(in4, LOW);
}

void Stop() {
  digitalWrite(in1, LOW);
  analogWrite(in2, 0);
  analogWrite(in3, 0);
  digitalWrite(in4, LOW);
}

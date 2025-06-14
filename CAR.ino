//Arduino 6WD Bluetooth Control Robot
//Created By DIY Builder
//Date 10-12-2020

#define ENA 6
#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 10
#define ENB 13

char command;

void setup() {
  Serial.begin(9600);

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void loop() {
  while (Serial.available() > 0) {
    command = Serial.read();
    Serial.println(command);
  }
  if (command == 'F') {
    analogWrite(ENA, 200);
    analogWrite(ENB, 200);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  } else if (command == 'B') {
    analogWrite(ENA, 200);
    analogWrite(ENB, 200);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  } else if (command == 'L') {
    analogWrite(ENA, 200);
    analogWrite(ENB, 200);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  } else if (command == 'R') {
    analogWrite(ENA, 200);
    analogWrite(ENB, 200);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  } else if (command == 'S') {
    analogWrite(ENA, 0);
    analogWrite(ENB, 0);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  } else if (command == 'D') {
    analogWrite(ENA, 0);
    analogWrite(ENB, 0);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  }
}
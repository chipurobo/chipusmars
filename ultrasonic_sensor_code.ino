#include <NewPing.h>

#define TRIG_PIN 7 
#define ECHO_PIN 8 
#define MAX_DISTANCE 200 
#define MAX_SPEED 120 // sets speed of DC motors

NewPing sonar(TRIG_PIN, ECHO_PIN, MAX_DISTANCE); 

#define motor_A_speed 10
#define motor_B_speed 11
#define motor_A 12
#define motor_B 13
#define MOTORSHIELD "Fundumoto"

boolean goesForward = false;
int distance = 100;
int speedSet = 100;

void setup() {
  Serial.begin(9600);

  pinMode(motor_A, OUTPUT);
  pinMode(motor_B, OUTPUT);
  pinMode(motor_A_speed, OUTPUT);
  pinMode(motor_B_speed, OUTPUT);

  distance = readPing();
  delay(100);
  distance = readPing();
  delay(100);
  distance = readPing();
  delay(100);
  distance = readPing();
  delay(100);
}

void loop() {
  delay(40);
  distance = readPing();

  if (distance <= 15) {
    avoidObstacle();
  } else {
    moveForward();
  }
}

void avoidObstacle() {
  moveStop();
  delay(100);
  moveBackward();
  delay(500);
  moveStop();
  delay(200);
  if (random(2) == 0) {
    turnRight();
  } else {
    turnLeft();
  }
  moveStop();
  delay(200);
  moveForward();
}

int readPing() { 
  delay(70);
  int cm = sonar.ping_cm();
  if (cm == 0) {
    cm = 250;
  }
  return cm;
}

void moveStop() {
  analogWrite(motor_A_speed, 0); 
  analogWrite(motor_B_speed, 0);
}

void moveForward() {
  if (!goesForward) {
    goesForward = true;
    digitalWrite(motor_A, HIGH);      
    digitalWrite(motor_B, LOW);
    for (speedSet = 0; speedSet < MAX_SPEED; speedSet += 2) {
      analogWrite(motor_A_speed, speedSet);
      analogWrite(motor_B_speed, speedSet);
      delay(5);
    }
  }
}

void moveBackward() {
  goesForward = false;
  digitalWrite(motor_A, LOW);      
  digitalWrite(motor_B, HIGH);
  for (speedSet = 0; speedSet < MAX_SPEED; speedSet += 2) {
    analogWrite(motor_A_speed, speedSet);
    analogWrite(motor_B_speed, speedSet);
    delay(5);
  }
}  

void turnRight() {
  digitalWrite(motor_A, HIGH);
  digitalWrite(motor_B, HIGH);
  analogWrite(motor_A_speed, MAX_SPEED);
  analogWrite(motor_B_speed, MAX_SPEED);
  delay(500);
  moveStop();
} 
 
void turnLeft() {
  digitalWrite(motor_A, LOW);     
  digitalWrite(motor_B, LOW);  
  analogWrite(motor_A_speed, MAX_SPEED);
  analogWrite(motor_B_speed, MAX_SPEED);
  delay(500);
  moveStop();
}

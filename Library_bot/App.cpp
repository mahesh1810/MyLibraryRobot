
#include<Arduino.h>
#define LIBRARY_BOT
#include"App.h"


Robot::Robot()
{
}

void Robot::Forwardh()
{
  digitalWrite(h3, HIGH);
  digitalWrite(h2, HIGH);
  digitalWrite(h1, LOW);
  digitalWrite(h4, LOW);
}
void Robot::Backwardh()
{
  digitalWrite(h1, HIGH);
  digitalWrite(h4, HIGH);
  digitalWrite(h3, LOW);
  digitalWrite(h2, LOW);
}
void Robot::MotorStoph()
{
  digitalWrite(h1, HIGH);
  digitalWrite(h2, HIGH);
  digitalWrite(h3, HIGH);
  digitalWrite(h4, HIGH);
}
//********************length
void Robot::Forwardl()
{
  digitalWrite(l3, HIGH);
  digitalWrite(l2, HIGH);
  digitalWrite(l1, LOW);
  digitalWrite(l4, LOW);
}
void Robot::Backwardl()
{
  digitalWrite(l1, HIGH);
  digitalWrite(l4, HIGH);
  digitalWrite(l3, LOW);
  digitalWrite(l2, LOW);
}
void Robot::MotorStopl()
{
  digitalWrite(l1, HIGH);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, HIGH);
  digitalWrite(l4, HIGH);
}
//*****************servo
void ServoAngle(int pos)
{
  //myservo.write(pos); // tell servo to go to position in variable 'pos'
  delay(100); // waits 15ms for the servo to reach the position
}
//************Read Color
void ReadColor()
{
  int x = analogRead(A0);
  Serial.print("\t\t");
  Serial.println(x);
  if (x < 805 && x > 750)
  {
    Serial.println("White ");
    color = 1;
  }
  else if (x < 735 && x > 710)
  {
    Serial.println("red");
    color = 2;
  }
  else if (x < 690)
  {
    Serial.println("Black");
    color = 3;
  }
}

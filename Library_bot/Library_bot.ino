/**************Laibrary Book Maneger************/

#include"App.h"
//int pin = 12;

Robot *MyRobot ;
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Start");
  pinMode(h1, OUTPUT);
  pinMode(h2, OUTPUT);
  pinMode(h3, OUTPUT);
  pinMode(h4, OUTPUT);
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(Bump, INPUT);
  //pullup
  digitalWrite(h1, HIGH);
  digitalWrite(h2, HIGH);
  digitalWrite(h3, HIGH);
  digitalWrite(h4, HIGH);
  digitalWrite(l1, HIGH);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, HIGH);
  digitalWrite(l4, HIGH);
  
}
/************************Main
  Loop****************************/
void loop() 
{
  
  button = digitalRead(Bump);
  if (button == 0)
  {
    ReadColor();
    //Serial.println(color);
    if (color == 2)
    {
      delay(3000);
      Serial.println("1st");
      analogWrite(SERVO_PIN, 20);
      MyRobot->Forwardl();
      delay(3000);
      MyRobot->MotorStopl();
      delay(1000);
      //lose
      delay(500);
      //pull
      analogWrite(SERVO_PIN, 200);
      MyRobot->Backwardl();
      delay(3000);
      MyRobot->MotorStopl();
      delay(1000);
      color = 0;
      button = 1;
      //return;
    }
    if (color == 3)
    {
      delay(3000);
      Serial.println("2st");
      MyRobot->Forwardh();
      delay(2200);
      MyRobot->MotorStoph();
      delay(1000);
      //grip
      analogWrite(SERVO_PIN, 20);
      delay(500);
      //push
      MyRobot->Forwardl();
      delay(3000);
      MyRobot->MotorStopl();
      delay(1000);
      //lose
      analogWrite(SERVO_PIN, 200);
      delay(500);
      //pull
      MyRobot->Backwardl();
      delay(3000);
      MyRobot->MotorStopl();
      delay(1000);
      //down
      MyRobot->Backwardh();
      delay(1300);
      MyRobot->MotorStoph();
      delay(1000);
      color = 0;
      button = 1;
      // return;
    }
    if (color == 1)
    {
      delay(3000);
      Serial.println("3st");
      MyRobot->Forwardh();
      delay(4000);
      MyRobot->MotorStoph();
      delay(1000);
      //grip
      analogWrite(SERVO_PIN, 20);
      delay(500);
      //push
      MyRobot->Forwardl();
      delay(3000);
      MyRobot->MotorStopl();
      delay(1000);
      //lose
      analogWrite(SERVO_PIN, 200);
      delay(500);
      //pull
      MyRobot->Backwardl();
      delay(3000);
      MyRobot->MotorStopl();
      delay(1000);
      //down
      MyRobot->Backwardh();
      delay(2250);
      MyRobot->MotorStoph();
      delay(1000);
      color = 0;
      button = 1;
      //return;
    }
  }
  else
  {
    Serial.println("No BOOK");
  }
}
void allstop()
{
  Serial.println("all stop");
  while (1);
}

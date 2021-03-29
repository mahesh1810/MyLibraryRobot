


//H bridge code for controlling motor
//H Motor code pin config
#define h1 2
#define h2 3
#define h3 4
#define h4 5
//L Motor code pin config
#define l1 6
#define l2 7
#define l3 8
#define l4 9
#define Bump 11
//servo pin
#define SERVO_PIN 10

#ifdef LIBRARY_BOT
int pos = 0; 
int button = 1;
int color;
#else
extern int pos ; 
extern int button ;
extern int color;
#endif 

class Robot{
    public:
  Robot();  
  void Forwardh();
  void Backwardh();
  void MotorStoph();
  void Forwardl();
  void Backwardl();
  void MotorStopl();
        
};


//Prototype definations
void ServoAngle(int pos);
void ReadColor();

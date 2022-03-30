

// for pin declaration
int sensor1 = 22;
int sensor2 = 24;
int sensor3 = 26;
int sensor4 = 28;
int sensor5 = 30;
int sensor6 = 32;
int sensor7 = 34;
int sensor8 = 36;

// for sensor value
int s1 = 0;
int s2 = 0;
int s3 = 0;
int s4 = 0;
int s5 = 0;
int s6 = 0;
int s7 = 0;
int s8 = 0;

int threshold = 500;
int data = 0;
int lme=12, lmf=11, lmb=10, rme=9, rmf=8, rmb=7;


void setup() {
  Serial.begin(9600);
  Serial.println("Initializing systems...");
  Serial.println("Relaxa is Ready!");
  
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);
  pinMode(sensor5, INPUT);
  pinMode(sensor6, INPUT);
  pinMode(sensor5, INPUT);
  pinMode(sensor6, INPUT);

  pinMode(lme, OUTPUT);
  pinMode(lmf, OUTPUT);
  pinMode(lmb, OUTPUT);
  pinMode(rme, OUTPUT);
  pinMode(rmf, OUTPUT);
  pinMode(rmb, OUTPUT);
  
}

void loop() {
  
  TCRTSensorRead();

//  if(data==0b000000)
//  {
//    robotStop();
//  }
//
//  if(data==0b001100)
//  {
//    analogWrite(lme, 255);
//    analogWrite(rme, 255);
//    forward();
//  }
//
//  if(data==0b000110)
//  {
//    analogWrite(lme, 255);
//    analogWrite(rme, 225);
//    forward();
//  }
//
//  if(data==0b000011)
//  {
//    analogWrite(lme, 255);
//    analogWrite(rme, 200);
//    forward();
//  }
//
//  if(data==0b000001)
//  {
//    analogWrite(lme, 255);
//    analogWrite(rme, 50);
//    forward();
//  }
//
//    if(data==0b011000)
//  {
//    analogWrite(lme, 225);
//    analogWrite(rme, 255);
//    forward();
//  }
//
//  if(data==0b110000)
//  {
//    analogWrite(lme, 200);
//    analogWrite(rme, 255);
//    forward();
//  }
//
//  if(data==0b100000)
//  {
//    analogWrite(lme, 50);
//    analogWrite(rme, 255);
//    forward();
//  }

if(data==0b00000000)
  {
    robotStop();
  }

  if(data==0b00011000)
  {
    analogWrite(lme, 255);
    analogWrite(rme, 255);
    forward();
  }

  if(data==0b00001100)
  {
    analogWrite(lme, 255);
    analogWrite(rme, 225);
    forward();
  }

  if(data==0b00000110)
  {
    analogWrite(lme, 255);
    analogWrite(rme, 200);
    forward();
  }

  if(data==0b00000001)
  {
    analogWrite(lme, 255);
    analogWrite(rme, 50);
    forward();
  }

    if(data==0b00110000)
  {
    analogWrite(lme, 225);
    analogWrite(rme, 255);
    forward();
  }

  if(data==0b01100000)
  {
    analogWrite(lme, 200);
    analogWrite(rme, 255);
    forward();
  }

  if(data==0b10000000)
  {
    analogWrite(lme, 50);
    analogWrite(rme, 255);
    forward();
  }


}

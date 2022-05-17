// This program is to test the PID contrallability of a peltier block using h bridge and a ntc thermistor
#include"Thermocycler.h"


//Define Variables we'll be connecting to
double Setpoint, Input, Output;

//Define the aggressive and conservative Tuning Parameters
double aggKp=4, aggKi=0.2, aggKd=1;
double consKp=1, consKi=0.05, consKd=0.25;

//Specify the links and initial tuning parameters
PID myPID(&Input, &Output, &Setpoint, consKp, consKi, consKd, DIRECT);

void setup()
{
  //initialize the variables we're linked to
  V0 = analogRead(PIN_THERMISTOR_INPUT);
  Input = (double)temp_reading(V0);
  Setpoint = 95;
 //turn the PID on
  myPID.SetMode(AUTOMATIC);
  pinMode(PIN_THERMISTOR_INPUT,INPUT);
  pinMode(PELTIER_TERMINAL1,INPUT);
  pinMode(PELTIER_TERMINAL2,INPUT);
  pinMode(PIN_LED_INDICATOR,OUTPUT);
  pinMode(PIN_PELTIER_CONTROL_OUTPUT,OUTPUT);
  
  digitalWrite(PELTIER_TERMINAL1,HIGH);
  digitalWrite(PELTIER_TERMINAL2,LOW);
}

void loop()
{
  V0 = analogRead(PIN_THERMISTOR_INPUT);
  Input = (double)temp_reading(V0);

  double gap = abs(Setpoint-Input); //distance away from setpoint
  if (gap < 10)
  {  //we're close to setpoint, use conservative tuning parameters
    myPID.SetTunings(consKp, consKi, consKd);
  }
  else
  {
     //we're far from setpoint, use aggressive tuning parameters
     myPID.SetTunings(aggKp, aggKi, aggKd);
  }

  Output =  myPID.Compute();
  analogWrite(PIN_PELTIER_CONTROL_OUTPUT, Output);

  if (gap <5 && gap ==Setpoint+5)
  digitalWrite(PIN_LED_INDICATOR, HIGH);
  else 
  digitalWrite(PIN_LED_INDICATOR,LOW);
}

// Temperature reading
float temp_reading(int v)
{
  R2 = R1 * (1023.0 / (float)v - 1.0);
  logR2 = log(R2);
  T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));
  TC = T - 273.15;
 //  Serial.print("Temperature: "); 
 //  Serial.print(TC);
 //  Serial.print(" C  "); 
return TC;
}

#include<SoftwareSerial.h>
SoftwareSerial BT(10,11);
int i;
void setup() 
{
BT.begin(9600);
Serial.begin(9600);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
}
void loop() 
{
while(BT.available()>0)
  {
  i=BT.read();
  if(i==1)
    {
    analogWrite(6,153);
    analogWrite(5,0);
    }
  else if(i==0)
    {
    analogWrite(5,153);
    analogWrite(6,0);
    }
  }
}

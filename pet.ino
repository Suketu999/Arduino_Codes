int t;
float d;
void setup() 
{
pinMode(11,OUTPUT); //for Proximity sensor
pinMode(12,OUTPUT);
pinMode(13,INPUT);
Serial.begin(9600);
pinMode(1,OUTPUT); //for motor1
pinMode(2,OUTPUT);
pinMode(3,OUTPUT); //for motor2
pinMode(4,OUTPUT);
pinMode(9,OUTPUT); //for LED
pinMode(10,OUTPUT);
}

void loop()
{
digitalWrite(1,HIGH);
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
analogWrite(9,125);
analogWrite(10,0);

analogWrite(11,255);
digitalWrite(12,HIGH);
delay(10);
digitalWrite(12,LOW);
t=pulseIn(13,HIGH);
d=t*0.0171;

if(d<=20)
  {
  digitalWrite(1,LOW);
  digitalWrite(3,LOW);
  analogWrite(10,125);
  analogWrite(9,0);
  Serial.print("Distance is:");
  Serial.println(d);
  
  measure:
  analogWrite(11,255);
  digitalWrite(12,HIGH);
  delay(10);
  digitalWrite(12,LOW);
  t=pulseIn(13,HIGH);
  d=t*0.0171;
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  
  if(d<=50)
    goto measure;
  else if(d>50)
    {
    digitalWrite(1,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    analogWrite(9,125);
    analogWrite(10,0);

    }
  }
}

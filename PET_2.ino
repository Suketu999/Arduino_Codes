int t;
float d;
void setup() 
{
//pinMode(1,OUTPUT);
//pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);   //for LED
pinMode(10,OUTPUT);
Serial.begin(9600);
pinMode(11,OUTPUT);  //for Proximity Sensor
pinMode(12,OUTPUT);
pinMode(13,INPUT);
}

void loop() 
{
//digitalWrite(1,LOW);
//digitalWrite(3,LOW);
analogWrite(5,0);
analogWrite(6,0);
analogWrite(9,125);
analogWrite(10,0);
  
analogWrite(11,255);
digitalWrite(12,HIGH);
delay(10);
digitalWrite(12,LOW);
t=pulseIn(13,HIGH);
d=t*0.0171;

if(d<=15)
  {
  //digitalWrite(1,HIGH);
  //digitalWrite(3,HIGH);
  analogWrite(5,0);
  analogWrite(6,0);
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

  //digitalWrite(1,LOW);//change
  //digitalWrite(3,HIGH);
  analogWrite(5,0);
  analogWrite(6,255);

  if(d<=50)
    goto measure;
  else
    {
    //digitalWrite(1,LOW);
    //digitalWrite(3,LOW);
    analogWrite(5,255);
    analogWrite(6,255);
    analogWrite(9,125);
    analogWrite(10,0);
    } 
  }
}

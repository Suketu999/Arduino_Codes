int i=0, j=0, k=0;
void setup() 
{
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);

}

void loop() 
{
digitalWrite(4,HIGH);
while(k<4)
{
while(i<3)
{
analogWrite(9,100);
delay(400);
analogWrite(9,0);
analogWrite(10,100);
delay(400);
analogWrite(10,0);
analogWrite(11,100);
delay(400);
analogWrite(11,0);
i=i+1;
}
i=0;
while(j<3)
  {
  analogWrite(9,100);
  analogWrite(10,100);
  analogWrite(11,100);
  delay(350);
  analogWrite(9,0);
  analogWrite(10,0);
  analogWrite(11,0);
  delay(100);
  j=j+1;
  }
j=0;
k=k+1;
}
k=0;
analogWrite(3,100);
delay(600);
digitalWrite(4,LOW);
delay(600);
analogWrite(5,100);
delay(600);
analogWrite(6,81);
delay(600);
analogWrite(3,0);
analogWrite(5,0);
analogWrite(6,0);
digitalWrite(4,HIGH);
}


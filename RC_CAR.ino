int d+
;
void setup() 
{
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
Serial.begin(9600);
}

void loop() 
{
digitalWrite(5,LOW);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);

while(Serial.available())
  {
  d = Serial.read(); // reading the data received from the bluetooth module
  if (d==1)
    {
    digitalWrite(5,HIGH);
    digitalWrite(3,HIGH);    
    }
  else if (d==2)
    {
    digitalWrite(2,HIGH);
    digitalWrite(4,HIGH);
    }
  else if (d==3)
    {
    digitalWrite(5,HIGH);
    digitalWrite(4,HIGH);
    }
  else if (d==4)
    {
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    }
  Serial.println(d);
  }
}

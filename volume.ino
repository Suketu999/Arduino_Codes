int t;
float d,k;
void setup() 
{
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,INPUT);
Serial.begin(9600);
}

void loop() 
{
analogWrite(8,0);
analogWrite(11,255);
digitalWrite(12,HIGH);
delay(10);
digitalWrite(12,LOW);
t=pulseIn(13,HIGH);
d=t*0.0171;
if(d<=30 && d>=5)
  k=d-5;
analogWrite(9,10.2*k);
delay(50);
Serial.println(k);
}

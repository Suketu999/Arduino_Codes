int t, d;
void setup() 
  {
  pinMode(11,OUTPUT); //VCCPin
  pinMode(12,OUTPUT); //TrigPin
  pinMode(13,INPUT); //EchoPin
  Serial.begin(9600);
  }

void loop()   
  {
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  delayMicroseconds(10);
  digitalWrite(12,LOW);
  t=pulseIn(13,HIGH);
  d=t*0.0171;
  Serial.print("The distance is (in cm):");
  Serial.println(d);
  delay(1000);
  }

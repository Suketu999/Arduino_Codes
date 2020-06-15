int d, x, y, z, i=0, t=4; //Connect PIN6 with positive terminal and PIN9 with negative terminal
void setup()
  {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(6,OUTPUT);
  }
void loop()
  {
  Serial.print("The current floor is:");
  Serial.println(i);
  label:
  Serial.println("Enter the floor to go(0-3):");
  while(Serial.available()==0){}
  x=Serial.parseInt();
  if (x<0 || x>3)
    goto label;
  else if(x<i)
    {
    y=i-x;
    d=0;
    while(x!=i)
      {
      i=i-1;  
      }
    }
  else if(i<x)
    {
    y=x-i;
    d=1;
    while(x!=i)
      {
      i=i+1;     
      }
    }
  else if(x==i)
    {
    goto end;
    }
  z=t*y;
  if(d==1)
    {
    analogWrite(6,255);
    analogWrite(9,0);
    delay(z*1000);
    analogWrite(6,0);  
    }
  else if(d==0)
    {
    analogWrite(9,255);
    analogWrite(6,0);
    delay((z*1000)-250);
    analogWrite(9,0);
    }
  end:
  Serial.println("You have reached the floor!\a");
  Serial.println("");
  }  

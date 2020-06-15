#include<LiquidCrystal.h>  
int Contrast=20, i=0, j=0, a=0;     //i<=15, j<=strlen
char mes[]="                Welcome to Quantum Infinity                ";
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);   
void setup()
{ 
analogWrite(6,Contrast);
lcd.begin(16, 2);
}  
void loop()
{
label:
if (j>43)
  exit(1);
i=0;
while(i<=15)
  {
  lcd.setCursor(i,0);
  lcd.print(mes[i+j]);
  i++;
  }
delay(250);
j=j+1;
if(j>43)
{
lcd.clear();
delay(100);
i=0;
j=0;
goto label;}
}



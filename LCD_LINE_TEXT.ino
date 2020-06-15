#include<LiquidCrystal.h>  
int Contrast=20;
int i=0, a=0, j=15, b=15;
char mes[]="Quantum Infinity";
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);   

 void setup()
 { 
    analogWrite(6,Contrast);
     lcd.begin(16, 2);
  }  
     void loop()
 {
  while(i<=15)
  {
  lcd.setCursor(i,0);   
  lcd.print("|");
  delay(100);
  lcd.clear();
  a=0;
  while(a<=i)
    {
    lcd.print(mes[a]);
    a=a+1;
    }
  i=i+1;
  delay(100);
  }
}



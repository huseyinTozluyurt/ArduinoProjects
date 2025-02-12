
#include <LiquidCrystal_I2C.h>
#include <wire.h>
#include <CapacitiveSensor.h>
CapacitiveSensor numberButton=CapacitiveSensor(3,2);
CapacitiveSensor entryButton=CapacitiveSensor(5,4);

int numState;
int enterState;
int choosenNum1;
int choosenNum2;
char choosenOperation;
int result;
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  Serial.begin(9600);
}
int num1State()
{
  choosenNum1=0;
  while (1)
  {
    numState=numberButton.capacitiveSensor(30);
    enterState=entryButton.capacitiveSensor(30);     
    lcd.setCursor(7,0);
    lcd.print(choosenNum1);
    if(numState>400)
    {
      choosenNum1+=1;
      Serial.println(choosenNum1);
    }
    if(enterState>400)
    {
      Serial.println("Enter button is pressed");
      delay(700);
      break;
    }
    delay(300);

  }
}

int num2State()
{
  choosenNum2=0;
  while(1)
  {

    numState=numberButton.capacitiveSensor(30);
    enterState=entryButton.capacitiveSensor(30);   
    lcd.setCursor(7,1);
    lcd.print(choosenNum2);
    if(numState>400)
    {
      choosenNum2+=1;
      Serial.println(choosenNum2);
    }
    if(enterState>400)
    {
      Serial.println("Enter button is pressed");
      delay(700);
      break;
    }
    delay(300);
  
  }

}
int initializingResult()
{
  
  if(choosenOperation=='+')
  {
    result=choosenNum1+choosenNum2;
  }
  else if(choosenOperation=='-')
  {
    result=choosenNum1-choosenNum2;
  }
  else if(choosenOperation=='x')
  {
    result=choosenNum1*choosenNum2;
  }
  else if(choosenOperation=='/')
  {
    result=choosenNum1/choosenNum2;
  }
  
  
}
int operationFunc()
{
  lcd.clear();
  char operations[]={'+','-','x','/'};
  lcd.setCursor(0,0);
  lcd.print("Choose Operation");
  lcd.setCursor(0,1);
  lcd.print("+,-,x,/: ");

  int count=0;
  while(1)
  {     
    numState=numberButton.capacitiveSensor(30);
    enterState=entryButton.capacitiveSensor(30);   

    lcd.setCursor(10,1);
    lcd.print(operations[count]);
    if(numState>400)
    {
      count+=1;
      Serial.println("Num button is pressed");
      if(count>3)
      {
        count=0;
      }
    }
    if(enterState>400)
    {
      lcd.clear();
      choosenOperation=operations[count];
      lcd.setCursor(2,0);
      lcd.print(choosenNum1);
      lcd.setCursor(5,0);
      lcd.print(choosenOperation);
      lcd.setCursor(6,0);
      lcd.print(choosenNum2);
      lcd.setCursor(9,0);
      lcd.print("=");
      lcd.setCursor(11,0);
      initializingResult();
      lcd.print(result);
      Serial.print(choosenNum1);
      Serial.print(choosenOperation);
      Serial.print(choosenNum2);
      Serial.print("=");
      Serial.print(result+"\n");
      break;
         
    }
    delay(700);
    
  }

}

void loop()
{
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Num1: ");
    lcd.setCursor(0,1);
    lcd.print("Num2: ");
    num1State();
    num2State();
    operationFunc();
    delay(5000);
  
}

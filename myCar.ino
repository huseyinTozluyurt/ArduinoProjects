#include <IRremote.h>
#define in1 2
#define in2 3
#define in3 4
#define in4 5
#define en1 9
#define en2 10

IRrecv IR(8);
void setup() {
  IR.enableIRIn();
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(en1,OUTPUT);
  pinMode(en2,OUTPUT);  
  Serial.begin(9600);
}

void loop() 
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  Serial.println(IR.decodedIRData.decodedRawData,HEX);
  if(IR.decode())
  {
    //pin 2
    if(IR.decodedIRData.decodedRawData==0xE718FF00)
    {
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);
      digitalWrite(in3,HIGH);
      digitalWrite(in4,LOW);
      delay(750);
    }
    //pin 4
    if(IR.decodedIRData.decodedRawData==0xF708FF00)
    {
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);
      digitalWrite(in3,LOW);
      digitalWrite(in4,HIGH);
      analogWrite(en1,150);
      analogWrite(en2,150);
      delay(750);
    }
    if(IR.decodedIRData.decodedRawData==0xA55AFF00)
    {
      digitalWrite(in1,LOW);
      digitalWrite(in2,HIGH);
      digitalWrite(in3,HIGH);
      digitalWrite(in4,LOW);
      analogWrite(en1,150);
      analogWrite(en2,150);
      delay(750);
    }  
    if(IR.decodedIRData.decodedRawData==0xAD52FF00)
    {
      digitalWrite(in1,LOW);
      digitalWrite(in2,HIGH);
      digitalWrite(in3,LOW);
      digitalWrite(in4,HIGH);
      delay(750);
    }
    IR.resume();
  }
}

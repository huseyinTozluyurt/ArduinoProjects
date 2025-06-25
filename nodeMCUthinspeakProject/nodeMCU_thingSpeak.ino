#include <ThingSpeak.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>

const char* ssid="";//put your ssid
const char* password="";//put your password

int val;
int pin=A0;

WiFiClient client;

unsigned long myChannelNum="";//Type channel number taken from thingspeak
const char* myWriteAPIKey="";//Enter API key taken from thingspeak
void setup() {
  Serial.begin(9600);
  delay(20);
  WiFi.begin(ssid,password);
  ThingSpeak.begin(client);

}

void loop() {
  val=analogRead(pin);
  val=map(val,0,1023,0,100);
  Serial.print("Pot: ");
  Serial.println(val);  
  delay(100);
  ThingSpeak.writeField(myChannelNum,1,val,myWriteAPIKey);
  delay(200);

}

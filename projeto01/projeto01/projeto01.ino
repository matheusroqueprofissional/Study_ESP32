#include <SPI.h>
#include <WiFi.h>

const char* ssid = "";
const char* pass = "";



void setup() {
Serial.begin(9600);
WiFi.begin(ssid,pass);

while(WiFi.status()!= WL_CONNECTED)
{
  Serial.println("conectando...");
  delay(1000);
}
Serial.println("conectado ao wifi: "+String(ssid));
}

void loop() {


}

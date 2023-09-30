#include<WiFi.h>

char* ssid = "MATH";
char* pass = "";

void setup(){
WiFi.begin(ssid,pass);
Serial.begin(9600);
while(WiFi.status()!=WL_CONNECTED)
{
Serial.println("tentando conectar");
delay(1000);
}

Serial.println("conectado a "+String(ssid));

}
void loop(){

}
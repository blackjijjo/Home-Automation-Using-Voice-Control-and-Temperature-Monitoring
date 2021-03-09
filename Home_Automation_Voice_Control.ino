/*This project code belongs to Jijjo */
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "8ecc4e56330946bf8e3d3bc29d244b62";
char ssid[] = "jijjo";
char pass[] = "12345678";
int a;
float b;
void setup()
{
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run(); 
  a=analogRead(A0);
 b=a/5;
Blynk.virtualWrite(V1,b);
}


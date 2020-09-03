#include <Arduino.h>

float temp;
int tempPin = 0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  temp = analogRead(tempPin);
  temp = temp * 0.48828125;
  temp = (temp - 32) * 5 / 9;
  Serial.print("TEMPRATURE = ");
  Serial.print(temp);
  Serial.print("*C");
  Serial.println();
  delay(100);
}
#include "dht.h"
#define dht_apin A2                                          // Analog Pin A2 sensor is connected to

int in1 = 9;                                                 // Pin input 9 to relay for UV
int sensor = 8;                                              // Pin output 8 from PIR
int led = 13;                                                // Indicator LED pin 13
unsigned long t = 0;

dht DHT;
 
void setup(){
 
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  digitalWrite(in1, HIGH);
  digitalWrite(led, LOW);
  
  while(millis()<13000){

    digitalWrite(led,HIGH);
    delay(50);
    digitalWrite(led,LOW);
    delay(50);
 
  }

  digitalWrite(led,LOW);
  pinMode(11, OUTPUT);                                       // Output pin 11 for dehumidifier relay
  delay(500); 

}
 
void loop(){
   
  digitalWrite(in1,HIGH);
  digitalWrite(led,LOW);
  
  if(digitalRead(sensor)==HIGH){

   t=millis();
   
   while(millis()<(t+5000)){

    digitalWrite(in1,LOW);
    digitalWrite(led,HIGH);
     
     if((millis()>(t+2300))&&(digitalRead(sensor)==HIGH)){

       t=millis();
      
      }
   }
  
  }
    DHT.read11(dht_apin);
    
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");                                     // Monitor humidity values inside the dehumidifier in real time

    if (DHT.humidity < 35){
      digitalWrite(11,LOW);                                    // Low means off. if the humidity is below 35, the relay will turn off.
      delay(2000);
    }

    else if (DHT.humidity > 50){
      digitalWrite(11,HIGH);                                   // High means on. if the humidity is above 50, the relay will turn on.
      delay(2000);
    }
    
    delay(5000);                                             // Wait 5 seconds before reading from sensor again. Change the value to change how often the data is read from the sensor.
  
}

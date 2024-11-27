#include <DHT.h>
#define DHTPIN 8
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);
int ledcooler=6;
int ledheater=7;

void setup() {
 Serial.begin(9600);
 Serial.println("DHT11 TEST !");
 dht.begin();
 pinMode(ledcooler,OUTPUT);
 pinMode(ledheater,OUTPUT);
 
 

}

void loop() {
  float humid=dht.readHumidity();
  float temp=dht.readTemperature();
  Serial.print("Humidity:");
  Serial.print(humid);
  Serial.println("%");
  delay(500);
  Serial.print("Temperature:");
  Serial.print(temp);
  Serial.println("*C");
  delay(500);
  if(temp>28){
    digitalWrite(ledcooler,HIGH);
    digitalWrite(ledheater,LOW);
    
  }
   if(temp<20){
    digitalWrite(ledheater,HIGH);
    digitalWrite(ledcooler,LOW);
    
  }
}

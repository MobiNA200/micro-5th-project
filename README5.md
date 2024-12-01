## آزمایش شماره 5 :کنترل دما و رطوبت با سنسور DHT11

در این آزمایش ، از سنسور DHT11 برای اندازهگیری دما و رطوبت محیط استفاده 
میکنیم و دو LED داریم که یکی از آنها وقتی که دما بیشتر از 28 درجه باشد روشن میشود و دیگری وقتی دما کمتر از 20 درجه باشد و همینطور همه داده های به دست آمده از طریق Monitor Serial هم نمایش داده میشوند. 

#### کد ما به شرح زیر است :
```c++
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
```

#### شماتیک مدار :
![shematic](./shematic/photos%20of%20shema/5-5.jpg "shema")

#### مدار :

![photo](./photos%20of%20projects/PotPlayerMini64_UWVCPr3e7L.png)

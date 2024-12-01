## آزمایش شماره 3 : کنترل LED بر اساس شدت نور محیط

 در این آزمایش مقدار شدت نور را با استفاده از فوتوسل میگیریم و با توجه به آن LED  روشن یا خاموش میشود.
 
  اگر 
شدت نور از حد مشخصی کمتر باشد، LEDروشن و در غیر این صورت 
خاموش میشود.

### کد به شرح زیر است :

```c++
int sensor;
int led = 13;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  sensor = analogRead(A0);
  Serial.print("sensor value : ");
  Serial.println(sensor);
  delay(300);

  if (sensor > 800) {
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}
```

شماتیک مدار :

![shematic](./shematic/photos%20of%20shema/5-3.jpg "shema")

همانطور که در عکس زیر میبینید وقتی نور محیط روشن است LED ما خاموش است

![photo](./photos%20of%20projects/PotPlayerMini64_ECuzuF3UxD.png)

و در این عکس میبینیم و قتی نور کم است یا همه جا کاملا تاریک است مثل اینجا که با انگشت جلوی سنسور را گرفته ایم LED ما روشن میشود.

![photo2](./photos%20of%20projects/PotPlayerMini64_JWElenI8hQ.png)
## آزمایش شماره 1 : نمایش اعداد با سون سگمنت(seven segment)

 در این آزمایش با استفاده از یک سون سگمنت و برد آردوینو 
میتوانیم اعداد صفر  تا 9 را مشاهده کنیم.

کد ما به شرح زیر است:
```c++
int sequance[][7] = {
  { 1, 1, 1, 1, 1, 1, 0 },
  { 0, 1, 1, 0, 0, 0, 0 },
  { 1, 1, 0, 1, 1, 0, 1 },
  { 1, 1, 1, 1, 0, 0, 1 },  //3
  { 0, 1, 1, 0, 0, 1, 1 },  //4
  { 1, 0, 1, 1, 0, 1, 1 },
  { 1, 0, 1, 1, 1, 1, 1 },
  { 1, 1, 1, 0, 0, 0, 0 },
  { 1, 1, 1, 1, 0, 1, 1 },
};
void printNumber(int number) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(1 + i, sequance[number][i]);
  }
}
void setup() {
  for (int j = 0; j < 7; j++) {
    pinMode(j, OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 10; i++) {
    printNumber(i);
    delay(1000);
  }
}

```
شماتیک مدار :

![shematic](./shematic/photos%20of%20shema/5-1.jpg "shema")

نحوده نمایش اعداد در seven segment :

![gif](/videos%20of%20projects/num7seg-ezgif.com-video-to-gif-converter.gif)


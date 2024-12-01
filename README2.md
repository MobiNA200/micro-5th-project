## آزمایش شماره 2 : نمایش حروف انگلیسی با سون سگمنت (seven segment)

در این آزمایش ما با توجه به کدی که دادیم میتوانیم یک سری حروف الفبای انگلیسی را در سون سگمنت مشاهده کنیم. (حروف A , C , E , F , H , L , P)

کد ما به شرح زیر است :
```c++

int sequance[][7] = {
  { 1, 1, 1, 0, 1, 1, 1 },//A
  { 1, 0, 0, 1, 1, 1, 0 },//C
  { 1, 0, 0, 1, 1, 1, 1 },//E
  { 1, 0, 0, 0, 1, 1, 1 },//F
  { 0, 1, 1, 0, 1, 1, 1 },//H
  { 0, 0, 0, 1, 1, 1, 0 },//L
  { 1, 1, 0, 0, 1, 1, 1 },//P
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
  for (int i = 0; i < 8; i++) {
    printNumber(i);
    delay(1000);
  }
}
```

شماتیک مدار :

![shematic](/shematic/photos%20of%20shema/5-1.jpg "shema")

و در گیف زیر میتوانید نحوه نمایش آنرا ببینید :

![gif](./videos%20of%20projects/char7seg-ezgif.com-video-to-gif-converter.gif)

## آزمایش شماره 4 : پیانو دیجیتال

در این آزمایش ما چهار دکمه داریم که با فشردن هرکدام از آنها یک نت متفاوت از بلندگو پخش میشود.

#### کد ما به شرح زیر است :


```c++
#define T_C 262
#define T_D 294
#define T_E 330
#define T_F 349
#define T_G 392
#define T_A 440
#define T_B 493
const int A = 5;
const int B = 6;
const int C = 7;
const int D= 8;
const int Burr = 11;


void setup() {
 
    pinMode(A, INPUT);
    digitalWrite(A, HIGH);
    pinMode(B, INPUT);
    digitalWrite(B, HIGH);
    pinMode(C, INPUT);
    digitalWrite(C, HIGH);
    pinMode(D, INPUT);
    digitalWrite(D, HIGH);
  }


void loop() {

  while (digitalRead(A) == LOW) {
    tone(Burr,T_C);
  }
  while (digitalRead(B) == LOW) {
    tone(Burr,T_D);
  }
  while (digitalRead(C) == LOW) {
    tone(Burr,T_E);
  }
  while (digitalRead(D) == LOW) {
    tone(Burr,T_F);
  }
  noTone(Burr);
}
```

#### شماتیک مدار :

![shematic](./shematic/photos%20of%20shema/5-4.jpg "shema")

#### مدار :

![photo](./photos%20of%20projects/PotPlayerMini64_3Glaw0yyH7.png)
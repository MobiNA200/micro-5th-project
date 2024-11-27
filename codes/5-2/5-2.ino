
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


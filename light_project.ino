int led1 = 11; // green
int led2 = 10; // red
int led3 = 9; // blue

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  analogWrite(led2, 0);
  analogWrite(led3, 1);
  for (int i = 0; i < 7; i ++) {
    for (int j = 1; j < 51; j ++) {
      analogWrite(led1, j);
      delay(1250 / 50);
    }
    for (int j = 0; j < 50; j ++) {
      analogWrite(led1, 50 - j);
      delay(1250 / 50);
    }
  }

  for (int i = 1; i < 255; i ++) {
    analogWrite(led1, i);
    analogWrite(led2, i / 3);
    analogWrite(led3, i / 2);
    delay(8500 / 255);
  }


  for (int maxi = 15; maxi < 255; maxi += 30) {
    // 2.5秒钟一次亮灭
    for (int i = 0; i <= maxi; i ++) {
      analogWrite(led1, i);
      analogWrite(led2, (255 - i) / 10);
      analogWrite(led3, (255 - i) / 5);
      delay(1250 / maxi);
    }
    for (int i = maxi; i >= 0; i --) {
      analogWrite(led1, i);
      analogWrite(led2, (255 - i) / 10);
      analogWrite(led3, (255 - i) / 5);
      delay(1250 / maxi);
    }
  }

  for (int maxi = 255; maxi > 15; maxi -= 60) {
    // 2.5秒钟一次亮灭
    for (int i = 0; i <= maxi; i ++) {
      analogWrite(led3, i);
      analogWrite(led1, (255 - i) / 10);
      analogWrite(led2, (255 - i) / 5);
      delay(1250 / maxi);
    }
    for (int i = maxi; i >= 0; i --) {
      analogWrite(led3, i);
      analogWrite(led1, (255 - i) / 10);
      analogWrite(led2, (255 - i) / 5);
      delay(1250 / maxi);
    }
  }
  delay(1000);
  analogWrite(led1, 255);
  analogWrite(led2, 255);
  analogWrite(led3, 255);
  for (int i = 0; i < 256; i ++) {
    analogWrite(led2, 255 - i);
    delay(10000/256);
  }
  for (int i = 0; i < 256; i ++) {
    analogWrite(led3, 255 - i);
    delay(10000/256);
  }
  for (int i = 0; i < 256; i ++) {
    analogWrite(led1, 255 - i);
    delay(10000/256);
  }
  delay(60000);

}

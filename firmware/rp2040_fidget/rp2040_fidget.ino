int BUT1 = D0;
int BUT2 = D1;
int BUT3 = D2;
int BUT4 = D3;
//int myButtons[4] = {BUT1, BUT2, BUT3, BUT4};

int LED1 = D4;
int LED2 = D5;
int LED3 = D6;
int LED4 = D7;
//int myLED[4] = {LED1, LED2, LED3, LED4};

void setup() {
  // put your setup code here, to run once:
  pinMode(BUT1, INPUT);
  pinMode(BUT2, INPUT);
  pinMode(BUT3, INPUT);
  pinMode(BUT4, INPUT);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  long startTime = millis();

}

void loop() {
  // put your main code here, to run repeatedly:
  long but1time = 0;
  long but2time = 0;
  long but3time = 0;
  long but4time = 0;

  // turn on 1 by 1, triggered by holding BUT1
  if (digitalRead(BUT1) == HIGH) {
    but1time++;
    digitalWrite(LED1, HIGH);

    if (but1time >= 800) {
      digitalWrite(LED2, HIGH);
    }

    if (but1time >= 1600) {
      digitalWrite(LED3, HIGH);
    }

    if (but1time >= 2400) {
      digitalWrite(LED4, HIGH);
    }

  }
  else {
    digitalWrite(LED1, LOW);
  }

  // button 2, cycles through buttons
  if (digitalRead(BUT2) == HIGH) {
    but2time++;
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);

    if (but2time >= 800) {
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, HIGH);
    }

    if (but2time >= 1600) {
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, HIGH);
    }

    if (but2time >= 2400) {
     digitalWrite(LED4, LOW);
     digitalWrite(LED1, HIGH);
    }

  }
  else {
    digitalWrite(LED2, LOW);
  }

  // button 3, the only half normal one
   if (digitalRead(BUT3) == HIGH) {
    but3time = millis();
    digitalWrite(LED3, HIGH);
    delay(1000);
    digitalWrite(LED3, LOW);
    delay(1000);

    // morse code HELLO WORLD: H
    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);
    delay(200);

    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);
    delay(200);

    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);
    delay(200);

    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);
    delay(1000);

    // E
    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);
    delay(1000);
    
    // L (tich te tich tich .-..)
    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);
    delay(200);
    // te
    digitalWrite(LED3, HIGH);
    delay(800);
    digitalWrite(LED3, LOW);
    delay(200);
    
    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);
    delay(200);

    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);
    delay(1000);

    // second L
    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);
    delay(200);
    // te
    digitalWrite(LED3, HIGH);
    delay(800);
    digitalWrite(LED3, LOW);
    delay(200);
    
    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);
    delay(200);

    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);
    delay(1000);

    // O
    digitalWrite(LED3, HIGH);
    delay(800);
    digitalWrite(LED3, LOW);
    delay(200);

    digitalWrite(LED3, HIGH);
    delay(800);
    digitalWrite(LED3, LOW);
    delay(200);

    digitalWrite(LED3, HIGH);
    delay(800);
    digitalWrite(LED3, LOW);
    delay(1000);

    // W
    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);
    delay(200);

    digitalWrite(LED3, HIGH);
    delay(800);
    digitalWrite(LED3, LOW);
    delay(200);

    digitalWrite(LED3, HIGH);
    delay(800);
    digitalWrite(LED3, LOW);
    delay(1000);

    // O
    digitalWrite(LED3, HIGH);
    delay(800);
    digitalWrite(LED3, LOW);
    delay(200);

    digitalWrite(LED3, HIGH);
    delay(800);
    digitalWrite(LED3, LOW);
    delay(200);

    digitalWrite(LED3, HIGH);
    delay(800);
    digitalWrite(LED3, LOW);
    delay(1000);

    // R
    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);
    delay(200);

    digitalWrite(LED3, HIGH);
    delay(800);
    digitalWrite(LED3, LOW);
    delay(200);

    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);
    delay(1000);

    // L

    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);
    delay(200);
    // te
    digitalWrite(LED3, HIGH);
    delay(800);
    digitalWrite(LED3, LOW);
    delay(200);
    
    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);
    delay(200);

    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);
    delay(1000);

    // D
    digitalWrite(LED3, HIGH);
    delay(800);
    digitalWrite(LED3, LOW);
    delay(200);

    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);
    delay(200);

    digitalWrite(LED3, HIGH);
    delay(400);
    digitalWrite(LED3, LOW);

  }
  else {
    digitalWrite(LED3, LOW);
  }

  // button 4
   if (digitalRead(BUT4) == HIGH) {
    but4time = millis();
    digitalWrite(LED4, HIGH);

    if (abs(but4time - but3time) <= 1000) {
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);
      delay(500);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
      delay(500);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);
      delay(500);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
      delay(500);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);
    }
  }
  else {
    digitalWrite(LED4, LOW);
  }


}




#define PIN_BUZZER 3

#define PIN_LED1 13
#define PIN_LED2 12
#define PIN_LED3 11
#define PIN_LED4 10

#define PIN_BTN1 A1
#define PIN_BTN2 A2
#define PIN_BTN3 A3

#define ON LOW
#define OFF HIGH

void shortBeep() {
  digitalWrite(PIN_BUZZER, ON);
  delay(100);  
  digitalWrite(PIN_BUZZER, OFF);
}

void setup() {
  pinMode(PIN_BUZZER,OUTPUT);

  pinMode(PIN_LED1, OUTPUT);
  pinMode(PIN_LED2, OUTPUT);
  pinMode(PIN_LED3, OUTPUT);
  pinMode(PIN_LED4, OUTPUT);

  shortBeep();
}

void loop() {
  int val = digitalRead(PIN_BTN1);
  if (val==ON) {
    digitalWrite(PIN_LED1, ON);
    shortBeep();
  } else {
    digitalWrite(PIN_LED1, OFF);
  }

  digitalWrite(PIN_LED2, digitalRead(PIN_BTN2));
  digitalWrite(PIN_LED3, digitalRead(PIN_BTN3));
  digitalWrite(PIN_LED4, OFF);
}


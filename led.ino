#define ledblue 2
#define ledred 4
#define ledgreen 5
#define ledyellow 3
#define buzzer 8

void setup() {
  pinMode(ledblue, OUTPUT);
  pinMode(ledred, OUTPUT);
  pinMode(ledgreen, OUTPUT);
  pinMode(ledyellow, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
}

void loop() {
  tone(buzzer, 1000);
  delay(10);
  noTone(buzzer);
  delay(10);

  digitalWrite(ledblue, HIGH);
  delay(10);
  digitalWrite(ledblue, LOW);
  digitalWrite(ledred, HIGH);
  delay(10);
  digitalWrite(ledred, LOW);
  digitalWrite(ledgreen, HIGH);
  delay(10);
  digitalWrite(ledgreen, LOW);
  digitalWrite(ledyellow, HIGH);
  delay(10);
  digitalWrite(ledyellow, LOW);
  delay(10);
  }

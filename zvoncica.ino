int BTNPIN = 2;
int SPKPIN = 5;
int MOVEMENT_SENSOR = 8;
int MOVEMENT_SENSOR2 = 12;

long counter = 200000;

void setup() {
  pinMode(SPKPIN, OUTPUT);
  pinMode(BTNPIN, INPUT);
  //Serial.begin(19200);
  Serial.println("Starting.");
}

void loop() {
 if (digitalRead(MOVEMENT_SENSOR2) == HIGH) {
      Serial.println("drugi senzor");
 }
 
 if (digitalRead(MOVEMENT_SENSOR) == HIGH) {
      Serial.println("prvi senzor");
 }
 delay(500);
  counter++;
  if (digitalRead(BTNPIN) == HIGH) {
    taster_za_zvono();
  }
  else {
    analogWrite(SPKPIN, 0);
  }
  if (digitalRead(MOVEMENT_SENSOR) == HIGH && counter > 200000) {
    Serial.println("prvi senzor");

    if (digitalRead(MOVEMENT_SENSOR2) == HIGH) {
      Serial.println("drugi senzor");
      senzor_pokreta();
      Serial.println(counter);
      counter = 0;
    }
    delay(1000);

  }
  else {
    analogWrite(SPKPIN, 0);
  }
}
void senzor_pokreta() {
  analogWrite(SPKPIN, 250);
  delay(50);
  analogWrite(SPKPIN, 0);
  delay(50);
  analogWrite(SPKPIN, 250);
  delay(50);
  analogWrite(SPKPIN, 0);
  delay(50);
  analogWrite(SPKPIN, 250);
  delay(50);
  analogWrite(SPKPIN, 0);
  delay(300);
  analogWrite(SPKPIN, 250);
  delay(50);
  analogWrite(SPKPIN, 0);
  delay(50);
  analogWrite(SPKPIN, 250);
  delay(50);
  analogWrite(SPKPIN, 0);
  delay(50);
  analogWrite(SPKPIN, 250);
  delay(50);
  analogWrite(SPKPIN, 0);

}
void taster_za_zvono() {
  analogWrite(SPKPIN, 200);
  delay(300);
  analogWrite(SPKPIN, 0);
  delay(100);
  analogWrite(SPKPIN, 200);
  delay(300);
  analogWrite(SPKPIN, 0);
  delay(300);

  analogWrite(SPKPIN, 200);

  Serial.println("stisnuo");
  delay(100);
  analogWrite(SPKPIN, 0);
  delay(100);
  analogWrite(SPKPIN, 150);
  delay(100);
  analogWrite(SPKPIN, 0);
  delay(100);
  analogWrite(SPKPIN, 200);
  analogWrite(SPKPIN, 200);

  Serial.println("stisnuo");
  delay(100);
  analogWrite(SPKPIN, 0);
  delay(100);
  analogWrite(SPKPIN, 150);
  delay(100);
  analogWrite(SPKPIN, 0);
  delay(100);
  analogWrite(SPKPIN, 200);

  delay(200);
}


int pinLed = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLed, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLed, HIGH);
  delay(15000);
  Serial.print('HIGH');

  digitalWrite(pinLed, LOW);
  delay(20000);
  Serial.print('LOW');

  digitalWrite(pinLed, HIGH);
  delay(15000);
  Serial.print('HIGH');

  digitalWrite(pinLed, LOW);
  delay(5000);
  Serial.print('LOW');

}
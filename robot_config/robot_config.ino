//importar libreria servo
#include <Servo.h>

//crear objetos tipo servo
Servo left_foot;
Servo right_foot;
Servo left_leg;
Servo right_leg;

//configuracion de setup
void setup() {
  Serial.begin(9600);

  left_foot.attach(12);
  right_foot.attach(6);
  left_leg.attach(10);
  right_leg.attach(9);

  delay(3000);
  left_foot.write(90);
  delay(500);
  left_leg.write(90);
  delay(500);
  right_foot.write(90);
  delay(500);
  right_leg.write(90);
  delay(500);

  left_leg.write(70);
  delay(500);
  left_leg.write(110);
  delay(500);
  left_leg.write(90);
  delay(500);
  
  //configuracion de sensores 
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
}


//configuracion del loop (detector de obstaculos)
void loop() {
  // put your main code here, to run repeatedly:
  int irl = analogRead(A0);
  int irr = analogRead(A1);
  Serial.println(" - ");
  Serial.println(irr);

  digitalWrite(5, HIGH);
  delayMicroseconds(10);
  digitalWrite(5, LOW);

  long duration = pulseIn(4, HIGH);
  long distance = 0.034 * duration / 2;
  Serial.println("Distance: ");
  Serial.println(distance);

  delay(100);
}

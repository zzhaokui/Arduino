float checkdistance() {

  digitalWrite(5, LOW);
  delayMicroseconds(2);

  digitalWrite(5, HIGH);
  delayMicroseconds(10);

  digitalWrite(5, LOW);
  float distance = pulseIn(4, HIGH) / 58.00;
  delay(10);

  return distance;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(checkdistance());
  Serial.println(" cm");
  delay(500);
}

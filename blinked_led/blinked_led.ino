int d_time = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, HIGH);
  delay(d_time);
  digitalWrite(7, LOW);
  delay(d_time);
}

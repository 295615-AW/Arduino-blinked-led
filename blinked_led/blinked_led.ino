int d_time = 1000;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(d_time);
  digitalWrite(LED_BUILTIN, LOW);
  delay(d_time);
}

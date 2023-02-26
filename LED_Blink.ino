void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
 }
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  dalay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  dalay(1000);
 }
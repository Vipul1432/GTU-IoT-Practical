int gas_level;
void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}
void loop() {
  gas_level = analogRead(A0);
  Serial.print("Gas Level : ");
  Serial.println(gas_level);
  delay(500);  
}

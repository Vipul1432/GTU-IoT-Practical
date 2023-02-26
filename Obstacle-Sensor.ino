int obstacle_pres=0;
void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  obstacle_pres = digitalRead(2);
  if (obstacle_pres == LOW)
  {
     Serial.print("Obstacle is present");
     digitalWrite(13,HIGH);
  }
  else
  {
     digitalWrite(13,LOW);
  }
  delay(1000);  
}

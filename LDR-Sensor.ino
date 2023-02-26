void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int light_intensity = analogRead(A0);
  if (light_intensity > 800)
  {
    Serial.println(“Darker");
  }
  else if (light_intensity < 500)
  {
    Serial.println(“Too Bright");
  }
  delay(1000);
}

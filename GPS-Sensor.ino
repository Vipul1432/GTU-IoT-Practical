#include <TinyGPS++.h>
#include <SoftwareSerial.h>
static const int RXPin = 3, TXPin = 2;
static const uint32_t GPSBaud = 9600;
TinyGPSPlus gps;

SoftwareSerial ss(RXPin, TXPin);

void setup()
{
 Serial.begin(115200);
 ss.begin(GPSBaud);
}
void loop()
{
 while (ss.available() > 0)
   gps.encode(ss.read());
   displayInfo();

   if (millis()>5000 && gps.charsProcessed()<10)
   {
      Serial.println("No GPS detected: Check wiring.");
      while(true);
   }
}
void displayInfo() {
  Serial.print("Location: ");
  if (gps.location.isValid())
  {
    Serial.print(gps.location.lat(), 6);
    Serial.print(",");
    Serial.print(gps.location.lng(), 6);
  }
  Serial.println();
}

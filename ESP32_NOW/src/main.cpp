#include "WiFi.h"

void setup ()
{
  Serial.begin(115200);
  WiFi.mode(WIFI_MODE_STA);//make the esp32 as the station mode
  Serial.print("MAC Address;");//print the esp32 mac address in the serial monitor
  Serial.print(WiFi.macAddress());
  Serial.print("mac address in updated");
}
void loop()
{
  
}
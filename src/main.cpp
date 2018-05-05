#include <Arduino.h>
#include <Ticker.h>

#define LED D4  // WEMOS D1 mini

Ticker myTicker;

void myTickerCallback()
{
  digitalWrite(LED,!digitalRead(LED));
}

void setup()
{
  Serial.begin(115200);
  delay(3000); // wait for serial monitor/console
  Serial.println( "\n\nESP8266 sample - ticker" );

  pinMode(LED,OUTPUT);
  myTicker.attach( 1.0, myTickerCallback );
}

void loop()
{
  yield();
}

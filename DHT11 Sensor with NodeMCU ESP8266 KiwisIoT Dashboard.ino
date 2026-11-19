#include <KiwisIoT.h>
#include <DHT.h>

const char* ssid  = "YOUR_WIFI_NAME";
const char* pass  = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);

#define DHT_PIN D5
#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(9600);

  dht.begin();
  kiwisiot.begin();

  Serial.println("DHT11 Monitor Started");
}

void loop() {
  kiwisiot.run();

  float humidity = dht.readHumidity();
  float temperatureC = dht.readTemperature();

  if (!isnan(humidity) && !isnan(temperatureC)) {
    Serial.print("Temperature = ");
    Serial.print(temperatureC);
    Serial.println(" °C");

    Serial.print("Humidity = ");
    Serial.print(humidity);
    Serial.println(" %");

    kiwisiot.send("1", temperatureC);
    kiwisiot.send("2", humidity);
  } else {
    Serial.println("Failed to read from DHT11 sensor");
  }

  delay(2000);
}
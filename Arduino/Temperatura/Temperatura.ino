#include <DHT.h>
#include <DHT_U.h>

int SENSOR = 2;
int HUMEDAD;
int TEMPERATURA;

DHT dht(SENSOR,DHT22);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  TEMPERATURA = dht.readTemperature();
  HUMEDAD = dht.readHumidity();
  Serial.print("Humedad: ");
  Serial.print(HUMEDAD);
  Serial.print(" Temperatura: ");
  Serial.println(TEMPERATURA);
  delay(500);

}

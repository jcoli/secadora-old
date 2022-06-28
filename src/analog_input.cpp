/**
Version: 0a
Tecnocoli - 02/2022
jcoli - Jeferson Coli - jcoli@teccnocoli.com.br
Mega2560 - Dryer
**/
#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <DHT.h>
#include <SD.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

#include "io_defines.h"
#include "defines.h"

#define DHTTYPE DHT11
DHT dht(DHT_PIN, DHTTYPE);

void analog_input_begin();
void readValues();

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors_ds18b20(&oneWire);
// DeviceAddress ds18b20_ad;
//28 62 B0 77 91 0D 02 64 -- Quente
DeviceAddress Probe01 = { 0x28, 0x62, 0xB0, 0x77, 0x91, 0x0D, 0x02, 0x64 };
//28 6A 2A 77 91 13 02 FF -- bulbo -- externo
DeviceAddress Probe02 = { 0x28, 0x6A, 0x2A, 0x77, 0x91, 0x13, 0x02, 0xFF };

extern float tempProb1;
extern float tempProb2;
extern float hum_dht11;
extern float temp_dht11;;

void analog_input_begin(){
  sensors_ds18b20.begin();
  sensors_ds18b20.setResolution(Probe01, 12);
  sensors_ds18b20.setResolution(Probe02, 12);
   Serial.print(sensors_ds18b20.getDeviceCount(), DEC);
   Serial.println(" sensors_ds18b20");
  dht.begin();
  delay(200);
  readValues();  

}


void readValues(){
  sensors_ds18b20.requestTemperatures();
  
  tempProb1 = sensors_ds18b20.getTempC(Probe01);
  tempProb2 = sensors_ds18b20.getTempC(Probe02);
  hum_dht11 = dht.readHumidity();
  temp_dht11 = dht.readTemperature();
  if (tempProb1>100){

  }
  
  
}
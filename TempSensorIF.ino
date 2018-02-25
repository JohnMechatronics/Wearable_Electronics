#include <OneWire.h>
#include <DallasTemperature.h>
 

#define ONE_WIRE_BUS 2
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
 
void setup(void)
{
  // start serial port
  Serial.begin(9600);
  Serial.println("Dallas Temperature IC Control Library Demo");

  // Start up the library
  sensors.begin();
}
 
 
void loop(void)
{
  // call sensors.requestTemperatures() to issue a global temperature
  // request to all devices on the bus
  
  sensors.requestTemperatures(); // Send the command to get temperatures
  int Temp = sensors.getTempCByIndex(0);// Why "byIndex"? 
    // You can have more than one IC on the same bus. 
    // 0 refers to the first IC on the wire

  if (Temp >0 && Temp < 15){
    Serial.print(Temp);
    Serial.println(" - is greater than 0 and less than 15"); 
    } else if (Temp >14 && Temp < 25){
     Serial.println(Temp); 
    Serial.println(" - is greater than 14 and less than 25"); 
    } else if (Temp >24 && Temp < 35){
    Serial.print(Temp); 
    Serial.println(" - is greater than 24 and less than 35"); 
    } else {
      Serial.println(Temp + " is out side of the range"); 
    }

    
  
    delay(1000);
}

